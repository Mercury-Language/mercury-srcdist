/*
** Automatically generated from `mdprof_create_feedback.m'
** by the Mercury compiler,
** version 22.01.3-beta-2022-06-28
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


// :- module mdprof_create_feedback.
// :- implementation.

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
#include "measurements.mih"
#include "message.mih"
#include "ops.mih"
#include "pair.mih"
#include "parsing_utils.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
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
#include "mdbcomp.program_representation.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_reports.mih"
#include "mdprof_fb.automatic_parallelism.autopar_search_callgraph.mih"



struct mdprof_create_feedback__main_2_p_0_4_env_0_s {
  MR_Box * mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_create_feedback__main_2_p_0_4_env_0__cont;
  void * mdprof_create_feedback__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_create_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_create_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1;

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_ordinal_ordered_maybe_found_error_0[2];

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_maybe_found_error_0[2];

static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_maybe_found_error_0[2];

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_6;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_7;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_8;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_9;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_10;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_11;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_12;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_13;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_14;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_15;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_16;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_17;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_18;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_19;

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_20;

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_ordinal_ordered_option_0[21];

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_option_0[21];

static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_option_0[21];

static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_requested_feedback_info_0[1];

static const MR_FA_TypeInfo_Struct1 mdprof_create_feedback__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0;

static const MR_NotagFunctorDesc mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0;

static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0(
  MR_Word Src_5,
  MR_Word * Algorithm_6,
  MR_Integer STATE_VARIABLE_PS_0_15,
  MR_Integer * STATE_VARIABLE_PS_16);

static void MR_CALL 
mdprof_create_feedback__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_create_feedback__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_create_feedback__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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
mdprof_create_feedback__get_feedback_requests_6_p_0(
  MR_String ProgName_7,
  MR_Word Options_8,
  MR_Word * STATE_VARIABLE_Error_42,
  MR_Word * Requested_10);

static MR_bool MR_CALL 
mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0(
  MR_String String_3,
  MR_Word * Result_4);

static void MR_CALL 
mdprof_create_feedback__post_process_options_5_p_0(
  MR_String ProgName_6,
  MR_Word STATE_VARIABLE_Options_0_12,
  MR_Word * STATE_VARIABLE_Options_13);

static void MR_CALL 
mdprof_create_feedback__write_version_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6);

static void MR_CALL 
mdprof_create_feedback__write_help_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6);

static void MR_CALL 
mdprof_create_feedback__generate_requested_feedback_7_p_0(
  MR_String ProgName_8,
  MR_Word Options_9,
  MR_String InputFileName_10,
  MR_String OutputFileName_11,
  MR_Word RequestedFeedbackInfo_12);

static void MR_CALL 
mdprof_create_feedback__process_deep_to_feedback_5_p_0(
  MR_Word RequestedFeedbackInfo_6,
  MR_Word Deep_7,
  MR_Word * Messages_8,
  MR_Word STATE_VARIABLE_Feedback_0_12,
  MR_Word * STATE_VARIABLE_Feedback_13);

static void MR_CALL 
mdprof_create_feedback__read_deep_file_5_p_0(
  MR_String DataFileName_6,
  MR_Word Debug_7,
  MR_Word * MaybeDeep_8);

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_create_feedback_scalar_common_1[5][2];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_2[9][1];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_3[2][7];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_4[7][3];

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_5[3][5];


/* sealed */ struct mdprof_create_feedback__vector_common_type_6_0_s {
  const MR_Word mdprof_create_feedback__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mdprof_create_feedback__vector_common_type_6_0_s mdprof_create_feedback_vector_common_6[35];

/* sealed */ struct mdprof_create_feedback__vector_common_type_7_0_s {
  const MR_Word mdprof_create_feedback__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mdprof_create_feedback__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mdprof_create_feedback__vector_common_type_7_0_s mdprof_create_feedback_vector_common_7[21];



static /* final */ const MR_Box mdprof_create_feedback_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "8.0"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "1.01"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "overlap"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "complete-branches(1000)"))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_2[9][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
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
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_alg_for_finding_best_par_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__parsing_utils__parsing_utils__type_ctor_info_src_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_4[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_3[0])),
    ((MR_Box) (mdprof_create_feedback__parse_best_par_algorithm_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_5[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_5[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_5[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_4[1])),
    ((MR_Box) (&mdprof_create_feedback_scalar_common_4[2])),
    ((MR_Box) (&mdprof_create_feedback_scalar_common_4[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_3[1])),
    ((MR_Box) (mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdprof_create_feedback_scalar_common_3[1])),
    ((MR_Box) (mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_create_feedback_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mdprof_create_feedback__vector_common_type_6_0_s mdprof_create_feedback_vector_common_6[35] = {
  /* row 0 */   {     (MR_Integer) 5 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 7 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 6 },
  /* row 5 */   {     (MR_Integer) 11 },
  /* row 6 */   {     (MR_Integer) 20 },
  /* row 7 */   {     (MR_Integer) 16 },
  /* row 8 */   {     (MR_Integer) 15 },
  /* row 9 */   {     (MR_Integer) 14 },
  /* row 10 */   {     (MR_Integer) 18 },
  /* row 11 */   {     (MR_Integer) 19 },
  /* row 12 */   {     (MR_Integer) 12 },
  /* row 13 */   {     (MR_Integer) 13 },
  /* row 14 */   {     (MR_Integer) 8 },
  /* row 15 */   {     (MR_Integer) 9 },
  /* row 16 */   {     (MR_Integer) 10 },
  /* row 17 */   {     (MR_Integer) 17 },
  /* row 18 */   {     (MR_Integer) 20 },
  /* row 19 */   {     (MR_Integer) 11 },
  /* row 20 */   {     (MR_Integer) 20 },
  /* row 21 */   {     (MR_Integer) 16 },
  /* row 22 */   {     (MR_Integer) 15 },
  /* row 23 */   {     (MR_Integer) 14 },
  /* row 24 */   {     (MR_Integer) 18 },
  /* row 25 */   {     (MR_Integer) 12 },
  /* row 26 */   {     (MR_Integer) 13 },
  /* row 27 */   {     (MR_Integer) 8 },
  /* row 28 */   {     (MR_Integer) 9 },
  /* row 29 */   {     (MR_Integer) 10 },
  /* row 30 */   {     (MR_Integer) 19 },
  /* row 31 */   {     (MR_Integer) 17 },
  /* row 32 */   {     (MR_Integer) 4 },
  /* row 33 */   {     (MR_Integer) 2 },
  /* row 34 */   {     (MR_Integer) 1 },
};

static /* final */ const struct mdprof_create_feedback__vector_common_type_7_0_s mdprof_create_feedback_vector_common_7[21] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]))
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[1]))
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]))
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]))
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]))
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]))
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]))
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[1]))
  },
  /* row 8 */
  {
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]))
  },
  /* row 9 */
  {
    (MR_Integer) 9,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[2]))
  },
  /* row 10 */
  {
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[3]))
  },
  /* row 11 */
  {
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[2]))
  },
  /* row 12 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[2]))
  },
  /* row 13 */
  {
    (MR_Integer) 13,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[4]))
  },
  /* row 14 */
  {
    (MR_Integer) 14,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[3]))
  },
  /* row 15 */
  {
    (MR_Integer) 15,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[5]))
  },
  /* row 16 */
  {
    (MR_Integer) 16,
    (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[5]))
  },
  /* row 17 */
  {
    (MR_Integer) 18,
    (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[6]))
  },
  /* row 18 */
  {
    (MR_Integer) 17,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[2]))
  },
  /* row 19 */
  {
    (MR_Integer) 19,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[3]))
  },
  /* row 20 */
  {
    (MR_Integer) 20,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdprof_create_feedback_scalar_common_1[4]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0 = {
  (MR_String) "have_not_found_error",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1 = {
  (MR_String) "found_error",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_ordinal_ordered_maybe_found_error_0[2] = {
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1
};

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_maybe_found_error_0[2] = {
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_1,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_maybe_found_error_0_0
};

static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_maybe_found_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_maybe_found_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_create_feedback____Unify____maybe_found_error_0_0_10001)),
  ((MR_Box) (mdprof_create_feedback____Compare____maybe_found_error_0_0_10001)),
  (MR_String) "mdprof_create_feedback",
  (MR_String) "maybe_found_error",
  {     mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_maybe_found_error_0 },
  {     mdprof_create_feedback__mdprof_create_feedback__enum_ordinal_ordered_maybe_found_error_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdprof_create_feedback__mdprof_create_feedback__functor_number_map_maybe_found_error_0,

};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_2 = {
  (MR_String) "verbosity",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_3 = {
  (MR_String) "debug_read_profile",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_4 = {
  (MR_String) "report",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_5 = {
  (MR_String) "candidate_parallel_conjunctions",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_6 = {
  (MR_String) "implicit_parallelism",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_7 = {
  (MR_String) "desired_parallelism",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_8 = {
  (MR_String) "ipar_intermodule_var_use",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_9 = {
  (MR_String) "ipar_sparking_cost",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_10 = {
  (MR_String) "ipar_sparking_delay",
  INT32_C(10)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_11 = {
  (MR_String) "ipar_barrier_cost",
  INT32_C(11)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_12 = {
  (MR_String) "ipar_future_signal_cost",
  INT32_C(12)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_13 = {
  (MR_String) "ipar_future_wait_cost",
  INT32_C(13)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_14 = {
  (MR_String) "ipar_context_wakeup_delay",
  INT32_C(14)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_15 = {
  (MR_String) "ipar_clique_cost_threshold",
  INT32_C(15)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_16 = {
  (MR_String) "ipar_call_site_cost_threshold",
  INT32_C(16)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_17 = {
  (MR_String) "ipar_speedup_threshold",
  INT32_C(17)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_18 = {
  (MR_String) "ipar_dep_conjs",
  INT32_C(18)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_19 = {
  (MR_String) "ipar_speedup_alg",
  INT32_C(19)
};

static const MR_EnumFunctorDesc mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_20 = {
  (MR_String) "ipar_alg_for_finding_best_par",
  INT32_C(20)
};

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_ordinal_ordered_option_0[21] = {
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

static const MR_EnumFunctorDescPtr mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_option_0[21] = {
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_5,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_3,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_7,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_0,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_6,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_20,
  &mdprof_create_feedback__mdprof_create_feedback__enum_functor_desc_option_0_11,
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
  (MR_Integer) 6,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 17,
  (MR_Integer) 10,
  (MR_Integer) 16,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_create_feedback____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_create_feedback____Compare____option_0_0_10001)),
  (MR_String) "mdprof_create_feedback",
  (MR_String) "option",
  {     mdprof_create_feedback__mdprof_create_feedback__enum_name_ordered_option_0 },
  {     mdprof_create_feedback__mdprof_create_feedback__enum_ordinal_ordered_option_0 },
  (MR_Integer) 21,
  UINT16_C(12),
  mdprof_create_feedback__mdprof_create_feedback__functor_number_map_option_0,

};

static const MR_Integer mdprof_create_feedback__mdprof_create_feedback__functor_number_map_requested_feedback_info_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct1 mdprof_create_feedback__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0)
  }
};

static const MR_NotagFunctorDesc mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0 = {
  (MR_String) "requested_feedback_info",
  (MR_PseudoTypeInfo) (&mdprof_create_feedback__maybe__ti_maybe_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0),
  (MR_String) "rfi_parallel",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_requested_feedback_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdprof_create_feedback____Unify____requested_feedback_info_0_0_10001)),
  ((MR_Box) (mdprof_create_feedback____Compare____requested_feedback_info_0_0_10001)),
  (MR_String) "mdprof_create_feedback",
  (MR_String) "requested_feedback_info",
  {     &mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0 },
  {     &mdprof_create_feedback__mdprof_create_feedback__notag_functor_desc_requested_feedback_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdprof_create_feedback__mdprof_create_feedback__functor_number_map_requested_feedback_info_0,

};

static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_create_feedback_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_create_feedback_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0(
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

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0(
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

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv4_HeadVar__2_2;
    MR_Integer conv3_HeadVar__4_4;

    succeeded = mercury__parsing_utils__int_literal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2, ((MR_Integer) (wrapper_arg_3)), &conv3_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
      *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__2_2;
    MR_Integer conv0_HeadVar__4_4;

    succeeded = mercury__parsing_utils__int_literal_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, ((MR_Integer) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0(
  MR_Word Src_5,
  MR_Word * Algorithm_6,
  MR_Integer STATE_VARIABLE_PS_0_15,
  MR_Integer * STATE_VARIABLE_PS_16)
{
  {
    MR_bool succeeded;
    MR_Integer STATE_VARIABLE_PS_17_17;
    MR_Integer STATE_VARIABLE_PS_39_39;
    MR_Integer STATE_VARIABLE_PS_20_20;
    MR_String Var_18;
    MR_String Var_19;

    succeeded = mercury__parsing_utils__whitespace_4_p_0(Src_5, STATE_VARIABLE_PS_0_15, &STATE_VARIABLE_PS_17_17);
    if (succeeded)
    {
      Var_18 = (MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_";
      Var_19 = (MR_String) "greedy";
      succeeded = mercury__parsing_utils__keyword_6_p_0(Var_18, Var_19, Src_5, STATE_VARIABLE_PS_17_17, &STATE_VARIABLE_PS_20_20);
      if (succeeded)
      {
        STATE_VARIABLE_PS_39_39 = STATE_VARIABLE_PS_20_20;
        *Algorithm_6 = (MR_Word) ((MR_Unsigned) 4U);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer N_11;
        MR_Integer STATE_VARIABLE_PS_27_27;
        MR_Word TypeCtorInfo_46_46;
        MR_Integer STATE_VARIABLE_PS_23_23;
        MR_String Var_24;
        MR_String Var_25;
        MR_Word Var_26;
        MR_Integer Var_28;
        MR_Box conv2_N_11;

        succeeded = mercury__parsing_utils__keyword_6_p_0((MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", (MR_String) "complete-branches", Src_5, STATE_VARIABLE_PS_17_17, &STATE_VARIABLE_PS_23_23);
        if (succeeded)
        {
          Var_24 = (MR_String) "(";
          Var_25 = (MR_String) ")";
          Var_26 = (MR_Word) (&mdprof_create_feedback_scalar_common_4[5]);
          TypeCtorInfo_46_46 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
          succeeded = mercury__parsing_utils__brackets_7_p_0(TypeCtorInfo_46_46, Var_24, Var_25, Var_26, Src_5, &conv2_N_11, STATE_VARIABLE_PS_23_23, &STATE_VARIABLE_PS_27_27);
          if (succeeded)
          {
            N_11 = ((MR_Integer) (conv2_N_11));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Var_28 = (MR_Integer) 0;
            succeeded = (N_11 >= Var_28);
          }
        }
        if (succeeded)
        {
          STATE_VARIABLE_PS_39_39 = STATE_VARIABLE_PS_27_27;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Algorithm_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (N_11));
          }
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer STATE_VARIABLE_PS_35_35;
          MR_Integer N_41;
          MR_Word TypeCtorInfo_51_51;
          MR_Integer STATE_VARIABLE_PS_31_31;
          MR_String Var_32;
          MR_String Var_33;
          MR_Word Var_34;
          MR_Integer Var_36;
          MR_Box conv5_N_41;

          succeeded = mercury__parsing_utils__keyword_6_p_0((MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", (MR_String) "complete-size", Src_5, STATE_VARIABLE_PS_17_17, &STATE_VARIABLE_PS_31_31);
          if (succeeded)
          {
            Var_32 = (MR_String) "(";
            Var_33 = (MR_String) ")";
            Var_34 = (MR_Word) (&mdprof_create_feedback_scalar_common_4[6]);
            TypeCtorInfo_51_51 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            succeeded = mercury__parsing_utils__brackets_7_p_0(TypeCtorInfo_51_51, Var_32, Var_33, Var_34, Src_5, &conv5_N_41, STATE_VARIABLE_PS_31_31, &STATE_VARIABLE_PS_35_35);
            if (succeeded)
            {
              N_41 = ((MR_Integer) (conv5_N_41));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              Var_36 = (MR_Integer) 0;
              succeeded = (N_41 >= Var_36);
            }
          }
          if (succeeded)
          {
            STATE_VARIABLE_PS_39_39 = STATE_VARIABLE_PS_35_35;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Algorithm_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (N_41));
            }
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = mercury__parsing_utils__keyword_6_p_0((MR_String) "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_", (MR_String) "complete", Src_5, STATE_VARIABLE_PS_17_17, &STATE_VARIABLE_PS_39_39);
            if (succeeded)
            {
              *Algorithm_6 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
        succeeded = mercury__parsing_utils__eof_4_p_0(Src_5, STATE_VARIABLE_PS_39_39, STATE_VARIABLE_PS_16);
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_create_feedback__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *HeadVar__1_1 = ((&mdprof_create_feedback_vector_common_7[0 + slot_0]))->mdprof_create_feedback__vector_common_type_7_0__vct_7_f_0;
      *HeadVar__2_2 = ((&mdprof_create_feedback_vector_common_7[0 + slot_0]))->mdprof_create_feedback__vector_common_type_7_0__vct_7_f_1;
      cont(cont_env_ptr);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 21));
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 99:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "candidate-parallel-conjunctions"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 100:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "debug-read-profile"))
                  case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "desired-parallelism"))
                  case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 104:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "help"))
            case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 109:
              if (((((((((((((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 45)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 14)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 16)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(HeadVar__1_1, 17)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 18)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(HeadVar__1_1, 19)) == (MR_Integer) 109))))
                switch (MR_nth_code_unit(HeadVar__1_1, 20)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 4;
                    break;
                  case (MR_Integer) 45:
                    switch (MR_nth_code_unit(HeadVar__1_1, 21)) {
                      case (MR_Integer) 98:
                        switch (MR_nth_code_unit(HeadVar__1_1, 22)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "implicit-parallelism-barrier-cost"))
                              case_num_0 = (MR_Integer) 5;
                            break;
                          case (MR_Integer) 101:
                            if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "implicit-parallelism-best-parallelisation-algorithm"))
                              case_num_0 = (MR_Integer) 6;
                            break;
                        }
                        break;
                      case (MR_Integer) 99:
                        switch (MR_nth_code_unit(HeadVar__1_1, 22)) {
                          case (MR_Integer) 97:
                            if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "implicit-parallelism-call-site-cost-threshold"))
                              case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "implicit-parallelism-clique-cost-threshold"))
                              case_num_0 = (MR_Integer) 8;
                            break;
                          case (MR_Integer) 111:
                            if (MR_offset_streq(23, HeadVar__1_1, (MR_String) "implicit-parallelism-context-wakeup-delay"))
                              case_num_0 = (MR_Integer) 9;
                            break;
                        }
                        break;
                      case (MR_Integer) 100:
                        if (((((((((((((((((((((((((((((((((((((((((((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(HeadVar__1_1, 28)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 29)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 30)) == (MR_Integer) 45)))) && (((MR_nth_code_unit(HeadVar__1_1, 31)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 32)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 33)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 34)) == (MR_Integer) 106)))) && (((MR_nth_code_unit(HeadVar__1_1, 35)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 36)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 37)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(HeadVar__1_1, 38)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 39)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 40)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(HeadVar__1_1, 41)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 42)) == (MR_Integer) 115))))
                          switch (MR_nth_code_unit(HeadVar__1_1, 43)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 45:
                              if (MR_offset_streq(44, HeadVar__1_1, (MR_String) "implicit-parallelism-dependant-conjunctions-algorithm"))
                                case_num_0 = (MR_Integer) 11;
                              break;
                          }
                        break;
                      case (MR_Integer) 102:
                        if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 117)) && (((MR_nth_code_unit(HeadVar__1_1, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 45))))
                          switch (MR_nth_code_unit(HeadVar__1_1, 28)) {
                            case (MR_Integer) 115:
                              if (MR_offset_streq(29, HeadVar__1_1, (MR_String) "implicit-parallelism-future-signal-cost"))
                                case_num_0 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 119:
                              if (MR_offset_streq(29, HeadVar__1_1, (MR_String) "implicit-parallelism-future-wait-cost"))
                                case_num_0 = (MR_Integer) 13;
                              break;
                          }
                        break;
                      case (MR_Integer) 105:
                        if (MR_offset_streq(22, HeadVar__1_1, (MR_String) "implicit-parallelism-intermodule-var-use"))
                          case_num_0 = (MR_Integer) 14;
                        break;
                      case (MR_Integer) 115:
                        if (((MR_nth_code_unit(HeadVar__1_1, 22)) == (MR_Integer) 112))
                          switch (MR_nth_code_unit(HeadVar__1_1, 23)) {
                            case (MR_Integer) 97:
                              if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 24)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 25)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(HeadVar__1_1, 26)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 27)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 28)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 29)) == (MR_Integer) 45))))
                                switch (MR_nth_code_unit(HeadVar__1_1, 30)) {
                                  case (MR_Integer) 99:
                                    if (MR_offset_streq(31, HeadVar__1_1, (MR_String) "implicit-parallelism-sparking-cost"))
                                      case_num_0 = (MR_Integer) 15;
                                    break;
                                  case (MR_Integer) 100:
                                    if (MR_offset_streq(31, HeadVar__1_1, (MR_String) "implicit-parallelism-sparking-delay"))
                                      case_num_0 = (MR_Integer) 16;
                                    break;
                                }
                              break;
                            case (MR_Integer) 101:
                              if (MR_offset_streq(24, HeadVar__1_1, (MR_String) "implicit-parallelism-speedup-threshold"))
                                case_num_0 = (MR_Integer) 17;
                              break;
                          }
                        break;
                    }
                    break;
                }
              break;
            case (MR_Integer) 112:
              if (((((((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 97)) && (((MR_nth_code_unit(HeadVar__1_1, 3)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 4)) == (MR_Integer) 45))))
                switch (MR_nth_code_unit(HeadVar__1_1, 5)) {
                  case (MR_Integer) 97:
                    if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "ipar-alg-for-finding-best-par"))
                      case_num_0 = (MR_Integer) 18;
                    break;
                  case (MR_Integer) 98:
                    switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                      case (MR_Integer) 97:
                        if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "ipar-barrier-cost"))
                          case_num_0 = (MR_Integer) 19;
                        break;
                      case (MR_Integer) 101:
                        if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "ipar-best-par-alg"))
                          case_num_0 = (MR_Integer) 20;
                        break;
                    }
                    break;
                  case (MR_Integer) 99:
                    switch (MR_nth_code_unit(HeadVar__1_1, 6)) {
                      case (MR_Integer) 97:
                        if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "ipar-call-site-cost-threshold"))
                          case_num_0 = (MR_Integer) 21;
                        break;
                      case (MR_Integer) 108:
                        if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "ipar-clique-cost-threshold"))
                          case_num_0 = (MR_Integer) 22;
                        break;
                      case (MR_Integer) 111:
                        if (MR_offset_streq(7, HeadVar__1_1, (MR_String) "ipar-context-wakeup-delay"))
                          case_num_0 = (MR_Integer) 23;
                        break;
                    }
                    break;
                  case (MR_Integer) 100:
                    if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "ipar-dep-conjs"))
                      case_num_0 = (MR_Integer) 24;
                    break;
                  case (MR_Integer) 102:
                    if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 117)) && (((MR_nth_code_unit(HeadVar__1_1, 7)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 45))))
                      switch (MR_nth_code_unit(HeadVar__1_1, 12)) {
                        case (MR_Integer) 115:
                          if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "ipar-future-signal-cost"))
                            case_num_0 = (MR_Integer) 25;
                          break;
                        case (MR_Integer) 119:
                          if (MR_offset_streq(13, HeadVar__1_1, (MR_String) "ipar-future-wait-cost"))
                            case_num_0 = (MR_Integer) 26;
                          break;
                      }
                    break;
                  case (MR_Integer) 105:
                    if (MR_offset_streq(6, HeadVar__1_1, (MR_String) "ipar-intermodule-var-use"))
                      case_num_0 = (MR_Integer) 27;
                    break;
                  case (MR_Integer) 115:
                    if (((MR_nth_code_unit(HeadVar__1_1, 6)) == (MR_Integer) 112))
                      switch (MR_nth_code_unit(HeadVar__1_1, 7)) {
                        case (MR_Integer) 97:
                          if (((((((((((((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 114)) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 103)))) && (((MR_nth_code_unit(HeadVar__1_1, 13)) == (MR_Integer) 45))))
                            switch (MR_nth_code_unit(HeadVar__1_1, 14)) {
                              case (MR_Integer) 99:
                                if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "ipar-sparking-cost"))
                                  case_num_0 = (MR_Integer) 28;
                                break;
                              case (MR_Integer) 100:
                                if (MR_offset_streq(15, HeadVar__1_1, (MR_String) "ipar-sparking-delay"))
                                  case_num_0 = (MR_Integer) 29;
                                break;
                            }
                          break;
                        case (MR_Integer) 101:
                          if (((((((((((MR_nth_code_unit(HeadVar__1_1, 8)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 9)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(HeadVar__1_1, 10)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(HeadVar__1_1, 11)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(HeadVar__1_1, 12)) == (MR_Integer) 45))))
                            switch (MR_nth_code_unit(HeadVar__1_1, 13)) {
                              case (MR_Integer) 97:
                                if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "ipar-speedup-alg"))
                                  case_num_0 = (MR_Integer) 30;
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(14, HeadVar__1_1, (MR_String) "ipar-speedup-threshold"))
                                  case_num_0 = (MR_Integer) 31;
                                break;
                            }
                          break;
                      }
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 114:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "report"))
            case_num_0 = (MR_Integer) 32;
          break;
        case (MR_Integer) 118:
          if (((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 101)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 114))))
            switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
              case (MR_Integer) 98:
                if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "verbosity"))
                  case_num_0 = (MR_Integer) 33;
                break;
              case (MR_Integer) 115:
                if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "version"))
                  case_num_0 = (MR_Integer) 34;
                break;
            }
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
        ;
        *HeadVar__2_2 = ((&mdprof_create_feedback_vector_common_6[0 + case_num_0]))->mdprof_create_feedback__vector_common_type_6_0__vct_6_f_0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 86:
        {
          *HeadVar__2_2 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 104:
        {
          *HeadVar__2_2 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *HeadVar__2_2 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdprof_create_feedback__main_2_p_0_4_env_0_s * env_ptr = (struct mdprof_create_feedback__main_2_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__cont)((env_ptr)->mdprof_create_feedback__main_2_p_0_4_env_0__cont_env_ptr);
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
    struct mdprof_create_feedback__main_2_p_0_4_env_0_s env;

    (env).mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mdprof_create_feedback__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mdprof_create_feedback__main_2_p_0_4_env_0__cont = cont;
    (env).mdprof_create_feedback__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mdprof_create_feedback__defaults_2_p_0(&(env).mdprof_create_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_create_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
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

    succeeded = mdprof_create_feedback__long_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
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

    succeeded = mdprof_create_feedback__short_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
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
    MR_String ProgName_4;
    MR_Word Args0_5;
    MR_Word Args_6;
    MR_Word MaybeOptions_7;
    MR_Word StdErr_8;
    MR_Word StdOut_9;

    mercury__io__progname_base_4_p_0((MR_String) "mdprof_create_feedback", &ProgName_4);
    mercury__io__command_line_arguments_3_p_0(&Args0_5);
    mercury__getopt__process_options_4_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_4[4])), Args0_5, &Args_6, &MaybeOptions_7);
    mercury__io__stderr_stream_3_p_0(&StdErr_8);
    mercury__io__stdout_stream_3_p_0(&StdOut_9);
    if (((MR_tag((MR_Word) MaybeOptions_7)) == (MR_Integer) 1))
    {
      MR_Word Error_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOptions_7, (MR_Integer) 0))));
      MR_String Msg_24;

      Msg_24 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Error_23);
      mercury__io__write_string_4_p_0(StdErr_8, ProgName_4);
      mercury__io__write_string_4_p_0(StdErr_8, (MR_String) ": error parsing options: ");
      mercury__io__write_string_4_p_0(StdErr_8, Msg_24);
      mercury__io__write_string_4_p_0(StdErr_8, (MR_String) "\n");
      mdprof_create_feedback__write_help_message_4_p_0(StdErr_8, ProgName_4);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word Options0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptions_7, (MR_Integer) 0))));
      MR_Word Options_11;
      MR_Word Help_12;
      MR_Word Version_13;

      mdprof_create_feedback__post_process_options_5_p_0(ProgName_4, Options0_10, &Options_11);
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_11, ((MR_Box) ((MR_Integer) 0)), &Help_12);
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_11, ((MR_Box) ((MR_Integer) 1)), &Version_13);
      succeeded = (Version_13 == (MR_Integer) 1);
      if (succeeded)
        mdprof_create_feedback__write_version_message_4_p_0(StdOut_9, ProgName_4);
      else
      {
        succeeded = (Help_12 == (MR_Integer) 1);
        if (succeeded)
          mdprof_create_feedback__write_help_message_4_p_0(StdOut_9, ProgName_4);
        else
        if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mdprof_create_feedback__write_help_message_4_p_0(StdErr_8, ProgName_4);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 1))));
          MR_String Var_75 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args_6, (MR_Integer) 0))));

          if ((Var_74 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mdprof_create_feedback__write_help_message_4_p_0(StdErr_8, ProgName_4);
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          else
          {
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 1))));
            MR_String Var_77 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0))));

            if ((Var_76 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word FoundError_16;
              MR_Word RequestedFeedbackInfo_17;

              mdprof_create_feedback__get_feedback_requests_6_p_0(ProgName_4, Options_11, &FoundError_16, &RequestedFeedbackInfo_17);
              switch (FoundError_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                  }
                  break;
                case (MR_Integer) 0:
                  mdprof_create_feedback__generate_requested_feedback_7_p_0(ProgName_4, Options_11, Var_75, Var_77, RequestedFeedbackInfo_17);
                  break;
              }
            }
            else
            {
              mdprof_create_feedback__write_help_message_4_p_0(StdErr_8, ProgName_4);
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_create_feedback__get_feedback_requests_6_p_0(
  MR_String ProgName_7,
  MR_Word Options_8,
  MR_Word * STATE_VARIABLE_Error_42,
  MR_Word * Requested_10)
{
  {
    MR_bool succeeded;
    MR_Word StdErr_12;
    MR_Word CandidateParallelConjunctions_13;
    MR_Word MaybeAutoParOpts_41;

    mercury__io__stderr_stream_3_p_0(&StdErr_12);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 5)), &CandidateParallelConjunctions_13);
    switch (CandidateParallelConjunctions_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeAutoParOpts_41 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Error_42 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String DesiredParallelismStr_14;
          MR_Float DesiredParallelism_16;
          MR_String SpeedupThresholdStr_17;
          MR_Float SpeedupThreshold_19;
          MR_Word IntermoduleVarUse_20;
          MR_Integer SparkingCost_21;
          MR_Integer SparkingDelay_22;
          MR_Integer BarrierCost_23;
          MR_Integer FutureSignalCost_24;
          MR_Integer FutureWaitCost_25;
          MR_Integer ContextWakeupDelay_26;
          MR_Integer CPCCliqueThreshold_27;
          MR_Integer CPCCallSiteThreshold_28;
          MR_Word AllowDepConjs_29;
          MR_String SpeedupAlgString_30;
          MR_Word SpeedupAlg_32;
          MR_String AlgForFindingBestParStr_33;
          MR_Word MaybeAlgForFindingBestPar_34;
          MR_Word AlgForFindingBestPar_35;
          MR_Word AutoParOpts_40;
          MR_Word STATE_VARIABLE_Error_55_55;
          MR_Word STATE_VARIABLE_Error_69_69;
          MR_Word STATE_VARIABLE_Error_94_94;
          MR_Float DesiredParallelismPrime_15;
          MR_Float SpeedupThresholdPrime_18;
          MR_Word SpeedupAlgPrime_31;

          mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 7)), &DesiredParallelismStr_14);
          succeeded = mercury__string__to_float_2_p_0(DesiredParallelismStr_14, &DesiredParallelismPrime_15);
          if (succeeded)
          {
            DesiredParallelism_16 = DesiredParallelismPrime_15;
            succeeded = (DesiredParallelism_16 > ((MR_Float) 1.0000000000000000));
            if (succeeded)
              STATE_VARIABLE_Error_55_55 = (MR_Integer) 0;
            else
            {
              mercury__io__write_string_4_p_0(StdErr_12, ProgName_7);
              mercury__io__write_string_4_p_0(StdErr_12, (MR_String) ": error: desired parallelism level should be > 1.\n");
              STATE_VARIABLE_Error_55_55 = (MR_Integer) 1;
            }
          }
          else
          {
            mercury__io__write_string_4_p_0(StdErr_12, ProgName_7);
            mercury__io__write_string_4_p_0(StdErr_12, (MR_String) ": error: desired parallelism level should be a number.\n");
            STATE_VARIABLE_Error_55_55 = (MR_Integer) 1;
            DesiredParallelism_16 = (MR_Float) 1.0000000000000000;
          }
          mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 17)), &SpeedupThresholdStr_17);
          succeeded = mercury__string__to_float_2_p_0(SpeedupThresholdStr_17, &SpeedupThresholdPrime_18);
          if (succeeded)
          {
            SpeedupThreshold_19 = SpeedupThresholdPrime_18;
            succeeded = (SpeedupThreshold_19 >= ((MR_Float) 1.0000000000000000));
            if (succeeded)
              STATE_VARIABLE_Error_69_69 = STATE_VARIABLE_Error_55_55;
            else
            {
              mercury__io__write_string_4_p_0(StdErr_12, ProgName_7);
              mercury__io__write_string_4_p_0(StdErr_12, (MR_String) ": error: speedup threshold should be >= 1.\n");
              STATE_VARIABLE_Error_69_69 = (MR_Integer) 1;
            }
          }
          else
          {
            mercury__io__write_string_4_p_0(StdErr_12, ProgName_7);
            mercury__io__write_string_4_p_0(StdErr_12, (MR_String) ": error: speedup threshold should be a number.\n");
            STATE_VARIABLE_Error_69_69 = (MR_Integer) 1;
            SpeedupThreshold_19 = (MR_Float) 1.0000000000000000;
          }
          mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 8)), &IntermoduleVarUse_20);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 9)), &SparkingCost_21);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 10)), &SparkingDelay_22);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 11)), &BarrierCost_23);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 12)), &FutureSignalCost_24);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 13)), &FutureWaitCost_25);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 14)), &ContextWakeupDelay_26);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 15)), &CPCCliqueThreshold_27);
          mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 16)), &CPCCallSiteThreshold_28);
          mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 18)), &AllowDepConjs_29);
          mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 19)), &SpeedupAlgString_30);
          succeeded = mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_p_0(AllowDepConjs_29, SpeedupAlgString_30, &SpeedupAlgPrime_31);
          if (succeeded)
          {
            SpeedupAlg_32 = SpeedupAlgPrime_31;
            STATE_VARIABLE_Error_94_94 = STATE_VARIABLE_Error_69_69;
          }
          else
          {
            mercury__io__write_string_4_p_0(StdErr_12, ProgName_7);
            mercury__io__write_string_4_p_0(StdErr_12, (MR_String) ": error: ");
            mercury__io__write_string_4_p_0(StdErr_12, SpeedupAlgString_30);
            mercury__io__write_string_4_p_0(StdErr_12, (MR_String) " is not a speedup estimate algorithm.\n");
            STATE_VARIABLE_Error_94_94 = (MR_Integer) 1;
            SpeedupAlg_32 = (MR_Word) ((MR_Unsigned) 0U);
          }
          mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 20)), &AlgForFindingBestParStr_33);
          mdprof_create_feedback__parse_best_par_algorithm_2_p_0(AlgForFindingBestParStr_33, &MaybeAlgForFindingBestPar_34);
          if (((MR_tag((MR_Word) MaybeAlgForFindingBestPar_34)) == (MR_Integer) 1))
          {
            MR_Word MaybeMessage_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAlgForFindingBestPar_34, (MR_Integer) 0))));

            if ((MaybeMessage_36 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_4_p_0(StdErr_12, ProgName_7);
              mercury__io__write_string_4_p_0(StdErr_12, (MR_String) ": error: ");
              mercury__io__write_string_4_p_0(StdErr_12, AlgForFindingBestParStr_33);
              mercury__io__write_string_4_p_0(StdErr_12, (MR_String) " is not an algorithm for finding the best parallelisation.\n");
            }
            else
            {
              MR_String Message_39 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMessage_36, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(StdErr_12, ProgName_7);
              mercury__io__write_string_4_p_0(StdErr_12, (MR_String) ": error: ");
              mercury__io__write_string_4_p_0(StdErr_12, AlgForFindingBestParStr_33);
              mercury__io__write_string_4_p_0(StdErr_12, (MR_String) " is not an algorithm for finding the best parallelisation: ");
              mercury__io__write_string_4_p_0(StdErr_12, Message_39);
              mercury__io__write_string_4_p_0(StdErr_12, (MR_String) "\n");
            }
            *STATE_VARIABLE_Error_42 = (MR_Integer) 1;
            AlgForFindingBestPar_35 = (MR_Word) ((MR_Unsigned) 4U);
          }
          else
          {
            AlgForFindingBestPar_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeAlgForFindingBestPar_34, (MR_Integer) 0))));
            *STATE_VARIABLE_Error_42 = STATE_VARIABLE_Error_94_94;
          }
          {
            AutoParOpts_40 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 0) = MR_box_float(DesiredParallelism_16);
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 1) = (MR_Box) ((MR_Unsigned) (IntermoduleVarUse_20));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 2) = ((MR_Box) (SparkingCost_21));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 3) = ((MR_Box) (SparkingDelay_22));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 4) = ((MR_Box) (BarrierCost_23));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 5) = ((MR_Box) (FutureSignalCost_24));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 6) = ((MR_Box) (FutureWaitCost_25));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 7) = ((MR_Box) (ContextWakeupDelay_26));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 8) = ((MR_Box) (CPCCliqueThreshold_27));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 9) = ((MR_Box) (CPCCallSiteThreshold_28));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 10) = MR_box_float(SpeedupThreshold_19);
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 11) = ((MR_Box) (SpeedupAlg_32));
            MR_hl_field(MR_mktag(0), AutoParOpts_40, 12) = ((MR_Box) (AlgForFindingBestPar_35));
          }
          {
            MaybeAutoParOpts_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeAutoParOpts_41, 0) = ((MR_Box) (AutoParOpts_40));
          }
        }
        break;
    }
    *Requested_10 = (MR_Word) (MaybeAutoParOpts_41);
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback__parse_parallelise_dep_conjs_string_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        if ((strcmp(HeadVar__2_2, (MR_String) "naive") == 0))
        {
          *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[0]));
          succeeded = MR_TRUE;
        }
        else
        if ((strcmp(HeadVar__2_2, (MR_String) "overlap") == 0))
        {
          *HeadVar__3_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[6]));
          succeeded = MR_TRUE;
        }
        else
          succeeded = MR_FALSE;
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_Algorithm_6;
    MR_Integer conv0_STATE_VARIABLE_PS_16;

    succeeded = mdprof_create_feedback__parse_alg_for_finding_best_par_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Algorithm_6, ((MR_Integer) (wrapper_arg_3)), &conv0_STATE_VARIABLE_PS_16);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_Algorithm_6));
      *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_PS_16));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdprof_create_feedback__parse_best_par_algorithm_2_p_0(
  MR_String String_3,
  MR_Word * Result_4)
{
  {
    MR_bool succeeded;

    mercury__parsing_utils__parse_3_p_0((MR_Word) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_alg_for_finding_best_par_0), String_3, (MR_Word) (&mdprof_create_feedback_scalar_common_4[0]), Result_4);
  }
}

static void MR_CALL 
mdprof_create_feedback__post_process_options_5_p_0(
  MR_String ProgName_6,
  MR_Word STATE_VARIABLE_Options_0_12,
  MR_Word * STATE_VARIABLE_Options_13)
{
  {
    MR_bool succeeded;
    MR_Integer VerbosityLevel_9;
    MR_Word StdErr_10;
    MR_Word ImplicitParallelism_11;
    MR_Word STATE_VARIABLE_Options_26_26;

    mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), STATE_VARIABLE_Options_0_12, ((MR_Box) ((MR_Integer) 2)), &VerbosityLevel_9);
    mercury__io__stderr_stream_3_p_0(&StdErr_10);
    succeeded = (VerbosityLevel_9 < (MR_Integer) 0);
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(StdErr_10, ProgName_6);
      mercury__io__write_string_4_p_0(StdErr_10, (MR_String) ": warning: verbosity level should not be negative.\n");
      mercury__map__set_4_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[7]))), STATE_VARIABLE_Options_0_12, &STATE_VARIABLE_Options_26_26);
    }
    else
    {
      succeeded = (VerbosityLevel_9 > (MR_Integer) 4);
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(StdErr_10, ProgName_6);
        mercury__io__write_string_4_p_0(StdErr_10, (MR_String) ": warning: verbosity level should not exceed 4.\n");
        mercury__map__set_4_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_create_feedback_scalar_common_2[8]))), STATE_VARIABLE_Options_0_12, &STATE_VARIABLE_Options_26_26);
      }
      else
        STATE_VARIABLE_Options_26_26 = STATE_VARIABLE_Options_0_12;
    }
    message__set_verbosity_level_3_p_0(VerbosityLevel_9);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), STATE_VARIABLE_Options_26_26, ((MR_Box) ((MR_Integer) 6)), &ImplicitParallelism_11);
    switch (ImplicitParallelism_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Options_13 = STATE_VARIABLE_Options_26_26;
        break;
      case (MR_Integer) 1:
        mercury__map__set_4_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 5)), ((MR_Box) (MR_mkword(MR_mktag(1), &mdprof_create_feedback_scalar_common_2[6]))), STATE_VARIABLE_Options_26_26, STATE_VARIABLE_Options_13);
        break;
    }
  }
}

static void MR_CALL 
mdprof_create_feedback__write_version_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6)
{
  {
    MR_String Version_8;
    MR_String Fullarch_9;

    mercury__library__version_2_p_0(&Version_8, &Fullarch_9);
    mercury__io__write_string_4_p_0(OutputStream_5, ProgName_6);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ": Mercury deep profiler\n");
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "version ");
    mercury__io__write_string_4_p_0(OutputStream_5, Version_8);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ", on ");
    mercury__io__write_string_4_p_0(OutputStream_5, Fullarch_9);
    mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ".\n");
  }
}

static void MR_CALL 
mdprof_create_feedback__write_help_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6)
{
  {
    MR_String Var_10;
    MR_String Var_19;

    Var_19 = mercury__string__f_43_43_2_f_0(ProgName_6, (MR_String) " [<options>] <profdatafile> <feedbackfile>\n    This command generates feedback information from profiling data.\n\n    The first argument must name a deep profili" "ng data file such as Deep.data.\n    The second argument should be the name of the file into which this command\n    should put the feedback information it genera" "tes.\n\n    You may specify the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version numbe" "r.\n    -v --verbosity  <0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is reco" "mmended and the\n                    default.\n    --debug-read-profile\n                    Generate debugging messages when reading the deep profile\n            " "        and creating the deep structure.\n    --report        Print a report about the feedback information after any\n                    processing has been don" "e.\n\n    The following options select sets of feedback information useful\n    for particular compiler optimizations:\n\n    --implicit-parallelism\n                " "Generate information that the compiler can use for automatic\n                parallelization.\n    --desired-parallelism <value>\n                The amount of de" "sired parallelism for implicit parallelism,\n                which must be a floating point number above 1.0.\n                Note: This option is currently igno" "red.\n    --implicit-parallelism-intermodule-var-use\n                Assume that the compiler will be able to push signals and waits\n                for futures " "across module boundaries.\n    --ipar-sparking-cost <value>\n                The cost of creating a spark, measured in the deep profiler\'s\n                call se" "quence counts.\n    --ipar-sparking-delay <value>\n                The time taken from the time a spark is created until the spark\n                is executed by " "another processor, assuming that there is a free\n                processor.\n    --ipar-barrier-cost <value>\n                The cost of executing the barrier co" "de at the end of each\n                parallel conjunct.\n    --ipar-future-signal-cost <value>\n                The cost of the signal() call for the producer of" " a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-future-wait-cost <value>\n                The cost of the wait() " "call for the consumer of a shared\n                variable, measured in the profiler\'s call sequence counts.\n    --ipar-context-wakeup-delay <value>\n           " "     The time taken for a context to resume execution after being\n                placed on the run queue. This is used to estimate the impact\n                o" "f blocking of a context\'s execution, it is measured in the\n                profiler\'s call sequence counts.\n    --ipar-clique-cost-threshold <value>\n           " "     The cost threshold for cliques to be considered for implicit\n                parallelism, measured on the profiler\'s call sequence counts.\n    --ipar-call-" "site-cost-threshold <value>\n                The cost of a call site to be considered for parallelism\n                against another call site.\n    --no-ipar-de" "p-conjs\n                Disable parallelisation of dependent conjunctions.\n    --ipar-speedup-alg <alg>\n                Choose the algorithm that is used to est" "imate the speedup for\n                dependent calculations. The available algorithms are:\n                    overlap: Compute the overlap between dependent\n " "                     conjunctions.\n                    num_vars: Use the number of shared variables as a proxy for\n                      the amount of overlap a" "vailable.\n                    naive: Ignore dependencies.\n                The default is overlap.\n    --ipar-speedup-threshold <value>\n                The thres" "hold that a speedup ratio must meet before the\n                feedback tool will accept a parallelization. It must be\n                a floating point number, " "which must be at least 1.0.\n                If it is e.g. 1.02, then the feedback tool will ignore\n                parallelizations that promise less than a 2% " "local speedup.\n    --ipar-best-par-alg <alg>\n                Select which algorithm to use to find the best way to\n                parallelise a conjunction. Th" "e available algorithms are:\n                    greedy: A greedy algorithm with a linear time complexity.\n                    complete: A complete algorithm wit" "h a branch and bound\n                      search. This can be slow for problems larger than 50\n                      conjuncts, since it has an exponential com" "plexity.\n                    complete-size(N): As above exept that it takes a single\n                      parameter, N. If a conjunction has more than N\n      " "                conjuncts, then the greedy algorithm will be used.\n                    complete-branches(N): The same as the complete algorithm,\n               " "       except that it allows at most N branches to be created\n                      during the search. Once N branches have been created,\n                      " "a greedy search is used on each open branch.\n                The default is complete-branches(1000).\n\n    The following options select specific types of feedbac" "k information\n    and parameterise them:\n\n    --candidate-parallel-conjunctions\n                Produce a list of candidate parallel conjunctions for implicit\n " "               parallelism. This option uses the implicit parallelism\n                settings above.\n\n");
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", Var_19);
    mercury__io__write_string_4_p_0(OutputStream_5, Var_10);
  }
}

static void MR_CALL 
mdprof_create_feedback__generate_requested_feedback_7_p_0(
  MR_String ProgName_8,
  MR_Word Options_9,
  MR_String InputFileName_10,
  MR_String OutputFileName_11,
  MR_Word RequestedFeedbackInfo_12)
{
  {
    MR_Word StdErr_14;
    MR_Word MaybeParallelize_15;

    mercury__io__stderr_stream_3_p_0(&StdErr_14);
    MaybeParallelize_15 = (MR_Word) (RequestedFeedbackInfo_12);
    if ((MaybeParallelize_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_4_p_0(StdErr_14, ProgName_8);
      mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": options do not request any form of feedback\n");
    }
    else
    {
      MR_Word DebugReadProfile_17;
      MR_Word Report_18;
      MR_Word MaybeDeep_19;

      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_9, ((MR_Box) ((MR_Integer) 3)), &DebugReadProfile_17);
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_create_feedback__mdprof_create_feedback__type_ctor_info_option_0), Options_9, ((MR_Box) ((MR_Integer) 4)), &Report_18);
      mdprof_create_feedback__read_deep_file_5_p_0(InputFileName_10, DebugReadProfile_17, &MaybeDeep_19);
      if (((MR_tag((MR_Word) MaybeDeep_19)) == (MR_Integer) 1))
      {
        MR_String Error_86 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeDeep_19, (MR_Integer) 0))));

        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        mercury__io__write_string_4_p_0(StdErr_14, ProgName_8);
        mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": error reading ");
        mercury__io__write_string_4_p_0(StdErr_14, InputFileName_10);
        mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": ");
        mercury__io__write_string_4_p_0(StdErr_14, Error_86);
        mercury__io__write_string_4_p_0(StdErr_14, (MR_String) "\n");
      }
      else
      {
        MR_Word Deep_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeDeep_19, (MR_Integer) 0))));
        MR_Word MaybeProgRep_21;

        profile__deep_get_maybe_progrep_2_p_0(Deep_20, &MaybeProgRep_21);
        if (((MR_tag((MR_Word) MaybeProgRep_21)) == (MR_Integer) 1))
        {
          MR_String Error_85 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeProgRep_21, (MR_Integer) 0))));

          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          mercury__io__write_string_4_p_0(StdErr_14, ProgName_8);
          mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": ");
          mercury__io__write_string_4_p_0(StdErr_14, Error_85);
          mercury__io__write_string_4_p_0(StdErr_14, (MR_String) "\n");
        }
        else
        {
          MR_String ProfiledProgramName_23;
          MR_Word FeedbackReadResult_24;
          MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deep_20, (MR_Integer) 0))));

          ProfiledProgramName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 0))));
          mdbcomp__feedback__read_or_create_feedback_file_5_p_0(OutputFileName_11, ProfiledProgramName_23, &FeedbackReadResult_24);
          if (((MR_tag((MR_Word) FeedbackReadResult_24)) == (MR_Integer) 1))
          {
            MR_Word FeedbackReadError_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FeedbackReadResult_24, (MR_Integer) 0))));
            MR_String Message_33;

            mdbcomp__feedback__feedback_read_error_message_string_3_p_0(OutputFileName_11, FeedbackReadError_32, &Message_33);
            mercury__io__write_string_4_p_0(StdErr_14, Message_33);
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          else
          {
            MR_Word Feedback0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FeedbackReadResult_24, (MR_Integer) 0))));
            MR_Word Messages_26;
            MR_Word Feedback_27;
            MR_Word WriteResult_29;

            mdprof_create_feedback__process_deep_to_feedback_5_p_0(RequestedFeedbackInfo_12, Deep_20, &Messages_26, Feedback0_25, &Feedback_27);
            switch (Report_18) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word StdOut_28;

                  mercury__io__stdout_stream_3_p_0(&StdOut_28);
                  mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0(StdOut_28, Feedback_27);
                }
                break;
            }
            mdbcomp__feedback__write_feedback_file_5_p_0(OutputFileName_11, Feedback_27, &WriteResult_29);
            switch (MR_tag((MR_Word) WriteResult_29)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Error_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WriteResult_29, (MR_Integer) 0))));
                  MR_String ErrorMessage_31;

                  mercury__io__error_message_2_p_0(Error_30, &ErrorMessage_31);
                  mercury__io__write_string_4_p_0(StdErr_14, ProgName_8);
                  mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": ");
                  mercury__io__write_string_4_p_0(StdErr_14, OutputFileName_11);
                  mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": ");
                  mercury__io__write_string_4_p_0(StdErr_14, ErrorMessage_31);
                  mercury__io__write_string_4_p_0(StdErr_14, (MR_String) "\n");
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Error_126 = ((MR_Word) ((MR_hl_field(MR_mktag(2), WriteResult_29, (MR_Integer) 0))));
                  MR_String ErrorMessage_127;

                  mercury__io__error_message_2_p_0(Error_126, &ErrorMessage_127);
                  mercury__io__write_string_4_p_0(StdErr_14, ProgName_8);
                  mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": ");
                  mercury__io__write_string_4_p_0(StdErr_14, OutputFileName_11);
                  mercury__io__write_string_4_p_0(StdErr_14, (MR_String) ": ");
                  mercury__io__write_string_4_p_0(StdErr_14, ErrorMessage_127);
                  mercury__io__write_string_4_p_0(StdErr_14, (MR_String) "\n");
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
                break;
            }
            message__write_out_messages_4_p_0(StdErr_14, Messages_26);
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_create_feedback__process_deep_to_feedback_5_p_0(
  MR_Word RequestedFeedbackInfo_6,
  MR_Word Deep_7,
  MR_Word * Messages_8,
  MR_Word STATE_VARIABLE_Feedback_0_12,
  MR_Word * STATE_VARIABLE_Feedback_13)
{
  {
    MR_Word MaybeAutoParOpts_10 = (MR_Word) (RequestedFeedbackInfo_6);

    if ((MaybeAutoParOpts_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Messages_8 = mercury__cord__empty_0_f_0((MR_Word) (&message__message__type_ctor_info_message_0));
      *STATE_VARIABLE_Feedback_13 = STATE_VARIABLE_Feedback_0_12;
    }
    else
    {
      MR_Word AutoParOpts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeAutoParOpts_10, (MR_Integer) 0))));

      mdprof_fb__automatic_parallelism__autopar_search_callgraph__candidate_parallel_conjunctions_5_p_0(AutoParOpts_11, Deep_7, Messages_8, STATE_VARIABLE_Feedback_0_12, STATE_VARIABLE_Feedback_13);
    }
  }
}

static void MR_CALL 
mdprof_create_feedback__read_deep_file_5_p_0(
  MR_String DataFileName_6,
  MR_Word Debug_7,
  MR_Word * MaybeDeep_8)
{
  {
    MR_Word MaybeOutput_13;

    switch (Debug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeOutput_13 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Stdout_12;

          mercury__io__stdout_stream_3_p_0(&Stdout_12);
          {
            MaybeOutput_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOutput_13, 0) = ((MR_Box) (Stdout_12));
          }
        }
        break;
    }
    startup__read_and_startup_default_deep_options_9_p_0((MR_String) "DummyServer", (MR_String) "DummyScript", DataFileName_6, (MR_Integer) 0, MaybeOutput_13, (MR_Word) ((MR_Unsigned) 0U), MaybeDeep_8);
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____maybe_found_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_create_feedback____Unify____maybe_found_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_create_feedback____Compare____maybe_found_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_create_feedback____Compare____maybe_found_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_create_feedback____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_create_feedback____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_create_feedback____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_create_feedback____Unify____requested_feedback_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_create_feedback____Unify____requested_feedback_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_create_feedback____Compare____requested_feedback_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_create_feedback____Compare____requested_feedback_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_create_feedback__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_create_feedback.
