/*
** Automatically generated from `mdprof_cgi.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module mdprof_cgi. */
/* :- implementation. */

/*
INIT mercury__mdprof_cgi__init
ENDINIT
*/

#include "mdprof_cgi.mih"


#include "conf.mih"
#include "dump.mih"
#include "exclude.mih"
#include "interface.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "query.mih"
#include "startup.mih"
#include "timeout.mih"
#include "mdbcomp.feedback.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdprof_cgi__main_2_p_0_4_env_0_s {
  MR_Box * mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_cgi__main_2_p_0_4_env_0__cont;
  void * mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};

struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s {
  MR_Box * mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_cgi__process_command_line_2_p_0_4_env_0__cont;
  void * mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1;

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_value_ordered_child_has_parent_0[2];

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_child_has_parent_0[2];

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_child_has_parent_0[2];

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0[2];

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0;

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0[1];

static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0[1];

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0[1];

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0[1];

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0[1];

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0;

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1;

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2;

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0[2];

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1[1];

static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_detach_process_result_0[2];

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_detach_process_result_0[3];

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_detach_process_result_0[3];

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_6;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_7;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_8;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_9;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_10;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_11;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_12;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_13;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_14;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_15;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_16;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_17;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_18;

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_value_ordered_option_0[19];

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_option_0[19];

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_option_0[19];

static const MR_FA_TypeInfo_Struct2 mdprof_cgi__tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0(
  MR_Word mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____option_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0(
  MR_Word mdprof_cgi__HeadVar__2_1,
  MR_Word mdprof_cgi__HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0(
  MR_Word mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0(
  MR_Word mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0(
  MR_Word mdprof_cgi__HeadVar__2_1,
  MR_Word mdprof_cgi__HeadVar__2_2);

static void MR_CALL 
mdprof_cgi__defaults_2_p_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word * mdprof_cgi__HeadVar__2_2,
  MR_Cont mdprof_cgi__cont,
  void * mdprof_cgi__cont_env_ptr);

static MR_bool MR_CALL 
mdprof_cgi__long_2_p_0(
  MR_String mdprof_cgi__HeadVar__1_1,
  MR_Word * mdprof_cgi__HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_cgi__short_2_p_0(
  MR_Char mdprof_cgi__HeadVar__1_1,
  MR_Word * mdprof_cgi__HeadVar__2_2);

static void MR_CALL 
mdprof_cgi__raw_detach_process_3_p_0(
  MR_Integer * mdprof_cgi__ResCode_1);

static void MR_CALL 
mdprof_cgi__check_for_existing_fifos_5_p_0(
  MR_String mdprof_cgi__Fifo1_1,
  MR_String mdprof_cgi__Fifo2_2,
  MR_Integer * mdprof_cgi__FifoCount_3);

static void MR_CALL 
main_2_p_0_3(
  void * mdprof_cgi__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2,
  MR_Cont mdprof_cgi__cont,
  void * mdprof_cgi__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2);

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_3(
  void * mdprof_cgi__env_ptr_arg);

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_4(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2,
  MR_Cont mdprof_cgi__cont,
  void * mdprof_cgi__cont_env_ptr);

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_2(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2);

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_1(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2);

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0(void);

static void MR_CALL 
mdprof_cgi__process_args_5_p_0(
  MR_String mdprof_cgi__ProgName_6,
  MR_Word mdprof_cgi__Args_7,
  MR_Word mdprof_cgi__Options_8);

static void MR_CALL 
mdprof_cgi__process_query_6_p_0(
  MR_Word mdprof_cgi__Cmd0_7,
  MR_String mdprof_cgi__DeepFileName0_8,
  MR_Word mdprof_cgi__MaybePref_9,
  MR_Word mdprof_cgi__Options0_10);

static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_11_p_0(
  MR_Word mdprof_cgi__Cmd_12,
  MR_Word mdprof_cgi__PrefInd_13,
  MR_String mdprof_cgi__FileName_14,
  MR_String mdprof_cgi__ToServerPipe_15,
  MR_String mdprof_cgi__FromServerPipe_16,
  MR_String mdprof_cgi__StartupFile_17,
  MR_String mdprof_cgi__MutexFile_18,
  MR_String mdprof_cgi__WantFile_19,
  MR_Word mdprof_cgi__Options_20);

static void MR_CALL 
mdprof_cgi__make_pipes_4_p_0(
  MR_String mdprof_cgi__FileName_5,
  MR_Word * mdprof_cgi__Success_6);

static void MR_CALL 
mdprof_cgi__start_server_9_p_0(
  MR_Word mdprof_cgi__Options_10,
  MR_String mdprof_cgi__ToServerPipe_11,
  MR_String mdprof_cgi__FromServerPipe_12,
  MR_Word mdprof_cgi__MaybeStartupStream_13,
  MR_String mdprof_cgi__MutexFile_14,
  MR_String mdprof_cgi__WantFile_15,
  MR_Word mdprof_cgi__Deep_16);

static void MR_CALL 
mdprof_cgi__server_loop_10_p_0(
  MR_String mdprof_cgi__ToServerPipe_11,
  MR_String mdprof_cgi__FromServerPipe_12,
  MR_Integer mdprof_cgi__TimeOut0_13,
  MR_Word mdprof_cgi__MaybeStartupStream_14,
  MR_Word mdprof_cgi__Debug_15,
  MR_Word mdprof_cgi__Canonical_16,
  MR_Integer mdprof_cgi__QueryNum0_17,
  MR_Word mdprof_cgi__Deep0_18);

static void MR_CALL 
mdprof_cgi__handle_query_from_existing_server_9_p_0(
  MR_Word mdprof_cgi__Cmd_10,
  MR_Word mdprof_cgi__PrefInd_11,
  MR_String mdprof_cgi__ToServerPipe_12,
  MR_String mdprof_cgi__FromServerPipe_13,
  MR_String mdprof_cgi__MutexFile_14,
  MR_String mdprof_cgi__WantFile_15,
  MR_Word mdprof_cgi__Options_16);

static void MR_CALL 
mdprof_cgi__write_version_message_3_p_0(
  MR_String mdprof_cgi__ProgName_4);

static void MR_CALL 
mdprof_cgi__decode_input_lines_5_p_0(
  MR_Word mdprof_cgi__Decode_6,
  MR_Word mdprof_cgi__DecodeCmd_7,
  MR_Word mdprof_cgi__DecodePrefs_8);

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____option_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3);


static /* final */ const MR_Box mdprof_cgi_scalar_common_1[2][2];

static /* final */ const MR_Box mdprof_cgi_scalar_common_2[9][3];

static /* final */ const MR_Box mdprof_cgi_scalar_common_3[6][1];

static /* final */ const MR_Box mdprof_cgi_scalar_common_4[3][5];


/* sealed */ struct mdprof_cgi__vector_common_type_5_0_s {
  const MR_Word mdprof_cgi__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mdprof_cgi__vector_common_type_5_0_s mdprof_cgi_vector_common_5[19];

/* sealed */ struct mdprof_cgi__vector_common_type_6_0_s {
  const MR_Word mdprof_cgi__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mdprof_cgi__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mdprof_cgi__vector_common_type_6_0_s mdprof_cgi_vector_common_6[19];



static /* final */ const MR_Box mdprof_cgi_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0))
  },
};

static /* final */ const MR_Box mdprof_cgi_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[0])),
    ((MR_Box) (mdprof_cgi__process_command_line_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[1])),
    ((MR_Box) (mdprof_cgi__process_command_line_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[2])),
    ((MR_Box) (mdprof_cgi__process_command_line_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_2[1])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[2])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_2[5])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[6])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[7]))
  },
};

static /* final */ const MR_Box mdprof_cgi_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 30))
  },
};

static /* final */ const MR_Box mdprof_cgi_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mdprof_cgi__vector_common_type_5_0_s mdprof_cgi_vector_common_5[19] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 8 },
  /* row 9 */   {     (MR_Integer) 9 },
  /* row 10 */   {     (MR_Integer) 10 },
  /* row 11 */   {     (MR_Integer) 11 },
  /* row 12 */   {     (MR_Integer) 14 },
  /* row 13 */   {     (MR_Integer) 13 },
  /* row 14 */   {     (MR_Integer) 12 },
  /* row 15 */   {     (MR_Integer) 15 },
  /* row 16 */   {     (MR_Integer) 16 },
  /* row 17 */   {     (MR_Integer) 17 },
  /* row 18 */   {     (MR_Integer) 18 },
};

static /* final */ const struct mdprof_cgi__vector_common_type_6_0_s mdprof_cgi_vector_common_6[19] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_3[4])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[1])
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 8 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 9 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 10 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_3[4])
  },
  /* row 11 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 12 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 13 */
  {
    (MR_Integer) 14,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[1])
  },
  /* row 14 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[1])
  },
  /* row 15 */
  {
    (MR_Integer) 15,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[1])
  },
  /* row 16 */
  {
    (MR_Integer) 16,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_3[5])
  },
  /* row 17 */
  {
    (MR_Integer) 17,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[3])
  },
  /* row 18 */
  {
    (MR_Integer) 18,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[1])
  },
};


#include "io.mh"
#include "mdprof_cgi.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0 = {
  (MR_String) "child_has_parent",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1 = {
  (MR_String) "child_has_no_parent",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_value_ordered_child_has_parent_0[2] = {
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1
};

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_child_has_parent_0[2] = {
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0
};

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_child_has_parent_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_child_has_parent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_cgi____Unify____child_has_parent_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____child_has_parent_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "child_has_parent",
  {     mdprof_cgi__mdprof_cgi__enum_name_ordered_child_has_parent_0 },
  {     mdprof_cgi__mdprof_cgi__enum_value_ordered_child_has_parent_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_cgi__mdprof_cgi__functor_number_map_child_has_parent_0
};

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0[2] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_indication_0
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0 = {
  (MR_String) "cmd_pref",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0[1] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0
};

static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0
  }
};

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0[1] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0
};

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_cgi____Unify____cmd_pref_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____cmd_pref_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "cmd_pref",
  {     mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0 },
  {     mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0
};

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0[1] = {
  (MR_PseudoTypeInfo) &mdprof_cgi__mdprof_cgi__type_ctor_info_child_has_parent_0
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0 = {
  (MR_String) "in_child",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1 = {
  (MR_String) "in_parent",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2 = {
  (MR_String) "fork_failed",
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

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0[2] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1,
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2
};

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1[1] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0
};

static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_detach_process_result_0[2] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1
  }
};

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_detach_process_result_0[3] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2,
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0,
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1
};

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_detach_process_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_detach_process_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_cgi____Unify____detach_process_result_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____detach_process_result_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "detach_process_result",
  {     mdprof_cgi__mdprof_cgi__du_name_ordered_detach_process_result_0 },
  {     mdprof_cgi__mdprof_cgi__du_ptag_ordered_detach_process_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdprof_cgi__mdprof_cgi__functor_number_map_detach_process_result_0
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_0 = {
  (MR_String) "canonical_clique",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_1 = {
  (MR_String) "clique",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_2 = {
  (MR_String) "debug",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_3 = {
  (MR_String) "decode",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_4 = {
  (MR_String) "decode_cmd",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_5 = {
  (MR_String) "decode_prefs",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_6 = {
  (MR_String) "detach_process",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_7 = {
  (MR_String) "help",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_8 = {
  (MR_String) "localhost",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_9 = {
  (MR_String) "modules",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_10 = {
  (MR_String) "proc",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_11 = {
  (MR_String) "quit",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_12 = {
  (MR_String) "root",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_13 = {
  (MR_String) "record_startup",
  (MR_Integer) 13
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_14 = {
  (MR_String) "record_loop",
  (MR_Integer) 14
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_15 = {
  (MR_String) "server_process",
  (MR_Integer) 15
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_16 = {
  (MR_String) "timeout",
  (MR_Integer) 16
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_17 = {
  (MR_String) "version",
  (MR_Integer) 17
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_18 = {
  (MR_String) "write_query_string",
  (MR_Integer) 18
};

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_value_ordered_option_0[19] = {
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_0,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_1,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_2,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_3,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_4,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_5,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_6,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_7,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_8,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_9,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_10,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_11,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_12,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_13,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_14,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_15,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_16,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_17,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_18
};

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_option_0[19] = {
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_0,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_1,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_2,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_3,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_4,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_5,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_6,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_7,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_8,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_9,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_10,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_11,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_14,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_13,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_12,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_15,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_16,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_17,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_18
};

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_option_0[19] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 12,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 18
};

const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_cgi____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____option_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "option",
  {     mdprof_cgi__mdprof_cgi__enum_name_ordered_option_0 },
  {     mdprof_cgi__mdprof_cgi__enum_value_ordered_option_0 },
  (MR_Integer) 19,
  (MR_Integer) 4,
  mdprof_cgi__mdprof_cgi__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mdprof_cgi__tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_cgi____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____option_table_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdprof_cgi__tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Word mdprof_cgi__Cast_HeadVar1_4 = mdprof_cgi__HeadVar__2_2;
    MR_Word mdprof_cgi__Cast_HeadVar2_5 = mdprof_cgi__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdprof_cgi_scalar_common_2[0], mdprof_cgi__HeadVar__1_1, ((MR_Box) (mdprof_cgi__Cast_HeadVar1_4)), ((MR_Box) (mdprof_cgi__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0(
  MR_Word mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Word mdprof_cgi__Cast_HeadVar1_3 = mdprof_cgi__HeadVar__1_1;
    MR_Word mdprof_cgi__Cast_HeadVar2_4 = mdprof_cgi__HeadVar__2_2;

    {
      mdprof_cgi__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_cgi_scalar_common_2[0], ((MR_Box) (mdprof_cgi__Cast_HeadVar1_3)), ((MR_Box) (mdprof_cgi__Cast_HeadVar2_4)));
    }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____option_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Integer mdprof_cgi__Cast_HeadVar1_4 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
    MR_Integer mdprof_cgi__Cast_HeadVar2_5 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__Cast_HeadVar1_4, mdprof_cgi__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0(
  MR_Word mdprof_cgi__HeadVar__2_1,
  MR_Word mdprof_cgi__HeadVar__2_2)
{
  {
    MR_bool mdprof_cgi__succeeded = (mdprof_cgi__HeadVar__2_1 == mdprof_cgi__HeadVar__2_2);

    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Integer mdprof_cgi__CastX_10 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
    MR_Integer mdprof_cgi__CastY_11 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

    mdprof_cgi__succeeded = (mdprof_cgi__CastX_10 == mdprof_cgi__CastY_11);
    if (mdprof_cgi__succeeded)
      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdprof_cgi__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdprof_cgi__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdprof_cgi__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdprof_cgi__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdprof_cgi__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdprof_cgi__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mdprof_cgi__Var_14 = (MR_Integer) mdprof_cgi__Var_13;
                  MR_Integer mdprof_cgi__Var_15 = (MR_Integer) mdprof_cgi__ArgY1_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__Var_14, mdprof_cgi__Var_15);
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
mdprof_cgi____Unify____detach_process_result_0_0(
  MR_Word mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Integer mdprof_cgi__CastX_9 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
    MR_Integer mdprof_cgi__CastY_10 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

    mdprof_cgi__succeeded = (mdprof_cgi__CastX_9 == mdprof_cgi__CastY_10);
    if (mdprof_cgi__succeeded)
      mdprof_cgi__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdprof_cgi__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdprof_cgi__CastX_5 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
                MR_Integer mdprof_cgi__CastY_6 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

                mdprof_cgi__succeeded = (mdprof_cgi__CastY_6 == mdprof_cgi__CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdprof_cgi__CastX_7 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
                MR_Integer mdprof_cgi__CastY_8 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

                mdprof_cgi__succeeded = (mdprof_cgi__CastY_8 == mdprof_cgi__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdprof_cgi__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdprof_cgi__ArgY1_4;

            mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdprof_cgi__succeeded)
              {
                mdprof_cgi__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));
                mdprof_cgi__succeeded = (mdprof_cgi__ArgX1_3 == mdprof_cgi__ArgY1_4);
              }
          }
          break;
      }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Integer mdprof_cgi__CastX_9 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
    MR_Integer mdprof_cgi__CastY_10 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

    mdprof_cgi__succeeded = (mdprof_cgi__CastX_9 == mdprof_cgi__CastY_10);
    if (mdprof_cgi__succeeded)
      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdprof_cgi__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdprof_cgi__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdprof_cgi__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdprof_cgi__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdprof_cgi__Var_8;

        {
          query____Compare____cmd_0_0(&mdprof_cgi__Var_8, mdprof_cgi__ArgX1_4, mdprof_cgi__ArgY1_5);
        }
        mdprof_cgi__succeeded = (mdprof_cgi__Var_8 == (MR_Integer) 0);
        mdprof_cgi__succeeded = !(mdprof_cgi__succeeded);
        if (mdprof_cgi__succeeded)
          *mdprof_cgi__HeadVar__1_1 = mdprof_cgi__Var_8;
        else
          {
            query____Compare____preferences_indication_0_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__ArgX2_6, mdprof_cgi__ArgY2_7);
          }
      }
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0(
  MR_Word mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Integer mdprof_cgi__CastX_7 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
    MR_Integer mdprof_cgi__CastY_8 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

    mdprof_cgi__succeeded = (mdprof_cgi__CastX_7 == mdprof_cgi__CastY_8);
    if (mdprof_cgi__succeeded)
      mdprof_cgi__succeeded = MR_TRUE;
    else
      {
        MR_Word mdprof_cgi__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdprof_cgi__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdprof_cgi__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdprof_cgi__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 1)));

        {
          mdprof_cgi__succeeded = query____Unify____cmd_0_0(mdprof_cgi__ArgX1_3, mdprof_cgi__ArgY1_4);
        }
        if (mdprof_cgi__succeeded)
          {
            mdprof_cgi__succeeded = query____Unify____preferences_indication_0_0(mdprof_cgi__ArgX2_5, mdprof_cgi__ArgY2_6);
          }
      }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word mdprof_cgi__HeadVar__2_2,
  MR_Word mdprof_cgi__HeadVar__3_3)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Integer mdprof_cgi__Cast_HeadVar1_4 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
    MR_Integer mdprof_cgi__Cast_HeadVar2_5 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__Cast_HeadVar1_4, mdprof_cgi__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0(
  MR_Word mdprof_cgi__HeadVar__2_1,
  MR_Word mdprof_cgi__HeadVar__2_2)
{
  {
    MR_bool mdprof_cgi__succeeded = (mdprof_cgi__HeadVar__2_1 == mdprof_cgi__HeadVar__2_2);

    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi__defaults_2_p_0(
  MR_Word * mdprof_cgi__HeadVar__1_1,
  MR_Word * mdprof_cgi__HeadVar__2_2,
  MR_Cont mdprof_cgi__cont,
  void * mdprof_cgi__cont_env_ptr)
{
  {
    MR_bool mdprof_cgi__succeeded;

    {
      MR_Integer mdprof_cgi__slot_0 = (MR_Integer) 0;

      do
        {
          *mdprof_cgi__HeadVar__1_1 = ((&mdprof_cgi_vector_common_6[0 + mdprof_cgi__slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_0;
          *mdprof_cgi__HeadVar__2_2 = ((&mdprof_cgi_vector_common_6[0 + mdprof_cgi__slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_1;
          {
            mdprof_cgi__cont(mdprof_cgi__cont_env_ptr);
          }
          mdprof_cgi__slot_0 = (mdprof_cgi__slot_0 + (MR_Integer) 1);
        }
      while ((mdprof_cgi__slot_0 < (MR_Integer) 19));
    }
  }
}

static MR_bool MR_CALL 
mdprof_cgi__long_2_p_0(
  MR_String mdprof_cgi__HeadVar__1_1,
  MR_Word * mdprof_cgi__HeadVar__2_2)
{
  {
    MR_bool mdprof_cgi__succeeded;

    {
      MR_Integer mdprof_cgi__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 0)) {
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, mdprof_cgi__HeadVar__1_1, (MR_String) "canonical-clique"))
                mdprof_cgi__case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, mdprof_cgi__HeadVar__1_1, (MR_String) "clique"))
                mdprof_cgi__case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, mdprof_cgi__HeadVar__1_1, (MR_String) "debug"))
                  mdprof_cgi__case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 99:
                if (((((((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 3)) == (MR_Integer) 111)) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 4)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 5)) == (MR_Integer) 101))))
                  switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 6)) {
                    case (MR_Integer) 0:
                      mdprof_cgi__case_num_0 = (MR_Integer) 3;
                      break;
                    case (MR_Integer) 45:
                      switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 7)) {
                        case (MR_Integer) 99:
                          if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "decode-cmd"))
                            mdprof_cgi__case_num_0 = (MR_Integer) 4;
                          break;
                        case (MR_Integer) 112:
                          if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "decode-prefs"))
                            mdprof_cgi__case_num_0 = (MR_Integer) 5;
                          break;
                      }
                      break;
                  }
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, mdprof_cgi__HeadVar__1_1, (MR_String) "detach-process"))
                  mdprof_cgi__case_num_0 = (MR_Integer) 6;
                break;
            }
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "help"))
            mdprof_cgi__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "localhost"))
            mdprof_cgi__case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 109:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "modules"))
            mdprof_cgi__case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "proc"))
            mdprof_cgi__case_num_0 = (MR_Integer) 10;
          break;
        case (MR_Integer) 113:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "quit"))
            mdprof_cgi__case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 114:
          switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (((((((((((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 2)) == (MR_Integer) 99)) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 4)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 6)) == (MR_Integer) 45))))
                switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 7)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "record-loop"))
                      mdprof_cgi__case_num_0 = (MR_Integer) 12;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "record-startup"))
                      mdprof_cgi__case_num_0 = (MR_Integer) 13;
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, mdprof_cgi__HeadVar__1_1, (MR_String) "root"))
                mdprof_cgi__case_num_0 = (MR_Integer) 14;
              break;
          }
          break;
        case (MR_Integer) 115:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "server-process"))
            mdprof_cgi__case_num_0 = (MR_Integer) 15;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "timeout"))
            mdprof_cgi__case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 118:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "version"))
            mdprof_cgi__case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "write-query-string"))
            mdprof_cgi__case_num_0 = (MR_Integer) 18;
          break;
      }
      if ((mdprof_cgi__case_num_0 < (MR_Integer) 0))
        mdprof_cgi__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          *mdprof_cgi__HeadVar__2_2 = ((&mdprof_cgi_vector_common_5[0 + mdprof_cgi__case_num_0]))->mdprof_cgi__vector_common_type_5_0__vct_5_f_0;
          mdprof_cgi__succeeded = MR_TRUE;
        }
    }
    return mdprof_cgi__succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_cgi__short_2_p_0(
  MR_Char mdprof_cgi__HeadVar__1_1,
  MR_Word * mdprof_cgi__HeadVar__2_2)
{
  {
    MR_bool mdprof_cgi__succeeded;

    switch (mdprof_cgi__HeadVar__1_1) {
      default:
        mdprof_cgi__succeeded = MR_FALSE;
        break;
      case (MR_Char) 67:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 1;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 99:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 0;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 100:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 2;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 109:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 9;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 112:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 10;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 113:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 11;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 114:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 12;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 115:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 15;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 116:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 16;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 119:
        {
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 18;
          mdprof_cgi__succeeded = MR_TRUE;
        }
        break;
    }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi__raw_detach_process_3_p_0(
  MR_Integer * mdprof_cgi__ResCode_1)
{
  {
    MR_bool mdprof_cgi__succeeded;

{
#define MR_PROC_LABEL mdprof_cgi__raw_detach_process_3_p_0

	MR_Integer ResCode;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) (MR_Integer) 0 ;
		{
{
#ifdef  MR_DEEP_PROFILER_ENABLED
    pid_t   status;

    fflush(stdout);
    fflush(stderr);
    status = fork();
    if (status < 0) {
        ResCode = -1;
    } else if (status > 0) {
        ResCode = 1;
    } else {
#ifdef  MR_HAVE_SETPGID
        /*
        ** Try to detach the server process from the parent's process group,
        ** in case it uses the number of processes in the process group
        ** to decide when the cgi `script' is done.
        */
        setpgid(0, 0);
#else
        /* Hope that web server doesn't depend on the process group. */
#endif
        ResCode = 0;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	 *mdprof_cgi__ResCode_1  = ResCode;
}
  }
}

static void MR_CALL 
mdprof_cgi__check_for_existing_fifos_5_p_0(
  MR_String mdprof_cgi__Fifo1_1,
  MR_String mdprof_cgi__Fifo2_2,
  MR_Integer * mdprof_cgi__FifoCount_3)
{
  {
    MR_bool mdprof_cgi__succeeded;

{
#define MR_PROC_LABEL mdprof_cgi__check_for_existing_fifos_5_p_0

	MR_String Fifo1;
	MR_String Fifo2;
	MR_Integer FifoCount;
	MR_Word S0;
	MR_Word S;

	Fifo1 =  mdprof_cgi__Fifo1_1 ;
	Fifo2 =  mdprof_cgi__Fifo2_2 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{

#ifdef  MR_DEEP_PROFILER_ENABLED
    struct stat statbuf;
    int         status;

    FifoCount = 0;
    status = stat(Fifo1, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }
    status = stat(Fifo2, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif


		;}
#undef MR_PROC_LABEL
	 *mdprof_cgi__FifoCount_3  = FifoCount;
}
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mdprof_cgi__env_ptr_arg)
{
  {
    struct mdprof_cgi__main_2_p_0_4_env_0_s * mdprof_cgi__env_ptr = (struct mdprof_cgi__main_2_p_0_4_env_0_s *) mdprof_cgi__env_ptr_arg;

    *((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont)((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2,
  MR_Cont mdprof_cgi__cont,
  void * mdprof_cgi__cont_env_ptr)
{
  {
    struct mdprof_cgi__main_2_p_0_4_env_0_s mdprof_cgi__env;

    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_cgi__wrapper_arg_1;
    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_cgi__wrapper_arg_2;
    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__cont = mdprof_cgi__cont;
    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr = mdprof_cgi__cont_env_ptr;
    {
      MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;

      {
        mdprof_cgi__defaults_2_p_0(&(mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_cgi__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
    MR_Word mdprof_cgi__conv1_HeadVar__2_2;

    {
      mdprof_cgi__succeeded = mdprof_cgi__long_2_p_0(((MR_String) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv1_HeadVar__2_2);
    }
    if (mdprof_cgi__succeeded)
      {
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv1_HeadVar__2_2));
        mdprof_cgi__succeeded = MR_TRUE;
      }
    return mdprof_cgi__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
    MR_Word mdprof_cgi__conv0_HeadVar__2_2;

    {
      mdprof_cgi__succeeded = mdprof_cgi__short_2_p_0(((MR_Char) (MR_Word) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv0_HeadVar__2_2);
    }
    if (mdprof_cgi__succeeded)
      {
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__2_2));
        mdprof_cgi__succeeded = MR_TRUE;
      }
    return mdprof_cgi__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Word mdprof_cgi__MaybeQueryString_4;

    {
      mercury__io__write_string_3_p_0((MR_String) "Content-type: text/html\n\n");
    }
    {
      mercury__io__flush_output_2_p_0();
    }
    {
      mercury__io__get_environment_var_4_p_0((MR_String) "QUERY_STRING", &mdprof_cgi__MaybeQueryString_4);
    }
    if ((mdprof_cgi__MaybeQueryString_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mdprof_cgi__process_command_line_2_p_0();
      }
    else
      {
        MR_String mdprof_cgi__QueryString0_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeQueryString_4, (MR_Integer) 0)));
        MR_Word mdprof_cgi__MaybeOptions_7;
        MR_Word mdprof_cgi__Options_8;
        MR_Word mdprof_cgi__MaybeDeepQuery_10;
        MR_Word mdprof_cgi__Var_6;

        {
          mercury__getopt__process_options_4_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_2[8]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__Var_6, &mdprof_cgi__MaybeOptions_7);
        }
        if (((MR_tag((MR_Word) mdprof_cgi__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "mdprof_cgi: error parsing empty command line");
              return;
            }
          }
        else
          mdprof_cgi__Options_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeOptions_7, (MR_Integer) 0)));
        {
          mdprof_cgi__MaybeDeepQuery_10 = query__string_to_maybe_query_1_f_0(mdprof_cgi__QueryString0_5);
        }
        if ((mdprof_cgi__MaybeDeepQuery_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "Bad URL; expected filename \n");
            }
          }
        else
          {
            MR_Word mdprof_cgi__DeepQuery_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeDeepQuery_10, (MR_Integer) 0)));
            MR_Word mdprof_cgi__MaybeCmd_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__DeepQuery_11, (MR_Integer) 0)));
            MR_String mdprof_cgi__DeepFileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__DeepQuery_11, (MR_Integer) 1)));
            MR_Word mdprof_cgi__MaybePrefs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__DeepQuery_11, (MR_Integer) 2)));
            MR_Word mdprof_cgi__Cmd_15;

            if ((mdprof_cgi__MaybeCmd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mdprof_cgi__Cmd_15 = query__default_command_0_f_0();
              }
            else
              mdprof_cgi__Cmd_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeCmd_12, (MR_Integer) 0)));
            {
              mdprof_cgi__process_query_6_p_0(mdprof_cgi__Cmd_15, mdprof_cgi__DeepFileName_13, mdprof_cgi__MaybePrefs_14, mdprof_cgi__Options_8);
            }
          }
      }
  }
}

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_3(
  void * mdprof_cgi__env_ptr_arg)
{
  {
    struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s * mdprof_cgi__env_ptr = (struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s *) mdprof_cgi__env_ptr_arg;

    *((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__cont)((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_4(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2,
  MR_Cont mdprof_cgi__cont,
  void * mdprof_cgi__cont_env_ptr)
{
  {
    struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s mdprof_cgi__env;

    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1 = mdprof_cgi__wrapper_arg_1;
    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2 = mdprof_cgi__wrapper_arg_2;
    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__cont = mdprof_cgi__cont;
    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr = mdprof_cgi__cont_env_ptr;
    {
      MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;

      {
        mdprof_cgi__defaults_2_p_0(&(mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2, mdprof_cgi__process_command_line_2_p_0_3, &mdprof_cgi__env);
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_2(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
    MR_Word mdprof_cgi__conv1_HeadVar__2_2;

    {
      mdprof_cgi__succeeded = mdprof_cgi__long_2_p_0(((MR_String) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv1_HeadVar__2_2);
    }
    if (mdprof_cgi__succeeded)
      {
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv1_HeadVar__2_2));
        mdprof_cgi__succeeded = MR_TRUE;
      }
    return mdprof_cgi__succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_1(
  MR_Box mdprof_cgi__closure_arg,
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box * mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
    MR_Word mdprof_cgi__conv0_HeadVar__2_2;

    {
      mdprof_cgi__succeeded = mdprof_cgi__short_2_p_0(((MR_Char) (MR_Word) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv0_HeadVar__2_2);
    }
    if (mdprof_cgi__succeeded)
      {
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__2_2));
        mdprof_cgi__succeeded = MR_TRUE;
      }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0(void)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Word mdprof_cgi__TypeCtorInfo_60_60;
    MR_String mdprof_cgi__ProgName_4;
    MR_Word mdprof_cgi__Args0_5;
    MR_Word mdprof_cgi__Args_7;
    MR_Word mdprof_cgi__MaybeOptions_8;

    {
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_cgi", &mdprof_cgi__ProgName_4);
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mdprof_cgi__Args0_5);
    }
    mdprof_cgi__TypeCtorInfo_60_60 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
    {
      mercury__getopt__process_options_4_p_0(mdprof_cgi__TypeCtorInfo_60_60, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_2[4]), mdprof_cgi__Args0_5, &mdprof_cgi__Args_7, &mdprof_cgi__MaybeOptions_8);
    }
    if (((MR_tag((MR_Word) mdprof_cgi__MaybeOptions_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdprof_cgi__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeOptions_8, (MR_Integer) 0)));

        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0(mdprof_cgi__ProgName_4);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": error parsing options: ");
        }
        {
          mercury__io__write_string_3_p_0(mdprof_cgi__Msg_15);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_Word mdprof_cgi__Options_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeOptions_8, (MR_Integer) 0)));
        MR_Word mdprof_cgi__Help_10;
        MR_Word mdprof_cgi__Version_11;
        MR_Word mdprof_cgi__Decode_12;
        MR_Word mdprof_cgi__DecodeCmd_13;
        MR_Word mdprof_cgi__DecodePrefs_14;

        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 7)), &mdprof_cgi__Help_10);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 17)), &mdprof_cgi__Version_11);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 3)), &mdprof_cgi__Decode_12);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 4)), &mdprof_cgi__DecodeCmd_13);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 5)), &mdprof_cgi__DecodePrefs_14);
        }
        switch (mdprof_cgi__Help_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "Usage: ");
              }
              {
                mercury__io__write_string_3_p_0(mdprof_cgi__ProgName_4);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "This program doesn\'t expect any arguments;\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "instead it decides what to do based on the\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "QUERY_STRING environment variable.\n");
              }
            }
            break;
        }
        switch (mdprof_cgi__Version_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              mdprof_cgi__write_version_message_3_p_0(mdprof_cgi__ProgName_4);
            }
            break;
        }
        mdprof_cgi__succeeded = (mdprof_cgi__Decode_12 == (MR_Integer) 0);
        if (mdprof_cgi__succeeded)
          {
            mdprof_cgi__succeeded = (mdprof_cgi__DecodeCmd_13 == (MR_Integer) 0);
            if (mdprof_cgi__succeeded)
              mdprof_cgi__succeeded = (mdprof_cgi__DecodePrefs_14 == (MR_Integer) 0);
          }
        if (mdprof_cgi__succeeded)
          {
          }
        else
          {
            mdprof_cgi__decode_input_lines_5_p_0(mdprof_cgi__Decode_12, mdprof_cgi__DecodeCmd_13, mdprof_cgi__DecodePrefs_14);
          }
        mdprof_cgi__succeeded = (mdprof_cgi__Help_10 == (MR_Integer) 0);
        if (mdprof_cgi__succeeded)
          {
            mdprof_cgi__succeeded = (mdprof_cgi__Version_11 == (MR_Integer) 0);
            if (mdprof_cgi__succeeded)
              {
                mdprof_cgi__succeeded = (mdprof_cgi__Decode_12 == (MR_Integer) 0);
                if (mdprof_cgi__succeeded)
                  {
                    mdprof_cgi__succeeded = (mdprof_cgi__DecodeCmd_13 == (MR_Integer) 0);
                    if (mdprof_cgi__succeeded)
                      mdprof_cgi__succeeded = (mdprof_cgi__DecodePrefs_14 == (MR_Integer) 0);
                  }
              }
          }
        if (mdprof_cgi__succeeded)
          {
            mdprof_cgi__process_args_5_p_0(mdprof_cgi__ProgName_4, mdprof_cgi__Args_7, mdprof_cgi__Options_9);
          }
        else
          {
          }
      }
  }
}

static void MR_CALL 
mdprof_cgi__process_args_5_p_0(
  MR_String mdprof_cgi__ProgName_6,
  MR_Word mdprof_cgi__Args_7,
  MR_Word mdprof_cgi__Options_8)
{
  {
    MR_bool mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__Args_7)) == (MR_mktag((MR_Integer) 1)));
    MR_String mdprof_cgi__DeepFileName_10;
    MR_Word mdprof_cgi__Var_14;

    if (mdprof_cgi__succeeded)
      {
        mdprof_cgi__DeepFileName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__Args_7, (MR_Integer) 0)));
        mdprof_cgi__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__Args_7, (MR_Integer) 1)));
        mdprof_cgi__succeeded = (mdprof_cgi__Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (mdprof_cgi__succeeded)
      {
        MR_Word mdprof_cgi__TypeCtorInfo_20_48 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
        MR_Word mdprof_cgi__Var_15;
        MR_Word mdprof_cgi__Quit_33;
        MR_Word mdprof_cgi__Root_34;
        MR_Word mdprof_cgi__Modules_35;
        MR_Integer mdprof_cgi__CliqueNum_36;
        MR_Integer mdprof_cgi__ProcProcNum_37;

        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 11)), &mdprof_cgi__Quit_33);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 12)), &mdprof_cgi__Root_34);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 9)), &mdprof_cgi__Modules_35);
        }
        {
          mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 1)), &mdprof_cgi__CliqueNum_36);
        }
        {
          mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 10)), &mdprof_cgi__ProcProcNum_37);
        }
        mdprof_cgi__succeeded = (mdprof_cgi__Root_34 == (MR_Integer) 1);
        if (mdprof_cgi__succeeded)
          {
            mdprof_cgi__Var_15 = (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_3[2]);
          }
        else
          {
            mdprof_cgi__succeeded = (mdprof_cgi__Modules_35 == (MR_Integer) 1);
            if (mdprof_cgi__succeeded)
              mdprof_cgi__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
            else
              {
                mdprof_cgi__succeeded = (mdprof_cgi__CliqueNum_36 > (MR_Integer) 0);
                if (mdprof_cgi__succeeded)
                  {
                    MR_Word mdprof_cgi__Var_45 = (MR_Word) mdprof_cgi__CliqueNum_36;

                    {
                      mdprof_cgi__Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mdprof_cgi__Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), mdprof_cgi__Var_15, 1) = ((MR_Box) (mdprof_cgi__Var_45));
                    }
                  }
                else
                  {
                    mdprof_cgi__succeeded = (mdprof_cgi__ProcProcNum_37 > (MR_Integer) 0);
                    if (mdprof_cgi__succeeded)
                      {
                        MR_Word mdprof_cgi__Var_47 = (MR_Word) mdprof_cgi__ProcProcNum_37;

                        {
                          mdprof_cgi__Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mdprof_cgi__Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                          MR_hl_field(MR_mktag(3), mdprof_cgi__Var_15, 1) = ((MR_Box) (mdprof_cgi__Var_47));
                        }
                      }
                    else
                      {
                        mdprof_cgi__succeeded = (mdprof_cgi__Quit_33 == (MR_Integer) 1);
                        if (mdprof_cgi__succeeded)
                          mdprof_cgi__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        else
                          mdprof_cgi__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                      }
                  }
              }
          }
        {
          mdprof_cgi__process_query_6_p_0(mdprof_cgi__Var_15, mdprof_cgi__DeepFileName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdprof_cgi__Options_8);
        }
      }
    else
      {
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Usage: ");
        }
        {
          mercury__io__write_string_3_p_0(mdprof_cgi__ProgName_6);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "This program doesn\'t expect any arguments;\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "instead it decides what to do based on the\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "QUERY_STRING environment variable.\n");
        }
      }
  }
}

static void MR_CALL 
mdprof_cgi__process_query_6_p_0(
  MR_Word mdprof_cgi__Cmd0_7,
  MR_String mdprof_cgi__DeepFileName0_8,
  MR_Word mdprof_cgi__MaybePref_9,
  MR_Word mdprof_cgi__Options0_10)
{
  {
    MR_bool mdprof_cgi__succeeded = (mdprof_cgi__Cmd0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    MR_Word mdprof_cgi__Cmd_12;
    MR_Word mdprof_cgi__PrefInd_14;
    MR_String mdprof_cgi__DeepFileName_16;
    MR_Word mdprof_cgi__Options_17;
    MR_String mdprof_cgi__DeepFileNamePrime_15;
    MR_String mdprof_cgi___BaseFileName_18;

    if (mdprof_cgi__succeeded)
      mdprof_cgi__Cmd_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    else
      mdprof_cgi__Cmd_12 = mdprof_cgi__Cmd0_7;
    if ((mdprof_cgi__MaybePref_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdprof_cgi__PrefInd_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mdprof_cgi__Pref_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybePref_9, (MR_Integer) 0)));

        mdprof_cgi__PrefInd_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) mdprof_cgi__Pref_13);
      }
    {
      mdprof_cgi__succeeded = mercury__string__remove_suffix_3_p_0(mdprof_cgi__DeepFileName0_8, (MR_String) ".localhost", &mdprof_cgi__DeepFileNamePrime_15);
    }
    if (mdprof_cgi__succeeded)
      {
        mdprof_cgi__DeepFileName_16 = mdprof_cgi__DeepFileNamePrime_15;
        {
          mercury__map__det_update_4_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 8)), ((MR_Box) (MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[1]))), mdprof_cgi__Options0_10, &mdprof_cgi__Options_17);
        }
      }
    else
      {
        mdprof_cgi__DeepFileName_16 = mdprof_cgi__DeepFileName0_8;
        mdprof_cgi__Options_17 = mdprof_cgi__Options0_10;
      }
    {
      mdprof_cgi__succeeded = mercury__string__remove_suffix_3_p_0(mdprof_cgi__DeepFileName_16, (MR_String) ".data", &mdprof_cgi___BaseFileName_18);
    }
    if (mdprof_cgi__succeeded)
      {
        MR_String mdprof_cgi__ToServerPipe_19;
        MR_String mdprof_cgi__FromServerPipe_20;
        MR_String mdprof_cgi__StartupFile_21;
        MR_String mdprof_cgi__MutexFile_22;
        MR_Word mdprof_cgi__Debug_23;
        MR_String mdprof_cgi__WantFile_24;
        MR_Integer mdprof_cgi__FifoCount_25;

        {
          mdprof_cgi__ToServerPipe_19 = interface__to_server_pipe_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
        {
          mdprof_cgi__FromServerPipe_20 = interface__from_server_pipe_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
        {
          mdprof_cgi__StartupFile_21 = interface__server_startup_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
        {
          mdprof_cgi__MutexFile_22 = interface__mutex_file_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, mdprof_cgi__Options_17, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_23);
        }
        {
          mdprof_cgi__WantFile_24 = interface__want_file_name_0_f_0();
        }
        {
          timeout__make_want_file_3_p_0(mdprof_cgi__WantFile_24);
        }
        {
          timeout__get_lock_4_p_0(mdprof_cgi__Debug_23, mdprof_cgi__MutexFile_22);
        }
        switch (mdprof_cgi__Debug_23) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String mdprof_cgi__Var_36;
              MR_String mdprof_cgi__Var_37;

              {
                mdprof_cgi__Var_36 = interface__want_dir_0_f_0();
              }
              {
                mdprof_cgi__Var_37 = interface__want_prefix_0_f_0();
              }
              {
                timeout__setup_signals_5_p_0(mdprof_cgi__MutexFile_22, mdprof_cgi__Var_36, mdprof_cgi__Var_37);
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
{
#define MR_PROC_LABEL mdprof_cgi__process_query_6_p_0

	MR_String Fifo1;
	MR_String Fifo2;
	MR_Integer FifoCount;
	MR_Word S0;
	MR_Word S;

	Fifo1 =  mdprof_cgi__ToServerPipe_19 ;
	Fifo2 =  mdprof_cgi__FromServerPipe_20 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{

#ifdef  MR_DEEP_PROFILER_ENABLED
    struct stat statbuf;
    int         status;

    FifoCount = 0;
    status = stat(Fifo1, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }
    status = stat(Fifo2, &statbuf);
    if ((status == 0) && (S_ISFIFO(statbuf.st_mode))) {
        FifoCount++;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif


		;}
#undef MR_PROC_LABEL
	 mdprof_cgi__FifoCount_25  = FifoCount;
}
        mdprof_cgi__succeeded = (mdprof_cgi__FifoCount_25 == (MR_Integer) 0);
        if (mdprof_cgi__succeeded)
          {
            mdprof_cgi__handle_query_from_new_server_11_p_0(mdprof_cgi__Cmd_12, mdprof_cgi__PrefInd_14, mdprof_cgi__DeepFileName_16, mdprof_cgi__ToServerPipe_19, mdprof_cgi__FromServerPipe_20, mdprof_cgi__StartupFile_21, mdprof_cgi__MutexFile_22, mdprof_cgi__WantFile_24, mdprof_cgi__Options_17);
          }
        else
          {
            mdprof_cgi__succeeded = (mdprof_cgi__FifoCount_25 == (MR_Integer) 2);
            if (mdprof_cgi__succeeded)
              {
                mdprof_cgi__handle_query_from_existing_server_9_p_0(mdprof_cgi__Cmd_12, mdprof_cgi__PrefInd_14, mdprof_cgi__ToServerPipe_19, mdprof_cgi__FromServerPipe_20, mdprof_cgi__MutexFile_22, mdprof_cgi__WantFile_24, mdprof_cgi__Options_17);
              }
            else
              {
                {
                  timeout__release_lock_4_p_0(mdprof_cgi__Debug_23, mdprof_cgi__MutexFile_22);
                }
                {
                  timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_24);
                }
                {
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "mdprof internal error: bad fifo count");
                }
              }
          }
      }
    else
      {
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "<h3> Invalid file name ");
        }
        {
          mercury__io__write_string_3_p_0(mdprof_cgi__DeepFileName_16);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ".<h3>\n\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "Deep profiling data files must have a .data suffix, to allow the deep profiler to locate any related files.\n");
        }
      }
  }
}

static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_11_p_0(
  MR_Word mdprof_cgi__Cmd_12,
  MR_Word mdprof_cgi__PrefInd_13,
  MR_String mdprof_cgi__FileName_14,
  MR_String mdprof_cgi__ToServerPipe_15,
  MR_String mdprof_cgi__FromServerPipe_16,
  MR_String mdprof_cgi__StartupFile_17,
  MR_String mdprof_cgi__MutexFile_18,
  MR_String mdprof_cgi__WantFile_19,
  MR_Word mdprof_cgi__Options_20)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Word mdprof_cgi__TypeCtorInfo_82_82 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
    MR_Word mdprof_cgi__LocalHost_22;
    MR_String mdprof_cgi__Machine_23;
    MR_String mdprof_cgi__ScriptName_24;
    MR_Word mdprof_cgi__Canonical_25;
    MR_Word mdprof_cgi__ServerProcess_26;
    MR_Word mdprof_cgi__Debug_27;
    MR_Word mdprof_cgi__RecordStartup_28;
    MR_Word mdprof_cgi__MaybeStartupStream_31;
    MR_Word mdprof_cgi__StartupResult_33;

    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 8)), &mdprof_cgi__LocalHost_22);
    }
    switch (mdprof_cgi__LocalHost_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          conf__server_name_port_3_p_0(&mdprof_cgi__Machine_23);
        }
        break;
      case (MR_Integer) 1:
        mdprof_cgi__Machine_23 = (MR_String) "localhost";
        break;
    }
    {
      conf__script_name_3_p_0(&mdprof_cgi__ScriptName_24);
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 0)), &mdprof_cgi__Canonical_25);
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 15)), &mdprof_cgi__ServerProcess_26);
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_27);
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 13)), &mdprof_cgi__RecordStartup_28);
    }
    switch (mdprof_cgi__RecordStartup_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdprof_cgi__MaybeStartupStream_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdprof_cgi__StartupStreamRes_29;

          {
            mercury__io__open_output_4_p_0(mdprof_cgi__StartupFile_17, &mdprof_cgi__StartupStreamRes_29);
          }
          if (((MR_tag((MR_Word) mdprof_cgi__StartupStreamRes_29)) == (MR_mktag((MR_Integer) 1))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "cannot create startup file");
                return;
              }
            }
          else
            {
              MR_Word mdprof_cgi__StartupStream0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__StartupStreamRes_29, (MR_Integer) 0)));

              {
                mdprof_cgi__MaybeStartupStream_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeStartupStream_31, 0) = ((MR_Box) (mdprof_cgi__StartupStream0_30));
              }
              {
                timeout__register_file_for_cleanup_3_p_0(mdprof_cgi__StartupFile_17);
              }
            }
        }
        break;
    }
    {
      startup__read_and_startup_default_deep_options_9_p_0(mdprof_cgi__Machine_23, mdprof_cgi__ScriptName_24, mdprof_cgi__FileName_14, mdprof_cgi__Canonical_25, mdprof_cgi__MaybeStartupStream_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__StartupResult_33);
    }
    if (((MR_tag((MR_Word) mdprof_cgi__StartupResult_33)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdprof_cgi__Error_39 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__StartupResult_33, (MR_Integer) 0)));

        {
          timeout__release_lock_4_p_0(mdprof_cgi__Debug_27, mdprof_cgi__MutexFile_18);
        }
        {
          timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_19);
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0(mdprof_cgi__Error_39);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    else
      {
        MR_Word mdprof_cgi__Deep_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__StartupResult_33, (MR_Integer) 0)));
        MR_Word mdprof_cgi__Pref_35;
        MR_String mdprof_cgi__HTML_36;

        {
          mdprof_cgi__Pref_35 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_34, mdprof_cgi__PrefInd_13);
        }
        {
          query__try_exec_4_p_0(mdprof_cgi__Cmd_12, mdprof_cgi__Pref_35, mdprof_cgi__Deep_34, &mdprof_cgi__HTML_36);
        }
        if ((mdprof_cgi__MaybeStartupStream_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word mdprof_cgi__StartupStream1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeStartupStream_31, (MR_Integer) 0)));

            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_37, (MR_String) "query 0 output:\n");
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_37, mdprof_cgi__HTML_36);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_37, (MR_String) "\n");
            }
            {
              mercury__io__flush_output_3_p_0(mdprof_cgi__StartupStream1_37);
            }
          }
        switch (mdprof_cgi__ServerProcess_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                timeout__release_lock_4_p_0(mdprof_cgi__Debug_27, mdprof_cgi__MutexFile_18);
              }
              {
                timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_19);
              }
              {
                mercury__io__write_string_3_p_0(mdprof_cgi__HTML_36);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdprof_cgi__Success_38;

              {
                mdprof_cgi__make_pipes_4_p_0(mdprof_cgi__FileName_14, &mdprof_cgi__Success_38);
              }
              switch (mdprof_cgi__Success_38) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      timeout__release_lock_4_p_0(mdprof_cgi__Debug_27, mdprof_cgi__MutexFile_18);
                    }
                    {
                      timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_19);
                    }
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "could not make pipes\n");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__io__write_string_3_p_0(mdprof_cgi__HTML_36);
                    }
                    {
                      mercury__io__flush_output_2_p_0();
                    }
                    {
                      mdprof_cgi__start_server_9_p_0(mdprof_cgi__Options_20, mdprof_cgi__ToServerPipe_15, mdprof_cgi__FromServerPipe_16, mdprof_cgi__MaybeStartupStream_31, mdprof_cgi__MutexFile_18, mdprof_cgi__WantFile_19, mdprof_cgi__Deep_34);
                    }
                  }
                  break;
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
mdprof_cgi__make_pipes_4_p_0(
  MR_String mdprof_cgi__FileName_5,
  MR_Word * mdprof_cgi__Success_6)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_String mdprof_cgi__ToServerPipe_8;
    MR_String mdprof_cgi__FromServerPipe_9;
    MR_String mdprof_cgi__MakeToServerPipeCmd_10;
    MR_String mdprof_cgi__MakeFromServerPipeCmd_11;
    MR_Word mdprof_cgi__ToServerRes_12;
    MR_Word mdprof_cgi__FromServerRes_13;
    MR_Integer mdprof_cgi__Var_20;
    MR_Integer mdprof_cgi__Var_21;

    {
      mdprof_cgi__ToServerPipe_8 = interface__to_server_pipe_name_1_f_0(mdprof_cgi__FileName_5);
    }
    {
      mdprof_cgi__FromServerPipe_9 = interface__from_server_pipe_name_1_f_0(mdprof_cgi__FileName_5);
    }
    {
      mdprof_cgi__MakeToServerPipeCmd_10 = conf__make_pipe_cmd_1_f_0(mdprof_cgi__ToServerPipe_8);
    }
    {
      mdprof_cgi__MakeFromServerPipeCmd_11 = conf__make_pipe_cmd_1_f_0(mdprof_cgi__FromServerPipe_9);
    }
    {
      mercury__io__call_system_4_p_0(mdprof_cgi__MakeToServerPipeCmd_10, &mdprof_cgi__ToServerRes_12);
    }
    {
      mercury__io__call_system_4_p_0(mdprof_cgi__MakeFromServerPipeCmd_11, &mdprof_cgi__FromServerRes_13);
    }
    mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__ToServerRes_12)) == (MR_mktag((MR_Integer) 0)));
    if (mdprof_cgi__succeeded)
      {
        mdprof_cgi__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_cgi__ToServerRes_12, (MR_Integer) 0)));
        mdprof_cgi__succeeded = (mdprof_cgi__Var_20 == (MR_Integer) 0);
        if (mdprof_cgi__succeeded)
          {
            mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__FromServerRes_13)) == (MR_mktag((MR_Integer) 0)));
            if (mdprof_cgi__succeeded)
              {
                mdprof_cgi__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_cgi__FromServerRes_13, (MR_Integer) 0)));
                mdprof_cgi__succeeded = (mdprof_cgi__Var_21 == (MR_Integer) 0);
              }
          }
      }
    if (mdprof_cgi__succeeded)
      {
        {
          timeout__register_file_for_cleanup_3_p_0(mdprof_cgi__ToServerPipe_8);
        }
        {
          timeout__register_file_for_cleanup_3_p_0(mdprof_cgi__FromServerPipe_9);
        }
        *mdprof_cgi__Success_6 = (MR_Integer) 1;
      }
    else
      {
        MR_Word mdprof_cgi__Var_14;
        MR_Word mdprof_cgi__Var_15;

        {
          mercury__io__remove_file_4_p_0(mdprof_cgi__ToServerPipe_8, &mdprof_cgi__Var_14);
        }
        {
          mercury__io__remove_file_4_p_0(mdprof_cgi__FromServerPipe_9, &mdprof_cgi__Var_15);
        }
        *mdprof_cgi__Success_6 = (MR_Integer) 0;
      }
  }
}

static void MR_CALL 
mdprof_cgi__start_server_9_p_0(
  MR_Word mdprof_cgi__Options_10,
  MR_String mdprof_cgi__ToServerPipe_11,
  MR_String mdprof_cgi__FromServerPipe_12,
  MR_Word mdprof_cgi__MaybeStartupStream_13,
  MR_String mdprof_cgi__MutexFile_14,
  MR_String mdprof_cgi__WantFile_15,
  MR_Word mdprof_cgi__Deep_16)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Word mdprof_cgi__TypeCtorInfo_61_61 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
    MR_Word mdprof_cgi__DetachProcess_18;
    MR_Word mdprof_cgi__RecordLoop_19;
    MR_Word mdprof_cgi__Debug_20;

    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 6)), &mdprof_cgi__DetachProcess_18);
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 14)), &mdprof_cgi__RecordLoop_19);
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_20);
    }
    switch (mdprof_cgi__DetachProcess_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdprof_cgi__MaybeDebugStream_28;
          MR_Integer mdprof_cgi__TimeOut_29;
          MR_Word mdprof_cgi__Canonical_30;

          {
            timeout__release_lock_4_p_0(mdprof_cgi__Debug_20, mdprof_cgi__MutexFile_14);
          }
          {
            timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_15);
          }
          switch (mdprof_cgi__RecordLoop_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mdprof_cgi__MaybeDebugStream_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              mdprof_cgi__MaybeDebugStream_28 = mdprof_cgi__MaybeStartupStream_13;
              break;
          }
          {
            mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 16)), &mdprof_cgi__TimeOut_29);
          }
          {
            mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_cgi__Canonical_30);
          }
          {
            mdprof_cgi__server_loop_10_p_0(mdprof_cgi__ToServerPipe_11, mdprof_cgi__FromServerPipe_12, mdprof_cgi__TimeOut_29, mdprof_cgi__MaybeDebugStream_28, mdprof_cgi__Debug_20, mdprof_cgi__Canonical_30, (MR_Integer) 0, mdprof_cgi__Deep_16);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mdprof_cgi__ResCode_66;

{
#define MR_PROC_LABEL mdprof_cgi__start_server_9_p_0

	MR_Integer ResCode;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) (MR_Integer) 0 ;
		{
{
#ifdef  MR_DEEP_PROFILER_ENABLED
    pid_t   status;

    fflush(stdout);
    fflush(stderr);
    status = fork();
    if (status < 0) {
        ResCode = -1;
    } else if (status > 0) {
        ResCode = 1;
    } else {
#ifdef  MR_HAVE_SETPGID
        /*
        ** Try to detach the server process from the parent's process group,
        ** in case it uses the number of processes in the process group
        ** to decide when the cgi `script' is done.
        */
        setpgid(0, 0);
#else
        /* Hope that web server doesn't depend on the process group. */
#endif
        ResCode = 0;
    }

    S = S0;
#else
    MR_fatal_error("deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	 mdprof_cgi__ResCode_66  = ResCode;
}
          mdprof_cgi__succeeded = (mdprof_cgi__ResCode_66 < (MR_Integer) 0);
          if (mdprof_cgi__succeeded)
            {
              {
                timeout__delete_cleanup_files_2_p_0();
              }
              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
            }
          else
            {
              mdprof_cgi__succeeded = (mdprof_cgi__ResCode_66 > (MR_Integer) 0);
              if (mdprof_cgi__succeeded)
                {
                  {
                    timeout__release_lock_4_p_0(mdprof_cgi__Debug_20, mdprof_cgi__MutexFile_14);
                  }
                  {
                    timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_15);
                  }
                }
              else
                {
                  MR_Word mdprof_cgi__StdIn_72;
                  MR_Word mdprof_cgi__StdOut_73;
                  MR_Word mdprof_cgi__StdErr_74;
                  MR_Word mdprof_cgi__BinaryStdIn_75;
                  MR_Word mdprof_cgi__BinaryStdOut_76;
                  MR_Word mdprof_cgi__MaybeDebugStream_111;
                  MR_Integer mdprof_cgi__TimeOut_112;
                  MR_Word mdprof_cgi__Canonical_113;

                  {
                    timeout__unregister_file_for_cleanup_3_p_0(mdprof_cgi__MutexFile_14);
                  }
                  {
                    timeout__unregister_file_for_cleanup_3_p_0(mdprof_cgi__WantFile_15);
                  }
                  {
                    mercury__io__stdin_stream_3_p_0(&mdprof_cgi__StdIn_72);
                  }
                  {
                    mercury__io__close_input_3_p_0(mdprof_cgi__StdIn_72);
                  }
                  {
                    mercury__io__stdout_stream_3_p_0(&mdprof_cgi__StdOut_73);
                  }
                  {
                    mercury__io__close_output_3_p_0(mdprof_cgi__StdOut_73);
                  }
                  {
                    mercury__io__stderr_stream_3_p_0(&mdprof_cgi__StdErr_74);
                  }
                  {
                    mercury__io__close_output_3_p_0(mdprof_cgi__StdErr_74);
                  }
                  {
                    mercury__io__binary_input_stream_3_p_0(&mdprof_cgi__BinaryStdIn_75);
                  }
                  {
                    mercury__io__close_binary_input_3_p_0(mdprof_cgi__BinaryStdIn_75);
                  }
                  {
                    mercury__io__binary_output_stream_3_p_0(&mdprof_cgi__BinaryStdOut_76);
                  }
                  {
                    mercury__io__close_binary_output_3_p_0(mdprof_cgi__BinaryStdOut_76);
                  }
                  switch (mdprof_cgi__RecordLoop_19) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mdprof_cgi__MaybeDebugStream_111 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      break;
                    case (MR_Integer) 1:
                      mdprof_cgi__MaybeDebugStream_111 = mdprof_cgi__MaybeStartupStream_13;
                      break;
                  }
                  {
                    mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 16)), &mdprof_cgi__TimeOut_112);
                  }
                  {
                    mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_cgi__Canonical_113);
                  }
                  {
                    mdprof_cgi__server_loop_10_p_0(mdprof_cgi__ToServerPipe_11, mdprof_cgi__FromServerPipe_12, mdprof_cgi__TimeOut_112, mdprof_cgi__MaybeDebugStream_111, mdprof_cgi__Debug_20, mdprof_cgi__Canonical_113, (MR_Integer) 0, mdprof_cgi__Deep_16);
                  }
                }
            }
        }
        break;
    }
  }
}

static void MR_CALL 
mdprof_cgi__server_loop_10_p_0(
  MR_String mdprof_cgi__ToServerPipe_11,
  MR_String mdprof_cgi__FromServerPipe_12,
  MR_Integer mdprof_cgi__TimeOut0_13,
  MR_Word mdprof_cgi__MaybeStartupStream_14,
  MR_Word mdprof_cgi__Debug_15,
  MR_Word mdprof_cgi__Canonical_16,
  MR_Integer mdprof_cgi__QueryNum0_17,
  MR_Word mdprof_cgi__Deep0_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdprof_cgi__succeeded;
        MR_Word mdprof_cgi__TypeCtorInfo_185_185;
        MR_Integer mdprof_cgi__QueryNum_20;
        MR_Word mdprof_cgi__CmdPref0_21;
        MR_Word mdprof_cgi__Deep_26;
        MR_Word mdprof_cgi__Cmd_28;
        MR_Box mdprof_cgi__conv0_CmdPref0_21;

        {
          timeout__setup_timeout_3_p_0(mdprof_cgi__TimeOut0_13);
        }
        mdprof_cgi__QueryNum_20 = (mdprof_cgi__QueryNum0_17 + (MR_Integer) 1);
        mdprof_cgi__TypeCtorInfo_185_185 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0;
        {
          interface__recv_term_5_p_0(mdprof_cgi__TypeCtorInfo_185_185, mdprof_cgi__ToServerPipe_11, mdprof_cgi__Debug_15, &mdprof_cgi__conv0_CmdPref0_21);
        }
        mdprof_cgi__CmdPref0_21 = ((MR_Word) mdprof_cgi__conv0_CmdPref0_21);
        if ((mdprof_cgi__MaybeStartupStream_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mdprof_cgi__Cmd0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 0)));
            MR_Word mdprof_cgi__PrefInd0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 1)));
            MR_String mdprof_cgi__HTML_31;
            MR_String mdprof_cgi__ResponseFileName_32;
            MR_Word mdprof_cgi__ResponseRes_33;
            MR_Word mdprof_cgi__ResponseStream_34;
            MR_String mdprof_cgi__Var_56;
            MR_Word mdprof_cgi__Var_157;
            MR_String mdprof_cgi__Var_158;
            MR_String mdprof_cgi__Var_159;
            MR_Word mdprof_cgi__Var_160;
            MR_ArrayPtr mdprof_cgi__Var_161;
            MR_ArrayPtr mdprof_cgi__Var_162;
            MR_ArrayPtr mdprof_cgi__Var_163;
            MR_ArrayPtr mdprof_cgi__Var_164;
            MR_ArrayPtr mdprof_cgi__Var_165;
            MR_ArrayPtr mdprof_cgi__Var_166;
            MR_ArrayPtr mdprof_cgi__Var_167;
            MR_ArrayPtr mdprof_cgi__Var_168;
            MR_ArrayPtr mdprof_cgi__Var_169;
            MR_ArrayPtr mdprof_cgi__Var_170;
            MR_ArrayPtr mdprof_cgi__Var_171;
            MR_ArrayPtr mdprof_cgi__Var_172;
            MR_ArrayPtr mdprof_cgi__Var_173;
            MR_ArrayPtr mdprof_cgi__Var_174;
            MR_ArrayPtr mdprof_cgi__Var_175;
            MR_ArrayPtr mdprof_cgi__Var_176;
            MR_ArrayPtr mdprof_cgi__Var_177;
            MR_ArrayPtr mdprof_cgi__Var_178;
            MR_ArrayPtr mdprof_cgi__Var_179;
            MR_ArrayPtr mdprof_cgi__Var_180;
            MR_Word mdprof_cgi__Var_181;
            MR_Word mdprof_cgi__Var_182;
            MR_Word mdprof_cgi__Var_183;
            MR_Word mdprof_cgi__Var_184;

            mdprof_cgi__succeeded = (mdprof_cgi__Cmd0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (mdprof_cgi__succeeded)
              {
                MR_Word mdprof_cgi__MaybeDeep_25;
                MR_String mdprof_cgi__Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
                MR_String mdprof_cgi__Var_74 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
                MR_String mdprof_cgi__Var_75 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
                MR_Word mdprof_cgi__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
                MR_Word mdprof_cgi__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
                MR_ArrayPtr mdprof_cgi__Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
                MR_ArrayPtr mdprof_cgi__Var_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
                MR_ArrayPtr mdprof_cgi__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
                MR_ArrayPtr mdprof_cgi__Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
                MR_ArrayPtr mdprof_cgi__Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
                MR_ArrayPtr mdprof_cgi__Var_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
                MR_ArrayPtr mdprof_cgi__Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
                MR_ArrayPtr mdprof_cgi__Var_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
                MR_ArrayPtr mdprof_cgi__Var_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
                MR_ArrayPtr mdprof_cgi__Var_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
                MR_ArrayPtr mdprof_cgi__Var_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
                MR_ArrayPtr mdprof_cgi__Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
                MR_ArrayPtr mdprof_cgi__Var_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
                MR_ArrayPtr mdprof_cgi__Var_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
                MR_ArrayPtr mdprof_cgi__Var_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
                MR_ArrayPtr mdprof_cgi__Var_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
                MR_ArrayPtr mdprof_cgi__Var_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
                MR_ArrayPtr mdprof_cgi__Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
                MR_ArrayPtr mdprof_cgi__Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
                MR_ArrayPtr mdprof_cgi__Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
                MR_Word mdprof_cgi__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
                MR_Word mdprof_cgi__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
                MR_Word mdprof_cgi__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
                MR_Word mdprof_cgi__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));

                {
                  startup__read_and_startup_default_deep_options_9_p_0(mdprof_cgi__Var_51, mdprof_cgi__Var_74, mdprof_cgi__Var_75, mdprof_cgi__Canonical_16, mdprof_cgi__MaybeStartupStream_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__MaybeDeep_25);
                }
                if (((MR_tag((MR_Word) mdprof_cgi__MaybeDeep_25)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word mdprof_cgi__Pref0_30;

                    mdprof_cgi__HTML_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeDeep_25, (MR_Integer) 0)));
                    mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mdprof_cgi__Pref0_30 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_24);
                    }
                  }
                else
                  {
                    MR_Word mdprof_cgi__Pref0_414;

                    mdprof_cgi__Deep_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeDeep_25, (MR_Integer) 0)));
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    {
                      mdprof_cgi__Pref0_414 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_24);
                    }
                    {
                      query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_414, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_31);
                    }
                  }
              }
            else
              {
                MR_Word mdprof_cgi__Pref0_411;

                mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
                mdprof_cgi__Cmd_28 = mdprof_cgi__Cmd0_23;
                {
                  mdprof_cgi__Pref0_411 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_24);
                }
                {
                  query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_411, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_31);
                }
              }
            mdprof_cgi__Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
            mdprof_cgi__Var_158 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
            mdprof_cgi__Var_159 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
            mdprof_cgi__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
            mdprof_cgi__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
            mdprof_cgi__Var_161 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
            mdprof_cgi__Var_162 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
            mdprof_cgi__Var_163 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
            mdprof_cgi__Var_164 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
            mdprof_cgi__Var_165 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
            mdprof_cgi__Var_166 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
            mdprof_cgi__Var_167 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
            mdprof_cgi__Var_168 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
            mdprof_cgi__Var_169 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
            mdprof_cgi__Var_170 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
            mdprof_cgi__Var_171 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
            mdprof_cgi__Var_172 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
            mdprof_cgi__Var_173 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
            mdprof_cgi__Var_174 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
            mdprof_cgi__Var_175 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
            mdprof_cgi__Var_176 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
            mdprof_cgi__Var_177 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
            mdprof_cgi__Var_178 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
            mdprof_cgi__Var_179 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
            mdprof_cgi__Var_180 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
            mdprof_cgi__Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
            mdprof_cgi__Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
            mdprof_cgi__Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
            mdprof_cgi__Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));
            {
              mdprof_cgi__ResponseFileName_32 = interface__response_file_name_2_f_0(mdprof_cgi__Var_56, mdprof_cgi__QueryNum_20);
            }
            {
              mercury__io__open_output_4_p_0(mdprof_cgi__ResponseFileName_32, &mdprof_cgi__ResponseRes_33);
            }
            if (((MR_tag((MR_Word) mdprof_cgi__ResponseRes_33)) == (MR_mktag((MR_Integer) 1))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "cannot open response file");
                  return;
                }
              }
            else
              mdprof_cgi__ResponseStream_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__ResponseRes_33, (MR_Integer) 0)));
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__ResponseStream_34, mdprof_cgi__HTML_31);
            }
            {
              mercury__io__close_output_3_p_0(mdprof_cgi__ResponseStream_34);
            }
            {
              interface__send_string_5_p_0(mdprof_cgi__FromServerPipe_12, mdprof_cgi__Debug_15, mdprof_cgi__ResponseFileName_32);
            }
          }
        else
          {
            MR_Word mdprof_cgi__StartupStream1_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeStartupStream_14, (MR_Integer) 0)));
            MR_String mdprof_cgi__Var_189;
            MR_Word mdprof_cgi__Var_195;
            MR_String mdprof_cgi__Var_200;
            MR_Word mdprof_cgi__Cmd0_333;
            MR_Word mdprof_cgi__PrefInd0_334;
            MR_String mdprof_cgi__HTML_339;
            MR_String mdprof_cgi__ResponseFileName_340;
            MR_Word mdprof_cgi__ResponseRes_341;
            MR_Word mdprof_cgi__ResponseStream_342;
            MR_String mdprof_cgi__Var_347;
            MR_Word mdprof_cgi__Var_303;
            MR_String mdprof_cgi__Var_304;
            MR_String mdprof_cgi__Var_305;
            MR_Word mdprof_cgi__Var_306;
            MR_ArrayPtr mdprof_cgi__Var_307;
            MR_ArrayPtr mdprof_cgi__Var_308;
            MR_ArrayPtr mdprof_cgi__Var_309;
            MR_ArrayPtr mdprof_cgi__Var_310;
            MR_ArrayPtr mdprof_cgi__Var_311;
            MR_ArrayPtr mdprof_cgi__Var_312;
            MR_ArrayPtr mdprof_cgi__Var_313;
            MR_ArrayPtr mdprof_cgi__Var_314;
            MR_ArrayPtr mdprof_cgi__Var_315;
            MR_ArrayPtr mdprof_cgi__Var_316;
            MR_ArrayPtr mdprof_cgi__Var_317;
            MR_ArrayPtr mdprof_cgi__Var_318;
            MR_ArrayPtr mdprof_cgi__Var_319;
            MR_ArrayPtr mdprof_cgi__Var_320;
            MR_ArrayPtr mdprof_cgi__Var_321;
            MR_ArrayPtr mdprof_cgi__Var_322;
            MR_ArrayPtr mdprof_cgi__Var_323;
            MR_ArrayPtr mdprof_cgi__Var_324;
            MR_ArrayPtr mdprof_cgi__Var_325;
            MR_ArrayPtr mdprof_cgi__Var_326;
            MR_Word mdprof_cgi__Var_327;
            MR_Word mdprof_cgi__Var_328;
            MR_Word mdprof_cgi__Var_329;
            MR_Word mdprof_cgi__Var_330;

            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "server loop query ");
            }
            mdprof_cgi__Var_195 = (MR_Word) &mdprof_cgi_scalar_common_3[0];
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_cgi__Var_195, mdprof_cgi__QueryNum_20, &mdprof_cgi__Var_189);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, mdprof_cgi__Var_189);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "\n");
            }
            {
              mercury__io__write_4_p_0(mdprof_cgi__TypeCtorInfo_185_185, mdprof_cgi__StartupStream1_36, ((MR_Box) (mdprof_cgi__CmdPref0_21)));
            }
            {
              mercury__io__nl_3_p_0(mdprof_cgi__StartupStream1_36);
            }
            {
              mercury__io__flush_output_3_p_0(mdprof_cgi__StartupStream1_36);
            }
            mdprof_cgi__Cmd0_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 0)));
            mdprof_cgi__PrefInd0_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 1)));
            mdprof_cgi__succeeded = (mdprof_cgi__Cmd0_333 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
            if (mdprof_cgi__succeeded)
              {
                MR_Word mdprof_cgi__MaybeDeep_239;
                MR_String mdprof_cgi__Var_241 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
                MR_String mdprof_cgi__Var_244 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
                MR_String mdprof_cgi__Var_245 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
                MR_Word mdprof_cgi__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
                MR_Word mdprof_cgi__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
                MR_ArrayPtr mdprof_cgi__Var_213 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
                MR_ArrayPtr mdprof_cgi__Var_214 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
                MR_ArrayPtr mdprof_cgi__Var_215 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
                MR_ArrayPtr mdprof_cgi__Var_216 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
                MR_ArrayPtr mdprof_cgi__Var_217 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
                MR_ArrayPtr mdprof_cgi__Var_218 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
                MR_ArrayPtr mdprof_cgi__Var_219 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
                MR_ArrayPtr mdprof_cgi__Var_220 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
                MR_ArrayPtr mdprof_cgi__Var_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
                MR_ArrayPtr mdprof_cgi__Var_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
                MR_ArrayPtr mdprof_cgi__Var_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
                MR_ArrayPtr mdprof_cgi__Var_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
                MR_ArrayPtr mdprof_cgi__Var_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
                MR_ArrayPtr mdprof_cgi__Var_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
                MR_ArrayPtr mdprof_cgi__Var_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
                MR_ArrayPtr mdprof_cgi__Var_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
                MR_ArrayPtr mdprof_cgi__Var_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
                MR_ArrayPtr mdprof_cgi__Var_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
                MR_ArrayPtr mdprof_cgi__Var_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
                MR_ArrayPtr mdprof_cgi__Var_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
                MR_Word mdprof_cgi__Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
                MR_Word mdprof_cgi__Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
                MR_Word mdprof_cgi__Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
                MR_Word mdprof_cgi__Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));

                {
                  startup__read_and_startup_default_deep_options_9_p_0(mdprof_cgi__Var_241, mdprof_cgi__Var_244, mdprof_cgi__Var_245, mdprof_cgi__Canonical_16, mdprof_cgi__MaybeStartupStream_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__MaybeDeep_239);
                }
                if (((MR_tag((MR_Word) mdprof_cgi__MaybeDeep_239)) == (MR_mktag((MR_Integer) 1))))
                  {
                    MR_Word mdprof_cgi__Pref0_338;

                    mdprof_cgi__HTML_339 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeDeep_239, (MR_Integer) 0)));
                    mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mdprof_cgi__Pref0_338 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_334);
                    }
                  }
                else
                  {
                    MR_Word mdprof_cgi__Pref0_420;

                    mdprof_cgi__Deep_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeDeep_239, (MR_Integer) 0)));
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                    {
                      mdprof_cgi__Pref0_420 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_334);
                    }
                    {
                      query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_420, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_339);
                    }
                  }
              }
            else
              {
                MR_Word mdprof_cgi__Pref0_417;

                mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
                mdprof_cgi__Cmd_28 = mdprof_cgi__Cmd0_333;
                {
                  mdprof_cgi__Pref0_417 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_334);
                }
                {
                  query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_417, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_339);
                }
              }
            mdprof_cgi__Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
            mdprof_cgi__Var_304 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
            mdprof_cgi__Var_305 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
            mdprof_cgi__Var_347 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
            mdprof_cgi__Var_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
            mdprof_cgi__Var_307 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
            mdprof_cgi__Var_308 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
            mdprof_cgi__Var_309 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
            mdprof_cgi__Var_310 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
            mdprof_cgi__Var_311 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
            mdprof_cgi__Var_312 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
            mdprof_cgi__Var_313 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
            mdprof_cgi__Var_314 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
            mdprof_cgi__Var_315 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
            mdprof_cgi__Var_316 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
            mdprof_cgi__Var_317 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
            mdprof_cgi__Var_318 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
            mdprof_cgi__Var_319 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
            mdprof_cgi__Var_320 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
            mdprof_cgi__Var_321 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
            mdprof_cgi__Var_322 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
            mdprof_cgi__Var_323 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
            mdprof_cgi__Var_324 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
            mdprof_cgi__Var_325 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
            mdprof_cgi__Var_326 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
            mdprof_cgi__Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
            mdprof_cgi__Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
            mdprof_cgi__Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
            mdprof_cgi__Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));
            {
              mdprof_cgi__ResponseFileName_340 = interface__response_file_name_2_f_0(mdprof_cgi__Var_347, mdprof_cgi__QueryNum_20);
            }
            {
              mercury__io__open_output_4_p_0(mdprof_cgi__ResponseFileName_340, &mdprof_cgi__ResponseRes_341);
            }
            if (((MR_tag((MR_Word) mdprof_cgi__ResponseRes_341)) == (MR_mktag((MR_Integer) 1))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "cannot open response file");
                  return;
                }
              }
            else
              mdprof_cgi__ResponseStream_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__ResponseRes_341, (MR_Integer) 0)));
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__ResponseStream_342, mdprof_cgi__HTML_339);
            }
            {
              mercury__io__close_output_3_p_0(mdprof_cgi__ResponseStream_342);
            }
            {
              interface__send_string_5_p_0(mdprof_cgi__FromServerPipe_12, mdprof_cgi__Debug_15, mdprof_cgi__ResponseFileName_340);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "query ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_cgi__Var_195, mdprof_cgi__QueryNum_20, &mdprof_cgi__Var_200);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, mdprof_cgi__Var_200);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) " output:\n");
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, mdprof_cgi__HTML_339);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "\n");
            }
            {
              mercury__io__flush_output_3_p_0(mdprof_cgi__StartupStream1_36);
            }
          }
        mdprof_cgi__succeeded = (mdprof_cgi__Cmd_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mdprof_cgi__succeeded)
          {
            timeout__delete_cleanup_files_2_p_0();
          }
        else
          {
            MR_Integer mdprof_cgi__TimeOut_37;

            mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__Cmd_28)) == (MR_mktag((MR_Integer) 1)));
            if (mdprof_cgi__succeeded)
              {
                mdprof_cgi__TimeOut_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_cgi__Cmd_28, (MR_Integer) 0)));
                /* direct tailcall eliminated */
                {
                  MR_Integer mdprof_cgi__next_value_of_TimeOut0_13 = mdprof_cgi__TimeOut_37;
                  MR_Integer mdprof_cgi__next_value_of_QueryNum0_17 = mdprof_cgi__QueryNum_20;
                  MR_Word mdprof_cgi__next_value_of_Deep0_18 = mdprof_cgi__Deep_26;

                  mdprof_cgi__Deep0_18 = mdprof_cgi__next_value_of_Deep0_18;
                  mdprof_cgi__QueryNum0_17 = mdprof_cgi__next_value_of_QueryNum0_17;
                  mdprof_cgi__TimeOut0_13 = mdprof_cgi__next_value_of_TimeOut0_13;
                }
                continue;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mdprof_cgi__next_value_of_QueryNum0_17 = mdprof_cgi__QueryNum_20;
                  MR_Word mdprof_cgi__next_value_of_Deep0_18 = mdprof_cgi__Deep_26;

                  mdprof_cgi__Deep0_18 = mdprof_cgi__next_value_of_Deep0_18;
                  mdprof_cgi__QueryNum0_17 = mdprof_cgi__next_value_of_QueryNum0_17;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mdprof_cgi__handle_query_from_existing_server_9_p_0(
  MR_Word mdprof_cgi__Cmd_10,
  MR_Word mdprof_cgi__PrefInd_11,
  MR_String mdprof_cgi__ToServerPipe_12,
  MR_String mdprof_cgi__FromServerPipe_13,
  MR_String mdprof_cgi__MutexFile_14,
  MR_String mdprof_cgi__WantFile_15,
  MR_Word mdprof_cgi__Options_16)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_Word mdprof_cgi__Debug_18;
    MR_String mdprof_cgi__ResponseFileName_23;
    MR_String mdprof_cgi__CatCmd_24;
    MR_Word mdprof_cgi__Var_44;
    MR_Word mdprof_cgi__Var_25;

    {
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, mdprof_cgi__Options_16, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_18);
    }
    {
      mdprof_cgi__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdprof_cgi__Var_44, 0) = ((MR_Box) (mdprof_cgi__Cmd_10));
      MR_hl_field(MR_mktag(0), mdprof_cgi__Var_44, 1) = ((MR_Box) (mdprof_cgi__PrefInd_11));
    }
    {
      interface__send_term_5_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0, mdprof_cgi__ToServerPipe_12, mdprof_cgi__Debug_18, ((MR_Box) (mdprof_cgi__Var_44)));
    }
    {
      timeout__release_lock_4_p_0(mdprof_cgi__Debug_18, mdprof_cgi__MutexFile_14);
    }
    {
      timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_15);
    }
    {
      interface__recv_string_5_p_0(mdprof_cgi__FromServerPipe_13, mdprof_cgi__Debug_18, &mdprof_cgi__ResponseFileName_23);
    }
    {
      mdprof_cgi__CatCmd_24 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", mdprof_cgi__ResponseFileName_23);
    }
    {
      mercury__io__call_system_4_p_0(mdprof_cgi__CatCmd_24, &mdprof_cgi__Var_25);
    }
    switch (mdprof_cgi__Debug_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdprof_cgi__Var_32;

          {
            mercury__io__remove_file_4_p_0(mdprof_cgi__ResponseFileName_23, &mdprof_cgi__Var_32);
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
  }
}

static void MR_CALL 
mdprof_cgi__write_version_message_3_p_0(
  MR_String mdprof_cgi__ProgName_4)
{
  {
    MR_bool mdprof_cgi__succeeded;
    MR_String mdprof_cgi__Version_6;
    MR_String mdprof_cgi__Fullarch_7;

    {
      mercury__library__version_2_p_0(&mdprof_cgi__Version_6, &mdprof_cgi__Fullarch_7);
    }
    {
      mercury__io__write_string_3_p_0(mdprof_cgi__ProgName_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": Mercury deep profiler\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "version: ");
    }
    {
      mercury__io__write_string_3_p_0(mdprof_cgi__Version_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", on ");
    }
    {
      mercury__io__write_string_3_p_0(mdprof_cgi__Fullarch_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
mdprof_cgi__decode_input_lines_5_p_0(
  MR_Word mdprof_cgi__Decode_6,
  MR_Word mdprof_cgi__DecodeCmd_7,
  MR_Word mdprof_cgi__DecodePrefs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdprof_cgi__succeeded;
        MR_Word mdprof_cgi__LineResult_10;

        {
          mercury__io__read_line_as_string_3_p_0(&mdprof_cgi__LineResult_10);
        }
        switch (MR_tag((MR_Word) mdprof_cgi__LineResult_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdprof_cgi__LineStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__LineResult_10, (MR_Integer) 0)));

              switch (mdprof_cgi__Decode_6) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdprof_cgi__MaybeQuery_12;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "considering as query string:\n");
                    }
                    {
                      mdprof_cgi__MaybeQuery_12 = query__string_to_maybe_query_1_f_0(mdprof_cgi__LineStr_11);
                    }
                    if ((mdprof_cgi__MaybeQuery_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "invalid query string: cannot split into components\n");
                        }
                      }
                    else
                      {
                        MR_Word mdprof_cgi__MaybeCmd_13;
                        MR_String mdprof_cgi__DeepFileName_14;
                        MR_Word mdprof_cgi__MaybePrefs_15;
                        MR_Word mdprof_cgi__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeQuery_12, (MR_Integer) 0)));

                        mdprof_cgi__MaybeCmd_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Var_36, (MR_Integer) 0)));
                        mdprof_cgi__DeepFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Var_36, (MR_Integer) 1)));
                        mdprof_cgi__MaybePrefs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Var_36, (MR_Integer) 2)));
                        {
                          mercury__io__write_string_3_p_0((MR_String) "Maybe Command:\n");
                        }
                        {
                          mercury__io__write_3_p_0((MR_Word) &mdprof_cgi_scalar_common_1[0], ((MR_Box) (mdprof_cgi__MaybeCmd_13)));
                        }
                        {
                          mercury__io__nl_2_p_0();
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "Deep File Name: ");
                        }
                        {
                          mercury__io__write_string_3_p_0(mdprof_cgi__DeepFileName_14);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\n");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "Maybe Preferences:\n");
                        }
                        {
                          mercury__io__write_3_p_0((MR_Word) &mdprof_cgi_scalar_common_1[1], ((MR_Box) (mdprof_cgi__MaybePrefs_15)));
                        }
                        {
                          mercury__io__nl_2_p_0();
                        }
                      }
                  }
                  break;
              }
              switch (mdprof_cgi__DecodeCmd_7) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdprof_cgi__MaybeCmd1_16;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "considering as cmd string:\n");
                    }
                    {
                      mdprof_cgi__MaybeCmd1_16 = query__string_to_maybe_cmd_1_f_0(mdprof_cgi__LineStr_11);
                    }
                    if ((mdprof_cgi__MaybeCmd1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "invalid command string ");
                        }
                        {
                          mercury__io__write_string_3_p_0(mdprof_cgi__LineStr_11);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\n");
                        }
                      }
                    else
                      {
                        MR_Word mdprof_cgi__Cmd_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeCmd1_16, (MR_Integer) 0)));

                        {
                          mercury__io__write_3_p_0((MR_Word) &query__query__type_ctor_info_cmd_0, ((MR_Box) (mdprof_cgi__Cmd_17)));
                        }
                        {
                          mercury__io__nl_2_p_0();
                        }
                      }
                  }
                  break;
              }
              switch (mdprof_cgi__DecodePrefs_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdprof_cgi__MaybePref_18;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "considering as preference string:\n");
                    }
                    {
                      mdprof_cgi__MaybePref_18 = query__string_to_maybe_pref_1_f_0(mdprof_cgi__LineStr_11);
                    }
                    if ((mdprof_cgi__MaybePref_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "invalid preferences string ");
                        }
                        {
                          mercury__io__write_string_3_p_0(mdprof_cgi__LineStr_11);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "\n");
                        }
                      }
                    else
                      {
                        MR_Word mdprof_cgi__Pref_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybePref_18, (MR_Integer) 0)));

                        {
                          mercury__io__write_3_p_0((MR_Word) &query__query__type_ctor_info_preferences_0, ((MR_Box) (mdprof_cgi__Pref_19)));
                        }
                        {
                          mercury__io__nl_2_p_0();
                        }
                      }
                  }
                  break;
              }
              /* direct tailcall eliminated */
              {
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdprof_cgi__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_cgi__LineResult_10, (MR_Integer) 0)));
              MR_String mdprof_cgi__Msg_21;

              {
                mercury__io__error_message_2_p_0(mdprof_cgi__Error_20, &mdprof_cgi__Msg_21);
              }
              {
                mercury__io__write_string_3_p_0(mdprof_cgi__Msg_21);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
            break;
        }
      }
      break;
    }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;

    {
      mdprof_cgi__succeeded = mdprof_cgi____Unify____child_has_parent_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3)
{
  {
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

    {
      mdprof_cgi____Compare____child_has_parent_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;

    {
      mdprof_cgi__succeeded = mdprof_cgi____Unify____cmd_pref_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3)
{
  {
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

    {
      mdprof_cgi____Compare____cmd_pref_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;

    {
      mdprof_cgi__succeeded = mdprof_cgi____Unify____detach_process_result_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3)
{
  {
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

    {
      mdprof_cgi____Compare____detach_process_result_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;

    {
      mdprof_cgi__succeeded = mdprof_cgi____Unify____option_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____option_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3)
{
  {
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

    {
      mdprof_cgi____Compare____option_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0_10001(
  MR_Box mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2)
{
  {
    MR_bool mdprof_cgi__succeeded;

    {
      mdprof_cgi__succeeded = mdprof_cgi____Unify____option_table_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
    return mdprof_cgi__succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0_10001(
  MR_Box * mdprof_cgi__wrapper_arg_1,
  MR_Box mdprof_cgi__wrapper_arg_2,
  MR_Box mdprof_cgi__wrapper_arg_3)
{
  {
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

    {
      mdprof_cgi____Compare____option_table_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
  }
}

void mercury__mdprof_cgi__init(void)
{
}

void mercury__mdprof_cgi__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_cgi__mdprof_cgi__type_ctor_info_child_has_parent_0);
	MR_register_type_ctor_info(&mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0);
	MR_register_type_ctor_info(&mdprof_cgi__mdprof_cgi__type_ctor_info_detach_process_result_0);
	MR_register_type_ctor_info(&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mdprof_cgi__mdprof_cgi__type_ctor_info_option_table_0);
}

void mercury__mdprof_cgi__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_cgi__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdprof_cgi. */
