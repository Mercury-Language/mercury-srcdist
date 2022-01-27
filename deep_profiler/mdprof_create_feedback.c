/*
** Automatically generated from `mdprof_create_feedback.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module mdprof_create_feedback. */
/* :- implementation. */

/*
INIT mercury__mdprof_create_feedback__init
ENDINIT
*/

#include "mdprof_create_feedback.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "conf.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dump.mih"
#include "enum.mih"
#include "exclude.mih"
#include "float.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "message.mih"
#include "ops.mih"
#include "pair.mih"
#include "parsing_utils.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "startup.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_reports.mih"
#include "mdprof_fb.automatic_parallelism.autopar_search_callgraph.mih"



#line 65 "mdprof_create_feedback.m"
struct mdprof_create_feedback__main_2_p_0_4_env_0_s {
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_1;
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_2;
#line 65 "mdprof_create_feedback.m"
  MR_Cont mdprof_create_feedback__main_2_p_0_4_env_0__cont;
#line 65 "mdprof_create_feedback.m"
  void * mdprof_create_feedback__main_2_p_0_4_env_0__cont_env_ptr;
#line 65 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 65 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 65 "mdprof_create_feedback.m"
};


#line 109 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0;

#line 112 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1;

#line 115 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_value_ordered_maybe_found_error_0[2];

#line 118 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_maybe_found_error_0[2];

#line 121 "mdprof_create_feedback.c"
static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_maybe_found_error_0[2];

#line 124 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_0;

#line 127 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_1;

#line 130 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_2;

#line 133 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_3;

#line 136 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_4;

#line 139 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_5;

#line 142 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_6;

#line 145 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_7;

#line 148 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_8;

#line 151 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_9;

#line 154 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_10;

#line 157 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_11;

#line 160 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_12;

#line 163 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_13;

#line 166 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_14;

#line 169 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_15;

#line 172 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_16;

#line 175 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_17;

#line 178 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_18;

#line 181 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_19;

#line 184 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_20;

#line 187 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_value_ordered_option_0[21];

#line 190 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_option_0[21];

#line 193 "mdprof_create_feedback.c"
static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_option_0[21];

#line 196 "mdprof_create_feedback.c"
static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_requested_feedback_info_0[1];

#line 199 "mdprof_create_feedback.c"
static const MR_FA_TypeInfo_Struct1 mdprof_create_feedback__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0;

#line 202 "mdprof_create_feedback.c"
static const MR_NotagFunctorDesc mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0;

#line 205 "mdprof_create_feedback.c"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0_10001(
#line 208 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 210 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2);

#line 213 "mdprof_create_feedback.c"
static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0_10001(
#line 216 "mdprof_create_feedback.c"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 218 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2,
#line 220 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_3);

#line 223 "mdprof_create_feedback.c"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0_10001(
#line 226 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 228 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2);

#line 231 "mdprof_create_feedback.c"
static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0_10001(
#line 234 "mdprof_create_feedback.c"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 236 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2,
#line 238 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_3);

#line 241 "mdprof_create_feedback.c"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0_10001(
#line 244 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 246 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2);

#line 249 "mdprof_create_feedback.c"
static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0_10001(
#line 252 "mdprof_create_feedback.c"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 254 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2,
#line 256 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_3);

#line 509 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0(
#line 509 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2,
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__3_3);

#line 509 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0(
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__1_1,
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2);

#line 335 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0(
#line 335 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2,
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__3_3);

#line 335 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0(
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_1,
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2);

#line 514 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0(
#line 514 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2,
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__3_3);

#line 514 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0(
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_1,
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2);

#line 719 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__process_deep_to_feedback_5_p_0(
#line 719 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__RequestedFeedbackInfo_6,
#line 719 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Deep_7,
#line 719 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Messages_8,
#line 719 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__STATE_VARIABLE_Feedback_0_12,
#line 719 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__STATE_VARIABLE_Feedback_13);

#line 680 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_p_0(
#line 680 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__1_1,
#line 680 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__HeadVar__2_2,
#line 680 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__3_3);

#line 666 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__best_par_algorithm_parser_4_p_0_2(
#line 666 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 666 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 666 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 666 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_3,
#line 666 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_4);

#line 660 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__best_par_algorithm_parser_4_p_0_1(
#line 660 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 660 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 660 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 660 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_3,
#line 660 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_4);

#line 649 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__best_par_algorithm_parser_4_p_0(
#line 649 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Src_5,
#line 649 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Algorithm_6,
#line 649 "mdprof_create_feedback.m"
  MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_0_15,
#line 649 "mdprof_create_feedback.m"
  MR_Integer * mdprof_create_feedback__STATE_VARIABLE_PS_16);

#line 646 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0_1(
#line 646 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 646 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 646 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 646 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_3,
#line 646 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_4);

#line 641 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0(
#line 641 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__String_3,
#line 641 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Result_4);

#line 521 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__get_feedback_requests_6_p_0(
#line 521 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_7,
#line 521 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Options_8,
#line 521 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__STATE_VARIABLE_Error_42,
#line 521 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Requested_10);

#line 477 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__post_process_options_5_p_0(
#line 477 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_6,
#line 477 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__STATE_VARIABLE_Options_0_12,
#line 477 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__STATE_VARIABLE_Options_13);

#line 444 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__defaults_2_p_0(
#line 444 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 444 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__2_2,
#line 444 "mdprof_create_feedback.m"
  MR_Cont mdprof_create_feedback__cont,
#line 444 "mdprof_create_feedback.m"
  void * mdprof_create_feedback__cont_env_ptr);

#line 373 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__long_2_p_0(
#line 373 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__HeadVar__1_1,
#line 373 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__2_2);

#line 367 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__short_2_p_0(
#line 367 "mdprof_create_feedback.m"
  MR_Char mdprof_create_feedback__HeadVar__1_1,
#line 367 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__2_2);

#line 304 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__read_deep_file_5_p_0(
#line 304 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__Input_6,
#line 304 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Debug_7,
#line 304 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__MaybeDeep_8);

#line 294 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__write_version_message_3_p_0(
#line 294 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_4);

#line 289 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__write_help_message_3_p_0(
#line 289 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_4);

#line 108 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__generate_requested_feedback_7_p_0(
#line 108 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_8,
#line 108 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Options_9,
#line 108 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__InputFileName_10,
#line 108 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__OutputFileName_11,
#line 108 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__RequestedFeedbackInfo_12);

#line 65 "mdprof_create_feedback.m"
static void MR_CALL 
main_2_p_0_3(
#line 65 "mdprof_create_feedback.m"
  void * mdprof_create_feedback__env_ptr_arg);

#line 65 "mdprof_create_feedback.m"
static void MR_CALL 
main_2_p_0_4(
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 65 "mdprof_create_feedback.m"
  MR_Cont mdprof_create_feedback__cont,
#line 65 "mdprof_create_feedback.m"
  void * mdprof_create_feedback__cont_env_ptr);

#line 65 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2);

#line 65 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2);


static /* final */ const MR_Box mdprof_create_feedback_scalar_common_1[5][2];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_2[3][5];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_3[7][3];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_4[12][1];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_6[2][7];


#line 446 "mdprof_create_feedback.m"
/* sealed */ struct mdprof_create_feedback__vector_common_type_5_0_s {
#line 446 "mdprof_create_feedback.m"
  const MR_Word mdprof_create_feedback__vector_common_type_5_0__vct_5_f_0;
#line 446 "mdprof_create_feedback.m"
  const MR_Word mdprof_create_feedback__vector_common_type_5_0__vct_5_f_1;
#line 446 "mdprof_create_feedback.m"
};

static /* final */ const struct mdprof_create_feedback__vector_common_type_5_0_s mdprof_create_feedback_vector_common_5[21];



static /* final */ const MR_Box mdprof_create_feedback_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "8.0"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "1.01"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "overlap"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "complete-branches(1000)"))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_3[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_3[0])),
    ((MR_Box) (&mdprof_create_feedback_scalar_common_3[1])),
    ((MR_Box) (&mdprof_create_feedback_scalar_common_3[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_6[0])),
    ((MR_Box) (mdprof_create_feedback__parse_best_par_algorithm_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_6[1])),
    ((MR_Box) (mdprof_create_feedback__best_par_algorithm_parser_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_6[1])),
    ((MR_Box) (mdprof_create_feedback__best_par_algorithm_parser_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_4[12][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1000))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 200))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 2000))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct mdprof_create_feedback__vector_common_type_5_0_s mdprof_create_feedback_vector_common_5[21] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[0])
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[1])
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[0])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[0])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[0])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[0])
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[0])
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[1])
  },
  /* row 8 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[0])
  },
  /* row 9 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[2])
  },
  /* row 10 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[3])
  },
  /* row 11 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[2])
  },
  /* row 12 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[2])
  },
  /* row 13 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[4])
  },
  /* row 14 */
  {
    (MR_Integer) 14,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[3])
  },
  /* row 15 */
  {
    (MR_Integer) 15,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[5])
  },
  /* row 16 */
  {
    (MR_Integer) 16,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[5])
  },
  /* row 17 */
  {
    (MR_Integer) 18,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[6])
  },
  /* row 18 */
  {
    (MR_Integer) 17,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[2])
  },
  /* row 19 */
  {
    (MR_Integer) 19,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[3])
  },
  /* row 20 */
  {
    (MR_Integer) 20,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[4])
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 851 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0 = {
  (MR_String) "have_not_found_error",
  (MR_Integer) 0
};

#line 857 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1 = {
  (MR_String) "found_error",
  (MR_Integer) 1
};

#line 863 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_value_ordered_maybe_found_error_0[2] = {
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1
};

#line 869 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_maybe_found_error_0[2] = {
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0
};

#line 875 "mdprof_create_feedback.c"
static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_maybe_found_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 881 "mdprof_create_feedback.c"
const MR_TypeCtorInfo_Struct mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_maybe_found_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_create_feedback____Unify____maybe_found_error_0_0_10001)),
  ((MR_Box) (mdprof_create_feedback____Compare____maybe_found_error_0_0_10001)),
  (MR_String) "mdprof_create_feedback",
  (MR_String) "maybe_found_error",
  {
    mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_maybe_found_error_0
  },
  {
    mdprof_create_feedback__mdprof_create_feedback__enum_value_ordered_maybe_found_error_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_create_feedback__mdprof_create_feedback__functor_number_map_maybe_found_error_0
};

#line 902 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  (MR_Integer) 0
};

#line 908 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  (MR_Integer) 1
};

#line 914 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_2 = {
  (MR_String) "verbosity",
  (MR_Integer) 2
};

#line 920 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_3 = {
  (MR_String) "debug_read_profile",
  (MR_Integer) 3
};

#line 926 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_4 = {
  (MR_String) "report",
  (MR_Integer) 4
};

#line 932 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_5 = {
  (MR_String) "candidate_parallel_conjunctions",
  (MR_Integer) 5
};

#line 938 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_6 = {
  (MR_String) "implicit_parallelism",
  (MR_Integer) 6
};

#line 944 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_7 = {
  (MR_String) "desired_parallelism",
  (MR_Integer) 7
};

#line 950 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_8 = {
  (MR_String) "ipar_intermodule_var_use",
  (MR_Integer) 8
};

#line 956 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_9 = {
  (MR_String) "ipar_sparking_cost",
  (MR_Integer) 9
};

#line 962 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_10 = {
  (MR_String) "ipar_sparking_delay",
  (MR_Integer) 10
};

#line 968 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_11 = {
  (MR_String) "ipar_barrier_cost",
  (MR_Integer) 11
};

#line 974 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_12 = {
  (MR_String) "ipar_future_signal_cost",
  (MR_Integer) 12
};

#line 980 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_13 = {
  (MR_String) "ipar_future_wait_cost",
  (MR_Integer) 13
};

#line 986 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_14 = {
  (MR_String) "ipar_context_wakeup_delay",
  (MR_Integer) 14
};

#line 992 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_15 = {
  (MR_String) "ipar_clique_cost_threshold",
  (MR_Integer) 15
};

#line 998 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_16 = {
  (MR_String) "ipar_call_site_cost_threshold",
  (MR_Integer) 16
};

#line 1004 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_17 = {
  (MR_String) "ipar_speedup_threshold",
  (MR_Integer) 17
};

#line 1010 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_18 = {
  (MR_String) "ipar_dep_conjs",
  (MR_Integer) 18
};

#line 1016 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_19 = {
  (MR_String) "ipar_speedup_alg",
  (MR_Integer) 19
};

#line 1022 "mdprof_create_feedback.c"
static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_20 = {
  (MR_String) "ipar_best_par_alg",
  (MR_Integer) 20
};

#line 1028 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_value_ordered_option_0[21] = {
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_0,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_1,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_2,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_3,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_4,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_5,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_6,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_7,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_8,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_9,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_10,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_11,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_12,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_13,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_14,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_15,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_16,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_17,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_18,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_19,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_20
};

#line 1053 "mdprof_create_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_option_0[21] = {
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_5,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_3,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_7,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_0,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_6,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_11,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_20,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_16,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_15,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_14,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_18,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_12,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_13,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_8,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_9,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_10,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_19,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_17,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_4,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_2,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_1
};

#line 1078 "mdprof_create_feedback.c"
static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_option_0[21] = {
  (MR_Integer) 3,
  (MR_Integer) 20,
  (MR_Integer) 19,
  (MR_Integer) 1,
  (MR_Integer) 18,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 5,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 17,
  (MR_Integer) 10,
  (MR_Integer) 16,
  (MR_Integer) 6
};

#line 1103 "mdprof_create_feedback.c"
const MR_TypeCtorInfo_Struct mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_create_feedback____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_create_feedback____Compare____option_0_0_10001)),
  (MR_String) "mdprof_create_feedback",
  (MR_String) "option",
  {
    mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_option_0
  },
  {
    mdprof_create_feedback__mdprof_create_feedback__enum_value_ordered_option_0
  },
  (MR_Integer) 21,
  (MR_Integer) 4,
  mdprof_create_feedback__mdprof_create_feedback__functor_number_map_option_0
};

#line 1124 "mdprof_create_feedback.c"
static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_requested_feedback_info_0[1] = {
  (MR_Integer) 0
};

#line 1129 "mdprof_create_feedback.c"
static const MR_FA_TypeInfo_Struct1 mdprof_create_feedback__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0
  }
};

#line 1137 "mdprof_create_feedback.c"
static const MR_NotagFunctorDesc mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0 = {
  (MR_String) "requested_feedback_info",
  (MR_PseudoTypeInfo) &mdprof_create_feedback__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
  (MR_String) "rfi_parallel"
};

#line 1144 "mdprof_create_feedback.c"
const MR_TypeCtorInfo_Struct mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_requested_feedback_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdprof_create_feedback____Unify____requested_feedback_info_0_0_10001)),
  ((MR_Box) (mdprof_create_feedback____Compare____requested_feedback_info_0_0_10001)),
  (MR_String) "mdprof_create_feedback",
  (MR_String) "requested_feedback_info",
  {
    &mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0
  },
  {
    &mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdprof_create_feedback__mdprof_create_feedback__functor_number_map_requested_feedback_info_0
};

#line 1165 "mdprof_create_feedback.c"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0_10001(
#line 1168 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 1170 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2)
#line 1172 "mdprof_create_feedback.c"
{
#line 1174 "mdprof_create_feedback.c"
  {
#line 1176 "mdprof_create_feedback.c"
    MR_bool mdprof_create_feedback__succeeded;

#line 1179 "mdprof_create_feedback.c"
    {
#line 1181 "mdprof_create_feedback.c"
      mdprof_create_feedback__succeeded = mdprof_create_feedback____Unify____maybe_found_error_0_0(((MR_Word) mdprof_create_feedback__wrapper_arg_1), ((MR_Word) mdprof_create_feedback__wrapper_arg_2));
    }
#line 1184 "mdprof_create_feedback.c"
    return mdprof_create_feedback__succeeded;
#line 1186 "mdprof_create_feedback.c"
  }
#line 1188 "mdprof_create_feedback.c"
}

#line 1191 "mdprof_create_feedback.c"
static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0_10001(
#line 1194 "mdprof_create_feedback.c"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 1196 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2,
#line 1198 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_3)
#line 1200 "mdprof_create_feedback.c"
{
#line 1202 "mdprof_create_feedback.c"
  {
#line 1204 "mdprof_create_feedback.c"
    MR_Word mdprof_create_feedback__conv0_HeadVar__1_1;

#line 1207 "mdprof_create_feedback.c"
    {
#line 1209 "mdprof_create_feedback.c"
      mdprof_create_feedback____Compare____maybe_found_error_0_0(&mdprof_create_feedback__conv0_HeadVar__1_1, ((MR_Word) mdprof_create_feedback__wrapper_arg_2), ((MR_Word) mdprof_create_feedback__wrapper_arg_3));
    }
#line 1212 "mdprof_create_feedback.c"
    *mdprof_create_feedback__wrapper_arg_1 = ((MR_Box) (mdprof_create_feedback__conv0_HeadVar__1_1));
#line 1214 "mdprof_create_feedback.c"
  }
#line 1216 "mdprof_create_feedback.c"
}

#line 1219 "mdprof_create_feedback.c"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0_10001(
#line 1222 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 1224 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2)
#line 1226 "mdprof_create_feedback.c"
{
#line 1228 "mdprof_create_feedback.c"
  {
#line 1230 "mdprof_create_feedback.c"
    MR_bool mdprof_create_feedback__succeeded;

#line 1233 "mdprof_create_feedback.c"
    {
#line 1235 "mdprof_create_feedback.c"
      mdprof_create_feedback__succeeded = mdprof_create_feedback____Unify____option_0_0(((MR_Word) mdprof_create_feedback__wrapper_arg_1), ((MR_Word) mdprof_create_feedback__wrapper_arg_2));
    }
#line 1238 "mdprof_create_feedback.c"
    return mdprof_create_feedback__succeeded;
#line 1240 "mdprof_create_feedback.c"
  }
#line 1242 "mdprof_create_feedback.c"
}

#line 1245 "mdprof_create_feedback.c"
static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0_10001(
#line 1248 "mdprof_create_feedback.c"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 1250 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2,
#line 1252 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_3)
#line 1254 "mdprof_create_feedback.c"
{
#line 1256 "mdprof_create_feedback.c"
  {
#line 1258 "mdprof_create_feedback.c"
    MR_Word mdprof_create_feedback__conv0_HeadVar__1_1;

#line 1261 "mdprof_create_feedback.c"
    {
#line 1263 "mdprof_create_feedback.c"
      mdprof_create_feedback____Compare____option_0_0(&mdprof_create_feedback__conv0_HeadVar__1_1, ((MR_Word) mdprof_create_feedback__wrapper_arg_2), ((MR_Word) mdprof_create_feedback__wrapper_arg_3));
    }
#line 1266 "mdprof_create_feedback.c"
    *mdprof_create_feedback__wrapper_arg_1 = ((MR_Box) (mdprof_create_feedback__conv0_HeadVar__1_1));
#line 1268 "mdprof_create_feedback.c"
  }
#line 1270 "mdprof_create_feedback.c"
}

#line 1273 "mdprof_create_feedback.c"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0_10001(
#line 1276 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 1278 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2)
#line 1280 "mdprof_create_feedback.c"
{
#line 1282 "mdprof_create_feedback.c"
  {
#line 1284 "mdprof_create_feedback.c"
    MR_bool mdprof_create_feedback__succeeded;

#line 1287 "mdprof_create_feedback.c"
    {
#line 1289 "mdprof_create_feedback.c"
      mdprof_create_feedback__succeeded = mdprof_create_feedback____Unify____requested_feedback_info_0_0(((MR_Word) mdprof_create_feedback__wrapper_arg_1), ((MR_Word) mdprof_create_feedback__wrapper_arg_2));
    }
#line 1292 "mdprof_create_feedback.c"
    return mdprof_create_feedback__succeeded;
#line 1294 "mdprof_create_feedback.c"
  }
#line 1296 "mdprof_create_feedback.c"
}

#line 1299 "mdprof_create_feedback.c"
static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0_10001(
#line 1302 "mdprof_create_feedback.c"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 1304 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_2,
#line 1306 "mdprof_create_feedback.c"
  MR_Box mdprof_create_feedback__wrapper_arg_3)
#line 1308 "mdprof_create_feedback.c"
{
#line 1310 "mdprof_create_feedback.c"
  {
#line 1312 "mdprof_create_feedback.c"
    MR_Word mdprof_create_feedback__conv0_HeadVar__1_1;

#line 1315 "mdprof_create_feedback.c"
    {
#line 1317 "mdprof_create_feedback.c"
      mdprof_create_feedback____Compare____requested_feedback_info_0_0(&mdprof_create_feedback__conv0_HeadVar__1_1, ((MR_Word) mdprof_create_feedback__wrapper_arg_2), ((MR_Word) mdprof_create_feedback__wrapper_arg_3));
    }
#line 1320 "mdprof_create_feedback.c"
    *mdprof_create_feedback__wrapper_arg_1 = ((MR_Box) (mdprof_create_feedback__conv0_HeadVar__1_1));
#line 1322 "mdprof_create_feedback.c"
  }
#line 1324 "mdprof_create_feedback.c"
}

#line 509 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0(
#line 509 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2,
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__3_3)
#line 509 "mdprof_create_feedback.m"
{
#line 509 "mdprof_create_feedback.m"
  {
#line 509 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 509 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__CastX_6 = (MR_Integer) mdprof_create_feedback__HeadVar__2_2;
#line 509 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__CastY_7 = (MR_Integer) mdprof_create_feedback__HeadVar__3_3;

#line 509 "mdprof_create_feedback.m"
    mdprof_create_feedback__succeeded = (mdprof_create_feedback__CastX_6 == mdprof_create_feedback__CastY_7);
#line 509 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 1351 "mdprof_create_feedback.c"
      *mdprof_create_feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 509 "mdprof_create_feedback.m"
    else
#line 509 "mdprof_create_feedback.m"
      {
#line 509 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__V_4_4 = (MR_Word) mdprof_create_feedback__HeadVar__2_2;
#line 509 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__V_5_5 = (MR_Word) mdprof_create_feedback__HeadVar__3_3;

#line 509 "mdprof_create_feedback.m"
        {
#line 509 "mdprof_create_feedback.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdprof_create_feedback_scalar_common_1[0], mdprof_create_feedback__HeadVar__1_1, ((MR_Box) (mdprof_create_feedback__V_4_4)), ((MR_Box) (mdprof_create_feedback__V_5_5)));
#line 509 "mdprof_create_feedback.m"
          return;
        }
#line 509 "mdprof_create_feedback.m"
      }
#line 509 "mdprof_create_feedback.m"
  }
#line 509 "mdprof_create_feedback.m"
}

#line 509 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0(
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__1_1,
#line 509 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2)
#line 509 "mdprof_create_feedback.m"
{
#line 509 "mdprof_create_feedback.m"
  {
#line 509 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 509 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__CastX_5 = (MR_Integer) mdprof_create_feedback__HeadVar__1_1;
#line 509 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__CastY_6 = (MR_Integer) mdprof_create_feedback__HeadVar__2_2;

#line 509 "mdprof_create_feedback.m"
    mdprof_create_feedback__succeeded = (mdprof_create_feedback__CastX_5 == mdprof_create_feedback__CastY_6);
#line 509 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 509 "mdprof_create_feedback.m"
      mdprof_create_feedback__succeeded = MR_TRUE;
#line 509 "mdprof_create_feedback.m"
    else
#line 509 "mdprof_create_feedback.m"
      {
#line 509 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__V_3_3 = (MR_Word) mdprof_create_feedback__HeadVar__1_1;
#line 509 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__V_4_4 = (MR_Word) mdprof_create_feedback__HeadVar__2_2;

#line 1409 "mdprof_create_feedback.c"
        {
#line 1411 "mdprof_create_feedback.c"
          return mdprof_create_feedback__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_create_feedback_scalar_common_1[0], ((MR_Box) (mdprof_create_feedback__V_3_3)), ((MR_Box) (mdprof_create_feedback__V_4_4)));
        }
#line 509 "mdprof_create_feedback.m"
      }
#line 509 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 509 "mdprof_create_feedback.m"
  }
#line 509 "mdprof_create_feedback.m"
}

#line 335 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0(
#line 335 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2,
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__3_3)
#line 335 "mdprof_create_feedback.m"
{
#line 335 "mdprof_create_feedback.m"
  {
#line 335 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 335 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__Cast_HeadVar1_4 = (MR_Integer) mdprof_create_feedback__HeadVar__2_2;
#line 335 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__Cast_HeadVar2_5 = (MR_Integer) mdprof_create_feedback__HeadVar__3_3;

#line 335 "mdprof_create_feedback.m"
    {
#line 335 "mdprof_create_feedback.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_create_feedback__HeadVar__1_1, mdprof_create_feedback__Cast_HeadVar1_4, mdprof_create_feedback__Cast_HeadVar2_5);
#line 335 "mdprof_create_feedback.m"
      return;
    }
#line 335 "mdprof_create_feedback.m"
  }
#line 335 "mdprof_create_feedback.m"
}

#line 335 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0(
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_1,
#line 335 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2)
#line 335 "mdprof_create_feedback.m"
{
#line 1464 "mdprof_create_feedback.c"
  {
#line 1466 "mdprof_create_feedback.c"
    MR_bool mdprof_create_feedback__succeeded = (mdprof_create_feedback__HeadVar__2_1 == mdprof_create_feedback__HeadVar__2_2);

#line 1469 "mdprof_create_feedback.c"
    return mdprof_create_feedback__succeeded;
#line 1471 "mdprof_create_feedback.c"
  }
#line 335 "mdprof_create_feedback.m"
}

#line 514 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0(
#line 514 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2,
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__3_3)
#line 514 "mdprof_create_feedback.m"
{
#line 514 "mdprof_create_feedback.m"
  {
#line 514 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 514 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__Cast_HeadVar1_4 = (MR_Integer) mdprof_create_feedback__HeadVar__2_2;
#line 514 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__Cast_HeadVar2_5 = (MR_Integer) mdprof_create_feedback__HeadVar__3_3;

#line 514 "mdprof_create_feedback.m"
    {
#line 514 "mdprof_create_feedback.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_create_feedback__HeadVar__1_1, mdprof_create_feedback__Cast_HeadVar1_4, mdprof_create_feedback__Cast_HeadVar2_5);
#line 514 "mdprof_create_feedback.m"
      return;
    }
#line 514 "mdprof_create_feedback.m"
  }
#line 514 "mdprof_create_feedback.m"
}

#line 514 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0(
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_1,
#line 514 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__2_2)
#line 514 "mdprof_create_feedback.m"
{
#line 1517 "mdprof_create_feedback.c"
  {
#line 1519 "mdprof_create_feedback.c"
    MR_bool mdprof_create_feedback__succeeded = (mdprof_create_feedback__HeadVar__2_1 == mdprof_create_feedback__HeadVar__2_2);

#line 1522 "mdprof_create_feedback.c"
    return mdprof_create_feedback__succeeded;
#line 1524 "mdprof_create_feedback.c"
  }
#line 514 "mdprof_create_feedback.m"
}

#line 719 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__process_deep_to_feedback_5_p_0(
#line 719 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__RequestedFeedbackInfo_6,
#line 719 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Deep_7,
#line 719 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Messages_8,
#line 719 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__STATE_VARIABLE_Feedback_0_12,
#line 719 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__STATE_VARIABLE_Feedback_13)
#line 719 "mdprof_create_feedback.m"
{
#line 722 "mdprof_create_feedback.m"
  {
#line 722 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 722 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__MaybeAutoParOpts_10 = (MR_Word) mdprof_create_feedback__RequestedFeedbackInfo_6;

#line 727 "mdprof_create_feedback.m"
    if ((mdprof_create_feedback__MaybeAutoParOpts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "mdprof_create_feedback.m"
      {
#line 729 "mdprof_create_feedback.m"
        {
#line 729 "mdprof_create_feedback.m"
          *mdprof_create_feedback__Messages_8 = mercury__cord__empty_0_f_0((MR_Word) &message__message__type_ctor_info_message_0);
        }
#line 729 "mdprof_create_feedback.m"
        *mdprof_create_feedback__STATE_VARIABLE_Feedback_13 = mdprof_create_feedback__STATE_VARIABLE_Feedback_0_12;
#line 728 "mdprof_create_feedback.m"
      }
#line 727 "mdprof_create_feedback.m"
    else
#line 725 "mdprof_create_feedback.m"
      {
#line 725 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__AutoParOpts_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeAutoParOpts_10, (MR_Integer) 0)));

#line 726 "mdprof_create_feedback.m"
        {
#line 726 "mdprof_create_feedback.m"
          mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0(mdprof_create_feedback__AutoParOpts_11, mdprof_create_feedback__Deep_7, mdprof_create_feedback__Messages_8, mdprof_create_feedback__STATE_VARIABLE_Feedback_0_12, mdprof_create_feedback__STATE_VARIABLE_Feedback_13);
#line 726 "mdprof_create_feedback.m"
          return;
        }
#line 725 "mdprof_create_feedback.m"
      }
#line 722 "mdprof_create_feedback.m"
  }
#line 719 "mdprof_create_feedback.m"
}

#line 680 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_p_0(
#line 680 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__HeadVar__1_1,
#line 680 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__HeadVar__2_2,
#line 680 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__3_3)
#line 680 "mdprof_create_feedback.m"
{
#line 683 "mdprof_create_feedback.m"
  {
#line 683 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;

#line 683 "mdprof_create_feedback.m"
    if ((mdprof_create_feedback__HeadVar__1_1 == (MR_Integer) 0))
#line 683 "mdprof_create_feedback.m"
      {
#line 683 "mdprof_create_feedback.m"
        *mdprof_create_feedback__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 683 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 683 "mdprof_create_feedback.m"
      }
#line 683 "mdprof_create_feedback.m"
    else
#line 683 "mdprof_create_feedback.m"
      if ((strcmp(mdprof_create_feedback__HeadVar__2_2, (MR_String) "naive") == 0))
#line 684 "mdprof_create_feedback.m"
        {
#line 685 "mdprof_create_feedback.m"
          *mdprof_create_feedback__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[9]);
#line 684 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = MR_TRUE;
#line 684 "mdprof_create_feedback.m"
        }
#line 683 "mdprof_create_feedback.m"
      else
#line 683 "mdprof_create_feedback.m"
        if ((strcmp(mdprof_create_feedback__HeadVar__2_2, (MR_String) "overlap") == 0))
#line 688 "mdprof_create_feedback.m"
          {
#line 689 "mdprof_create_feedback.m"
            *mdprof_create_feedback__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[10]);
#line 688 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = MR_TRUE;
#line 688 "mdprof_create_feedback.m"
          }
#line 683 "mdprof_create_feedback.m"
        else
#line 683 "mdprof_create_feedback.m"
          if ((strcmp(mdprof_create_feedback__HeadVar__2_2, (MR_String) "num_vars") == 0))
#line 686 "mdprof_create_feedback.m"
            {
#line 687 "mdprof_create_feedback.m"
              *mdprof_create_feedback__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[11]);
#line 686 "mdprof_create_feedback.m"
              mdprof_create_feedback__succeeded = MR_TRUE;
#line 686 "mdprof_create_feedback.m"
            }
#line 683 "mdprof_create_feedback.m"
          else
#line 683 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = MR_FALSE;
#line 683 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 683 "mdprof_create_feedback.m"
  }
#line 680 "mdprof_create_feedback.m"
}

#line 666 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__best_par_algorithm_parser_4_p_0_2(
#line 666 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 666 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 666 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 666 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_3,
#line 666 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_4)
#line 666 "mdprof_create_feedback.m"
{
#line 666 "mdprof_create_feedback.m"
  {
#line 666 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 666 "mdprof_create_feedback.m"
    MR_Box mdprof_create_feedback__closure = mdprof_create_feedback__closure_arg;
#line 666 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__conv4_HeadVar__2_2;
#line 666 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__conv3_HeadVar__4_4;

#line 666 "mdprof_create_feedback.m"
    {
#line 666 "mdprof_create_feedback.m"
      mdprof_create_feedback__succeeded = mercury__parsing_utils__int_literal_4_p_0(((MR_Word) mdprof_create_feedback__wrapper_arg_1), &mdprof_create_feedback__conv4_HeadVar__2_2, ((MR_Integer) mdprof_create_feedback__wrapper_arg_3), &mdprof_create_feedback__conv3_HeadVar__4_4);
    }
#line 666 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 666 "mdprof_create_feedback.m"
      {
#line 666 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_create_feedback__conv4_HeadVar__2_2));
#line 666 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_4 = ((MR_Box) (mdprof_create_feedback__conv3_HeadVar__4_4));
#line 666 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 666 "mdprof_create_feedback.m"
      }
#line 666 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 666 "mdprof_create_feedback.m"
  }
#line 666 "mdprof_create_feedback.m"
}

#line 660 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__best_par_algorithm_parser_4_p_0_1(
#line 660 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 660 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 660 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 660 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_3,
#line 660 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_4)
#line 660 "mdprof_create_feedback.m"
{
#line 660 "mdprof_create_feedback.m"
  {
#line 660 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 660 "mdprof_create_feedback.m"
    MR_Box mdprof_create_feedback__closure = mdprof_create_feedback__closure_arg;
#line 660 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__conv1_HeadVar__2_2;
#line 660 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__conv0_HeadVar__4_4;

#line 660 "mdprof_create_feedback.m"
    {
#line 660 "mdprof_create_feedback.m"
      mdprof_create_feedback__succeeded = mercury__parsing_utils__int_literal_4_p_0(((MR_Word) mdprof_create_feedback__wrapper_arg_1), &mdprof_create_feedback__conv1_HeadVar__2_2, ((MR_Integer) mdprof_create_feedback__wrapper_arg_3), &mdprof_create_feedback__conv0_HeadVar__4_4);
    }
#line 660 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 660 "mdprof_create_feedback.m"
      {
#line 660 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_create_feedback__conv1_HeadVar__2_2));
#line 660 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_4 = ((MR_Box) (mdprof_create_feedback__conv0_HeadVar__4_4));
#line 660 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 660 "mdprof_create_feedback.m"
      }
#line 660 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 660 "mdprof_create_feedback.m"
  }
#line 660 "mdprof_create_feedback.m"
}

#line 649 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__best_par_algorithm_parser_4_p_0(
#line 649 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Src_5,
#line 649 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Algorithm_6,
#line 649 "mdprof_create_feedback.m"
  MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_0_15,
#line 649 "mdprof_create_feedback.m"
  MR_Integer * mdprof_create_feedback__STATE_VARIABLE_PS_16)
#line 649 "mdprof_create_feedback.m"
{
#line 652 "mdprof_create_feedback.m"
  {
#line 652 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 652 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_17_17;
#line 652 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_39_39;
#line 658 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_20_20;
#line 655 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_18_18;
#line 655 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_19_19;

#line 653 "mdprof_create_feedback.m"
    {
#line 653 "mdprof_create_feedback.m"
      mdprof_create_feedback__succeeded = mercury__parsing_utils__whitespace_4_p_0(mdprof_create_feedback__Src_5, mdprof_create_feedback__STATE_VARIABLE_PS_0_15, &mdprof_create_feedback__STATE_VARIABLE_PS_17_17);
    }
#line 652 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 652 "mdprof_create_feedback.m"
      {
#line 678 "mdprof_create_feedback.m"
        mdprof_create_feedback__V_18_18 = (MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
#line 655 "mdprof_create_feedback.m"
        mdprof_create_feedback__V_19_19 = (MR_String) "greedy";
#line 655 "mdprof_create_feedback.m"
        {
#line 655 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = mercury__parsing_utils__keyword_6_p_0(mdprof_create_feedback__V_18_18, mdprof_create_feedback__V_19_19, mdprof_create_feedback__Src_5, mdprof_create_feedback__STATE_VARIABLE_PS_17_17, &mdprof_create_feedback__STATE_VARIABLE_PS_20_20);
        }
#line 658 "mdprof_create_feedback.m"
        if (mdprof_create_feedback__succeeded)
#line 657 "mdprof_create_feedback.m"
          {
#line 657 "mdprof_create_feedback.m"
            mdprof_create_feedback__STATE_VARIABLE_PS_39_39 = mdprof_create_feedback__STATE_VARIABLE_PS_20_20;
#line 657 "mdprof_create_feedback.m"
            *mdprof_create_feedback__Algorithm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 657 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = MR_TRUE;
#line 657 "mdprof_create_feedback.m"
          }
#line 658 "mdprof_create_feedback.m"
        else
#line 664 "mdprof_create_feedback.m"
          {
#line 664 "mdprof_create_feedback.m"
            MR_Integer mdprof_create_feedback__N_11;
#line 664 "mdprof_create_feedback.m"
            MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_27_27;
#line 659 "mdprof_create_feedback.m"
            MR_Word mdprof_create_feedback__TypeCtorInfo_46_46;
#line 659 "mdprof_create_feedback.m"
            MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_23_23;
#line 659 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_24_24;
#line 659 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_25_25;
#line 659 "mdprof_create_feedback.m"
            MR_Word mdprof_create_feedback__V_26_26;
#line 659 "mdprof_create_feedback.m"
            MR_Integer mdprof_create_feedback__V_28_28;
#line 660 "mdprof_create_feedback.m"
            MR_Box mdprof_create_feedback__conv2_N_11;

#line 659 "mdprof_create_feedback.m"
            {
#line 659 "mdprof_create_feedback.m"
              mdprof_create_feedback__succeeded = mercury__parsing_utils__keyword_6_p_0((MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", (MR_String) "complete-branches", mdprof_create_feedback__Src_5, mdprof_create_feedback__STATE_VARIABLE_PS_17_17, &mdprof_create_feedback__STATE_VARIABLE_PS_23_23);
            }
#line 659 "mdprof_create_feedback.m"
            if (mdprof_create_feedback__succeeded)
#line 659 "mdprof_create_feedback.m"
              {
#line 660 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_24_24 = (MR_String) "(";
#line 660 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_25_25 = (MR_String) ")";
#line 660 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_26_26 = (MR_Word) &mdprof_create_feedback_scalar_common_3[5];
#line 1854 "mdprof_create_feedback.c"
                mdprof_create_feedback__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 660 "mdprof_create_feedback.m"
                {
#line 660 "mdprof_create_feedback.m"
                  mdprof_create_feedback__succeeded = mercury__parsing_utils__brackets_7_p_0(mdprof_create_feedback__TypeCtorInfo_46_46, mdprof_create_feedback__V_24_24, mdprof_create_feedback__V_25_25, mdprof_create_feedback__V_26_26, mdprof_create_feedback__Src_5, &mdprof_create_feedback__conv2_N_11, mdprof_create_feedback__STATE_VARIABLE_PS_23_23, &mdprof_create_feedback__STATE_VARIABLE_PS_27_27);
                }
#line 660 "mdprof_create_feedback.m"
                if (mdprof_create_feedback__succeeded)
#line 660 "mdprof_create_feedback.m"
                  {
#line 660 "mdprof_create_feedback.m"
                    mdprof_create_feedback__N_11 = ((MR_Integer) mdprof_create_feedback__conv2_N_11);
#line 660 "mdprof_create_feedback.m"
                    mdprof_create_feedback__succeeded = MR_TRUE;
#line 660 "mdprof_create_feedback.m"
                  }
#line 659 "mdprof_create_feedback.m"
                if (mdprof_create_feedback__succeeded)
#line 659 "mdprof_create_feedback.m"
                  {
#line 661 "mdprof_create_feedback.m"
                    mdprof_create_feedback__V_28_28 = (MR_Integer) 0;
#line 661 "mdprof_create_feedback.m"
                    mdprof_create_feedback__succeeded = (mdprof_create_feedback__N_11 >= mdprof_create_feedback__V_28_28);
#line 659 "mdprof_create_feedback.m"
                  }
#line 659 "mdprof_create_feedback.m"
              }
#line 664 "mdprof_create_feedback.m"
            if (mdprof_create_feedback__succeeded)
#line 663 "mdprof_create_feedback.m"
              {
#line 663 "mdprof_create_feedback.m"
                mdprof_create_feedback__STATE_VARIABLE_PS_39_39 = mdprof_create_feedback__STATE_VARIABLE_PS_27_27;
#line 663 "mdprof_create_feedback.m"
                {
#line 663 "mdprof_create_feedback.m"
                  MR_Word base;
#line 663 "mdprof_create_feedback.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 663 "mdprof_create_feedback.m"
                  *mdprof_create_feedback__Algorithm_6 = base;
#line 663 "mdprof_create_feedback.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_create_feedback__N_11));
#line 663 "mdprof_create_feedback.m"
                }
#line 663 "mdprof_create_feedback.m"
                mdprof_create_feedback__succeeded = MR_TRUE;
#line 663 "mdprof_create_feedback.m"
              }
#line 664 "mdprof_create_feedback.m"
            else
#line 670 "mdprof_create_feedback.m"
              {
#line 670 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_35_35;
#line 670 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__N_41;
#line 665 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__TypeCtorInfo_51_51;
#line 665 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__STATE_VARIABLE_PS_31_31;
#line 665 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_32_32;
#line 665 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_33_33;
#line 665 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_34_34;
#line 665 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_36_36;
#line 666 "mdprof_create_feedback.m"
                MR_Box mdprof_create_feedback__conv5_N_41;

#line 665 "mdprof_create_feedback.m"
                {
#line 665 "mdprof_create_feedback.m"
                  mdprof_create_feedback__succeeded = mercury__parsing_utils__keyword_6_p_0((MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", (MR_String) "complete-size", mdprof_create_feedback__Src_5, mdprof_create_feedback__STATE_VARIABLE_PS_17_17, &mdprof_create_feedback__STATE_VARIABLE_PS_31_31);
                }
#line 665 "mdprof_create_feedback.m"
                if (mdprof_create_feedback__succeeded)
#line 665 "mdprof_create_feedback.m"
                  {
#line 666 "mdprof_create_feedback.m"
                    mdprof_create_feedback__V_32_32 = (MR_String) "(";
#line 666 "mdprof_create_feedback.m"
                    mdprof_create_feedback__V_33_33 = (MR_String) ")";
#line 666 "mdprof_create_feedback.m"
                    mdprof_create_feedback__V_34_34 = (MR_Word) &mdprof_create_feedback_scalar_common_3[6];
#line 1943 "mdprof_create_feedback.c"
                    mdprof_create_feedback__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 666 "mdprof_create_feedback.m"
                    {
#line 666 "mdprof_create_feedback.m"
                      mdprof_create_feedback__succeeded = mercury__parsing_utils__brackets_7_p_0(mdprof_create_feedback__TypeCtorInfo_51_51, mdprof_create_feedback__V_32_32, mdprof_create_feedback__V_33_33, mdprof_create_feedback__V_34_34, mdprof_create_feedback__Src_5, &mdprof_create_feedback__conv5_N_41, mdprof_create_feedback__STATE_VARIABLE_PS_31_31, &mdprof_create_feedback__STATE_VARIABLE_PS_35_35);
                    }
#line 666 "mdprof_create_feedback.m"
                    if (mdprof_create_feedback__succeeded)
#line 666 "mdprof_create_feedback.m"
                      {
#line 666 "mdprof_create_feedback.m"
                        mdprof_create_feedback__N_41 = ((MR_Integer) mdprof_create_feedback__conv5_N_41);
#line 666 "mdprof_create_feedback.m"
                        mdprof_create_feedback__succeeded = MR_TRUE;
#line 666 "mdprof_create_feedback.m"
                      }
#line 665 "mdprof_create_feedback.m"
                    if (mdprof_create_feedback__succeeded)
#line 665 "mdprof_create_feedback.m"
                      {
#line 667 "mdprof_create_feedback.m"
                        mdprof_create_feedback__V_36_36 = (MR_Integer) 0;
#line 667 "mdprof_create_feedback.m"
                        mdprof_create_feedback__succeeded = (mdprof_create_feedback__N_41 >= mdprof_create_feedback__V_36_36);
#line 665 "mdprof_create_feedback.m"
                      }
#line 665 "mdprof_create_feedback.m"
                  }
#line 670 "mdprof_create_feedback.m"
                if (mdprof_create_feedback__succeeded)
#line 669 "mdprof_create_feedback.m"
                  {
#line 669 "mdprof_create_feedback.m"
                    mdprof_create_feedback__STATE_VARIABLE_PS_39_39 = mdprof_create_feedback__STATE_VARIABLE_PS_35_35;
#line 669 "mdprof_create_feedback.m"
                    {
#line 669 "mdprof_create_feedback.m"
                      MR_Word base;
#line 669 "mdprof_create_feedback.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "mdprof_create_feedback.m"
                      *mdprof_create_feedback__Algorithm_6 = base;
#line 669 "mdprof_create_feedback.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdprof_create_feedback__N_41));
#line 669 "mdprof_create_feedback.m"
                    }
#line 669 "mdprof_create_feedback.m"
                    mdprof_create_feedback__succeeded = MR_TRUE;
#line 669 "mdprof_create_feedback.m"
                  }
#line 670 "mdprof_create_feedback.m"
                else
#line 671 "mdprof_create_feedback.m"
                  {
#line 671 "mdprof_create_feedback.m"
                    {
#line 671 "mdprof_create_feedback.m"
                      mdprof_create_feedback__succeeded = mercury__parsing_utils__keyword_6_p_0((MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", (MR_String) "complete", mdprof_create_feedback__Src_5, mdprof_create_feedback__STATE_VARIABLE_PS_17_17, &mdprof_create_feedback__STATE_VARIABLE_PS_39_39);
                    }
#line 671 "mdprof_create_feedback.m"
                    if (mdprof_create_feedback__succeeded)
#line 671 "mdprof_create_feedback.m"
                      {
#line 672 "mdprof_create_feedback.m"
                        *mdprof_create_feedback__Algorithm_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "mdprof_create_feedback.m"
                        mdprof_create_feedback__succeeded = MR_TRUE;
#line 671 "mdprof_create_feedback.m"
                      }
#line 671 "mdprof_create_feedback.m"
                  }
#line 670 "mdprof_create_feedback.m"
              }
#line 664 "mdprof_create_feedback.m"
          }
#line 652 "mdprof_create_feedback.m"
        if (mdprof_create_feedback__succeeded)
#line 674 "mdprof_create_feedback.m"
          {
#line 674 "mdprof_create_feedback.m"
            return mdprof_create_feedback__succeeded = mercury__parsing_utils__eof_4_p_0(mdprof_create_feedback__Src_5, mdprof_create_feedback__STATE_VARIABLE_PS_39_39, mdprof_create_feedback__STATE_VARIABLE_PS_16);
          }
#line 652 "mdprof_create_feedback.m"
      }
#line 652 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 652 "mdprof_create_feedback.m"
  }
#line 649 "mdprof_create_feedback.m"
}

#line 646 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0_1(
#line 646 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 646 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 646 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 646 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_3,
#line 646 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_4)
#line 646 "mdprof_create_feedback.m"
{
#line 646 "mdprof_create_feedback.m"
  {
#line 646 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 646 "mdprof_create_feedback.m"
    MR_Box mdprof_create_feedback__closure = mdprof_create_feedback__closure_arg;
#line 646 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__conv1_Algorithm_6;
#line 646 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__conv0_STATE_VARIABLE_PS_16;

#line 646 "mdprof_create_feedback.m"
    {
#line 646 "mdprof_create_feedback.m"
      mdprof_create_feedback__succeeded = mdprof_create_feedback__best_par_algorithm_parser_4_p_0(((MR_Word) mdprof_create_feedback__wrapper_arg_1), &mdprof_create_feedback__conv1_Algorithm_6, ((MR_Integer) mdprof_create_feedback__wrapper_arg_3), &mdprof_create_feedback__conv0_STATE_VARIABLE_PS_16);
    }
#line 646 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 646 "mdprof_create_feedback.m"
      {
#line 646 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_create_feedback__conv1_Algorithm_6));
#line 646 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_4 = ((MR_Box) (mdprof_create_feedback__conv0_STATE_VARIABLE_PS_16));
#line 646 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 646 "mdprof_create_feedback.m"
      }
#line 646 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 646 "mdprof_create_feedback.m"
  }
#line 646 "mdprof_create_feedback.m"
}

#line 641 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0(
#line 641 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__String_3,
#line 641 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Result_4)
#line 641 "mdprof_create_feedback.m"
{
#line 645 "mdprof_create_feedback.m"
  {
#line 645 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;

#line 646 "mdprof_create_feedback.m"
    {
#line 646 "mdprof_create_feedback.m"
      mercury__parsing_utils__parse_3_p_0((MR_Word) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_best_par_algorithm_0, mdprof_create_feedback__String_3, (MR_Word) &mdprof_create_feedback_scalar_common_3[4], mdprof_create_feedback__Result_4);
#line 646 "mdprof_create_feedback.m"
      return;
    }
#line 645 "mdprof_create_feedback.m"
  }
#line 641 "mdprof_create_feedback.m"
}

#line 521 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__get_feedback_requests_6_p_0(
#line 521 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_7,
#line 521 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Options_8,
#line 521 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__STATE_VARIABLE_Error_42,
#line 521 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__Requested_10)
#line 521 "mdprof_create_feedback.m"
{
#line 525 "mdprof_create_feedback.m"
  {
#line 525 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 525 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__TypeCtorInfo_115_115;
#line 525 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__Stderr_12;
#line 525 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__CandidateParallelConjunctions_13;
#line 525 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__MaybeAutoParOpts_41;

#line 526 "mdprof_create_feedback.m"
    {
#line 526 "mdprof_create_feedback.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_create_feedback__Stderr_12);
    }
#line 2142 "mdprof_create_feedback.c"
    mdprof_create_feedback__TypeCtorInfo_115_115 = (MR_Word) &mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0;
#line 530 "mdprof_create_feedback.m"
    {
#line 530 "mdprof_create_feedback.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 5)), &mdprof_create_feedback__CandidateParallelConjunctions_13);
    }
#line 635 "mdprof_create_feedback.m"
    if ((mdprof_create_feedback__CandidateParallelConjunctions_13 == (MR_Integer) 0))
#line 636 "mdprof_create_feedback.m"
      {
#line 637 "mdprof_create_feedback.m"
        mdprof_create_feedback__MaybeAutoParOpts_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 637 "mdprof_create_feedback.m"
        *mdprof_create_feedback__STATE_VARIABLE_Error_42 = (MR_Integer) 0;
#line 636 "mdprof_create_feedback.m"
      }
#line 635 "mdprof_create_feedback.m"
    else
#line 533 "mdprof_create_feedback.m"
      {
#line 533 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__DesiredParallelismStr_14;
#line 533 "mdprof_create_feedback.m"
        MR_Float mdprof_create_feedback__DesiredParallelism_16;
#line 533 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__SpeedupThresholdStr_17;
#line 533 "mdprof_create_feedback.m"
        MR_Float mdprof_create_feedback__SpeedupThreshold_19;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__IntermoduleVarUse_20;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__SparkingCost_21;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__SparkingDelay_22;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__BarrierCost_23;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__FutureSignalCost_24;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__FutureWaitCost_25;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__ContextWakeupDelay_26;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__CPCCliqueThreshold_27;
#line 533 "mdprof_create_feedback.m"
        MR_Integer mdprof_create_feedback__CPCCallSiteThreshold_28;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__AllowDepConjs_29;
#line 533 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__SpeedupAlgString_30;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__SpeedupAlg_32;
#line 533 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__BestParAlgStr_33;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__MaybeBestParAlg_34;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__BestParAlg_35;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__AutoParOpts_40;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__STATE_VARIABLE_Error_55_55;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__STATE_VARIABLE_Error_69_69;
#line 533 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__STATE_VARIABLE_Error_94_94;
#line 546 "mdprof_create_feedback.m"
        MR_Float mdprof_create_feedback__DesiredParallelismPrime_15;
#line 565 "mdprof_create_feedback.m"
        MR_Float mdprof_create_feedback__SpeedupThresholdPrime_18;
#line 592 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__SpeedupAlgPrime_31;

#line 534 "mdprof_create_feedback.m"
        {
#line 534 "mdprof_create_feedback.m"
          mercury__getopt__lookup_string_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 7)), &mdprof_create_feedback__DesiredParallelismStr_14);
        }
#line 536 "mdprof_create_feedback.m"
        {
#line 536 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = mercury__string__to_float_2_p_0(mdprof_create_feedback__DesiredParallelismStr_14, &mdprof_create_feedback__DesiredParallelismPrime_15);
        }
#line 546 "mdprof_create_feedback.m"
        if (mdprof_create_feedback__succeeded)
#line 537 "mdprof_create_feedback.m"
          {
#line 537 "mdprof_create_feedback.m"
            mdprof_create_feedback__DesiredParallelism_16 = mdprof_create_feedback__DesiredParallelismPrime_15;
#line 538 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = (mdprof_create_feedback__DesiredParallelism_16 > ((MR_Float) 1.0000000000000000));
#line 540 "mdprof_create_feedback.m"
            if (mdprof_create_feedback__succeeded)
#line 539 "mdprof_create_feedback.m"
              mdprof_create_feedback__STATE_VARIABLE_Error_55_55 = (MR_Integer) 0;
#line 540 "mdprof_create_feedback.m"
            else
#line 543 "mdprof_create_feedback.m"
              {
#line 543 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_117_117;

#line 2245 "mdprof_create_feedback.c"
                {
#line 2247 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_117_117 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_7, (MR_String) ": error: desired parallelism level should be > 1.\n");
                }
#line 2250 "mdprof_create_feedback.c"
                {
#line 2252 "mdprof_create_feedback.c"
                  mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_12, mdprof_create_feedback__V_117_117);
                }
#line 544 "mdprof_create_feedback.m"
                mdprof_create_feedback__STATE_VARIABLE_Error_55_55 = (MR_Integer) 1;
#line 543 "mdprof_create_feedback.m"
              }
#line 537 "mdprof_create_feedback.m"
          }
#line 546 "mdprof_create_feedback.m"
        else
#line 549 "mdprof_create_feedback.m"
          {
#line 549 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_119_119;

#line 2268 "mdprof_create_feedback.c"
            {
#line 2270 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_119_119 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_7, (MR_String) ": error: desired parallelism level should be a number.\n");
            }
#line 2273 "mdprof_create_feedback.c"
            {
#line 2275 "mdprof_create_feedback.c"
              mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_12, mdprof_create_feedback__V_119_119);
            }
#line 550 "mdprof_create_feedback.m"
            mdprof_create_feedback__STATE_VARIABLE_Error_55_55 = (MR_Integer) 1;
#line 551 "mdprof_create_feedback.m"
            mdprof_create_feedback__DesiredParallelism_16 = (MR_Float) 1.0000000000000000;
#line 549 "mdprof_create_feedback.m"
          }
#line 553 "mdprof_create_feedback.m"
        {
#line 553 "mdprof_create_feedback.m"
          mercury__getopt__lookup_string_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 17)), &mdprof_create_feedback__SpeedupThresholdStr_17);
        }
#line 555 "mdprof_create_feedback.m"
        {
#line 555 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = mercury__string__to_float_2_p_0(mdprof_create_feedback__SpeedupThresholdStr_17, &mdprof_create_feedback__SpeedupThresholdPrime_18);
        }
#line 565 "mdprof_create_feedback.m"
        if (mdprof_create_feedback__succeeded)
#line 556 "mdprof_create_feedback.m"
          {
#line 556 "mdprof_create_feedback.m"
            mdprof_create_feedback__SpeedupThreshold_19 = mdprof_create_feedback__SpeedupThresholdPrime_18;
#line 557 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = (mdprof_create_feedback__SpeedupThreshold_19 >= ((MR_Float) 1.0000000000000000));
#line 559 "mdprof_create_feedback.m"
            if (mdprof_create_feedback__succeeded)
#line 558 "mdprof_create_feedback.m"
              mdprof_create_feedback__STATE_VARIABLE_Error_69_69 = mdprof_create_feedback__STATE_VARIABLE_Error_55_55;
#line 559 "mdprof_create_feedback.m"
            else
#line 562 "mdprof_create_feedback.m"
              {
#line 562 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_121_121;

#line 2313 "mdprof_create_feedback.c"
                {
#line 2315 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_121_121 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_7, (MR_String) ": error: speedup threshold should be >= 1.\n");
                }
#line 2318 "mdprof_create_feedback.c"
                {
#line 2320 "mdprof_create_feedback.c"
                  mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_12, mdprof_create_feedback__V_121_121);
                }
#line 563 "mdprof_create_feedback.m"
                mdprof_create_feedback__STATE_VARIABLE_Error_69_69 = (MR_Integer) 1;
#line 562 "mdprof_create_feedback.m"
              }
#line 556 "mdprof_create_feedback.m"
          }
#line 565 "mdprof_create_feedback.m"
        else
#line 568 "mdprof_create_feedback.m"
          {
#line 568 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_123_123;

#line 2336 "mdprof_create_feedback.c"
            {
#line 2338 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_123_123 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_7, (MR_String) ": error: speedup threshold should be a number.\n");
            }
#line 2341 "mdprof_create_feedback.c"
            {
#line 2343 "mdprof_create_feedback.c"
              mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_12, mdprof_create_feedback__V_123_123);
            }
#line 569 "mdprof_create_feedback.m"
            mdprof_create_feedback__STATE_VARIABLE_Error_69_69 = (MR_Integer) 1;
#line 570 "mdprof_create_feedback.m"
            mdprof_create_feedback__SpeedupThreshold_19 = (MR_Float) 1.0000000000000000;
#line 568 "mdprof_create_feedback.m"
          }
#line 572 "mdprof_create_feedback.m"
        {
#line 572 "mdprof_create_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 8)), &mdprof_create_feedback__IntermoduleVarUse_20);
        }
#line 574 "mdprof_create_feedback.m"
        {
#line 574 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 9)), &mdprof_create_feedback__SparkingCost_21);
        }
#line 575 "mdprof_create_feedback.m"
        {
#line 575 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 10)), &mdprof_create_feedback__SparkingDelay_22);
        }
#line 576 "mdprof_create_feedback.m"
        {
#line 576 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 11)), &mdprof_create_feedback__BarrierCost_23);
        }
#line 577 "mdprof_create_feedback.m"
        {
#line 577 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 12)), &mdprof_create_feedback__FutureSignalCost_24);
        }
#line 578 "mdprof_create_feedback.m"
        {
#line 578 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 13)), &mdprof_create_feedback__FutureWaitCost_25);
        }
#line 579 "mdprof_create_feedback.m"
        {
#line 579 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 14)), &mdprof_create_feedback__ContextWakeupDelay_26);
        }
#line 581 "mdprof_create_feedback.m"
        {
#line 581 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 15)), &mdprof_create_feedback__CPCCliqueThreshold_27);
        }
#line 583 "mdprof_create_feedback.m"
        {
#line 583 "mdprof_create_feedback.m"
          mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 16)), &mdprof_create_feedback__CPCCallSiteThreshold_28);
        }
#line 585 "mdprof_create_feedback.m"
        {
#line 585 "mdprof_create_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 18)), &mdprof_create_feedback__AllowDepConjs_29);
        }
#line 586 "mdprof_create_feedback.m"
        {
#line 586 "mdprof_create_feedback.m"
          mercury__getopt__lookup_string_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 19)), &mdprof_create_feedback__SpeedupAlgString_30);
        }
#line 588 "mdprof_create_feedback.m"
        {
#line 588 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_p_0(mdprof_create_feedback__AllowDepConjs_29, mdprof_create_feedback__SpeedupAlgString_30, &mdprof_create_feedback__SpeedupAlgPrime_31);
        }
#line 592 "mdprof_create_feedback.m"
        if (mdprof_create_feedback__succeeded)
#line 591 "mdprof_create_feedback.m"
          {
#line 591 "mdprof_create_feedback.m"
            mdprof_create_feedback__SpeedupAlg_32 = mdprof_create_feedback__SpeedupAlgPrime_31;
#line 591 "mdprof_create_feedback.m"
            mdprof_create_feedback__STATE_VARIABLE_Error_94_94 = mdprof_create_feedback__STATE_VARIABLE_Error_69_69;
#line 591 "mdprof_create_feedback.m"
          }
#line 592 "mdprof_create_feedback.m"
        else
#line 595 "mdprof_create_feedback.m"
          {
#line 595 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_125_125;
#line 595 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_127_127;
#line 595 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_128_128;

#line 2433 "mdprof_create_feedback.c"
            {
#line 2435 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_125_125 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__SpeedupAlgString_30, (MR_String) " is not a speedup estimate algorithm.\n");
            }
#line 2438 "mdprof_create_feedback.c"
            {
#line 2440 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_127_127 = mercury__string__f_43_43_2_f_0((MR_String) ": error: ", mdprof_create_feedback__V_125_125);
            }
#line 2443 "mdprof_create_feedback.c"
            {
#line 2445 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_128_128 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_7, mdprof_create_feedback__V_127_127);
            }
#line 2448 "mdprof_create_feedback.c"
            {
#line 2450 "mdprof_create_feedback.c"
              mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_12, mdprof_create_feedback__V_128_128);
            }
#line 596 "mdprof_create_feedback.m"
            mdprof_create_feedback__STATE_VARIABLE_Error_94_94 = (MR_Integer) 1;
#line 597 "mdprof_create_feedback.m"
            mdprof_create_feedback__SpeedupAlg_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "mdprof_create_feedback.m"
          }
#line 599 "mdprof_create_feedback.m"
        {
#line 599 "mdprof_create_feedback.m"
          mercury__getopt__lookup_string_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_115_115, mdprof_create_feedback__Options_8, ((MR_Box) ((MR_Integer) 20)), &mdprof_create_feedback__BestParAlgStr_33);
        }
#line 600 "mdprof_create_feedback.m"
        {
#line 600 "mdprof_create_feedback.m"
          mdprof_create_feedback__parse_best_par_algorithm_2_p_0(mdprof_create_feedback__BestParAlgStr_33, &mdprof_create_feedback__MaybeBestParAlg_34);
        }
#line 603 "mdprof_create_feedback.m"
        if (((MR_tag((MR_Word) mdprof_create_feedback__MaybeBestParAlg_34)) == (MR_mktag((MR_Integer) 1))))
#line 604 "mdprof_create_feedback.m"
          {
#line 604 "mdprof_create_feedback.m"
            MR_Word mdprof_create_feedback__MaybeMessage_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeBestParAlg_34, (MR_Integer) 0)));
#line 604 "mdprof_create_feedback.m"
            MR_Integer mdprof_create_feedback___Line_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeBestParAlg_34, (MR_Integer) 1)));
#line 604 "mdprof_create_feedback.m"
            MR_Integer mdprof_create_feedback___Col_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeBestParAlg_34, (MR_Integer) 2)));

#line 611 "mdprof_create_feedback.m"
            if ((mdprof_create_feedback__MaybeMessage_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "mdprof_create_feedback.m"
              {
#line 612 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_130_130;
#line 612 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_132_132;
#line 612 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_133_133;

#line 2491 "mdprof_create_feedback.c"
                {
#line 2493 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_130_130 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__BestParAlgStr_33, (MR_String) " is not a best parallelisation algorithm.\n");
                }
#line 2496 "mdprof_create_feedback.c"
                {
#line 2498 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_132_132 = mercury__string__f_43_43_2_f_0((MR_String) ": error: ", mdprof_create_feedback__V_130_130);
                }
#line 2501 "mdprof_create_feedback.c"
                {
#line 2503 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_133_133 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_7, mdprof_create_feedback__V_132_132);
                }
#line 2506 "mdprof_create_feedback.c"
                {
#line 2508 "mdprof_create_feedback.c"
                  mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_12, mdprof_create_feedback__V_133_133);
                }
#line 612 "mdprof_create_feedback.m"
              }
#line 611 "mdprof_create_feedback.m"
            else
#line 606 "mdprof_create_feedback.m"
              {
#line 606 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__Message_39 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeMessage_36, (MR_Integer) 0)));
#line 606 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_135_135;
#line 606 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_137_137;
#line 606 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_138_138;
#line 606 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_140_140;
#line 606 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_141_141;

#line 2530 "mdprof_create_feedback.c"
                {
#line 2532 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_135_135 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__Message_39, (MR_String) ".\n");
                }
#line 2535 "mdprof_create_feedback.c"
                {
#line 2537 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_137_137 = mercury__string__f_43_43_2_f_0((MR_String) " is not a best parallelisation algorithm: ", mdprof_create_feedback__V_135_135);
                }
#line 2540 "mdprof_create_feedback.c"
                {
#line 2542 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_138_138 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__BestParAlgStr_33, mdprof_create_feedback__V_137_137);
                }
#line 2545 "mdprof_create_feedback.c"
                {
#line 2547 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_140_140 = mercury__string__f_43_43_2_f_0((MR_String) ": error: ", mdprof_create_feedback__V_138_138);
                }
#line 2550 "mdprof_create_feedback.c"
                {
#line 2552 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_141_141 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_7, mdprof_create_feedback__V_140_140);
                }
#line 2555 "mdprof_create_feedback.c"
                {
#line 2557 "mdprof_create_feedback.c"
                  mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_12, mdprof_create_feedback__V_141_141);
                }
#line 606 "mdprof_create_feedback.m"
              }
#line 617 "mdprof_create_feedback.m"
            *mdprof_create_feedback__STATE_VARIABLE_Error_42 = (MR_Integer) 1;
#line 618 "mdprof_create_feedback.m"
            mdprof_create_feedback__BestParAlg_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 604 "mdprof_create_feedback.m"
          }
#line 603 "mdprof_create_feedback.m"
        else
#line 602 "mdprof_create_feedback.m"
          {
#line 602 "mdprof_create_feedback.m"
            mdprof_create_feedback__BestParAlg_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__MaybeBestParAlg_34, (MR_Integer) 0)));
#line 602 "mdprof_create_feedback.m"
            *mdprof_create_feedback__STATE_VARIABLE_Error_42 = mdprof_create_feedback__STATE_VARIABLE_Error_94_94;
#line 602 "mdprof_create_feedback.m"
          }
#line 620 "mdprof_create_feedback.m"
        {
#line 620 "mdprof_create_feedback.m"
          mdprof_create_feedback__AutoParOpts_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 0) = MR_box_float(mdprof_create_feedback__DesiredParallelism_16);
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 1) = ((MR_Box) (mdprof_create_feedback__IntermoduleVarUse_20));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 2) = ((MR_Box) (mdprof_create_feedback__SparkingCost_21));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 3) = ((MR_Box) (mdprof_create_feedback__SparkingDelay_22));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 4) = ((MR_Box) (mdprof_create_feedback__BarrierCost_23));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 5) = ((MR_Box) (mdprof_create_feedback__FutureSignalCost_24));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 6) = ((MR_Box) (mdprof_create_feedback__FutureWaitCost_25));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 7) = ((MR_Box) (mdprof_create_feedback__ContextWakeupDelay_26));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 8) = ((MR_Box) (mdprof_create_feedback__CPCCliqueThreshold_27));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 9) = ((MR_Box) (mdprof_create_feedback__CPCCallSiteThreshold_28));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 10) = MR_box_float(mdprof_create_feedback__SpeedupThreshold_19);
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 11) = ((MR_Box) (mdprof_create_feedback__SpeedupAlg_32));
#line 620 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(0), mdprof_create_feedback__AutoParOpts_40, 12) = ((MR_Box) (mdprof_create_feedback__BestParAlg_35));
#line 620 "mdprof_create_feedback.m"
        }
#line 634 "mdprof_create_feedback.m"
        {
#line 634 "mdprof_create_feedback.m"
          mdprof_create_feedback__MaybeAutoParOpts_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 634 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeAutoParOpts_41, 0) = ((MR_Box) (mdprof_create_feedback__AutoParOpts_40));
#line 634 "mdprof_create_feedback.m"
        }
#line 533 "mdprof_create_feedback.m"
      }
#line 639 "mdprof_create_feedback.m"
    *mdprof_create_feedback__Requested_10 = (MR_Word) mdprof_create_feedback__MaybeAutoParOpts_41;
#line 525 "mdprof_create_feedback.m"
  }
#line 521 "mdprof_create_feedback.m"
}

#line 477 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__post_process_options_5_p_0(
#line 477 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_6,
#line 477 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__STATE_VARIABLE_Options_0_12,
#line 477 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__STATE_VARIABLE_Options_13)
#line 477 "mdprof_create_feedback.m"
{
#line 481 "mdprof_create_feedback.m"
  {
#line 481 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 481 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__TypeCtorInfo_43_43 = (MR_Word) &mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0;
#line 481 "mdprof_create_feedback.m"
    MR_Integer mdprof_create_feedback__VerbosityLevel_9;
#line 481 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__Stderr_10;
#line 481 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__ImplicitParallelism_11;
#line 481 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__STATE_VARIABLE_Options_26_26;

#line 482 "mdprof_create_feedback.m"
    {
#line 482 "mdprof_create_feedback.m"
      mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_43_43, mdprof_create_feedback__STATE_VARIABLE_Options_0_12, ((MR_Box) ((MR_Integer) 2)), &mdprof_create_feedback__VerbosityLevel_9);
    }
#line 483 "mdprof_create_feedback.m"
    {
#line 483 "mdprof_create_feedback.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_create_feedback__Stderr_10);
    }
#line 484 "mdprof_create_feedback.m"
    mdprof_create_feedback__succeeded = (mdprof_create_feedback__VerbosityLevel_9 < (MR_Integer) 0);
#line 489 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 487 "mdprof_create_feedback.m"
      {
#line 487 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__V_45_45;

#line 2672 "mdprof_create_feedback.c"
        {
#line 2674 "mdprof_create_feedback.c"
          mdprof_create_feedback__V_45_45 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_6, (MR_String) ": warning: verbosity level should not be negative.\n");
        }
#line 2677 "mdprof_create_feedback.c"
        {
#line 2679 "mdprof_create_feedback.c"
          mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_10, mdprof_create_feedback__V_45_45);
        }
#line 709 "mdprof_create_feedback.m"
        {
#line 709 "mdprof_create_feedback.m"
          mercury__map__set_4_p_0((MR_Word) &mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[7]))), mdprof_create_feedback__STATE_VARIABLE_Options_0_12, &mdprof_create_feedback__STATE_VARIABLE_Options_26_26);
        }
#line 487 "mdprof_create_feedback.m"
      }
#line 489 "mdprof_create_feedback.m"
    else
#line 494 "mdprof_create_feedback.m"
      {
#line 489 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = (mdprof_create_feedback__VerbosityLevel_9 > (MR_Integer) 4);
#line 494 "mdprof_create_feedback.m"
        if (mdprof_create_feedback__succeeded)
#line 492 "mdprof_create_feedback.m"
          {
#line 492 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_47_47;

#line 2702 "mdprof_create_feedback.c"
            {
#line 2704 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_47_47 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_6, (MR_String) ": warning: verbosity level should not exceed 4.\n");
            }
#line 2707 "mdprof_create_feedback.c"
            {
#line 2709 "mdprof_create_feedback.c"
              mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_10, mdprof_create_feedback__V_47_47);
            }
#line 709 "mdprof_create_feedback.m"
            {
#line 709 "mdprof_create_feedback.m"
              mercury__map__set_4_p_0((MR_Word) &mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[8]))), mdprof_create_feedback__STATE_VARIABLE_Options_0_12, &mdprof_create_feedback__STATE_VARIABLE_Options_26_26);
            }
#line 492 "mdprof_create_feedback.m"
          }
#line 494 "mdprof_create_feedback.m"
        else
#line 495 "mdprof_create_feedback.m"
          mdprof_create_feedback__STATE_VARIABLE_Options_26_26 = mdprof_create_feedback__STATE_VARIABLE_Options_0_12;
#line 494 "mdprof_create_feedback.m"
      }
#line 497 "mdprof_create_feedback.m"
    {
#line 497 "mdprof_create_feedback.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_43_43, mdprof_create_feedback__STATE_VARIABLE_Options_26_26, ((MR_Box) ((MR_Integer) 6)), &mdprof_create_feedback__ImplicitParallelism_11);
    }
#line 501 "mdprof_create_feedback.m"
    if ((mdprof_create_feedback__ImplicitParallelism_11 == (MR_Integer) 0))
#line 502 "mdprof_create_feedback.m"
      *mdprof_create_feedback__STATE_VARIABLE_Options_13 = mdprof_create_feedback__STATE_VARIABLE_Options_26_26;
#line 501 "mdprof_create_feedback.m"
    else
#line 499 "mdprof_create_feedback.m"
      {
#line 709 "mdprof_create_feedback.m"
        {
#line 709 "mdprof_create_feedback.m"
          mercury__map__set_4_p_0((MR_Word) &mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 5)), ((MR_Box) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_4[6]))), mdprof_create_feedback__STATE_VARIABLE_Options_26_26, mdprof_create_feedback__STATE_VARIABLE_Options_13);
#line 709 "mdprof_create_feedback.m"
          return;
        }
#line 499 "mdprof_create_feedback.m"
      }
#line 481 "mdprof_create_feedback.m"
  }
#line 477 "mdprof_create_feedback.m"
}

#line 444 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__defaults_2_p_0(
#line 444 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__1_1,
#line 444 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__2_2,
#line 444 "mdprof_create_feedback.m"
  MR_Cont mdprof_create_feedback__cont,
#line 444 "mdprof_create_feedback.m"
  void * mdprof_create_feedback__cont_env_ptr)
#line 444 "mdprof_create_feedback.m"
{
#line 446 "mdprof_create_feedback.m"
  {
#line 446 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;

#line 446 "mdprof_create_feedback.m"
    {
#line 446 "mdprof_create_feedback.m"
      MR_Integer mdprof_create_feedback__slot_0 = (MR_Integer) 0;

#line 446 "mdprof_create_feedback.m"
      do
#line 446 "mdprof_create_feedback.m"
        {
#line 446 "mdprof_create_feedback.m"
          *mdprof_create_feedback__HeadVar__1_1 = ((&mdprof_create_feedback_vector_common_5[0 + mdprof_create_feedback__slot_0]))->mdprof_create_feedback__vector_common_type_5_0__vct_5_f_0;
#line 446 "mdprof_create_feedback.m"
          *mdprof_create_feedback__HeadVar__2_2 = ((&mdprof_create_feedback_vector_common_5[0 + mdprof_create_feedback__slot_0]))->mdprof_create_feedback__vector_common_type_5_0__vct_5_f_1;
#line 446 "mdprof_create_feedback.m"
          {
#line 446 "mdprof_create_feedback.m"
            mdprof_create_feedback__cont(mdprof_create_feedback__cont_env_ptr);
          }
#line 446 "mdprof_create_feedback.m"
          mdprof_create_feedback__slot_0 = (mdprof_create_feedback__slot_0 + (MR_Integer) 1);
#line 446 "mdprof_create_feedback.m"
        }
#line 446 "mdprof_create_feedback.m"
      while ((mdprof_create_feedback__slot_0 < (MR_Integer) 21));
#line 446 "mdprof_create_feedback.m"
    }
#line 446 "mdprof_create_feedback.m"
  }
#line 444 "mdprof_create_feedback.m"
}

#line 373 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__long_2_p_0(
#line 373 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__HeadVar__1_1,
#line 373 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__2_2)
#line 373 "mdprof_create_feedback.m"
{
#line 375 "mdprof_create_feedback.m"
  {
#line 375 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;

#line 375 "mdprof_create_feedback.m"
    if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "help") == 0))
#line 376 "mdprof_create_feedback.m"
      {
#line 376 "mdprof_create_feedback.m"
        *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 0;
#line 376 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 376 "mdprof_create_feedback.m"
      }
#line 375 "mdprof_create_feedback.m"
    else
#line 375 "mdprof_create_feedback.m"
      if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "report") == 0))
#line 384 "mdprof_create_feedback.m"
        {
#line 384 "mdprof_create_feedback.m"
          *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 4;
#line 384 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = MR_TRUE;
#line 384 "mdprof_create_feedback.m"
        }
#line 375 "mdprof_create_feedback.m"
      else
#line 375 "mdprof_create_feedback.m"
        if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "version") == 0))
#line 380 "mdprof_create_feedback.m"
          {
#line 380 "mdprof_create_feedback.m"
            *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 1;
#line 380 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = MR_TRUE;
#line 380 "mdprof_create_feedback.m"
          }
#line 375 "mdprof_create_feedback.m"
        else
#line 375 "mdprof_create_feedback.m"
          if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "verbosity") == 0))
#line 378 "mdprof_create_feedback.m"
            {
#line 378 "mdprof_create_feedback.m"
              *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 2;
#line 378 "mdprof_create_feedback.m"
              mdprof_create_feedback__succeeded = MR_TRUE;
#line 378 "mdprof_create_feedback.m"
            }
#line 375 "mdprof_create_feedback.m"
          else
#line 375 "mdprof_create_feedback.m"
            if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-dep-conjs") == 0))
#line 430 "mdprof_create_feedback.m"
              {
#line 430 "mdprof_create_feedback.m"
                *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 18;
#line 430 "mdprof_create_feedback.m"
                mdprof_create_feedback__succeeded = MR_TRUE;
#line 430 "mdprof_create_feedback.m"
              }
#line 375 "mdprof_create_feedback.m"
            else
#line 375 "mdprof_create_feedback.m"
              if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-speedup-alg") == 0))
#line 434 "mdprof_create_feedback.m"
                {
#line 434 "mdprof_create_feedback.m"
                  *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 19;
#line 434 "mdprof_create_feedback.m"
                  mdprof_create_feedback__succeeded = MR_TRUE;
#line 434 "mdprof_create_feedback.m"
                }
#line 375 "mdprof_create_feedback.m"
              else
#line 375 "mdprof_create_feedback.m"
                if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-barrier-cost") == 0))
#line 410 "mdprof_create_feedback.m"
                  {
#line 410 "mdprof_create_feedback.m"
                    *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 11;
#line 410 "mdprof_create_feedback.m"
                    mdprof_create_feedback__succeeded = MR_TRUE;
#line 410 "mdprof_create_feedback.m"
                  }
#line 375 "mdprof_create_feedback.m"
                else
#line 375 "mdprof_create_feedback.m"
                  if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-best-par-alg") == 0))
#line 442 "mdprof_create_feedback.m"
                    {
#line 442 "mdprof_create_feedback.m"
                      *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 20;
#line 442 "mdprof_create_feedback.m"
                      mdprof_create_feedback__succeeded = MR_TRUE;
#line 442 "mdprof_create_feedback.m"
                    }
#line 375 "mdprof_create_feedback.m"
                  else
#line 375 "mdprof_create_feedback.m"
                    if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "debug-read-profile") == 0))
#line 382 "mdprof_create_feedback.m"
                      {
#line 382 "mdprof_create_feedback.m"
                        *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 3;
#line 382 "mdprof_create_feedback.m"
                        mdprof_create_feedback__succeeded = MR_TRUE;
#line 382 "mdprof_create_feedback.m"
                      }
#line 375 "mdprof_create_feedback.m"
                    else
#line 375 "mdprof_create_feedback.m"
                      if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-sparking-cost") == 0))
#line 398 "mdprof_create_feedback.m"
                        {
#line 398 "mdprof_create_feedback.m"
                          *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 9;
#line 398 "mdprof_create_feedback.m"
                          mdprof_create_feedback__succeeded = MR_TRUE;
#line 398 "mdprof_create_feedback.m"
                        }
#line 375 "mdprof_create_feedback.m"
                      else
#line 375 "mdprof_create_feedback.m"
                        if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "desired-parallelism") == 0))
#line 390 "mdprof_create_feedback.m"
                          {
#line 390 "mdprof_create_feedback.m"
                            *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 7;
#line 390 "mdprof_create_feedback.m"
                            mdprof_create_feedback__succeeded = MR_TRUE;
#line 390 "mdprof_create_feedback.m"
                          }
#line 375 "mdprof_create_feedback.m"
                        else
#line 375 "mdprof_create_feedback.m"
                          if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-sparking-delay") == 0))
#line 402 "mdprof_create_feedback.m"
                            {
#line 402 "mdprof_create_feedback.m"
                              *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 10;
#line 402 "mdprof_create_feedback.m"
                              mdprof_create_feedback__succeeded = MR_TRUE;
#line 402 "mdprof_create_feedback.m"
                            }
#line 375 "mdprof_create_feedback.m"
                          else
#line 375 "mdprof_create_feedback.m"
                            if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism") == 0))
#line 388 "mdprof_create_feedback.m"
                              {
#line 388 "mdprof_create_feedback.m"
                                *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 6;
#line 388 "mdprof_create_feedback.m"
                                mdprof_create_feedback__succeeded = MR_TRUE;
#line 388 "mdprof_create_feedback.m"
                              }
#line 375 "mdprof_create_feedback.m"
                            else
#line 375 "mdprof_create_feedback.m"
                              if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-future-wait-cost") == 0))
#line 414 "mdprof_create_feedback.m"
                                {
#line 414 "mdprof_create_feedback.m"
                                  *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 13;
#line 414 "mdprof_create_feedback.m"
                                  mdprof_create_feedback__succeeded = MR_TRUE;
#line 414 "mdprof_create_feedback.m"
                                }
#line 375 "mdprof_create_feedback.m"
                              else
#line 375 "mdprof_create_feedback.m"
                                if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-speedup-threshold") == 0))
#line 438 "mdprof_create_feedback.m"
                                  {
#line 438 "mdprof_create_feedback.m"
                                    *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 17;
#line 438 "mdprof_create_feedback.m"
                                    mdprof_create_feedback__succeeded = MR_TRUE;
#line 438 "mdprof_create_feedback.m"
                                  }
#line 375 "mdprof_create_feedback.m"
                                else
#line 375 "mdprof_create_feedback.m"
                                  if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-future-signal-cost") == 0))
#line 406 "mdprof_create_feedback.m"
                                    {
#line 406 "mdprof_create_feedback.m"
                                      *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 12;
#line 406 "mdprof_create_feedback.m"
                                      mdprof_create_feedback__succeeded = MR_TRUE;
#line 406 "mdprof_create_feedback.m"
                                    }
#line 375 "mdprof_create_feedback.m"
                                  else
#line 375 "mdprof_create_feedback.m"
                                    if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-intermodule-var-use") == 0))
#line 394 "mdprof_create_feedback.m"
                                      {
#line 394 "mdprof_create_feedback.m"
                                        *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 8;
#line 394 "mdprof_create_feedback.m"
                                        mdprof_create_feedback__succeeded = MR_TRUE;
#line 394 "mdprof_create_feedback.m"
                                      }
#line 375 "mdprof_create_feedback.m"
                                    else
#line 375 "mdprof_create_feedback.m"
                                      if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-context-wakeup-delay") == 0))
#line 418 "mdprof_create_feedback.m"
                                        {
#line 418 "mdprof_create_feedback.m"
                                          *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 14;
#line 418 "mdprof_create_feedback.m"
                                          mdprof_create_feedback__succeeded = MR_TRUE;
#line 418 "mdprof_create_feedback.m"
                                        }
#line 375 "mdprof_create_feedback.m"
                                      else
#line 375 "mdprof_create_feedback.m"
                                        if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-clique-cost-threshold") == 0))
#line 422 "mdprof_create_feedback.m"
                                          {
#line 422 "mdprof_create_feedback.m"
                                            *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 15;
#line 422 "mdprof_create_feedback.m"
                                            mdprof_create_feedback__succeeded = MR_TRUE;
#line 422 "mdprof_create_feedback.m"
                                          }
#line 375 "mdprof_create_feedback.m"
                                        else
#line 375 "mdprof_create_feedback.m"
                                          if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "ipar-call-site-cost-threshold") == 0))
#line 426 "mdprof_create_feedback.m"
                                            {
#line 426 "mdprof_create_feedback.m"
                                              *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 16;
#line 426 "mdprof_create_feedback.m"
                                              mdprof_create_feedback__succeeded = MR_TRUE;
#line 426 "mdprof_create_feedback.m"
                                            }
#line 375 "mdprof_create_feedback.m"
                                          else
#line 375 "mdprof_create_feedback.m"
                                            if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "candidate-parallel-conjunctions") == 0))
#line 386 "mdprof_create_feedback.m"
                                              {
#line 386 "mdprof_create_feedback.m"
                                                *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 5;
#line 386 "mdprof_create_feedback.m"
                                                mdprof_create_feedback__succeeded = MR_TRUE;
#line 386 "mdprof_create_feedback.m"
                                              }
#line 375 "mdprof_create_feedback.m"
                                            else
#line 375 "mdprof_create_feedback.m"
                                              if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-barrier-cost") == 0))
#line 408 "mdprof_create_feedback.m"
                                                {
#line 408 "mdprof_create_feedback.m"
                                                  *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 11;
#line 408 "mdprof_create_feedback.m"
                                                  mdprof_create_feedback__succeeded = MR_TRUE;
#line 408 "mdprof_create_feedback.m"
                                                }
#line 375 "mdprof_create_feedback.m"
                                              else
#line 375 "mdprof_create_feedback.m"
                                                if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-sparking-cost") == 0))
#line 396 "mdprof_create_feedback.m"
                                                  {
#line 396 "mdprof_create_feedback.m"
                                                    *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 9;
#line 396 "mdprof_create_feedback.m"
                                                    mdprof_create_feedback__succeeded = MR_TRUE;
#line 396 "mdprof_create_feedback.m"
                                                  }
#line 375 "mdprof_create_feedback.m"
                                                else
#line 375 "mdprof_create_feedback.m"
                                                  if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-sparking-delay") == 0))
#line 400 "mdprof_create_feedback.m"
                                                    {
#line 400 "mdprof_create_feedback.m"
                                                      *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 10;
#line 400 "mdprof_create_feedback.m"
                                                      mdprof_create_feedback__succeeded = MR_TRUE;
#line 400 "mdprof_create_feedback.m"
                                                    }
#line 375 "mdprof_create_feedback.m"
                                                  else
#line 375 "mdprof_create_feedback.m"
                                                    if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-future-wait-cost") == 0))
#line 412 "mdprof_create_feedback.m"
                                                      {
#line 412 "mdprof_create_feedback.m"
                                                        *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 13;
#line 412 "mdprof_create_feedback.m"
                                                        mdprof_create_feedback__succeeded = MR_TRUE;
#line 412 "mdprof_create_feedback.m"
                                                      }
#line 375 "mdprof_create_feedback.m"
                                                    else
#line 375 "mdprof_create_feedback.m"
                                                      if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-speedup-threshold") == 0))
#line 436 "mdprof_create_feedback.m"
                                                        {
#line 436 "mdprof_create_feedback.m"
                                                          *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 17;
#line 436 "mdprof_create_feedback.m"
                                                          mdprof_create_feedback__succeeded = MR_TRUE;
#line 436 "mdprof_create_feedback.m"
                                                        }
#line 375 "mdprof_create_feedback.m"
                                                      else
#line 375 "mdprof_create_feedback.m"
                                                        if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-future-signal-cost") == 0))
#line 404 "mdprof_create_feedback.m"
                                                          {
#line 404 "mdprof_create_feedback.m"
                                                            *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 12;
#line 404 "mdprof_create_feedback.m"
                                                            mdprof_create_feedback__succeeded = MR_TRUE;
#line 404 "mdprof_create_feedback.m"
                                                          }
#line 375 "mdprof_create_feedback.m"
                                                        else
#line 375 "mdprof_create_feedback.m"
                                                          if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-intermodule-var-use") == 0))
#line 392 "mdprof_create_feedback.m"
                                                            {
#line 392 "mdprof_create_feedback.m"
                                                              *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 8;
#line 392 "mdprof_create_feedback.m"
                                                              mdprof_create_feedback__succeeded = MR_TRUE;
#line 392 "mdprof_create_feedback.m"
                                                            }
#line 375 "mdprof_create_feedback.m"
                                                          else
#line 375 "mdprof_create_feedback.m"
                                                            if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-context-wakeup-delay") == 0))
#line 416 "mdprof_create_feedback.m"
                                                              {
#line 416 "mdprof_create_feedback.m"
                                                                *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 14;
#line 416 "mdprof_create_feedback.m"
                                                                mdprof_create_feedback__succeeded = MR_TRUE;
#line 416 "mdprof_create_feedback.m"
                                                              }
#line 375 "mdprof_create_feedback.m"
                                                            else
#line 375 "mdprof_create_feedback.m"
                                                              if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-clique-cost-threshold") == 0))
#line 420 "mdprof_create_feedback.m"
                                                                {
#line 420 "mdprof_create_feedback.m"
                                                                  *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 15;
#line 420 "mdprof_create_feedback.m"
                                                                  mdprof_create_feedback__succeeded = MR_TRUE;
#line 420 "mdprof_create_feedback.m"
                                                                }
#line 375 "mdprof_create_feedback.m"
                                                              else
#line 375 "mdprof_create_feedback.m"
                                                                if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-dependant-conjunctions") == 0))
#line 428 "mdprof_create_feedback.m"
                                                                  {
#line 428 "mdprof_create_feedback.m"
                                                                    *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 18;
#line 428 "mdprof_create_feedback.m"
                                                                    mdprof_create_feedback__succeeded = MR_TRUE;
#line 428 "mdprof_create_feedback.m"
                                                                  }
#line 375 "mdprof_create_feedback.m"
                                                                else
#line 375 "mdprof_create_feedback.m"
                                                                  if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-call-site-cost-threshold") == 0))
#line 424 "mdprof_create_feedback.m"
                                                                    {
#line 424 "mdprof_create_feedback.m"
                                                                      *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 16;
#line 424 "mdprof_create_feedback.m"
                                                                      mdprof_create_feedback__succeeded = MR_TRUE;
#line 424 "mdprof_create_feedback.m"
                                                                    }
#line 375 "mdprof_create_feedback.m"
                                                                  else
#line 375 "mdprof_create_feedback.m"
                                                                    if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-best-parallelisation-algorithm") == 0))
#line 440 "mdprof_create_feedback.m"
                                                                      {
#line 440 "mdprof_create_feedback.m"
                                                                        *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 20;
#line 440 "mdprof_create_feedback.m"
                                                                        mdprof_create_feedback__succeeded = MR_TRUE;
#line 440 "mdprof_create_feedback.m"
                                                                      }
#line 375 "mdprof_create_feedback.m"
                                                                    else
#line 375 "mdprof_create_feedback.m"
                                                                      if ((strcmp(mdprof_create_feedback__HeadVar__1_1, (MR_String) "implicit-parallelism-dependant-conjunctions-algorithm") == 0))
#line 432 "mdprof_create_feedback.m"
                                                                        {
#line 432 "mdprof_create_feedback.m"
                                                                          *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 19;
#line 432 "mdprof_create_feedback.m"
                                                                          mdprof_create_feedback__succeeded = MR_TRUE;
#line 432 "mdprof_create_feedback.m"
                                                                        }
#line 375 "mdprof_create_feedback.m"
                                                                      else
#line 375 "mdprof_create_feedback.m"
                                                                        mdprof_create_feedback__succeeded = MR_FALSE;
#line 375 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 375 "mdprof_create_feedback.m"
  }
#line 373 "mdprof_create_feedback.m"
}

#line 367 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
mdprof_create_feedback__short_2_p_0(
#line 367 "mdprof_create_feedback.m"
  MR_Char mdprof_create_feedback__HeadVar__1_1,
#line 367 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__HeadVar__2_2)
#line 367 "mdprof_create_feedback.m"
{
#line 369 "mdprof_create_feedback.m"
  {
#line 369 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;

#line 369 "mdprof_create_feedback.m"
    if ((mdprof_create_feedback__HeadVar__1_1 == (MR_Char) 86))
#line 371 "mdprof_create_feedback.m"
      {
#line 371 "mdprof_create_feedback.m"
        *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 1;
#line 371 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 371 "mdprof_create_feedback.m"
      }
#line 369 "mdprof_create_feedback.m"
    else
#line 369 "mdprof_create_feedback.m"
      if ((mdprof_create_feedback__HeadVar__1_1 == (MR_Char) 104))
#line 369 "mdprof_create_feedback.m"
        {
#line 369 "mdprof_create_feedback.m"
          *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 0;
#line 369 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = MR_TRUE;
#line 369 "mdprof_create_feedback.m"
        }
#line 369 "mdprof_create_feedback.m"
      else
#line 369 "mdprof_create_feedback.m"
        if ((mdprof_create_feedback__HeadVar__1_1 == (MR_Char) 118))
#line 370 "mdprof_create_feedback.m"
          {
#line 370 "mdprof_create_feedback.m"
            *mdprof_create_feedback__HeadVar__2_2 = (MR_Integer) 2;
#line 370 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = MR_TRUE;
#line 370 "mdprof_create_feedback.m"
          }
#line 369 "mdprof_create_feedback.m"
        else
#line 369 "mdprof_create_feedback.m"
          mdprof_create_feedback__succeeded = MR_FALSE;
#line 369 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 369 "mdprof_create_feedback.m"
  }
#line 367 "mdprof_create_feedback.m"
}

#line 304 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__read_deep_file_5_p_0(
#line 304 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__Input_6,
#line 304 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Debug_7,
#line 304 "mdprof_create_feedback.m"
  MR_Word * mdprof_create_feedback__MaybeDeep_8)
#line 304 "mdprof_create_feedback.m"
{
#line 307 "mdprof_create_feedback.m"
  {
#line 307 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 307 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__MaybeOutput_13;

#line 318 "mdprof_create_feedback.m"
    if ((mdprof_create_feedback__Debug_7 == (MR_Integer) 0))
#line 320 "mdprof_create_feedback.m"
      mdprof_create_feedback__MaybeOutput_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 318 "mdprof_create_feedback.m"
    else
#line 315 "mdprof_create_feedback.m"
      {
#line 315 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__Stdout_12;

#line 316 "mdprof_create_feedback.m"
        {
#line 316 "mdprof_create_feedback.m"
          mercury__io__stdout_stream_3_p_0(&mdprof_create_feedback__Stdout_12);
        }
#line 317 "mdprof_create_feedback.m"
        {
#line 317 "mdprof_create_feedback.m"
          mdprof_create_feedback__MaybeOutput_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 317 "mdprof_create_feedback.m"
          MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeOutput_13, 0) = ((MR_Box) (mdprof_create_feedback__Stdout_12));
#line 317 "mdprof_create_feedback.m"
        }
#line 315 "mdprof_create_feedback.m"
      }
#line 322 "mdprof_create_feedback.m"
    {
#line 322 "mdprof_create_feedback.m"
      startup__read_and_startup_default_deep_options_9_p_0((MR_String) "DummyServer", (MR_String) "DummyScript", mdprof_create_feedback__Input_6, (MR_Integer) 0, mdprof_create_feedback__MaybeOutput_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdprof_create_feedback__MaybeDeep_8);
#line 322 "mdprof_create_feedback.m"
      return;
    }
#line 307 "mdprof_create_feedback.m"
  }
#line 304 "mdprof_create_feedback.m"
}

#line 294 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__write_version_message_3_p_0(
#line 294 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_4)
#line 294 "mdprof_create_feedback.m"
{
#line 296 "mdprof_create_feedback.m"
  {
#line 296 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 296 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__Version_6;
#line 296 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__Fullarch_7;
#line 296 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_23_23;
#line 296 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_25_25;
#line 296 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_27_27;
#line 296 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_28_28;
#line 296 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_30_30;

#line 297 "mdprof_create_feedback.m"
    {
#line 297 "mdprof_create_feedback.m"
      mercury__library__version_2_p_0(&mdprof_create_feedback__Version_6, &mdprof_create_feedback__Fullarch_7);
    }
#line 3378 "mdprof_create_feedback.c"
    {
#line 3380 "mdprof_create_feedback.c"
      mdprof_create_feedback__V_23_23 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_4, (MR_String) ": Mercury deep profiler\n");
    }
#line 3383 "mdprof_create_feedback.c"
    {
#line 3385 "mdprof_create_feedback.c"
      mercury__io__write_string_3_p_0(mdprof_create_feedback__V_23_23);
    }
#line 3388 "mdprof_create_feedback.c"
    {
#line 3390 "mdprof_create_feedback.c"
      mdprof_create_feedback__V_25_25 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__Fullarch_7, (MR_String) ".\n");
    }
#line 3393 "mdprof_create_feedback.c"
    {
#line 3395 "mdprof_create_feedback.c"
      mdprof_create_feedback__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ", on ", mdprof_create_feedback__V_25_25);
    }
#line 3398 "mdprof_create_feedback.c"
    {
#line 3400 "mdprof_create_feedback.c"
      mdprof_create_feedback__V_28_28 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__Version_6, mdprof_create_feedback__V_27_27);
    }
#line 3403 "mdprof_create_feedback.c"
    {
#line 3405 "mdprof_create_feedback.c"
      mdprof_create_feedback__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "version ", mdprof_create_feedback__V_28_28);
    }
#line 3408 "mdprof_create_feedback.c"
    {
#line 3410 "mdprof_create_feedback.c"
      mercury__io__write_string_3_p_0(mdprof_create_feedback__V_30_30);
#line 3412 "mdprof_create_feedback.c"
      return;
    }
#line 296 "mdprof_create_feedback.m"
  }
#line 294 "mdprof_create_feedback.m"
}

#line 289 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__write_help_message_3_p_0(
#line 289 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_4)
#line 289 "mdprof_create_feedback.m"
{
#line 291 "mdprof_create_feedback.m"
  {
#line 291 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 291 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_8_8;
#line 291 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__V_17_17;

#line 3436 "mdprof_create_feedback.c"
    {
#line 3438 "mdprof_create_feedback.c"
      mdprof_create_feedback__V_17_17 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_4, (MR_String) " [<options>] <profdatafile> <feedbackfile>\n    This command generates feedback information from profiling data.\n\n    The first argument must name a deep profili" "ng data file such as Deep.data.\n    The second argument should be the name of the file into which this command\n    should put the feedback information it genera" "tes.\n\n    You may specify the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version numbe" "r.\n    -v --verbosity  <0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is reco" "mmended and the\n                    default.\n    --debug-read-profile\n                    Generate debugging messages when reading the deep profile\n            " "        and creating the deep structure.\n    --report        Print a report about the feedback information after any\n                    processing has been don" "e.\n\n    The following options select sets of feedback information useful\n    for particular compiler optimizations:\n\n    --implicit-parallelism\n                " "Generate information that the compiler can use for automatic\n                parallelization.\n    --desired-parallelism <value>\n                The amount of de" "sired parallelism for implicit parallelism,\n                which must be a floating point number above 1.0.\n                Note: This option is currently igno" "red.\n    --implicit-parallelism-intermodule-var-use\n                Assume that the compiler will be able to push signals and waits\n                for futures " "across module boundaries.\n    --ipar-sparking-cost <value>\n                The cost of creating a spark, measured in the deep profiler\'s\n                call se" "quence counts.\n    --ipar-sparking-delay <value>\n                The time taken from the time a spark is created until the spark\n                is executed by " "another processor, assuming that there is a free\n                processor.\n    --ipar-barrier-cost <value>\n                The cost of executing the barrier co" "de at the end of each\n                parallel conjunct.\n    --ipar-future-signal-cost <value>\n                The cost of the signal() call for the producer of" " a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-future-wait-cost <value>\n                The cost of the wait() " "call for the consumer of a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-context-wakeup-delay <value>\n           " "     The time taken for a context to resume execution after being\n                placed on the run queue. This is used to estimate the impact\n                o" "f blocking of a context\'s execution, it is measured in the\n                profiler\'s call sequence counts.\n    --ipar-clique-cost-threshold <value>\n           " "     The cost threshold for cliques to be considered for implicit\n                parallelism, measured on the profiler\'s call sequence counts.\n    --ipar-call-" "site-cost-threshold <value>\n                The cost of a call site to be considered for parallelism\n                against another call site.\n    --no-ipar-de" "p-conjs\n                Disable parallelisation of dependent conjunctions.\n    --ipar-speedup-alg <alg>\n                Choose the algorithm that is used to est" "imate the speedup for\n                dependent calculations. The available algorithms are:\n                    overlap: Compute the overlap between dependent\n " "                     conjunctions.\n                    num_vars: Use the number of shared variables as a proxy for\n                      the amount of overlap a" "vailable.\n                    naive: Ignore dependencies.\n                The default is overlap.\n    --ipar-speedup-threshold <value>\n                The thres" "hold that a speedup ratio must meet before the\n                feedback tool will accept a parallelization. It must be\n                a floating point number, " "which must be at least 1.0.\n                If it is e.g. 1.02, then the feedback tool will ignore\n                parallelizations that promise less than a 2% " "local speedup.\n    --ipar-best-par-alg <alg>\n                Select which algorithm to use to find the best way to\n                parallelise a conjunction. Th" "e available algorithms are:\n                    greedy: A greedy algorithm with a linear time complexity.\n                    complete: A complete algorithm wit" "h a branch and bound\n                      search. This can be slow for problems larger than 50\n                      conjuncts, since it has an exponential com" "plexity.\n                    complete-size(N): As above exept that it takes a single\n                      parameter, N. If a conjunction has more than N\n      " "                conjuncts, then the greedy algorithm will be used.\n                    complete-branches(N): The same as the complete algorithm,\n               " "       except that it allows at most N branches to be created\n                      during the search. Once N branches have been created,\n                      " "a greedy search is used on each open branch.\n                The default is complete-branches(1000).\n\n    The following options select specific types of feedbac" "k information\n    and parameterise them:\n\n    --candidate-parallel-conjunctions\n                Produce a list of candidate parallel conjunctions for implicit\n " "               parallelism. This option uses the implicit parallelism\n                settings above.\n\n");
    }
#line 3441 "mdprof_create_feedback.c"
    {
#line 3443 "mdprof_create_feedback.c"
      mdprof_create_feedback__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", mdprof_create_feedback__V_17_17);
    }
#line 292 "mdprof_create_feedback.m"
    {
#line 292 "mdprof_create_feedback.m"
      mercury__io__write_string_3_p_0(mdprof_create_feedback__V_8_8);
#line 292 "mdprof_create_feedback.m"
      return;
    }
#line 291 "mdprof_create_feedback.m"
  }
#line 289 "mdprof_create_feedback.m"
}

#line 108 "mdprof_create_feedback.m"
static void MR_CALL 
mdprof_create_feedback__generate_requested_feedback_7_p_0(
#line 108 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__ProgName_8,
#line 108 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__Options_9,
#line 108 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__InputFileName_10,
#line 108 "mdprof_create_feedback.m"
  MR_String mdprof_create_feedback__OutputFileName_11,
#line 108 "mdprof_create_feedback.m"
  MR_Word mdprof_create_feedback__RequestedFeedbackInfo_12)
#line 108 "mdprof_create_feedback.m"
{
#line 113 "mdprof_create_feedback.m"
  {
#line 113 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 113 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__Stderr_14;
#line 113 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__MaybeParallelize_15;

#line 114 "mdprof_create_feedback.m"
    {
#line 114 "mdprof_create_feedback.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_create_feedback__Stderr_14);
    }
#line 115 "mdprof_create_feedback.m"
    mdprof_create_feedback__MaybeParallelize_15 = (MR_Word) mdprof_create_feedback__RequestedFeedbackInfo_12;
#line 174 "mdprof_create_feedback.m"
    if ((mdprof_create_feedback__MaybeParallelize_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "mdprof_create_feedback.m"
      {
#line 175 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__V_139_139;

#line 3496 "mdprof_create_feedback.c"
        {
#line 3498 "mdprof_create_feedback.c"
          mdprof_create_feedback__V_139_139 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_8, (MR_String) ": options do not request any form of feedback\n");
        }
#line 3501 "mdprof_create_feedback.c"
        {
#line 3503 "mdprof_create_feedback.c"
          mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_14, mdprof_create_feedback__V_139_139);
#line 3505 "mdprof_create_feedback.c"
          return;
        }
#line 175 "mdprof_create_feedback.m"
      }
#line 174 "mdprof_create_feedback.m"
    else
#line 117 "mdprof_create_feedback.m"
      {
#line 117 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__TypeCtorInfo_125_125 = (MR_Word) &mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0;
#line 117 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__DebugReadProfile_17;
#line 117 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__Report_18;
#line 117 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__MaybeDeep_19;

#line 118 "mdprof_create_feedback.m"
        {
#line 118 "mdprof_create_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_125_125, mdprof_create_feedback__Options_9, ((MR_Box) ((MR_Integer) 3)), &mdprof_create_feedback__DebugReadProfile_17);
        }
#line 119 "mdprof_create_feedback.m"
        {
#line 119 "mdprof_create_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_125_125, mdprof_create_feedback__Options_9, ((MR_Box) ((MR_Integer) 4)), &mdprof_create_feedback__Report_18);
        }
#line 120 "mdprof_create_feedback.m"
        {
#line 120 "mdprof_create_feedback.m"
          mdprof_create_feedback__read_deep_file_5_p_0(mdprof_create_feedback__InputFileName_10, mdprof_create_feedback__DebugReadProfile_17, &mdprof_create_feedback__MaybeDeep_19);
        }
#line 168 "mdprof_create_feedback.m"
        if (((MR_tag((MR_Word) mdprof_create_feedback__MaybeDeep_19)) == (MR_mktag((MR_Integer) 1))))
#line 169 "mdprof_create_feedback.m"
          {
#line 169 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__Error_87 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeDeep_19, (MR_Integer) 0)));
#line 169 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_141_141;
#line 169 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_143_143;
#line 169 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_144_144;
#line 169 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_146_146;
#line 169 "mdprof_create_feedback.m"
            MR_String mdprof_create_feedback__V_147_147;

#line 170 "mdprof_create_feedback.m"
            {
#line 170 "mdprof_create_feedback.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 3560 "mdprof_create_feedback.c"
            {
#line 3562 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_141_141 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__Error_87, (MR_String) "\n");
            }
#line 3565 "mdprof_create_feedback.c"
            {
#line 3567 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_143_143 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_create_feedback__V_141_141);
            }
#line 3570 "mdprof_create_feedback.c"
            {
#line 3572 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_144_144 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__InputFileName_10, mdprof_create_feedback__V_143_143);
            }
#line 3575 "mdprof_create_feedback.c"
            {
#line 3577 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_146_146 = mercury__string__f_43_43_2_f_0((MR_String) ": error reading ", mdprof_create_feedback__V_144_144);
            }
#line 3580 "mdprof_create_feedback.c"
            {
#line 3582 "mdprof_create_feedback.c"
              mdprof_create_feedback__V_147_147 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_8, mdprof_create_feedback__V_146_146);
            }
#line 3585 "mdprof_create_feedback.c"
            {
#line 3587 "mdprof_create_feedback.c"
              mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_14, mdprof_create_feedback__V_147_147);
#line 3589 "mdprof_create_feedback.c"
              return;
            }
#line 169 "mdprof_create_feedback.m"
          }
#line 168 "mdprof_create_feedback.m"
        else
#line 122 "mdprof_create_feedback.m"
          {
#line 122 "mdprof_create_feedback.m"
            MR_Word mdprof_create_feedback__Deep_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__MaybeDeep_19, (MR_Integer) 0)));
#line 122 "mdprof_create_feedback.m"
            MR_Word mdprof_create_feedback__MaybeProgRep_21;

#line 123 "mdprof_create_feedback.m"
            {
#line 123 "mdprof_create_feedback.m"
              profile__deep_get_maybe_progrep_2_p_0(mdprof_create_feedback__Deep_20, &mdprof_create_feedback__MaybeProgRep_21);
            }
#line 163 "mdprof_create_feedback.m"
            if (((MR_tag((MR_Word) mdprof_create_feedback__MaybeProgRep_21)) == (MR_mktag((MR_Integer) 1))))
#line 164 "mdprof_create_feedback.m"
              {
#line 164 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__Error_86 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeProgRep_21, (MR_Integer) 0)));
#line 164 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_149_149;
#line 164 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_151_151;
#line 164 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_152_152;

#line 165 "mdprof_create_feedback.m"
                {
#line 165 "mdprof_create_feedback.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 3626 "mdprof_create_feedback.c"
                {
#line 3628 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_149_149 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__Error_86, (MR_String) "\n");
                }
#line 3631 "mdprof_create_feedback.c"
                {
#line 3633 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_151_151 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_create_feedback__V_149_149);
                }
#line 3636 "mdprof_create_feedback.c"
                {
#line 3638 "mdprof_create_feedback.c"
                  mdprof_create_feedback__V_152_152 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_8, mdprof_create_feedback__V_151_151);
                }
#line 3641 "mdprof_create_feedback.c"
                {
#line 3643 "mdprof_create_feedback.c"
                  mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_14, mdprof_create_feedback__V_152_152);
#line 3645 "mdprof_create_feedback.c"
                  return;
                }
#line 164 "mdprof_create_feedback.m"
              }
#line 163 "mdprof_create_feedback.m"
            else
#line 125 "mdprof_create_feedback.m"
              {
#line 125 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__ProfileProgName_23;
#line 125 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__FeedbackReadResult_24;
#line 125 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 0)));
#line 126 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 1)));
#line 126 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_89_89 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 2)));
#line 126 "mdprof_create_feedback.m"
                MR_String mdprof_create_feedback__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 3)));
#line 126 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 4)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 5)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 6)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 7)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 8)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 9)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 10)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 11)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 12)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 13)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 14)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 15)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 16)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 17)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_105_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 18)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_106_106 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 19)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_107_107 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 20)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_108_108 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 21)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_109_109 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 22)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 23)));
#line 126 "mdprof_create_feedback.m"
                MR_ArrayPtr mdprof_create_feedback__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 24)));
#line 126 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 25)));
#line 126 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 26)));
#line 126 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 27)));
#line 126 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__Deep_20, (MR_Integer) 28)));
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_116_116;
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_117_117;
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_118_118;
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_119_119;
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_120_120;
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_121_121;
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_122_122;
#line 126 "mdprof_create_feedback.m"
                MR_Integer mdprof_create_feedback__V_123_123;
#line 126 "mdprof_create_feedback.m"
                MR_Word mdprof_create_feedback__V_124_124;

#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__ProfileProgName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 0)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 1)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 2)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 3)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 4)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 5)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 6)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 7)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 8)));
#line 126 "mdprof_create_feedback.m"
                mdprof_create_feedback__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__V_65_65, (MR_Integer) 9)));
#line 127 "mdprof_create_feedback.m"
                {
#line 127 "mdprof_create_feedback.m"
                  mdbcomp__feedback__read_or_create_5_p_0(mdprof_create_feedback__OutputFileName_11, mdprof_create_feedback__ProfileProgName_23, &mdprof_create_feedback__FeedbackReadResult_24);
                }
#line 156 "mdprof_create_feedback.m"
                if (((MR_tag((MR_Word) mdprof_create_feedback__FeedbackReadResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 157 "mdprof_create_feedback.m"
                  {
#line 157 "mdprof_create_feedback.m"
                    MR_Word mdprof_create_feedback__FeedbackReadError_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__FeedbackReadResult_24, (MR_Integer) 0)));
#line 157 "mdprof_create_feedback.m"
                    MR_String mdprof_create_feedback__Message_33;

#line 158 "mdprof_create_feedback.m"
                    {
#line 158 "mdprof_create_feedback.m"
                      mdbcomp__feedback__read_error_message_string_3_p_0(mdprof_create_feedback__OutputFileName_11, mdprof_create_feedback__FeedbackReadError_32, &mdprof_create_feedback__Message_33);
                    }
#line 160 "mdprof_create_feedback.m"
                    {
#line 160 "mdprof_create_feedback.m"
                      mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_14, mdprof_create_feedback__Message_33);
                    }
#line 161 "mdprof_create_feedback.m"
                    {
#line 161 "mdprof_create_feedback.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 161 "mdprof_create_feedback.m"
                      return;
                    }
#line 157 "mdprof_create_feedback.m"
                  }
#line 156 "mdprof_create_feedback.m"
                else
#line 130 "mdprof_create_feedback.m"
                  {
#line 130 "mdprof_create_feedback.m"
                    MR_Word mdprof_create_feedback__Feedback0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__FeedbackReadResult_24, (MR_Integer) 0)));
#line 130 "mdprof_create_feedback.m"
                    MR_Word mdprof_create_feedback__Messages_26;
#line 130 "mdprof_create_feedback.m"
                    MR_Word mdprof_create_feedback__Feedback_27;
#line 130 "mdprof_create_feedback.m"
                    MR_Word mdprof_create_feedback__WriteResult_28;
#line 130 "mdprof_create_feedback.m"
                    MR_Integer mdprof_create_feedback__VerbosityLevel_31;

#line 131 "mdprof_create_feedback.m"
                    {
#line 131 "mdprof_create_feedback.m"
                      mdprof_create_feedback__process_deep_to_feedback_5_p_0(mdprof_create_feedback__RequestedFeedbackInfo_12, mdprof_create_feedback__Deep_20, &mdprof_create_feedback__Messages_26, mdprof_create_feedback__Feedback0_25, &mdprof_create_feedback__Feedback_27);
                    }
#line 136 "mdprof_create_feedback.m"
                    if ((mdprof_create_feedback__Report_18 == (MR_Integer) 0))
#line 137 "mdprof_create_feedback.m"
                      {
#line 137 "mdprof_create_feedback.m"
                      }
#line 136 "mdprof_create_feedback.m"
                    else
#line 135 "mdprof_create_feedback.m"
                      {
#line 135 "mdprof_create_feedback.m"
                        mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0(mdprof_create_feedback__ProfileProgName_23, mdprof_create_feedback__Feedback_27);
                      }
#line 139 "mdprof_create_feedback.m"
                    {
#line 139 "mdprof_create_feedback.m"
                      mdbcomp__feedback__write_feedback_file_6_p_0(mdprof_create_feedback__OutputFileName_11, mdprof_create_feedback__ProfileProgName_23, mdprof_create_feedback__Feedback_27, &mdprof_create_feedback__WriteResult_28);
                    }
#line 143 "mdprof_create_feedback.m"
                    if ((mdprof_create_feedback__WriteResult_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 142 "mdprof_create_feedback.m"
                      {
#line 142 "mdprof_create_feedback.m"
                      }
#line 143 "mdprof_create_feedback.m"
                    else
#line 143 "mdprof_create_feedback.m"
                      if (((MR_tag((MR_Word) mdprof_create_feedback__WriteResult_28)) == (MR_mktag((MR_Integer) 1))))
#line 146 "mdprof_create_feedback.m"
                        {
#line 146 "mdprof_create_feedback.m"
                          MR_Word mdprof_create_feedback__Error_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__WriteResult_28, (MR_Integer) 0)));
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__ErrorMessage_30;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_154_154;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_156_156;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_157_157;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_159_159;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_160_160;

#line 147 "mdprof_create_feedback.m"
                          {
#line 147 "mdprof_create_feedback.m"
                            mercury__io__error_message_2_p_0(mdprof_create_feedback__Error_29, &mdprof_create_feedback__ErrorMessage_30);
                          }
#line 3858 "mdprof_create_feedback.c"
                          {
#line 3860 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_154_154 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ErrorMessage_30, (MR_String) "\n");
                          }
#line 3863 "mdprof_create_feedback.c"
                          {
#line 3865 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_create_feedback__V_154_154);
                          }
#line 3868 "mdprof_create_feedback.c"
                          {
#line 3870 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_157_157 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__OutputFileName_11, mdprof_create_feedback__V_156_156);
                          }
#line 3873 "mdprof_create_feedback.c"
                          {
#line 3875 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_create_feedback__V_157_157);
                          }
#line 3878 "mdprof_create_feedback.c"
                          {
#line 3880 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_160_160 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_8, mdprof_create_feedback__V_159_159);
                          }
#line 3883 "mdprof_create_feedback.c"
                          {
#line 3885 "mdprof_create_feedback.c"
                            mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_14, mdprof_create_feedback__V_160_160);
                          }
#line 151 "mdprof_create_feedback.m"
                          {
#line 151 "mdprof_create_feedback.m"
                            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                          }
#line 146 "mdprof_create_feedback.m"
                        }
#line 143 "mdprof_create_feedback.m"
                      else
#line 146 "mdprof_create_feedback.m"
                        {
#line 146 "mdprof_create_feedback.m"
                          MR_Word mdprof_create_feedback__Error_126 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdprof_create_feedback__WriteResult_28, (MR_Integer) 0)));
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__ErrorMessage_127;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_162_162;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_164_164;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_165_165;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_167_167;
#line 146 "mdprof_create_feedback.m"
                          MR_String mdprof_create_feedback__V_168_168;

#line 147 "mdprof_create_feedback.m"
                          {
#line 147 "mdprof_create_feedback.m"
                            mercury__io__error_message_2_p_0(mdprof_create_feedback__Error_126, &mdprof_create_feedback__ErrorMessage_127);
                          }
#line 3919 "mdprof_create_feedback.c"
                          {
#line 3921 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_162_162 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ErrorMessage_127, (MR_String) "\n");
                          }
#line 3924 "mdprof_create_feedback.c"
                          {
#line 3926 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_164_164 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_create_feedback__V_162_162);
                          }
#line 3929 "mdprof_create_feedback.c"
                          {
#line 3931 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_165_165 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__OutputFileName_11, mdprof_create_feedback__V_164_164);
                          }
#line 3934 "mdprof_create_feedback.c"
                          {
#line 3936 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_167_167 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_create_feedback__V_165_165);
                          }
#line 3939 "mdprof_create_feedback.c"
                          {
#line 3941 "mdprof_create_feedback.c"
                            mdprof_create_feedback__V_168_168 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_8, mdprof_create_feedback__V_167_167);
                          }
#line 3944 "mdprof_create_feedback.c"
                          {
#line 3946 "mdprof_create_feedback.c"
                            mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_14, mdprof_create_feedback__V_168_168);
                          }
#line 151 "mdprof_create_feedback.m"
                          {
#line 151 "mdprof_create_feedback.m"
                            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                          }
#line 146 "mdprof_create_feedback.m"
                        }
#line 153 "mdprof_create_feedback.m"
                    {
#line 153 "mdprof_create_feedback.m"
                      mercury__getopt__lookup_int_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_125_125, mdprof_create_feedback__Options_9, ((MR_Box) ((MR_Integer) 2)), &mdprof_create_feedback__VerbosityLevel_31);
                    }
#line 154 "mdprof_create_feedback.m"
                    {
#line 154 "mdprof_create_feedback.m"
                      message__set_verbosity_level_3_p_0(mdprof_create_feedback__VerbosityLevel_31);
                    }
#line 155 "mdprof_create_feedback.m"
                    {
#line 155 "mdprof_create_feedback.m"
                      message__write_out_messages_4_p_0(mdprof_create_feedback__Stderr_14, mdprof_create_feedback__Messages_26);
#line 155 "mdprof_create_feedback.m"
                      return;
                    }
#line 130 "mdprof_create_feedback.m"
                  }
#line 125 "mdprof_create_feedback.m"
              }
#line 122 "mdprof_create_feedback.m"
          }
#line 117 "mdprof_create_feedback.m"
      }
#line 113 "mdprof_create_feedback.m"
  }
#line 108 "mdprof_create_feedback.m"
}

#line 65 "mdprof_create_feedback.m"
static void MR_CALL 
main_2_p_0_3(
#line 65 "mdprof_create_feedback.m"
  void * mdprof_create_feedback__env_ptr_arg)
#line 65 "mdprof_create_feedback.m"
{
#line 65 "mdprof_create_feedback.m"
  {
#line 65 "mdprof_create_feedback.m"
    struct mdprof_create_feedback__main_2_p_0_4_env_0_s * mdprof_create_feedback__env_ptr = (struct mdprof_create_feedback__main_2_p_0_4_env_0_s *) mdprof_create_feedback__env_ptr_arg;

#line 65 "mdprof_create_feedback.m"
    *((mdprof_create_feedback__env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_create_feedback__env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 65 "mdprof_create_feedback.m"
    *((mdprof_create_feedback__env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_create_feedback__env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 65 "mdprof_create_feedback.m"
    {
#line 65 "mdprof_create_feedback.m"
      ((mdprof_create_feedback__env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__cont)((mdprof_create_feedback__env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__cont_env_ptr);
#line 65 "mdprof_create_feedback.m"
      return;
    }
#line 65 "mdprof_create_feedback.m"
  }
#line 65 "mdprof_create_feedback.m"
}

#line 65 "mdprof_create_feedback.m"
static void MR_CALL 
main_2_p_0_4(
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_1,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2,
#line 65 "mdprof_create_feedback.m"
  MR_Cont mdprof_create_feedback__cont,
#line 65 "mdprof_create_feedback.m"
  void * mdprof_create_feedback__cont_env_ptr)
#line 65 "mdprof_create_feedback.m"
{
#line 65 "mdprof_create_feedback.m"
  {
#line 65 "mdprof_create_feedback.m"
    struct mdprof_create_feedback__main_2_p_0_4_env_0_s mdprof_create_feedback__env;

#line 65 "mdprof_create_feedback.m"
    (mdprof_create_feedback__env).mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_create_feedback__wrapper_arg_1;
#line 65 "mdprof_create_feedback.m"
    (mdprof_create_feedback__env).mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_create_feedback__wrapper_arg_2;
#line 65 "mdprof_create_feedback.m"
    (mdprof_create_feedback__env).mdprof_create_feedback__main_2_p_0_4_env_0__cont = mdprof_create_feedback__cont;
#line 65 "mdprof_create_feedback.m"
    (mdprof_create_feedback__env).mdprof_create_feedback__main_2_p_0_4_env_0__cont_env_ptr = mdprof_create_feedback__cont_env_ptr;
#line 65 "mdprof_create_feedback.m"
    {
#line 65 "mdprof_create_feedback.m"
      MR_Box mdprof_create_feedback__closure = mdprof_create_feedback__closure_arg;

#line 65 "mdprof_create_feedback.m"
      {
#line 65 "mdprof_create_feedback.m"
        mdprof_create_feedback__defaults_2_p_0(&(mdprof_create_feedback__env).mdprof_create_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_create_feedback__env).mdprof_create_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_create_feedback__env);
      }
#line 65 "mdprof_create_feedback.m"
    }
#line 65 "mdprof_create_feedback.m"
  }
#line 65 "mdprof_create_feedback.m"
}

#line 65 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2)
#line 65 "mdprof_create_feedback.m"
{
#line 65 "mdprof_create_feedback.m"
  {
#line 65 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 65 "mdprof_create_feedback.m"
    MR_Box mdprof_create_feedback__closure = mdprof_create_feedback__closure_arg;
#line 65 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__conv1_HeadVar__2_2;

#line 65 "mdprof_create_feedback.m"
    {
#line 65 "mdprof_create_feedback.m"
      mdprof_create_feedback__succeeded = mdprof_create_feedback__long_2_p_0(((MR_String) mdprof_create_feedback__wrapper_arg_1), &mdprof_create_feedback__conv1_HeadVar__2_2);
    }
#line 65 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 65 "mdprof_create_feedback.m"
      {
#line 65 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_create_feedback__conv1_HeadVar__2_2));
#line 65 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 65 "mdprof_create_feedback.m"
      }
#line 65 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 65 "mdprof_create_feedback.m"
  }
#line 65 "mdprof_create_feedback.m"
}

#line 65 "mdprof_create_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__closure_arg,
#line 65 "mdprof_create_feedback.m"
  MR_Box mdprof_create_feedback__wrapper_arg_1,
#line 65 "mdprof_create_feedback.m"
  MR_Box * mdprof_create_feedback__wrapper_arg_2)
#line 65 "mdprof_create_feedback.m"
{
#line 65 "mdprof_create_feedback.m"
  {
#line 65 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 65 "mdprof_create_feedback.m"
    MR_Box mdprof_create_feedback__closure = mdprof_create_feedback__closure_arg;
#line 65 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__conv0_HeadVar__2_2;

#line 65 "mdprof_create_feedback.m"
    {
#line 65 "mdprof_create_feedback.m"
      mdprof_create_feedback__succeeded = mdprof_create_feedback__short_2_p_0(((MR_Char) (MR_Word) mdprof_create_feedback__wrapper_arg_1), &mdprof_create_feedback__conv0_HeadVar__2_2);
    }
#line 65 "mdprof_create_feedback.m"
    if (mdprof_create_feedback__succeeded)
#line 65 "mdprof_create_feedback.m"
      {
#line 65 "mdprof_create_feedback.m"
        *mdprof_create_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_create_feedback__conv0_HeadVar__2_2));
#line 65 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = MR_TRUE;
#line 65 "mdprof_create_feedback.m"
      }
#line 65 "mdprof_create_feedback.m"
    return mdprof_create_feedback__succeeded;
#line 65 "mdprof_create_feedback.m"
  }
#line 65 "mdprof_create_feedback.m"
}

#line 24 "mdprof_create_feedback.m"
void MR_CALL 
main_2_p_0(void)
#line 24 "mdprof_create_feedback.m"
{
#line 62 "mdprof_create_feedback.m"
  {
#line 62 "mdprof_create_feedback.m"
    MR_bool mdprof_create_feedback__succeeded;
#line 62 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__TypeCtorInfo_64_64;
#line 62 "mdprof_create_feedback.m"
    MR_String mdprof_create_feedback__ProgName_4;
#line 62 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__Args0_5;
#line 62 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__Args_6;
#line 62 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__MaybeOptions_7;
#line 62 "mdprof_create_feedback.m"
    MR_Word mdprof_create_feedback__Stderr_8;

#line 63 "mdprof_create_feedback.m"
    {
#line 63 "mdprof_create_feedback.m"
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_create_feedback", &mdprof_create_feedback__ProgName_4);
    }
#line 64 "mdprof_create_feedback.m"
    {
#line 64 "mdprof_create_feedback.m"
      mercury__io__command_line_arguments_3_p_0(&mdprof_create_feedback__Args0_5);
    }
#line 4175 "mdprof_create_feedback.c"
    mdprof_create_feedback__TypeCtorInfo_64_64 = (MR_Word) &mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0;
#line 65 "mdprof_create_feedback.m"
    {
#line 65 "mdprof_create_feedback.m"
      mercury__getopt__process_options_4_p_0(mdprof_create_feedback__TypeCtorInfo_64_64, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_3[3]), mdprof_create_feedback__Args0_5, &mdprof_create_feedback__Args_6, &mdprof_create_feedback__MaybeOptions_7);
    }
#line 67 "mdprof_create_feedback.m"
    {
#line 67 "mdprof_create_feedback.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_create_feedback__Stderr_8);
    }
#line 100 "mdprof_create_feedback.m"
    if (((MR_tag((MR_Word) mdprof_create_feedback__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
#line 101 "mdprof_create_feedback.m"
      {
#line 101 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__Msg_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__MaybeOptions_7, (MR_Integer) 0)));
#line 101 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__V_76_76;
#line 101 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__V_78_78;
#line 101 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__V_79_79;
#line 101 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__V_84_84;
#line 101 "mdprof_create_feedback.m"
        MR_String mdprof_create_feedback__V_93_93;

#line 4204 "mdprof_create_feedback.c"
        {
#line 4206 "mdprof_create_feedback.c"
          mdprof_create_feedback__V_76_76 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__Msg_22, (MR_String) "\n");
        }
#line 4209 "mdprof_create_feedback.c"
        {
#line 4211 "mdprof_create_feedback.c"
          mdprof_create_feedback__V_78_78 = mercury__string__f_43_43_2_f_0((MR_String) ": error parsing options: ", mdprof_create_feedback__V_76_76);
        }
#line 4214 "mdprof_create_feedback.c"
        {
#line 4216 "mdprof_create_feedback.c"
          mdprof_create_feedback__V_79_79 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_4, mdprof_create_feedback__V_78_78);
        }
#line 4219 "mdprof_create_feedback.c"
        {
#line 4221 "mdprof_create_feedback.c"
          mercury__io__write_string_4_p_0(mdprof_create_feedback__Stderr_8, mdprof_create_feedback__V_79_79);
        }
#line 4224 "mdprof_create_feedback.c"
        {
#line 4226 "mdprof_create_feedback.c"
          mdprof_create_feedback__V_93_93 = mercury__string__f_43_43_2_f_0(mdprof_create_feedback__ProgName_4, (MR_String) " [<options>] <profdatafile> <feedbackfile>\n    This command generates feedback information from profiling data.\n\n    The first argument must name a deep profili" "ng data file such as Deep.data.\n    The second argument should be the name of the file into which this command\n    should put the feedback information it genera" "tes.\n\n    You may specify the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version numbe" "r.\n    -v --verbosity  <0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is reco" "mmended and the\n                    default.\n    --debug-read-profile\n                    Generate debugging messages when reading the deep profile\n            " "        and creating the deep structure.\n    --report        Print a report about the feedback information after any\n                    processing has been don" "e.\n\n    The following options select sets of feedback information useful\n    for particular compiler optimizations:\n\n    --implicit-parallelism\n                " "Generate information that the compiler can use for automatic\n                parallelization.\n    --desired-parallelism <value>\n                The amount of de" "sired parallelism for implicit parallelism,\n                which must be a floating point number above 1.0.\n                Note: This option is currently igno" "red.\n    --implicit-parallelism-intermodule-var-use\n                Assume that the compiler will be able to push signals and waits\n                for futures " "across module boundaries.\n    --ipar-sparking-cost <value>\n                The cost of creating a spark, measured in the deep profiler\'s\n                call se" "quence counts.\n    --ipar-sparking-delay <value>\n                The time taken from the time a spark is created until the spark\n                is executed by " "another processor, assuming that there is a free\n                processor.\n    --ipar-barrier-cost <value>\n                The cost of executing the barrier co" "de at the end of each\n                parallel conjunct.\n    --ipar-future-signal-cost <value>\n                The cost of the signal() call for the producer of" " a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-future-wait-cost <value>\n                The cost of the wait() " "call for the consumer of a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-context-wakeup-delay <value>\n           " "     The time taken for a context to resume execution after being\n                placed on the run queue. This is used to estimate the impact\n                o" "f blocking of a context\'s execution, it is measured in the\n                profiler\'s call sequence counts.\n    --ipar-clique-cost-threshold <value>\n           " "     The cost threshold for cliques to be considered for implicit\n                parallelism, measured on the profiler\'s call sequence counts.\n    --ipar-call-" "site-cost-threshold <value>\n                The cost of a call site to be considered for parallelism\n                against another call site.\n    --no-ipar-de" "p-conjs\n                Disable parallelisation of dependent conjunctions.\n    --ipar-speedup-alg <alg>\n                Choose the algorithm that is used to est" "imate the speedup for\n                dependent calculations. The available algorithms are:\n                    overlap: Compute the overlap between dependent\n " "                     conjunctions.\n                    num_vars: Use the number of shared variables as a proxy for\n                      the amount of overlap a" "vailable.\n                    naive: Ignore dependencies.\n                The default is overlap.\n    --ipar-speedup-threshold <value>\n                The thres" "hold that a speedup ratio must meet before the\n                feedback tool will accept a parallelization. It must be\n                a floating point number, " "which must be at least 1.0.\n                If it is e.g. 1.02, then the feedback tool will ignore\n                parallelizations that promise less than a 2% " "local speedup.\n    --ipar-best-par-alg <alg>\n                Select which algorithm to use to find the best way to\n                parallelise a conjunction. Th" "e available algorithms are:\n                    greedy: A greedy algorithm with a linear time complexity.\n                    complete: A complete algorithm wit" "h a branch and bound\n                      search. This can be slow for problems larger than 50\n                      conjuncts, since it has an exponential com" "plexity.\n                    complete-size(N): As above exept that it takes a single\n                      parameter, N. If a conjunction has more than N\n      " "                conjuncts, then the greedy algorithm will be used.\n                    complete-branches(N): The same as the complete algorithm,\n               " "       except that it allows at most N branches to be created\n                      during the search. Once N branches have been created,\n                      " "a greedy search is used on each open branch.\n                The default is complete-branches(1000).\n\n    The following options select specific types of feedbac" "k information\n    and parameterise them:\n\n    --candidate-parallel-conjunctions\n                Produce a list of candidate parallel conjunctions for implicit\n " "               parallelism. This option uses the implicit parallelism\n                settings above.\n\n");
        }
#line 4229 "mdprof_create_feedback.c"
        {
#line 4231 "mdprof_create_feedback.c"
          mdprof_create_feedback__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", mdprof_create_feedback__V_93_93);
        }
#line 292 "mdprof_create_feedback.m"
        {
#line 292 "mdprof_create_feedback.m"
          mercury__io__write_string_3_p_0(mdprof_create_feedback__V_84_84);
        }
#line 105 "mdprof_create_feedback.m"
        {
#line 105 "mdprof_create_feedback.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 105 "mdprof_create_feedback.m"
          return;
        }
#line 101 "mdprof_create_feedback.m"
      }
#line 100 "mdprof_create_feedback.m"
    else
#line 69 "mdprof_create_feedback.m"
      {
#line 69 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__Options0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_create_feedback__MaybeOptions_7, (MR_Integer) 0)));
#line 69 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__Options_10;
#line 69 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__Help_11;
#line 69 "mdprof_create_feedback.m"
        MR_Word mdprof_create_feedback__Version_12;

#line 70 "mdprof_create_feedback.m"
        {
#line 70 "mdprof_create_feedback.m"
          mdprof_create_feedback__post_process_options_5_p_0(mdprof_create_feedback__ProgName_4, mdprof_create_feedback__Options0_9, &mdprof_create_feedback__Options_10);
        }
#line 71 "mdprof_create_feedback.m"
        {
#line 71 "mdprof_create_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_64_64, mdprof_create_feedback__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_create_feedback__Help_11);
        }
#line 72 "mdprof_create_feedback.m"
        {
#line 72 "mdprof_create_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_create_feedback__TypeCtorInfo_64_64, mdprof_create_feedback__Options_10, ((MR_Box) ((MR_Integer) 1)), &mdprof_create_feedback__Version_12);
        }
#line 73 "mdprof_create_feedback.m"
        mdprof_create_feedback__succeeded = (mdprof_create_feedback__Version_12 == (MR_Integer) 1);
#line 75 "mdprof_create_feedback.m"
        if (mdprof_create_feedback__succeeded)
#line 74 "mdprof_create_feedback.m"
          {
#line 74 "mdprof_create_feedback.m"
            mdprof_create_feedback__write_version_message_3_p_0(mdprof_create_feedback__ProgName_4);
#line 74 "mdprof_create_feedback.m"
            return;
          }
#line 75 "mdprof_create_feedback.m"
        else
#line 77 "mdprof_create_feedback.m"
          {
#line 75 "mdprof_create_feedback.m"
            mdprof_create_feedback__succeeded = (mdprof_create_feedback__Help_11 == (MR_Integer) 1);
#line 77 "mdprof_create_feedback.m"
            if (mdprof_create_feedback__succeeded)
#line 76 "mdprof_create_feedback.m"
              {
#line 76 "mdprof_create_feedback.m"
                mdprof_create_feedback__write_help_message_3_p_0(mdprof_create_feedback__ProgName_4);
#line 76 "mdprof_create_feedback.m"
                return;
              }
#line 77 "mdprof_create_feedback.m"
            else
#line 91 "mdprof_create_feedback.m"
              if ((mdprof_create_feedback__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "mdprof_create_feedback.m"
                {
#line 96 "mdprof_create_feedback.m"
                  {
#line 96 "mdprof_create_feedback.m"
                    mdprof_create_feedback__write_help_message_3_p_0(mdprof_create_feedback__ProgName_4);
                  }
#line 97 "mdprof_create_feedback.m"
                  {
#line 97 "mdprof_create_feedback.m"
                    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 97 "mdprof_create_feedback.m"
                    return;
                  }
#line 95 "mdprof_create_feedback.m"
                }
#line 91 "mdprof_create_feedback.m"
              else
#line 91 "mdprof_create_feedback.m"
                {
#line 91 "mdprof_create_feedback.m"
                  MR_Word mdprof_create_feedback__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__Args_6, (MR_Integer) 1)));
#line 91 "mdprof_create_feedback.m"
                  MR_String mdprof_create_feedback__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__Args_6, (MR_Integer) 0)));

#line 91 "mdprof_create_feedback.m"
                  if ((mdprof_create_feedback__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "mdprof_create_feedback.m"
                    {
#line 96 "mdprof_create_feedback.m"
                      {
#line 96 "mdprof_create_feedback.m"
                        mdprof_create_feedback__write_help_message_3_p_0(mdprof_create_feedback__ProgName_4);
                      }
#line 97 "mdprof_create_feedback.m"
                      {
#line 97 "mdprof_create_feedback.m"
                        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 97 "mdprof_create_feedback.m"
                        return;
                      }
#line 95 "mdprof_create_feedback.m"
                    }
#line 91 "mdprof_create_feedback.m"
                  else
#line 91 "mdprof_create_feedback.m"
                    {
#line 91 "mdprof_create_feedback.m"
                      MR_Word mdprof_create_feedback__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__V_71_71, (MR_Integer) 1)));
#line 91 "mdprof_create_feedback.m"
                      MR_String mdprof_create_feedback__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_create_feedback__V_71_71, (MR_Integer) 0)));

#line 91 "mdprof_create_feedback.m"
                      if ((mdprof_create_feedback__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 79 "mdprof_create_feedback.m"
                        {
#line 79 "mdprof_create_feedback.m"
                          MR_Word mdprof_create_feedback__FoundError_15;
#line 79 "mdprof_create_feedback.m"
                          MR_Word mdprof_create_feedback__RequestedFeedbackInfo_16;

#line 80 "mdprof_create_feedback.m"
                          {
#line 80 "mdprof_create_feedback.m"
                            mdprof_create_feedback__get_feedback_requests_6_p_0(mdprof_create_feedback__ProgName_4, mdprof_create_feedback__Options_10, &mdprof_create_feedback__FoundError_15, &mdprof_create_feedback__RequestedFeedbackInfo_16);
                          }
#line 87 "mdprof_create_feedback.m"
                          if ((mdprof_create_feedback__FoundError_15 == (MR_Integer) 1))
#line 88 "mdprof_create_feedback.m"
                            {
#line 88 "mdprof_create_feedback.m"
                            }
#line 87 "mdprof_create_feedback.m"
                          else
#line 83 "mdprof_create_feedback.m"
                            {
#line 83 "mdprof_create_feedback.m"
                              mdprof_create_feedback__generate_requested_feedback_7_p_0(mdprof_create_feedback__ProgName_4, mdprof_create_feedback__Options_10, mdprof_create_feedback__V_72_72, mdprof_create_feedback__V_74_74, mdprof_create_feedback__RequestedFeedbackInfo_16);
#line 83 "mdprof_create_feedback.m"
                              return;
                            }
#line 79 "mdprof_create_feedback.m"
                        }
#line 91 "mdprof_create_feedback.m"
                      else
#line 95 "mdprof_create_feedback.m"
                        {
#line 96 "mdprof_create_feedback.m"
                          {
#line 96 "mdprof_create_feedback.m"
                            mdprof_create_feedback__write_help_message_3_p_0(mdprof_create_feedback__ProgName_4);
                          }
#line 97 "mdprof_create_feedback.m"
                          {
#line 97 "mdprof_create_feedback.m"
                            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 97 "mdprof_create_feedback.m"
                            return;
                          }
#line 95 "mdprof_create_feedback.m"
                        }
#line 91 "mdprof_create_feedback.m"
                    }
#line 91 "mdprof_create_feedback.m"
                }
#line 77 "mdprof_create_feedback.m"
          }
#line 69 "mdprof_create_feedback.m"
      }
#line 62 "mdprof_create_feedback.m"
  }
#line 24 "mdprof_create_feedback.m"
}

void mercury__mdprof_create_feedback__init(void)
{
}

void mercury__mdprof_create_feedback__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_maybe_found_error_0);
	MR_register_type_ctor_info(&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_requested_feedback_info_0);
}

void mercury__mdprof_create_feedback__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_create_feedback. */
