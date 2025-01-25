/*
** Automatically generated from `mdprof_cgi.m'
** by the Mercury compiler,
** version rotd-2025-01-25
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


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "conf.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dump.mih"
#include "enum.mih"
#include "exclude.mih"
#include "getopt.mih"
#include "int.mih"
#include "interface.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "query.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "startup.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "timeout.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.program_representation.mih"
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

struct mdprof_cgi__process_command_line_4_p_0_4_env_0_s {
  MR_Box * mdprof_cgi__process_command_line_4_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_cgi__process_command_line_4_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_cgi__process_command_line_4_p_0_4_env_0__cont;
  void * mdprof_cgi__process_command_line_4_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_cgi__process_command_line_4_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_cgi__process_command_line_4_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0;

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1;

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_ordinal_ordered_child_has_parent_0[2];

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_child_has_parent_0[2];

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_child_has_parent_0[2];

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0[2];

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0;

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0[1];

static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0[1];

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0[1];

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0[1];

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0[1];

static const MR_DuArgLocn mdprof_cgi__mdprof_cgi__field_locns_detach_process_result_0_0[1];

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

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_ordinal_ordered_option_0[19];

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
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
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
mdprof_cgi__process_command_line_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdprof_cgi__process_command_line_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_cgi__process_command_line_4_p_0(
  MR_Word InputStream_5,
  MR_Word OutputStream_6);

static void MR_CALL 
mdprof_cgi__process_args_6_p_0(
  MR_Word OutputStream_7,
  MR_String ProgName_8,
  MR_Word Args_9,
  MR_Word Options_10);

static void MR_CALL 
mdprof_cgi__process_query_7_p_0(
  MR_Word OutputStream_8,
  MR_Word Cmd0_9,
  MR_String DeepFileName0_10,
  MR_Word MaybePref_11,
  MR_Word Options0_12);

static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_12_p_0(
  MR_Word OutputStream_13,
  MR_Word Cmd_14,
  MR_Word PrefInd_15,
  MR_String FileName_16,
  MR_String ToServerPipe_17,
  MR_String FromServerPipe_18,
  MR_String StartupFile_19,
  MR_String MutexFile_20,
  MR_String WantFile_21,
  MR_Word Options_22);

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
mdprof_cgi__decode_input_lines_7_p_0(
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Word Decode_10,
  MR_Word DecodeCmd_11,
  MR_Word DecodePrefs_12);

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


static /* final */ const MR_Box mdprof_cgi_scalar_common_1[5][2];

static /* final */ const MR_Box mdprof_cgi_scalar_common_2[9][3];

static /* final */ const MR_Box mdprof_cgi_scalar_common_3[6][1];

static /* final */ const MR_Box mdprof_cgi_scalar_common_4[3][5];


struct mdprof_cgi__vector_common_type_5_0_s {
  const MR_Word mdprof_cgi__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mdprof_cgi__vector_common_type_5_0_s mdprof_cgi_vector_common_5[19];

struct mdprof_cgi__vector_common_type_6_0_s {
  const MR_Word mdprof_cgi__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mdprof_cgi__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mdprof_cgi__vector_common_type_6_0_s mdprof_cgi_vector_common_6[19];



static /* final */ const MR_Box mdprof_cgi_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_cmd_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&query__query__type_ctor_info_preferences_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "QUERY_STRING environment variable.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "instead it decides what to do based on the\n")),
    ((MR_Box) (MR_mkword(1, &mdprof_cgi_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "This program doesn\'t expect any arguments;\n")),
    ((MR_Box) (MR_mkword(1, &mdprof_cgi_scalar_common_1[3])))
  },
};

static /* final */ const MR_Box mdprof_cgi_scalar_common_2[9][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[0])),
    ((MR_Box) (mdprof_cgi__process_command_line_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[1])),
    ((MR_Box) (mdprof_cgi__process_command_line_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[2])),
    ((MR_Box) (mdprof_cgi__process_command_line_4_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_2[1])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[2])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_4[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_2[5])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[6])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[7]))
  },
};

static /* final */ const MR_Box mdprof_cgi_scalar_common_3[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 30)) },
  /* row   5 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box mdprof_cgi_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mdprof_cgi__vector_common_type_5_0_s mdprof_cgi_vector_common_5[19] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
  /* row   8 */   { (MR_Integer) 8 },
  /* row   9 */   { (MR_Integer) 9 },
  /* row  10 */   { (MR_Integer) 10 },
  /* row  11 */   { (MR_Integer) 11 },
  /* row  12 */   { (MR_Integer) 14 },
  /* row  13 */   { (MR_Integer) 13 },
  /* row  14 */   { (MR_Integer) 12 },
  /* row  15 */   { (MR_Integer) 15 },
  /* row  16 */   { (MR_Integer) 16 },
  /* row  17 */   { (MR_Integer) 17 },
  /* row  18 */   { (MR_Integer) 18 },
};

static /* final */ const struct mdprof_cgi__vector_common_type_6_0_s mdprof_cgi_vector_common_6[19] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(2, &mdprof_cgi_scalar_common_3[3]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[0]))
  },
  /* row   7 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row   8 */
  {
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row   9 */
  {
    (MR_Integer) 9,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row  10 */
  {
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(2, &mdprof_cgi_scalar_common_3[3]))
  },
  /* row  11 */
  {
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row  12 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row  13 */
  {
    (MR_Integer) 14,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[0]))
  },
  /* row  14 */
  {
    (MR_Integer) 13,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[0]))
  },
  /* row  15 */
  {
    (MR_Integer) 15,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[0]))
  },
  /* row  16 */
  {
    (MR_Integer) 16,
    (MR_Word) (MR_mkword(2, &mdprof_cgi_scalar_common_3[4]))
  },
  /* row  17 */
  {
    (MR_Integer) 17,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2]))
  },
  /* row  18 */
  {
    (MR_Integer) 18,
    (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[0]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdprof_cgi.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0 = {
  (MR_String) "child_has_parent",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1 = {
  (MR_String) "child_has_no_parent",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_ordinal_ordered_child_has_parent_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_cgi____Unify____child_has_parent_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____child_has_parent_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "child_has_parent",
  { mdprof_cgi__mdprof_cgi__enum_name_ordered_child_has_parent_0 },
  { mdprof_cgi__mdprof_cgi__enum_ordinal_ordered_child_has_parent_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_cgi__mdprof_cgi__functor_number_map_child_has_parent_0,

};

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0[2] = {
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_cmd_0),
  (MR_PseudoTypeInfo) (&query__query__type_ctor_info_preferences_indication_0)
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0 = {
  (MR_String) "cmd_pref",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0[1] = { &mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0 };

static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0[1] = { &mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0 };

static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_cgi____Unify____cmd_pref_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____cmd_pref_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "cmd_pref",
  { mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0 },
  { mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0,

};

static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0[1] = { (MR_PseudoTypeInfo) (&mdprof_cgi__mdprof_cgi__type_ctor_info_child_has_parent_0) };

static const MR_DuArgLocn mdprof_cgi__mdprof_cgi__field_locns_detach_process_result_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0 = {
  (MR_String) "in_child",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0,
  NULL,
  mdprof_cgi__mdprof_cgi__field_locns_detach_process_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1 = {
  (MR_String) "in_parent",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2 = {
  (MR_String) "fork_failed",
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

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0[2] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1,
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2
};

static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1[1] = { &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0 };

static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_detach_process_result_0[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdprof_cgi____Unify____detach_process_result_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____detach_process_result_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "detach_process_result",
  { mdprof_cgi__mdprof_cgi__du_name_ordered_detach_process_result_0 },
  { mdprof_cgi__mdprof_cgi__du_ptag_ordered_detach_process_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdprof_cgi__mdprof_cgi__functor_number_map_detach_process_result_0,

};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_0 = {
  (MR_String) "canonical_clique",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_1 = {
  (MR_String) "clique",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_2 = {
  (MR_String) "debug",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_3 = {
  (MR_String) "decode",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_4 = {
  (MR_String) "decode_cmd",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_5 = {
  (MR_String) "decode_prefs",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_6 = {
  (MR_String) "detach_process",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_7 = {
  (MR_String) "help",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_8 = {
  (MR_String) "localhost",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_9 = {
  (MR_String) "modules",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_10 = {
  (MR_String) "proc",
  INT32_C(10)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_11 = {
  (MR_String) "quit",
  INT32_C(11)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_12 = {
  (MR_String) "root",
  INT32_C(12)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_13 = {
  (MR_String) "record_startup",
  INT32_C(13)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_14 = {
  (MR_String) "record_loop",
  INT32_C(14)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_15 = {
  (MR_String) "server_process",
  INT32_C(15)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_16 = {
  (MR_String) "timeout",
  INT32_C(16)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_17 = {
  (MR_String) "version",
  INT32_C(17)
};

static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_18 = {
  (MR_String) "write_query_string",
  INT32_C(18)
};

static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_ordinal_ordered_option_0[19] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_cgi____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____option_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "option",
  { mdprof_cgi__mdprof_cgi__enum_name_ordered_option_0 },
  { mdprof_cgi__mdprof_cgi__enum_ordinal_ordered_option_0 },
  (MR_Integer) 19,
  UINT16_C(12),
  mdprof_cgi__mdprof_cgi__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 mdprof_cgi__tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_cgi____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdprof_cgi____Compare____option_table_0_0_10001)),
  (MR_String) "mdprof_cgi",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdprof_cgi__tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_cgi_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_cgi_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_9 < Var_10);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_9 > Var_10);
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

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    query____Compare____cmd_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      query____Compare____preferences_indication_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = query____Unify____cmd_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = query____Unify____preferences_indication_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_cgi__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mdprof_cgi_vector_common_6[0 + slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_0;
    *HeadVar__2_2 = ((&mdprof_cgi_vector_common_6[0 + slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 19));
}

static MR_bool MR_CALL 
mdprof_cgi__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 101:
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "debug"))
                  case_num_0 = (MR_Integer) 2;
                break;
              case (MR_Integer) 99:
                if (MR_offset_strn_eq(3, 3, HeadVar__1_1, (MR_String) "decode"))
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
            if (MR_offset_strn_eq(2, 5, HeadVar__1_1, (MR_String) "record-"))
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
      ;
      *HeadVar__2_2 = ((&mdprof_cgi_vector_common_5[0 + case_num_0]))->mdprof_cgi__vector_common_type_5_0__vct_5_f_0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdprof_cgi__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
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

static void MR_CALL 
mdprof_cgi__raw_detach_process_3_p_0(
  MR_Integer * ResCode_1)
{
{
#define MR_PROC_LABEL mdprof_cgi__raw_detach_process_3_p_0

	MR_Integer ResCode;

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
#else
    MR_fatal_error("deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	*ResCode_1  = ResCode;
}
}

static void MR_CALL 
mdprof_cgi__check_for_existing_fifos_5_p_0(
  MR_String Fifo1_1,
  MR_String Fifo2_2,
  MR_Integer * FifoCount_3)
{
{
#define MR_PROC_LABEL mdprof_cgi__check_for_existing_fifos_5_p_0

	MR_String Fifo1;
	MR_String Fifo2;
	MR_Integer FifoCount;

	Fifo1 = Fifo1_1 ;
	Fifo2 = Fifo2_2 ;
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
#else
    MR_fatal_error("deep profiling not enabled");
#endif


		;}
#undef MR_PROC_LABEL
	*FifoCount_3  = FifoCount;
}
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  struct mdprof_cgi__main_2_p_0_4_env_0_s * env_ptr = (struct mdprof_cgi__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont)((env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
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

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = mdprof_cgi__long_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

void MR_CALL 
main_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word StdIn_4;
  MR_Word StdOut_5;
  MR_Word MaybeQueryString_6;

  mercury__io__stdin_stream_3_p_0(&StdIn_4);
  mercury__io__stdout_stream_3_p_0(&StdOut_5);
  mercury__io__write_string_4_p_0(StdOut_5, (MR_String) "Content-type: text/html\n\n");
  mercury__io__flush_output_3_p_0(StdOut_5);
  mercury__io__environment__get_environment_var_4_p_0((MR_String) "QUERY_STRING", &MaybeQueryString_6);
  if ((MaybeQueryString_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mdprof_cgi__process_command_line_4_p_0(StdIn_4, StdOut_5);
  else
  {
    MR_String QueryString0_7 = ((MR_String) ((MR_hl_field(1, MaybeQueryString_6, (MR_Integer) 0))));
    MR_Word MaybeOptions_10;
    MR_Word Options_11;
    MR_Word MaybeDeepQuery_13;
    MR_Word Var_9;

    mercury__getopt__process_options_4_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mdprof_cgi_scalar_common_2[8])), (MR_Word) ((MR_Unsigned) 0U), &Var_9, &MaybeOptions_10);
    if (((MR_tag((MR_Word) MaybeOptions_10)) == (MR_Integer) 1))
      {
        mercury__require__error_1_p_0((MR_String) "mdprof_cgi: error parsing empty command line");
        return;
      }
    else
      Options_11 = ((MR_Word) ((MR_hl_field(0, MaybeOptions_10, (MR_Integer) 0))));
    MaybeDeepQuery_13 = query__string_to_maybe_query_1_f_0(QueryString0_7);
    if ((MaybeDeepQuery_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      mercury__io__write_string_4_p_0(StdOut_5, (MR_String) "Bad URL; expected filename\n");
    }
    else
    {
      MR_Word DeepQuery_14 = ((MR_Word) ((MR_hl_field(1, MaybeDeepQuery_13, (MR_Integer) 0))));
      MR_Word MaybeCmd_15 = ((MR_Word) ((MR_hl_field(0, DeepQuery_14, (MR_Integer) 0))));
      MR_String DeepFileName_16 = ((MR_String) ((MR_hl_field(0, DeepQuery_14, (MR_Integer) 1))));
      MR_Word MaybePrefs_17 = ((MR_Word) ((MR_hl_field(0, DeepQuery_14, (MR_Integer) 2))));
      MR_Word Cmd_18;

      if ((MaybeCmd_15 == (MR_Word) ((MR_Unsigned) 0U)))
        Cmd_18 = query__default_command_0_f_0();
      else
        Cmd_18 = ((MR_Word) ((MR_hl_field(1, MaybeCmd_15, (MR_Integer) 0))));
      mdprof_cgi__process_query_7_p_0(StdOut_5, Cmd_18, DeepFileName_16, MaybePrefs_17, Options_11);
    }
  }
}

static void MR_CALL 
mdprof_cgi__process_command_line_4_p_0_3(
  void * env_ptr_arg)
{
  struct mdprof_cgi__process_command_line_4_p_0_4_env_0_s * env_ptr = (struct mdprof_cgi__process_command_line_4_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdprof_cgi__process_command_line_4_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_cgi__process_command_line_4_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mdprof_cgi__process_command_line_4_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_cgi__process_command_line_4_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mdprof_cgi__process_command_line_4_p_0_4_env_0__cont)((env_ptr)->mdprof_cgi__process_command_line_4_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
mdprof_cgi__process_command_line_4_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdprof_cgi__process_command_line_4_p_0_4_env_0_s env;

  (env).mdprof_cgi__process_command_line_4_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdprof_cgi__process_command_line_4_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdprof_cgi__process_command_line_4_p_0_4_env_0__cont = cont;
  (env).mdprof_cgi__process_command_line_4_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdprof_cgi__defaults_2_p_0(&(env).mdprof_cgi__process_command_line_4_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_cgi__process_command_line_4_p_0_4_env_0__conv2_HeadVar__2_2, mdprof_cgi__process_command_line_4_p_0_3, &env);
  }
}

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = mdprof_cgi__long_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdprof_cgi__process_command_line_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static void MR_CALL 
mdprof_cgi__process_command_line_4_p_0(
  MR_Word InputStream_5,
  MR_Word OutputStream_6)
{
  MR_bool succeeded;
  MR_String ProgName_8;
  MR_Word Args0_9;
  MR_Word Args_12;
  MR_Word MaybeOptions_13;

  mercury__io__progname_base_4_p_0((MR_String) "mdprof_cgi", &ProgName_8);
  mercury__io__command_line_arguments_3_p_0(&Args0_9);
  mercury__getopt__process_options_4_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mdprof_cgi_scalar_common_2[4])), Args0_9, &Args_12, &MaybeOptions_13);
  if (((MR_tag((MR_Word) MaybeOptions_13)) == (MR_Integer) 1))
  {
    MR_Word Error_20 = ((MR_Word) ((MR_hl_field(1, MaybeOptions_13, (MR_Integer) 0))));
    MR_String Msg_21;

    Msg_21 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Error_20);
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    mercury__io__write_string_4_p_0(OutputStream_6, ProgName_8);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ": error parsing options: ");
    mercury__io__write_string_4_p_0(OutputStream_6, Msg_21);
    mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
  }
  else
  {
    MR_Word Options_14 = ((MR_Word) ((MR_hl_field(0, MaybeOptions_13, (MR_Integer) 0))));
    MR_Word Help_15;
    MR_Word Version_16;
    MR_Word Decode_17;
    MR_Word DecodeCmd_18;
    MR_Word DecodePrefs_19;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_14, ((MR_Box) ((MR_Integer) 7)), &Help_15);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_14, ((MR_Box) ((MR_Integer) 17)), &Version_16);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_14, ((MR_Box) ((MR_Integer) 3)), &Decode_17);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_14, ((MR_Box) ((MR_Integer) 4)), &DecodeCmd_18);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_14, ((MR_Box) ((MR_Integer) 5)), &DecodePrefs_19);
    switch (Help_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "Usage: ");
          mercury__io__write_string_4_p_0(OutputStream_6, ProgName_8);
          mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "\n");
          mercury__io__write_strings_4_p_0(OutputStream_6, (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_1[4])));
        }
        break;
    }
    switch (Version_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Version_87;
          MR_String Fullarch_88;

          mercury__library__version_2_p_0(&Version_87, &Fullarch_88);
          mercury__io__write_string_4_p_0(OutputStream_6, ProgName_8);
          mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ": Mercury deep profiler\n");
          mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) "version: ");
          mercury__io__write_string_4_p_0(OutputStream_6, Version_87);
          mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ", on ");
          mercury__io__write_string_4_p_0(OutputStream_6, Fullarch_88);
          mercury__io__write_string_4_p_0(OutputStream_6, (MR_String) ".\n");
        }
        break;
    }
    succeeded = (Decode_17 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (DecodeCmd_18 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (DecodePrefs_19 == (MR_Integer) 0);
    }
    if (!(succeeded))
      mdprof_cgi__decode_input_lines_7_p_0(InputStream_5, OutputStream_6, Decode_17, DecodeCmd_18, DecodePrefs_19);
    succeeded = (Help_15 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Version_16 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Decode_17 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (DecodeCmd_18 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (DecodePrefs_19 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
      mdprof_cgi__process_args_6_p_0(OutputStream_6, ProgName_8, Args_12, Options_14);
  }
}

static void MR_CALL 
mdprof_cgi__process_args_6_p_0(
  MR_Word OutputStream_7,
  MR_String ProgName_8,
  MR_Word Args_9,
  MR_Word Options_10)
{
  MR_bool succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_String DeepFileName_12;
  MR_Word Var_17;

  if (succeeded)
  {
    DeepFileName_12 = ((MR_String) ((MR_hl_field(1, Args_9, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(1, Args_9, (MR_Integer) 1))));
    succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Var_18;
    MR_Word Quit_40;
    MR_Word Root_41;
    MR_Word Modules_42;
    MR_Integer CliqueNum_43;
    MR_Integer ProcProcNum_44;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 11)), &Quit_40);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 12)), &Root_41);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 9)), &Modules_42);
    mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 1)), &CliqueNum_43);
    mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 10)), &ProcProcNum_44);
    succeeded = (Root_41 == (MR_Integer) 1);
    if (succeeded)
      Var_18 = (MR_Word) (MR_mkword(2, &mdprof_cgi_scalar_common_3[5]));
    else
    {
      succeeded = (Modules_42 == (MR_Integer) 1);
      if (succeeded)
        Var_18 = (MR_Word) ((MR_Unsigned) 16U);
      else
      {
        succeeded = (CliqueNum_43 > (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_52 = (MR_Word) (CliqueNum_43);

          {
            Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_52));
          }
        }
        else
        {
          succeeded = (ProcProcNum_44 > (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_54 = (MR_Word) (ProcProcNum_44);

            {
              Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, Var_18, 1) = ((MR_Box) (Var_54));
            }
          }
          else
          {
            succeeded = (Quit_40 == (MR_Integer) 1);
            if (succeeded)
              Var_18 = (MR_Word) ((MR_Unsigned) 0U);
            else
              Var_18 = (MR_Word) ((MR_Unsigned) 8U);
          }
        }
      }
    }
    mdprof_cgi__process_query_7_p_0(OutputStream_7, Var_18, DeepFileName_12, (MR_Word) ((MR_Unsigned) 0U), Options_10);
  }
  else
  {
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "Usage: ");
    mercury__io__write_string_4_p_0(OutputStream_7, ProgName_8);
    mercury__io__write_string_4_p_0(OutputStream_7, (MR_String) "\n");
    mercury__io__write_strings_4_p_0(OutputStream_7, (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_1[4])));
  }
}

static void MR_CALL 
mdprof_cgi__process_query_7_p_0(
  MR_Word OutputStream_8,
  MR_Word Cmd0_9,
  MR_String DeepFileName0_10,
  MR_Word MaybePref_11,
  MR_Word Options0_12)
{
  MR_bool succeeded = (Cmd0_9 == (MR_Word) ((MR_Unsigned) 4U));
  MR_Word Cmd_14;
  MR_Word PrefInd_16;
  MR_String DeepFileName_18;
  MR_Word Options_19;
  MR_String DeepFileNamePrime_17;
  MR_String _BaseFileName_20;

  if (succeeded)
    Cmd_14 = (MR_Word) ((MR_Unsigned) 8U);
  else
    Cmd_14 = Cmd0_9;
  if ((MaybePref_11 == (MR_Word) ((MR_Unsigned) 0U)))
    PrefInd_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Pref_15 = ((MR_Word) ((MR_hl_field(1, MaybePref_11, (MR_Integer) 0))));

    PrefInd_16 = (MR_Word) (MR_mkword(1, (MR_Word) (Pref_15)));
  }
  succeeded = mercury__string__remove_suffix_3_p_0(DeepFileName0_10, (MR_String) ".localhost", &DeepFileNamePrime_17);
  if (succeeded)
  {
    DeepFileName_18 = DeepFileNamePrime_17;
    mercury__map__det_update_4_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 8)), ((MR_Box) (MR_mkword(1, &mdprof_cgi_scalar_common_3[0]))), Options0_12, &Options_19);
  }
  else
  {
    DeepFileName_18 = DeepFileName0_10;
    Options_19 = Options0_12;
  }
  succeeded = mercury__string__remove_suffix_3_p_0(DeepFileName_18, (MR_String) ".data", &_BaseFileName_20);
  if (succeeded)
  {
    MR_String ToServerPipe_21;
    MR_String FromServerPipe_22;
    MR_String StartupFile_23;
    MR_String MutexFile_24;
    MR_Word Debug_25;
    MR_String WantFile_26;
    MR_Integer FifoCount_27;

    ToServerPipe_21 = interface__to_server_pipe_name_1_f_0(DeepFileName_18);
    FromServerPipe_22 = interface__from_server_pipe_name_1_f_0(DeepFileName_18);
    StartupFile_23 = interface__server_startup_name_1_f_0(DeepFileName_18);
    MutexFile_24 = interface__mutex_file_name_1_f_0(DeepFileName_18);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_19, ((MR_Box) ((MR_Integer) 2)), &Debug_25);
    WantFile_26 = interface__want_file_name_0_f_0();
    timeout__make_want_file_3_p_0(WantFile_26);
    timeout__get_lock_4_p_0(Debug_25, MutexFile_24);
    switch (Debug_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_38;
          MR_String Var_39;

          Var_38 = interface__want_dir_0_f_0();
          Var_39 = interface__want_prefix_0_f_0();
          timeout__setup_signals_5_p_0(MutexFile_24, Var_38, Var_39);
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
{
#define MR_PROC_LABEL mdprof_cgi__process_query_7_p_0

	MR_String Fifo1;
	MR_String Fifo2;
	MR_Integer FifoCount;

	Fifo1 = ToServerPipe_21 ;
	Fifo2 = FromServerPipe_22 ;
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
#else
    MR_fatal_error("deep profiling not enabled");
#endif


		;}
#undef MR_PROC_LABEL
	FifoCount_27  = FifoCount;
}
    succeeded = (FifoCount_27 == (MR_Integer) 0);
    if (succeeded)
      mdprof_cgi__handle_query_from_new_server_12_p_0(OutputStream_8, Cmd_14, PrefInd_16, DeepFileName_18, ToServerPipe_21, FromServerPipe_22, StartupFile_23, MutexFile_24, WantFile_26, Options_19);
    else
    {
      succeeded = (FifoCount_27 == (MR_Integer) 2);
      if (succeeded)
        mdprof_cgi__handle_query_from_existing_server_9_p_0(Cmd_14, PrefInd_16, ToServerPipe_21, FromServerPipe_22, MutexFile_24, WantFile_26, Options_19);
      else
      {
        timeout__release_lock_4_p_0(Debug_25, MutexFile_24);
        timeout__remove_want_file_3_p_0(WantFile_26);
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "mdprof internal error: bad fifo count\n");
      }
    }
  }
  else
  {
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "<h3> Invalid file name ");
    mercury__io__write_string_4_p_0(OutputStream_8, DeepFileName_18);
    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) ".<h3>\n\n");
    mercury__io__write_string_4_p_0(OutputStream_8, (MR_String) "Deep profiling data files must have a .data suffix, to allow the deep profiler to locate any related files.\n");
  }
}

static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_12_p_0(
  MR_Word OutputStream_13,
  MR_Word Cmd_14,
  MR_Word PrefInd_15,
  MR_String FileName_16,
  MR_String ToServerPipe_17,
  MR_String FromServerPipe_18,
  MR_String StartupFile_19,
  MR_String MutexFile_20,
  MR_String WantFile_21,
  MR_Word Options_22)
{
  MR_bool succeeded;
  MR_Word LocalHost_24;
  MR_String Machine_25;
  MR_String ScriptName_26;
  MR_Word Canonical_27;
  MR_Word ServerProcess_28;
  MR_Word Debug_29;
  MR_Word RecordStartup_30;
  MR_Word MaybeStartupStream_33;
  MR_Word StartupResult_35;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_22, ((MR_Box) ((MR_Integer) 8)), &LocalHost_24);
  switch (LocalHost_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      conf__server_name_port_3_p_0(&Machine_25);
      break;
    case (MR_Integer) 1:
      Machine_25 = (MR_String) "localhost";
      break;
  }
  conf__script_name_3_p_0(&ScriptName_26);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_22, ((MR_Box) ((MR_Integer) 0)), &Canonical_27);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_22, ((MR_Box) ((MR_Integer) 15)), &ServerProcess_28);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_22, ((MR_Box) ((MR_Integer) 2)), &Debug_29);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_22, ((MR_Box) ((MR_Integer) 13)), &RecordStartup_30);
  switch (RecordStartup_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeStartupStream_33 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word StartupStreamRes_31;

        mercury__io__open_output_4_p_0(StartupFile_19, &StartupStreamRes_31);
        if (((MR_tag((MR_Word) StartupStreamRes_31)) == (MR_Integer) 1))
          {
            mercury__require__error_1_p_0((MR_String) "cannot create startup file");
            return;
          }
        else
        {
          MR_Word StartupStream0_32 = ((MR_Word) ((MR_hl_field(0, StartupStreamRes_31, (MR_Integer) 0))));

          {
            MaybeStartupStream_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeStartupStream_33, 0) = ((MR_Box) (StartupStream0_32));
          }
          timeout__register_file_for_cleanup_3_p_0(StartupFile_19);
        }
      }
      break;
  }
  startup__read_and_startup_default_deep_options_9_p_0(Machine_25, ScriptName_26, FileName_16, Canonical_27, MaybeStartupStream_33, (MR_Word) ((MR_Unsigned) 0U), &StartupResult_35);
  if (((MR_tag((MR_Word) StartupResult_35)) == (MR_Integer) 1))
  {
    MR_String Error_41 = ((MR_String) ((MR_hl_field(1, StartupResult_35, (MR_Integer) 0))));

    timeout__release_lock_4_p_0(Debug_29, MutexFile_20);
    timeout__remove_want_file_3_p_0(WantFile_21);
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    mercury__io__write_string_4_p_0(OutputStream_13, Error_41);
    mercury__io__write_string_4_p_0(OutputStream_13, (MR_String) "\n");
  }
  else
  {
    MR_Word Deep_36 = ((MR_Word) ((MR_hl_field(0, StartupResult_35, (MR_Integer) 0))));
    MR_Word Pref_37;
    MR_String HTML_38;

    Pref_37 = query__solidify_preference_2_f_0(Deep_36, PrefInd_15);
    query__try_exec_4_p_0(Cmd_14, Pref_37, Deep_36, &HTML_38);
    if (!((MaybeStartupStream_33 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word StartupStream1_39 = ((MR_Word) ((MR_hl_field(1, MaybeStartupStream_33, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(StartupStream1_39, (MR_String) "query 0 output:\n");
      mercury__io__write_string_4_p_0(StartupStream1_39, HTML_38);
      mercury__io__write_string_4_p_0(StartupStream1_39, (MR_String) "\n");
      mercury__io__flush_output_3_p_0(StartupStream1_39);
    }
    switch (ServerProcess_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          timeout__release_lock_4_p_0(Debug_29, MutexFile_20);
          timeout__remove_want_file_3_p_0(WantFile_21);
          mercury__io__write_string_4_p_0(OutputStream_13, HTML_38);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ToServerPipe_91;
          MR_String FromServerPipe_92;
          MR_String MakeToServerPipeCmd_93;
          MR_String MakeFromServerPipeCmd_94;
          MR_Word ToServerRes_95;
          MR_Word FromServerRes_96;
          MR_Integer Var_101;
          MR_Integer Var_102;

          ToServerPipe_91 = interface__to_server_pipe_name_1_f_0(FileName_16);
          FromServerPipe_92 = interface__from_server_pipe_name_1_f_0(FileName_16);
          MakeToServerPipeCmd_93 = conf__make_pipe_cmd_1_f_0(ToServerPipe_91);
          MakeFromServerPipeCmd_94 = conf__make_pipe_cmd_1_f_0(FromServerPipe_92);
          mercury__io__call_system__call_system_4_p_0(MakeToServerPipeCmd_93, &ToServerRes_95);
          mercury__io__call_system__call_system_4_p_0(MakeFromServerPipeCmd_94, &FromServerRes_96);
          succeeded = ((MR_tag((MR_Word) ToServerRes_95)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_101 = ((MR_Integer) ((MR_hl_field(0, ToServerRes_95, (MR_Integer) 0))));
            succeeded = (Var_101 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) FromServerRes_96)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_102 = ((MR_Integer) ((MR_hl_field(0, FromServerRes_96, (MR_Integer) 0))));
                succeeded = (Var_102 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
          {
            timeout__register_file_for_cleanup_3_p_0(ToServerPipe_91);
            timeout__register_file_for_cleanup_3_p_0(FromServerPipe_92);
            mercury__io__write_string_4_p_0(OutputStream_13, HTML_38);
            mercury__io__flush_output_3_p_0(OutputStream_13);
            mdprof_cgi__start_server_9_p_0(Options_22, ToServerPipe_17, FromServerPipe_18, MaybeStartupStream_33, MutexFile_20, WantFile_21, Deep_36);
          }
          else
          {
            MR_Word Var_97;
            MR_Word Var_98;

            mercury__io__file__remove_file_4_p_0(ToServerPipe_91, &Var_97);
            mercury__io__file__remove_file_4_p_0(FromServerPipe_92, &Var_98);
            timeout__release_lock_4_p_0(Debug_29, MutexFile_20);
            timeout__remove_want_file_3_p_0(WantFile_21);
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            mercury__io__write_string_4_p_0(OutputStream_13, (MR_String) "could not make pipes\n");
          }
        }
        break;
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
  MR_bool succeeded;
  MR_Word DetachProcess_18;
  MR_Word RecordLoop_19;
  MR_Word Debug_20;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 6)), &DetachProcess_18);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 14)), &RecordLoop_19);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 2)), &Debug_20);
  switch (DetachProcess_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ChildHasParent_22 = ((MR_Unsigned) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[0])), (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word MaybeDebugStream_28;
        MR_Integer TimeOut_29;
        MR_Word Canonical_30;

        switch (ChildHasParent_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              timeout__release_lock_4_p_0(Debug_20, MutexFile_14);
              timeout__remove_want_file_3_p_0(WantFile_15);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word StdIn_23;
              MR_Word StdOut_24;
              MR_Word StdErr_25;
              MR_Word BinaryStdIn_26;
              MR_Word BinaryStdOut_27;

              timeout__unregister_file_for_cleanup_3_p_0(MutexFile_14);
              timeout__unregister_file_for_cleanup_3_p_0(WantFile_15);
              mercury__io__stdin_stream_3_p_0(&StdIn_23);
              mercury__io__close_input_3_p_0(StdIn_23);
              mercury__io__stdout_stream_3_p_0(&StdOut_24);
              mercury__io__close_output_3_p_0(StdOut_24);
              mercury__io__stderr_stream_3_p_0(&StdErr_25);
              mercury__io__close_output_3_p_0(StdErr_25);
              mercury__io__binary_input_stream_3_p_0(&BinaryStdIn_26);
              mercury__io__close_binary_input_3_p_0(BinaryStdIn_26);
              mercury__io__binary_output_stream_3_p_0(&BinaryStdOut_27);
              mercury__io__close_binary_output_3_p_0(BinaryStdOut_27);
            }
            break;
        }
        switch (RecordLoop_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeDebugStream_28 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            MaybeDebugStream_28 = MaybeStartupStream_13;
            break;
        }
        mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 16)), &TimeOut_29);
        mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 0)), &Canonical_30);
        mdprof_cgi__server_loop_10_p_0(ToServerPipe_11, FromServerPipe_12, TimeOut_29, MaybeDebugStream_28, Debug_20, Canonical_30, (MR_Integer) 0, Deep_16);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer ResCode_61;

{
#define MR_PROC_LABEL mdprof_cgi__start_server_9_p_0

	MR_Integer ResCode;

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
#else
    MR_fatal_error("deep profiling not enabled");
#endif
}

		;}
#undef MR_PROC_LABEL
	ResCode_61  = ResCode;
}
        succeeded = (ResCode_61 < (MR_Integer) 0);
        if (succeeded)
        {
          timeout__delete_cleanup_files_2_p_0();
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          succeeded = (ResCode_61 > (MR_Integer) 0);
          if (succeeded)
          {
            timeout__release_lock_4_p_0(Debug_20, MutexFile_14);
            timeout__remove_want_file_3_p_0(WantFile_15);
          }
          else
          {
            MR_Word ChildHasParent_99 = ((MR_Unsigned) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &mdprof_cgi_scalar_common_3[2])), (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word MaybeDebugStream_105;
            MR_Integer TimeOut_106;
            MR_Word Canonical_107;

            switch (ChildHasParent_99) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  timeout__release_lock_4_p_0(Debug_20, MutexFile_14);
                  timeout__remove_want_file_3_p_0(WantFile_15);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word StdIn_66;
                  MR_Word StdOut_67;
                  MR_Word StdErr_68;
                  MR_Word BinaryStdIn_69;
                  MR_Word BinaryStdOut_70;

                  timeout__unregister_file_for_cleanup_3_p_0(MutexFile_14);
                  timeout__unregister_file_for_cleanup_3_p_0(WantFile_15);
                  mercury__io__stdin_stream_3_p_0(&StdIn_66);
                  mercury__io__close_input_3_p_0(StdIn_66);
                  mercury__io__stdout_stream_3_p_0(&StdOut_67);
                  mercury__io__close_output_3_p_0(StdOut_67);
                  mercury__io__stderr_stream_3_p_0(&StdErr_68);
                  mercury__io__close_output_3_p_0(StdErr_68);
                  mercury__io__binary_input_stream_3_p_0(&BinaryStdIn_69);
                  mercury__io__close_binary_input_3_p_0(BinaryStdIn_69);
                  mercury__io__binary_output_stream_3_p_0(&BinaryStdOut_70);
                  mercury__io__close_binary_output_3_p_0(BinaryStdOut_70);
                }
                break;
            }
            switch (RecordLoop_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                MaybeDebugStream_105 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                MaybeDebugStream_105 = MaybeStartupStream_13;
                break;
            }
            mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 16)), &TimeOut_106);
            mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 0)), &Canonical_107);
            mdprof_cgi__server_loop_10_p_0(ToServerPipe_11, FromServerPipe_12, TimeOut_106, MaybeDebugStream_105, Debug_20, Canonical_107, (MR_Integer) 0, Deep_16);
          }
        }
      }
      break;
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
    MR_Integer QueryNum_20;
    MR_Word CmdPref0_21;
    MR_Word Deep_26;
    MR_Word Cmd_28;
    MR_Box conv0_CmdPref0_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    timeout__setup_timeout_3_p_0(TimeOut0_13);
    QueryNum_20 = (MR_Integer) ((MR_Unsigned) QueryNum0_17 + (MR_Unsigned) 1);
    interface__recv_term_5_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0), ToServerPipe_11, Debug_15, &conv0_CmdPref0_21);
    CmdPref0_21 = ((MR_Word) (conv0_CmdPref0_21));
    if ((MaybeStartupStream_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Cmd0_23 = ((MR_Word) ((MR_hl_field(0, CmdPref0_21, (MR_Integer) 0))));
      MR_Word PrefInd0_24 = ((MR_Word) ((MR_hl_field(0, CmdPref0_21, (MR_Integer) 1))));
      MR_String HTML_31;
      MR_String ResponseFileName_32;
      MR_Word ResponseRes_33;
      MR_Word ResponseStream_34;
      MR_String Var_56;

      succeeded = (Cmd0_23 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        MR_Word MaybeDeep_25;
        MR_String Var_51 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 1))));
        MR_String Var_71 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 2))));
        MR_String Var_72 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 3))));

        startup__read_and_startup_default_deep_options_9_p_0(Var_51, Var_71, Var_72, Canonical_16, MaybeStartupStream_14, (MR_Word) ((MR_Unsigned) 0U), &MaybeDeep_25);
        if (((MR_tag((MR_Word) MaybeDeep_25)) == (MR_Integer) 1))
        {
          MR_Word Pref0_30;

          HTML_31 = ((MR_String) ((MR_hl_field(1, MaybeDeep_25, (MR_Integer) 0))));
          Deep_26 = Deep0_18;
          Cmd_28 = (MR_Word) ((MR_Unsigned) 0U);
          Pref0_30 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_24);
        }
        else
        {
          MR_Word Pref0_454;

          Deep_26 = ((MR_Word) ((MR_hl_field(0, MaybeDeep_25, (MR_Integer) 0))));
          Cmd_28 = (MR_Word) ((MR_Unsigned) 8U);
          Pref0_454 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_24);
          query__try_exec_4_p_0(Cmd_28, Pref0_454, Deep_26, &HTML_31);
        }
      }
      else
      {
        MR_Word Pref0_451;

        Deep_26 = Deep0_18;
        Cmd_28 = Cmd0_23;
        Pref0_451 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_24);
        query__try_exec_4_p_0(Cmd_28, Pref0_451, Deep_26, &HTML_31);
      }
      Var_56 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 3))));
      ResponseFileName_32 = interface__response_file_name_2_f_0(Var_56, QueryNum_20);
      mercury__io__open_output_4_p_0(ResponseFileName_32, &ResponseRes_33);
      if (((MR_tag((MR_Word) ResponseRes_33)) == (MR_Integer) 1))
        {
          mercury__require__error_1_p_0((MR_String) "cannot open response file");
          return;
        }
      else
        ResponseStream_34 = ((MR_Word) ((MR_hl_field(0, ResponseRes_33, (MR_Integer) 0))));
      mercury__io__write_string_4_p_0(ResponseStream_34, HTML_31);
      mercury__io__close_output_3_p_0(ResponseStream_34);
      interface__send_string_5_p_0(FromServerPipe_12, Debug_15, ResponseFileName_32);
    }
    else
    {
      MR_Word StartupStream0_22 = ((MR_Word) ((MR_hl_field(1, MaybeStartupStream_14, (MR_Integer) 0))));
      MR_String Var_190;
      MR_String Var_343;
      MR_Word Cmd0_360;
      MR_Word PrefInd0_361;
      MR_String HTML_366;
      MR_String ResponseFileName_367;
      MR_Word ResponseRes_368;
      MR_Word ResponseStream_369;
      MR_String Var_375;

      mercury__io__write_string_4_p_0(StartupStream0_22, (MR_String) "server loop query ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_cgi_scalar_common_3[1]), QueryNum_20, &Var_190);
      mercury__io__write_string_4_p_0(StartupStream0_22, Var_190);
      mercury__io__write_string_4_p_0(StartupStream0_22, (MR_String) "\n");
      mercury__io__write_4_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0), StartupStream0_22, ((MR_Box) (CmdPref0_21)));
      mercury__io__nl_3_p_0(StartupStream0_22);
      mercury__io__flush_output_3_p_0(StartupStream0_22);
      Cmd0_360 = ((MR_Word) ((MR_hl_field(0, CmdPref0_21, (MR_Integer) 0))));
      PrefInd0_361 = ((MR_Word) ((MR_hl_field(0, CmdPref0_21, (MR_Integer) 1))));
      succeeded = (Cmd0_360 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        MR_Word MaybeDeep_241;
        MR_String Var_243 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 1))));
        MR_String Var_246 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 2))));
        MR_String Var_247 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 3))));

        startup__read_and_startup_default_deep_options_9_p_0(Var_243, Var_246, Var_247, Canonical_16, MaybeStartupStream_14, (MR_Word) ((MR_Unsigned) 0U), &MaybeDeep_241);
        if (((MR_tag((MR_Word) MaybeDeep_241)) == (MR_Integer) 1))
        {
          MR_Word Pref0_365;

          HTML_366 = ((MR_String) ((MR_hl_field(1, MaybeDeep_241, (MR_Integer) 0))));
          Deep_26 = Deep0_18;
          Cmd_28 = (MR_Word) ((MR_Unsigned) 0U);
          Pref0_365 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_361);
        }
        else
        {
          MR_Word Pref0_460;

          Deep_26 = ((MR_Word) ((MR_hl_field(0, MaybeDeep_241, (MR_Integer) 0))));
          Cmd_28 = (MR_Word) ((MR_Unsigned) 8U);
          Pref0_460 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_361);
          query__try_exec_4_p_0(Cmd_28, Pref0_460, Deep_26, &HTML_366);
        }
      }
      else
      {
        MR_Word Pref0_457;

        Deep_26 = Deep0_18;
        Cmd_28 = Cmd0_360;
        Pref0_457 = query__solidify_preference_2_f_0(Deep_26, PrefInd0_361);
        query__try_exec_4_p_0(Cmd_28, Pref0_457, Deep_26, &HTML_366);
      }
      Var_375 = ((MR_String) ((MR_hl_field(0, Deep0_18, (MR_Integer) 3))));
      ResponseFileName_367 = interface__response_file_name_2_f_0(Var_375, QueryNum_20);
      mercury__io__open_output_4_p_0(ResponseFileName_367, &ResponseRes_368);
      if (((MR_tag((MR_Word) ResponseRes_368)) == (MR_Integer) 1))
        {
          mercury__require__error_1_p_0((MR_String) "cannot open response file");
          return;
        }
      else
        ResponseStream_369 = ((MR_Word) ((MR_hl_field(0, ResponseRes_368, (MR_Integer) 0))));
      mercury__io__write_string_4_p_0(ResponseStream_369, HTML_366);
      mercury__io__close_output_3_p_0(ResponseStream_369);
      interface__send_string_5_p_0(FromServerPipe_12, Debug_15, ResponseFileName_367);
      mercury__io__write_string_4_p_0(StartupStream0_22, (MR_String) "query ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mdprof_cgi_scalar_common_3[1]), QueryNum_20, &Var_343);
      mercury__io__write_string_4_p_0(StartupStream0_22, Var_343);
      mercury__io__write_string_4_p_0(StartupStream0_22, (MR_String) " output:\n");
      mercury__io__write_string_4_p_0(StartupStream0_22, HTML_366);
      mercury__io__write_string_4_p_0(StartupStream0_22, (MR_String) "\n");
      mercury__io__flush_output_3_p_0(StartupStream0_22);
    }
    succeeded = (Cmd_28 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      timeout__delete_cleanup_files_2_p_0();
    else
    {
      MR_Integer TimeOut_37;

      succeeded = ((MR_tag((MR_Word) Cmd_28)) == (MR_Integer) 1);
      if (succeeded)
      {
        TimeOut_37 = ((MR_Integer) ((MR_hl_field(1, Cmd_28, (MR_Integer) 0))));
        {
          MR_Integer next_value_of_TimeOut0_13 = TimeOut_37;
          MR_Integer next_value_of_QueryNum0_17 = QueryNum_20;
          MR_Word next_value_of_Deep0_18 = Deep_26;

          // direct tailcall eliminated
          ;
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
        ;
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
  MR_Word Debug_18;
  MR_String ResponseFileName_23;
  MR_String CatCmd_24;
  MR_Word Var_44;
  MR_Word Var_25;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_option_0), Options_16, ((MR_Box) ((MR_Integer) 2)), &Debug_18);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Cmd_10));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (PrefInd_11));
  }
  interface__send_term_5_p_0((MR_Word) (&mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0), ToServerPipe_12, Debug_18, ((MR_Box) (Var_44)));
  timeout__release_lock_4_p_0(Debug_18, MutexFile_14);
  timeout__remove_want_file_3_p_0(WantFile_15);
  interface__recv_string_5_p_0(FromServerPipe_13, Debug_18, &ResponseFileName_23);
  CatCmd_24 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", ResponseFileName_23);
  mercury__io__call_system__call_system_4_p_0(CatCmd_24, &Var_25);
  switch (Debug_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_32;

        mercury__io__file__remove_file_4_p_0(ResponseFileName_23, &Var_32);
      }
      break;
    case (MR_Integer) 1:
      {
      }
      break;
  }
}

static void MR_CALL 
mdprof_cgi__decode_input_lines_7_p_0(
  MR_Word InputStream_8,
  MR_Word OutputStream_9,
  MR_Word Decode_10,
  MR_Word DecodeCmd_11,
  MR_Word DecodePrefs_12)
{
  while (MR_TRUE)
  {
    MR_Word LineResult_14;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InputStream_8, &LineResult_14);
    switch (MR_tag((MR_Word) LineResult_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String LineStr_15 = ((MR_String) ((MR_hl_field(1, LineResult_14, (MR_Integer) 0))));

          switch (Decode_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeQuery_16;

                mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "considering as query string:\n");
                MaybeQuery_16 = query__string_to_maybe_query_1_f_0(LineStr_15);
                if ((MaybeQuery_16 == (MR_Word) ((MR_Unsigned) 0U)))
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "invalid query string: cannot split into components\n");
                else
                {
                  MR_Word MaybeCmd_17;
                  MR_String DeepFileName_18;
                  MR_Word MaybePrefs_19;
                  MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, MaybeQuery_16, (MR_Integer) 0))));

                  MaybeCmd_17 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
                  DeepFileName_18 = ((MR_String) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
                  MaybePrefs_19 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 2))));
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "Maybe Command:\n");
                  mercury__io__write_line_4_p_0((MR_Word) (&mdprof_cgi_scalar_common_1[0]), OutputStream_9, ((MR_Box) (MaybeCmd_17)));
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "Deep File Name: ");
                  mercury__io__write_string_4_p_0(OutputStream_9, DeepFileName_18);
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "\n");
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "Maybe Preferences:\n");
                  mercury__io__write_line_4_p_0((MR_Word) (&mdprof_cgi_scalar_common_1[1]), OutputStream_9, ((MR_Box) (MaybePrefs_19)));
                }
              }
              break;
          }
          switch (DecodeCmd_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybeCmd1_20;

                mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "considering as cmd string:\n");
                MaybeCmd1_20 = query__string_to_maybe_cmd_1_f_0(LineStr_15);
                if ((MaybeCmd1_20 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "invalid command string ");
                  mercury__io__write_string_4_p_0(OutputStream_9, LineStr_15);
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "\n");
                }
                else
                {
                  MR_Word Cmd_21 = ((MR_Word) ((MR_hl_field(1, MaybeCmd1_20, (MR_Integer) 0))));

                  mercury__io__write_line_4_p_0((MR_Word) (&query__query__type_ctor_info_cmd_0), OutputStream_9, ((MR_Box) (Cmd_21)));
                }
              }
              break;
          }
          switch (DecodePrefs_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word MaybePref_22;

                mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "considering as preference string:\n");
                MaybePref_22 = query__string_to_maybe_pref_1_f_0(LineStr_15);
                if ((MaybePref_22 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "invalid preferences string ");
                  mercury__io__write_string_4_p_0(OutputStream_9, LineStr_15);
                  mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "\n");
                }
                else
                {
                  MR_Word Pref_23 = ((MR_Word) ((MR_hl_field(1, MaybePref_22, (MR_Integer) 0))));

                  mercury__io__write_line_4_p_0((MR_Word) (&query__query__type_ctor_info_preferences_0), OutputStream_9, ((MR_Box) (Pref_23)));
                }
              }
              break;
          }
          // direct tailcall eliminated
          ;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_24 = ((MR_Word) ((MR_hl_field(2, LineResult_14, (MR_Integer) 0))));
          MR_String Msg_25;

          mercury__io__error_message_2_p_0(Error_24, &Msg_25);
          mercury__io__write_string_4_p_0(OutputStream_9, Msg_25);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "\n");
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
  MR_bool succeeded;

  succeeded = mdprof_cgi____Unify____child_has_parent_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_cgi____Compare____child_has_parent_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_cgi____Unify____cmd_pref_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_cgi____Compare____cmd_pref_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_cgi____Unify____detach_process_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_cgi____Compare____detach_process_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_cgi____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_cgi____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_cgi____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_cgi____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
