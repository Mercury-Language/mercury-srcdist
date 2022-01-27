/*
** Automatically generated from `mdprof_cgi.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "integer.mih"
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
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "startup.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "timeout.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 103 "mdprof_cgi.m"
struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s {
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1;
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2;
#line 103 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__process_command_line_2_p_0_4_env_0__cont;
#line 103 "mdprof_cgi.m"
  void * mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr;
#line 103 "mdprof_cgi.m"
  MR_Word mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 103 "mdprof_cgi.m"
  MR_Word mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 103 "mdprof_cgi.m"
};

#line 64 "mdprof_cgi.m"
struct mdprof_cgi__main_2_p_0_4_env_0_s {
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1;
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2;
#line 64 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__main_2_p_0_4_env_0__cont;
#line 64 "mdprof_cgi.m"
  void * mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr;
#line 64 "mdprof_cgi.m"
  MR_Word mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 64 "mdprof_cgi.m"
  MR_Word mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 64 "mdprof_cgi.m"
};


#line 126 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0;

#line 129 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1;

#line 132 "mdprof_cgi.c"
static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_value_ordered_child_has_parent_0[2];

#line 135 "mdprof_cgi.c"
static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_child_has_parent_0[2];

#line 138 "mdprof_cgi.c"
static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_child_has_parent_0[2];

#line 141 "mdprof_cgi.c"
static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0[2];

#line 144 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0;

#line 147 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0[1];

#line 150 "mdprof_cgi.c"
static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0[1];

#line 153 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0[1];

#line 156 "mdprof_cgi.c"
static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0[1];

#line 159 "mdprof_cgi.c"
static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0[1];

#line 162 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0;

#line 165 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1;

#line 168 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2;

#line 171 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0[2];

#line 174 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1[1];

#line 177 "mdprof_cgi.c"
static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_detach_process_result_0[2];

#line 180 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_detach_process_result_0[3];

#line 183 "mdprof_cgi.c"
static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_detach_process_result_0[3];

#line 186 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_0;

#line 189 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_1;

#line 192 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_2;

#line 195 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_3;

#line 198 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_4;

#line 201 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_5;

#line 204 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_6;

#line 207 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_7;

#line 210 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_8;

#line 213 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_9;

#line 216 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_10;

#line 219 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_11;

#line 222 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_12;

#line 225 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_13;

#line 228 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_14;

#line 231 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_15;

#line 234 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_16;

#line 237 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_17;

#line 240 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_18;

#line 243 "mdprof_cgi.c"
static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_value_ordered_option_0[19];

#line 246 "mdprof_cgi.c"
static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_option_0[19];

#line 249 "mdprof_cgi.c"
static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_option_0[19];

#line 252 "mdprof_cgi.c"
static const MR_FA_TypeInfo_Struct2 mdprof_cgi__tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 255 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0_10001(
#line 258 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 260 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2);

#line 263 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0_10001(
#line 266 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 268 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 270 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3);

#line 273 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0_10001(
#line 276 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 278 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2);

#line 281 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0_10001(
#line 284 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 286 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 288 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3);

#line 291 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0_10001(
#line 294 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 296 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2);

#line 299 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0_10001(
#line 302 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 304 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 306 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3);

#line 309 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0_10001(
#line 312 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 314 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2);

#line 317 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____option_0_0_10001(
#line 320 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 322 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 324 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3);

#line 327 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0_10001(
#line 330 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 332 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2);

#line 335 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0_10001(
#line 338 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 340 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 342 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3);

#line 829 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0(
#line 829 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3);

#line 829 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0(
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__1_1,
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2);

#line 808 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____option_0_0(
#line 808 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3);

#line 808 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0(
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_1,
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2);

#line 742 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0(
#line 742 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3);

#line 742 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0(
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__1_1,
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2);

#line 360 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0(
#line 360 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3);

#line 360 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0(
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__1_1,
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2);

#line 738 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0(
#line 738 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3);

#line 738 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0(
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_1,
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2);

#line 866 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__defaults_2_p_0(
#line 866 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 866 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__2_2,
#line 866 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__cont,
#line 866 "mdprof_cgi.m"
  void * mdprof_cgi__cont_env_ptr);

#line 844 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__long_2_p_0(
#line 844 "mdprof_cgi.m"
  MR_String mdprof_cgi__HeadVar__1_1,
#line 844 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__2_2);

#line 831 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__short_2_p_0(
#line 831 "mdprof_cgi.m"
  MR_Char mdprof_cgi__HeadVar__1_1,
#line 831 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__2_2);

#line 770 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__raw_detach_process_3_p_0(
#line 770 "mdprof_cgi.m"
  MR_Integer * mdprof_cgi__ResCode_1);

#line 710 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__check_for_existing_fifos_5_p_0(
#line 710 "mdprof_cgi.m"
  MR_String mdprof_cgi__Fifo1_1,
#line 710 "mdprof_cgi.m"
  MR_String mdprof_cgi__Fifo2_2,
#line 710 "mdprof_cgi.m"
  MR_Integer * mdprof_cgi__FifoCount_3);

#line 671 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__make_pipes_4_p_0(
#line 671 "mdprof_cgi.m"
  MR_String mdprof_cgi__FileName_5,
#line 671 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__Success_6);

#line 585 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__server_loop_10_p_0(
#line 585 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_11,
#line 585 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_12,
#line 585 "mdprof_cgi.m"
  MR_Integer mdprof_cgi__TimeOut0_13,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__MaybeStartupStream_14,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Debug_15,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Canonical_16,
#line 585 "mdprof_cgi.m"
  MR_Integer mdprof_cgi__QueryNum0_17,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Deep0_18);

#line 499 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__start_server_9_p_0(
#line 499 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_10,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_11,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_12,
#line 499 "mdprof_cgi.m"
  MR_Word mdprof_cgi__MaybeStartupStream_13,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__MutexFile_14,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__WantFile_15,
#line 499 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Deep_16);

#line 416 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_11_p_0(
#line 416 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Cmd_12,
#line 416 "mdprof_cgi.m"
  MR_Word mdprof_cgi__PrefInd_13,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__FileName_14,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_15,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_16,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__StartupFile_17,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__MutexFile_18,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__WantFile_19,
#line 416 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_20);

#line 366 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__handle_query_from_existing_server_9_p_0(
#line 366 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Cmd_10,
#line 366 "mdprof_cgi.m"
  MR_Word mdprof_cgi__PrefInd_11,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_12,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_13,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__MutexFile_14,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__WantFile_15,
#line 366 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_16);

#line 286 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_query_6_p_0(
#line 286 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Cmd0_7,
#line 286 "mdprof_cgi.m"
  MR_String mdprof_cgi__DeepFileName0_8,
#line 286 "mdprof_cgi.m"
  MR_Word mdprof_cgi__MaybePref_9,
#line 286 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options0_10);

#line 246 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_args_5_p_0(
#line 246 "mdprof_cgi.m"
  MR_String mdprof_cgi__ProgName_6,
#line 246 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Args_7,
#line 246 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_8);

#line 233 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__write_help_message_3_p_0(
#line 233 "mdprof_cgi.m"
  MR_String mdprof_cgi__ProgName_4);

#line 225 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__write_version_message_3_p_0(
#line 225 "mdprof_cgi.m"
  MR_String mdprof_cgi__ProgName_4);

#line 151 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__decode_input_lines_5_p_0(
#line 151 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Decode_6,
#line 151 "mdprof_cgi.m"
  MR_Word mdprof_cgi__DecodeCmd_7,
#line 151 "mdprof_cgi.m"
  MR_Word mdprof_cgi__DecodePrefs_8);

#line 103 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_3(
#line 103 "mdprof_cgi.m"
  void * mdprof_cgi__env_ptr_arg);

#line 103 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_4(
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2,
#line 103 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__cont,
#line 103 "mdprof_cgi.m"
  void * mdprof_cgi__cont_env_ptr);

#line 103 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_2(
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2);

#line 103 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_1(
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2);

#line 93 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0(void);

#line 64 "mdprof_cgi.m"
static void MR_CALL 
main_2_p_0_3(
#line 64 "mdprof_cgi.m"
  void * mdprof_cgi__env_ptr_arg);

#line 64 "mdprof_cgi.m"
static void MR_CALL 
main_2_p_0_4(
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2,
#line 64 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__cont,
#line 64 "mdprof_cgi.m"
  void * mdprof_cgi__cont_env_ptr);

#line 64 "mdprof_cgi.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2);

#line 64 "mdprof_cgi.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2);


static /* final */ const MR_Box mdprof_cgi_scalar_common_1[2][2];

static /* final */ const MR_Box mdprof_cgi_scalar_common_2[9][3];

static /* final */ const MR_Box mdprof_cgi_scalar_common_3[3][5];

static /* final */ const MR_Box mdprof_cgi_scalar_common_4[6][1];


#line 846 "mdprof_cgi.m"
/* sealed */ struct mdprof_cgi__vector_common_type_5_0_s {
#line 846 "mdprof_cgi.m"
  const MR_Word mdprof_cgi__vector_common_type_5_0__vct_5_f_0;
#line 846 "mdprof_cgi.m"
};

static /* final */ const struct mdprof_cgi__vector_common_type_5_0_s mdprof_cgi_vector_common_5[19];

#line 868 "mdprof_cgi.m"
/* sealed */ struct mdprof_cgi__vector_common_type_6_0_s {
#line 868 "mdprof_cgi.m"
  const MR_Word mdprof_cgi__vector_common_type_6_0__vct_6_f_0;
#line 868 "mdprof_cgi.m"
  const MR_Word mdprof_cgi__vector_common_type_6_0__vct_6_f_1;
#line 868 "mdprof_cgi.m"
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
    ((MR_Box) (&mdprof_cgi_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
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
    ((MR_Box) (&mdprof_cgi_scalar_common_3[0])),
    ((MR_Box) (mdprof_cgi__process_command_line_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_3[1])),
    ((MR_Box) (mdprof_cgi__process_command_line_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_3[2])),
    ((MR_Box) (mdprof_cgi__process_command_line_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdprof_cgi_scalar_common_2[5])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[6])),
    ((MR_Box) (&mdprof_cgi_scalar_common_2[7]))
  },
};

static /* final */ const MR_Box mdprof_cgi_scalar_common_3[3][5] = {
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

static /* final */ const MR_Box mdprof_cgi_scalar_common_4[6][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
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
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_4[4])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[2])
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 8 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 9 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 10 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_4[4])
  },
  /* row 11 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 12 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 13 */
  {
    (MR_Integer) 14,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[2])
  },
  /* row 14 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[2])
  },
  /* row 15 */
  {
    (MR_Integer) 15,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[2])
  },
  /* row 16 */
  {
    (MR_Integer) 16,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_4[5])
  },
  /* row 17 */
  {
    (MR_Integer) 17,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[3])
  },
  /* row 18 */
  {
    (MR_Integer) 18,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[2])
  },
};


#include "mdprof_cgi.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 983 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0 = {
  (MR_String) "child_has_parent",
  (MR_Integer) 0
};

#line 989 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1 = {
  (MR_String) "child_has_no_parent",
  (MR_Integer) 1
};

#line 995 "mdprof_cgi.c"
static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_value_ordered_child_has_parent_0[2] = {
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1
};

#line 1001 "mdprof_cgi.c"
static const MR_EnumFunctorDescPtr mdprof_cgi__mdprof_cgi__enum_name_ordered_child_has_parent_0[2] = {
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_1,
  &mdprof_cgi__mdprof_cgi__enum_functor_desc_child_has_parent_0_0
};

#line 1007 "mdprof_cgi.c"
static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_child_has_parent_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1013 "mdprof_cgi.c"
const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_child_has_parent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1030 "mdprof_cgi.c"
static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0[2] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cmd_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_preferences_indication_0
};

#line 1036 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0 = {
  (MR_String) "cmd_pref",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_cgi__mdprof_cgi__field_types_cmd_pref_0_0,
  NULL,
  NULL,
  NULL
};

#line 1051 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0[1] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0
};

#line 1056 "mdprof_cgi.c"
static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_cmd_pref_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_cmd_pref_0_0
  }
};

#line 1065 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_cmd_pref_0[1] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_cmd_pref_0_0
};

#line 1070 "mdprof_cgi.c"
static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_cmd_pref_0[1] = {
  (MR_Integer) 0
};

#line 1075 "mdprof_cgi.c"
const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1092 "mdprof_cgi.c"
static const MR_PseudoTypeInfo mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0[1] = {
  (MR_PseudoTypeInfo) &mdprof_cgi__mdprof_cgi__type_ctor_info_child_has_parent_0
};

#line 1097 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0 = {
  (MR_String) "in_child",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdprof_cgi__mdprof_cgi__field_types_detach_process_result_0_0,
  NULL,
  NULL,
  NULL
};

#line 1112 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1 = {
  (MR_String) "in_parent",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1127 "mdprof_cgi.c"
static const MR_DuFunctorDesc mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2 = {
  (MR_String) "fork_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1142 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0[2] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1,
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2
};

#line 1148 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1[1] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0
};

#line 1153 "mdprof_cgi.c"
static const MR_DuPtagLayout mdprof_cgi__mdprof_cgi__du_ptag_ordered_detach_process_result_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdprof_cgi__mdprof_cgi__du_stag_ordered_detach_process_result_0_1
  }
};

#line 1167 "mdprof_cgi.c"
static const MR_DuFunctorDescPtr mdprof_cgi__mdprof_cgi__du_name_ordered_detach_process_result_0[3] = {
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_2,
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_0,
  &mdprof_cgi__mdprof_cgi__du_functor_desc_detach_process_result_0_1
};

#line 1174 "mdprof_cgi.c"
static const MR_Integer mdprof_cgi__mdprof_cgi__functor_number_map_detach_process_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1181 "mdprof_cgi.c"
const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_detach_process_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1198 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_0 = {
  (MR_String) "canonical_clique",
  (MR_Integer) 0
};

#line 1204 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_1 = {
  (MR_String) "clique",
  (MR_Integer) 1
};

#line 1210 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_2 = {
  (MR_String) "debug",
  (MR_Integer) 2
};

#line 1216 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_3 = {
  (MR_String) "decode",
  (MR_Integer) 3
};

#line 1222 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_4 = {
  (MR_String) "decode_cmd",
  (MR_Integer) 4
};

#line 1228 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_5 = {
  (MR_String) "decode_prefs",
  (MR_Integer) 5
};

#line 1234 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_6 = {
  (MR_String) "detach_process",
  (MR_Integer) 6
};

#line 1240 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_7 = {
  (MR_String) "help",
  (MR_Integer) 7
};

#line 1246 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_8 = {
  (MR_String) "localhost",
  (MR_Integer) 8
};

#line 1252 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_9 = {
  (MR_String) "modules",
  (MR_Integer) 9
};

#line 1258 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_10 = {
  (MR_String) "proc",
  (MR_Integer) 10
};

#line 1264 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_11 = {
  (MR_String) "quit",
  (MR_Integer) 11
};

#line 1270 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_12 = {
  (MR_String) "root",
  (MR_Integer) 12
};

#line 1276 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_13 = {
  (MR_String) "record_startup",
  (MR_Integer) 13
};

#line 1282 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_14 = {
  (MR_String) "record_loop",
  (MR_Integer) 14
};

#line 1288 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_15 = {
  (MR_String) "server_process",
  (MR_Integer) 15
};

#line 1294 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_16 = {
  (MR_String) "timeout",
  (MR_Integer) 16
};

#line 1300 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_17 = {
  (MR_String) "version",
  (MR_Integer) 17
};

#line 1306 "mdprof_cgi.c"
static const MR_EnumFunctorDesc mdprof_cgi__mdprof_cgi__enum_functor_desc_option_0_18 = {
  (MR_String) "write_query_string",
  (MR_Integer) 18
};

#line 1312 "mdprof_cgi.c"
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

#line 1335 "mdprof_cgi.c"
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

#line 1358 "mdprof_cgi.c"
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

#line 1381 "mdprof_cgi.c"
const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 1398 "mdprof_cgi.c"
static const MR_FA_TypeInfo_Struct2 mdprof_cgi__tree234__ti_tree234_2mdprof_cgi__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 1407 "mdprof_cgi.c"
const MR_TypeCtorInfo_Struct mdprof_cgi__mdprof_cgi__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

#line 1424 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0_10001(
#line 1427 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 1429 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2)
#line 1431 "mdprof_cgi.c"
{
#line 1433 "mdprof_cgi.c"
  {
#line 1435 "mdprof_cgi.c"
    MR_bool mdprof_cgi__succeeded;

#line 1438 "mdprof_cgi.c"
    {
#line 1440 "mdprof_cgi.c"
      mdprof_cgi__succeeded = mdprof_cgi____Unify____child_has_parent_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
#line 1443 "mdprof_cgi.c"
    return mdprof_cgi__succeeded;
#line 1445 "mdprof_cgi.c"
  }
#line 1447 "mdprof_cgi.c"
}

#line 1450 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0_10001(
#line 1453 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 1455 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 1457 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3)
#line 1459 "mdprof_cgi.c"
{
#line 1461 "mdprof_cgi.c"
  {
#line 1463 "mdprof_cgi.c"
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

#line 1466 "mdprof_cgi.c"
    {
#line 1468 "mdprof_cgi.c"
      mdprof_cgi____Compare____child_has_parent_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
#line 1471 "mdprof_cgi.c"
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
#line 1473 "mdprof_cgi.c"
  }
#line 1475 "mdprof_cgi.c"
}

#line 1478 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0_10001(
#line 1481 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 1483 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2)
#line 1485 "mdprof_cgi.c"
{
#line 1487 "mdprof_cgi.c"
  {
#line 1489 "mdprof_cgi.c"
    MR_bool mdprof_cgi__succeeded;

#line 1492 "mdprof_cgi.c"
    {
#line 1494 "mdprof_cgi.c"
      mdprof_cgi__succeeded = mdprof_cgi____Unify____cmd_pref_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
#line 1497 "mdprof_cgi.c"
    return mdprof_cgi__succeeded;
#line 1499 "mdprof_cgi.c"
  }
#line 1501 "mdprof_cgi.c"
}

#line 1504 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0_10001(
#line 1507 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 1509 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 1511 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3)
#line 1513 "mdprof_cgi.c"
{
#line 1515 "mdprof_cgi.c"
  {
#line 1517 "mdprof_cgi.c"
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

#line 1520 "mdprof_cgi.c"
    {
#line 1522 "mdprof_cgi.c"
      mdprof_cgi____Compare____cmd_pref_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
#line 1525 "mdprof_cgi.c"
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
#line 1527 "mdprof_cgi.c"
  }
#line 1529 "mdprof_cgi.c"
}

#line 1532 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0_10001(
#line 1535 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 1537 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2)
#line 1539 "mdprof_cgi.c"
{
#line 1541 "mdprof_cgi.c"
  {
#line 1543 "mdprof_cgi.c"
    MR_bool mdprof_cgi__succeeded;

#line 1546 "mdprof_cgi.c"
    {
#line 1548 "mdprof_cgi.c"
      mdprof_cgi__succeeded = mdprof_cgi____Unify____detach_process_result_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
#line 1551 "mdprof_cgi.c"
    return mdprof_cgi__succeeded;
#line 1553 "mdprof_cgi.c"
  }
#line 1555 "mdprof_cgi.c"
}

#line 1558 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0_10001(
#line 1561 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 1563 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 1565 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3)
#line 1567 "mdprof_cgi.c"
{
#line 1569 "mdprof_cgi.c"
  {
#line 1571 "mdprof_cgi.c"
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

#line 1574 "mdprof_cgi.c"
    {
#line 1576 "mdprof_cgi.c"
      mdprof_cgi____Compare____detach_process_result_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
#line 1579 "mdprof_cgi.c"
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
#line 1581 "mdprof_cgi.c"
  }
#line 1583 "mdprof_cgi.c"
}

#line 1586 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0_10001(
#line 1589 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 1591 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2)
#line 1593 "mdprof_cgi.c"
{
#line 1595 "mdprof_cgi.c"
  {
#line 1597 "mdprof_cgi.c"
    MR_bool mdprof_cgi__succeeded;

#line 1600 "mdprof_cgi.c"
    {
#line 1602 "mdprof_cgi.c"
      mdprof_cgi__succeeded = mdprof_cgi____Unify____option_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
#line 1605 "mdprof_cgi.c"
    return mdprof_cgi__succeeded;
#line 1607 "mdprof_cgi.c"
  }
#line 1609 "mdprof_cgi.c"
}

#line 1612 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____option_0_0_10001(
#line 1615 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 1617 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 1619 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3)
#line 1621 "mdprof_cgi.c"
{
#line 1623 "mdprof_cgi.c"
  {
#line 1625 "mdprof_cgi.c"
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

#line 1628 "mdprof_cgi.c"
    {
#line 1630 "mdprof_cgi.c"
      mdprof_cgi____Compare____option_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
#line 1633 "mdprof_cgi.c"
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
#line 1635 "mdprof_cgi.c"
  }
#line 1637 "mdprof_cgi.c"
}

#line 1640 "mdprof_cgi.c"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0_10001(
#line 1643 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 1645 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2)
#line 1647 "mdprof_cgi.c"
{
#line 1649 "mdprof_cgi.c"
  {
#line 1651 "mdprof_cgi.c"
    MR_bool mdprof_cgi__succeeded;

#line 1654 "mdprof_cgi.c"
    {
#line 1656 "mdprof_cgi.c"
      mdprof_cgi__succeeded = mdprof_cgi____Unify____option_table_0_0(((MR_Word) mdprof_cgi__wrapper_arg_1), ((MR_Word) mdprof_cgi__wrapper_arg_2));
    }
#line 1659 "mdprof_cgi.c"
    return mdprof_cgi__succeeded;
#line 1661 "mdprof_cgi.c"
  }
#line 1663 "mdprof_cgi.c"
}

#line 1666 "mdprof_cgi.c"
static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0_10001(
#line 1669 "mdprof_cgi.c"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 1671 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_2,
#line 1673 "mdprof_cgi.c"
  MR_Box mdprof_cgi__wrapper_arg_3)
#line 1675 "mdprof_cgi.c"
{
#line 1677 "mdprof_cgi.c"
  {
#line 1679 "mdprof_cgi.c"
    MR_Word mdprof_cgi__conv0_HeadVar__1_1;

#line 1682 "mdprof_cgi.c"
    {
#line 1684 "mdprof_cgi.c"
      mdprof_cgi____Compare____option_table_0_0(&mdprof_cgi__conv0_HeadVar__1_1, ((MR_Word) mdprof_cgi__wrapper_arg_2), ((MR_Word) mdprof_cgi__wrapper_arg_3));
    }
#line 1687 "mdprof_cgi.c"
    *mdprof_cgi__wrapper_arg_1 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__1_1));
#line 1689 "mdprof_cgi.c"
  }
#line 1691 "mdprof_cgi.c"
}

#line 829 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____option_table_0_0(
#line 829 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3)
#line 829 "mdprof_cgi.m"
{
#line 829 "mdprof_cgi.m"
  {
#line 829 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 829 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Cast_HeadVar1_4 = mdprof_cgi__HeadVar__2_2;
#line 829 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Cast_HeadVar2_5 = mdprof_cgi__HeadVar__3_3;

#line 829 "mdprof_cgi.m"
    {
#line 829 "mdprof_cgi.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdprof_cgi_scalar_common_2[0], mdprof_cgi__HeadVar__1_1, ((MR_Box) (mdprof_cgi__Cast_HeadVar1_4)), ((MR_Box) (mdprof_cgi__Cast_HeadVar2_5)));
#line 829 "mdprof_cgi.m"
      return;
    }
#line 829 "mdprof_cgi.m"
  }
#line 829 "mdprof_cgi.m"
}

#line 829 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_table_0_0(
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__1_1,
#line 829 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2)
#line 829 "mdprof_cgi.m"
{
#line 829 "mdprof_cgi.m"
  {
#line 829 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 829 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Cast_HeadVar1_3 = mdprof_cgi__HeadVar__1_1;
#line 829 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Cast_HeadVar2_4 = mdprof_cgi__HeadVar__2_2;

#line 829 "mdprof_cgi.m"
    {
#line 829 "mdprof_cgi.m"
      return mdprof_cgi__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_cgi_scalar_common_2[0], ((MR_Box) (mdprof_cgi__Cast_HeadVar1_3)), ((MR_Box) (mdprof_cgi__Cast_HeadVar2_4)));
    }
#line 829 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 829 "mdprof_cgi.m"
  }
#line 829 "mdprof_cgi.m"
}

#line 808 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____option_0_0(
#line 808 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3)
#line 808 "mdprof_cgi.m"
{
#line 808 "mdprof_cgi.m"
  {
#line 808 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 808 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__Cast_HeadVar1_4 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
#line 808 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__Cast_HeadVar2_5 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

#line 808 "mdprof_cgi.m"
    {
#line 808 "mdprof_cgi.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__Cast_HeadVar1_4, mdprof_cgi__Cast_HeadVar2_5);
#line 808 "mdprof_cgi.m"
      return;
    }
#line 808 "mdprof_cgi.m"
  }
#line 808 "mdprof_cgi.m"
}

#line 808 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____option_0_0(
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_1,
#line 808 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2)
#line 808 "mdprof_cgi.m"
{
#line 1797 "mdprof_cgi.c"
  {
#line 1799 "mdprof_cgi.c"
    MR_bool mdprof_cgi__succeeded = (mdprof_cgi__HeadVar__2_1 == mdprof_cgi__HeadVar__2_2);

#line 1802 "mdprof_cgi.c"
    return mdprof_cgi__succeeded;
#line 1804 "mdprof_cgi.c"
  }
#line 808 "mdprof_cgi.m"
}

#line 742 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____detach_process_result_0_0(
#line 742 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3)
#line 742 "mdprof_cgi.m"
{
#line 742 "mdprof_cgi.m"
  {
#line 742 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 742 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastX_10 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
#line 742 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastY_11 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

#line 742 "mdprof_cgi.m"
    mdprof_cgi__succeeded = (mdprof_cgi__CastX_10 == mdprof_cgi__CastY_11);
#line 742 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 1833 "mdprof_cgi.c"
      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
#line 742 "mdprof_cgi.m"
    else
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
      switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__2_2)) {
#line 742 "mdprof_cgi.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
        case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
          switch (MR_unmkbody(mdprof_cgi__HeadVar__2_2)) {
#line 742 "mdprof_cgi.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
            case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
              switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__3_3)) {
#line 742 "mdprof_cgi.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
                case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
                  switch (MR_unmkbody(mdprof_cgi__HeadVar__3_3)) {
#line 742 "mdprof_cgi.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
                    case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
#line 742 "mdprof_cgi.m"
                      break;
#line 742 "mdprof_cgi.m"
                    case (MR_Integer) 1:
#line 742 "mdprof_cgi.m"
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 1;
#line 742 "mdprof_cgi.m"
                      break;
#line 742 "mdprof_cgi.m"
                  }
#line 742 "mdprof_cgi.m"
                  break;
#line 742 "mdprof_cgi.m"
                case (MR_Integer) 1:
#line 1881 "mdprof_cgi.c"
                  *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 2;
#line 742 "mdprof_cgi.m"
                  break;
#line 742 "mdprof_cgi.m"
              }
#line 742 "mdprof_cgi.m"
              break;
#line 742 "mdprof_cgi.m"
            case (MR_Integer) 1:
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
              switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__3_3)) {
#line 742 "mdprof_cgi.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
                case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
                  switch (MR_unmkbody(mdprof_cgi__HeadVar__3_3)) {
#line 742 "mdprof_cgi.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
                    case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 2;
#line 742 "mdprof_cgi.m"
                      break;
#line 742 "mdprof_cgi.m"
                    case (MR_Integer) 1:
#line 742 "mdprof_cgi.m"
                      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
#line 742 "mdprof_cgi.m"
                      break;
#line 742 "mdprof_cgi.m"
                  }
#line 742 "mdprof_cgi.m"
                  break;
#line 742 "mdprof_cgi.m"
                case (MR_Integer) 1:
#line 1921 "mdprof_cgi.c"
                  *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 2;
#line 742 "mdprof_cgi.m"
                  break;
#line 742 "mdprof_cgi.m"
              }
#line 742 "mdprof_cgi.m"
              break;
#line 742 "mdprof_cgi.m"
          }
#line 742 "mdprof_cgi.m"
          break;
#line 742 "mdprof_cgi.m"
        case (MR_Integer) 1:
#line 742 "mdprof_cgi.m"
          {
#line 742 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));

#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
            switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__3_3)) {
#line 742 "mdprof_cgi.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
              case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
                switch (MR_unmkbody(mdprof_cgi__HeadVar__3_3)) {
#line 742 "mdprof_cgi.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
                  case (MR_Integer) 0:
#line 1954 "mdprof_cgi.c"
                    *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 1;
#line 742 "mdprof_cgi.m"
                    break;
#line 742 "mdprof_cgi.m"
                  case (MR_Integer) 1:
#line 1960 "mdprof_cgi.c"
                    *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 1;
#line 742 "mdprof_cgi.m"
                    break;
#line 742 "mdprof_cgi.m"
                }
#line 742 "mdprof_cgi.m"
                break;
#line 742 "mdprof_cgi.m"
              case (MR_Integer) 1:
#line 742 "mdprof_cgi.m"
                {
#line 742 "mdprof_cgi.m"
                  MR_Word mdprof_cgi__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__3_3, (MR_Integer) 0)));
#line 742 "mdprof_cgi.m"
                  MR_Integer mdprof_cgi__V_14_14 = (MR_Integer) mdprof_cgi__V_13_13;
#line 742 "mdprof_cgi.m"
                  MR_Integer mdprof_cgi__V_15_15 = (MR_Integer) mdprof_cgi__V_5_5;

#line 742 "mdprof_cgi.m"
                  {
#line 742 "mdprof_cgi.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__V_14_14, mdprof_cgi__V_15_15);
#line 742 "mdprof_cgi.m"
                    return;
                  }
#line 742 "mdprof_cgi.m"
                }
#line 742 "mdprof_cgi.m"
                break;
#line 742 "mdprof_cgi.m"
            }
#line 742 "mdprof_cgi.m"
          }
#line 742 "mdprof_cgi.m"
          break;
#line 742 "mdprof_cgi.m"
      }
#line 742 "mdprof_cgi.m"
  }
#line 742 "mdprof_cgi.m"
}

#line 742 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____detach_process_result_0_0(
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__1_1,
#line 742 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2)
#line 742 "mdprof_cgi.m"
{
#line 742 "mdprof_cgi.m"
  {
#line 742 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 742 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastX_9 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
#line 742 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastY_10 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

#line 742 "mdprof_cgi.m"
    mdprof_cgi__succeeded = (mdprof_cgi__CastX_9 == mdprof_cgi__CastY_10);
#line 742 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 742 "mdprof_cgi.m"
      mdprof_cgi__succeeded = MR_TRUE;
#line 742 "mdprof_cgi.m"
    else
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
      switch (MR_tag((MR_Word) mdprof_cgi__HeadVar__1_1)) {
#line 742 "mdprof_cgi.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
        case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
#line 742 "mdprof_cgi.m"
          switch (MR_unmkbody(mdprof_cgi__HeadVar__1_1)) {
#line 742 "mdprof_cgi.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mdprof_cgi.m"
            case (MR_Integer) 0:
#line 742 "mdprof_cgi.m"
              {
#line 742 "mdprof_cgi.m"
                MR_Integer mdprof_cgi__CastX_5 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
#line 742 "mdprof_cgi.m"
                MR_Integer mdprof_cgi__CastY_6 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

#line 742 "mdprof_cgi.m"
                mdprof_cgi__succeeded = (mdprof_cgi__CastY_6 == mdprof_cgi__CastX_5);
#line 742 "mdprof_cgi.m"
              }
#line 742 "mdprof_cgi.m"
              break;
#line 742 "mdprof_cgi.m"
            case (MR_Integer) 1:
#line 742 "mdprof_cgi.m"
              {
#line 742 "mdprof_cgi.m"
                MR_Integer mdprof_cgi__CastX_7 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
#line 742 "mdprof_cgi.m"
                MR_Integer mdprof_cgi__CastY_8 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

#line 742 "mdprof_cgi.m"
                mdprof_cgi__succeeded = (mdprof_cgi__CastY_8 == mdprof_cgi__CastX_7);
#line 742 "mdprof_cgi.m"
              }
#line 742 "mdprof_cgi.m"
              break;
#line 742 "mdprof_cgi.m"
          }
#line 742 "mdprof_cgi.m"
          break;
#line 742 "mdprof_cgi.m"
        case (MR_Integer) 1:
#line 742 "mdprof_cgi.m"
          {
#line 742 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__1_1, (MR_Integer) 0)));
#line 742 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_4_4;

#line 742 "mdprof_cgi.m"
            mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 742 "mdprof_cgi.m"
            if (mdprof_cgi__succeeded)
#line 742 "mdprof_cgi.m"
              {
#line 742 "mdprof_cgi.m"
                mdprof_cgi__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));
#line 2092 "mdprof_cgi.c"
                mdprof_cgi__succeeded = (mdprof_cgi__V_3_3 == mdprof_cgi__V_4_4);
#line 742 "mdprof_cgi.m"
              }
#line 742 "mdprof_cgi.m"
          }
#line 742 "mdprof_cgi.m"
          break;
#line 742 "mdprof_cgi.m"
      }
#line 742 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 742 "mdprof_cgi.m"
  }
#line 742 "mdprof_cgi.m"
}

#line 360 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____cmd_pref_0_0(
#line 360 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3)
#line 360 "mdprof_cgi.m"
{
#line 360 "mdprof_cgi.m"
  {
#line 360 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 360 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastX_9 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
#line 360 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastY_10 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

#line 360 "mdprof_cgi.m"
    mdprof_cgi__succeeded = (mdprof_cgi__CastX_9 == mdprof_cgi__CastY_10);
#line 360 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 2133 "mdprof_cgi.c"
      *mdprof_cgi__HeadVar__1_1 = (MR_Integer) 0;
#line 360 "mdprof_cgi.m"
    else
#line 360 "mdprof_cgi.m"
      {
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 1)));
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__3_3, (MR_Integer) 0)));
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__3_3, (MR_Integer) 1)));
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_8_8;

#line 360 "mdprof_cgi.m"
        {
#line 360 "mdprof_cgi.m"
          query____Compare____cmd_0_0(&mdprof_cgi__V_8_8, mdprof_cgi__V_4_4, mdprof_cgi__V_6_6);
        }
#line 2155 "mdprof_cgi.c"
        mdprof_cgi__succeeded = (mdprof_cgi__V_8_8 == (MR_Integer) 0);
#line 360 "mdprof_cgi.m"
        mdprof_cgi__succeeded = !(mdprof_cgi__succeeded);
#line 360 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 360 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__1_1 = mdprof_cgi__V_8_8;
#line 360 "mdprof_cgi.m"
        else
#line 360 "mdprof_cgi.m"
          {
#line 360 "mdprof_cgi.m"
            query____Compare____preferences_indication_0_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__V_5_5, mdprof_cgi__V_7_7);
#line 360 "mdprof_cgi.m"
            return;
          }
#line 360 "mdprof_cgi.m"
      }
#line 360 "mdprof_cgi.m"
  }
#line 360 "mdprof_cgi.m"
}

#line 360 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____cmd_pref_0_0(
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__1_1,
#line 360 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2)
#line 360 "mdprof_cgi.m"
{
#line 360 "mdprof_cgi.m"
  {
#line 360 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 360 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastX_7 = (MR_Integer) mdprof_cgi__HeadVar__1_1;
#line 360 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__CastY_8 = (MR_Integer) mdprof_cgi__HeadVar__2_2;

#line 360 "mdprof_cgi.m"
    mdprof_cgi__succeeded = (mdprof_cgi__CastX_7 == mdprof_cgi__CastY_8);
#line 360 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 360 "mdprof_cgi.m"
      mdprof_cgi__succeeded = MR_TRUE;
#line 360 "mdprof_cgi.m"
    else
#line 360 "mdprof_cgi.m"
      {
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__1_1, (MR_Integer) 0)));
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 0)));
#line 360 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__HeadVar__2_2, (MR_Integer) 1)));

#line 2216 "mdprof_cgi.c"
        {
#line 2218 "mdprof_cgi.c"
          mdprof_cgi__succeeded = query____Unify____cmd_0_0(mdprof_cgi__V_3_3, mdprof_cgi__V_5_5);
        }
#line 360 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 2223 "mdprof_cgi.c"
          {
#line 2225 "mdprof_cgi.c"
            return mdprof_cgi__succeeded = query____Unify____preferences_indication_0_0(mdprof_cgi__V_4_4, mdprof_cgi__V_6_6);
          }
#line 360 "mdprof_cgi.m"
      }
#line 360 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 360 "mdprof_cgi.m"
  }
#line 360 "mdprof_cgi.m"
}

#line 738 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi____Compare____child_has_parent_0_0(
#line 738 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2,
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__3_3)
#line 738 "mdprof_cgi.m"
{
#line 738 "mdprof_cgi.m"
  {
#line 738 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 738 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__Cast_HeadVar1_4 = (MR_Integer) mdprof_cgi__HeadVar__2_2;
#line 738 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__Cast_HeadVar2_5 = (MR_Integer) mdprof_cgi__HeadVar__3_3;

#line 738 "mdprof_cgi.m"
    {
#line 738 "mdprof_cgi.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_cgi__HeadVar__1_1, mdprof_cgi__Cast_HeadVar1_4, mdprof_cgi__Cast_HeadVar2_5);
#line 738 "mdprof_cgi.m"
      return;
    }
#line 738 "mdprof_cgi.m"
  }
#line 738 "mdprof_cgi.m"
}

#line 738 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi____Unify____child_has_parent_0_0(
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_1,
#line 738 "mdprof_cgi.m"
  MR_Word mdprof_cgi__HeadVar__2_2)
#line 738 "mdprof_cgi.m"
{
#line 2278 "mdprof_cgi.c"
  {
#line 2280 "mdprof_cgi.c"
    MR_bool mdprof_cgi__succeeded = (mdprof_cgi__HeadVar__2_1 == mdprof_cgi__HeadVar__2_2);

#line 2283 "mdprof_cgi.c"
    return mdprof_cgi__succeeded;
#line 2285 "mdprof_cgi.c"
  }
#line 738 "mdprof_cgi.m"
}

#line 866 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__defaults_2_p_0(
#line 866 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__1_1,
#line 866 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__2_2,
#line 866 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__cont,
#line 866 "mdprof_cgi.m"
  void * mdprof_cgi__cont_env_ptr)
#line 866 "mdprof_cgi.m"
{
#line 868 "mdprof_cgi.m"
  {
#line 868 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;

#line 868 "mdprof_cgi.m"
    {
#line 868 "mdprof_cgi.m"
      MR_Integer mdprof_cgi__slot_0 = (MR_Integer) 0;

#line 868 "mdprof_cgi.m"
      do
#line 868 "mdprof_cgi.m"
        {
#line 868 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__1_1 = ((&mdprof_cgi_vector_common_6[0 + mdprof_cgi__slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_0;
#line 868 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = ((&mdprof_cgi_vector_common_6[0 + mdprof_cgi__slot_0]))->mdprof_cgi__vector_common_type_6_0__vct_6_f_1;
#line 868 "mdprof_cgi.m"
          {
#line 868 "mdprof_cgi.m"
            mdprof_cgi__cont(mdprof_cgi__cont_env_ptr);
          }
#line 868 "mdprof_cgi.m"
          mdprof_cgi__slot_0 = (mdprof_cgi__slot_0 + (MR_Integer) 1);
#line 868 "mdprof_cgi.m"
        }
#line 868 "mdprof_cgi.m"
      while ((mdprof_cgi__slot_0 < (MR_Integer) 19));
#line 868 "mdprof_cgi.m"
    }
#line 868 "mdprof_cgi.m"
  }
#line 866 "mdprof_cgi.m"
}

#line 844 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__long_2_p_0(
#line 844 "mdprof_cgi.m"
  MR_String mdprof_cgi__HeadVar__1_1,
#line 844 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__2_2)
#line 844 "mdprof_cgi.m"
{
#line 846 "mdprof_cgi.m"
  {
#line 846 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;

#line 846 "mdprof_cgi.m"
    {
#line 846 "mdprof_cgi.m"
      MR_Integer mdprof_cgi__case_num_0 = (MR_Integer) -1;

#line 846 "mdprof_cgi.m"
#line 846 "mdprof_cgi.m"
      switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 0)) {
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 99:
#line 846 "mdprof_cgi.m"
#line 846 "mdprof_cgi.m"
          switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 1)) {
#line 846 "mdprof_cgi.m"
            case (MR_Integer) 97:
#line 846 "mdprof_cgi.m"
              if (MR_offset_streq(2, mdprof_cgi__HeadVar__1_1, (MR_String) "canonical-clique"))
#line 846 "mdprof_cgi.m"
                mdprof_cgi__case_num_0 = (MR_Integer) 0;
#line 846 "mdprof_cgi.m"
              break;
#line 846 "mdprof_cgi.m"
            case (MR_Integer) 108:
#line 846 "mdprof_cgi.m"
              if (MR_offset_streq(2, mdprof_cgi__HeadVar__1_1, (MR_String) "clique"))
#line 846 "mdprof_cgi.m"
                mdprof_cgi__case_num_0 = (MR_Integer) 1;
#line 846 "mdprof_cgi.m"
              break;
#line 846 "mdprof_cgi.m"
          }
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 100:
#line 846 "mdprof_cgi.m"
          if (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 1)) == (MR_Integer) 101))
#line 846 "mdprof_cgi.m"
#line 846 "mdprof_cgi.m"
            switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 2)) {
#line 846 "mdprof_cgi.m"
              case (MR_Integer) 98:
#line 846 "mdprof_cgi.m"
                if (MR_offset_streq(3, mdprof_cgi__HeadVar__1_1, (MR_String) "debug"))
#line 846 "mdprof_cgi.m"
                  mdprof_cgi__case_num_0 = (MR_Integer) 2;
#line 846 "mdprof_cgi.m"
                break;
#line 846 "mdprof_cgi.m"
              case (MR_Integer) 99:
#line 846 "mdprof_cgi.m"
                if (((((((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 3)) == (MR_Integer) 111)) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 4)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 5)) == (MR_Integer) 101))))
#line 846 "mdprof_cgi.m"
#line 846 "mdprof_cgi.m"
                  switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 6)) {
#line 846 "mdprof_cgi.m"
                    case (MR_Integer) 0:
#line 846 "mdprof_cgi.m"
                      mdprof_cgi__case_num_0 = (MR_Integer) 3;
#line 846 "mdprof_cgi.m"
                      break;
#line 846 "mdprof_cgi.m"
                    case (MR_Integer) 45:
#line 846 "mdprof_cgi.m"
#line 846 "mdprof_cgi.m"
                      switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 7)) {
#line 846 "mdprof_cgi.m"
                        case (MR_Integer) 99:
#line 846 "mdprof_cgi.m"
                          if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "decode-cmd"))
#line 846 "mdprof_cgi.m"
                            mdprof_cgi__case_num_0 = (MR_Integer) 4;
#line 846 "mdprof_cgi.m"
                          break;
#line 846 "mdprof_cgi.m"
                        case (MR_Integer) 112:
#line 846 "mdprof_cgi.m"
                          if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "decode-prefs"))
#line 846 "mdprof_cgi.m"
                            mdprof_cgi__case_num_0 = (MR_Integer) 5;
#line 846 "mdprof_cgi.m"
                          break;
#line 846 "mdprof_cgi.m"
                      }
#line 846 "mdprof_cgi.m"
                      break;
#line 846 "mdprof_cgi.m"
                  }
#line 846 "mdprof_cgi.m"
                break;
#line 846 "mdprof_cgi.m"
              case (MR_Integer) 116:
#line 846 "mdprof_cgi.m"
                if (MR_offset_streq(3, mdprof_cgi__HeadVar__1_1, (MR_String) "detach-process"))
#line 846 "mdprof_cgi.m"
                  mdprof_cgi__case_num_0 = (MR_Integer) 6;
#line 846 "mdprof_cgi.m"
                break;
#line 846 "mdprof_cgi.m"
            }
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 104:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "help"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 7;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 108:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "localhost"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 8;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 109:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "modules"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 9;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 112:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "proc"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 10;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 113:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "quit"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 11;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 114:
#line 846 "mdprof_cgi.m"
#line 846 "mdprof_cgi.m"
          switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 1)) {
#line 846 "mdprof_cgi.m"
            case (MR_Integer) 101:
#line 846 "mdprof_cgi.m"
              if (((((((((((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 2)) == (MR_Integer) 99)) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 3)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 4)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 5)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 6)) == (MR_Integer) 45))))
#line 846 "mdprof_cgi.m"
#line 846 "mdprof_cgi.m"
                switch (MR_nth_code_unit(mdprof_cgi__HeadVar__1_1, 7)) {
#line 846 "mdprof_cgi.m"
                  case (MR_Integer) 108:
#line 846 "mdprof_cgi.m"
                    if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "record-loop"))
#line 846 "mdprof_cgi.m"
                      mdprof_cgi__case_num_0 = (MR_Integer) 12;
#line 846 "mdprof_cgi.m"
                    break;
#line 846 "mdprof_cgi.m"
                  case (MR_Integer) 115:
#line 846 "mdprof_cgi.m"
                    if (MR_offset_streq(8, mdprof_cgi__HeadVar__1_1, (MR_String) "record-startup"))
#line 846 "mdprof_cgi.m"
                      mdprof_cgi__case_num_0 = (MR_Integer) 13;
#line 846 "mdprof_cgi.m"
                    break;
#line 846 "mdprof_cgi.m"
                }
#line 846 "mdprof_cgi.m"
              break;
#line 846 "mdprof_cgi.m"
            case (MR_Integer) 111:
#line 846 "mdprof_cgi.m"
              if (MR_offset_streq(2, mdprof_cgi__HeadVar__1_1, (MR_String) "root"))
#line 846 "mdprof_cgi.m"
                mdprof_cgi__case_num_0 = (MR_Integer) 14;
#line 846 "mdprof_cgi.m"
              break;
#line 846 "mdprof_cgi.m"
          }
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 115:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "server-process"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 15;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 116:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "timeout"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 16;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 118:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "version"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 17;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
        case (MR_Integer) 119:
#line 846 "mdprof_cgi.m"
          if (MR_offset_streq(1, mdprof_cgi__HeadVar__1_1, (MR_String) "write-query-string"))
#line 846 "mdprof_cgi.m"
            mdprof_cgi__case_num_0 = (MR_Integer) 18;
#line 846 "mdprof_cgi.m"
          break;
#line 846 "mdprof_cgi.m"
      }
#line 846 "mdprof_cgi.m"
      if ((mdprof_cgi__case_num_0 < (MR_Integer) 0))
#line 846 "mdprof_cgi.m"
        mdprof_cgi__succeeded = MR_FALSE;
#line 846 "mdprof_cgi.m"
      else
#line 846 "mdprof_cgi.m"
        {
#line 846 "mdprof_cgi.m"
          /* we found a match; look up the results */
#line 846 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = ((&mdprof_cgi_vector_common_5[0 + mdprof_cgi__case_num_0]))->mdprof_cgi__vector_common_type_5_0__vct_5_f_0;
#line 846 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 846 "mdprof_cgi.m"
        }
#line 846 "mdprof_cgi.m"
    }
#line 846 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 846 "mdprof_cgi.m"
  }
#line 844 "mdprof_cgi.m"
}

#line 831 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__short_2_p_0(
#line 831 "mdprof_cgi.m"
  MR_Char mdprof_cgi__HeadVar__1_1,
#line 831 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__HeadVar__2_2)
#line 831 "mdprof_cgi.m"
{
#line 833 "mdprof_cgi.m"
  {
#line 833 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;

#line 833 "mdprof_cgi.m"
#line 833 "mdprof_cgi.m"
    switch (mdprof_cgi__HeadVar__1_1) {
#line 833 "mdprof_cgi.m"
      default:
#line 833 "mdprof_cgi.m"
        mdprof_cgi__succeeded = MR_FALSE;
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 67:
#line 834 "mdprof_cgi.m"
        {
#line 834 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 1;
#line 834 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 834 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 99:
#line 833 "mdprof_cgi.m"
        {
#line 833 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 0;
#line 833 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 833 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 100:
#line 835 "mdprof_cgi.m"
        {
#line 835 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 2;
#line 835 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 835 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 109:
#line 836 "mdprof_cgi.m"
        {
#line 836 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 9;
#line 836 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 836 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 112:
#line 837 "mdprof_cgi.m"
        {
#line 837 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 10;
#line 837 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 837 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 113:
#line 838 "mdprof_cgi.m"
        {
#line 838 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 11;
#line 838 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 838 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 114:
#line 839 "mdprof_cgi.m"
        {
#line 839 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 12;
#line 839 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 839 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 115:
#line 840 "mdprof_cgi.m"
        {
#line 840 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 15;
#line 840 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 840 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 116:
#line 841 "mdprof_cgi.m"
        {
#line 841 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 16;
#line 841 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 841 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
      case (MR_Char) 119:
#line 842 "mdprof_cgi.m"
        {
#line 842 "mdprof_cgi.m"
          *mdprof_cgi__HeadVar__2_2 = (MR_Integer) 18;
#line 842 "mdprof_cgi.m"
          mdprof_cgi__succeeded = MR_TRUE;
#line 842 "mdprof_cgi.m"
        }
#line 833 "mdprof_cgi.m"
        break;
#line 833 "mdprof_cgi.m"
    }
#line 833 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 833 "mdprof_cgi.m"
  }
#line 831 "mdprof_cgi.m"
}

#line 770 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__raw_detach_process_3_p_0(
#line 770 "mdprof_cgi.m"
  MR_Integer * mdprof_cgi__ResCode_1)
#line 770 "mdprof_cgi.m"
{
#line 772 "mdprof_cgi.m"
  {
#line 772 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;

#line 775 "mdprof_cgi.m"
{
#define MR_PROC_LABEL mdprof_cgi__raw_detach_process_3_p_0

	MR_Integer ResCode;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 775 "mdprof_cgi.m"
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
#line 2803 "mdprof_cgi.c"

		;}
#undef MR_PROC_LABEL
	 *mdprof_cgi__ResCode_1  = ResCode;
#line 775 "mdprof_cgi.m"
}
#line 772 "mdprof_cgi.m"
  }
#line 770 "mdprof_cgi.m"
}

#line 710 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__check_for_existing_fifos_5_p_0(
#line 710 "mdprof_cgi.m"
  MR_String mdprof_cgi__Fifo1_1,
#line 710 "mdprof_cgi.m"
  MR_String mdprof_cgi__Fifo2_2,
#line 710 "mdprof_cgi.m"
  MR_Integer * mdprof_cgi__FifoCount_3)
#line 710 "mdprof_cgi.m"
{
#line 713 "mdprof_cgi.m"
  {
#line 713 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;

#line 717 "mdprof_cgi.m"
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
#line 717 "mdprof_cgi.m"

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

#line 2866 "mdprof_cgi.c"

		;}
#undef MR_PROC_LABEL
	 *mdprof_cgi__FifoCount_3  = FifoCount;
#line 717 "mdprof_cgi.m"
}
#line 713 "mdprof_cgi.m"
  }
#line 710 "mdprof_cgi.m"
}

#line 671 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__make_pipes_4_p_0(
#line 671 "mdprof_cgi.m"
  MR_String mdprof_cgi__FileName_5,
#line 671 "mdprof_cgi.m"
  MR_Word * mdprof_cgi__Success_6)
#line 671 "mdprof_cgi.m"
{
#line 673 "mdprof_cgi.m"
  {
#line 673 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 673 "mdprof_cgi.m"
    MR_String mdprof_cgi__ToServerPipe_8;
#line 673 "mdprof_cgi.m"
    MR_String mdprof_cgi__FromServerPipe_9;
#line 673 "mdprof_cgi.m"
    MR_String mdprof_cgi__MakeToServerPipeCmd_10;
#line 673 "mdprof_cgi.m"
    MR_String mdprof_cgi__MakeFromServerPipeCmd_11;
#line 673 "mdprof_cgi.m"
    MR_Word mdprof_cgi__ToServerRes_12;
#line 673 "mdprof_cgi.m"
    MR_Word mdprof_cgi__FromServerRes_13;
#line 681 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__V_20_20;
#line 681 "mdprof_cgi.m"
    MR_Integer mdprof_cgi__V_21_21;

#line 674 "mdprof_cgi.m"
    {
#line 674 "mdprof_cgi.m"
      mdprof_cgi__ToServerPipe_8 = interface__to_server_pipe_name_1_f_0(mdprof_cgi__FileName_5);
    }
#line 675 "mdprof_cgi.m"
    {
#line 675 "mdprof_cgi.m"
      mdprof_cgi__FromServerPipe_9 = interface__from_server_pipe_name_1_f_0(mdprof_cgi__FileName_5);
    }
#line 676 "mdprof_cgi.m"
    {
#line 676 "mdprof_cgi.m"
      mdprof_cgi__MakeToServerPipeCmd_10 = conf__make_pipe_cmd_1_f_0(mdprof_cgi__ToServerPipe_8);
    }
#line 677 "mdprof_cgi.m"
    {
#line 677 "mdprof_cgi.m"
      mdprof_cgi__MakeFromServerPipeCmd_11 = conf__make_pipe_cmd_1_f_0(mdprof_cgi__FromServerPipe_9);
    }
#line 678 "mdprof_cgi.m"
    {
#line 678 "mdprof_cgi.m"
      mercury__io__call_system_4_p_0(mdprof_cgi__MakeToServerPipeCmd_10, &mdprof_cgi__ToServerRes_12);
    }
#line 679 "mdprof_cgi.m"
    {
#line 679 "mdprof_cgi.m"
      mercury__io__call_system_4_p_0(mdprof_cgi__MakeFromServerPipeCmd_11, &mdprof_cgi__FromServerRes_13);
    }
#line 681 "mdprof_cgi.m"
    mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__ToServerRes_12)) == (MR_mktag((MR_Integer) 0)));
#line 681 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 681 "mdprof_cgi.m"
      {
#line 681 "mdprof_cgi.m"
        mdprof_cgi__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_cgi__ToServerRes_12, (MR_Integer) 0)));
#line 681 "mdprof_cgi.m"
        mdprof_cgi__succeeded = (mdprof_cgi__V_20_20 == (MR_Integer) 0);
#line 681 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 681 "mdprof_cgi.m"
          {
#line 682 "mdprof_cgi.m"
            mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__FromServerRes_13)) == (MR_mktag((MR_Integer) 0)));
#line 682 "mdprof_cgi.m"
            if (mdprof_cgi__succeeded)
#line 682 "mdprof_cgi.m"
              {
#line 682 "mdprof_cgi.m"
                mdprof_cgi__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_cgi__FromServerRes_13, (MR_Integer) 0)));
#line 682 "mdprof_cgi.m"
                mdprof_cgi__succeeded = (mdprof_cgi__V_21_21 == (MR_Integer) 0);
#line 682 "mdprof_cgi.m"
              }
#line 681 "mdprof_cgi.m"
          }
#line 681 "mdprof_cgi.m"
      }
#line 687 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 684 "mdprof_cgi.m"
      {
#line 684 "mdprof_cgi.m"
        {
#line 684 "mdprof_cgi.m"
          timeout__register_file_for_cleanup_3_p_0(mdprof_cgi__ToServerPipe_8);
        }
#line 685 "mdprof_cgi.m"
        {
#line 685 "mdprof_cgi.m"
          timeout__register_file_for_cleanup_3_p_0(mdprof_cgi__FromServerPipe_9);
        }
#line 686 "mdprof_cgi.m"
        *mdprof_cgi__Success_6 = (MR_Integer) 1;
#line 684 "mdprof_cgi.m"
      }
#line 687 "mdprof_cgi.m"
    else
#line 693 "mdprof_cgi.m"
      {
#line 693 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_14_14;
#line 694 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_15_15;

#line 693 "mdprof_cgi.m"
        {
#line 693 "mdprof_cgi.m"
          mercury__io__remove_file_4_p_0(mdprof_cgi__ToServerPipe_8, &mdprof_cgi__V_14_14);
        }
#line 694 "mdprof_cgi.m"
        {
#line 694 "mdprof_cgi.m"
          mercury__io__remove_file_4_p_0(mdprof_cgi__FromServerPipe_9, &mdprof_cgi__V_15_15);
        }
#line 695 "mdprof_cgi.m"
        *mdprof_cgi__Success_6 = (MR_Integer) 0;
#line 693 "mdprof_cgi.m"
      }
#line 673 "mdprof_cgi.m"
  }
#line 671 "mdprof_cgi.m"
}

#line 585 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__server_loop_10_p_0(
#line 585 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_11,
#line 585 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_12,
#line 585 "mdprof_cgi.m"
  MR_Integer mdprof_cgi__TimeOut0_13,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__MaybeStartupStream_14,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Debug_15,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Canonical_16,
#line 585 "mdprof_cgi.m"
  MR_Integer mdprof_cgi__QueryNum0_17,
#line 585 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Deep0_18)
#line 585 "mdprof_cgi.m"
{
#line 590 "mdprof_cgi.m"
  while (MR_TRUE)
#line 590 "mdprof_cgi.m"
    {
#line 590 "mdprof_cgi.m"
      /* tailcall optimized into a loop */
#line 590 "mdprof_cgi.m"
      {
#line 590 "mdprof_cgi.m"
        MR_bool mdprof_cgi__succeeded;
#line 590 "mdprof_cgi.m"
        MR_Word mdprof_cgi__TypeCtorInfo_185_185;
#line 590 "mdprof_cgi.m"
        MR_Integer mdprof_cgi__QueryNum_20;
#line 590 "mdprof_cgi.m"
        MR_Word mdprof_cgi__CmdPref0_21;
#line 590 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Deep_26;
#line 590 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Cmd_28;
#line 593 "mdprof_cgi.m"
        MR_Box mdprof_cgi__conv0_CmdPref0_21;

#line 591 "mdprof_cgi.m"
        {
#line 591 "mdprof_cgi.m"
          timeout__setup_timeout_3_p_0(mdprof_cgi__TimeOut0_13);
        }
#line 592 "mdprof_cgi.m"
        mdprof_cgi__QueryNum_20 = (mdprof_cgi__QueryNum0_17 + (MR_Integer) 1);
#line 3065 "mdprof_cgi.c"
        mdprof_cgi__TypeCtorInfo_185_185 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0;
#line 593 "mdprof_cgi.m"
        {
#line 593 "mdprof_cgi.m"
          interface__recv_term_5_p_0(mdprof_cgi__TypeCtorInfo_185_185, mdprof_cgi__ToServerPipe_11, mdprof_cgi__Debug_15, &mdprof_cgi__conv0_CmdPref0_21);
        }
#line 593 "mdprof_cgi.m"
        mdprof_cgi__CmdPref0_21 = ((MR_Word) mdprof_cgi__conv0_CmdPref0_21);
#line 3074 "mdprof_cgi.c"
        if ((mdprof_cgi__MaybeStartupStream_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3076 "mdprof_cgi.c"
          {
#line 3078 "mdprof_cgi.c"
            MR_Word mdprof_cgi__Cmd0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 0)));
#line 3080 "mdprof_cgi.c"
            MR_Word mdprof_cgi__PrefInd0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 1)));
#line 3082 "mdprof_cgi.c"
            MR_String mdprof_cgi__HTML_31;
#line 3084 "mdprof_cgi.c"
            MR_String mdprof_cgi__ResponseFileName_32;
#line 3086 "mdprof_cgi.c"
            MR_Word mdprof_cgi__ResponseRes_33;
#line 3088 "mdprof_cgi.c"
            MR_Word mdprof_cgi__ResponseStream_34;
#line 3090 "mdprof_cgi.c"
            MR_String mdprof_cgi__V_56_56;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_157_157;
#line 633 "mdprof_cgi.m"
            MR_String mdprof_cgi__V_158_158;
#line 633 "mdprof_cgi.m"
            MR_String mdprof_cgi__V_159_159;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_160_160;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_161_161;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_162_162;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_163_163;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_164_164;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_165_165;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_166_166;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_167_167;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_168_168;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_169_169;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_170_170;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_171_171;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_172_172;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_173_173;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_174_174;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_175_175;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_176_176;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_177_177;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_178_178;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_179_179;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_180_180;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_181_181;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_182_182;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_183_183;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_184_184;

#line 606 "mdprof_cgi.m"
            mdprof_cgi__succeeded = (mdprof_cgi__Cmd0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 3151 "mdprof_cgi.c"
            if (mdprof_cgi__succeeded)
#line 3153 "mdprof_cgi.c"
              {
#line 3155 "mdprof_cgi.c"
                MR_Word mdprof_cgi__MaybeDeep_25;
#line 3157 "mdprof_cgi.c"
                MR_String mdprof_cgi__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
#line 3159 "mdprof_cgi.c"
                MR_String mdprof_cgi__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
#line 3161 "mdprof_cgi.c"
                MR_String mdprof_cgi__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));

#line 607 "mdprof_cgi.m"
                {
#line 607 "mdprof_cgi.m"
                  startup__read_and_startup_default_deep_options_9_p_0(mdprof_cgi__V_51_51, mdprof_cgi__V_74_74, mdprof_cgi__V_75_75, mdprof_cgi__Canonical_16, mdprof_cgi__MaybeStartupStream_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__MaybeDeep_25);
                }
#line 3221 "mdprof_cgi.c"
                if (((MR_tag((MR_Word) mdprof_cgi__MaybeDeep_25)) == (MR_mktag((MR_Integer) 1))))
#line 3223 "mdprof_cgi.c"
                  {
#line 625 "mdprof_cgi.m"
                    MR_Word mdprof_cgi__Pref0_30;

#line 615 "mdprof_cgi.m"
                    mdprof_cgi__HTML_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeDeep_25, (MR_Integer) 0)));
#line 617 "mdprof_cgi.m"
                    mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
#line 618 "mdprof_cgi.m"
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "mdprof_cgi.m"
                    {
#line 625 "mdprof_cgi.m"
                      mdprof_cgi__Pref0_30 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_24);
                    }
#line 3239 "mdprof_cgi.c"
                  }
#line 3241 "mdprof_cgi.c"
                else
#line 3243 "mdprof_cgi.c"
                  {
#line 3245 "mdprof_cgi.c"
                    MR_Word mdprof_cgi__Pref0_421;

#line 611 "mdprof_cgi.m"
                    mdprof_cgi__Deep_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeDeep_25, (MR_Integer) 0)));
#line 613 "mdprof_cgi.m"
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 625 "mdprof_cgi.m"
                    {
#line 625 "mdprof_cgi.m"
                      mdprof_cgi__Pref0_421 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_24);
                    }
#line 630 "mdprof_cgi.m"
                    {
#line 630 "mdprof_cgi.m"
                      query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_421, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_31);
                    }
#line 3262 "mdprof_cgi.c"
                  }
#line 3264 "mdprof_cgi.c"
              }
#line 3266 "mdprof_cgi.c"
            else
#line 3268 "mdprof_cgi.c"
              {
#line 3270 "mdprof_cgi.c"
                MR_Word mdprof_cgi__Pref0_418;

#line 621 "mdprof_cgi.m"
                mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
#line 623 "mdprof_cgi.m"
                mdprof_cgi__Cmd_28 = mdprof_cgi__Cmd0_23;
#line 625 "mdprof_cgi.m"
                {
#line 625 "mdprof_cgi.m"
                  mdprof_cgi__Pref0_418 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_24);
                }
#line 630 "mdprof_cgi.m"
                {
#line 630 "mdprof_cgi.m"
                  query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_418, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_31);
                }
#line 3287 "mdprof_cgi.c"
              }
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_158_158 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_159_159 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_161_161 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_162_162 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_163_163 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_164_164 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_165_165 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_166_166 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_167_167 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_168_168 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_169_169 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_170_170 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_171_171 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_172_172 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_173_173 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_174_174 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_175_175 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_176_176 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_177_177 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_178_178 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_179_179 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_180_180 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));
#line 633 "mdprof_cgi.m"
            {
#line 633 "mdprof_cgi.m"
              mdprof_cgi__ResponseFileName_32 = interface__response_file_name_2_f_0(mdprof_cgi__V_56_56, mdprof_cgi__QueryNum_20);
            }
#line 634 "mdprof_cgi.m"
            {
#line 634 "mdprof_cgi.m"
              mercury__io__open_output_4_p_0(mdprof_cgi__ResponseFileName_32, &mdprof_cgi__ResponseRes_33);
            }
#line 637 "mdprof_cgi.m"
            if (((MR_tag((MR_Word) mdprof_cgi__ResponseRes_33)) == (MR_mktag((MR_Integer) 1))))
#line 638 "mdprof_cgi.m"
              {
#line 639 "mdprof_cgi.m"
                {
#line 639 "mdprof_cgi.m"
                  mercury__require__error_1_p_0((MR_String) "cannot open response file");
#line 639 "mdprof_cgi.m"
                  return;
                }
#line 638 "mdprof_cgi.m"
              }
#line 637 "mdprof_cgi.m"
            else
#line 636 "mdprof_cgi.m"
              mdprof_cgi__ResponseStream_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__ResponseRes_33, (MR_Integer) 0)));
#line 641 "mdprof_cgi.m"
            {
#line 641 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__ResponseStream_34, mdprof_cgi__HTML_31);
            }
#line 642 "mdprof_cgi.m"
            {
#line 642 "mdprof_cgi.m"
              mercury__io__close_output_3_p_0(mdprof_cgi__ResponseStream_34);
            }
#line 644 "mdprof_cgi.m"
            {
#line 644 "mdprof_cgi.m"
              interface__send_string_5_p_0(mdprof_cgi__FromServerPipe_12, mdprof_cgi__Debug_15, mdprof_cgi__ResponseFileName_32);
            }
#line 3389 "mdprof_cgi.c"
          }
#line 3391 "mdprof_cgi.c"
        else
#line 3393 "mdprof_cgi.c"
          {
#line 3395 "mdprof_cgi.c"
            MR_Word mdprof_cgi__StartupStream1_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeStartupStream_14, (MR_Integer) 0)));
#line 3397 "mdprof_cgi.c"
            MR_String mdprof_cgi__V_189_189;
#line 3399 "mdprof_cgi.c"
            MR_Word mdprof_cgi__V_195_195;
#line 3401 "mdprof_cgi.c"
            MR_String mdprof_cgi__V_200_200;
#line 3403 "mdprof_cgi.c"
            MR_String mdprof_cgi__V_210_210;
#line 3405 "mdprof_cgi.c"
            MR_Word mdprof_cgi__Cmd0_340;
#line 3407 "mdprof_cgi.c"
            MR_Word mdprof_cgi__PrefInd0_341;
#line 3409 "mdprof_cgi.c"
            MR_String mdprof_cgi__HTML_346;
#line 3411 "mdprof_cgi.c"
            MR_String mdprof_cgi__ResponseFileName_347;
#line 3413 "mdprof_cgi.c"
            MR_Word mdprof_cgi__ResponseRes_348;
#line 3415 "mdprof_cgi.c"
            MR_Word mdprof_cgi__ResponseStream_349;
#line 3417 "mdprof_cgi.c"
            MR_String mdprof_cgi__V_354_354;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_310_310;
#line 633 "mdprof_cgi.m"
            MR_String mdprof_cgi__V_311_311;
#line 633 "mdprof_cgi.m"
            MR_String mdprof_cgi__V_312_312;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_313_313;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_314_314;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_315_315;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_316_316;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_317_317;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_318_318;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_319_319;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_320_320;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_321_321;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_322_322;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_323_323;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_324_324;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_325_325;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_326_326;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_327_327;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_328_328;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_329_329;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_330_330;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_331_331;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_332_332;
#line 633 "mdprof_cgi.m"
            MR_ArrayPtr mdprof_cgi__V_333_333;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_334_334;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_335_335;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_336_336;
#line 633 "mdprof_cgi.m"
            MR_Word mdprof_cgi__V_337_337;

#line 596 "mdprof_cgi.m"
            {
#line 596 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "server loop query ");
            }
#line 3481 "mdprof_cgi.c"
            mdprof_cgi__V_195_195 = (MR_Word) &mdprof_cgi_scalar_common_4[0];
#line 597 "mdprof_cgi.m"
            {
#line 597 "mdprof_cgi.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_cgi__V_195_195, mdprof_cgi__QueryNum_20, &mdprof_cgi__V_189_189);
            }
#line 597 "mdprof_cgi.m"
            {
#line 597 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, mdprof_cgi__V_189_189);
            }
#line 596 "mdprof_cgi.m"
            {
#line 596 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "\n");
            }
#line 598 "mdprof_cgi.m"
            {
#line 598 "mdprof_cgi.m"
              mercury__io__write_4_p_0(mdprof_cgi__TypeCtorInfo_185_185, mdprof_cgi__StartupStream1_36, ((MR_Box) (mdprof_cgi__CmdPref0_21)));
            }
#line 599 "mdprof_cgi.m"
            {
#line 599 "mdprof_cgi.m"
              mercury__io__nl_3_p_0(mdprof_cgi__StartupStream1_36);
            }
#line 600 "mdprof_cgi.m"
            {
#line 600 "mdprof_cgi.m"
              mercury__io__flush_output_3_p_0(mdprof_cgi__StartupStream1_36);
            }
#line 604 "mdprof_cgi.m"
            mdprof_cgi__Cmd0_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 0)));
#line 604 "mdprof_cgi.m"
            mdprof_cgi__PrefInd0_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__CmdPref0_21, (MR_Integer) 1)));
#line 606 "mdprof_cgi.m"
            mdprof_cgi__succeeded = (mdprof_cgi__Cmd0_340 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 3519 "mdprof_cgi.c"
            if (mdprof_cgi__succeeded)
#line 3521 "mdprof_cgi.c"
              {
#line 3523 "mdprof_cgi.c"
                MR_Word mdprof_cgi__MaybeDeep_246;
#line 3525 "mdprof_cgi.c"
                MR_String mdprof_cgi__V_248_248 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
#line 3527 "mdprof_cgi.c"
                MR_String mdprof_cgi__V_251_251 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
#line 3529 "mdprof_cgi.c"
                MR_String mdprof_cgi__V_252_252 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_220_220 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_221_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_222_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_223_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_224_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_225_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_226_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_227_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_228_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_229_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_230_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_231_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_232_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_233_233 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_234_234 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_235_235 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_236_236 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_237_237 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_238_238 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
#line 607 "mdprof_cgi.m"
                MR_ArrayPtr mdprof_cgi__V_239_239 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
#line 607 "mdprof_cgi.m"
                MR_Word mdprof_cgi__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));

#line 607 "mdprof_cgi.m"
                {
#line 607 "mdprof_cgi.m"
                  startup__read_and_startup_default_deep_options_9_p_0(mdprof_cgi__V_248_248, mdprof_cgi__V_251_251, mdprof_cgi__V_252_252, mdprof_cgi__Canonical_16, mdprof_cgi__MaybeStartupStream_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__MaybeDeep_246);
                }
#line 3589 "mdprof_cgi.c"
                if (((MR_tag((MR_Word) mdprof_cgi__MaybeDeep_246)) == (MR_mktag((MR_Integer) 1))))
#line 3591 "mdprof_cgi.c"
                  {
#line 625 "mdprof_cgi.m"
                    MR_Word mdprof_cgi__Pref0_345;

#line 615 "mdprof_cgi.m"
                    mdprof_cgi__HTML_346 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeDeep_246, (MR_Integer) 0)));
#line 617 "mdprof_cgi.m"
                    mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
#line 618 "mdprof_cgi.m"
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 625 "mdprof_cgi.m"
                    {
#line 625 "mdprof_cgi.m"
                      mdprof_cgi__Pref0_345 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_341);
                    }
#line 3607 "mdprof_cgi.c"
                  }
#line 3609 "mdprof_cgi.c"
                else
#line 3611 "mdprof_cgi.c"
                  {
#line 3613 "mdprof_cgi.c"
                    MR_Word mdprof_cgi__Pref0_427;

#line 611 "mdprof_cgi.m"
                    mdprof_cgi__Deep_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeDeep_246, (MR_Integer) 0)));
#line 613 "mdprof_cgi.m"
                    mdprof_cgi__Cmd_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 625 "mdprof_cgi.m"
                    {
#line 625 "mdprof_cgi.m"
                      mdprof_cgi__Pref0_427 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_341);
                    }
#line 630 "mdprof_cgi.m"
                    {
#line 630 "mdprof_cgi.m"
                      query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_427, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_346);
                    }
#line 3630 "mdprof_cgi.c"
                  }
#line 3632 "mdprof_cgi.c"
              }
#line 3634 "mdprof_cgi.c"
            else
#line 3636 "mdprof_cgi.c"
              {
#line 3638 "mdprof_cgi.c"
                MR_Word mdprof_cgi__Pref0_424;

#line 621 "mdprof_cgi.m"
                mdprof_cgi__Deep_26 = mdprof_cgi__Deep0_18;
#line 623 "mdprof_cgi.m"
                mdprof_cgi__Cmd_28 = mdprof_cgi__Cmd0_340;
#line 625 "mdprof_cgi.m"
                {
#line 625 "mdprof_cgi.m"
                  mdprof_cgi__Pref0_424 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_26, mdprof_cgi__PrefInd0_341);
                }
#line 630 "mdprof_cgi.m"
                {
#line 630 "mdprof_cgi.m"
                  query__try_exec_4_p_0(mdprof_cgi__Cmd_28, mdprof_cgi__Pref0_424, mdprof_cgi__Deep_26, &mdprof_cgi__HTML_346);
                }
#line 3655 "mdprof_cgi.c"
              }
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 0)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_311_311 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 1)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_312_312 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 2)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_354_354 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 3)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 4)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_314_314 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 5)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_315_315 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 6)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_316_316 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 7)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_317_317 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 8)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_318_318 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 9)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_319_319 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 10)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_320_320 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 11)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_321_321 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 12)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_322_322 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 13)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_323_323 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 14)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_324_324 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 15)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_325_325 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 16)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_326_326 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 17)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_327_327 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 18)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_328_328 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 19)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_329_329 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 20)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_330_330 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 21)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_331_331 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 22)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_332_332 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 23)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_333_333 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 24)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 25)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 26)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 27)));
#line 633 "mdprof_cgi.m"
            mdprof_cgi__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__Deep0_18, (MR_Integer) 28)));
#line 633 "mdprof_cgi.m"
            {
#line 633 "mdprof_cgi.m"
              mdprof_cgi__ResponseFileName_347 = interface__response_file_name_2_f_0(mdprof_cgi__V_354_354, mdprof_cgi__QueryNum_20);
            }
#line 634 "mdprof_cgi.m"
            {
#line 634 "mdprof_cgi.m"
              mercury__io__open_output_4_p_0(mdprof_cgi__ResponseFileName_347, &mdprof_cgi__ResponseRes_348);
            }
#line 637 "mdprof_cgi.m"
            if (((MR_tag((MR_Word) mdprof_cgi__ResponseRes_348)) == (MR_mktag((MR_Integer) 1))))
#line 638 "mdprof_cgi.m"
              {
#line 639 "mdprof_cgi.m"
                {
#line 639 "mdprof_cgi.m"
                  mercury__require__error_1_p_0((MR_String) "cannot open response file");
#line 639 "mdprof_cgi.m"
                  return;
                }
#line 638 "mdprof_cgi.m"
              }
#line 637 "mdprof_cgi.m"
            else
#line 636 "mdprof_cgi.m"
              mdprof_cgi__ResponseStream_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__ResponseRes_348, (MR_Integer) 0)));
#line 641 "mdprof_cgi.m"
            {
#line 641 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__ResponseStream_349, mdprof_cgi__HTML_346);
            }
#line 642 "mdprof_cgi.m"
            {
#line 642 "mdprof_cgi.m"
              mercury__io__close_output_3_p_0(mdprof_cgi__ResponseStream_349);
            }
#line 644 "mdprof_cgi.m"
            {
#line 644 "mdprof_cgi.m"
              interface__send_string_5_p_0(mdprof_cgi__FromServerPipe_12, mdprof_cgi__Debug_15, mdprof_cgi__ResponseFileName_347);
            }
#line 648 "mdprof_cgi.m"
            {
#line 648 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "query ");
            }
#line 649 "mdprof_cgi.m"
            {
#line 649 "mdprof_cgi.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mdprof_cgi__V_195_195, mdprof_cgi__QueryNum_20, &mdprof_cgi__V_200_200);
            }
#line 649 "mdprof_cgi.m"
            {
#line 649 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, mdprof_cgi__V_200_200);
            }
#line 648 "mdprof_cgi.m"
            {
#line 648 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) " output:\n");
            }
#line 649 "mdprof_cgi.m"
            {
#line 649 "mdprof_cgi.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_cgi__V_195_195, mdprof_cgi__HTML_346, &mdprof_cgi__V_210_210);
            }
#line 649 "mdprof_cgi.m"
            {
#line 649 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, mdprof_cgi__V_210_210);
            }
#line 648 "mdprof_cgi.m"
            {
#line 648 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_36, (MR_String) "\n");
            }
#line 650 "mdprof_cgi.m"
            {
#line 650 "mdprof_cgi.m"
              mercury__io__flush_output_3_p_0(mdprof_cgi__StartupStream1_36);
            }
#line 3797 "mdprof_cgi.c"
          }
#line 655 "mdprof_cgi.m"
        mdprof_cgi__succeeded = (mdprof_cgi__Cmd_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 660 "mdprof_cgi.m"
          {
#line 660 "mdprof_cgi.m"
            timeout__delete_cleanup_files_2_p_0();
#line 660 "mdprof_cgi.m"
            return;
          }
#line 661 "mdprof_cgi.m"
        else
#line 664 "mdprof_cgi.m"
          {
#line 664 "mdprof_cgi.m"
            MR_Integer mdprof_cgi__TimeOut_37;

#line 661 "mdprof_cgi.m"
            mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__Cmd_28)) == (MR_mktag((MR_Integer) 1)));
#line 661 "mdprof_cgi.m"
            if (mdprof_cgi__succeeded)
#line 661 "mdprof_cgi.m"
              {
#line 661 "mdprof_cgi.m"
                mdprof_cgi__TimeOut_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_cgi__Cmd_28, (MR_Integer) 0)));
#line 662 "mdprof_cgi.m"
                /* direct tailcall eliminated */
#line 662 "mdprof_cgi.m"
                {
#line 662 "mdprof_cgi.m"
                  MR_Integer mdprof_cgi__TimeOut0__tmp_copy_13 = mdprof_cgi__TimeOut_37;
#line 662 "mdprof_cgi.m"
                  MR_Integer mdprof_cgi__QueryNum0__tmp_copy_17 = mdprof_cgi__QueryNum_20;
#line 662 "mdprof_cgi.m"
                  MR_Word mdprof_cgi__Deep0__tmp_copy_18 = mdprof_cgi__Deep_26;

#line 662 "mdprof_cgi.m"
                  mdprof_cgi__Deep0_18 = mdprof_cgi__Deep0__tmp_copy_18;
#line 662 "mdprof_cgi.m"
                  mdprof_cgi__QueryNum0_17 = mdprof_cgi__QueryNum0__tmp_copy_17;
#line 662 "mdprof_cgi.m"
                  mdprof_cgi__TimeOut0_13 = mdprof_cgi__TimeOut0__tmp_copy_13;
#line 662 "mdprof_cgi.m"
                }
#line 662 "mdprof_cgi.m"
                continue;
#line 661 "mdprof_cgi.m"
              }
#line 661 "mdprof_cgi.m"
            else
#line 665 "mdprof_cgi.m"
              {
#line 665 "mdprof_cgi.m"
                /* direct tailcall eliminated */
#line 665 "mdprof_cgi.m"
                {
#line 665 "mdprof_cgi.m"
                  MR_Integer mdprof_cgi__QueryNum0__tmp_copy_17 = mdprof_cgi__QueryNum_20;
#line 665 "mdprof_cgi.m"
                  MR_Word mdprof_cgi__Deep0__tmp_copy_18 = mdprof_cgi__Deep_26;

#line 665 "mdprof_cgi.m"
                  mdprof_cgi__Deep0_18 = mdprof_cgi__Deep0__tmp_copy_18;
#line 665 "mdprof_cgi.m"
                  mdprof_cgi__QueryNum0_17 = mdprof_cgi__QueryNum0__tmp_copy_17;
#line 665 "mdprof_cgi.m"
                }
#line 665 "mdprof_cgi.m"
                continue;
#line 665 "mdprof_cgi.m"
              }
#line 664 "mdprof_cgi.m"
          }
#line 590 "mdprof_cgi.m"
      }
#line 590 "mdprof_cgi.m"
      break;
#line 590 "mdprof_cgi.m"
    }
#line 585 "mdprof_cgi.m"
}

#line 499 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__start_server_9_p_0(
#line 499 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_10,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_11,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_12,
#line 499 "mdprof_cgi.m"
  MR_Word mdprof_cgi__MaybeStartupStream_13,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__MutexFile_14,
#line 499 "mdprof_cgi.m"
  MR_String mdprof_cgi__WantFile_15,
#line 499 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Deep_16)
#line 499 "mdprof_cgi.m"
{
#line 504 "mdprof_cgi.m"
  {
#line 504 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 504 "mdprof_cgi.m"
    MR_Word mdprof_cgi__TypeCtorInfo_61_61 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
#line 504 "mdprof_cgi.m"
    MR_Word mdprof_cgi__DetachProcess_18;
#line 504 "mdprof_cgi.m"
    MR_Word mdprof_cgi__RecordLoop_19;
#line 504 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Debug_20;

#line 505 "mdprof_cgi.m"
    {
#line 505 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 6)), &mdprof_cgi__DetachProcess_18);
    }
#line 506 "mdprof_cgi.m"
    {
#line 506 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 14)), &mdprof_cgi__RecordLoop_19);
    }
#line 507 "mdprof_cgi.m"
    {
#line 507 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_20);
    }
#line 3929 "mdprof_cgi.c"
#line 3930 "mdprof_cgi.c"
    switch (mdprof_cgi__DetachProcess_18) {
#line 3932 "mdprof_cgi.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3934 "mdprof_cgi.c"
      case (MR_Integer) 0:
#line 3936 "mdprof_cgi.c"
        {
#line 3938 "mdprof_cgi.c"
          MR_Word mdprof_cgi__MaybeDebugStream_28;
#line 3940 "mdprof_cgi.c"
          MR_Integer mdprof_cgi__TimeOut_29;
#line 3942 "mdprof_cgi.c"
          MR_Word mdprof_cgi__Canonical_30;

#line 548 "mdprof_cgi.m"
          {
#line 548 "mdprof_cgi.m"
            timeout__release_lock_4_p_0(mdprof_cgi__Debug_20, mdprof_cgi__MutexFile_14);
          }
#line 549 "mdprof_cgi.m"
          {
#line 549 "mdprof_cgi.m"
            timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_15);
          }
#line 554 "mdprof_cgi.m"
#line 554 "mdprof_cgi.m"
          switch (mdprof_cgi__RecordLoop_19) {
#line 554 "mdprof_cgi.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 554 "mdprof_cgi.m"
            case (MR_Integer) 0:
#line 556 "mdprof_cgi.m"
              mdprof_cgi__MaybeDebugStream_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "mdprof_cgi.m"
              break;
#line 554 "mdprof_cgi.m"
            case (MR_Integer) 1:
#line 553 "mdprof_cgi.m"
              mdprof_cgi__MaybeDebugStream_28 = mdprof_cgi__MaybeStartupStream_13;
#line 554 "mdprof_cgi.m"
              break;
#line 554 "mdprof_cgi.m"
          }
#line 558 "mdprof_cgi.m"
          {
#line 558 "mdprof_cgi.m"
            mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 16)), &mdprof_cgi__TimeOut_29);
          }
#line 559 "mdprof_cgi.m"
          {
#line 559 "mdprof_cgi.m"
            mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_cgi__Canonical_30);
          }
#line 560 "mdprof_cgi.m"
          {
#line 560 "mdprof_cgi.m"
            mdprof_cgi__server_loop_10_p_0(mdprof_cgi__ToServerPipe_11, mdprof_cgi__FromServerPipe_12, mdprof_cgi__TimeOut_29, mdprof_cgi__MaybeDebugStream_28, mdprof_cgi__Debug_20, mdprof_cgi__Canonical_30, (MR_Integer) 0, mdprof_cgi__Deep_16);
#line 560 "mdprof_cgi.m"
            return;
          }
#line 3991 "mdprof_cgi.c"
        }
#line 3993 "mdprof_cgi.c"
        break;
#line 3995 "mdprof_cgi.c"
      case (MR_Integer) 1:
#line 3997 "mdprof_cgi.c"
        {
#line 3999 "mdprof_cgi.c"
          MR_Integer mdprof_cgi__ResCode_66;

#line 775 "mdprof_cgi.m"
{
#define MR_PROC_LABEL mdprof_cgi__start_server_9_p_0

	MR_Integer ResCode;
	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 775 "mdprof_cgi.m"
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
#line 4043 "mdprof_cgi.c"

		;}
#undef MR_PROC_LABEL
	 mdprof_cgi__ResCode_66  = ResCode;
#line 775 "mdprof_cgi.m"
}
#line 751 "mdprof_cgi.m"
          mdprof_cgi__succeeded = (mdprof_cgi__ResCode_66 < (MR_Integer) 0);
#line 4052 "mdprof_cgi.c"
          if (mdprof_cgi__succeeded)
#line 4054 "mdprof_cgi.c"
            {
#line 581 "mdprof_cgi.m"
              {
#line 581 "mdprof_cgi.m"
                timeout__delete_cleanup_files_2_p_0();
              }
#line 582 "mdprof_cgi.m"
              {
#line 582 "mdprof_cgi.m"
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 582 "mdprof_cgi.m"
                return;
              }
#line 4068 "mdprof_cgi.c"
            }
#line 4070 "mdprof_cgi.c"
          else
#line 4072 "mdprof_cgi.c"
            {
#line 753 "mdprof_cgi.m"
              mdprof_cgi__succeeded = (mdprof_cgi__ResCode_66 > (MR_Integer) 0);
#line 4076 "mdprof_cgi.c"
              if (mdprof_cgi__succeeded)
#line 4078 "mdprof_cgi.c"
                {
#line 569 "mdprof_cgi.m"
                  {
#line 569 "mdprof_cgi.m"
                    timeout__release_lock_4_p_0(mdprof_cgi__Debug_20, mdprof_cgi__MutexFile_14);
                  }
#line 570 "mdprof_cgi.m"
                  {
#line 570 "mdprof_cgi.m"
                    timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_15);
#line 570 "mdprof_cgi.m"
                    return;
                  }
#line 4092 "mdprof_cgi.c"
                }
#line 4094 "mdprof_cgi.c"
              else
#line 4096 "mdprof_cgi.c"
                {
#line 4098 "mdprof_cgi.c"
                  MR_Word mdprof_cgi__StdIn_72;
#line 4100 "mdprof_cgi.c"
                  MR_Word mdprof_cgi__StdOut_73;
#line 4102 "mdprof_cgi.c"
                  MR_Word mdprof_cgi__StdErr_74;
#line 4104 "mdprof_cgi.c"
                  MR_Word mdprof_cgi__BinaryStdIn_75;
#line 4106 "mdprof_cgi.c"
                  MR_Word mdprof_cgi__BinaryStdOut_76;
#line 4108 "mdprof_cgi.c"
                  MR_Word mdprof_cgi__MaybeDebugStream_111;
#line 4110 "mdprof_cgi.c"
                  MR_Integer mdprof_cgi__TimeOut_112;
#line 4112 "mdprof_cgi.c"
                  MR_Word mdprof_cgi__Canonical_113;

#line 525 "mdprof_cgi.m"
                  {
#line 525 "mdprof_cgi.m"
                    timeout__unregister_file_for_cleanup_3_p_0(mdprof_cgi__MutexFile_14);
                  }
#line 526 "mdprof_cgi.m"
                  {
#line 526 "mdprof_cgi.m"
                    timeout__unregister_file_for_cleanup_3_p_0(mdprof_cgi__WantFile_15);
                  }
#line 534 "mdprof_cgi.m"
                  {
#line 534 "mdprof_cgi.m"
                    mercury__io__stdin_stream_3_p_0(&mdprof_cgi__StdIn_72);
                  }
#line 535 "mdprof_cgi.m"
                  {
#line 535 "mdprof_cgi.m"
                    mercury__io__close_input_3_p_0(mdprof_cgi__StdIn_72);
                  }
#line 536 "mdprof_cgi.m"
                  {
#line 536 "mdprof_cgi.m"
                    mercury__io__stdout_stream_3_p_0(&mdprof_cgi__StdOut_73);
                  }
#line 537 "mdprof_cgi.m"
                  {
#line 537 "mdprof_cgi.m"
                    mercury__io__close_output_3_p_0(mdprof_cgi__StdOut_73);
                  }
#line 538 "mdprof_cgi.m"
                  {
#line 538 "mdprof_cgi.m"
                    mercury__io__stderr_stream_3_p_0(&mdprof_cgi__StdErr_74);
                  }
#line 539 "mdprof_cgi.m"
                  {
#line 539 "mdprof_cgi.m"
                    mercury__io__close_output_3_p_0(mdprof_cgi__StdErr_74);
                  }
#line 540 "mdprof_cgi.m"
                  {
#line 540 "mdprof_cgi.m"
                    mercury__io__binary_input_stream_3_p_0(&mdprof_cgi__BinaryStdIn_75);
                  }
#line 541 "mdprof_cgi.m"
                  {
#line 541 "mdprof_cgi.m"
                    mercury__io__close_binary_input_3_p_0(mdprof_cgi__BinaryStdIn_75);
                  }
#line 542 "mdprof_cgi.m"
                  {
#line 542 "mdprof_cgi.m"
                    mercury__io__binary_output_stream_3_p_0(&mdprof_cgi__BinaryStdOut_76);
                  }
#line 543 "mdprof_cgi.m"
                  {
#line 543 "mdprof_cgi.m"
                    mercury__io__close_binary_output_3_p_0(mdprof_cgi__BinaryStdOut_76);
                  }
#line 554 "mdprof_cgi.m"
#line 554 "mdprof_cgi.m"
                  switch (mdprof_cgi__RecordLoop_19) {
#line 554 "mdprof_cgi.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 554 "mdprof_cgi.m"
                    case (MR_Integer) 0:
#line 556 "mdprof_cgi.m"
                      mdprof_cgi__MaybeDebugStream_111 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "mdprof_cgi.m"
                      break;
#line 554 "mdprof_cgi.m"
                    case (MR_Integer) 1:
#line 553 "mdprof_cgi.m"
                      mdprof_cgi__MaybeDebugStream_111 = mdprof_cgi__MaybeStartupStream_13;
#line 554 "mdprof_cgi.m"
                      break;
#line 554 "mdprof_cgi.m"
                  }
#line 558 "mdprof_cgi.m"
                  {
#line 558 "mdprof_cgi.m"
                    mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 16)), &mdprof_cgi__TimeOut_112);
                  }
#line 559 "mdprof_cgi.m"
                  {
#line 559 "mdprof_cgi.m"
                    mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_61_61, mdprof_cgi__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_cgi__Canonical_113);
                  }
#line 560 "mdprof_cgi.m"
                  {
#line 560 "mdprof_cgi.m"
                    mdprof_cgi__server_loop_10_p_0(mdprof_cgi__ToServerPipe_11, mdprof_cgi__FromServerPipe_12, mdprof_cgi__TimeOut_112, mdprof_cgi__MaybeDebugStream_111, mdprof_cgi__Debug_20, mdprof_cgi__Canonical_113, (MR_Integer) 0, mdprof_cgi__Deep_16);
#line 560 "mdprof_cgi.m"
                    return;
                  }
#line 4211 "mdprof_cgi.c"
                }
#line 4213 "mdprof_cgi.c"
            }
#line 4215 "mdprof_cgi.c"
        }
#line 4217 "mdprof_cgi.c"
        break;
#line 4219 "mdprof_cgi.c"
    }
#line 504 "mdprof_cgi.m"
  }
#line 499 "mdprof_cgi.m"
}

#line 416 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__handle_query_from_new_server_11_p_0(
#line 416 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Cmd_12,
#line 416 "mdprof_cgi.m"
  MR_Word mdprof_cgi__PrefInd_13,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__FileName_14,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_15,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_16,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__StartupFile_17,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__MutexFile_18,
#line 416 "mdprof_cgi.m"
  MR_String mdprof_cgi__WantFile_19,
#line 416 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_20)
#line 416 "mdprof_cgi.m"
{
#line 421 "mdprof_cgi.m"
  {
#line 421 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__TypeCtorInfo_82_82 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__LocalHost_22;
#line 421 "mdprof_cgi.m"
    MR_String mdprof_cgi__Machine_23;
#line 421 "mdprof_cgi.m"
    MR_String mdprof_cgi__ScriptName_24;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Canonical_25;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__ServerProcess_26;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Debug_27;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__RecordStartup_28;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__MaybeStartupStream_31;
#line 421 "mdprof_cgi.m"
    MR_Word mdprof_cgi__StartupResult_33;

#line 422 "mdprof_cgi.m"
    {
#line 422 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 8)), &mdprof_cgi__LocalHost_22);
    }
#line 426 "mdprof_cgi.m"
#line 426 "mdprof_cgi.m"
    switch (mdprof_cgi__LocalHost_22) {
#line 426 "mdprof_cgi.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 426 "mdprof_cgi.m"
      case (MR_Integer) 0:
#line 425 "mdprof_cgi.m"
        {
#line 425 "mdprof_cgi.m"
          conf__server_name_port_3_p_0(&mdprof_cgi__Machine_23);
        }
#line 426 "mdprof_cgi.m"
        break;
#line 426 "mdprof_cgi.m"
      case (MR_Integer) 1:
#line 428 "mdprof_cgi.m"
        mdprof_cgi__Machine_23 = (MR_String) "localhost";
#line 426 "mdprof_cgi.m"
        break;
#line 426 "mdprof_cgi.m"
    }
#line 430 "mdprof_cgi.m"
    {
#line 430 "mdprof_cgi.m"
      conf__script_name_3_p_0(&mdprof_cgi__ScriptName_24);
    }
#line 431 "mdprof_cgi.m"
    {
#line 431 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 0)), &mdprof_cgi__Canonical_25);
    }
#line 432 "mdprof_cgi.m"
    {
#line 432 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 15)), &mdprof_cgi__ServerProcess_26);
    }
#line 433 "mdprof_cgi.m"
    {
#line 433 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_27);
    }
#line 434 "mdprof_cgi.m"
    {
#line 434 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_82_82, mdprof_cgi__Options_20, ((MR_Box) ((MR_Integer) 13)), &mdprof_cgi__RecordStartup_28);
    }
#line 446 "mdprof_cgi.m"
#line 446 "mdprof_cgi.m"
    switch (mdprof_cgi__RecordStartup_28) {
#line 446 "mdprof_cgi.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 446 "mdprof_cgi.m"
      case (MR_Integer) 0:
#line 448 "mdprof_cgi.m"
        mdprof_cgi__MaybeStartupStream_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "mdprof_cgi.m"
        break;
#line 446 "mdprof_cgi.m"
      case (MR_Integer) 1:
#line 436 "mdprof_cgi.m"
        {
#line 436 "mdprof_cgi.m"
          MR_Word mdprof_cgi__StartupStreamRes_29;

#line 437 "mdprof_cgi.m"
          {
#line 437 "mdprof_cgi.m"
            mercury__io__open_output_4_p_0(mdprof_cgi__StartupFile_17, &mdprof_cgi__StartupStreamRes_29);
          }
#line 442 "mdprof_cgi.m"
          if (((MR_tag((MR_Word) mdprof_cgi__StartupStreamRes_29)) == (MR_mktag((MR_Integer) 1))))
#line 443 "mdprof_cgi.m"
            {
#line 444 "mdprof_cgi.m"
              {
#line 444 "mdprof_cgi.m"
                mercury__require__error_1_p_0((MR_String) "cannot create startup file");
#line 444 "mdprof_cgi.m"
                return;
              }
#line 443 "mdprof_cgi.m"
            }
#line 442 "mdprof_cgi.m"
          else
#line 439 "mdprof_cgi.m"
            {
#line 439 "mdprof_cgi.m"
              MR_Word mdprof_cgi__StartupStream0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__StartupStreamRes_29, (MR_Integer) 0)));

#line 440 "mdprof_cgi.m"
              {
#line 440 "mdprof_cgi.m"
                mdprof_cgi__MaybeStartupStream_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 440 "mdprof_cgi.m"
                MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeStartupStream_31, 0) = ((MR_Box) (mdprof_cgi__StartupStream0_30));
#line 440 "mdprof_cgi.m"
              }
#line 441 "mdprof_cgi.m"
              {
#line 441 "mdprof_cgi.m"
                timeout__register_file_for_cleanup_3_p_0(mdprof_cgi__StartupFile_17);
              }
#line 439 "mdprof_cgi.m"
            }
#line 436 "mdprof_cgi.m"
        }
#line 446 "mdprof_cgi.m"
        break;
#line 446 "mdprof_cgi.m"
    }
#line 450 "mdprof_cgi.m"
    {
#line 450 "mdprof_cgi.m"
      startup__read_and_startup_default_deep_options_9_p_0(mdprof_cgi__Machine_23, mdprof_cgi__ScriptName_24, mdprof_cgi__FileName_14, mdprof_cgi__Canonical_25, mdprof_cgi__MaybeStartupStream_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__StartupResult_33);
    }
#line 488 "mdprof_cgi.m"
    if (((MR_tag((MR_Word) mdprof_cgi__StartupResult_33)) == (MR_mktag((MR_Integer) 1))))
#line 489 "mdprof_cgi.m"
      {
#line 489 "mdprof_cgi.m"
        MR_String mdprof_cgi__Error_39 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__StartupResult_33, (MR_Integer) 0)));
#line 489 "mdprof_cgi.m"
        MR_String mdprof_cgi__V_95_95;

#line 490 "mdprof_cgi.m"
        {
#line 490 "mdprof_cgi.m"
          timeout__release_lock_4_p_0(mdprof_cgi__Debug_27, mdprof_cgi__MutexFile_18);
        }
#line 491 "mdprof_cgi.m"
        {
#line 491 "mdprof_cgi.m"
          timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_19);
        }
#line 492 "mdprof_cgi.m"
        {
#line 492 "mdprof_cgi.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 493 "mdprof_cgi.m"
        {
#line 493 "mdprof_cgi.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__Error_39, &mdprof_cgi__V_95_95);
        }
#line 493 "mdprof_cgi.m"
        {
#line 493 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0(mdprof_cgi__V_95_95);
        }
#line 493 "mdprof_cgi.m"
        {
#line 493 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 493 "mdprof_cgi.m"
          return;
        }
#line 489 "mdprof_cgi.m"
      }
#line 488 "mdprof_cgi.m"
    else
#line 453 "mdprof_cgi.m"
      {
#line 453 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Deep_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__StartupResult_33, (MR_Integer) 0)));
#line 453 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Pref_35;
#line 453 "mdprof_cgi.m"
        MR_String mdprof_cgi__HTML_36;

#line 454 "mdprof_cgi.m"
        {
#line 454 "mdprof_cgi.m"
          mdprof_cgi__Pref_35 = query__solidify_preference_2_f_0(mdprof_cgi__Deep_34, mdprof_cgi__PrefInd_13);
        }
#line 455 "mdprof_cgi.m"
        {
#line 455 "mdprof_cgi.m"
          query__try_exec_4_p_0(mdprof_cgi__Cmd_12, mdprof_cgi__Pref_35, mdprof_cgi__Deep_34, &mdprof_cgi__HTML_36);
        }
#line 462 "mdprof_cgi.m"
        if ((mdprof_cgi__MaybeStartupStream_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "mdprof_cgi.m"
          {
#line 463 "mdprof_cgi.m"
          }
#line 462 "mdprof_cgi.m"
        else
#line 457 "mdprof_cgi.m"
          {
#line 457 "mdprof_cgi.m"
            MR_Word mdprof_cgi__StartupStream1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeStartupStream_31, (MR_Integer) 0)));
#line 457 "mdprof_cgi.m"
            MR_String mdprof_cgi__V_86_86;

#line 458 "mdprof_cgi.m"
            {
#line 458 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_37, (MR_String) "query 0 output:\n");
            }
#line 458 "mdprof_cgi.m"
            {
#line 458 "mdprof_cgi.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__HTML_36, &mdprof_cgi__V_86_86);
            }
#line 458 "mdprof_cgi.m"
            {
#line 458 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_37, mdprof_cgi__V_86_86);
            }
#line 458 "mdprof_cgi.m"
            {
#line 458 "mdprof_cgi.m"
              mercury__io__write_string_4_p_0(mdprof_cgi__StartupStream1_37, (MR_String) "\n");
            }
#line 461 "mdprof_cgi.m"
            {
#line 461 "mdprof_cgi.m"
              mercury__io__flush_output_3_p_0(mdprof_cgi__StartupStream1_37);
            }
#line 457 "mdprof_cgi.m"
          }
#line 471 "mdprof_cgi.m"
#line 471 "mdprof_cgi.m"
        switch (mdprof_cgi__ServerProcess_26) {
#line 471 "mdprof_cgi.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 471 "mdprof_cgi.m"
          case (MR_Integer) 0:
#line 466 "mdprof_cgi.m"
            {
#line 468 "mdprof_cgi.m"
              {
#line 468 "mdprof_cgi.m"
                timeout__release_lock_4_p_0(mdprof_cgi__Debug_27, mdprof_cgi__MutexFile_18);
              }
#line 469 "mdprof_cgi.m"
              {
#line 469 "mdprof_cgi.m"
                timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_19);
              }
#line 470 "mdprof_cgi.m"
              {
#line 470 "mdprof_cgi.m"
                mercury__io__write_string_3_p_0(mdprof_cgi__HTML_36);
#line 470 "mdprof_cgi.m"
                return;
              }
#line 466 "mdprof_cgi.m"
            }
#line 471 "mdprof_cgi.m"
            break;
#line 471 "mdprof_cgi.m"
          case (MR_Integer) 1:
#line 472 "mdprof_cgi.m"
            {
#line 472 "mdprof_cgi.m"
              MR_Word mdprof_cgi__Success_38;

#line 473 "mdprof_cgi.m"
              {
#line 473 "mdprof_cgi.m"
                mdprof_cgi__make_pipes_4_p_0(mdprof_cgi__FileName_14, &mdprof_cgi__Success_38);
              }
#line 480 "mdprof_cgi.m"
#line 480 "mdprof_cgi.m"
              switch (mdprof_cgi__Success_38) {
#line 480 "mdprof_cgi.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 480 "mdprof_cgi.m"
                case (MR_Integer) 0:
#line 481 "mdprof_cgi.m"
                  {
#line 482 "mdprof_cgi.m"
                    {
#line 482 "mdprof_cgi.m"
                      timeout__release_lock_4_p_0(mdprof_cgi__Debug_27, mdprof_cgi__MutexFile_18);
                    }
#line 483 "mdprof_cgi.m"
                    {
#line 483 "mdprof_cgi.m"
                      timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_19);
                    }
#line 484 "mdprof_cgi.m"
                    {
#line 484 "mdprof_cgi.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
#line 485 "mdprof_cgi.m"
                    {
#line 485 "mdprof_cgi.m"
                      mercury__io__write_string_3_p_0((MR_String) "could not make pipes\n");
#line 485 "mdprof_cgi.m"
                      return;
                    }
#line 481 "mdprof_cgi.m"
                  }
#line 480 "mdprof_cgi.m"
                  break;
#line 480 "mdprof_cgi.m"
                case (MR_Integer) 1:
#line 475 "mdprof_cgi.m"
                  {
#line 476 "mdprof_cgi.m"
                    {
#line 476 "mdprof_cgi.m"
                      mercury__io__write_string_3_p_0(mdprof_cgi__HTML_36);
                    }
#line 477 "mdprof_cgi.m"
                    {
#line 477 "mdprof_cgi.m"
                      mercury__io__flush_output_2_p_0();
                    }
#line 478 "mdprof_cgi.m"
                    {
#line 478 "mdprof_cgi.m"
                      mdprof_cgi__start_server_9_p_0(mdprof_cgi__Options_20, mdprof_cgi__ToServerPipe_15, mdprof_cgi__FromServerPipe_16, mdprof_cgi__MaybeStartupStream_31, mdprof_cgi__MutexFile_18, mdprof_cgi__WantFile_19, mdprof_cgi__Deep_34);
#line 478 "mdprof_cgi.m"
                      return;
                    }
#line 475 "mdprof_cgi.m"
                  }
#line 480 "mdprof_cgi.m"
                  break;
#line 480 "mdprof_cgi.m"
              }
#line 472 "mdprof_cgi.m"
            }
#line 471 "mdprof_cgi.m"
            break;
#line 471 "mdprof_cgi.m"
        }
#line 453 "mdprof_cgi.m"
      }
#line 421 "mdprof_cgi.m"
  }
#line 416 "mdprof_cgi.m"
}

#line 366 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__handle_query_from_existing_server_9_p_0(
#line 366 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Cmd_10,
#line 366 "mdprof_cgi.m"
  MR_Word mdprof_cgi__PrefInd_11,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__ToServerPipe_12,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__FromServerPipe_13,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__MutexFile_14,
#line 366 "mdprof_cgi.m"
  MR_String mdprof_cgi__WantFile_15,
#line 366 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_16)
#line 366 "mdprof_cgi.m"
{
#line 371 "mdprof_cgi.m"
  {
#line 371 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 371 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Debug_18;
#line 371 "mdprof_cgi.m"
    MR_String mdprof_cgi__ResponseFileName_23;
#line 371 "mdprof_cgi.m"
    MR_String mdprof_cgi__CatCmd_24;
#line 371 "mdprof_cgi.m"
    MR_Word mdprof_cgi__V_44_44;
#line 371 "mdprof_cgi.m"
    MR_String mdprof_cgi__V_69_69;
#line 390 "mdprof_cgi.m"
    MR_Word mdprof_cgi__V_25_25;

#line 372 "mdprof_cgi.m"
    {
#line 372 "mdprof_cgi.m"
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, mdprof_cgi__Options_16, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_18);
    }
#line 385 "mdprof_cgi.m"
    {
#line 385 "mdprof_cgi.m"
      mdprof_cgi__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "mdprof_cgi.m"
      MR_hl_field(MR_mktag(0), mdprof_cgi__V_44_44, 0) = ((MR_Box) (mdprof_cgi__Cmd_10));
#line 385 "mdprof_cgi.m"
      MR_hl_field(MR_mktag(0), mdprof_cgi__V_44_44, 1) = ((MR_Box) (mdprof_cgi__PrefInd_11));
#line 385 "mdprof_cgi.m"
    }
#line 385 "mdprof_cgi.m"
    {
#line 385 "mdprof_cgi.m"
      interface__send_term_5_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_cmd_pref_0, mdprof_cgi__ToServerPipe_12, mdprof_cgi__Debug_18, ((MR_Box) (mdprof_cgi__V_44_44)));
    }
#line 386 "mdprof_cgi.m"
    {
#line 386 "mdprof_cgi.m"
      timeout__release_lock_4_p_0(mdprof_cgi__Debug_18, mdprof_cgi__MutexFile_14);
    }
#line 387 "mdprof_cgi.m"
    {
#line 387 "mdprof_cgi.m"
      timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_15);
    }
#line 388 "mdprof_cgi.m"
    {
#line 388 "mdprof_cgi.m"
      interface__recv_string_5_p_0(mdprof_cgi__FromServerPipe_13, mdprof_cgi__Debug_18, &mdprof_cgi__ResponseFileName_23);
    }
#line 389 "mdprof_cgi.m"
    {
#line 389 "mdprof_cgi.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__ResponseFileName_23, &mdprof_cgi__V_69_69);
    }
#line 389 "mdprof_cgi.m"
    {
#line 389 "mdprof_cgi.m"
      mdprof_cgi__CatCmd_24 = mercury__string__f_43_43_2_f_0((MR_String) "cat ", mdprof_cgi__V_69_69);
    }
#line 390 "mdprof_cgi.m"
    {
#line 390 "mdprof_cgi.m"
      mercury__io__call_system_4_p_0(mdprof_cgi__CatCmd_24, &mdprof_cgi__V_25_25);
    }
#line 408 "mdprof_cgi.m"
#line 408 "mdprof_cgi.m"
    switch (mdprof_cgi__Debug_18) {
#line 408 "mdprof_cgi.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 408 "mdprof_cgi.m"
      case (MR_Integer) 0:
#line 410 "mdprof_cgi.m"
        {
#line 410 "mdprof_cgi.m"
          MR_Word mdprof_cgi__V_32_32;

#line 410 "mdprof_cgi.m"
          {
#line 410 "mdprof_cgi.m"
            mercury__io__remove_file_4_p_0(mdprof_cgi__ResponseFileName_23, &mdprof_cgi__V_32_32);
          }
#line 410 "mdprof_cgi.m"
        }
#line 408 "mdprof_cgi.m"
        break;
#line 408 "mdprof_cgi.m"
      case (MR_Integer) 1:
#line 406 "mdprof_cgi.m"
        {
#line 406 "mdprof_cgi.m"
        }
#line 408 "mdprof_cgi.m"
        break;
#line 408 "mdprof_cgi.m"
    }
#line 371 "mdprof_cgi.m"
  }
#line 366 "mdprof_cgi.m"
}

#line 286 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_query_6_p_0(
#line 286 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Cmd0_7,
#line 286 "mdprof_cgi.m"
  MR_String mdprof_cgi__DeepFileName0_8,
#line 286 "mdprof_cgi.m"
  MR_Word mdprof_cgi__MaybePref_9,
#line 286 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options0_10)
#line 286 "mdprof_cgi.m"
{
#line 289 "mdprof_cgi.m"
  {
#line 289 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded = (mdprof_cgi__Cmd0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 289 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Cmd_12;
#line 289 "mdprof_cgi.m"
    MR_Word mdprof_cgi__PrefInd_14;
#line 289 "mdprof_cgi.m"
    MR_String mdprof_cgi__DeepFileName_16;
#line 289 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Options_17;
#line 313 "mdprof_cgi.m"
    MR_String mdprof_cgi__DeepFileNamePrime_15;
#line 317 "mdprof_cgi.m"
    MR_String mdprof_cgi___BaseFileName_18;

#line 298 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 297 "mdprof_cgi.m"
      mdprof_cgi__Cmd_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 298 "mdprof_cgi.m"
    else
#line 299 "mdprof_cgi.m"
      mdprof_cgi__Cmd_12 = mdprof_cgi__Cmd0_7;
#line 304 "mdprof_cgi.m"
    if ((mdprof_cgi__MaybePref_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "mdprof_cgi.m"
      mdprof_cgi__PrefInd_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 304 "mdprof_cgi.m"
    else
#line 302 "mdprof_cgi.m"
      {
#line 302 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Pref_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybePref_9, (MR_Integer) 0)));

#line 303 "mdprof_cgi.m"
        mdprof_cgi__PrefInd_14 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) mdprof_cgi__Pref_13);
#line 302 "mdprof_cgi.m"
      }
#line 309 "mdprof_cgi.m"
    {
#line 309 "mdprof_cgi.m"
      mdprof_cgi__succeeded = mercury__string__remove_suffix_3_p_0(mdprof_cgi__DeepFileName0_8, (MR_String) ".localhost", &mdprof_cgi__DeepFileNamePrime_15);
    }
#line 313 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 311 "mdprof_cgi.m"
      {
#line 311 "mdprof_cgi.m"
        mdprof_cgi__DeepFileName_16 = mdprof_cgi__DeepFileNamePrime_15;
#line 312 "mdprof_cgi.m"
        {
#line 312 "mdprof_cgi.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 8)), ((MR_Box) (MR_mkword(MR_mktag(1), &mdprof_cgi_scalar_common_4[2]))), mdprof_cgi__Options0_10, &mdprof_cgi__Options_17);
        }
#line 311 "mdprof_cgi.m"
      }
#line 313 "mdprof_cgi.m"
    else
#line 314 "mdprof_cgi.m"
      {
#line 314 "mdprof_cgi.m"
        mdprof_cgi__DeepFileName_16 = mdprof_cgi__DeepFileName0_8;
#line 315 "mdprof_cgi.m"
        mdprof_cgi__Options_17 = mdprof_cgi__Options0_10;
#line 314 "mdprof_cgi.m"
      }
#line 317 "mdprof_cgi.m"
    {
#line 317 "mdprof_cgi.m"
      mdprof_cgi__succeeded = mercury__string__remove_suffix_3_p_0(mdprof_cgi__DeepFileName_16, (MR_String) ".data", &mdprof_cgi___BaseFileName_18);
    }
#line 349 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 318 "mdprof_cgi.m"
      {
#line 318 "mdprof_cgi.m"
        MR_String mdprof_cgi__ToServerPipe_19;
#line 318 "mdprof_cgi.m"
        MR_String mdprof_cgi__FromServerPipe_20;
#line 318 "mdprof_cgi.m"
        MR_String mdprof_cgi__StartupFile_21;
#line 318 "mdprof_cgi.m"
        MR_String mdprof_cgi__MutexFile_22;
#line 318 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Debug_23;
#line 318 "mdprof_cgi.m"
        MR_String mdprof_cgi__WantFile_24;
#line 318 "mdprof_cgi.m"
        MR_Integer mdprof_cgi__FifoCount_25;

#line 318 "mdprof_cgi.m"
        {
#line 318 "mdprof_cgi.m"
          mdprof_cgi__ToServerPipe_19 = interface__to_server_pipe_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
#line 319 "mdprof_cgi.m"
        {
#line 319 "mdprof_cgi.m"
          mdprof_cgi__FromServerPipe_20 = interface__from_server_pipe_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
#line 320 "mdprof_cgi.m"
        {
#line 320 "mdprof_cgi.m"
          mdprof_cgi__StartupFile_21 = interface__server_startup_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
#line 321 "mdprof_cgi.m"
        {
#line 321 "mdprof_cgi.m"
          mdprof_cgi__MutexFile_22 = interface__mutex_file_name_1_f_0(mdprof_cgi__DeepFileName_16);
        }
#line 322 "mdprof_cgi.m"
        {
#line 322 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, mdprof_cgi__Options_17, ((MR_Box) ((MR_Integer) 2)), &mdprof_cgi__Debug_23);
        }
#line 323 "mdprof_cgi.m"
        {
#line 323 "mdprof_cgi.m"
          mdprof_cgi__WantFile_24 = interface__want_file_name_0_f_0();
        }
#line 324 "mdprof_cgi.m"
        {
#line 324 "mdprof_cgi.m"
          timeout__make_want_file_3_p_0(mdprof_cgi__WantFile_24);
        }
#line 325 "mdprof_cgi.m"
        {
#line 325 "mdprof_cgi.m"
          timeout__get_lock_4_p_0(mdprof_cgi__Debug_23, mdprof_cgi__MutexFile_22);
        }
#line 330 "mdprof_cgi.m"
#line 330 "mdprof_cgi.m"
        switch (mdprof_cgi__Debug_23) {
#line 330 "mdprof_cgi.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 330 "mdprof_cgi.m"
          case (MR_Integer) 0:
#line 331 "mdprof_cgi.m"
            {
#line 331 "mdprof_cgi.m"
              MR_String mdprof_cgi__V_36_36;
#line 331 "mdprof_cgi.m"
              MR_String mdprof_cgi__V_37_37;

#line 332 "mdprof_cgi.m"
              {
#line 332 "mdprof_cgi.m"
                mdprof_cgi__V_36_36 = interface__want_dir_0_f_0();
              }
#line 332 "mdprof_cgi.m"
              {
#line 332 "mdprof_cgi.m"
                mdprof_cgi__V_37_37 = interface__want_prefix_0_f_0();
              }
#line 332 "mdprof_cgi.m"
              {
#line 332 "mdprof_cgi.m"
                timeout__setup_signals_5_p_0(mdprof_cgi__MutexFile_22, mdprof_cgi__V_36_36, mdprof_cgi__V_37_37);
              }
#line 331 "mdprof_cgi.m"
            }
#line 330 "mdprof_cgi.m"
            break;
#line 330 "mdprof_cgi.m"
          case (MR_Integer) 1:
#line 327 "mdprof_cgi.m"
            {
#line 327 "mdprof_cgi.m"
            }
#line 330 "mdprof_cgi.m"
            break;
#line 330 "mdprof_cgi.m"
        }
#line 717 "mdprof_cgi.m"
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
#line 717 "mdprof_cgi.m"

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

#line 4963 "mdprof_cgi.c"

		;}
#undef MR_PROC_LABEL
	 mdprof_cgi__FifoCount_25  = FifoCount;
#line 717 "mdprof_cgi.m"
}
#line 335 "mdprof_cgi.m"
        mdprof_cgi__succeeded = (mdprof_cgi__FifoCount_25 == (MR_Integer) 0);
#line 339 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 336 "mdprof_cgi.m"
          {
#line 336 "mdprof_cgi.m"
            mdprof_cgi__handle_query_from_new_server_11_p_0(mdprof_cgi__Cmd_12, mdprof_cgi__PrefInd_14, mdprof_cgi__DeepFileName_16, mdprof_cgi__ToServerPipe_19, mdprof_cgi__FromServerPipe_20, mdprof_cgi__StartupFile_21, mdprof_cgi__MutexFile_22, mdprof_cgi__WantFile_24, mdprof_cgi__Options_17);
#line 336 "mdprof_cgi.m"
            return;
          }
#line 339 "mdprof_cgi.m"
        else
#line 343 "mdprof_cgi.m"
          {
#line 339 "mdprof_cgi.m"
            mdprof_cgi__succeeded = (mdprof_cgi__FifoCount_25 == (MR_Integer) 2);
#line 343 "mdprof_cgi.m"
            if (mdprof_cgi__succeeded)
#line 340 "mdprof_cgi.m"
              {
#line 340 "mdprof_cgi.m"
                mdprof_cgi__handle_query_from_existing_server_9_p_0(mdprof_cgi__Cmd_12, mdprof_cgi__PrefInd_14, mdprof_cgi__ToServerPipe_19, mdprof_cgi__FromServerPipe_20, mdprof_cgi__MutexFile_22, mdprof_cgi__WantFile_24, mdprof_cgi__Options_17);
#line 340 "mdprof_cgi.m"
                return;
              }
#line 343 "mdprof_cgi.m"
            else
#line 344 "mdprof_cgi.m"
              {
#line 344 "mdprof_cgi.m"
                {
#line 344 "mdprof_cgi.m"
                  timeout__release_lock_4_p_0(mdprof_cgi__Debug_23, mdprof_cgi__MutexFile_22);
                }
#line 345 "mdprof_cgi.m"
                {
#line 345 "mdprof_cgi.m"
                  timeout__remove_want_file_3_p_0(mdprof_cgi__WantFile_24);
                }
#line 346 "mdprof_cgi.m"
                {
#line 346 "mdprof_cgi.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 347 "mdprof_cgi.m"
                {
#line 347 "mdprof_cgi.m"
                  mercury__io__write_string_3_p_0((MR_String) "mdprof internal error: bad fifo count");
#line 347 "mdprof_cgi.m"
                  return;
                }
#line 344 "mdprof_cgi.m"
              }
#line 343 "mdprof_cgi.m"
          }
#line 318 "mdprof_cgi.m"
      }
#line 349 "mdprof_cgi.m"
    else
#line 350 "mdprof_cgi.m"
      {
#line 350 "mdprof_cgi.m"
        MR_String mdprof_cgi__V_65_65;

#line 350 "mdprof_cgi.m"
        {
#line 350 "mdprof_cgi.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 351 "mdprof_cgi.m"
        {
#line 351 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "<h3> Invalid file name ");
        }
#line 352 "mdprof_cgi.m"
        {
#line 352 "mdprof_cgi.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__DeepFileName_16, &mdprof_cgi__V_65_65);
        }
#line 352 "mdprof_cgi.m"
        {
#line 352 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0(mdprof_cgi__V_65_65);
        }
#line 351 "mdprof_cgi.m"
        {
#line 351 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) ".<h3>\n\n");
        }
#line 353 "mdprof_cgi.m"
        {
#line 353 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "Deep profiling data files must have a .data suffix, to allow the deep profiler to locate any related files.\n");
#line 353 "mdprof_cgi.m"
          return;
        }
#line 350 "mdprof_cgi.m"
      }
#line 289 "mdprof_cgi.m"
  }
#line 286 "mdprof_cgi.m"
}

#line 246 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_args_5_p_0(
#line 246 "mdprof_cgi.m"
  MR_String mdprof_cgi__ProgName_6,
#line 246 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Args_7,
#line 246 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Options_8)
#line 246 "mdprof_cgi.m"
{
#line 255 "mdprof_cgi.m"
  {
#line 255 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded = ((MR_tag((MR_Word) mdprof_cgi__Args_7)) == (MR_mktag((MR_Integer) 1)));
#line 255 "mdprof_cgi.m"
    MR_String mdprof_cgi__DeepFileName_10;
#line 250 "mdprof_cgi.m"
    MR_Word mdprof_cgi__V_14_14;

#line 250 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 250 "mdprof_cgi.m"
      {
#line 250 "mdprof_cgi.m"
        mdprof_cgi__DeepFileName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__Args_7, (MR_Integer) 0)));
#line 250 "mdprof_cgi.m"
        mdprof_cgi__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__Args_7, (MR_Integer) 1)));
#line 250 "mdprof_cgi.m"
        mdprof_cgi__succeeded = (mdprof_cgi__V_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "mdprof_cgi.m"
      }
#line 255 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 254 "mdprof_cgi.m"
      {
#line 254 "mdprof_cgi.m"
        MR_Word mdprof_cgi__TypeCtorInfo_20_48 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
#line 254 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_15_15;
#line 254 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Quit_33;
#line 254 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Root_34;
#line 254 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Modules_35;
#line 254 "mdprof_cgi.m"
        MR_Integer mdprof_cgi__CliqueNum_36;
#line 254 "mdprof_cgi.m"
        MR_Integer mdprof_cgi__ProcProcNum_37;

#line 891 "mdprof_cgi.m"
        {
#line 891 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 11)), &mdprof_cgi__Quit_33);
        }
#line 892 "mdprof_cgi.m"
        {
#line 892 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 12)), &mdprof_cgi__Root_34);
        }
#line 893 "mdprof_cgi.m"
        {
#line 893 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 9)), &mdprof_cgi__Modules_35);
        }
#line 894 "mdprof_cgi.m"
        {
#line 894 "mdprof_cgi.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 1)), &mdprof_cgi__CliqueNum_36);
        }
#line 895 "mdprof_cgi.m"
        {
#line 895 "mdprof_cgi.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_cgi__TypeCtorInfo_20_48, mdprof_cgi__Options_8, ((MR_Box) ((MR_Integer) 10)), &mdprof_cgi__ProcProcNum_37);
        }
#line 896 "mdprof_cgi.m"
        mdprof_cgi__succeeded = (mdprof_cgi__Root_34 == (MR_Integer) 1);
#line 898 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 897 "mdprof_cgi.m"
          {
#line 897 "mdprof_cgi.m"
            mdprof_cgi__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_4[1]);
#line 897 "mdprof_cgi.m"
          }
#line 898 "mdprof_cgi.m"
        else
#line 900 "mdprof_cgi.m"
          {
#line 898 "mdprof_cgi.m"
            mdprof_cgi__succeeded = (mdprof_cgi__Modules_35 == (MR_Integer) 1);
#line 900 "mdprof_cgi.m"
            if (mdprof_cgi__succeeded)
#line 899 "mdprof_cgi.m"
              mdprof_cgi__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 900 "mdprof_cgi.m"
            else
#line 902 "mdprof_cgi.m"
              {
#line 900 "mdprof_cgi.m"
                mdprof_cgi__succeeded = (mdprof_cgi__CliqueNum_36 > (MR_Integer) 0);
#line 902 "mdprof_cgi.m"
                if (mdprof_cgi__succeeded)
#line 901 "mdprof_cgi.m"
                  {
#line 901 "mdprof_cgi.m"
                    MR_Word mdprof_cgi__V_45_45 = (MR_Word) mdprof_cgi__CliqueNum_36;

#line 901 "mdprof_cgi.m"
                    {
#line 901 "mdprof_cgi.m"
                      mdprof_cgi__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "mdprof_cgi.m"
                      MR_hl_field(MR_mktag(3), mdprof_cgi__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 901 "mdprof_cgi.m"
                      MR_hl_field(MR_mktag(3), mdprof_cgi__V_15_15, 1) = ((MR_Box) (mdprof_cgi__V_45_45));
#line 901 "mdprof_cgi.m"
                    }
#line 901 "mdprof_cgi.m"
                  }
#line 902 "mdprof_cgi.m"
                else
#line 904 "mdprof_cgi.m"
                  {
#line 902 "mdprof_cgi.m"
                    mdprof_cgi__succeeded = (mdprof_cgi__ProcProcNum_37 > (MR_Integer) 0);
#line 904 "mdprof_cgi.m"
                    if (mdprof_cgi__succeeded)
#line 903 "mdprof_cgi.m"
                      {
#line 903 "mdprof_cgi.m"
                        MR_Word mdprof_cgi__V_47_47 = (MR_Word) mdprof_cgi__ProcProcNum_37;

#line 903 "mdprof_cgi.m"
                        {
#line 903 "mdprof_cgi.m"
                          mdprof_cgi__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "mdprof_cgi.m"
                          MR_hl_field(MR_mktag(3), mdprof_cgi__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 903 "mdprof_cgi.m"
                          MR_hl_field(MR_mktag(3), mdprof_cgi__V_15_15, 1) = ((MR_Box) (mdprof_cgi__V_47_47));
#line 903 "mdprof_cgi.m"
                        }
#line 903 "mdprof_cgi.m"
                      }
#line 904 "mdprof_cgi.m"
                    else
#line 906 "mdprof_cgi.m"
                      {
#line 904 "mdprof_cgi.m"
                        mdprof_cgi__succeeded = (mdprof_cgi__Quit_33 == (MR_Integer) 1);
#line 906 "mdprof_cgi.m"
                        if (mdprof_cgi__succeeded)
#line 905 "mdprof_cgi.m"
                          mdprof_cgi__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "mdprof_cgi.m"
                        else
#line 907 "mdprof_cgi.m"
                          mdprof_cgi__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 906 "mdprof_cgi.m"
                      }
#line 904 "mdprof_cgi.m"
                  }
#line 902 "mdprof_cgi.m"
              }
#line 900 "mdprof_cgi.m"
          }
#line 254 "mdprof_cgi.m"
        {
#line 254 "mdprof_cgi.m"
          mdprof_cgi__process_query_6_p_0(mdprof_cgi__V_15_15, mdprof_cgi__DeepFileName_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdprof_cgi__Options_8);
#line 254 "mdprof_cgi.m"
          return;
        }
#line 254 "mdprof_cgi.m"
      }
#line 255 "mdprof_cgi.m"
    else
#line 256 "mdprof_cgi.m"
      {
#line 256 "mdprof_cgi.m"
        MR_String mdprof_cgi__V_70_70;

#line 256 "mdprof_cgi.m"
        {
#line 256 "mdprof_cgi.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 239 "mdprof_cgi.m"
        {
#line 239 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "Usage: ");
        }
#line 239 "mdprof_cgi.m"
        {
#line 239 "mdprof_cgi.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__ProgName_6, &mdprof_cgi__V_70_70);
        }
#line 239 "mdprof_cgi.m"
        {
#line 239 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0(mdprof_cgi__V_70_70);
        }
#line 239 "mdprof_cgi.m"
        {
#line 239 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 240 "mdprof_cgi.m"
        {
#line 240 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "This program doesn\'t expect any arguments;\n");
        }
#line 241 "mdprof_cgi.m"
        {
#line 241 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "instead it decides what to do based on the\n");
        }
#line 242 "mdprof_cgi.m"
        {
#line 242 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "QUERY_STRING environment variable.\n");
#line 242 "mdprof_cgi.m"
          return;
        }
#line 256 "mdprof_cgi.m"
      }
#line 255 "mdprof_cgi.m"
  }
#line 246 "mdprof_cgi.m"
}

#line 233 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__write_help_message_3_p_0(
#line 233 "mdprof_cgi.m"
  MR_String mdprof_cgi__ProgName_4)
#line 233 "mdprof_cgi.m"
{
#line 235 "mdprof_cgi.m"
  {
#line 235 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 235 "mdprof_cgi.m"
    MR_String mdprof_cgi__V_25_25;

#line 239 "mdprof_cgi.m"
    {
#line 239 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) "Usage: ");
    }
#line 239 "mdprof_cgi.m"
    {
#line 239 "mdprof_cgi.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__ProgName_4, &mdprof_cgi__V_25_25);
    }
#line 239 "mdprof_cgi.m"
    {
#line 239 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0(mdprof_cgi__V_25_25);
    }
#line 239 "mdprof_cgi.m"
    {
#line 239 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 240 "mdprof_cgi.m"
    {
#line 240 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) "This program doesn\'t expect any arguments;\n");
    }
#line 241 "mdprof_cgi.m"
    {
#line 241 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) "instead it decides what to do based on the\n");
    }
#line 242 "mdprof_cgi.m"
    {
#line 242 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) "QUERY_STRING environment variable.\n");
#line 242 "mdprof_cgi.m"
      return;
    }
#line 235 "mdprof_cgi.m"
  }
#line 233 "mdprof_cgi.m"
}

#line 225 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__write_version_message_3_p_0(
#line 225 "mdprof_cgi.m"
  MR_String mdprof_cgi__ProgName_4)
#line 225 "mdprof_cgi.m"
{
#line 227 "mdprof_cgi.m"
  {
#line 227 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 227 "mdprof_cgi.m"
    MR_String mdprof_cgi__Version_6;
#line 227 "mdprof_cgi.m"
    MR_String mdprof_cgi__Fullarch_7;
#line 227 "mdprof_cgi.m"
    MR_String mdprof_cgi__V_23_23;
#line 227 "mdprof_cgi.m"
    MR_Word mdprof_cgi__V_29_29;
#line 227 "mdprof_cgi.m"
    MR_String mdprof_cgi__V_34_34;
#line 227 "mdprof_cgi.m"
    MR_String mdprof_cgi__V_44_44;

#line 228 "mdprof_cgi.m"
    {
#line 228 "mdprof_cgi.m"
      mercury__library__version_2_p_0(&mdprof_cgi__Version_6, &mdprof_cgi__Fullarch_7);
    }
#line 5392 "mdprof_cgi.c"
    mdprof_cgi__V_29_29 = (MR_Word) &mdprof_cgi_scalar_common_4[0];
#line 229 "mdprof_cgi.m"
    {
#line 229 "mdprof_cgi.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_cgi__V_29_29, mdprof_cgi__ProgName_4, &mdprof_cgi__V_23_23);
    }
#line 229 "mdprof_cgi.m"
    {
#line 229 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0(mdprof_cgi__V_23_23);
    }
#line 229 "mdprof_cgi.m"
    {
#line 229 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) ": Mercury deep profiler\n");
    }
#line 230 "mdprof_cgi.m"
    {
#line 230 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) "version: ");
    }
#line 231 "mdprof_cgi.m"
    {
#line 231 "mdprof_cgi.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_cgi__V_29_29, mdprof_cgi__Version_6, &mdprof_cgi__V_34_34);
    }
#line 231 "mdprof_cgi.m"
    {
#line 231 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0(mdprof_cgi__V_34_34);
    }
#line 230 "mdprof_cgi.m"
    {
#line 230 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) ", on ");
    }
#line 231 "mdprof_cgi.m"
    {
#line 231 "mdprof_cgi.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_cgi__V_29_29, mdprof_cgi__Fullarch_7, &mdprof_cgi__V_44_44);
    }
#line 231 "mdprof_cgi.m"
    {
#line 231 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0(mdprof_cgi__V_44_44);
    }
#line 230 "mdprof_cgi.m"
    {
#line 230 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 230 "mdprof_cgi.m"
      return;
    }
#line 227 "mdprof_cgi.m"
  }
#line 225 "mdprof_cgi.m"
}

#line 151 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__decode_input_lines_5_p_0(
#line 151 "mdprof_cgi.m"
  MR_Word mdprof_cgi__Decode_6,
#line 151 "mdprof_cgi.m"
  MR_Word mdprof_cgi__DecodeCmd_7,
#line 151 "mdprof_cgi.m"
  MR_Word mdprof_cgi__DecodePrefs_8)
#line 151 "mdprof_cgi.m"
{
#line 154 "mdprof_cgi.m"
  while (MR_TRUE)
#line 154 "mdprof_cgi.m"
    {
#line 154 "mdprof_cgi.m"
      /* tailcall optimized into a loop */
#line 154 "mdprof_cgi.m"
      {
#line 154 "mdprof_cgi.m"
        MR_bool mdprof_cgi__succeeded;
#line 154 "mdprof_cgi.m"
        MR_Word mdprof_cgi__LineResult_10;

#line 155 "mdprof_cgi.m"
        {
#line 155 "mdprof_cgi.m"
          mercury__io__read_line_as_string_3_p_0(&mdprof_cgi__LineResult_10);
        }
#line 213 "mdprof_cgi.m"
#line 213 "mdprof_cgi.m"
        switch (MR_tag((MR_Word) mdprof_cgi__LineResult_10)) {
#line 213 "mdprof_cgi.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 213 "mdprof_cgi.m"
          case (MR_Integer) 0:
#line 218 "mdprof_cgi.m"
            {
#line 218 "mdprof_cgi.m"
            }
#line 213 "mdprof_cgi.m"
            break;
#line 213 "mdprof_cgi.m"
          case (MR_Integer) 1:
#line 157 "mdprof_cgi.m"
            {
#line 157 "mdprof_cgi.m"
              MR_String mdprof_cgi__LineStr_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__LineResult_10, (MR_Integer) 0)));

#line 160 "mdprof_cgi.m"
#line 160 "mdprof_cgi.m"
              switch (mdprof_cgi__Decode_6) {
#line 160 "mdprof_cgi.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 160 "mdprof_cgi.m"
                case (MR_Integer) 0:
#line 159 "mdprof_cgi.m"
                  {
#line 159 "mdprof_cgi.m"
                  }
#line 160 "mdprof_cgi.m"
                  break;
#line 160 "mdprof_cgi.m"
                case (MR_Integer) 1:
#line 161 "mdprof_cgi.m"
                  {
#line 161 "mdprof_cgi.m"
                    MR_Word mdprof_cgi__MaybeQuery_12;

#line 162 "mdprof_cgi.m"
                    {
#line 162 "mdprof_cgi.m"
                      mercury__io__write_string_3_p_0((MR_String) "considering as query string:\n");
                    }
#line 163 "mdprof_cgi.m"
                    {
#line 163 "mdprof_cgi.m"
                      mdprof_cgi__MaybeQuery_12 = query__string_to_maybe_query_1_f_0(mdprof_cgi__LineStr_11);
                    }
#line 176 "mdprof_cgi.m"
                    if ((mdprof_cgi__MaybeQuery_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "mdprof_cgi.m"
                      {
#line 178 "mdprof_cgi.m"
                        {
#line 178 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "invalid query string: cannot split into components\n");
                        }
#line 177 "mdprof_cgi.m"
                      }
#line 176 "mdprof_cgi.m"
                    else
#line 166 "mdprof_cgi.m"
                      {
#line 166 "mdprof_cgi.m"
                        MR_Word mdprof_cgi__MaybeCmd_13;
#line 166 "mdprof_cgi.m"
                        MR_String mdprof_cgi__DeepFileName_14;
#line 166 "mdprof_cgi.m"
                        MR_Word mdprof_cgi__MaybePrefs_15;
#line 166 "mdprof_cgi.m"
                        MR_Word mdprof_cgi__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeQuery_12, (MR_Integer) 0)));
#line 166 "mdprof_cgi.m"
                        MR_String mdprof_cgi__V_76_76;

#line 165 "mdprof_cgi.m"
                        mdprof_cgi__MaybeCmd_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__V_36_36, (MR_Integer) 0)));
#line 165 "mdprof_cgi.m"
                        mdprof_cgi__DeepFileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__V_36_36, (MR_Integer) 1)));
#line 165 "mdprof_cgi.m"
                        mdprof_cgi__MaybePrefs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__V_36_36, (MR_Integer) 2)));
#line 167 "mdprof_cgi.m"
                        {
#line 167 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "Maybe Command:\n");
                        }
#line 168 "mdprof_cgi.m"
                        {
#line 168 "mdprof_cgi.m"
                          mercury__io__write_3_p_0((MR_Word) &mdprof_cgi_scalar_common_1[0], ((MR_Box) (mdprof_cgi__MaybeCmd_13)));
                        }
#line 169 "mdprof_cgi.m"
                        {
#line 169 "mdprof_cgi.m"
                          mercury__io__nl_2_p_0();
                        }
#line 170 "mdprof_cgi.m"
                        {
#line 170 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "Deep File Name: ");
                        }
#line 170 "mdprof_cgi.m"
                        {
#line 170 "mdprof_cgi.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__DeepFileName_14, &mdprof_cgi__V_76_76);
                        }
#line 170 "mdprof_cgi.m"
                        {
#line 170 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0(mdprof_cgi__V_76_76);
                        }
#line 170 "mdprof_cgi.m"
                        {
#line 170 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "\n");
                        }
#line 173 "mdprof_cgi.m"
                        {
#line 173 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "Maybe Preferences:\n");
                        }
#line 174 "mdprof_cgi.m"
                        {
#line 174 "mdprof_cgi.m"
                          mercury__io__write_3_p_0((MR_Word) &mdprof_cgi_scalar_common_1[1], ((MR_Box) (mdprof_cgi__MaybePrefs_15)));
                        }
#line 175 "mdprof_cgi.m"
                        {
#line 175 "mdprof_cgi.m"
                          mercury__io__nl_2_p_0();
                        }
#line 166 "mdprof_cgi.m"
                      }
#line 161 "mdprof_cgi.m"
                  }
#line 160 "mdprof_cgi.m"
                  break;
#line 160 "mdprof_cgi.m"
              }
#line 184 "mdprof_cgi.m"
#line 184 "mdprof_cgi.m"
              switch (mdprof_cgi__DecodeCmd_7) {
#line 184 "mdprof_cgi.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 184 "mdprof_cgi.m"
                case (MR_Integer) 0:
#line 183 "mdprof_cgi.m"
                  {
#line 183 "mdprof_cgi.m"
                  }
#line 184 "mdprof_cgi.m"
                  break;
#line 184 "mdprof_cgi.m"
                case (MR_Integer) 1:
#line 185 "mdprof_cgi.m"
                  {
#line 185 "mdprof_cgi.m"
                    MR_Word mdprof_cgi__MaybeCmd1_16;

#line 186 "mdprof_cgi.m"
                    {
#line 186 "mdprof_cgi.m"
                      mercury__io__write_string_3_p_0((MR_String) "considering as cmd string:\n");
                    }
#line 187 "mdprof_cgi.m"
                    {
#line 187 "mdprof_cgi.m"
                      mdprof_cgi__MaybeCmd1_16 = query__string_to_maybe_cmd_1_f_0(mdprof_cgi__LineStr_11);
                    }
#line 191 "mdprof_cgi.m"
                    if ((mdprof_cgi__MaybeCmd1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "mdprof_cgi.m"
                      {
#line 189 "mdprof_cgi.m"
                        MR_String mdprof_cgi__V_87_87;

#line 190 "mdprof_cgi.m"
                        {
#line 190 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "invalid command string ");
                        }
#line 190 "mdprof_cgi.m"
                        {
#line 190 "mdprof_cgi.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__LineStr_11, &mdprof_cgi__V_87_87);
                        }
#line 190 "mdprof_cgi.m"
                        {
#line 190 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0(mdprof_cgi__V_87_87);
                        }
#line 190 "mdprof_cgi.m"
                        {
#line 190 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "\n");
                        }
#line 189 "mdprof_cgi.m"
                      }
#line 191 "mdprof_cgi.m"
                    else
#line 192 "mdprof_cgi.m"
                      {
#line 192 "mdprof_cgi.m"
                        MR_Word mdprof_cgi__Cmd_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeCmd1_16, (MR_Integer) 0)));

#line 193 "mdprof_cgi.m"
                        {
#line 193 "mdprof_cgi.m"
                          mercury__io__write_3_p_0((MR_Word) &query__query__type_ctor_info_cmd_0, ((MR_Box) (mdprof_cgi__Cmd_17)));
                        }
#line 194 "mdprof_cgi.m"
                        {
#line 194 "mdprof_cgi.m"
                          mercury__io__nl_2_p_0();
                        }
#line 192 "mdprof_cgi.m"
                      }
#line 185 "mdprof_cgi.m"
                  }
#line 184 "mdprof_cgi.m"
                  break;
#line 184 "mdprof_cgi.m"
              }
#line 199 "mdprof_cgi.m"
#line 199 "mdprof_cgi.m"
              switch (mdprof_cgi__DecodePrefs_8) {
#line 199 "mdprof_cgi.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 199 "mdprof_cgi.m"
                case (MR_Integer) 0:
#line 198 "mdprof_cgi.m"
                  {
#line 198 "mdprof_cgi.m"
                  }
#line 199 "mdprof_cgi.m"
                  break;
#line 199 "mdprof_cgi.m"
                case (MR_Integer) 1:
#line 200 "mdprof_cgi.m"
                  {
#line 200 "mdprof_cgi.m"
                    MR_Word mdprof_cgi__MaybePref_18;

#line 201 "mdprof_cgi.m"
                    {
#line 201 "mdprof_cgi.m"
                      mercury__io__write_string_3_p_0((MR_String) "considering as preference string:\n");
                    }
#line 202 "mdprof_cgi.m"
                    {
#line 202 "mdprof_cgi.m"
                      mdprof_cgi__MaybePref_18 = query__string_to_maybe_pref_1_f_0(mdprof_cgi__LineStr_11);
                    }
#line 206 "mdprof_cgi.m"
                    if ((mdprof_cgi__MaybePref_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 204 "mdprof_cgi.m"
                      {
#line 204 "mdprof_cgi.m"
                        MR_String mdprof_cgi__V_98_98;

#line 205 "mdprof_cgi.m"
                        {
#line 205 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "invalid preferences string ");
                        }
#line 205 "mdprof_cgi.m"
                        {
#line 205 "mdprof_cgi.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__LineStr_11, &mdprof_cgi__V_98_98);
                        }
#line 205 "mdprof_cgi.m"
                        {
#line 205 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0(mdprof_cgi__V_98_98);
                        }
#line 205 "mdprof_cgi.m"
                        {
#line 205 "mdprof_cgi.m"
                          mercury__io__write_string_3_p_0((MR_String) "\n");
                        }
#line 204 "mdprof_cgi.m"
                      }
#line 206 "mdprof_cgi.m"
                    else
#line 207 "mdprof_cgi.m"
                      {
#line 207 "mdprof_cgi.m"
                        MR_Word mdprof_cgi__Pref_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybePref_18, (MR_Integer) 0)));

#line 208 "mdprof_cgi.m"
                        {
#line 208 "mdprof_cgi.m"
                          mercury__io__write_3_p_0((MR_Word) &query__query__type_ctor_info_preferences_0, ((MR_Box) (mdprof_cgi__Pref_19)));
                        }
#line 209 "mdprof_cgi.m"
                        {
#line 209 "mdprof_cgi.m"
                          mercury__io__nl_2_p_0();
                        }
#line 207 "mdprof_cgi.m"
                      }
#line 200 "mdprof_cgi.m"
                  }
#line 199 "mdprof_cgi.m"
                  break;
#line 199 "mdprof_cgi.m"
              }
#line 212 "mdprof_cgi.m"
              /* direct tailcall eliminated */
#line 212 "mdprof_cgi.m"
              {
#line 212 "mdprof_cgi.m"
              }
#line 212 "mdprof_cgi.m"
              continue;
#line 157 "mdprof_cgi.m"
            }
#line 213 "mdprof_cgi.m"
            break;
#line 213 "mdprof_cgi.m"
          case (MR_Integer) 2:
#line 214 "mdprof_cgi.m"
            {
#line 214 "mdprof_cgi.m"
              MR_Word mdprof_cgi__Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_cgi__LineResult_10, (MR_Integer) 0)));
#line 214 "mdprof_cgi.m"
              MR_String mdprof_cgi__Msg_21;
#line 214 "mdprof_cgi.m"
              MR_String mdprof_cgi__V_107_107;

#line 215 "mdprof_cgi.m"
              {
#line 215 "mdprof_cgi.m"
                mercury__io__error_message_2_p_0(mdprof_cgi__Error_20, &mdprof_cgi__Msg_21);
              }
#line 216 "mdprof_cgi.m"
              {
#line 216 "mdprof_cgi.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_cgi_scalar_common_4[0], mdprof_cgi__Msg_21, &mdprof_cgi__V_107_107);
              }
#line 216 "mdprof_cgi.m"
              {
#line 216 "mdprof_cgi.m"
                mercury__io__write_string_3_p_0(mdprof_cgi__V_107_107);
              }
#line 216 "mdprof_cgi.m"
              {
#line 216 "mdprof_cgi.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
#line 216 "mdprof_cgi.m"
                return;
              }
#line 214 "mdprof_cgi.m"
            }
#line 213 "mdprof_cgi.m"
            break;
#line 213 "mdprof_cgi.m"
        }
#line 154 "mdprof_cgi.m"
      }
#line 154 "mdprof_cgi.m"
      break;
#line 154 "mdprof_cgi.m"
    }
#line 151 "mdprof_cgi.m"
}

#line 103 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_3(
#line 103 "mdprof_cgi.m"
  void * mdprof_cgi__env_ptr_arg)
#line 103 "mdprof_cgi.m"
{
#line 103 "mdprof_cgi.m"
  {
#line 103 "mdprof_cgi.m"
    struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s * mdprof_cgi__env_ptr = (struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s *) mdprof_cgi__env_ptr_arg;

#line 103 "mdprof_cgi.m"
    *((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 103 "mdprof_cgi.m"
    *((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 103 "mdprof_cgi.m"
    {
#line 103 "mdprof_cgi.m"
      ((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__cont)((mdprof_cgi__env_ptr)->mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr);
#line 103 "mdprof_cgi.m"
      return;
    }
#line 103 "mdprof_cgi.m"
  }
#line 103 "mdprof_cgi.m"
}

#line 103 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0_4(
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2,
#line 103 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__cont,
#line 103 "mdprof_cgi.m"
  void * mdprof_cgi__cont_env_ptr)
#line 103 "mdprof_cgi.m"
{
#line 103 "mdprof_cgi.m"
  {
#line 103 "mdprof_cgi.m"
    struct mdprof_cgi__process_command_line_2_p_0_4_env_0_s mdprof_cgi__env;

#line 103 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_1 = mdprof_cgi__wrapper_arg_1;
#line 103 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__wrapper_arg_2 = mdprof_cgi__wrapper_arg_2;
#line 103 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__cont = mdprof_cgi__cont;
#line 103 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__cont_env_ptr = mdprof_cgi__cont_env_ptr;
#line 103 "mdprof_cgi.m"
    {
#line 103 "mdprof_cgi.m"
      MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;

#line 103 "mdprof_cgi.m"
      {
#line 103 "mdprof_cgi.m"
        mdprof_cgi__defaults_2_p_0(&(mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_cgi__env).mdprof_cgi__process_command_line_2_p_0_4_env_0__conv2_HeadVar__2_2, mdprof_cgi__process_command_line_2_p_0_3, &mdprof_cgi__env);
      }
#line 103 "mdprof_cgi.m"
    }
#line 103 "mdprof_cgi.m"
  }
#line 103 "mdprof_cgi.m"
}

#line 103 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_2(
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2)
#line 103 "mdprof_cgi.m"
{
#line 103 "mdprof_cgi.m"
  {
#line 103 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 103 "mdprof_cgi.m"
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
#line 103 "mdprof_cgi.m"
    MR_Word mdprof_cgi__conv1_HeadVar__2_2;

#line 103 "mdprof_cgi.m"
    {
#line 103 "mdprof_cgi.m"
      mdprof_cgi__succeeded = mdprof_cgi__long_2_p_0(((MR_String) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv1_HeadVar__2_2);
    }
#line 103 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 103 "mdprof_cgi.m"
      {
#line 103 "mdprof_cgi.m"
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv1_HeadVar__2_2));
#line 103 "mdprof_cgi.m"
        mdprof_cgi__succeeded = MR_TRUE;
#line 103 "mdprof_cgi.m"
      }
#line 103 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 103 "mdprof_cgi.m"
  }
#line 103 "mdprof_cgi.m"
}

#line 103 "mdprof_cgi.m"
static MR_bool MR_CALL 
mdprof_cgi__process_command_line_2_p_0_1(
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 103 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 103 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2)
#line 103 "mdprof_cgi.m"
{
#line 103 "mdprof_cgi.m"
  {
#line 103 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 103 "mdprof_cgi.m"
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
#line 103 "mdprof_cgi.m"
    MR_Word mdprof_cgi__conv0_HeadVar__2_2;

#line 103 "mdprof_cgi.m"
    {
#line 103 "mdprof_cgi.m"
      mdprof_cgi__succeeded = mdprof_cgi__short_2_p_0(((MR_Char) (MR_Word) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv0_HeadVar__2_2);
    }
#line 103 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 103 "mdprof_cgi.m"
      {
#line 103 "mdprof_cgi.m"
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__2_2));
#line 103 "mdprof_cgi.m"
        mdprof_cgi__succeeded = MR_TRUE;
#line 103 "mdprof_cgi.m"
      }
#line 103 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 103 "mdprof_cgi.m"
  }
#line 103 "mdprof_cgi.m"
}

#line 93 "mdprof_cgi.m"
static void MR_CALL 
mdprof_cgi__process_command_line_2_p_0(void)
#line 93 "mdprof_cgi.m"
{
#line 95 "mdprof_cgi.m"
  {
#line 95 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 95 "mdprof_cgi.m"
    MR_Word mdprof_cgi__TypeCtorInfo_60_60;
#line 95 "mdprof_cgi.m"
    MR_String mdprof_cgi__ProgName_4;
#line 95 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Args0_5;
#line 95 "mdprof_cgi.m"
    MR_Word mdprof_cgi__Args_7;
#line 95 "mdprof_cgi.m"
    MR_Word mdprof_cgi__MaybeOptions_8;

#line 96 "mdprof_cgi.m"
    {
#line 96 "mdprof_cgi.m"
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_cgi", &mdprof_cgi__ProgName_4);
    }
#line 97 "mdprof_cgi.m"
    {
#line 97 "mdprof_cgi.m"
      mercury__io__command_line_arguments_3_p_0(&mdprof_cgi__Args0_5);
    }
#line 6035 "mdprof_cgi.c"
    mdprof_cgi__TypeCtorInfo_60_60 = (MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0;
#line 103 "mdprof_cgi.m"
    {
#line 103 "mdprof_cgi.m"
      mercury__getopt__process_options_4_p_0(mdprof_cgi__TypeCtorInfo_60_60, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_2[8]), mdprof_cgi__Args0_5, &mdprof_cgi__Args_7, &mdprof_cgi__MaybeOptions_8);
    }
#line 144 "mdprof_cgi.m"
    if (((MR_tag((MR_Word) mdprof_cgi__MaybeOptions_8)) == (MR_mktag((MR_Integer) 1))))
#line 145 "mdprof_cgi.m"
      {
#line 145 "mdprof_cgi.m"
        MR_String mdprof_cgi__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeOptions_8, (MR_Integer) 0)));
#line 145 "mdprof_cgi.m"
        MR_String mdprof_cgi__V_62_62;
#line 145 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_68_68;
#line 145 "mdprof_cgi.m"
        MR_String mdprof_cgi__V_72_72;

#line 146 "mdprof_cgi.m"
        {
#line 146 "mdprof_cgi.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 6060 "mdprof_cgi.c"
        mdprof_cgi__V_68_68 = (MR_Word) &mdprof_cgi_scalar_common_4[0];
#line 148 "mdprof_cgi.m"
        {
#line 148 "mdprof_cgi.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_cgi__V_68_68, mdprof_cgi__ProgName_4, &mdprof_cgi__V_62_62);
        }
#line 148 "mdprof_cgi.m"
        {
#line 148 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0(mdprof_cgi__V_62_62);
        }
#line 147 "mdprof_cgi.m"
        {
#line 147 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) ": error parsing options: ");
        }
#line 148 "mdprof_cgi.m"
        {
#line 148 "mdprof_cgi.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_cgi__V_68_68, mdprof_cgi__Msg_15, &mdprof_cgi__V_72_72);
        }
#line 148 "mdprof_cgi.m"
        {
#line 148 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0(mdprof_cgi__V_72_72);
        }
#line 147 "mdprof_cgi.m"
        {
#line 147 "mdprof_cgi.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 147 "mdprof_cgi.m"
          return;
        }
#line 145 "mdprof_cgi.m"
      }
#line 144 "mdprof_cgi.m"
    else
#line 106 "mdprof_cgi.m"
      {
#line 106 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Options_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeOptions_8, (MR_Integer) 0)));
#line 106 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Help_10;
#line 106 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Version_11;
#line 106 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Decode_12;
#line 106 "mdprof_cgi.m"
        MR_Word mdprof_cgi__DecodeCmd_13;
#line 106 "mdprof_cgi.m"
        MR_Word mdprof_cgi__DecodePrefs_14;

#line 107 "mdprof_cgi.m"
        {
#line 107 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 7)), &mdprof_cgi__Help_10);
        }
#line 108 "mdprof_cgi.m"
        {
#line 108 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 17)), &mdprof_cgi__Version_11);
        }
#line 109 "mdprof_cgi.m"
        {
#line 109 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 3)), &mdprof_cgi__Decode_12);
        }
#line 110 "mdprof_cgi.m"
        {
#line 110 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 4)), &mdprof_cgi__DecodeCmd_13);
        }
#line 111 "mdprof_cgi.m"
        {
#line 111 "mdprof_cgi.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_cgi__TypeCtorInfo_60_60, mdprof_cgi__Options_9, ((MR_Box) ((MR_Integer) 5)), &mdprof_cgi__DecodePrefs_14);
        }
#line 115 "mdprof_cgi.m"
#line 115 "mdprof_cgi.m"
        switch (mdprof_cgi__Help_10) {
#line 115 "mdprof_cgi.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 115 "mdprof_cgi.m"
          case (MR_Integer) 0:
#line 116 "mdprof_cgi.m"
            {
#line 116 "mdprof_cgi.m"
            }
#line 115 "mdprof_cgi.m"
            break;
#line 115 "mdprof_cgi.m"
          case (MR_Integer) 1:
#line 114 "mdprof_cgi.m"
            {
#line 114 "mdprof_cgi.m"
              mdprof_cgi__write_help_message_3_p_0(mdprof_cgi__ProgName_4);
            }
#line 115 "mdprof_cgi.m"
            break;
#line 115 "mdprof_cgi.m"
        }
#line 121 "mdprof_cgi.m"
#line 121 "mdprof_cgi.m"
        switch (mdprof_cgi__Version_11) {
#line 121 "mdprof_cgi.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 121 "mdprof_cgi.m"
          case (MR_Integer) 0:
#line 122 "mdprof_cgi.m"
            {
#line 122 "mdprof_cgi.m"
            }
#line 121 "mdprof_cgi.m"
            break;
#line 121 "mdprof_cgi.m"
          case (MR_Integer) 1:
#line 120 "mdprof_cgi.m"
            {
#line 120 "mdprof_cgi.m"
              mdprof_cgi__write_version_message_3_p_0(mdprof_cgi__ProgName_4);
            }
#line 121 "mdprof_cgi.m"
            break;
#line 121 "mdprof_cgi.m"
        }
#line 125 "mdprof_cgi.m"
        mdprof_cgi__succeeded = (mdprof_cgi__Decode_12 == (MR_Integer) 0);
#line 125 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 125 "mdprof_cgi.m"
          {
#line 126 "mdprof_cgi.m"
            mdprof_cgi__succeeded = (mdprof_cgi__DecodeCmd_13 == (MR_Integer) 0);
#line 125 "mdprof_cgi.m"
            if (mdprof_cgi__succeeded)
#line 127 "mdprof_cgi.m"
              mdprof_cgi__succeeded = (mdprof_cgi__DecodePrefs_14 == (MR_Integer) 0);
#line 125 "mdprof_cgi.m"
          }
#line 130 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 130 "mdprof_cgi.m"
          {
#line 130 "mdprof_cgi.m"
          }
#line 130 "mdprof_cgi.m"
        else
#line 131 "mdprof_cgi.m"
          {
#line 131 "mdprof_cgi.m"
            mdprof_cgi__decode_input_lines_5_p_0(mdprof_cgi__Decode_12, mdprof_cgi__DecodeCmd_13, mdprof_cgi__DecodePrefs_14);
          }
#line 134 "mdprof_cgi.m"
        mdprof_cgi__succeeded = (mdprof_cgi__Help_10 == (MR_Integer) 0);
#line 134 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 134 "mdprof_cgi.m"
          {
#line 135 "mdprof_cgi.m"
            mdprof_cgi__succeeded = (mdprof_cgi__Version_11 == (MR_Integer) 0);
#line 134 "mdprof_cgi.m"
            if (mdprof_cgi__succeeded)
#line 134 "mdprof_cgi.m"
              {
#line 136 "mdprof_cgi.m"
                mdprof_cgi__succeeded = (mdprof_cgi__Decode_12 == (MR_Integer) 0);
#line 134 "mdprof_cgi.m"
                if (mdprof_cgi__succeeded)
#line 134 "mdprof_cgi.m"
                  {
#line 137 "mdprof_cgi.m"
                    mdprof_cgi__succeeded = (mdprof_cgi__DecodeCmd_13 == (MR_Integer) 0);
#line 134 "mdprof_cgi.m"
                    if (mdprof_cgi__succeeded)
#line 138 "mdprof_cgi.m"
                      mdprof_cgi__succeeded = (mdprof_cgi__DecodePrefs_14 == (MR_Integer) 0);
#line 134 "mdprof_cgi.m"
                  }
#line 134 "mdprof_cgi.m"
              }
#line 134 "mdprof_cgi.m"
          }
#line 141 "mdprof_cgi.m"
        if (mdprof_cgi__succeeded)
#line 140 "mdprof_cgi.m"
          {
#line 140 "mdprof_cgi.m"
            mdprof_cgi__process_args_5_p_0(mdprof_cgi__ProgName_4, mdprof_cgi__Args_7, mdprof_cgi__Options_9);
#line 140 "mdprof_cgi.m"
            return;
          }
#line 141 "mdprof_cgi.m"
        else
#line 141 "mdprof_cgi.m"
          {
#line 141 "mdprof_cgi.m"
          }
#line 106 "mdprof_cgi.m"
      }
#line 95 "mdprof_cgi.m"
  }
#line 93 "mdprof_cgi.m"
}

#line 64 "mdprof_cgi.m"
static void MR_CALL 
main_2_p_0_3(
#line 64 "mdprof_cgi.m"
  void * mdprof_cgi__env_ptr_arg)
#line 64 "mdprof_cgi.m"
{
#line 64 "mdprof_cgi.m"
  {
#line 64 "mdprof_cgi.m"
    struct mdprof_cgi__main_2_p_0_4_env_0_s * mdprof_cgi__env_ptr = (struct mdprof_cgi__main_2_p_0_4_env_0_s *) mdprof_cgi__env_ptr_arg;

#line 64 "mdprof_cgi.m"
    *((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 64 "mdprof_cgi.m"
    *((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 64 "mdprof_cgi.m"
    {
#line 64 "mdprof_cgi.m"
      ((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont)((mdprof_cgi__env_ptr)->mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr);
#line 64 "mdprof_cgi.m"
      return;
    }
#line 64 "mdprof_cgi.m"
  }
#line 64 "mdprof_cgi.m"
}

#line 64 "mdprof_cgi.m"
static void MR_CALL 
main_2_p_0_4(
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_1,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2,
#line 64 "mdprof_cgi.m"
  MR_Cont mdprof_cgi__cont,
#line 64 "mdprof_cgi.m"
  void * mdprof_cgi__cont_env_ptr)
#line 64 "mdprof_cgi.m"
{
#line 64 "mdprof_cgi.m"
  {
#line 64 "mdprof_cgi.m"
    struct mdprof_cgi__main_2_p_0_4_env_0_s mdprof_cgi__env;

#line 64 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_cgi__wrapper_arg_1;
#line 64 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_cgi__wrapper_arg_2;
#line 64 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__cont = mdprof_cgi__cont;
#line 64 "mdprof_cgi.m"
    (mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__cont_env_ptr = mdprof_cgi__cont_env_ptr;
#line 64 "mdprof_cgi.m"
    {
#line 64 "mdprof_cgi.m"
      MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;

#line 64 "mdprof_cgi.m"
      {
#line 64 "mdprof_cgi.m"
        mdprof_cgi__defaults_2_p_0(&(mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_cgi__env).mdprof_cgi__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_cgi__env);
      }
#line 64 "mdprof_cgi.m"
    }
#line 64 "mdprof_cgi.m"
  }
#line 64 "mdprof_cgi.m"
}

#line 64 "mdprof_cgi.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2)
#line 64 "mdprof_cgi.m"
{
#line 64 "mdprof_cgi.m"
  {
#line 64 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 64 "mdprof_cgi.m"
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
#line 64 "mdprof_cgi.m"
    MR_Word mdprof_cgi__conv1_HeadVar__2_2;

#line 64 "mdprof_cgi.m"
    {
#line 64 "mdprof_cgi.m"
      mdprof_cgi__succeeded = mdprof_cgi__long_2_p_0(((MR_String) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv1_HeadVar__2_2);
    }
#line 64 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 64 "mdprof_cgi.m"
      {
#line 64 "mdprof_cgi.m"
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv1_HeadVar__2_2));
#line 64 "mdprof_cgi.m"
        mdprof_cgi__succeeded = MR_TRUE;
#line 64 "mdprof_cgi.m"
      }
#line 64 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 64 "mdprof_cgi.m"
  }
#line 64 "mdprof_cgi.m"
}

#line 64 "mdprof_cgi.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__closure_arg,
#line 64 "mdprof_cgi.m"
  MR_Box mdprof_cgi__wrapper_arg_1,
#line 64 "mdprof_cgi.m"
  MR_Box * mdprof_cgi__wrapper_arg_2)
#line 64 "mdprof_cgi.m"
{
#line 64 "mdprof_cgi.m"
  {
#line 64 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 64 "mdprof_cgi.m"
    MR_Box mdprof_cgi__closure = mdprof_cgi__closure_arg;
#line 64 "mdprof_cgi.m"
    MR_Word mdprof_cgi__conv0_HeadVar__2_2;

#line 64 "mdprof_cgi.m"
    {
#line 64 "mdprof_cgi.m"
      mdprof_cgi__succeeded = mdprof_cgi__short_2_p_0(((MR_Char) (MR_Word) mdprof_cgi__wrapper_arg_1), &mdprof_cgi__conv0_HeadVar__2_2);
    }
#line 64 "mdprof_cgi.m"
    if (mdprof_cgi__succeeded)
#line 64 "mdprof_cgi.m"
      {
#line 64 "mdprof_cgi.m"
        *mdprof_cgi__wrapper_arg_2 = ((MR_Box) (mdprof_cgi__conv0_HeadVar__2_2));
#line 64 "mdprof_cgi.m"
        mdprof_cgi__succeeded = MR_TRUE;
#line 64 "mdprof_cgi.m"
      }
#line 64 "mdprof_cgi.m"
    return mdprof_cgi__succeeded;
#line 64 "mdprof_cgi.m"
  }
#line 64 "mdprof_cgi.m"
}

#line 25 "mdprof_cgi.m"
void MR_CALL 
main_2_p_0(void)
#line 25 "mdprof_cgi.m"
{
#line 58 "mdprof_cgi.m"
  {
#line 58 "mdprof_cgi.m"
    MR_bool mdprof_cgi__succeeded;
#line 58 "mdprof_cgi.m"
    MR_Word mdprof_cgi__MaybeQueryString_4;

#line 277 "mdprof_cgi.m"
    {
#line 277 "mdprof_cgi.m"
      mercury__io__write_string_3_p_0((MR_String) "Content-type: text/html\n\n");
    }
#line 278 "mdprof_cgi.m"
    {
#line 278 "mdprof_cgi.m"
      mercury__io__flush_output_2_p_0();
    }
#line 60 "mdprof_cgi.m"
    {
#line 60 "mdprof_cgi.m"
      mercury__io__get_environment_var_4_p_0((MR_String) "QUERY_STRING", &mdprof_cgi__MaybeQueryString_4);
    }
#line 88 "mdprof_cgi.m"
    if ((mdprof_cgi__MaybeQueryString_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 90 "mdprof_cgi.m"
      {
#line 90 "mdprof_cgi.m"
        mdprof_cgi__process_command_line_2_p_0();
#line 90 "mdprof_cgi.m"
        return;
      }
#line 88 "mdprof_cgi.m"
    else
#line 62 "mdprof_cgi.m"
      {
#line 62 "mdprof_cgi.m"
        MR_String mdprof_cgi__QueryString0_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeQueryString_4, (MR_Integer) 0)));
#line 62 "mdprof_cgi.m"
        MR_Word mdprof_cgi__MaybeOptions_7;
#line 62 "mdprof_cgi.m"
        MR_Word mdprof_cgi__Options_8;
#line 62 "mdprof_cgi.m"
        MR_Word mdprof_cgi__MaybeDeepQuery_10;
#line 63 "mdprof_cgi.m"
        MR_Word mdprof_cgi__V_6_6;

#line 63 "mdprof_cgi.m"
        {
#line 63 "mdprof_cgi.m"
          mercury__getopt__process_options_4_p_0((MR_Word) &mdprof_cgi__mdprof_cgi__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_cgi_scalar_common_2[4]), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_cgi__V_6_6, &mdprof_cgi__MaybeOptions_7);
        }
#line 67 "mdprof_cgi.m"
        if (((MR_tag((MR_Word) mdprof_cgi__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
#line 68 "mdprof_cgi.m"
          {
#line 69 "mdprof_cgi.m"
            {
#line 69 "mdprof_cgi.m"
              mercury__require__error_1_p_0((MR_String) "mdprof_cgi: error parsing empty command line");
#line 69 "mdprof_cgi.m"
              return;
            }
#line 68 "mdprof_cgi.m"
          }
#line 67 "mdprof_cgi.m"
        else
#line 66 "mdprof_cgi.m"
          mdprof_cgi__Options_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__MaybeOptions_7, (MR_Integer) 0)));
#line 71 "mdprof_cgi.m"
        {
#line 71 "mdprof_cgi.m"
          mdprof_cgi__MaybeDeepQuery_10 = query__string_to_maybe_query_1_f_0(mdprof_cgi__QueryString0_5);
        }
#line 82 "mdprof_cgi.m"
        if ((mdprof_cgi__MaybeDeepQuery_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 83 "mdprof_cgi.m"
          {
#line 84 "mdprof_cgi.m"
            {
#line 84 "mdprof_cgi.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 86 "mdprof_cgi.m"
            {
#line 86 "mdprof_cgi.m"
              mercury__io__write_string_3_p_0((MR_String) "Bad URL; expected filename \n");
#line 86 "mdprof_cgi.m"
              return;
            }
#line 83 "mdprof_cgi.m"
          }
#line 82 "mdprof_cgi.m"
        else
#line 73 "mdprof_cgi.m"
          {
#line 73 "mdprof_cgi.m"
            MR_Word mdprof_cgi__DeepQuery_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeDeepQuery_10, (MR_Integer) 0)));
#line 73 "mdprof_cgi.m"
            MR_Word mdprof_cgi__MaybeCmd_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__DeepQuery_11, (MR_Integer) 0)));
#line 73 "mdprof_cgi.m"
            MR_String mdprof_cgi__DeepFileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_cgi__DeepQuery_11, (MR_Integer) 1)));
#line 73 "mdprof_cgi.m"
            MR_Word mdprof_cgi__MaybePrefs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_cgi__DeepQuery_11, (MR_Integer) 2)));
#line 73 "mdprof_cgi.m"
            MR_Word mdprof_cgi__Cmd_15;

#line 77 "mdprof_cgi.m"
            if ((mdprof_cgi__MaybeCmd_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 79 "mdprof_cgi.m"
              {
#line 79 "mdprof_cgi.m"
                mdprof_cgi__Cmd_15 = query__default_command_0_f_0();
              }
#line 77 "mdprof_cgi.m"
            else
#line 76 "mdprof_cgi.m"
              mdprof_cgi__Cmd_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_cgi__MaybeCmd_12, (MR_Integer) 0)));
#line 81 "mdprof_cgi.m"
            {
#line 81 "mdprof_cgi.m"
              mdprof_cgi__process_query_6_p_0(mdprof_cgi__Cmd_15, mdprof_cgi__DeepFileName_13, mdprof_cgi__MaybePrefs_14, mdprof_cgi__Options_8);
#line 81 "mdprof_cgi.m"
              return;
            }
#line 73 "mdprof_cgi.m"
          }
#line 62 "mdprof_cgi.m"
      }
#line 58 "mdprof_cgi.m"
  }
#line 25 "mdprof_cgi.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_cgi. */
