/*
** Automatically generated from `mdprof_cgi.m'
** by the Mercury compiler,
** version rotd-2018-03-28
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


// :- module mdprof_cgi.
// :- implementation.

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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_cgi__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_cgi__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_cgi__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdprof_cgi__raw_detach_process_3_p_0(
  MR_Integer * ResCode_1);

static void MR_CALL 
mdprof_cgi__check_for_existing_fifos_5_p_0(
  MR_String Fifo1_1,
  MR_String Fifo2_2,
  MR_Integer * FifoCount_3);

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0(void);

static void MR_CALL 
mdprof_cgi__process_args_5_p_0(
  MR_String ProgName_6,
  MR_Word Args_7,
  MR_Word Options_8);

static void MR_CALL 
mdprof_cgi__process_query_6_p_0(
  MR_Word Cmd0_7,
  MR_String DeepFileName0_8,
  MR_Word MaybePref_9,
  MR_Word Options0_10);

static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_11_p_0(
  MR_Word Cmd_12,
  MR_Word PrefInd_13,
  MR_String FileName_14,
  MR_String ToServerPipe_15,
  MR_String FromServerPipe_16,
  MR_String StartupFile_17,
  MR_String MutexFile_18,
  MR_String WantFile_19,
  MR_Word Options_20);

static void MR_CALL 
mdprof_cgi__make_pipes_4_p_0(
  MR_String FileName_5,
  MR_Word * Success_6);

static void MR_CALL 
mdprof_cgi__start_server_9_p_0(
  MR_Word Options_10,
  MR_String ToServerPipe_11,
  MR_String FromServerPipe_12,
  MR_Word MaybeStartupStream_13,
  MR_String MutexFile_14,
  MR_String WantFile_15,
  MR_Word Deep_16);

static void MR_CALL 
mdprof_cgi__server_loop_10_p_0(
  MR_String ToServerPipe_11,
  MR_String FromServerPipe_12,
  MR_Integer TimeOut0_13,
  MR_Word MaybeStartupStream_14,
  MR_Word Debug_15,
  MR_Word Canonical_16,
  MR_Integer QueryNum0_17,
  MR_Word Deep0_18);

static void MR_CALL 
mdprof_cgi__handle_query_from_existing_server_9_p_0(
  MR_Word Cmd_10,
  MR_Word PrefInd_11,
  MR_String ToServerPipe_12,
  MR_String FromServerPipe_13,
  MR_String MutexFile_14,
  MR_String WantFile_15,
  MR_Word Options_16);

static void MR_CALL 
mdprof_cgi__write_version_message_3_p_0(
  MR_String ProgName_4);

static void MR_CALL 
mdprof_cgi__decode_input_lines_5_p_0(
  MR_Word Decode_6,
  MR_Word DecodeCmd_7,
  MR_Word DecodePrefs_8);

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdprof_cgi_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_cgi_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_11 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_10 == CastY_11);
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
                  }
                  break;
                case (MR_Integer) 1:
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
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_14 = (MR_Integer) Var_13;
                  MR_Integer Var_15 = (MR_Integer) ArgY1_5;

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_14, Var_15);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
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
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      query____Compare____cmd_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        query____Compare____preferences_indication_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = query____Unify____cmd_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = query____Unify____preferences_indication_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *HeadVar__1_1 = ((&mdprof_cgi_vector_common_6[0 + slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_0;
      *HeadVar__2_2 = ((&mdprof_cgi_vector_common_6[0 + slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_1;
      cont(cont_env_ptr);
      slot_0 = (slot_0 + (MR_Integer) 1);
    }
    while ((slot_0 < (MR_Integer) 19));
  }
}

static MR_bool MR_CALL 
mdprof_cgi__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "canonical-clique"))
                case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 108:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "clique"))
                case_num_0 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "debug"))
                  case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 99:
                if (((((((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 101))))
                  switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 3;
                      break;
                    case (MR_Integer) 45:
                      switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                        case (MR_Integer) 99:
                          if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "decode-cmd"))
                            case_num_0 = (MR_Integer) 4;
                          break;
                        case (MR_Integer) 112:
                          if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "decode-prefs"))
                            case_num_0 = (MR_Integer) 5;
                          break;
                      }
                      break;
                  }
                break;
              case (MR_Integer) 116:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "detach-process"))
                  case_num_0 = (MR_Integer) 6;
                break;
            }
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "help"))
            case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "localhost"))
            case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 109:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "modules"))
            case_num_0 = (MR_Integer) 9;
          break;
        case (MR_Integer) 112:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "proc"))
            case_num_0 = (MR_Integer) 10;
          break;
        case (MR_Integer) 113:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "quit"))
            case_num_0 = (MR_Integer) 11;
          break;
        case (MR_Integer) 114:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 99)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 45))))
                switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                  case (MR_Integer) 108:
                    if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "record-loop"))
                      case_num_0 = (MR_Integer) 12;
                    break;
                  case (MR_Integer) 115:
                    if (MR_offset_streq(8, HeadVar__1_1, (MR_String) "record-startup"))
                      case_num_0 = (MR_Integer) 13;
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "root"))
                case_num_0 = (MR_Integer) 14;
              break;
          }
          break;
        case (MR_Integer) 115:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "server-process"))
            case_num_0 = (MR_Integer) 15;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "timeout"))
            case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 118:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "version"))
            case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 119:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "write-query-string"))
            case_num_0 = (MR_Integer) 18;
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        *HeadVar__2_2 = ((&mdprof_cgi_vector_common_5[0 + case_num_0]))->mdprof_cgi__vector_common_type_5_0__vct_5_f_0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_cgi__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 67:
        {
          *HeadVar__2_2 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 99:
        {
          *HeadVar__2_2 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 100:
        {
          *HeadVar__2_2 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 109:
        {
          *HeadVar__2_2 = (MR_Integer) 9;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 112:
        {
          *HeadVar__2_2 = (MR_Integer) 10;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 113:
        {
          *HeadVar__2_2 = (MR_Integer) 11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 114:
        {
          *HeadVar__2_2 = (MR_Integer) 12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 115:
        {
          *HeadVar__2_2 = (MR_Integer) 15;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 116:
        {
          *HeadVar__2_2 = (MR_Integer) 16;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 119:
        {
          *HeadVar__2_2 = (MR_Integer) 18;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi__raw_detach_process_3_p_0(
  MR_Integer * ResCode_1)
{
  {
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
	 *ResCode_1  = ResCode;
}
  }
}

static void MR_CALL 
mdprof_cgi__check_for_existing_fifos_5_p_0(
  MR_String Fifo1_1,
  MR_String Fifo2_2,
  MR_Integer * FifoCount_3)
{
  {
{
#define MR_PROC_LABEL mdprof_cgi__check_for_existing_fifos_5_p_0

	MR_String Fifo1;
	MR_String Fifo2;
	MR_Integer FifoCount;
	MR_Word S0;
	MR_Word S;

	Fifo1 =  Fifo1_1 ;
	Fifo2 =  Fifo2_2 ;
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
	 *FifoCount_3  = FifoCount;
}
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdprof_cgi__main_2_p_0_4_env_0_s * env_ptr = (struct mdprof_cgi__main_2_p_0_4_env_0_s *) env_ptr_arg;

    *((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont)((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mdprof_cgi__main_2_p_0_4_env_0_s env;

    (env).mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mdprof_cgi__main_2_p_0_4_env_0__cont = cont;
    (env).mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mdprof_cgi__defaults_2_p_0(&(env).mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = mdprof_cgi__long_2_p_0(((MR_String) wrapper_arg_1), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = mdprof_cgi__short_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool succeeded;
    MR_Word MaybeQueryString_4;

    mercury__io__write_string_3_p_0((MR_String) "Content-type: text/html\n\n");
    mercury__io__flush_output_2_p_0();
    mercury__io__get_environment_var_4_p_0((MR_String) "QUERY_STRING", &MaybeQueryString_4);
    if ((MaybeQueryString_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdprof_cgi__process_command_line_2_p_0();
    else
    {
      MR_String QueryString0_5 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeQueryString_4, (MR_Integer) 0)));
      MR_Word MaybeOptions_7;
      MR_Word Options_8;
      MR_Word MaybeDeepQuery_10;
      MR_Word Var_6;

      mercury__getopt__process_options_4_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_2[8]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_6, &MaybeOptions_7);
      if (((MR_tag((MR_Word) MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "mdprof_cgi: error parsing empty command line");
          return;
        }
      }
      else
        Options_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeOptions_7, (MR_Integer) 0)));
      MaybeDeepQuery_10 = query__string_to_maybe_query_1_f_0(QueryString0_5);
      if ((MaybeDeepQuery_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        mercury__io__write_string_3_p_0((MR_String) "Bad URL; expected filename \n");
      }
      else
      {
        MR_Word DeepQuery_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDeepQuery_10, (MR_Integer) 0)));
        MR_Word MaybeCmd_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepQuery_11, (MR_Integer) 0)));
        MR_String DeepFileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), DeepQuery_11, (MR_Integer) 1)));
        MR_Word MaybePrefs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), DeepQuery_11, (MR_Integer) 2)));
        MR_Word Cmd_15;

        if ((MaybeCmd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          Cmd_15 = query__default_command_0_f_0();
        else
          Cmd_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCmd_12, (MR_Integer) 0)));
        mdprof_cgi__process_query_6_p_0(Cmd_15, DeepFileName_13, MaybePrefs_14, Options_8);
      }
    }
  }
}

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s * env_ptr = (struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s *) env_ptr_arg;

    *((env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__cont)((env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s env;

    (env).mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mdprof_cgi__process_command_line_2_p_0_4_env_0__cont = cont;
    (env).mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mdprof_cgi__defaults_2_p_0(&(env).mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2, mdprof_cgi__process_command_line_2_p_0_3, &env);
    }
  }
}

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = mdprof_cgi__long_2_p_0(((MR_String) wrapper_arg_1), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = mdprof_cgi__short_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0(void)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_60_60;
    MR_String ProgName_4;
    MR_Word Args0_5;
    MR_Word Args_7;
    MR_Word MaybeOptions_8;

    mercury__io__progname_base_4_p_0((MR_String) "mdprof_cgi", &ProgName_4);
    mercury__io__command_line_arguments_3_p_0(&Args0_5);
    TypeCtorInfo_60_60 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
    mercury__getopt__process_options_4_p_0(TypeCtorInfo_60_60, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_2[4]), Args0_5, &Args_7, &MaybeOptions_8);
    if (((MR_tag((MR_Word) MaybeOptions_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptions_8, (MR_Integer) 0)));

      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      mercury__io__write_string_3_p_0(ProgName_4);
      mercury__io__write_string_3_p_0((MR_String) ": error parsing options: ");
      mercury__io__write_string_3_p_0(Msg_15);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Word Options_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeOptions_8, (MR_Integer) 0)));
      MR_Word Help_10;
      MR_Word Version_11;
      MR_Word Decode_12;
      MR_Word DecodeCmd_13;
      MR_Word DecodePrefs_14;

      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_60_60, Options_9, ((MR_Box) ((MR_Integer) 7)), &Help_10);
      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_60_60, Options_9, ((MR_Box) ((MR_Integer) 17)), &Version_11);
      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_60_60, Options_9, ((MR_Box) ((MR_Integer) 3)), &Decode_12);
      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_60_60, Options_9, ((MR_Box) ((MR_Integer) 4)), &DecodeCmd_13);
      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_60_60, Options_9, ((MR_Box) ((MR_Integer) 5)), &DecodePrefs_14);
      switch (Help_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "Usage: ");
            mercury__io__write_string_3_p_0(ProgName_4);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0((MR_String) "This program doesn\'t expect any arguments;\n");
            mercury__io__write_string_3_p_0((MR_String) "instead it decides what to do based on the\n");
            mercury__io__write_string_3_p_0((MR_String) "QUERY_STRING environment variable.\n");
          }
          break;
      }
      switch (Version_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          mdprof_cgi__write_version_message_3_p_0(ProgName_4);
          break;
      }
      succeeded = (Decode_12 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (DecodeCmd_13 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (DecodePrefs_14 == (MR_Integer) 0);
      }
      if (!(succeeded))
        mdprof_cgi__decode_input_lines_5_p_0(Decode_12, DecodeCmd_13, DecodePrefs_14);
      succeeded = (Help_10 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Version_11 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Decode_12 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (DecodeCmd_13 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (DecodePrefs_14 == (MR_Integer) 0);
          }
        }
      }
      if (succeeded)
        mdprof_cgi__process_args_5_p_0(ProgName_4, Args_7, Options_9);
      else
      {
      }
    }
  }
}

static void MR_CALL 
mdprof_cgi__process_args_5_p_0(
  MR_String ProgName_6,
  MR_Word Args_7,
  MR_Word Options_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Args_7)) == (MR_mktag((MR_Integer) 1)));
    MR_String DeepFileName_10;
    MR_Word Var_14;

    if (succeeded)
    {
      DeepFileName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1)));
      succeeded = (Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_20_48 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
      MR_Word Var_15;
      MR_Word Quit_33;
      MR_Word Root_34;
      MR_Word Modules_35;
      MR_Integer CliqueNum_36;
      MR_Integer ProcProcNum_37;

      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_20_48, Options_8, ((MR_Box) ((MR_Integer) 11)), &Quit_33);
      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_20_48, Options_8, ((MR_Box) ((MR_Integer) 12)), &Root_34);
      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_20_48, Options_8, ((MR_Box) ((MR_Integer) 9)), &Modules_35);
      mercury__getopt__lookup_int_option_3_p_0(TypeCtorInfo_20_48, Options_8, ((MR_Box) ((MR_Integer) 1)), &CliqueNum_36);
      mercury__getopt__lookup_int_option_3_p_0(TypeCtorInfo_20_48, Options_8, ((MR_Box) ((MR_Integer) 10)), &ProcProcNum_37);
      succeeded = (Root_34 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_3[2]);
      }
      else
      {
        succeeded = (Modules_35 == (MR_Integer) 1);
        if (succeeded)
          Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
        else
        {
          succeeded = (CliqueNum_36 > (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_45 = (MR_Word) CliqueNum_36;

            {
              Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (Var_45));
            }
          }
          else
          {
            succeeded = (ProcProcNum_37 > (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word Var_47 = (MR_Word) ProcProcNum_37;

              {
                Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (Var_47));
              }
            }
            else
            {
              succeeded = (Quit_33 == (MR_Integer) 1);
              if (succeeded)
                Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              else
                Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
            }
          }
        }
      }
      mdprof_cgi__process_query_6_p_0(Var_15, DeepFileName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Options_8);
    }
    else
    {
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) "Usage: ");
      mercury__io__write_string_3_p_0(ProgName_6);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__write_string_3_p_0((MR_String) "This program doesn\'t expect any arguments;\n");
      mercury__io__write_string_3_p_0((MR_String) "instead it decides what to do based on the\n");
      mercury__io__write_string_3_p_0((MR_String) "QUERY_STRING environment variable.\n");
    }
  }
}

static void MR_CALL 
mdprof_cgi__process_query_6_p_0(
  MR_Word Cmd0_7,
  MR_String DeepFileName0_8,
  MR_Word MaybePref_9,
  MR_Word Options0_10)
{
  {
    MR_bool succeeded = (Cmd0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    MR_Word Cmd_12;
    MR_Word PrefInd_14;
    MR_String DeepFileName_16;
    MR_Word Options_17;
    MR_String DeepFileNamePrime_15;
    MR_String _BaseFileName_18;

    if (succeeded)
      Cmd_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
    else
      Cmd_12 = Cmd0_7;
    if ((MaybePref_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      PrefInd_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Pref_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePref_9, (MR_Integer) 0)));

      PrefInd_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) Pref_13);
    }
    succeeded = mercury__string__remove_suffix_3_p_0(DeepFileName0_8, (MR_String) ".localhost", &DeepFileNamePrime_15);
    if (succeeded)
    {
      DeepFileName_16 = DeepFileNamePrime_15;
      mercury__map__det_update_4_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 8)), ((MR_Box) (MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_3[1]))), Options0_10, &Options_17);
    }
    else
    {
      DeepFileName_16 = DeepFileName0_8;
      Options_17 = Options0_10;
    }
    succeeded = mercury__string__remove_suffix_3_p_0(DeepFileName_16, (MR_String) ".data", &_BaseFileName_18);
    if (succeeded)
    {
      MR_String ToServerPipe_19;
      MR_String FromServerPipe_20;
      MR_String StartupFile_21;
      MR_String MutexFile_22;
      MR_Word Debug_23;
      MR_String WantFile_24;
      MR_Integer FifoCount_25;

      ToServerPipe_19 = interface__to_server_pipe_name_1_f_0(DeepFileName_16);
      FromServerPipe_20 = interface__from_server_pipe_name_1_f_0(DeepFileName_16);
      StartupFile_21 = interface__server_startup_name_1_f_0(DeepFileName_16);
      MutexFile_22 = interface__mutex_file_name_1_f_0(DeepFileName_16);
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, Options_17, ((MR_Box) ((MR_Integer) 2)), &Debug_23);
      WantFile_24 = interface__want_file_name_0_f_0();
      timeout__make_want_file_3_p_0(WantFile_24);
      timeout__get_lock_4_p_0(Debug_23, MutexFile_22);
      switch (Debug_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_36;
            MR_String Var_37;

            Var_36 = interface__want_dir_0_f_0();
            Var_37 = interface__want_prefix_0_f_0();
            timeout__setup_signals_5_p_0(MutexFile_22, Var_36, Var_37);
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

	Fifo1 =  ToServerPipe_19 ;
	Fifo2 =  FromServerPipe_20 ;
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
	 FifoCount_25  = FifoCount;
}
      succeeded = (FifoCount_25 == (MR_Integer) 0);
      if (succeeded)
        mdprof_cgi__handle_query_from_new_server_11_p_0(Cmd_12, PrefInd_14, DeepFileName_16, ToServerPipe_19, FromServerPipe_20, StartupFile_21, MutexFile_22, WantFile_24, Options_17);
      else
      {
        succeeded = (FifoCount_25 == (MR_Integer) 2);
        if (succeeded)
          mdprof_cgi__handle_query_from_existing_server_9_p_0(Cmd_12, PrefInd_14, ToServerPipe_19, FromServerPipe_20, MutexFile_22, WantFile_24, Options_17);
        else
        {
          timeout__release_lock_4_p_0(Debug_23, MutexFile_22);
          timeout__remove_want_file_3_p_0(WantFile_24);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          mercury__io__write_string_3_p_0((MR_String) "mdprof internal error: bad fifo count");
        }
      }
    }
    else
    {
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      mercury__io__write_string_3_p_0((MR_String) "<h3> Invalid file name ");
      mercury__io__write_string_3_p_0(DeepFileName_16);
      mercury__io__write_string_3_p_0((MR_String) ".<h3>\n\n");
      mercury__io__write_string_3_p_0((MR_String) "Deep profiling data files must have a .data suffix, to allow the deep profiler to locate any related files.\n");
    }
  }
}

static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_11_p_0(
  MR_Word Cmd_12,
  MR_Word PrefInd_13,
  MR_String FileName_14,
  MR_String ToServerPipe_15,
  MR_String FromServerPipe_16,
  MR_String StartupFile_17,
  MR_String MutexFile_18,
  MR_String WantFile_19,
  MR_Word Options_20)
{
  {
    MR_Word TypeCtorInfo_82_82 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
    MR_Word LocalHost_22;
    MR_String Machine_23;
    MR_String ScriptName_24;
    MR_Word Canonical_25;
    MR_Word ServerProcess_26;
    MR_Word Debug_27;
    MR_Word RecordStartup_28;
    MR_Word MaybeStartupStream_31;
    MR_Word StartupResult_33;

    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_82_82, Options_20, ((MR_Box) ((MR_Integer) 8)), &LocalHost_22);
    switch (LocalHost_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        conf__server_name_port_3_p_0(&Machine_23);
        break;
      case (MR_Integer) 1:
        Machine_23 = (MR_String) "localhost";
        break;
    }
    conf__script_name_3_p_0(&ScriptName_24);
    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_82_82, Options_20, ((MR_Box) ((MR_Integer) 0)), &Canonical_25);
    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_82_82, Options_20, ((MR_Box) ((MR_Integer) 15)), &ServerProcess_26);
    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_82_82, Options_20, ((MR_Box) ((MR_Integer) 2)), &Debug_27);
    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_82_82, Options_20, ((MR_Box) ((MR_Integer) 13)), &RecordStartup_28);
    switch (RecordStartup_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeStartupStream_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word StartupStreamRes_29;

          mercury__io__open_output_4_p_0(StartupFile_17, &StartupStreamRes_29);
          if (((MR_tag((MR_Word) StartupStreamRes_29)) == (MR_mktag((MR_Integer) 1))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "cannot create startup file");
              return;
            }
          }
          else
          {
            MR_Word StartupStream0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), StartupStreamRes_29, (MR_Integer) 0)));

            {
              MaybeStartupStream_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeStartupStream_31, 0) = ((MR_Box) (StartupStream0_30));
            }
            timeout__register_file_for_cleanup_3_p_0(StartupFile_17);
          }
        }
        break;
    }
    startup__read_and_startup_default_deep_options_9_p_0(Machine_23, ScriptName_24, FileName_14, Canonical_25, MaybeStartupStream_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &StartupResult_33);
    if (((MR_tag((MR_Word) StartupResult_33)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Error_39 = ((MR_String) (MR_hl_field(MR_mktag(1), StartupResult_33, (MR_Integer) 0)));

      timeout__release_lock_4_p_0(Debug_27, MutexFile_18);
      timeout__remove_want_file_3_p_0(WantFile_19);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      mercury__io__write_string_3_p_0(Error_39);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Word Deep_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), StartupResult_33, (MR_Integer) 0)));
      MR_Word Pref_35;
      MR_String HTML_36;

      Pref_35 = query__solidify_preference_2_f_0(Deep_34, PrefInd_13);
      query__try_exec_4_p_0(Cmd_12, Pref_35, Deep_34, &HTML_36);
      if (!((MaybeStartupStream_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        MR_Word StartupStream1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStartupStream_31, (MR_Integer) 0)));

        mercury__io__write_string_4_p_0(StartupStream1_37, (MR_String) "query 0 output:\n");
        mercury__io__write_string_4_p_0(StartupStream1_37, HTML_36);
        mercury__io__write_string_4_p_0(StartupStream1_37, (MR_String) "\n");
        mercury__io__flush_output_3_p_0(StartupStream1_37);
      }
      switch (ServerProcess_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            timeout__release_lock_4_p_0(Debug_27, MutexFile_18);
            timeout__remove_want_file_3_p_0(WantFile_19);
            mercury__io__write_string_3_p_0(HTML_36);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Success_38;

            mdprof_cgi__make_pipes_4_p_0(FileName_14, &Success_38);
            switch (Success_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  timeout__release_lock_4_p_0(Debug_27, MutexFile_18);
                  timeout__remove_want_file_3_p_0(WantFile_19);
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                  mercury__io__write_string_3_p_0((MR_String) "could not make pipes\n");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0(HTML_36);
                  mercury__io__flush_output_2_p_0();
                  mdprof_cgi__start_server_9_p_0(Options_20, ToServerPipe_15, FromServerPipe_16, MaybeStartupStream_31, MutexFile_18, WantFile_19, Deep_34);
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
  MR_String FileName_5,
  MR_Word * Success_6)
{
  {
    MR_bool succeeded;
    MR_String ToServerPipe_8;
    MR_String FromServerPipe_9;
    MR_String MakeToServerPipeCmd_10;
    MR_String MakeFromServerPipeCmd_11;
    MR_Word ToServerRes_12;
    MR_Word FromServerRes_13;
    MR_Integer Var_20;
    MR_Integer Var_21;

    ToServerPipe_8 = interface__to_server_pipe_name_1_f_0(FileName_5);
    FromServerPipe_9 = interface__from_server_pipe_name_1_f_0(FileName_5);
    MakeToServerPipeCmd_10 = conf__make_pipe_cmd_1_f_0(ToServerPipe_8);
    MakeFromServerPipeCmd_11 = conf__make_pipe_cmd_1_f_0(FromServerPipe_9);
    mercury__io__call_system_4_p_0(MakeToServerPipeCmd_10, &ToServerRes_12);
    mercury__io__call_system_4_p_0(MakeFromServerPipeCmd_11, &FromServerRes_13);
    succeeded = ((MR_tag((MR_Word) ToServerRes_12)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ToServerRes_12, (MR_Integer) 0)));
      succeeded = (Var_20 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FromServerRes_13)) == (MR_mktag((MR_Integer) 0)));
        if (succeeded)
        {
          Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), FromServerRes_13, (MR_Integer) 0)));
          succeeded = (Var_21 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
    {
      timeout__register_file_for_cleanup_3_p_0(ToServerPipe_8);
      timeout__register_file_for_cleanup_3_p_0(FromServerPipe_9);
      *Success_6 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_14;
      MR_Word Var_15;

      mercury__io__remove_file_4_p_0(ToServerPipe_8, &Var_14);
      mercury__io__remove_file_4_p_0(FromServerPipe_9, &Var_15);
      *Success_6 = (MR_Integer) 0;
    }
  }
}

static void MR_CALL 
mdprof_cgi__start_server_9_p_0(
  MR_Word Options_10,
  MR_String ToServerPipe_11,
  MR_String FromServerPipe_12,
  MR_Word MaybeStartupStream_13,
  MR_String MutexFile_14,
  MR_String WantFile_15,
  MR_Word Deep_16)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_61_61 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
    MR_Word DetachProcess_18;
    MR_Word RecordLoop_19;
    MR_Word Debug_20;

    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_61_61, Options_10, ((MR_Box) ((MR_Integer) 6)), &DetachProcess_18);
    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_61_61, Options_10, ((MR_Box) ((MR_Integer) 14)), &RecordLoop_19);
    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_61_61, Options_10, ((MR_Box) ((MR_Integer) 2)), &Debug_20);
    switch (DetachProcess_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word MaybeDebugStream_28;
          MR_Integer TimeOut_29;
          MR_Word Canonical_30;

          timeout__release_lock_4_p_0(Debug_20, MutexFile_14);
          timeout__remove_want_file_3_p_0(WantFile_15);
          switch (RecordLoop_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              MaybeDebugStream_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              MaybeDebugStream_28 = MaybeStartupStream_13;
              break;
          }
          mercury__getopt__lookup_int_option_3_p_0(TypeCtorInfo_61_61, Options_10, ((MR_Box) ((MR_Integer) 16)), &TimeOut_29);
          mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_61_61, Options_10, ((MR_Box) ((MR_Integer) 0)), &Canonical_30);
          mdprof_cgi__server_loop_10_p_0(ToServerPipe_11, FromServerPipe_12, TimeOut_29, MaybeDebugStream_28, Debug_20, Canonical_30, (MR_Integer) 0, Deep_16);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ResCode_66;

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
	 ResCode_66  = ResCode;
}
          succeeded = (ResCode_66 < (MR_Integer) 0);
          if (succeeded)
          {
            timeout__delete_cleanup_files_2_p_0();
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          else
          {
            succeeded = (ResCode_66 > (MR_Integer) 0);
            if (succeeded)
            {
              timeout__release_lock_4_p_0(Debug_20, MutexFile_14);
              timeout__remove_want_file_3_p_0(WantFile_15);
            }
            else
            {
              MR_Word StdIn_72;
              MR_Word StdOut_73;
              MR_Word StdErr_74;
              MR_Word BinaryStdIn_75;
              MR_Word BinaryStdOut_76;
              MR_Word MaybeDebugStream_111;
              MR_Integer TimeOut_112;
              MR_Word Canonical_113;

              timeout__unregister_file_for_cleanup_3_p_0(MutexFile_14);
              timeout__unregister_file_for_cleanup_3_p_0(WantFile_15);
              mercury__io__stdin_stream_3_p_0(&StdIn_72);
              mercury__io__close_input_3_p_0(StdIn_72);
              mercury__io__stdout_stream_3_p_0(&StdOut_73);
              mercury__io__close_output_3_p_0(StdOut_73);
              mercury__io__stderr_stream_3_p_0(&StdErr_74);
              mercury__io__close_output_3_p_0(StdErr_74);
              mercury__io__binary_input_stream_3_p_0(&BinaryStdIn_75);
              mercury__io__close_binary_input_3_p_0(BinaryStdIn_75);
              mercury__io__binary_output_stream_3_p_0(&BinaryStdOut_76);
              mercury__io__close_binary_output_3_p_0(BinaryStdOut_76);
              switch (RecordLoop_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  MaybeDebugStream_111 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  MaybeDebugStream_111 = MaybeStartupStream_13;
                  break;
              }
              mercury__getopt__lookup_int_option_3_p_0(TypeCtorInfo_61_61, Options_10, ((MR_Box) ((MR_Integer) 16)), &TimeOut_112);
              mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_61_61, Options_10, ((MR_Box) ((MR_Integer) 0)), &Canonical_113);
              mdprof_cgi__server_loop_10_p_0(ToServerPipe_11, FromServerPipe_12, TimeOut_112, MaybeDebugStream_111, Debug_20, Canonical_113, (MR_Integer) 0, Deep_16);
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mdprof_cgi__server_loop_10_p_0(
  MR_String ToServerPipe_11,
  MR_String FromServerPipe_12,
  MR_Integer TimeOut0_13,
  MR_Word MaybeStartupStream_14,
  MR_Word Debug_15,
  MR_Word Canonical_16,
  MR_Integer QueryNum0_17,
  MR_Word Deep0_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_185_185;
    MR_Integer QueryNum_20;
    MR_Word CmdPref0_21;
    MR_Word Deep_26;
    MR_Word Cmd_28;
    MR_Box conv0_CmdPref0_21;

    // setup for model_det tailcalls optimized into a loop
    timeout__setup_timeout_3_p_0(TimeOut0_13);
    QueryNum_20 = (QueryNum0_17 + (MR_Integer) 1);
    TypeCtorInfo_185_185 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0;
    interface__recv_term_5_p_0(TypeCtorInfo_185_185, ToServerPipe_11, Debug_15, &conv0_CmdPref0_21);
    CmdPref0_21 = ((MR_Word) conv0_CmdPref0_21);
    if ((MaybeStartupStream_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Cmd0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), CmdPref0_21, (MR_Integer) 0)));
      MR_Word PrefInd0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), CmdPref0_21, (MR_Integer) 1)));
      MR_String HTML_31;
      MR_String ResponseFileName_32;
      MR_Word ResponseRes_33;
      MR_Word ResponseStream_34;
      MR_String Var_56;
      MR_Word Var_157;
      MR_String Var_158;
      MR_String Var_159;
      MR_Word Var_160;
      MR_ArrayPtr Var_161;
      MR_ArrayPtr Var_162;
      MR_ArrayPtr Var_163;
      MR_ArrayPtr Var_164;
      MR_ArrayPtr Var_165;
      MR_ArrayPtr Var_166;
      MR_ArrayPtr Var_167;
      MR_ArrayPtr Var_168;
      MR_ArrayPtr Var_169;
      MR_ArrayPtr Var_170;
      MR_ArrayPtr Var_171;
      MR_ArrayPtr Var_172;
      MR_ArrayPtr Var_173;
      MR_ArrayPtr Var_174;
      MR_ArrayPtr Var_175;
      MR_ArrayPtr Var_176;
      MR_ArrayPtr Var_177;
      MR_ArrayPtr Var_178;
      MR_ArrayPtr Var_179;
      MR_ArrayPtr Var_180;
      MR_Word Var_181;
      MR_Word Var_182;
      MR_Word Var_183;
      MR_Word Var_184;

      succeeded = (Cmd0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      if (succeeded)
      {
        MR_Word MaybeDeep_25;
        MR_String Var_51 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 1)));
        MR_String Var_74 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 2)));
        MR_String Var_75 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 3)));
        MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 0)));
        MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 4)));
        MR_ArrayPtr Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 5)));
        MR_ArrayPtr Var_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 6)));
        MR_ArrayPtr Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 7)));
        MR_ArrayPtr Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 8)));
        MR_ArrayPtr Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 9)));
        MR_ArrayPtr Var_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 10)));
        MR_ArrayPtr Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 11)));
        MR_ArrayPtr Var_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 12)));
        MR_ArrayPtr Var_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 13)));
        MR_ArrayPtr Var_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 14)));
        MR_ArrayPtr Var_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 15)));
        MR_ArrayPtr Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 16)));
        MR_ArrayPtr Var_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 17)));
        MR_ArrayPtr Var_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 18)));
        MR_ArrayPtr Var_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 19)));
        MR_ArrayPtr Var_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 20)));
        MR_ArrayPtr Var_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 21)));
        MR_ArrayPtr Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 22)));
        MR_ArrayPtr Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 23)));
        MR_ArrayPtr Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 24)));
        MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 25)));
        MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 26)));
        MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 27)));
        MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 28)));

        startup__read_and_startup_default_deep_options_9_p_0(Var_51, Var_74, Var_75, Canonical_16, MaybeStartupStream_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeDeep_25);
        if (((MR_tag((MR_Word) MaybeDeep_25)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word Pref0_30;

          HTML_31 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeDeep_25, (MR_Integer) 0)));
          Deep_26 = Deep0_18;
          Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Pref0_30 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_24);
        }
        else
        {
          MR_Word Pref0_414;

          Deep_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeDeep_25, (MR_Integer) 0)));
          Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          Pref0_414 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_24);
          query__try_exec_4_p_0(Cmd_28, Pref0_414, Deep_26, &HTML_31);
        }
      }
      else
      {
        MR_Word Pref0_411;

        Deep_26 = Deep0_18;
        Cmd_28 = Cmd0_23;
        Pref0_411 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_24);
        query__try_exec_4_p_0(Cmd_28, Pref0_411, Deep_26, &HTML_31);
      }
      Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 0)));
      Var_158 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 1)));
      Var_159 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 2)));
      Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 3)));
      Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 4)));
      Var_161 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 5)));
      Var_162 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 6)));
      Var_163 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 7)));
      Var_164 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 8)));
      Var_165 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 9)));
      Var_166 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 10)));
      Var_167 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 11)));
      Var_168 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 12)));
      Var_169 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 13)));
      Var_170 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 14)));
      Var_171 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 15)));
      Var_172 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 16)));
      Var_173 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 17)));
      Var_174 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 18)));
      Var_175 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 19)));
      Var_176 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 20)));
      Var_177 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 21)));
      Var_178 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 22)));
      Var_179 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 23)));
      Var_180 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 24)));
      Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 25)));
      Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 26)));
      Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 27)));
      Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 28)));
      ResponseFileName_32 = interface__response_file_name_2_f_0(Var_56, QueryNum_20);
      mercury__io__open_output_4_p_0(ResponseFileName_32, &ResponseRes_33);
      if (((MR_tag((MR_Word) ResponseRes_33)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "cannot open response file");
          return;
        }
      }
      else
        ResponseStream_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResponseRes_33, (MR_Integer) 0)));
      mercury__io__write_string_4_p_0(ResponseStream_34, HTML_31);
      mercury__io__close_output_3_p_0(ResponseStream_34);
      interface__send_string_5_p_0(FromServerPipe_12, Debug_15, ResponseFileName_32);
    }
    else
    {
      MR_Word StartupStream1_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeStartupStream_14, (MR_Integer) 0)));
      MR_String Var_189;
      MR_Word Var_195;
      MR_String Var_200;
      MR_Word Cmd0_333;
      MR_Word PrefInd0_334;
      MR_String HTML_339;
      MR_String ResponseFileName_340;
      MR_Word ResponseRes_341;
      MR_Word ResponseStream_342;
      MR_String Var_347;
      MR_Word Var_303;
      MR_String Var_304;
      MR_String Var_305;
      MR_Word Var_306;
      MR_ArrayPtr Var_307;
      MR_ArrayPtr Var_308;
      MR_ArrayPtr Var_309;
      MR_ArrayPtr Var_310;
      MR_ArrayPtr Var_311;
      MR_ArrayPtr Var_312;
      MR_ArrayPtr Var_313;
      MR_ArrayPtr Var_314;
      MR_ArrayPtr Var_315;
      MR_ArrayPtr Var_316;
      MR_ArrayPtr Var_317;
      MR_ArrayPtr Var_318;
      MR_ArrayPtr Var_319;
      MR_ArrayPtr Var_320;
      MR_ArrayPtr Var_321;
      MR_ArrayPtr Var_322;
      MR_ArrayPtr Var_323;
      MR_ArrayPtr Var_324;
      MR_ArrayPtr Var_325;
      MR_ArrayPtr Var_326;
      MR_Word Var_327;
      MR_Word Var_328;
      MR_Word Var_329;
      MR_Word Var_330;

      mercury__io__write_string_4_p_0(StartupStream1_36, (MR_String) "server loop query ");
      Var_195 = (MR_Word) &mdprof_cgi_scalar_common_3[0];
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_195, QueryNum_20, &Var_189);
      mercury__io__write_string_4_p_0(StartupStream1_36, Var_189);
      mercury__io__write_string_4_p_0(StartupStream1_36, (MR_String) "\n");
      mercury__io__write_4_p_0(TypeCtorInfo_185_185, StartupStream1_36, ((MR_Box) (CmdPref0_21)));
      mercury__io__nl_3_p_0(StartupStream1_36);
      mercury__io__flush_output_3_p_0(StartupStream1_36);
      Cmd0_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), CmdPref0_21, (MR_Integer) 0)));
      PrefInd0_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), CmdPref0_21, (MR_Integer) 1)));
      succeeded = (Cmd0_333 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      if (succeeded)
      {
        MR_Word MaybeDeep_239;
        MR_String Var_241 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 1)));
        MR_String Var_244 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 2)));
        MR_String Var_245 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 3)));
        MR_Word Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 0)));
        MR_Word Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 4)));
        MR_ArrayPtr Var_213 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 5)));
        MR_ArrayPtr Var_214 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 6)));
        MR_ArrayPtr Var_215 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 7)));
        MR_ArrayPtr Var_216 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 8)));
        MR_ArrayPtr Var_217 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 9)));
        MR_ArrayPtr Var_218 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 10)));
        MR_ArrayPtr Var_219 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 11)));
        MR_ArrayPtr Var_220 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 12)));
        MR_ArrayPtr Var_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 13)));
        MR_ArrayPtr Var_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 14)));
        MR_ArrayPtr Var_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 15)));
        MR_ArrayPtr Var_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 16)));
        MR_ArrayPtr Var_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 17)));
        MR_ArrayPtr Var_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 18)));
        MR_ArrayPtr Var_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 19)));
        MR_ArrayPtr Var_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 20)));
        MR_ArrayPtr Var_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 21)));
        MR_ArrayPtr Var_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 22)));
        MR_ArrayPtr Var_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 23)));
        MR_ArrayPtr Var_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 24)));
        MR_Word Var_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 25)));
        MR_Word Var_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 26)));
        MR_Word Var_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 27)));
        MR_Word Var_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 28)));

        startup__read_and_startup_default_deep_options_9_p_0(Var_241, Var_244, Var_245, Canonical_16, MaybeStartupStream_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &MaybeDeep_239);
        if (((MR_tag((MR_Word) MaybeDeep_239)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word Pref0_338;

          HTML_339 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeDeep_239, (MR_Integer) 0)));
          Deep_26 = Deep0_18;
          Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Pref0_338 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_334);
        }
        else
        {
          MR_Word Pref0_420;

          Deep_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeDeep_239, (MR_Integer) 0)));
          Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          Pref0_420 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_334);
          query__try_exec_4_p_0(Cmd_28, Pref0_420, Deep_26, &HTML_339);
        }
      }
      else
      {
        MR_Word Pref0_417;

        Deep_26 = Deep0_18;
        Cmd_28 = Cmd0_333;
        Pref0_417 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_334);
        query__try_exec_4_p_0(Cmd_28, Pref0_417, Deep_26, &HTML_339);
      }
      Var_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 0)));
      Var_304 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 1)));
      Var_305 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 2)));
      Var_347 = ((MR_String) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 3)));
      Var_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 4)));
      Var_307 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 5)));
      Var_308 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 6)));
      Var_309 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 7)));
      Var_310 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 8)));
      Var_311 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 9)));
      Var_312 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 10)));
      Var_313 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 11)));
      Var_314 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 12)));
      Var_315 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 13)));
      Var_316 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 14)));
      Var_317 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 15)));
      Var_318 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 16)));
      Var_319 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 17)));
      Var_320 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 18)));
      Var_321 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 19)));
      Var_322 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 20)));
      Var_323 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 21)));
      Var_324 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 22)));
      Var_325 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 23)));
      Var_326 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 24)));
      Var_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 25)));
      Var_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 26)));
      Var_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 27)));
      Var_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deep0_18, (MR_Integer) 28)));
      ResponseFileName_340 = interface__response_file_name_2_f_0(Var_347, QueryNum_20);
      mercury__io__open_output_4_p_0(ResponseFileName_340, &ResponseRes_341);
      if (((MR_tag((MR_Word) ResponseRes_341)) == (MR_mktag((MR_Integer) 1))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "cannot open response file");
          return;
        }
      }
      else
        ResponseStream_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), ResponseRes_341, (MR_Integer) 0)));
      mercury__io__write_string_4_p_0(ResponseStream_342, HTML_339);
      mercury__io__close_output_3_p_0(ResponseStream_342);
      interface__send_string_5_p_0(FromServerPipe_12, Debug_15, ResponseFileName_340);
      mercury__io__write_string_4_p_0(StartupStream1_36, (MR_String) "query ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_195, QueryNum_20, &Var_200);
      mercury__io__write_string_4_p_0(StartupStream1_36, Var_200);
      mercury__io__write_string_4_p_0(StartupStream1_36, (MR_String) " output:\n");
      mercury__io__write_string_4_p_0(StartupStream1_36, HTML_339);
      mercury__io__write_string_4_p_0(StartupStream1_36, (MR_String) "\n");
      mercury__io__flush_output_3_p_0(StartupStream1_36);
    }
    succeeded = (Cmd_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      timeout__delete_cleanup_files_2_p_0();
    else
    {
      MR_Integer TimeOut_37;

      succeeded = ((MR_tag((MR_Word) Cmd_28)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        TimeOut_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Cmd_28, (MR_Integer) 0)));
        {
          MR_Integer next_value_of_TimeOut0_13 = TimeOut_37;
          MR_Integer next_value_of_QueryNum0_17 = QueryNum_20;
          MR_Word next_value_of_Deep0_18 = Deep_26;

          // direct tailcall eliminated
          TimeOut0_13 = next_value_of_TimeOut0_13;
          QueryNum0_17 = next_value_of_QueryNum0_17;
          Deep0_18 = next_value_of_Deep0_18;
          continue;
        }
      }
      else
      {
        MR_Integer next_value_of_QueryNum0_17 = QueryNum_20;
        MR_Word next_value_of_Deep0_18 = Deep_26;

        // direct tailcall eliminated
        QueryNum0_17 = next_value_of_QueryNum0_17;
        Deep0_18 = next_value_of_Deep0_18;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_cgi__handle_query_from_existing_server_9_p_0(
  MR_Word Cmd_10,
  MR_Word PrefInd_11,
  MR_String ToServerPipe_12,
  MR_String FromServerPipe_13,
  MR_String MutexFile_14,
  MR_String WantFile_15,
  MR_Word Options_16)
{
  {
    MR_Word Debug_18;
    MR_String ResponseFileName_23;
    MR_String CatCmd_24;
    MR_Word Var_44;
    MR_Word Var_25;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, Options_16, ((MR_Box) ((MR_Integer) 2)), &Debug_18);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Cmd_10));
      MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (PrefInd_11));
    }
    interface__send_term_5_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0, ToServerPipe_12, Debug_18, ((MR_Box) (Var_44)));
    timeout__release_lock_4_p_0(Debug_18, MutexFile_14);
    timeout__remove_want_file_3_p_0(WantFile_15);
    interface__recv_string_5_p_0(FromServerPipe_13, Debug_18, &ResponseFileName_23);
    CatCmd_24 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", ResponseFileName_23);
    mercury__io__call_system_4_p_0(CatCmd_24, &Var_25);
    switch (Debug_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_32;

          mercury__io__remove_file_4_p_0(ResponseFileName_23, &Var_32);
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
  MR_String ProgName_4)
{
  {
    MR_String Version_6;
    MR_String Fullarch_7;

    mercury__library__version_2_p_0(&Version_6, &Fullarch_7);
    mercury__io__write_string_3_p_0(ProgName_4);
    mercury__io__write_string_3_p_0((MR_String) ": Mercury deep profiler\n");
    mercury__io__write_string_3_p_0((MR_String) "version: ");
    mercury__io__write_string_3_p_0(Version_6);
    mercury__io__write_string_3_p_0((MR_String) ", on ");
    mercury__io__write_string_3_p_0(Fullarch_7);
    mercury__io__write_string_3_p_0((MR_String) ".\n");
  }
}

static void MR_CALL 
mdprof_cgi__decode_input_lines_5_p_0(
  MR_Word Decode_6,
  MR_Word DecodeCmd_7,
  MR_Word DecodePrefs_8)
{
  while (MR_TRUE)
  {
    MR_Word LineResult_10;

    // setup for model_det tailcalls optimized into a loop
    mercury__io__read_line_as_string_3_p_0(&LineResult_10);
    switch (MR_tag((MR_Word) LineResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String LineStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), LineResult_10, (MR_Integer) 0)));

          switch (Decode_6) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeQuery_12;

                mercury__io__write_string_3_p_0((MR_String) "considering as query string:\n");
                MaybeQuery_12 = query__string_to_maybe_query_1_f_0(LineStr_11);
                if ((MaybeQuery_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "invalid query string: cannot split into components\n");
                }
                else
                {
                  MR_Word MaybeCmd_13;
                  MR_String DeepFileName_14;
                  MR_Word MaybePrefs_15;
                  MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeQuery_12, (MR_Integer) 0)));

                  MaybeCmd_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0)));
                  DeepFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1)));
                  MaybePrefs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 2)));
                  mercury__io__write_string_3_p_0((MR_String) "Maybe Command:\n");
                  mercury__io__write_3_p_0((MR_Word) &mdprof_cgi_scalar_common_1[0], ((MR_Box) (MaybeCmd_13)));
                  mercury__io__nl_2_p_0();
                  mercury__io__write_string_3_p_0((MR_String) "Deep File Name: ");
                  mercury__io__write_string_3_p_0(DeepFileName_14);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                  mercury__io__write_string_3_p_0((MR_String) "Maybe Preferences:\n");
                  mercury__io__write_3_p_0((MR_Word) &mdprof_cgi_scalar_common_1[1], ((MR_Box) (MaybePrefs_15)));
                  mercury__io__nl_2_p_0();
                }
              }
              break;
          }
          switch (DecodeCmd_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeCmd1_16;

                mercury__io__write_string_3_p_0((MR_String) "considering as cmd string:\n");
                MaybeCmd1_16 = query__string_to_maybe_cmd_1_f_0(LineStr_11);
                if ((MaybeCmd1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "invalid command string ");
                  mercury__io__write_string_3_p_0(LineStr_11);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
                else
                {
                  MR_Word Cmd_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeCmd1_16, (MR_Integer) 0)));

                  mercury__io__write_3_p_0((MR_Word) &query__query__type_ctor_info_cmd_0, ((MR_Box) (Cmd_17)));
                  mercury__io__nl_2_p_0();
                }
              }
              break;
          }
          switch (DecodePrefs_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybePref_18;

                mercury__io__write_string_3_p_0((MR_String) "considering as preference string:\n");
                MaybePref_18 = query__string_to_maybe_pref_1_f_0(LineStr_11);
                if ((MaybePref_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__io__write_string_3_p_0((MR_String) "invalid preferences string ");
                  mercury__io__write_string_3_p_0(LineStr_11);
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
                else
                {
                  MR_Word Pref_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePref_18, (MR_Integer) 0)));

                  mercury__io__write_3_p_0((MR_Word) &query__query__type_ctor_info_preferences_0, ((MR_Box) (Pref_19)));
                  mercury__io__nl_2_p_0();
                }
              }
              break;
          }
          // direct tailcall eliminated
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), LineResult_10, (MR_Integer) 0)));
          MR_String Msg_21;

          mercury__io__error_message_2_p_0(Error_20, &Msg_21);
          mercury__io__write_string_3_p_0(Msg_21);
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_cgi____Unify____child_has_parent_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_cgi____Compare____child_has_parent_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_cgi____Unify____cmd_pref_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_cgi____Compare____cmd_pref_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_cgi____Unify____detach_process_result_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_cgi____Compare____detach_process_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_cgi____Unify____option_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_cgi____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_cgi____Unify____option_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_cgi____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mdprof_cgi.
