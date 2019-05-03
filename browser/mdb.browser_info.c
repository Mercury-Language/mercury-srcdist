/*
** Automatically generated from `browser_info.m'
** by the Mercury compiler,
** version rotd-2019-05-03
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


// :- module mdb.browser_info.
// :- implementation.

/*
INIT mercury__mdb__browser_info__init
ENDINIT
*/

#include "mdb.browser_info.mih"
#include "mdb.browser_info.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_term.mih"
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
#include "enum.mih"
#include "getopt.mih"
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




static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2;

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3];

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1];

static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0;

static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0;

static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7];

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7];

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_browser_info_0_0[7];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[7];

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[7];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1];

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3;

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4];

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4];

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5];

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5];

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_caller_params_0_0[5];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1];

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1;

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2];

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2];

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_0[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_1[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_1[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_down_dir_0[2];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_down_dir_0[2];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_down_dir_0[2];

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4];

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1];

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1;

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2];

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3];

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1[3];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1[2];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2];

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2;

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0[4];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4];

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3;

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4];

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4];

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1];

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_setting_0_4[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0[4];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5];

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0;

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1;

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2];

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2];

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1;

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2;

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3;

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0[3];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_1[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1;

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_2[1];

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2;

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_0[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_1[1];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_2[1];

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_up_down_dir_0[3];

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_up_down_dir_0[3];

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_up_down_dir_0[3];

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word D_5,
  MR_String S_6);

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word D_5,
  MR_Integer I_6);

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_5,
  MR_String * HeadVar__2_2);

static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
  MR_String * HeadVar__2_2);

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
  MR_Word * HeadVar__1_1);

static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void);

static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void);

static void MR_CALL 
mdb__browser_info__get_web_browser_cmd_from_mdb_2_p_0(
  MR_Word Browser_3,
  MR_String * Command_4);

static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
  MR_Word Browser_3,
  MR_String * FileName_4);

static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
  MR_Word Browser_3,
  MR_String * Command_4);

static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
  MR_Word P_7,
  MR_Word B_8,
  MR_Word A_9,
  MR_Word Format_10,
  MR_Word STATE_VARIABLE_Browser_0_12,
  MR_Word * STATE_VARIABLE_Browser_13);

static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Lines_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21);

static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Width_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21);

static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word NPr_16,
  MR_Word V_17,
  MR_Integer Size_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21);

static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Depth_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21);

static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
  MR_String CallerOpt_4,
  MR_Word CallerParams_5);

static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
  MR_String CmdCallerOpt_4,
  MR_Word FormatParams_5);

static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
  MR_Word Debugger_7,
  MR_Word Info_8,
  MR_Word Caller_9,
  MR_String CallerName_10);

static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
  MR_Word Debugger_9,
  MR_Word Info_10,
  MR_Word Caller_11,
  MR_String CallerName_12,
  MR_Word Format_13,
  MR_String FormatName_14);

static void MR_CALL 
mdb__browser_info__write_down_path_loop_4_p_0(
  MR_Word Debugger_5,
  MR_Word Dirs_6);

static void MR_CALL 
mdb__browser_info__set_web_browser_cmd_from_mdb_3_p_0(
  MR_String Command_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7);

static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7);

static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
  MR_String Command_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7);

static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word F_2,
  MR_Word Pr_3,
  MR_Word V_4,
  MR_Word NPr_5,
  MR_Word Setting_6,
  MR_Word STATE_VARIABLE_Params_0_7,
  MR_Word * STATE_VARIABLE_Params_8);

static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Params_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____down_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____down_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__browser_info____Unify____up_down_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__browser_info____Compare____up_down_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box mdb__browser_info_scalar_common_1[1][3];

static /* final */ const MR_Box mdb__browser_info_scalar_common_2[6][2];

static /* final */ const MR_Box mdb__browser_info_scalar_common_3[5][4];

static /* final */ const MR_Box mdb__browser_info_scalar_common_4[3][5];

static /* final */ const MR_Box mdb__browser_info_scalar_common_5[1][7];

static /* final */ const MR_Box mdb__browser_info_scalar_common_6[4][1];


/* sealed */ struct mdb__browser_info__vector_common_type_7_0_s {
  const MR_String mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mdb__browser_info__vector_common_type_7_0_s mdb__browser_info_vector_common_7[8];



static /* final */ const MR_Box mdb__browser_info_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_stream_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_stream_info_0))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1)),
    ((MR_Box) (&mdb__browser_info_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_maybe_option_table_1)),
    ((MR_Box) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_3[5][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__browser_info_scalar_common_2[0])),
    ((MR_Box) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 25))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 25))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 80)),
    ((MR_Box) ((MR_Integer) 5))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_4[3][5] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[1]))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[2]))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[3])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[3])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[4])),
    ((MR_Box) (&mdb__browser_info_scalar_common_3[3]))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_5[1][7] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__browser_info_scalar_common_4[0])),
    ((MR_Box) (&mdb__browser_info_scalar_common_4[1])),
    ((MR_Box) (&mdb__browser_info_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 20)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mdb__browser_info_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "flat"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "pretty"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "raw_pretty"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "verbose"))
  },
};


static /* final */ const struct mdb__browser_info__vector_common_type_7_0_s mdb__browser_info_vector_common_7[8] = {
  /* row 0 */   {     (MR_String) "flat" },
  /* row 1 */   {     (MR_String) "raw_pretty" },
  /* row 2 */   {     (MR_String) "verbose" },
  /* row 3 */   {     (MR_String) "pretty" },
  /* row 4 */   {     (MR_String) "flat" },
  /* row 5 */   {     (MR_String) "raw_pretty" },
  /* row 6 */   {     (MR_String) "verbose" },
  /* row 7 */   {     (MR_String) "pretty" },
};


#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.browser_info.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 460 "browser_info.m"
void 
ML_BROWSE_set_depth_from_mdb(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Depth_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
#line 460 "browser_info.m"
{
#line 460 "browser_info.m"
	mdb__browser_info__set_depth_from_mdb_10_p_0((MR_Word) P_11, (MR_Word) B_12, (MR_Word) A_13, (MR_Word) F_14, (MR_Word) Pr_15, (MR_Word) V_16, (MR_Word) NPr_17, (MR_Integer) Depth_18, (MR_Word) STATE_VARIABLE_Browser_0_20, (MR_Word *) STATE_VARIABLE_Browser_21);
}

#line 471 "browser_info.m"
void 
ML_BROWSE_set_size_from_mdb(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word NPr_16,
  MR_Word V_17,
  MR_Integer Size_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
#line 471 "browser_info.m"
{
#line 471 "browser_info.m"
	mdb__browser_info__set_size_from_mdb_10_p_0((MR_Word) P_11, (MR_Word) B_12, (MR_Word) A_13, (MR_Word) F_14, (MR_Word) Pr_15, (MR_Word) NPr_16, (MR_Word) V_17, (MR_Integer) Size_18, (MR_Word) STATE_VARIABLE_Browser_0_20, (MR_Word *) STATE_VARIABLE_Browser_21);
}

#line 482 "browser_info.m"
void 
ML_BROWSE_set_width_from_mdb(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Width_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
#line 482 "browser_info.m"
{
#line 482 "browser_info.m"
	mdb__browser_info__set_width_from_mdb_10_p_0((MR_Word) P_11, (MR_Word) B_12, (MR_Word) A_13, (MR_Word) F_14, (MR_Word) Pr_15, (MR_Word) V_16, (MR_Word) NPr_17, (MR_Integer) Width_18, (MR_Word) STATE_VARIABLE_Browser_0_20, (MR_Word *) STATE_VARIABLE_Browser_21);
}

#line 493 "browser_info.m"
void 
ML_BROWSE_set_lines_from_mdb(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Lines_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
#line 493 "browser_info.m"
{
#line 493 "browser_info.m"
	mdb__browser_info__set_lines_from_mdb_10_p_0((MR_Word) P_11, (MR_Word) B_12, (MR_Word) A_13, (MR_Word) F_14, (MR_Word) Pr_15, (MR_Word) V_16, (MR_Word) NPr_17, (MR_Integer) Lines_18, (MR_Word) STATE_VARIABLE_Browser_0_20, (MR_Word *) STATE_VARIABLE_Browser_21);
}

#line 503 "browser_info.m"
void 
ML_BROWSE_set_format_from_mdb(
  MR_Word P_7,
  MR_Word B_8,
  MR_Word A_9,
  MR_Word Format_10,
  MR_Word STATE_VARIABLE_Browser_0_12,
  MR_Word * STATE_VARIABLE_Browser_13)
#line 503 "browser_info.m"
{
#line 503 "browser_info.m"
	mdb__browser_info__set_format_from_mdb_6_p_0((MR_Word) P_7, (MR_Word) B_8, (MR_Word) A_9, (MR_Word) Format_10, (MR_Word) STATE_VARIABLE_Browser_0_12, (MR_Word *) STATE_VARIABLE_Browser_13);
}

#line 514 "browser_info.m"
void 
ML_BROWSE_get_xml_browser_cmd_from_mdb(
  MR_Word Browser_3,
  MR_String * Command_4)
#line 514 "browser_info.m"
{
#line 514 "browser_info.m"
	mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0((MR_Word) Browser_3, (MR_String *) Command_4);
}

#line 528 "browser_info.m"
void 
ML_BROWSE_set_xml_browser_cmd_from_mdb(
  MR_String Command_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
#line 528 "browser_info.m"
{
#line 528 "browser_info.m"
	mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0((MR_String) Command_4, (MR_Word) STATE_VARIABLE_Browser_0_6, (MR_Word *) STATE_VARIABLE_Browser_7);
}

#line 540 "browser_info.m"
void 
ML_BROWSE_get_xml_tmp_filename_from_mdb(
  MR_Word Browser_3,
  MR_String * FileName_4)
#line 540 "browser_info.m"
{
#line 540 "browser_info.m"
	mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0((MR_Word) Browser_3, (MR_String *) FileName_4);
}

#line 554 "browser_info.m"
void 
ML_BROWSE_set_xml_tmp_filename_from_mdb(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
#line 554 "browser_info.m"
{
#line 554 "browser_info.m"
	mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0((MR_String) FileName_4, (MR_Word) STATE_VARIABLE_Browser_0_6, (MR_Word *) STATE_VARIABLE_Browser_7);
}

#line 566 "browser_info.m"
void 
ML_BROWSE_get_web_browser_cmd_from_mdb(
  MR_Word Browser_3,
  MR_String * Command_4)
#line 566 "browser_info.m"
{
#line 566 "browser_info.m"
	mdb__browser_info__get_web_browser_cmd_from_mdb_2_p_0((MR_Word) Browser_3, (MR_String *) Command_4);
}

#line 580 "browser_info.m"
void 
ML_BROWSE_set_web_browser_cmd_from_mdb(
  MR_String Command_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
#line 580 "browser_info.m"
{
#line 580 "browser_info.m"
	mdb__browser_info__set_web_browser_cmd_from_mdb_3_p_0((MR_String) Command_4, (MR_Word) STATE_VARIABLE_Browser_0_6, (MR_Word *) STATE_VARIABLE_Browser_7);
}

#line 596 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_yes(void)
#line 596 "browser_info.m"
{
#line 596 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_yes_0_f_0();
	return ret_value;
}

#line 602 "browser_info.m"
MR_Word 
ML_BROWSE_mercury_bool_no(void)
#line 602 "browser_info.m"
{
#line 602 "browser_info.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__browser_info__mercury_bool_no_0_f_0();
	return ret_value;
}

#line 635 "browser_info.m"
void 
ML_BROWSE_init_persistent_state(
  MR_Word * State_2)
#line 635 "browser_info.m"
{
#line 635 "browser_info.m"
	mdb__browser_info__init_persistent_state_1_p_0((MR_Word *) State_2);
}

#line 703 "browser_info.m"
void 
ML_BROWSE_get_num_io_actions(
  MR_Word Browser_3,
  MR_Integer * NumIOActions_4)
#line 703 "browser_info.m"
{
#line 703 "browser_info.m"
	mdb__browser_info__get_num_io_actions_2_p_0((MR_Word) Browser_3, (MR_Integer *) NumIOActions_4);
}

#line 709 "browser_info.m"
void 
ML_BROWSE_set_num_io_actions(
  MR_Integer NumIOActions_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
#line 709 "browser_info.m"
{
#line 709 "browser_info.m"
	mdb__browser_info__set_num_io_actions_3_p_0((MR_Integer) NumIOActions_4, (MR_Word) STATE_VARIABLE_Browser_0_6, (MR_Word *) STATE_VARIABLE_Browser_7);
}

#line 1132 "browser_info.m"
void 
ML_BROWSE_browser_params_to_string(
  MR_Word Browser_3,
  MR_String * Desc_4)
#line 1132 "browser_info.m"
{
#line 1132 "browser_info.m"
	mdb__browser_info__browser_params_to_string_2_p_0((MR_Word) Browser_3, (MR_String *) Desc_4);
}

#line 1229 "browser_info.m"
void 
ML_BROWSE_browser_persistent_state_type(
  MR_Word * HeadVar__1_1)
#line 1229 "browser_info.m"
{
#line 1229 "browser_info.m"
	mdb__browser_info__browser_persistent_state_type_1_p_0((MR_Word *) HeadVar__1_1);
}


static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0 = {
  (MR_String) "print",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1 = {
  (MR_String) "browse",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2 = {
  (MR_String) "print_all",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0[3] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browse_caller_type_0_2
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____browse_caller_type_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browse_caller_type_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browse_caller_type",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_browse_caller_type_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_browse_caller_type_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_browse_caller_type_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct2 mdb__browser_info__tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_stream_id_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_stream_info_0)
  }
};

static const MR_NotagFunctorDesc mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 = {
  (MR_String) "browser_db",
  (MR_PseudoTypeInfo) (&mdb__browser_info__tree234__ti_tree234_2io__type_ctor_info_stream_id_0io__type_ctor_info_stream_info_0),
  (MR_String) "browser_stream_db",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_db_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__browser_info____Unify____browser_db_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_db_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_db",
  {     &mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 },
  {     &mdb__browser_info__mdb__browser_info__notag_functor_desc_browser_db_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_db_0
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0 = {
  &mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1,
  {
    (MR_TypeInfo) (&mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0)
  }
};

static const MR_VA_TypeInfo_Struct2 mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0),
    (MR_TypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0)
  }
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&mdb__browser_term__mdb__browser_term__type_ctor_info_browser_term_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__maybe__ti_maybe_1mdb__browser_info__type_ctor_info_portray_format_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__ti_maybe_track_subterm_1list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__maybe__ti_maybe_1__vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0)
};

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0[7] = {
  (MR_String) "bri_term",
  (MR_String) "bri_dirs",
  (MR_String) "bri_caller_type",
  (MR_String) "bri_format",
  (MR_String) "bri_state",
  (MR_String) "bri_maybe_track",
  (MR_String) "bri_maybe_mode_func"
};

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_browser_info_0_0[7] = {
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
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
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
  }
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0 = {
  (MR_String) "browser_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_browser_info_0_0,
  mdb__browser_info__mdb__browser_info__field_names_browser_info_0_0,
  mdb__browser_info__mdb__browser_info__field_locns_browser_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_info_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____browser_info_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_info_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_info",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_browser_info_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_info_0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_mode_func_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__browser_info____Unify____browser_mode_func_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_mode_func_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_mode_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__browser_info____vti_func_2list__ti_list_1mdb__browser_info__type_ctor_info_down_dir_0mdb__browser_info__type_ctor_info_browser_term_mode_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0[7] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0[7] = {
  (MR_String) "print_params",
  (MR_String) "browse_params",
  (MR_String) "print_all_params",
  (MR_String) "num_printed_io_actions",
  (MR_String) "xml_browser_cmd",
  (MR_String) "xml_tmp_filename",
  (MR_String) "web_browser_cmd"
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0 = {
  (MR_String) "browser_persistent_state",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_browser_persistent_state_0_0,
  mdb__browser_info__mdb__browser_info__field_names_browser_persistent_state_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_browser_persistent_state_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_browser_persistent_state_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____browser_persistent_state_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_persistent_state_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_persistent_state",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_browser_persistent_state_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_browser_persistent_state_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_persistent_state_0
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0 = {
  (MR_String) "btm_input",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1 = {
  (MR_String) "btm_output",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2 = {
  (MR_String) "btm_unbound",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3 = {
  (MR_String) "btm_not_applicable",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_browser_term_mode_0_2
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____browser_term_mode_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____browser_term_mode_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "browser_term_mode",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_browser_term_mode_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_browser_term_mode_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_browser_term_mode_0
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0[5] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0)
};

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0[5] = {
  (MR_String) "default_format",
  (MR_String) "flat_params",
  (MR_String) "raw_pretty_params",
  (MR_String) "verbose_params",
  (MR_String) "pretty_params"
};

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_caller_params_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0 = {
  (MR_String) "caller_params",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_caller_params_0_0,
  mdb__browser_info__mdb__browser_info__field_names_caller_params_0_0,
  mdb__browser_info__mdb__browser_info__field_locns_caller_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_caller_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_caller_params_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____caller_params_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____caller_params_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "caller_params",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_caller_params_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_caller_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_caller_params_0
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0 = {
  (MR_String) "debugger_internal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1 = {
  (MR_String) "debugger_external",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_debugger_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____debugger_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____debugger_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "debugger",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_debugger_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_debugger_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_debugger_0
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0 = {
  (MR_String) "down_child_num",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_down_dir_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_down_dir_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1 = {
  (MR_String) "down_child_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__browser_info__mdb__browser_info__field_types_down_dir_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_down_dir_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_down_dir_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_down_dir_0[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_down_dir_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_down_dir_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____down_dir_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____down_dir_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "down_dir",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_down_dir_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_down_dir_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_down_dir_0
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_format_params_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__browser_info__mdb__browser_info__field_names_format_params_0_0[4] = {
  (MR_String) "depth",
  (MR_String) "size",
  (MR_String) "width",
  (MR_String) "lines"
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0 = {
  (MR_String) "format_params",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_format_params_0_0,
  mdb__browser_info__mdb__browser_info__field_names_format_params_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_format_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_format_params_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____format_params_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____format_params_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "format_params",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_format_params_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_format_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_format_params_0
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0 = {
  (MR_String) "track_accurate",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1 = {
  (MR_String) "track_fast",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_how_track_subterm_0_1
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____how_track_subterm_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____how_track_subterm_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "how_track_subterm",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_how_track_subterm_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_how_track_subterm_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_how_track_subterm_0
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0 = {
  (MR_String) "no_track",
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

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1[3] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1 = {
  (MR_String) "track",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__browser_info__mdb__browser_info__field_types_maybe_track_subterm_1_1,
  NULL,
  mdb__browser_info__mdb__browser_info__field_locns_maybe_track_subterm_1_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_maybe_track_subterm_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_maybe_track_subterm_1_1
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____maybe_track_subterm_1_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____maybe_track_subterm_1_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "maybe_track_subterm",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_maybe_track_subterm_1 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_maybe_track_subterm_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_maybe_track_subterm_1
};

static const MR_FA_TypeInfo_Struct1 mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_TypeInfo) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0)
  }
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0 = {
  (MR_String) "format",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__getopt__ti_maybe_option_table_1mdb__parse__type_ctor_info_setting_option_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1 = {
  (MR_String) "format_param",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2 = {
  (MR_String) "num_io_actions",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__browser_info__mdb__browser_info__field_types_param_cmd_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3 = {
  (MR_String) "print_params",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_param_cmd_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0[4] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_param_cmd_0_3
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____param_cmd_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____param_cmd_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "param_cmd",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_param_cmd_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_param_cmd_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_param_cmd_0
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0 = {
  (MR_String) "flat",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1 = {
  (MR_String) "raw_pretty",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2 = {
  (MR_String) "verbose",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3 = {
  (MR_String) "pretty",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0[4] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_3,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_1,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_portray_format_0_2
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____portray_format_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____portray_format_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "portray_format",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_portray_format_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_portray_format_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_portray_format_0
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0 = {
  (MR_String) "setting_depth",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_setting_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1 = {
  (MR_String) "setting_size",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__browser_info__mdb__browser_info__field_types_setting_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2 = {
  (MR_String) "setting_width",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__browser_info__mdb__browser_info__field_types_setting_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3 = {
  (MR_String) "setting_lines",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mdb__browser_info__mdb__browser_info__field_types_setting_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_setting_0_4[1] = {
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0)
};

static const MR_DuArgLocn mdb__browser_info__mdb__browser_info__field_locns_setting_0_4[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4 = {
  (MR_String) "setting_format",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdb__browser_info__mdb__browser_info__field_types_setting_0_4,
  NULL,
  mdb__browser_info__mdb__browser_info__field_locns_setting_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3[2] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_setting_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_0,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_setting_0_2
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_setting_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____setting_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____setting_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "setting",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_setting_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_setting_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_setting_0
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0 = {
  (MR_String) "assert_invalid",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1 = {
  (MR_String) "no_assert_invalid",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

static const MR_EnumFunctorDescPtr mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0[2] = {
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_0,
  &mdb__browser_info__mdb__browser_info__enum_functor_desc_should_assert_invalid_0_1
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__browser_info____Unify____should_assert_invalid_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____should_assert_invalid_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "should_assert_invalid",
  {     mdb__browser_info__mdb__browser_info__enum_name_ordered_should_assert_invalid_0 },
  {     mdb__browser_info__mdb__browser_info__enum_value_ordered_should_assert_invalid_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_should_assert_invalid_0
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0 = {
  (MR_String) "browser_str",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1 = {
  (MR_String) "browser_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__browser_info__mdb__browser_info__field_types_term_browser_response_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2 = {
  (MR_String) "browser_nl",
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

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3 = {
  (MR_String) "browser_end_command",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4 = {
  (MR_String) "browser_quit",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_term_browser_response_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0[5] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_3,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_4,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_term_browser_response_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____term_browser_response_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____term_browser_response_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "term_browser_response",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_term_browser_response_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_term_browser_response_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_term_browser_response_0
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0 = {
  (MR_String) "updown_parent",
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

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1 = {
  (MR_String) "updown_child_num",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2 = {
  (MR_String) "updown_child_name",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__browser_info__mdb__browser_info__field_types_up_down_dir_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_0[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_1[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_2[1] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2
};

static const MR_DuPtagLayout mdb__browser_info__mdb__browser_info__du_ptag_ordered_up_down_dir_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__browser_info__mdb__browser_info__du_stag_ordered_up_down_dir_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__browser_info__mdb__browser_info__du_name_ordered_up_down_dir_0[3] = {
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_2,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_1,
  &mdb__browser_info__mdb__browser_info__du_functor_desc_up_down_dir_0_0
};

static const MR_Integer mdb__browser_info__mdb__browser_info__functor_number_map_up_down_dir_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__browser_info____Unify____up_down_dir_0_0_10001)),
  ((MR_Box) (mdb__browser_info____Compare____up_down_dir_0_0_10001)),
  (MR_String) "mdb.browser_info",
  (MR_String) "up_down_dir",
  {     mdb__browser_info__mdb__browser_info__du_name_ordered_up_down_dir_0 },
  {     mdb__browser_info__mdb__browser_info__du_ptag_ordered_up_down_dir_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mdb__browser_info__mdb__browser_info__functor_number_map_up_down_dir_0
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 3)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__mdb__browser_info__debugger__arity0__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001))
};

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word D_5,
  MR_String S_6)
{
  mdb__browser_info__write_string_debugger_4_p_0(D_5, S_6);
}

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(
  MR_Word D_5,
  MR_Integer I_6)
{
  mdb__browser_info__write_int_debugger_4_p_0(D_5, I_6);
}

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(
  MR_Word HeadVar__1_5,
  MR_String * HeadVar__2_2)
{
  mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2);
}

static void MR_CALL 
mdb__browser_info__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_109_100_98_95_95_98_114_111_119_115_101_114_95_105_110_102_111_95_95_100_101_98_117_103_103_101_114_95_95_97_114_105_116_121_48_95_95_105_111_95_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_String) "debugger";
}

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
      }
      break;
    case (MR_Integer) 0:
      mercury__io__flush_output_2_p_0();
      break;
  }
}

void MR_CALL 
mdb__browser_info____Compare____up_down_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_21 < ArgY1_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_21 > ArgY1_8);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
            MR_String Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_20, ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____up_down_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
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
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
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
                  }
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
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_29, ArgY1_5);
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
            MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_28 < ArgY1_14);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_28 > ArgY1_14);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0(
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
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_46 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_47 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_46 == CastY_47);
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
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_6;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (Var_54)), ((MR_Box) (ArgY1_5)));
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                    mdb__browser_info____Compare____setting_0_0(HeadVar__1_1, Var_53, ArgY2_8);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[5]), &SubResult1_24, ((MR_Box) (Var_56)), ((MR_Box) (ArgY1_23)));
                  succeeded = (SubResult1_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_24;
                  else
                    mdb__browser_info____Compare____setting_0_0(HeadVar__1_1, Var_55, ArgY2_26);
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer Var_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer ArgY1_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_57 < ArgY1_39);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_57 > ArgY1_39);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
mdb__browser_info____Compare____setting_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_54 == CastY_55);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer Var_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_61 < ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_61 > ArgY1_5);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
        case (MR_Integer) 1:
          {
            MR_Integer Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_64 < ArgY1_17);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_64 > ArgY1_17);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
            MR_Integer Var_65 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Integer ArgY1_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_65 < ArgY1_29);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_65 > ArgY1_29);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Var_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer ArgY1_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          succeeded = (Var_63 < ArgY1_41);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_63 > ArgY1_41);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
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
                MR_Word Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                          MR_Integer Var_66 = (MR_Integer) (Var_62);
                          MR_Integer Var_67 = (MR_Integer) (ArgY1_53);

                          succeeded = (Var_66 < Var_67);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_66 > Var_67);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
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

MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0(
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
            MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_14 == CastX_13);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_17_17;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_17_17 = (MR_Word) (&mdb__browser_info_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
              if (succeeded)
                succeeded = mdb__browser_info____Unify____setting_0_0(ArgX2_5, ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_18_18;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_18_18 = (MR_Word) (&mdb__browser_info_scalar_common_2[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
                succeeded = mdb__browser_info____Unify____setting_0_0(ArgX2_9, ArgY2_10);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_11 == ArgY1_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0(
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
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_9 == ArgY1_10);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
                  succeeded = (ArgX1_11 == ArgY1_12);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0(
  MR_Word TypeInfo_for_P_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box Var_23 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Word Var_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word ArgY2_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Box ArgY3_17 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Word SubResult1_12;
        MR_Integer Var_26 = (MR_Integer) (Var_25);
        MR_Integer Var_27 = (MR_Integer) (ArgY1_11);

        succeeded = (Var_26 < Var_27);
        if (succeeded)
        {
          SubResult1_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_26 > Var_27);
          if (succeeded)
          {
            SubResult1_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;
          MR_Integer Var_28 = (MR_Integer) (Var_24);
          MR_Integer Var_29 = (MR_Integer) (ArgY2_14);

          succeeded = (Var_28 < Var_29);
          if (succeeded)
          {
            SubResult2_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_28 > Var_29);
            if (succeeded)
            {
              SubResult2_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult2_15 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult2_15;
          else
            mercury__builtin__compare_3_p_0(TypeInfo_for_P_20, HeadVar__1_1, Var_23, ArgY3_17);
        }
      }
    }
  }
}

void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____down_dir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_String Var_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        succeeded = (Var_17 < ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > ArgY1_5);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____down_dir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____debugger_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0(
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
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
              succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX5_11, ArgY5_12);
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      mdb__browser_term____Compare____browser_term_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_33 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_34 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mdb__browser_info____Compare____browser_persistent_state_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                }
              }
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      mdb__browser_info____Compare____caller_params_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mdb__browser_info____Compare____caller_params_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mdb__browser_info____Compare____caller_params_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[4]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_6;
      MR_Integer Var_25 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_26 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_25 < Var_26);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_25 > Var_26);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mdb__browser_info____Compare____format_params_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mdb__browser_info____Compare____format_params_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mdb__browser_info____Compare____format_params_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
              mdb__browser_info____Compare____format_params_0_0(HeadVar__1_1, ArgX5_16, ArgY5_17);
          }
        }
      }
    }
  }
}

void MR_CALL 
mdb__browser_info____Compare____format_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = mdb__browser_term____Unify____browser_term_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_20_20 = (MR_Word) (&mdb__browser_info_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&mdb__browser_info_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&mdb__browser_info_scalar_common_2[0]);
                succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(TypeInfo_22_22, ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_23_23 = (MR_Word) (&mdb__browser_info_scalar_common_2[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0(
  MR_Word TypeInfo_for_P_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

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
      MR_Word ArgX1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_8;
      MR_Box ArgX3_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY3_10;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        ArgY3_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_P_13, ArgX3_9, ArgY3_10);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Integer CastX_32 = (MR_Integer) (ArgX1_3);
      MR_Integer CastY_33 = (MR_Integer) (ArgY1_4);
      MR_Integer CastX_44;
      MR_Integer CastY_45;
      MR_Integer CastX_56;
      MR_Integer CastY_57;

      succeeded = (CastX_32 == CastY_33);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word ArgX1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ArgY1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 0))) & (MR_Integer) 3);
        MR_Word ArgX2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 1))));
        MR_Word ArgY2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 1))));
        MR_Word ArgX3_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 2))));
        MR_Word ArgY3_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 2))));
        MR_Word ArgX4_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 3))));
        MR_Word ArgY4_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 3))));
        MR_Word ArgX5_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX1_3, (MR_Integer) 4))));
        MR_Word ArgY5_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY1_4, (MR_Integer) 4))));

        succeeded = (ArgX1_22 == ArgY1_23);
        if (succeeded)
        {
          succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX2_24, ArgY2_25);
          if (succeeded)
          {
            succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX3_26, ArgY3_27);
            if (succeeded)
            {
              succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX4_28, ArgY4_29);
              if (succeeded)
                succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX5_30, ArgY5_31);
            }
          }
        }
      }
      if (succeeded)
      {
        CastX_44 = (MR_Integer) (ArgX2_5);
        CastY_45 = (MR_Integer) (ArgY2_6);
        succeeded = (CastX_44 == CastY_45);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Word ArgX1_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgX2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 1))));
          MR_Word ArgY2_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 1))));
          MR_Word ArgX3_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 2))));
          MR_Word ArgY3_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 2))));
          MR_Word ArgX4_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 3))));
          MR_Word ArgY4_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 3))));
          MR_Word ArgX5_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 4))));
          MR_Word ArgY5_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 4))));

          succeeded = (ArgX1_34 == ArgY1_35);
          if (succeeded)
          {
            succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX2_36, ArgY2_37);
            if (succeeded)
            {
              succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX3_38, ArgY3_39);
              if (succeeded)
              {
                succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX4_40, ArgY4_41);
                if (succeeded)
                  succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX5_42, ArgY5_43);
              }
            }
          }
        }
        if (succeeded)
        {
          CastX_56 = (MR_Integer) (ArgX3_7);
          CastY_57 = (MR_Integer) (ArgY3_8);
          succeeded = (CastX_56 == CastY_57);
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Word ArgX1_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX3_7, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY3_8, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgX2_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX3_7, (MR_Integer) 1))));
            MR_Word ArgY2_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY3_8, (MR_Integer) 1))));
            MR_Word ArgX3_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX3_7, (MR_Integer) 2))));
            MR_Word ArgY3_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY3_8, (MR_Integer) 2))));
            MR_Word ArgX4_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX3_7, (MR_Integer) 3))));
            MR_Word ArgY4_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY3_8, (MR_Integer) 3))));
            MR_Word ArgX5_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX3_7, (MR_Integer) 4))));
            MR_Word ArgY5_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY3_8, (MR_Integer) 4))));

            succeeded = (ArgX1_46 == ArgY1_47);
            if (succeeded)
            {
              succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX2_48, ArgY2_49);
              if (succeeded)
              {
                succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX3_50, ArgY3_51);
                if (succeeded)
                {
                  succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX4_52, ArgY4_53);
                  if (succeeded)
                    succeeded = mdb__browser_info____Unify____format_params_0_0(ArgX5_54, ArgY5_55);
                }
              }
            }
          }
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              TypeInfo_19_19 = (MR_Word) (&mdb__browser_info_scalar_common_2[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_20_20 = (MR_Word) (&mdb__browser_info_scalar_common_2[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_21_21 = (MR_Word) (&mdb__browser_info_scalar_common_2[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__browser_info_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__browser_info_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info__browser_persistent_state_type_1_p_0(
  MR_Word * HeadVar__1_1)
{
  {
    *HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0));
  }
}

static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_no_0_f_0(void)
{
  {
    return (MR_Integer) 0;
  }
}

static MR_Word MR_CALL 
mdb__browser_info__mercury_bool_yes_0_f_0(void)
{
  {
    return (MR_Integer) 1;
  }
}

static void MR_CALL 
mdb__browser_info__get_web_browser_cmd_from_mdb_2_p_0(
  MR_Word Browser_3,
  MR_String * Command_4)
{
  {
    MR_Word MaybeCommand_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 6))));

    if ((MaybeCommand_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Command_4 = (MR_String) "";
    else
      *Command_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCommand_5, (MR_Integer) 0))));
  }
}

static void MR_CALL 
mdb__browser_info__get_xml_tmp_filename_from_mdb_2_p_0(
  MR_Word Browser_3,
  MR_String * FileName_4)
{
  {
    MR_Word MaybeFileName_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 5))));

    if ((MaybeFileName_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *FileName_4 = (MR_String) "";
    else
      *FileName_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFileName_5, (MR_Integer) 0))));
  }
}

static void MR_CALL 
mdb__browser_info__get_xml_browser_cmd_from_mdb_2_p_0(
  MR_Word Browser_3,
  MR_String * Command_4)
{
  {
    MR_Word MaybeCommand_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 4))));

    if ((MaybeCommand_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *Command_4 = (MR_String) "";
    else
      *Command_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeCommand_5, (MR_Integer) 0))));
  }
}

static void MR_CALL 
mdb__browser_info__set_format_from_mdb_6_p_0(
  MR_Word P_7,
  MR_Word B_8,
  MR_Word A_9,
  MR_Word Format_10,
  MR_Word STATE_VARIABLE_Browser_0_12,
  MR_Word * STATE_VARIABLE_Browser_13)
{
  {
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = (MR_Box) ((MR_Unsigned) (Format_10));
    }
    mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, P_7, B_8, A_9, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, Var_19, STATE_VARIABLE_Browser_0_12, STATE_VARIABLE_Browser_13);
  }
}

static void MR_CALL 
mdb__browser_info__set_lines_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Lines_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
{
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Lines_18));
    }
    mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, P_11, B_12, A_13, F_14, Pr_15, V_16, NPr_17, Var_23, STATE_VARIABLE_Browser_0_20, STATE_VARIABLE_Browser_21);
  }
}

static void MR_CALL 
mdb__browser_info__set_width_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Width_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
{
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Width_18));
    }
    mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, P_11, B_12, A_13, F_14, Pr_15, V_16, NPr_17, Var_23, STATE_VARIABLE_Browser_0_20, STATE_VARIABLE_Browser_21);
  }
}

static void MR_CALL 
mdb__browser_info__set_size_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word NPr_16,
  MR_Word V_17,
  MR_Integer Size_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
{
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Size_18));
    }
    mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, P_11, B_12, A_13, F_14, Pr_15, V_17, NPr_16, Var_23, STATE_VARIABLE_Browser_0_20, STATE_VARIABLE_Browser_21);
  }
}

static void MR_CALL 
mdb__browser_info__set_depth_from_mdb_10_p_0(
  MR_Word P_11,
  MR_Word B_12,
  MR_Word A_13,
  MR_Word F_14,
  MR_Word Pr_15,
  MR_Word V_16,
  MR_Word NPr_17,
  MR_Integer Depth_18,
  MR_Word STATE_VARIABLE_Browser_0_20,
  MR_Word * STATE_VARIABLE_Browser_21)
{
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (Depth_18));
    }
    mdb__browser_info__set_browser_param_11_p_0((MR_Integer) 0, P_11, B_12, A_13, F_14, Pr_15, V_16, NPr_17, Var_23, STATE_VARIABLE_Browser_0_20, STATE_VARIABLE_Browser_21);
  }
}

void MR_CALL 
mdb__browser_info__functor_browser_term_cc_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_String * Functor_8,
  MR_Integer * Arity_9,
  MR_Word * IsFunc_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_17_17;
      MR_Word Univ_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_7, (MR_Integer) 0))));
      MR_Box Var_15;
      MR_Word Univ_24;
      MR_Word InputStream_22;
      MR_Box conv0_InputStream_22;

      succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_input_stream_0), Univ_11, &conv0_InputStream_22);
      if (succeeded)
      {
        InputStream_22 = ((MR_Word) (conv0_InputStream_22));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word InputStreamInfo_23;
        MR_Word Var_31 = (MR_Word) (BrowserDb_6);

        InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(Var_31, InputStream_22);
        mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (InputStreamInfo_23)), &Univ_24);
      }
      else
      {
        MR_Word OutputStream_25;
        MR_Box conv1_OutputStream_25;

        succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_output_stream_0), Univ_11, &conv1_OutputStream_25);
        if (succeeded)
        {
          OutputStream_25 = ((MR_Word) (conv1_OutputStream_25));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word OutputStreamInfo_26;
          MR_Word Var_32 = (MR_Word) (BrowserDb_6);

          OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(Var_32, OutputStream_25);
          mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (OutputStreamInfo_26)), &Univ_24);
        }
        else
        {
          MR_Word BinaryInputStream_27;
          MR_Box conv2_BinaryInputStream_27;

          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_input_stream_0), Univ_11, &conv2_BinaryInputStream_27);
          if (succeeded)
          {
            BinaryInputStream_27 = ((MR_Word) (conv2_BinaryInputStream_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BinaryInputStreamInfo_28;
            MR_Word Var_33 = (MR_Word) (BrowserDb_6);

            BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(Var_33, BinaryInputStream_27);
            mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (BinaryInputStreamInfo_28)), &Univ_24);
          }
          else
          {
            MR_Word BinaryOutputStream_29;
            MR_Box conv3_BinaryOutputStream_29;

            succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_output_stream_0), Univ_11, &conv3_BinaryOutputStream_29);
            if (succeeded)
            {
              BinaryOutputStream_29 = ((MR_Word) (conv3_BinaryOutputStream_29));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word BinaryOutputStreamInfo_30;
              MR_Word Var_34 = (MR_Word) (BrowserDb_6);

              BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(Var_34, BinaryOutputStream_29);
              mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (BinaryOutputStreamInfo_30)), &Univ_24);
            }
            else
              Univ_24 = Univ_11;
          }
        }
      }
      Var_15 = mercury__univ__univ_value_1_f_0(&TypeInfo_17_17, Univ_24);
      mercury__deconstruct__functor_4_p_2(TypeInfo_17_17, Var_15, (MR_Integer) 2, Functor_8, Arity_9);
      *IsFunc_10 = (MR_Integer) 0;
    }
    else
    {
      MR_Word Args_12;
      MR_Word MaybeReturn_13;

      *Functor_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 0))));
      Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 1))));
      MaybeReturn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 2))));
      mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_12, Arity_9);
      if ((MaybeReturn_13 == (MR_Word) ((MR_Unsigned) 0U)))
        *IsFunc_10 = (MR_Integer) 0;
      else
        *IsFunc_10 = (MR_Integer) 1;
    }
  }
}

void MR_CALL 
mdb__browser_info__limited_deconstruct_browser_term_cc_5_p_0(
  MR_Word BrowserDb_6,
  MR_Word BrowserTerm_7,
  MR_Integer Limit_8,
  MR_Word * MaybeFunctorArityArgs_9,
  MR_Word * MaybeReturn_10)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) BrowserTerm_7)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_17_17;
      MR_Word Univ_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_7, (MR_Integer) 0))));
      MR_Box Var_16;
      MR_Word Univ_24;
      MR_Word InputStream_22;
      MR_Box conv0_InputStream_22;

      succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_input_stream_0), Univ_11, &conv0_InputStream_22);
      if (succeeded)
      {
        InputStream_22 = ((MR_Word) (conv0_InputStream_22));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word InputStreamInfo_23;
        MR_Word Var_31 = (MR_Word) (BrowserDb_6);

        InputStreamInfo_23 = mercury__io__input_stream_info_2_f_0(Var_31, InputStream_22);
        mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (InputStreamInfo_23)), &Univ_24);
      }
      else
      {
        MR_Word OutputStream_25;
        MR_Box conv1_OutputStream_25;

        succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_output_stream_0), Univ_11, &conv1_OutputStream_25);
        if (succeeded)
        {
          OutputStream_25 = ((MR_Word) (conv1_OutputStream_25));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word OutputStreamInfo_26;
          MR_Word Var_32 = (MR_Word) (BrowserDb_6);

          OutputStreamInfo_26 = mercury__io__output_stream_info_2_f_0(Var_32, OutputStream_25);
          mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (OutputStreamInfo_26)), &Univ_24);
        }
        else
        {
          MR_Word BinaryInputStream_27;
          MR_Box conv2_BinaryInputStream_27;

          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_input_stream_0), Univ_11, &conv2_BinaryInputStream_27);
          if (succeeded)
          {
            BinaryInputStream_27 = ((MR_Word) (conv2_BinaryInputStream_27));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BinaryInputStreamInfo_28;
            MR_Word Var_33 = (MR_Word) (BrowserDb_6);

            BinaryInputStreamInfo_28 = mercury__io__binary_input_stream_info_2_f_0(Var_33, BinaryInputStream_27);
            mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (BinaryInputStreamInfo_28)), &Univ_24);
          }
          else
          {
            MR_Word BinaryOutputStream_29;
            MR_Box conv3_BinaryOutputStream_29;

            succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_output_stream_0), Univ_11, &conv3_BinaryOutputStream_29);
            if (succeeded)
            {
              BinaryOutputStream_29 = ((MR_Word) (conv3_BinaryOutputStream_29));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word BinaryOutputStreamInfo_30;
              MR_Word Var_34 = (MR_Word) (BrowserDb_6);

              BinaryOutputStreamInfo_30 = mercury__io__binary_output_stream_info_2_f_0(Var_34, BinaryOutputStream_29);
              mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (BinaryOutputStreamInfo_30)), &Univ_24);
            }
            else
              Univ_24 = Univ_11;
          }
        }
      }
      Var_16 = mercury__univ__univ_value_1_f_0(&TypeInfo_17_17, Univ_24);
      mercury__deconstruct__limited_deconstruct_cc_3_p_0(TypeInfo_17_17, Var_16, Limit_8, MaybeFunctorArityArgs_9);
      *MaybeReturn_10 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_String Functor_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 0))));
      MR_Word Args_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 1))));
      MR_Integer Arity_14;
      MR_Tuple Var_15;

      *MaybeReturn_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_7, (MR_Integer) 2))));
      mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), Args_13, &Arity_14);
      {
        Var_15 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (Functor_12));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (Arity_14));
        MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) (Args_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFunctorArityArgs_9 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
      }
    }
  }
}

void MR_CALL 
mdb__browser_info__deconstruct_browser_term_cc_6_p_0(
  MR_Word BrowserDb_7,
  MR_Word BrowserTerm_8,
  MR_String * Functor_9,
  MR_Integer * Arity_10,
  MR_Word * Args_11,
  MR_Word * MaybeReturn_12)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) BrowserTerm_8)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_16_16;
      MR_Word Univ_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BrowserTerm_8, (MR_Integer) 0))));
      MR_Box Var_14;
      MR_Word Univ_23;
      MR_Word InputStream_21;
      MR_Box conv0_InputStream_21;

      succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_input_stream_0), Univ_13, &conv0_InputStream_21);
      if (succeeded)
      {
        InputStream_21 = ((MR_Word) (conv0_InputStream_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word InputStreamInfo_22;
        MR_Word Var_30 = (MR_Word) (BrowserDb_7);

        InputStreamInfo_22 = mercury__io__input_stream_info_2_f_0(Var_30, InputStream_21);
        mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (InputStreamInfo_22)), &Univ_23);
      }
      else
      {
        MR_Word OutputStream_24;
        MR_Box conv1_OutputStream_24;

        succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_output_stream_0), Univ_13, &conv1_OutputStream_24);
        if (succeeded)
        {
          OutputStream_24 = ((MR_Word) (conv1_OutputStream_24));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word OutputStreamInfo_25;
          MR_Word Var_31 = (MR_Word) (BrowserDb_7);

          OutputStreamInfo_25 = mercury__io__output_stream_info_2_f_0(Var_31, OutputStream_24);
          mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (OutputStreamInfo_25)), &Univ_23);
        }
        else
        {
          MR_Word BinaryInputStream_26;
          MR_Box conv2_BinaryInputStream_26;

          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_input_stream_0), Univ_13, &conv2_BinaryInputStream_26);
          if (succeeded)
          {
            BinaryInputStream_26 = ((MR_Word) (conv2_BinaryInputStream_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word BinaryInputStreamInfo_27;
            MR_Word Var_32 = (MR_Word) (BrowserDb_7);

            BinaryInputStreamInfo_27 = mercury__io__binary_input_stream_info_2_f_0(Var_32, BinaryInputStream_26);
            mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (BinaryInputStreamInfo_27)), &Univ_23);
          }
          else
          {
            MR_Word BinaryOutputStream_28;
            MR_Box conv3_BinaryOutputStream_28;

            succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_binary_output_stream_0), Univ_13, &conv3_BinaryOutputStream_28);
            if (succeeded)
            {
              BinaryOutputStream_28 = ((MR_Word) (conv3_BinaryOutputStream_28));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word BinaryOutputStreamInfo_29;
              MR_Word Var_33 = (MR_Word) (BrowserDb_7);

              BinaryOutputStreamInfo_29 = mercury__io__binary_output_stream_info_2_f_0(Var_33, BinaryOutputStream_28);
              mercury__univ__type_to_univ_2_p_1((MR_Word) (&mercury__io__io__type_ctor_info_maybe_stream_info_0), ((MR_Box) (BinaryOutputStreamInfo_29)), &Univ_23);
            }
            else
              Univ_23 = Univ_13;
          }
        }
      }
      Var_14 = mercury__univ__univ_value_1_f_0(&TypeInfo_16_16, Univ_23);
      mercury__deconstruct__deconstruct_5_p_2(TypeInfo_16_16, Var_14, (MR_Integer) 2, Functor_9, Arity_10, Args_11);
      *MaybeReturn_12 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      *Functor_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 0))));
      *Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 1))));
      *MaybeReturn_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BrowserTerm_8, (MR_Integer) 2))));
      mercury__list__length_2_p_0((MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), *Args_11, Arity_10);
    }
  }
}

void MR_CALL 
mdb__browser_info__browser_params_to_string_2_p_0(
  MR_Word Browser_3,
  MR_String * Desc_4)
{
  {
    MR_bool succeeded;
    MR_Word PrintParams_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 0))));
    MR_Word BrowseParams_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 1))));
    MR_Word PrintAllParams_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 2))));
    MR_Integer NumIOActions_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 3))));
    MR_Word MaybeXMLBrowserCmd_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 4))));
    MR_Word MaybeXMLTmpFileName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 5))));
    MR_Word MaybeWebBrowserCmd_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 6))));
    MR_String ParamCmds_12;
    MR_String NumIOActionCmd_13;
    MR_String XMLBrowserCmdCmd_15;
    MR_String XMLTmpFileNameCmd_17;
    MR_String WebBrowserCmdCmd_19;
    MR_String Var_20;
    MR_String Var_22;
    MR_String Var_23;
    MR_String Var_25;
    MR_String Var_28;
    MR_String Var_29;
    MR_String Var_40;
    MR_String Var_41;
    MR_String Var_42;
    MR_Word Format_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PrintParams_5, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word FlatParams_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrintParams_5, (MR_Integer) 1))));
    MR_Word RawPrettyParams_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrintParams_5, (MR_Integer) 2))));
    MR_Word VerboseParams_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrintParams_5, (MR_Integer) 3))));
    MR_Word PrettyParams_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PrintParams_5, (MR_Integer) 4))));
    MR_String FormatCmd_51;
    MR_String FormatParamCmds_53;
    MR_String Var_55;
    MR_String Var_56;
    MR_String Var_57 = ((&mdb__browser_info_vector_common_7[4 + Format_46]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
    MR_String Var_60;
    MR_String Var_63;
    MR_String Var_64;
    MR_String Var_67;
    MR_String Var_68;
    MR_String Var_71;
    MR_String XMLBrowserCmd_14;
    MR_String XMLTmpFileName_16;
    MR_String WebBrowserCmd_18;

    Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) "\n");
    Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "-P ", Var_56);
    FormatCmd_51 = mercury__string__f_43_43_2_f_0((MR_String) "format ", Var_55);
    Var_60 = mdb__browser_info__format_params_to_mdb_command_2_f_0((MR_String) "format_param -P -f ", FlatParams_47);
    Var_64 = mdb__browser_info__format_params_to_mdb_command_2_f_0((MR_String) "format_param -P -r ", RawPrettyParams_48);
    Var_68 = mdb__browser_info__format_params_to_mdb_command_2_f_0((MR_String) "format_param -P -v ", VerboseParams_49);
    Var_71 = mdb__browser_info__format_params_to_mdb_command_2_f_0((MR_String) "format_param -P -p ", PrettyParams_50);
    Var_67 = mercury__string__f_43_43_2_f_0(Var_68, Var_71);
    Var_63 = mercury__string__f_43_43_2_f_0(Var_64, Var_67);
    FormatParamCmds_53 = mercury__string__f_43_43_2_f_0(Var_60, Var_63);
    Var_20 = mercury__string__f_43_43_2_f_0(FormatCmd_51, FormatParamCmds_53);
    Var_23 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-B ", BrowseParams_6);
    Var_25 = mdb__browser_info__caller_params_to_mdb_command_2_f_0((MR_String) "-A ", PrintAllParams_7);
    Var_22 = mercury__string__f_43_43_2_f_0(Var_23, Var_25);
    ParamCmds_12 = mercury__string__f_43_43_2_f_0(Var_20, Var_22);
    Var_29 = mercury__string__int_to_string_1_f_0(NumIOActions_8);
    Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) "\n");
    NumIOActionCmd_13 = mercury__string__f_43_43_2_f_0((MR_String) "max_io_actions ", Var_28);
    succeeded = (MaybeXMLBrowserCmd_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      XMLBrowserCmd_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeXMLBrowserCmd_9, (MR_Integer) 0))));
      succeeded = (strcmp(XMLBrowserCmd_14, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_String Var_32;

      Var_32 = mercury__string__f_43_43_2_f_0(XMLBrowserCmd_14, (MR_String) "\n");
      XMLBrowserCmdCmd_15 = mercury__string__f_43_43_2_f_0((MR_String) "xml_browser_cmd ", Var_32);
    }
    else
      XMLBrowserCmdCmd_15 = (MR_String) "";
    succeeded = (MaybeXMLTmpFileName_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      XMLTmpFileName_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeXMLTmpFileName_10, (MR_Integer) 0))));
      succeeded = (strcmp(XMLTmpFileName_16, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_String Var_35;

      Var_35 = mercury__string__f_43_43_2_f_0(XMLTmpFileName_16, (MR_String) "\n");
      XMLTmpFileNameCmd_17 = mercury__string__f_43_43_2_f_0((MR_String) "xml_tmp_filename ", Var_35);
    }
    else
      XMLTmpFileNameCmd_17 = (MR_String) "";
    succeeded = (MaybeWebBrowserCmd_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      WebBrowserCmd_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeWebBrowserCmd_11, (MR_Integer) 0))));
      succeeded = (strcmp(WebBrowserCmd_18, (MR_String) "") == 0);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_String Var_38;

      Var_38 = mercury__string__f_43_43_2_f_0(WebBrowserCmd_18, (MR_String) "\n");
      WebBrowserCmdCmd_19 = mercury__string__f_43_43_2_f_0((MR_String) "web_browser_cmd ", Var_38);
    }
    else
      WebBrowserCmdCmd_19 = (MR_String) "";
    Var_42 = mercury__string__f_43_43_2_f_0(XMLTmpFileNameCmd_17, WebBrowserCmdCmd_19);
    Var_41 = mercury__string__f_43_43_2_f_0(XMLBrowserCmdCmd_15, Var_42);
    Var_40 = mercury__string__f_43_43_2_f_0(NumIOActionCmd_13, Var_41);
    *Desc_4 = mercury__string__f_43_43_2_f_0(ParamCmds_12, Var_40);
  }
}

static MR_String MR_CALL 
mdb__browser_info__caller_params_to_mdb_command_2_f_0(
  MR_String CallerOpt_4,
  MR_Word CallerParams_5)
{
  {
    MR_String Cmds_6;
    MR_Word Format_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), CallerParams_5, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word FlatParams_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_5, (MR_Integer) 1))));
    MR_Word RawPrettyParams_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_5, (MR_Integer) 2))));
    MR_Word VerboseParams_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_5, (MR_Integer) 3))));
    MR_Word PrettyParams_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_5, (MR_Integer) 4))));
    MR_String FormatCmd_12;
    MR_String CmdPrefix_13;
    MR_String FormatParamCmds_14;
    MR_String Var_16;
    MR_String Var_17;
    MR_String Var_18 = ((&mdb__browser_info_vector_common_7[0 + Format_7]))->mdb__browser_info__vector_common_type_7_0__vct_7_f_0;
    MR_String Var_21;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_25;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_29;
    MR_String Var_30;
    MR_String Var_32;
    MR_String Var_33;

    Var_17 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) "\n");
    Var_16 = mercury__string__f_43_43_2_f_0(CallerOpt_4, Var_17);
    FormatCmd_12 = mercury__string__f_43_43_2_f_0((MR_String) "format ", Var_16);
    CmdPrefix_13 = mercury__string__f_43_43_2_f_0((MR_String) "format_param ", CallerOpt_4);
    Var_22 = mercury__string__f_43_43_2_f_0(CmdPrefix_13, (MR_String) "-f ");
    Var_21 = mdb__browser_info__format_params_to_mdb_command_2_f_0(Var_22, FlatParams_8);
    Var_26 = mercury__string__f_43_43_2_f_0(CmdPrefix_13, (MR_String) "-r ");
    Var_25 = mdb__browser_info__format_params_to_mdb_command_2_f_0(Var_26, RawPrettyParams_9);
    Var_30 = mercury__string__f_43_43_2_f_0(CmdPrefix_13, (MR_String) "-v ");
    Var_29 = mdb__browser_info__format_params_to_mdb_command_2_f_0(Var_30, VerboseParams_10);
    Var_33 = mercury__string__f_43_43_2_f_0(CmdPrefix_13, (MR_String) "-p ");
    Var_32 = mdb__browser_info__format_params_to_mdb_command_2_f_0(Var_33, PrettyParams_11);
    Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_32);
    Var_24 = mercury__string__f_43_43_2_f_0(Var_25, Var_28);
    FormatParamCmds_14 = mercury__string__f_43_43_2_f_0(Var_21, Var_24);
    Cmds_6 = mercury__string__f_43_43_2_f_0(FormatCmd_12, FormatParamCmds_14);
    return Cmds_6;
  }
}

static MR_String MR_CALL 
mdb__browser_info__format_params_to_mdb_command_2_f_0(
  MR_String CmdCallerOpt_4,
  MR_Word FormatParams_5)
{
  {
    MR_String Cmds_6;
    MR_Integer Depth_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FormatParams_5, (MR_Integer) 0))));
    MR_Integer Size_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FormatParams_5, (MR_Integer) 1))));
    MR_Integer Width_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FormatParams_5, (MR_Integer) 2))));
    MR_Integer Lines_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FormatParams_5, (MR_Integer) 3))));
    MR_String DepthCmd_11;
    MR_String SizeCmd_12;
    MR_String WidthCmd_13;
    MR_String LinesCmd_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_String Var_18;
    MR_String Var_20;
    MR_String Var_22;
    MR_String Var_23;
    MR_String Var_25;
    MR_String Var_27;
    MR_String Var_28;
    MR_String Var_30;
    MR_String Var_32;
    MR_String Var_33;
    MR_String Var_35;
    MR_String Var_36;

    Var_18 = mercury__string__int_to_string_1_f_0(Depth_7);
    Var_17 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) "\n");
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "depth ", Var_17);
    DepthCmd_11 = mercury__string__f_43_43_2_f_0(CmdCallerOpt_4, Var_15);
    Var_23 = mercury__string__int_to_string_1_f_0(Size_8);
    Var_22 = mercury__string__f_43_43_2_f_0(Var_23, (MR_String) "\n");
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "size ", Var_22);
    SizeCmd_12 = mercury__string__f_43_43_2_f_0(CmdCallerOpt_4, Var_20);
    Var_28 = mercury__string__int_to_string_1_f_0(Width_9);
    Var_27 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\n");
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "width ", Var_27);
    WidthCmd_13 = mercury__string__f_43_43_2_f_0(CmdCallerOpt_4, Var_25);
    Var_33 = mercury__string__int_to_string_1_f_0(Lines_10);
    Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) "\n");
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "lines ", Var_32);
    LinesCmd_14 = mercury__string__f_43_43_2_f_0(CmdCallerOpt_4, Var_30);
    Var_36 = mercury__string__f_43_43_2_f_0(WidthCmd_13, LinesCmd_14);
    Var_35 = mercury__string__f_43_43_2_f_0(SizeCmd_12, Var_36);
    Cmds_6 = mercury__string__f_43_43_2_f_0(DepthCmd_11, Var_35);
    return Cmds_6;
  }
}

void MR_CALL 
mdb__browser_info__send_term_to_socket_3_p_0(
  MR_Word Term_4)
{
  {
    mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) (Term_4)));
    mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
    mercury__io__flush_output_2_p_0();
  }
}

void MR_CALL 
mdb__browser_info__run_param_command_7_p_0(
  MR_Word Debugger_8,
  MR_Word ParamCmd_9,
  MR_Word ShowPath_10,
  MR_Word STATE_VARIABLE_PersistentState_0_18,
  MR_Word * STATE_VARIABLE_PersistentState_19)
{
  switch (MR_tag((MR_Word) ParamCmd_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mdb__browser_info__show_settings_5_p_0(Debugger_8, ShowPath_10, STATE_VARIABLE_PersistentState_0_18);
        *STATE_VARIABLE_PersistentState_19 = STATE_VARIABLE_PersistentState_0_18;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeOptionTable_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ParamCmd_9, (MR_Integer) 0))));
        MR_Word Setting_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ParamCmd_9, (MR_Integer) 1))));

        if (((MR_tag((MR_Word) MaybeOptionTable_13)) == (MR_Integer) 1))
        {
          MR_String Msg_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionTable_13, (MR_Integer) 0))));

          mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, Msg_16);
          *STATE_VARIABLE_PersistentState_19 = STATE_VARIABLE_PersistentState_0_18;
        }
        else
        {
          MR_Word OptionTable_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionTable_13, (MR_Integer) 0))));
          MR_Word PersistentState0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4))));
          MR_Word CallerType_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_Word PersistentState_43;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_62;
          MR_Word Var_63;

          mdb__browser_info__set_browser_param_from_option_table_5_p_0(CallerType_42, OptionTable_15, Setting_14, PersistentState0_41, &PersistentState_43);
          Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0))));
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1))));
          Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2))) & (MR_Integer) 3);
          Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3))));
          Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5))));
          Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_PersistentState_19 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_59));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PersistentState_43));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_63));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybeOptionTable_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ParamCmd_9, (MR_Integer) 0))));
        MR_Word Setting_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ParamCmd_9, (MR_Integer) 1))));

        if (((MR_tag((MR_Word) MaybeOptionTable_32)) == (MR_Integer) 1))
        {
          MR_String Msg_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionTable_32, (MR_Integer) 0))));

          mdb__browser_info__write_string_debugger_4_p_0(Debugger_8, Msg_29);
          *STATE_VARIABLE_PersistentState_19 = STATE_VARIABLE_PersistentState_0_18;
        }
        else
        {
          MR_Word OptionTable_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionTable_32, (MR_Integer) 0))));
          MR_Word PersistentState0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 4))));
          MR_Word CallerType_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_Word PersistentState_71;
          MR_Word Var_85;
          MR_Word Var_86;
          MR_Word Var_87;
          MR_Word Var_88;
          MR_Word Var_90;
          MR_Word Var_91;

          mdb__browser_info__set_browser_param_from_option_table_5_p_0(CallerType_70, OptionTable_28, Setting_33, PersistentState0_69, &PersistentState_71);
          Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 0))));
          Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 1))));
          Var_87 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 2))) & (MR_Integer) 3);
          Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 3))));
          Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 5))));
          Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_PersistentState_0_18, (MR_Integer) 6))));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_PersistentState_19 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_86));
            MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_87));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_88));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PersistentState_71));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_90));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_91));
          }
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer N_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), ParamCmd_9, (MR_Integer) 0))));

        mdb__browser_info__info_set_num_io_actions_3_p_0(N_17, STATE_VARIABLE_PersistentState_0_18, STATE_VARIABLE_PersistentState_19);
      }
      break;
  }
}

void MR_CALL 
mdb__browser_info__show_settings_5_p_0(
  MR_Word Debugger_6,
  MR_Word ShowPath_7,
  MR_Word Info_8)
{
  {
    MR_Integer Var_23;
    MR_Word Var_25;

    mdb__browser_info__show_settings_caller_6_p_0(Debugger_6, Info_8, (MR_Integer) 1, (MR_String) "Browser");
    mdb__browser_info__show_settings_caller_6_p_0(Debugger_6, Info_8, (MR_Integer) 0, (MR_String) "Print");
    mdb__browser_info__show_settings_caller_6_p_0(Debugger_6, Info_8, (MR_Integer) 2, (MR_String) "Printall");
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "Number of I/O actions printed is: ");
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));
    Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 3))));
    mdb__browser_info__write_int_debugger_4_p_0(Debugger_6, Var_23);
    mdb__browser_info__nl_debugger_3_p_0(Debugger_6);
    switch (ShowPath_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_29;

          mdb__browser_info__write_string_debugger_4_p_0(Debugger_6, (MR_String) "Current path is: ");
          Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
          mdb__browser_info__write_down_path_4_p_0(Debugger_6, Var_29);
          mdb__browser_info__nl_debugger_3_p_0(Debugger_6);
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__browser_info__show_settings_caller_6_p_0(
  MR_Word Debugger_7,
  MR_Word Info_8,
  MR_Word Caller_9,
  MR_String CallerName_10)
{
  {
    MR_Word Format_12;
    MR_String Var_16;
    MR_String Var_21;
    MR_String Var_26;
    MR_String Var_31;
    MR_String Var_36;
    MR_String Var_41;
    MR_String Var_46;
    MR_Word MdbFormatOption_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));
    MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 4))));

    if ((MdbFormatOption_69 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Params_70;
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 2))));
      MR_Word Var_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 1))));
      MR_Word Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 0))));

      switch (Caller_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Params_70 = Var_114;
          break;
        case (MR_Integer) 0:
          Params_70 = Var_115;
          break;
        case (MR_Integer) 2:
          Params_70 = Var_113;
          break;
      }
      Format_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_70, (MR_Integer) 0))) & (MR_Integer) 3);
    }
    else
      Format_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MdbFormatOption_69, (MR_Integer) 0))));
    Var_16 = mercury__string__f_43_43_2_f_0(CallerName_10, (MR_String) " default format: ");
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_16);
    mdb__browser_info__print_format_debugger_4_p_0(Debugger_7, Format_12);
    mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
    Var_21 = mercury__string__pad_right_3_f_0((MR_String) "", (MR_Char) 32, (MR_Integer) 30);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_21);
    Var_26 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_26);
    Var_31 = mercury__string__pad_right_3_f_0((MR_String) "depth", (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_31);
    Var_36 = mercury__string__pad_right_3_f_0((MR_String) "size", (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_36);
    Var_41 = mercury__string__pad_right_3_f_0((MR_String) "width", (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_41);
    Var_46 = mercury__string__pad_right_3_f_0((MR_String) "lines", (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_7, Var_46);
    mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
    mdb__browser_info__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 0, (MR_String) "flat");
    mdb__browser_info__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 2, (MR_String) "verbose");
    mdb__browser_info__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 3, (MR_String) "pretty");
    mdb__browser_info__show_settings_caller_format_8_p_0(Debugger_7, Info_8, Caller_9, CallerName_10, (MR_Integer) 1, (MR_String) "raw_pretty");
    mdb__browser_info__nl_debugger_3_p_0(Debugger_7);
  }
}

static void MR_CALL 
mdb__browser_info__show_settings_caller_format_8_p_0(
  MR_Word Debugger_9,
  MR_Word Info_10,
  MR_Word Caller_11,
  MR_String CallerName_12,
  MR_Word Format_13,
  MR_String FormatName_14)
{
  {
    MR_Word Params_16;
    MR_String Var_19;
    MR_String Var_21;
    MR_String Var_22;
    MR_String Var_24;
    MR_String Var_28;
    MR_String Var_33;
    MR_String Var_35;
    MR_Integer Var_36;
    MR_String Var_39;
    MR_String Var_41;
    MR_Integer Var_42;
    MR_String Var_45;
    MR_String Var_47;
    MR_Integer Var_48;
    MR_String Var_51;
    MR_String Var_53;
    MR_Integer Var_54;

    mdb__browser_info__get_format_params_4_p_0(Info_10, Caller_11, Format_13, &Params_16);
    Var_24 = mercury__string__f_43_43_2_f_0(FormatName_14, (MR_String) ":");
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_24);
    Var_21 = mercury__string__f_43_43_2_f_0(CallerName_12, Var_22);
    Var_19 = mercury__string__pad_right_3_f_0(Var_21, (MR_Char) 32, (MR_Integer) 30);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_19);
    Var_28 = mercury__string__pad_right_3_f_0((MR_String) " ", (MR_Char) 32, (MR_Integer) 3);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_28);
    Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 0))));
    Var_35 = mercury__string__int_to_string_1_f_0(Var_36);
    Var_33 = mercury__string__pad_right_3_f_0(Var_35, (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_33);
    Var_42 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 1))));
    Var_41 = mercury__string__int_to_string_1_f_0(Var_42);
    Var_39 = mercury__string__pad_right_3_f_0(Var_41, (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_39);
    Var_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 2))));
    Var_47 = mercury__string__int_to_string_1_f_0(Var_48);
    Var_45 = mercury__string__pad_right_3_f_0(Var_47, (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_45);
    Var_54 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_16, (MR_Integer) 3))));
    Var_53 = mercury__string__int_to_string_1_f_0(Var_54);
    Var_51 = mercury__string__pad_right_3_f_0(Var_53, (MR_Char) 32, (MR_Integer) 10);
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_9, Var_51);
    mdb__browser_info__nl_debugger_3_p_0(Debugger_9);
  }
}

void MR_CALL 
mdb__browser_info__print_format_debugger_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word X_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (X_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[0]))));
            mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
            mercury__io__flush_output_2_p_0();
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[1]))));
            mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
            mercury__io__flush_output_2_p_0();
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[2]))));
            mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
            mercury__io__flush_output_2_p_0();
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__browser_info_scalar_common_6[3]))));
            mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
            mercury__io__flush_output_2_p_0();
          }
          break;
      }
      break;
    case (MR_Integer) 0:
      {
        mercury__io__print_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0), ((MR_Box) (X_2)));
      }
      break;
  }
}

void MR_CALL 
mdb__browser_info__write_down_path_4_p_0(
  MR_Word Debugger_5,
  MR_Word Dirs_6)
{
  if ((Dirs_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, (MR_String) "/");
  }
  else
  {
    MR_Word HeadDir_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_6, (MR_Integer) 0))));
    MR_Word TailDirs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_6, (MR_Integer) 1))));

    if (((MR_tag((MR_Word) HeadDir_8)) == (MR_Integer) 1))
    {
      MR_String Name_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadDir_8, (MR_Integer) 0))));

      mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, (MR_String) "/");
      mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, Name_22);
    }
    else
    {
      MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadDir_8, (MR_Integer) 0))));

      mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, (MR_String) "/");
      mdb__browser_info__write_int_debugger_4_p_0(Debugger_5, N_21);
    }
    mdb__browser_info__write_down_path_loop_4_p_0(Debugger_5, TailDirs_9);
  }
}

static void MR_CALL 
mdb__browser_info__write_down_path_loop_4_p_0(
  MR_Word Debugger_5,
  MR_Word Dirs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((Dirs_6 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word HeadDir_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_6, (MR_Integer) 0))));
      MR_Word TailDirs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_6, (MR_Integer) 1))));
      MR_Word next_value_of_Dirs_6;

      if (((MR_tag((MR_Word) HeadDir_8)) == (MR_Integer) 1))
      {
        MR_String Name_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadDir_8, (MR_Integer) 0))));

        mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, (MR_String) "/");
        mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, Name_20);
      }
      else
      {
        MR_Integer N_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadDir_8, (MR_Integer) 0))));

        mdb__browser_info__write_string_debugger_4_p_0(Debugger_5, (MR_String) "/");
        mdb__browser_info__write_int_debugger_4_p_0(Debugger_5, N_19);
      }
      // direct tailcall eliminated
      ;
      next_value_of_Dirs_6 = TailDirs_9;
      Dirs_6 = next_value_of_Dirs_6;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdb__browser_info__write_int_debugger_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Int_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_14, 0) = ((MR_Box) (Int_2));
        }
        mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) (Var_14)));
        mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
        mercury__io__flush_output_2_p_0();
      }
      break;
    case (MR_Integer) 0:
      mercury__io__write_int_3_p_0(Int_2);
      break;
  }
}

void MR_CALL 
mdb__browser_info__write_string_debugger_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String String_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (String_2));
        }
        mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) (Var_14)));
        mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
        mercury__io__flush_output_2_p_0();
      }
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_3_p_0(String_2);
      break;
  }
}

void MR_CALL 
mdb__browser_info__nl_debugger_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        mercury__io__write_3_p_0((MR_Word) (&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0), ((MR_Box) ((MR_Unsigned) 0U)));
        mercury__io__print_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ".\n")));
        mercury__io__flush_output_2_p_0();
      }
      break;
    case (MR_Integer) 0:
      mercury__io__nl_2_p_0();
      break;
  }
}

void MR_CALL 
mdb__browser_info__set_browser_param_maybe_caller_type_9_p_0(
  MR_Word FromBrowser_10,
  MR_Word MaybeCallerType_11,
  MR_Word F0_12,
  MR_Word Pr0_13,
  MR_Word V0_14,
  MR_Word NPr0_15,
  MR_Word Setting_16,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
{
  {
    MR_Word P_18;
    MR_Word B_19;
    MR_Word A_20;

    if ((MaybeCallerType_11 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (FromBrowser_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            P_18 = (MR_Integer) 1;
            B_19 = (MR_Integer) 1;
            A_20 = (MR_Integer) 1;
          }
          break;
        case (MR_Integer) 1:
          {
            P_18 = (MR_Integer) 0;
            B_19 = (MR_Integer) 1;
            A_20 = (MR_Integer) 0;
          }
          break;
      }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCallerType_11, (MR_Integer) 0))));

      switch (Var_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            P_18 = (MR_Integer) 0;
            B_19 = (MR_Integer) 1;
            A_20 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          {
            P_18 = (MR_Integer) 1;
            B_19 = (MR_Integer) 0;
            A_20 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            P_18 = (MR_Integer) 0;
            B_19 = (MR_Integer) 0;
            A_20 = (MR_Integer) 1;
          }
          break;
      }
    }
    mdb__browser_info__set_browser_param_11_p_0(FromBrowser_10, P_18, B_19, A_20, F0_12, Pr0_13, V0_14, NPr0_15, Setting_16, STATE_VARIABLE_State_0_21, STATE_VARIABLE_State_22);
  }
}

void MR_CALL 
mdb__browser_info__set_browser_param_11_p_0(
  MR_Word FromBrowser_12,
  MR_Word P0_13,
  MR_Word B0_14,
  MR_Word A0_15,
  MR_Word F0_16,
  MR_Word Pr0_17,
  MR_Word V0_18,
  MR_Word NPr0_19,
  MR_Word Setting_20,
  MR_Word STATE_VARIABLE_State_0_35,
  MR_Word * STATE_VARIABLE_State_36)
{
  {
    MR_bool succeeded;
    MR_Word P_22;
    MR_Word B_23;
    MR_Word A_24;
    MR_Word F_25;
    MR_Word Pr_26;
    MR_Word V_27;
    MR_Word NPr_28;
    MR_Word PParams0_29;
    MR_Word BParams0_30;
    MR_Word AParams0_31;
    MR_Word PParams_32;
    MR_Word BParams_33;
    MR_Word AParams_34;
    MR_Integer Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_64;

    switch (FromBrowser_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (P0_13 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (B0_14 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (A0_15 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            P_22 = (MR_Integer) 1;
            B_23 = (MR_Integer) 1;
            A_24 = (MR_Integer) 1;
          }
          else
          {
            P_22 = P0_13;
            B_23 = B0_14;
            A_24 = A0_15;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = (P0_13 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (B0_14 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (A0_15 == (MR_Integer) 0);
          }
          if (succeeded)
          {
            P_22 = (MR_Integer) 0;
            B_23 = (MR_Integer) 1;
            A_24 = (MR_Integer) 0;
          }
          else
          {
            P_22 = P0_13;
            B_23 = B0_14;
            A_24 = A0_15;
          }
        }
        break;
    }
    succeeded = (F0_16 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Pr0_17 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (V0_18 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (NPr0_19 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      F_25 = (MR_Integer) 1;
      Pr_26 = (MR_Integer) 1;
      V_27 = (MR_Integer) 1;
      NPr_28 = (MR_Integer) 1;
    }
    else
    {
      F_25 = F0_16;
      Pr_26 = Pr0_17;
      V_27 = V0_18;
      NPr_28 = NPr0_19;
    }
    PParams0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_35, (MR_Integer) 0))));
    BParams0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_35, (MR_Integer) 1))));
    AParams0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_35, (MR_Integer) 2))));
    mdb__browser_info__maybe_set_param_8_p_0(P_22, F_25, Pr_26, V_27, NPr_28, Setting_20, PParams0_29, &PParams_32);
    mdb__browser_info__maybe_set_param_8_p_0(B_23, F_25, Pr_26, V_27, NPr_28, Setting_20, BParams0_30, &BParams_33);
    mdb__browser_info__maybe_set_param_8_p_0(A_24, F_25, Pr_26, V_27, NPr_28, Setting_20, AParams0_31, &AParams_34);
    Var_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_35, (MR_Integer) 3))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_35, (MR_Integer) 4))));
    Var_41 = mdb__browser_info__xml_tmp_filename_1_f_0(STATE_VARIABLE_State_0_35);
    Var_42 = mdb__browser_info__web_browser_cmd_1_f_0(STATE_VARIABLE_State_0_35);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_State_36 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PParams_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (BParams_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AParams_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
    }
  }
}

void MR_CALL 
mdb__browser_info__set_num_io_actions_3_p_0(
  MR_Integer NumIOActions_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 2))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 4))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 6))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Browser_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NumIOActions_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
    }
  }
}

void MR_CALL 
mdb__browser_info__get_num_io_actions_2_p_0(
  MR_Word Browser_3,
  MR_Integer * NumIOActions_4)
{
  *NumIOActions_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Browser_3, (MR_Integer) 3))));
}

MR_Integer MR_CALL 
mdb__browser_info__get_num_printed_io_actions_1_f_0(
  MR_Word State_3)
{
  {
    MR_Integer HeadVar__2_2 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), State_3, (MR_Integer) 3))));

    return HeadVar__2_2;
  }
}

void MR_CALL 
mdb__browser_info__init_persistent_state_1_p_0(
  MR_Word * State_2)
{
  *State_2 = (MR_Word) (&mdb__browser_info_scalar_common_5[0]);
}

MR_Word MR_CALL 
mdb__browser_info__f_119_101_98_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 5) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 6) = ((MR_Box) (HeadVar__2_2));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mdb__browser_info__f_120_109_108_95_116_109_112_95_102_105_108_101_110_97_109_101_32_58_61_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 5) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 6) = ((MR_Box) (Var_10));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mdb__browser_info__xml_tmp_filename_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__browser_info__f_120_109_108_95_98_114_111_119_115_101_114_95_99_109_100_32_58_61_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer Var_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 2) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 3) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 4) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 5) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 6) = ((MR_Box) (Var_10));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mdb__browser_info__xml_browser_cmd_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));

    return HeadVar__2_2;
  }
}

void MR_CALL 
mdb__browser_info__info_set_web_browser_cmd_3_p_0(
  MR_String Cmd_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word PersistentState0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Word PersistentState_7;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;

    mdb__browser_info__set_web_browser_cmd_from_mdb_3_p_0(Cmd_4, PersistentState0_6, &PersistentState_7);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))) & (MR_Integer) 3);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PersistentState_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
mdb__browser_info__set_web_browser_cmd_from_mdb_3_p_0(
  MR_String Command_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
{
  {
    MR_bool succeeded = (strcmp(Command_4, (MR_String) "") == 0);

    if (succeeded)
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 0))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 2))));
      MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 3))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 4))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 5))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Browser_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Var_11;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Integer Var_22;
      MR_Word Var_23;
      MR_Word Var_24;

      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Command_4));
      }
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 1))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 2))));
      Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 3))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 4))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Browser_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_11));
      }
    }
  }
}

void MR_CALL 
mdb__browser_info__info_set_xml_tmp_filename_3_p_0(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word PersistentState0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Word PersistentState_7;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;

    mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(FileName_4, PersistentState0_6, &PersistentState_7);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))) & (MR_Integer) 3);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PersistentState_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
mdb__browser_info__set_xml_tmp_filename_from_mdb_3_p_0(
  MR_String FileName_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
{
  {
    MR_bool succeeded = (strcmp(FileName_4, (MR_String) "") == 0);

    if (succeeded)
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 0))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 2))));
      MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 3))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 4))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 6))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Browser_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_18));
      }
    }
    else
    {
      MR_Word Var_11;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Integer Var_22;
      MR_Word Var_23;
      MR_Word Var_25;

      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (FileName_4));
      }
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 1))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 2))));
      Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 3))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 4))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Browser_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_25));
      }
    }
  }
}

void MR_CALL 
mdb__browser_info__info_set_xml_browser_cmd_3_p_0(
  MR_String Cmd_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word PersistentState0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Word PersistentState_7;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;

    mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(Cmd_4, PersistentState0_6, &PersistentState_7);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))) & (MR_Integer) 3);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PersistentState_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
mdb__browser_info__set_xml_browser_cmd_from_mdb_3_p_0(
  MR_String Command_4,
  MR_Word STATE_VARIABLE_Browser_0_6,
  MR_Word * STATE_VARIABLE_Browser_7)
{
  {
    MR_bool succeeded = (strcmp(Command_4, (MR_String) "") == 0);

    if (succeeded)
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 0))));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 1))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 2))));
      MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 3))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 5))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 6))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Browser_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_18));
      }
    }
    else
    {
      MR_Word Var_11;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Word Var_21;
      MR_Integer Var_22;
      MR_Word Var_24;
      MR_Word Var_25;

      {
        Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Command_4));
      }
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 0))));
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 1))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 2))));
      Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 3))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 5))));
      Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Browser_0_6, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Browser_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_11));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_25));
      }
    }
  }
}

void MR_CALL 
mdb__browser_info__info_set_num_io_actions_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word PersistentState0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Word PersistentState_7;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PersistentState0_6, (MR_Integer) 0))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PersistentState0_6, (MR_Integer) 1))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PersistentState0_6, (MR_Integer) 2))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PersistentState0_6, (MR_Integer) 4))));
    MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PersistentState0_6, (MR_Integer) 5))));
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PersistentState0_6, (MR_Integer) 6))));

    {
      PersistentState_7 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PersistentState_7, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), PersistentState_7, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), PersistentState_7, 2) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), PersistentState_7, 3) = ((MR_Box) (N_4));
      MR_hl_field(MR_mktag(0), PersistentState_7, 4) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), PersistentState_7, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), PersistentState_7, 6) = ((MR_Box) (Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PersistentState_7));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
mdb__browser_info__info_set_browse_param_4_p_0(
  MR_Word OptionTable_5,
  MR_Word Setting_6,
  MR_Word STATE_VARIABLE_Info_0_11,
  MR_Word * STATE_VARIABLE_Info_12)
{
  {
    MR_Word PersistentState0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 4))));
    MR_Word CallerType_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word PersistentState_10;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;

    mdb__browser_info__set_browser_param_from_option_table_5_p_0(CallerType_9, OptionTable_5, Setting_6, PersistentState0_8, &PersistentState_10);
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 0))));
    Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 1))));
    Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 2))) & (MR_Integer) 3);
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 3))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 5))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_11, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_28));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (PersistentState_10));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_32));
    }
  }
}

void MR_CALL 
mdb__browser_info__set_browser_param_from_option_table_5_p_0(
  MR_Word CallerType_6,
  MR_Word OptionTable_7,
  MR_Word Setting_8,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11)
{
  {
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    Var_12 = mercury__getopt__lookup_bool_option_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 0)));
    Var_13 = mercury__getopt__lookup_bool_option_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 1)));
    Var_14 = mercury__getopt__lookup_bool_option_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 2)));
    Var_15 = mercury__getopt__lookup_bool_option_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 3)));
    Var_16 = mercury__getopt__lookup_bool_option_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 4)));
    Var_17 = mercury__getopt__lookup_bool_option_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 5)));
    Var_18 = mercury__getopt__lookup_bool_option_2_f_0((MR_Word) (&mdb__parse__mdb__parse__type_ctor_info_setting_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 6)));
    mdb__browser_info__set_browser_param_with_caller_type_11_p_0(CallerType_6, Var_12, Var_13, Var_14, Var_15, Var_16, Var_17, Var_18, Setting_8, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
  }
}

void MR_CALL 
mdb__browser_info__set_browser_param_with_caller_type_11_p_0(
  MR_Word CallerType_12,
  MR_Word P0_13,
  MR_Word B0_14,
  MR_Word A0_15,
  MR_Word F0_16,
  MR_Word Pr0_17,
  MR_Word V0_18,
  MR_Word NPr0_19,
  MR_Word Setting_20,
  MR_Word STATE_VARIABLE_State_0_36,
  MR_Word * STATE_VARIABLE_State_37)
{
  {
    MR_bool succeeded = (P0_13 == (MR_Integer) 0);
    MR_Word P_23;
    MR_Word B_24;
    MR_Word A_25;
    MR_Word F_26;
    MR_Word Pr_27;
    MR_Word V_28;
    MR_Word NPr_29;
    MR_Word PParams0_30;
    MR_Word BParams0_31;
    MR_Word AParams0_32;
    MR_Word PParams_33;
    MR_Word BParams_34;
    MR_Word AParams_35;
    MR_Integer Var_40;
    MR_Word Var_43;
    MR_Word Var_65;
    MR_Word Var_66;

    if (succeeded)
    {
      succeeded = (B0_14 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (A0_15 == (MR_Integer) 0);
    }
    if (succeeded)
      switch (CallerType_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            P_23 = (MR_Integer) 0;
            B_24 = (MR_Integer) 1;
            A_25 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 0:
          {
            P_23 = (MR_Integer) 1;
            B_24 = (MR_Integer) 0;
            A_25 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 2:
          {
            P_23 = (MR_Integer) 0;
            B_24 = (MR_Integer) 0;
            A_25 = (MR_Integer) 1;
          }
          break;
      }
    else
    {
      P_23 = P0_13;
      B_24 = B0_14;
      A_25 = A0_15;
    }
    succeeded = (F0_16 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Pr0_17 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (V0_18 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (NPr0_19 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      F_26 = (MR_Integer) 1;
      Pr_27 = (MR_Integer) 1;
      V_28 = (MR_Integer) 1;
      NPr_29 = (MR_Integer) 1;
    }
    else
    {
      F_26 = F0_16;
      Pr_27 = Pr0_17;
      V_28 = V0_18;
      NPr_29 = NPr0_19;
    }
    PParams0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_36, (MR_Integer) 0))));
    BParams0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_36, (MR_Integer) 1))));
    AParams0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_36, (MR_Integer) 2))));
    mdb__browser_info__maybe_set_param_8_p_0(P_23, F_26, Pr_27, V_28, NPr_29, Setting_20, PParams0_30, &PParams_33);
    mdb__browser_info__maybe_set_param_8_p_0(B_24, F_26, Pr_27, V_28, NPr_29, Setting_20, BParams0_31, &BParams_34);
    mdb__browser_info__maybe_set_param_8_p_0(A_25, F_26, Pr_27, V_28, NPr_29, Setting_20, AParams0_32, &AParams_35);
    Var_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_36, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_36, (MR_Integer) 4))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_State_0_36, (MR_Integer) 5))));
    Var_43 = mdb__browser_info__web_browser_cmd_1_f_0(STATE_VARIABLE_State_0_36);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_State_37 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PParams_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (BParams_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (AParams_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_43));
    }
  }
}

static void MR_CALL 
mdb__browser_info__maybe_set_param_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word F_2,
  MR_Word Pr_3,
  MR_Word V_4,
  MR_Word NPr_5,
  MR_Word Setting_6,
  MR_Word STATE_VARIABLE_Params_0_7,
  MR_Word * STATE_VARIABLE_Params_8)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Params_8 = STATE_VARIABLE_Params_0_7;
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Params_0_7, (MR_Integer) 4))));
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Params_0_7, (MR_Integer) 3))));
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Params_0_7, (MR_Integer) 2))));
        MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Params_0_7, (MR_Integer) 1))));
        MR_Word Var_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Params_0_7, (MR_Integer) 0))) & (MR_Integer) 3);

        switch (MR_tag((MR_Word) Setting_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word FParams_33;
              MR_Word PrParams_34;
              MR_Word VParams_35;
              MR_Word NPrParams_36;

              mdb__browser_info__maybe_set_param_2_4_p_0(F_2, Setting_6, Var_69, &FParams_33);
              mdb__browser_info__maybe_set_param_2_4_p_0(Pr_3, Setting_6, Var_68, &PrParams_34);
              mdb__browser_info__maybe_set_param_2_4_p_0(V_4, Setting_6, Var_67, &VParams_35);
              mdb__browser_info__maybe_set_param_2_4_p_0(NPr_5, Setting_6, Var_66, &NPrParams_36);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Params_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_70));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FParams_33));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PrParams_34));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VParams_35));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NPrParams_36));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Setting_6, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word FParams_33;
                  MR_Word PrParams_34;
                  MR_Word VParams_35;
                  MR_Word NPrParams_36;

                  mdb__browser_info__maybe_set_param_2_4_p_0(F_2, Setting_6, Var_69, &FParams_33);
                  mdb__browser_info__maybe_set_param_2_4_p_0(Pr_3, Setting_6, Var_68, &PrParams_34);
                  mdb__browser_info__maybe_set_param_2_4_p_0(V_4, Setting_6, Var_67, &VParams_35);
                  mdb__browser_info__maybe_set_param_2_4_p_0(NPr_5, Setting_6, Var_66, &NPrParams_36);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Params_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (Var_70));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FParams_33));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PrParams_34));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VParams_35));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NPrParams_36));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word NewFormat_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Setting_6, (MR_Integer) 1))) & (MR_Integer) 3);

                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    *STATE_VARIABLE_Params_8 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) ((MR_Unsigned) (NewFormat_23));
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_68));
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_67));
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_66));
                  }
                }
                break;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
mdb__browser_info__maybe_set_param_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word Params_3,
  MR_Word * HeadVar__4_4)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__4_4 = Params_3;
      break;
    case (MR_Integer) 1:
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer D_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1))));
            MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2))));
            MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (D_7));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_22));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer S_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0))));
            MR_Integer Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2))));
            MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (S_9));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_27));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_28));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer W_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0))));
            MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1))));
            MR_Integer Var_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 3))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_29));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (W_17));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_32));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer L_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 0))));
                MR_Integer Var_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 1))));
                MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_3, (MR_Integer) 2))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_33));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_34));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_35));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (L_19));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.maybe_set_param_2\'/4", (MR_String) "cannot set format here");
                  return;
                }
              }
              break;
          }
          break;
      }
      break;
  }
}

MR_Word MR_CALL 
mdb__browser_info__web_browser_cmd_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));

    return HeadVar__2_2;
  }
}

void MR_CALL 
mdb__browser_info__get_format_params_4_p_0(
  MR_Word Info_5,
  MR_Word Caller_6,
  MR_Word Format_7,
  MR_Word * Params_8)
{
  {
    MR_Word CallerParams_9;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 2))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;

    switch (Caller_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        CallerParams_9 = Var_43;
        break;
      case (MR_Integer) 0:
        CallerParams_9 = Var_44;
        break;
      case (MR_Integer) 2:
        CallerParams_9 = Var_42;
        break;
    }
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_9, (MR_Integer) 1))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_9, (MR_Integer) 2))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_9, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerParams_9, (MR_Integer) 4))));
    switch (Format_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Params_8 = Var_68;
        break;
      case (MR_Integer) 3:
        *Params_8 = Var_65;
        break;
      case (MR_Integer) 1:
        *Params_8 = Var_67;
        break;
      case (MR_Integer) 2:
        *Params_8 = Var_66;
        break;
    }
  }
}

void MR_CALL 
mdb__browser_info__get_format_4_p_0(
  MR_Word Info_5,
  MR_Word Caller_6,
  MR_Word MaybeFormat_7,
  MR_Word * Format_8)
{
  if ((MaybeFormat_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MdbFormatOption_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));

    if ((MdbFormatOption_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Params_10;
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 2))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));

      switch (Caller_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          Params_10 = Var_54;
          break;
        case (MR_Integer) 0:
          Params_10 = Var_55;
          break;
        case (MR_Integer) 2:
          Params_10 = Var_53;
          break;
      }
      *Format_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_10, (MR_Integer) 0))) & (MR_Integer) 3);
    }
    else
      *Format_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MdbFormatOption_9, (MR_Integer) 0))));
  }
  else
    *Format_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeFormat_7, (MR_Integer) 0))));
}

MR_Word MR_CALL 
mdb__browser_info__init_5_f_0(
  MR_Word BrowserTerm_7,
  MR_Word CallerType_8,
  MR_Word MaybeFormat_9,
  MR_Word MaybeModeFunc_10,
  MR_Word State_11)
{
  {
    MR_Word HeadVar__6_6;

    {
      HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 0) = ((MR_Box) (BrowserTerm_7));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 2) = (MR_Box) ((MR_Unsigned) (CallerType_8));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 3) = ((MR_Box) (MaybeFormat_9));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 4) = ((MR_Box) (State_11));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), HeadVar__6_6, 6) = ((MR_Box) (MaybeModeFunc_10));
    }
    return HeadVar__6_6;
  }
}

void MR_CALL 
mdb__browser_info__convert_dirs_to_term_path_3_p_0(
  MR_Word Term_4,
  MR_Word Dirs_5,
  MR_Word * TermPath_6)
{
  {
    MR_bool succeeded;

    if ((Dirs_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *TermPath_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_5, (MR_Integer) 1))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Dirs_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1))
      {
        MR_String Name_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
        MR_Integer N_22;
        MR_Word TermPathTail_25;
        MR_Integer Pos_12;
        MR_Word Subterm_21;

        succeeded = mdb__term_rep__field_pos_3_p_0(Name_11, Term_4, &Pos_12);
        if (succeeded)
          succeeded = mdb__term_rep__argument_3_p_0(Term_4, Pos_12, &Subterm_21);
        if (succeeded)
        {
          mdb__browser_info__convert_dirs_to_term_path_3_p_0(Subterm_21, Var_26, &TermPathTail_25);
          N_22 = Pos_12;
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.convert_dirs_to_term_path\'/3", (MR_String) "invalid field name");
            return;
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TermPath_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TermPathTail_25));
        }
      }
      else
      {
        MR_Integer N_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0))));
        MR_Word TermPathTail_10;
        MR_Word Subterm_9;

        succeeded = mdb__term_rep__argument_3_p_0(Term_4, N_7, &Subterm_9);
        if (succeeded)
          mdb__browser_info__convert_dirs_to_term_path_3_p_0(Subterm_9, Var_26, &TermPathTail_10);
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "mdb.browser_info", (MR_String) "predicate \140mdb.browser_info.convert_dirs_to_term_path\'/3", (MR_String) "invalid argument");
            return;
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *TermPath_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TermPathTail_10));
        }
      }
    }
  }
}

MR_Word MR_CALL 
mdb__browser_info__down_to_up_down_dirs_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word DownDir_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word DownDirs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_5;
      MR_Word Var_6;

      if (((MR_tag((MR_Word) DownDir_3)) == (MR_Integer) 1))
      {
        MR_String Name_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), DownDir_3, (MR_Integer) 0))));

        {
          Var_5 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_5, 0) = ((MR_Box) (Name_8));
        }
      }
      else
      {
        MR_Integer Num_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DownDir_3, (MR_Integer) 0))));

        {
          Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (Num_7));
        }
      }
      Var_6 = mdb__browser_info__down_to_up_down_dirs_1_f_0(DownDirs_4);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_6));
      }
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdb__browser_info__down_to_up_down_dir_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_String Name_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Name_4));
      }
    }
    else
    {
      MR_Integer Num_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Num_3));
      }
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____browse_caller_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____browse_caller_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____browse_caller_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____browse_caller_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_db_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____browser_db_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____browser_db_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____browser_db_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____browser_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____browser_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____browser_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_mode_func_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____browser_mode_func_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____browser_mode_func_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____browser_mode_func_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_persistent_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____browser_persistent_state_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____browser_persistent_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____browser_persistent_state_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____browser_term_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____browser_term_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____browser_term_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____browser_term_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____caller_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____caller_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____caller_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____caller_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____debugger_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____debugger_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____debugger_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____debugger_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____down_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____down_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____down_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____down_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____format_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____format_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____format_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____format_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____how_track_subterm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____how_track_subterm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____how_track_subterm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____how_track_subterm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____maybe_track_subterm_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____maybe_track_subterm_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____maybe_track_subterm_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____maybe_track_subterm_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____param_cmd_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____param_cmd_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____param_cmd_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____param_cmd_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____portray_format_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____portray_format_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____portray_format_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____portray_format_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____setting_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____setting_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____setting_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____setting_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____should_assert_invalid_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____should_assert_invalid_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____should_assert_invalid_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____should_assert_invalid_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____term_browser_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____term_browser_response_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____term_browser_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____term_browser_response_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__browser_info____Unify____up_down_dir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__browser_info____Unify____up_down_dir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__browser_info____Compare____up_down_dir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__browser_info____Compare____up_down_dir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__int__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  }
}

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mdb__browser_info__ClassMethod_for_stream__writer____mdb__browser_info__debugger__arity0__string__arity0__io__state__arity0______stream__put_4_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
  }
}

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mdb__browser_info__ClassMethod_for_stream__stream____mdb__browser_info__debugger__arity0__io__state__arity0______stream__name_4_4_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdb__browser_info__ClassMethod_for_stream__output____mdb__browser_info__debugger__arity0__io__state__arity0______stream__flush_3_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

void mercury__mdb__browser_info__init(void)
{
}

void mercury__mdb__browser_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browse_caller_type_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_db_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_info_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_mode_func_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_persistent_state_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_browser_term_mode_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_caller_params_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_debugger_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_down_dir_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_format_params_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_maybe_track_subterm_1);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_param_cmd_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_portray_format_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_setting_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_term_browser_response_0);
	MR_register_type_ctor_info(&mdb__browser_info__mdb__browser_info__type_ctor_info_up_down_dir_0);
}

void mercury__mdb__browser_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__browser_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.browser_info.
