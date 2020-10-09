/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2020-10-09
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


// :- module libs.handle_options.
// :- implementation.

/*
INIT mercury__libs__handle_options__init
REQUIRED_INIT mercury__libs__handle_options__required_init
ENDINIT
*/

#include "libs.handle_options.mih"
#include "libs.handle_options.mh"


#include "analysis.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "std_util.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct libs__handle_options__separate_option_args_5_p_0_5_env_0_s {
  MR_Box * libs__handle_options__separate_option_args_5_p_0_5_env_0__wrapper_arg_1;
  MR_Box * libs__handle_options__separate_option_args_5_p_0_5_env_0__wrapper_arg_2;
  MR_Cont libs__handle_options__separate_option_args_5_p_0_5_env_0__cont;
  void * libs__handle_options__separate_option_args_5_p_0_5_env_0__cont_env_ptr;
  MR_Word libs__handle_options__separate_option_args_5_p_0_5_env_0__conv5_HeadVar__1_1;
  MR_Word libs__handle_options__separate_option_args_5_p_0_5_env_0__conv4_HeadVar__2_2;
};

struct libs__handle_options__handle_given_options_7_p_0_5_env_0_s {
  MR_Box * libs__handle_options__handle_given_options_7_p_0_5_env_0__wrapper_arg_1;
  MR_Box * libs__handle_options__handle_given_options_7_p_0_5_env_0__wrapper_arg_2;
  MR_Cont libs__handle_options__handle_given_options_7_p_0_5_env_0__cont;
  void * libs__handle_options__handle_given_options_7_p_0_5_env_0__cont_env_ptr;
  MR_Word libs__handle_options__handle_given_options_7_p_0_5_env_0__conv5_HeadVar__1_1;
  MR_Word libs__handle_options__handle_given_options_7_p_0_5_env_0__conv4_HeadVar__2_2;
};


static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0;

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2224__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1472);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2222__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1466);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2231__1_1_f_0(
  MR_String LambdaHeadVar__1_1461);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2230__1_1_f_0(
  MR_String LambdaHeadVar__1_1456);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2200__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1443);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2196__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1437);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2178__2_2_p_0(
  MR_Word HeadVar__1_1430,
  MR_String HeadVar__2_10248);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2178__1_2_p_0(
  MR_String HeadVar__1_1431,
  MR_String HeadVar__2_10250);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2160__1_3_f_0(
  MR_String TargetArch_157,
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1418);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2124__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1399);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2114__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1389);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1372);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2081__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1357);

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_7_p_0(
  MR_Word MaybeError_8,
  MR_Word OptionTable0_9,
  MR_Word OptOptionsCord_10,
  MR_Word * STATE_VARIABLE_Specs_46,
  MR_Word * Globals_12);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
  MR_Word OptionTable0_25,
  MR_Word STATE_VARIABLE_OptTuple_0_227,
  MR_Word OpMode_27,
  MR_Word Target_28,
  MR_Word GC_Method_29,
  MR_Word TermNorm_30,
  MR_Word Term2Norm_31,
  MR_Word TraceLevel_32,
  MR_Word TraceSuppress_33,
  MR_Word SSTraceLevel_34,
  MR_Word MaybeThreadSafe_35,
  MR_Word C_CompilerType_36,
  MR_Word CSharp_CompilerType_37,
  MR_Word ReuseStrategy_38,
  MR_Word MaybeFeedbackInfo_39,
  MR_Word HostEnvType_40,
  MR_Word SystemEnvType_41,
  MR_Word TargetEnvType_42,
  MR_Word LimitErrorContextsMap_43,
  MR_Word STATE_VARIABLE_Specs_0_228,
  MR_Word * STATE_VARIABLE_Specs_229,
  MR_Word * STATE_VARIABLE_Globals_230);

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String OptionDescr_6,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_OptTuple_0_18,
  MR_Word * STATE_VARIABLE_OptTuple_19);

static void MR_CALL 
libs__handle_options__check_option_values_21_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_112,
  MR_Word * STATE_VARIABLE_OptionTable_113,
  MR_Word * Target_23,
  MR_Word * GC_Method_24,
  MR_Word * TermNorm_25,
  MR_Word * Term2Norm_26,
  MR_Word * TraceLevel_27,
  MR_Word * TraceSuppress_28,
  MR_Word * SSTraceLevel_29,
  MR_Word * MaybeThreadSafe_30,
  MR_Word * C_CompilerType_31,
  MR_Word * CSharp_CompilerType_32,
  MR_Word * ReuseStrategy_33,
  MR_Word * MaybeFeedbackInfo_34,
  MR_Word * HostEnvType_35,
  MR_Word * SystemEnvType_36,
  MR_Word * TargetEnvType_37,
  MR_Word * LimitErrorContextsMap_38,
  MR_Word * STATE_VARIABLE_Specs_114);

static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * AccumulatingValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_String * StringValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Integer * IntValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * BoolValue_6);

static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
  MR_String HeadVar__1_1,
  MR_String * HeadVar__2_2);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[225][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[7][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[1][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[12][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][9];


/* sealed */ struct libs__handle_options__vector_common_type_2_0_s {
  const MR_String libs__handle_options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[21];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[225][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2020 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: only one of the following options"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "erlang")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gc"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "automatic")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "accurate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "boehm")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "conservative")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--inform-incomplete-switch-threshold"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) "msvc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but the only valid values are 2 and 3."))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[155])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[165])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[172])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[174])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[177])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[181])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[182]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[181])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[181])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[196])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[198])))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 203 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[203]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the value of the"))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-ptag-bits"))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is"))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 213 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 215 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[219]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 222 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 223 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[7][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[3])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[4]))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[7])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[8])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[9]))
  },
  /* row 11 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_special_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__getopt__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&libs__handle_options__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0)),
    ((MR_Box) (&libs__handle_options__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0))
  },
};


static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[21] = {
  /* row 0 */   {     (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ" },
  /* row 1 */   {     (MR_String) "abcdEfgilmnprstuvzBCMPTZ" },
  /* row 2 */   {     (MR_String) "abcdEfgilmnprstuvzBCDMPT" },
  /* row 3 */   {     (MR_String) "bdfgilmnprstuvzP" },
  /* row 4 */   {     (MR_String) "dfnprsu" },
  /* row 5 */   {     (MR_String) "cdinpGDRS" },
  /* row 6 */   {     (MR_String) "divM" },
  /* row 7 */   {     (MR_String) "TL" },
  /* row 8 */   {     (MR_String) "agiuvzD" },
  /* row 9 */   {     (MR_String) "ilv" },
  /* row 10 */   {     (MR_String) "bcdglmnstvz" },
  /* row 11 */   {     (MR_String) "bdgvP" },
  /* row 12 */   {     (MR_String) "bcdfgilmnprstvzP" },
  /* row 13 */   {     (MR_String) "bcdglmnpruvP" },
  /* row 14 */   {     (MR_String) "cP" },
  /* row 15 */   {     (MR_String) "din" },
  /* row 16 */   {     (MR_String) "vxX" },
  /* row 17 */   {     (MR_String) "gvCP" },
  /* row 18 */   {     (MR_String) "bcdglmnstuvz" },
  /* row 19 */   {     (MR_String) "ltuCIU" },
  /* row 20 */   {     (MR_String) "npBis" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.handle_options.mh"
#line 2563 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 2563 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2563 "handle_options.m"
{
#line 2563 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0)
  }
};

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2224__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1472)
{
  {
    MR_String LambdaHeadVar__2_1473;
    MR_String Var_1474;
    MR_String Var_1475;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_192, (MR_Integer) 1))));
    MR_Box conv1_Var_1475;

    conv1_Var_1475 = func_0(((MR_Box) (ToGradeSubdir_192)), ((MR_Box) (LambdaHeadVar__1_1472)));
    Var_1475 = ((MR_String) (conv1_Var_1475));
    Var_1474 = mercury__dir__f_slash_2_f_0(Var_1475, (MR_String) "Mercury");
    LambdaHeadVar__2_1473 = mercury__dir__f_slash_2_f_0(Var_1474, (MR_String) "hrls");
    return LambdaHeadVar__2_1473;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2222__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1466)
{
  {
    MR_String LambdaHeadVar__2_1467;
    MR_String Var_1468;
    MR_String Var_1469;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_192, (MR_Integer) 1))));
    MR_Box conv1_Var_1469;

    conv1_Var_1469 = func_0(((MR_Box) (ToGradeSubdir_192)), ((MR_Box) (LambdaHeadVar__1_1466)));
    Var_1469 = ((MR_String) (conv1_Var_1469));
    Var_1468 = mercury__dir__f_slash_2_f_0(Var_1469, (MR_String) "Mercury");
    LambdaHeadVar__2_1467 = mercury__dir__f_slash_2_f_0(Var_1468, (MR_String) "mihs");
    return LambdaHeadVar__2_1467;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2231__1_1_f_0(
  MR_String LambdaHeadVar__1_1461)
{
  {
    MR_String LambdaHeadVar__2_1462;
    MR_String Var_1463;

    Var_1463 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1461, (MR_String) "Mercury");
    LambdaHeadVar__2_1462 = mercury__dir__f_slash_2_f_0(Var_1463, (MR_String) "hrls");
    return LambdaHeadVar__2_1462;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2230__1_1_f_0(
  MR_String LambdaHeadVar__1_1456)
{
  {
    MR_String LambdaHeadVar__2_1457;
    MR_String Var_1458;

    Var_1458 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1456, (MR_String) "Mercury");
    LambdaHeadVar__2_1457 = mercury__dir__f_slash_2_f_0(Var_1458, (MR_String) "mihs");
    return LambdaHeadVar__2_1457;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2200__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1443)
{
  {
    MR_String LambdaHeadVar__2_1444;
    MR_String Var_1445;
    MR_String Var_1446;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_192, (MR_Integer) 1))));
    MR_Box conv1_Var_1446;

    conv1_Var_1446 = func_0(((MR_Box) (ToGradeSubdir_192)), ((MR_Box) (LambdaHeadVar__1_1443)));
    Var_1446 = ((MR_String) (conv1_Var_1446));
    Var_1445 = mercury__dir__f_slash_2_f_0(Var_1446, (MR_String) "Mercury");
    LambdaHeadVar__2_1444 = mercury__dir__f_slash_2_f_0(Var_1445, (MR_String) "inits");
    return LambdaHeadVar__2_1444;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2196__1_2_f_0(
  MR_Word ToGradeSubdir_192,
  MR_String LambdaHeadVar__1_1437)
{
  {
    MR_String LambdaHeadVar__2_1438;
    MR_String Var_1439;
    MR_String Var_1440;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_192, (MR_Integer) 1))));
    MR_Box conv1_Var_1440;

    conv1_Var_1440 = func_0(((MR_Box) (ToGradeSubdir_192)), ((MR_Box) (LambdaHeadVar__1_1437)));
    Var_1440 = ((MR_String) (conv1_Var_1440));
    Var_1439 = mercury__dir__f_slash_2_f_0(Var_1440, (MR_String) "Mercury");
    LambdaHeadVar__2_1438 = mercury__dir__f_slash_2_f_0(Var_1439, (MR_String) "lib");
    return LambdaHeadVar__2_1438;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2178__2_2_p_0(
  MR_Word HeadVar__1_1430,
  MR_String HeadVar__2_10248)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_1430, ((MR_Box) (HeadVar__2_10248)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2178__1_2_p_0(
  MR_String HeadVar__1_1431,
  MR_String HeadVar__2_10250)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1431, HeadVar__2_10250) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2160__1_3_f_0(
  MR_String TargetArch_157,
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1418)
{
  {
    MR_String LambdaHeadVar__2_1419;
    MR_String Var_1420;
    MR_String Var_1421;

    Var_1421 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1418, (MR_String) "Mercury");
    Var_1420 = mercury__dir__f_slash_2_f_0(Var_1421, GradeString_172);
    LambdaHeadVar__2_1419 = mercury__dir__f_slash_2_f_0(Var_1420, TargetArch_157);
    return LambdaHeadVar__2_1419;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2124__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1399)
{
  {
    MR_String LambdaHeadVar__2_1400;
    MR_String Var_1401;

    Var_1401 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1399, (MR_String) "modules");
    LambdaHeadVar__2_1400 = mercury__dir__f_slash_2_f_0(Var_1401, GradeString_172);
    return LambdaHeadVar__2_1400;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2114__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1389)
{
  {
    MR_String LambdaHeadVar__2_1390;
    MR_String Var_1391;

    Var_1391 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_172);
    LambdaHeadVar__2_1390 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_1389, Var_1391);
    return LambdaHeadVar__2_1390;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1372)
{
  {
    MR_String LambdaHeadVar__2_1373;
    MR_String Var_1374;
    MR_String Var_1375;

    Var_1375 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1372, (MR_String) "lib");
    Var_1374 = mercury__dir__f_slash_2_f_0(Var_1375, GradeString_172);
    LambdaHeadVar__2_1373 = mercury__dir__f_slash_2_f_0(Var_1374, (MR_String) "inc");
    return LambdaHeadVar__2_1373;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2081__1_2_f_0(
  MR_String GradeString_172,
  MR_String LambdaHeadVar__1_1357)
{
  {
    MR_String LambdaHeadVar__2_1358;
    MR_String Var_1359;

    Var_1359 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1357, (MR_String) "lib");
    LambdaHeadVar__2_1358 = mercury__dir__f_slash_2_f_0(Var_1359, GradeString_172);
    return LambdaHeadVar__2_1358;
  }
}

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X = X_1 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
X = libs__handle_options__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__handle_options__mutable_variable_already_printed_usage_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0

	MR_Word X;

	X = (MR_Integer) 0 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__initialise_mutable_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  {
    MR_Word SourceOptionValue_10;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, SourceOption_6, &SourceOptionValue_10);
    switch (SourceOptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__set_option_4_p_0(ImpliedOption_7, ImpliedOptionValue_8, STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Globals_12 = STATE_VARIABLE_Globals_0_11;
        break;
    }
  }
}

void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
{
  {
    MR_String Version_4;
    MR_String Fullarch_5;
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_String Var_18;
    MR_String Var_22;
    MR_String Var_30;
    MR_String Var_34;
    MR_String Var_38;

    mercury__library__version_2_p_0(&Version_4, &Fullarch_5);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[224])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    mercury__io__write_strings_3_p_0(Var_8);
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "Copyright: Copyright (C) 1993-2012 ", (MR_String) "The University of Melbourne\n");
    mercury__io__write_string_3_p_0(Var_18);
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "           Copyright (C) 2013-2020 ", (MR_String) "The Mercury team\n");
    mercury__io__write_string_3_p_0(Var_22);
    mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\tArguments ending in \140.m\' ", (MR_String) "are assumed to be source file names.\n");
    mercury__io__write_string_3_p_0(Var_30);
    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "\tArguments that do not end in \140.m\' ", (MR_String) "are assumed to be module names.\n");
    mercury__io__write_string_3_p_0(Var_34);
    Var_38 = mercury__string__f_43_43_2_f_0((MR_String) "\tArguments in the form \100file are replaced ", (MR_String) "with the contents of the file.\n");
    mercury__io__write_string_3_p_0(Var_38);
    mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    libs__options__options_help_2_p_0();
  }
}

void MR_CALL 
libs__handle_options__usage_2_p_0(void)
{
  {
    MR_Word AlreadyPrinted_4;

{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

		{
X = libs__handle_options__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	 AlreadyPrinted_4  = X;
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    switch (AlreadyPrinted_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__display_compiler_version_2_p_0();
          mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[5])));
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0

	MR_Word X;

	X = (MR_Integer) 1 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__usage_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock,
                    "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
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

void MR_CALL 
libs__handle_options__usage_errors_4_p_0(
  MR_Word Globals_5,
  MR_Word Specs_6)
{
  {
    MR_String ProgName_8;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_8);
    mercury__io__write_string_3_p_0(ProgName_8);
    mercury__io__write_string_3_p_0((MR_String) ":\n");
    parse_tree__error_util__write_error_specs_ignore_4_p_0(Globals_5, Specs_6);
  }
}

void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
{
  {
    MR_String Version_4;
    MR_String Fullarch_5;
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_14;

    mercury__library__version_2_p_0(&Version_4, &Fullarch_5);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[3])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    mercury__io__write_strings_3_p_0(Var_8);
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_5_env_0_s * env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_5_env_0_s *) (env_ptr_arg);

    *((env_ptr)->libs__handle_options__separate_option_args_5_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_5_env_0__conv5_HeadVar__1_1));
    *((env_ptr)->libs__handle_options__separate_option_args_5_p_0_5_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_5_env_0__conv4_HeadVar__2_2));
    ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_5_env_0__cont)((env_ptr)->libs__handle_options__separate_option_args_5_p_0_5_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_5_env_0_s env;

    (env).libs__handle_options__separate_option_args_5_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).libs__handle_options__separate_option_args_5_p_0_5_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).libs__handle_options__separate_option_args_5_p_0_5_env_0__cont = cont;
    (env).libs__handle_options__separate_option_args_5_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      libs__options__option_defaults_2_p_0(&(env).libs__handle_options__separate_option_args_5_p_0_5_env_0__conv5_HeadVar__1_1, &(env).libs__handle_options__separate_option_args_5_p_0_5_env_0__conv4_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_4, &env);
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;
    MR_Word conv2_HeadVar__6_6;

    succeeded = libs__options__special_handler_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
      *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = libs__options__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
libs__handle_options__separate_option_args_5_p_0(
  MR_Word RawArgs_6,
  MR_Word * OptionArgs_7,
  MR_Word * NonOptionArgs_8)
{
  {
    MR_bool succeeded;
    MR_Word OptionTable0_26;
    MR_Word Var_32;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word _OptionsSet_27;
    MR_Box conv6_Var_12;

    mercury__getopt__init_option_table_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_7[11]), &OptionTable0_26);
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
    mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_7[10]), RawArgs_6, OptionArgs_7, NonOptionArgs_8, &Var_10, &_OptionsSet_27, OptionTable0_26, &Var_11, ((MR_Box) (Var_32)), &conv6_Var_12);
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = libs__op_mode__op_mode_to_option_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_7_p_0(
  MR_Word MaybeError_8,
  MR_Word OptionTable0_9,
  MR_Word OptOptionsCord_10,
  MR_Word * STATE_VARIABLE_Specs_46,
  MR_Word * Globals_12)
{
  if ((MaybeError_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OptOptions_19;
    MR_Word OptionTable_20;
    MR_Word OptTuple_21;
    MR_Word Target_22;
    MR_Word GC_Method_23;
    MR_Word TermNorm_24;
    MR_Word Term2Norm_25;
    MR_Word TraceLevel_26;
    MR_Word TraceSuppress_27;
    MR_Word SSTraceLevel_28;
    MR_Word MaybeThreadSafe_29;
    MR_Word C_CompilerType_30;
    MR_Word CSharp_CompilerType_31;
    MR_Word ReuseStrategy_32;
    MR_Word MaybeFeedbackInfo_33;
    MR_Word HostEnvType_34;
    MR_Word SystemEnvType_35;
    MR_Word TargetEnvType_36;
    MR_Word LimitErrorContextsMap_37;
    MR_Word OpMode_38;
    MR_Word OtherOpModes_39;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Word STATE_VARIABLE_Specs_69_69;

    OptOptions_19 = mercury__cord__list_1_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0), OptOptionsCord_10);
    libs__handle_options__check_option_values_21_p_0(OptionTable0_9, &OptionTable_20, &Target_22, &GC_Method_23, &TermNorm_24, &Term2Norm_25, &TraceLevel_26, &TraceSuppress_27, &SSTraceLevel_28, &MaybeThreadSafe_29, &C_CompilerType_30, &CSharp_CompilerType_31, &ReuseStrategy_32, &MaybeFeedbackInfo_33, &HostEnvType_34, &SystemEnvType_35, &TargetEnvType_36, &LimitErrorContextsMap_37, &STATE_VARIABLE_Specs_49_49);
    libs__optimization_options__process_optimization_options_3_p_0(OptionTable_20, OptOptions_19, &OptTuple_21);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_20, &OpMode_38, &OtherOpModes_39);
    if ((OtherOpModes_39 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_69_69 = STATE_VARIABLE_Specs_49_49;
    else
    {
      MR_Word OpModeStrs_42;
      MR_Word OpModePieces_43;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_60;
      MR_Word Var_61;

      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_51, 3) = ((MR_Box) (OptionTable_20));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (OpMode_38));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (OtherOpModes_39));
      }
      OpModeStrs_42 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_51, Var_52);
      Var_61 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(OpModeStrs_42);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_61, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      OpModePieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])), Var_60);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_43, STATE_VARIABLE_Specs_49_49, &STATE_VARIABLE_Specs_69_69);
    }
    if ((STATE_VARIABLE_Specs_69_69 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__handle_options__convert_options_to_globals_24_p_0(OptionTable_20, OptTuple_21, OpMode_38, Target_22, GC_Method_23, TermNorm_24, Term2Norm_25, TraceLevel_26, TraceSuppress_27, SSTraceLevel_28, MaybeThreadSafe_29, C_CompilerType_30, CSharp_CompilerType_31, ReuseStrategy_32, MaybeFeedbackInfo_33, HostEnvType_34, SystemEnvType_35, TargetEnvType_36, LimitErrorContextsMap_37, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_46, Globals_12);
    else
    {
      libs__handle_options__generate_default_globals_3_p_0(Globals_12);
      *STATE_VARIABLE_Specs_46 = STATE_VARIABLE_Specs_69_69;
    }
  }
  else
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_8, (MR_Integer) 0))));
    MR_String ErrorMessage_15;
    MR_Word OptionTablePieces_16;
    MR_Word OptionTableMsg_17;
    MR_Word OptionTableSpec_18;
    MR_Word Var_73;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_84;

    ErrorMessage_15 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), Error_14);
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (ErrorMessage_15));
    }
    {
      OptionTablePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTablePieces_16, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), OptionTablePieces_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (OptionTablePieces_16));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableMsg_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 3) = ((MR_Box) (Var_78));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (OptionTableMsg_17));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.convert_option_table_result_to_globals\'/7"));
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 3) = ((MR_Box) (Var_84));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_46 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OptionTableSpec_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__handle_options__generate_default_globals_3_p_0(Globals_12);
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_5_env_0_s * env_ptr = (struct libs__handle_options__handle_given_options_7_p_0_5_env_0_s *) (env_ptr_arg);

    *((env_ptr)->libs__handle_options__handle_given_options_7_p_0_5_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_5_env_0__conv5_HeadVar__1_1));
    *((env_ptr)->libs__handle_options__handle_given_options_7_p_0_5_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_5_env_0__conv4_HeadVar__2_2));
    ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_5_env_0__cont)((env_ptr)->libs__handle_options__handle_given_options_7_p_0_5_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_5_env_0_s env;

    (env).libs__handle_options__handle_given_options_7_p_0_5_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).libs__handle_options__handle_given_options_7_p_0_5_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).libs__handle_options__handle_given_options_7_p_0_5_env_0__cont = cont;
    (env).libs__handle_options__handle_given_options_7_p_0_5_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      libs__options__option_defaults_2_p_0(&(env).libs__handle_options__handle_given_options_7_p_0_5_env_0__conv5_HeadVar__1_1, &(env).libs__handle_options__handle_given_options_7_p_0_5_env_0__conv4_HeadVar__2_2, libs__handle_options__handle_given_options_7_p_0_4, &env);
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;
    MR_Word conv2_HeadVar__6_6;

    succeeded = libs__options__special_handler_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv3_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv2_HeadVar__6_6);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv3_HeadVar__4_4));
      *wrapper_arg_6 = ((MR_Box) (conv2_HeadVar__6_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = libs__options__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
libs__handle_options__handle_given_options_7_p_0(
  MR_Word Args0_8,
  MR_Word * OptionArgs_9,
  MR_Word * Args_10,
  MR_Word * Specs_11,
  MR_Word * STATE_VARIABLE_Globals_22)
{
  {
    MR_bool succeeded;
    MR_Word MaybeError_15;
    MR_Word OptionTable_16;
    MR_Word OptOptions_17;
    MR_Word STATE_VARIABLE_Globals_40_40;
    MR_Word OptionTable0_59;
    MR_Word Var_65;
    MR_Word _OptionsSet_60;
    MR_Box conv6_OptOptions_17;

    mercury__getopt__init_option_table_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_7[6]), &OptionTable0_59);
    Var_65 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
    mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_7[5]), Args0_8, OptionArgs_9, Args_10, &MaybeError_15, &_OptionsSet_60, OptionTable0_59, &OptionTable_16, ((MR_Box) (Var_65)), &conv6_OptOptions_17);
    OptOptions_17 = ((MR_Word) (conv6_OptOptions_17));
    libs__handle_options__convert_option_table_result_to_globals_7_p_0(MaybeError_15, OptionTable_16, OptOptions_17, Specs_11, &STATE_VARIABLE_Globals_40_40);
    if ((*Specs_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpMode_20;
      MR_Word Smart_21;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;

      libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_40_40, &OpMode_20);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_40_40, (MR_Integer) 135, &Smart_21);
      succeeded = (Smart_21 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) OpMode_20)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_20, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_43, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_44, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (Var_45 == (MR_Integer) 2);
            }
          }
        }
      }
      if (succeeded)
        libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", STATE_VARIABLE_Globals_40_40, STATE_VARIABLE_Globals_22);
      else
        *STATE_VARIABLE_Globals_22 = STATE_VARIABLE_Globals_40_40;
    }
    else
      *STATE_VARIABLE_Globals_22 = STATE_VARIABLE_Globals_40_40;
  }
}

void MR_CALL 
libs__handle_options__generate_default_globals_3_p_0(
  MR_Word * DefaultGlobals_4)
{
  {
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;

    libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_6, &Var_7, &Var_8, DefaultGlobals_4);
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv10_LambdaHeadVar__2_1473;

    conv10_LambdaHeadVar__2_1473 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2224__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_1473));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv9_LambdaHeadVar__2_1467;

    conv9_LambdaHeadVar__2_1467 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2222__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_1467));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv8_LambdaHeadVar__2_1462;

    conv8_LambdaHeadVar__2_1462 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2231__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_1462));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_LambdaHeadVar__2_1457;

    conv7_LambdaHeadVar__2_1457 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2230__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_1457));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv6_LambdaHeadVar__2_1444;

    conv6_LambdaHeadVar__2_1444 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2200__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_1444));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv5_LambdaHeadVar__2_1438;

    conv5_LambdaHeadVar__2_1438 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2196__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_1438));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2178__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2178__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv4_LambdaHeadVar__2_1419;

    conv4_LambdaHeadVar__2_1419 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2160__1_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_1419));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_LambdaHeadVar__2_1400;

    conv3_LambdaHeadVar__2_1400 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2124__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_1400));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_1390;

    conv2_LambdaHeadVar__2_1390 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2114__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_1390));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_LambdaHeadVar__2_1373;

    conv1_LambdaHeadVar__2_1373 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_1373));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_1358;

    conv0_LambdaHeadVar__2_1358 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2081__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_1358));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
  MR_Word OptionTable0_25,
  MR_Word STATE_VARIABLE_OptTuple_0_227,
  MR_Word OpMode_27,
  MR_Word Target_28,
  MR_Word GC_Method_29,
  MR_Word TermNorm_30,
  MR_Word Term2Norm_31,
  MR_Word TraceLevel_32,
  MR_Word TraceSuppress_33,
  MR_Word SSTraceLevel_34,
  MR_Word MaybeThreadSafe_35,
  MR_Word C_CompilerType_36,
  MR_Word CSharp_CompilerType_37,
  MR_Word ReuseStrategy_38,
  MR_Word MaybeFeedbackInfo_39,
  MR_Word HostEnvType_40,
  MR_Word SystemEnvType_41,
  MR_Word TargetEnvType_42,
  MR_Word LimitErrorContextsMap_43,
  MR_Word STATE_VARIABLE_Specs_0_228,
  MR_Word * STATE_VARIABLE_Specs_229,
  MR_Word * STATE_VARIABLE_Globals_230)
{
  {
    MR_bool succeeded;
    MR_String InstallCmd_47;
    MR_Word FileInstallCmd_48;
    MR_String EventSetFileName0_50;
    MR_Word GCIsConservative_53;
    MR_Word PregeneratedDist_54;
    MR_Integer NumPtagBits_56;
    MR_Word GradeSupportsParConj_58;
    MR_Word Parallel_59;
    MR_Word Threadscope_60;
    MR_Word ImplicitParallelism_62;
    MR_Word Optimize_66;
    MR_Word LibLinkages0_67;
    MR_Word InvokedByMMCMake_70;
    MR_Word TransOpt_72;
    MR_Word InterModOpt_74;
    MR_Word InterModAnalysis_75;
    MR_Word MaybeStandaloneInt_77;
    MR_Word ExtraInitFunctions_78;
    MR_Word Smart_83;
    MR_Word VeryVerbose_84;
    MR_Word Statistics_85;
    MR_Integer DebugLiveness_86;
    MR_Integer DebugModesPredId_90;
    MR_Word DebugUnneededCodePredNames_91;
    MR_Word DebugOptPredIdStrs_94;
    MR_Word DebugOptPredNames_95;
    MR_Word DebugIntermoduleAnalysis_100;
    MR_Word DumpHLDSPredIds_101;
    MR_Word UseTrail_107;
    MR_Word HighLevelCode_108;
    MR_Word UseMinimalModelStackCopy_109;
    MR_Word UseMinimalModelOwnStacks_110;
    MR_Word UseMinimalModel_111;
    MR_Word ProfOptimized_119;
    MR_String ExpComp_121;
    MR_Word TraceOptimized_122;
    MR_Word TraceLevelIsNone_123;
    MR_Word ProfileDeep_125;
    MR_Word RecordTermSizesAsWords_128;
    MR_Word RecordTermSizesAsCells_129;
    MR_Word InlineBuiltins_133;
    MR_Word ReorderConj_135;
    MR_Word PutNondetEnvOnHeap_136;
    MR_Word ProcIdStackLayout_138;
    MR_Word AgcStackLayout_139;
    MR_Word BasicStackLayout_140;
    MR_Word BodyTypeInfoLiveness_141;
    MR_Word StackSegments_142;
    MR_Word DisablePneg_143;
    MR_Word DisableCut_144;
    MR_Word DumpHLDSStages_145;
    MR_Word DumpTraceStages_146;
    MR_Word ParallelLiveness_147;
    MR_Word ParallelCodeGen_148;
    MR_Word TypeSpec_153;
    MR_Word ConstProp_154;
    MR_Word IntermodUnusedArgs_155;
    MR_Word IntroduceAccumulators_156;
    MR_String TargetArch_157;
    MR_String MercuryLinkage_158;
    MR_Word DefaultRuntimeLibraryDirs_159;
    MR_Word MaybeStdLibDir_160;
    MR_Word MaybeConfDir_166;
    MR_Word ConfigFile_169;
    MR_Word MercuryLibDirs_171;
    MR_String GradeString_172;
    MR_Word UseSearchDirs_186;
    MR_Word UseGradeSubdirs_189;
    MR_Word SearchLibFilesDirs_190;
    MR_Word IntermodDirs2_191;
    MR_Word ToGradeSubdir_192;
    MR_Word LinkLibDirs_201;
    MR_Word InitDirs_204;
    MR_Word UseSubdirs_205;
    MR_Word WarnNonTailRecSelf_215;
    MR_Word WarnNonTailRecMutual_216;
    MR_Word BackendForeignLanguages_222;
    MR_Word CurrentBackendForeignLanguage_223;
    MR_Integer CompareSpec_226;
    MR_Word STATE_VARIABLE_Globals_235_235;
    MR_Word STATE_VARIABLE_Specs_236_236;
    MR_Word STATE_VARIABLE_Globals_242_242;
    MR_Word STATE_VARIABLE_Globals_249_249;
    MR_Word STATE_VARIABLE_Globals_274_274;
    MR_Word STATE_VARIABLE_Globals_284_284;
    MR_Word STATE_VARIABLE_Specs_305_305;
    MR_Word STATE_VARIABLE_Specs_323_323;
    MR_Word STATE_VARIABLE_Globals_346_346;
    MR_Word STATE_VARIABLE_Specs_367_367;
    MR_Word Var_370;
    MR_Word STATE_VARIABLE_Globals_371_371;
    MR_Word STATE_VARIABLE_Globals_375_375;
    MR_Word STATE_VARIABLE_Globals_492_492;
    MR_Word STATE_VARIABLE_Globals_497_497;
    MR_Word Var_501;
    MR_Word STATE_VARIABLE_Globals_502_502;
    MR_Word STATE_VARIABLE_Globals_507_507;
    MR_Word Var_511;
    MR_Word STATE_VARIABLE_Globals_512_512;
    MR_Word STATE_VARIABLE_Globals_517_517;
    MR_Word STATE_VARIABLE_Globals_522_522;
    MR_Word STATE_VARIABLE_OptTuple_524_524;
    MR_Word STATE_VARIABLE_Globals_529_529;
    MR_Word STATE_VARIABLE_Globals_538_538;
    MR_Word STATE_VARIABLE_Globals_543_543;
    MR_Word STATE_VARIABLE_Globals_549_549;
    MR_Word STATE_VARIABLE_Specs_570_570;
    MR_Word STATE_VARIABLE_Specs_591_591;
    MR_Word STATE_VARIABLE_Globals_594_594;
    MR_Word STATE_VARIABLE_Specs_616_616;
    MR_Word STATE_VARIABLE_Globals_620_620;
    MR_Word STATE_VARIABLE_Globals_625_625;
    MR_Word STATE_VARIABLE_Globals_630_630;
    MR_Word STATE_VARIABLE_Globals_635_635;
    MR_Word STATE_VARIABLE_Globals_640_640;
    MR_Word STATE_VARIABLE_Globals_645_645;
    MR_Word STATE_VARIABLE_Globals_650_650;
    MR_Word STATE_VARIABLE_Globals_656_656;
    MR_Word STATE_VARIABLE_Globals_661_661;
    MR_Word STATE_VARIABLE_Globals_666_666;
    MR_Word STATE_VARIABLE_Globals_671_671;
    MR_Word STATE_VARIABLE_Globals_676_676;
    MR_Word STATE_VARIABLE_Globals_680_680;
    MR_Word STATE_VARIABLE_Globals_685_685;
    MR_Word STATE_VARIABLE_Globals_690_690;
    MR_Word STATE_VARIABLE_Globals_696_696;
    MR_Word STATE_VARIABLE_Globals_705_705;
    MR_Word STATE_VARIABLE_Globals_711_711;
    MR_Word STATE_VARIABLE_Globals_717_717;
    MR_Word STATE_VARIABLE_Globals_734_734;
    MR_Word STATE_VARIABLE_Globals_739_739;
    MR_Word STATE_VARIABLE_Globals_744_744;
    MR_Word STATE_VARIABLE_Globals_749_749;
    MR_Word STATE_VARIABLE_Globals_755_755;
    MR_Word STATE_VARIABLE_Globals_760_760;
    MR_Word STATE_VARIABLE_Globals_765_765;
    MR_Word STATE_VARIABLE_Globals_770_770;
    MR_Word STATE_VARIABLE_Globals_778_778;
    MR_Word STATE_VARIABLE_Globals_782_782;
    MR_Word STATE_VARIABLE_Globals_788_788;
    MR_Word STATE_VARIABLE_Globals_793_793;
    MR_Word STATE_VARIABLE_Globals_799_799;
    MR_Word STATE_VARIABLE_Globals_811_811;
    MR_Word STATE_VARIABLE_Globals_815_815;
    MR_Word STATE_VARIABLE_Globals_820_820;
    MR_Word STATE_VARIABLE_Globals_825_825;
    MR_Word STATE_VARIABLE_Globals_830_830;
    MR_Word STATE_VARIABLE_Specs_845_845;
    MR_Word STATE_VARIABLE_Specs_917_917;
    MR_Word STATE_VARIABLE_Globals_920_920;
    MR_Word STATE_VARIABLE_Globals_924_924;
    MR_Word STATE_VARIABLE_Globals_929_929;
    MR_Word STATE_VARIABLE_Globals_934_934;
    MR_Word STATE_VARIABLE_Globals_938_938;
    MR_Word STATE_VARIABLE_OptTuple_940_940;
    MR_Word STATE_VARIABLE_Globals_945_945;
    MR_Word STATE_VARIABLE_Globals_950_950;
    MR_Word STATE_VARIABLE_Globals_955_955;
    MR_Word STATE_VARIABLE_Globals_960_960;
    MR_Word STATE_VARIABLE_OptTuple_964_964;
    MR_Word STATE_VARIABLE_Globals_969_969;
    MR_Word STATE_VARIABLE_Globals_974_974;
    MR_Word STATE_VARIABLE_Globals_979_979;
    MR_Word STATE_VARIABLE_OptTuple_982_982;
    MR_Word STATE_VARIABLE_Globals_987_987;
    MR_Word STATE_VARIABLE_Globals_992_992;
    MR_Word STATE_VARIABLE_Globals_997_997;
    MR_Word STATE_VARIABLE_Globals_1002_1002;
    MR_Word STATE_VARIABLE_Globals_1007_1007;
    MR_Word STATE_VARIABLE_Globals_1012_1012;
    MR_Word STATE_VARIABLE_Globals_1017_1017;
    MR_Word STATE_VARIABLE_Globals_1022_1022;
    MR_Word STATE_VARIABLE_OptTuple_1065_1065;
    MR_Word STATE_VARIABLE_Globals_1081_1081;
    MR_Word STATE_VARIABLE_Globals_1086_1086;
    MR_Word STATE_VARIABLE_Specs_1098_1098;
    MR_Word STATE_VARIABLE_OptTuple_1104_1104;
    MR_Word STATE_VARIABLE_Specs_1114_1114;
    MR_Word STATE_VARIABLE_OptTuple_1115_1115;
    MR_Word STATE_VARIABLE_Globals_1119_1119;
    MR_Word STATE_VARIABLE_Specs_1138_1138;
    MR_Word STATE_VARIABLE_OptTuple_1157_1157;
    MR_Word STATE_VARIABLE_Globals_1162_1162;
    MR_Word STATE_VARIABLE_OptTuple_1164_1164;
    MR_Word STATE_VARIABLE_OptTuple_1166_1166;
    MR_Word STATE_VARIABLE_OptTuple_1173_1173;
    MR_Word STATE_VARIABLE_Globals_1178_1178;
    MR_Word STATE_VARIABLE_Globals_1183_1183;
    MR_Word STATE_VARIABLE_Globals_1209_1209;
    MR_Word STATE_VARIABLE_OptTuple_1215_1215;
    MR_Word STATE_VARIABLE_Specs_1233_1233;
    MR_Word STATE_VARIABLE_Globals_1237_1237;
    MR_Word STATE_VARIABLE_Globals_1242_1242;
    MR_Word STATE_VARIABLE_OptTuple_1246_1246;
    MR_Word STATE_VARIABLE_OptTuple_1249_1249;
    MR_Word STATE_VARIABLE_OptTuple_1254_1254;
    MR_Word STATE_VARIABLE_OptTuple_1257_1257;
    MR_Word STATE_VARIABLE_OptTuple_1259_1259;
    MR_Word STATE_VARIABLE_Globals_1265_1265;
    MR_Word STATE_VARIABLE_Globals_1269_1269;
    MR_Word STATE_VARIABLE_Globals_1277_1277;
    MR_Word STATE_VARIABLE_OptTuple_1279_1279;
    MR_Word STATE_VARIABLE_OptTuple_1281_1281;
    MR_Word STATE_VARIABLE_OptTuple_1283_1283;
    MR_Word STATE_VARIABLE_Globals_1287_1287;
    MR_Word STATE_VARIABLE_OptTuple_1291_1291;
    MR_Word STATE_VARIABLE_OptTuple_1295_1295;
    MR_Word STATE_VARIABLE_Globals_1300_1300;
    MR_Word STATE_VARIABLE_Globals_1304_1304;
    MR_Word STATE_VARIABLE_Globals_1310_1310;
    MR_Word STATE_VARIABLE_Globals_1329_1329;
    MR_Word STATE_VARIABLE_Globals_1337_1337;
    MR_Word STATE_VARIABLE_Globals_1349_1349;
    MR_Word STATE_VARIABLE_Globals_1406_1406;
    MR_Word STATE_VARIABLE_Globals_1413_1413;
    MR_Word STATE_VARIABLE_Globals_1434_1434;
    MR_Word Var_1450;
    MR_Word STATE_VARIABLE_Globals_1451_1451;
    MR_Word Var_1453;
    MR_Word STATE_VARIABLE_Globals_1454_1454;
    MR_Word STATE_VARIABLE_Globals_1490_1490;
    MR_Word STATE_VARIABLE_Globals_1494_1494;
    MR_Word STATE_VARIABLE_Specs_1516_1516;
    MR_Word STATE_VARIABLE_OptTuple_1521_1521;
    MR_Word STATE_VARIABLE_Globals_1525_1525;
    MR_Word STATE_VARIABLE_Globals_1536_1536;
    MR_Word STATE_VARIABLE_Globals_1545_1545;
    MR_Word STATE_VARIABLE_Globals_1550_1550;
    MR_Word STATE_VARIABLE_Globals_1556_1556;
    MR_Word STATE_VARIABLE_OptTuple_1557_1557;
    MR_Word STATE_VARIABLE_Globals_1558_1558;
    MR_Integer Var_1658;
    MR_Integer Var_1659;
    MR_Integer Var_1660;
    MR_Integer Var_1661;
    MR_Integer Var_1662;
    MR_Integer Var_1663;
    MR_Integer Var_1664;
    MR_Integer Var_1665;
    MR_Integer Var_1666;
    MR_Integer Var_1667;
    MR_Integer Var_1668;
    MR_Integer Var_1669;
    MR_Integer Var_1670;
    MR_Integer Var_1671;
    MR_Integer Var_1672;
    MR_Integer Var_1673;
    MR_Integer Var_1674;
    MR_Integer Var_1675;
    MR_Integer Var_1676;
    MR_Integer Var_1677;
    MR_Integer Var_1678;
    MR_Integer Var_1679;
    MR_Integer Var_1680;
    MR_Integer Var_1681;
    MR_Integer Var_1682;
    MR_Integer Var_1683;
    MR_Integer Var_1684;
    MR_Integer Var_1685;
    MR_Integer Var_1686;
    MR_Integer Var_1687;
    MR_Integer Var_1688;
    MR_Integer Var_1689;
    MR_Integer Var_1690;
    MR_Integer Var_1691;
    MR_Integer Var_1692;
    MR_Integer Var_1693;
    MR_Integer Var_1694;
    MR_String Var_1695;
    MR_Integer Var_6369;
    MR_Integer Var_6370;
    MR_Integer Var_6371;
    MR_Integer Var_6372;
    MR_Integer Var_6373;
    MR_Integer Var_6374;
    MR_Integer Var_6375;
    MR_Integer Var_6376;
    MR_Integer Var_6377;
    MR_Integer Var_6378;
    MR_Integer Var_6379;
    MR_Integer Var_6380;
    MR_Integer Var_6381;
    MR_Integer Var_6382;
    MR_Integer Var_6383;
    MR_Integer Var_6384;
    MR_Integer Var_6385;
    MR_Integer Var_6386;
    MR_Integer Var_6387;
    MR_Integer Var_6388;
    MR_Integer Var_6389;
    MR_Integer Var_6390;
    MR_Integer Var_6391;
    MR_Integer Var_6392;
    MR_Integer Var_6393;
    MR_Integer Var_6394;
    MR_Integer Var_6395;
    MR_Integer Var_6396;
    MR_Integer Var_6397;
    MR_Integer Var_6398;
    MR_Integer Var_6399;
    MR_Integer Var_6400;
    MR_Integer Var_6401;
    MR_Integer Var_6402;
    MR_Integer Var_6403;
    MR_Integer Var_6404;
    MR_Integer Var_6405;
    MR_String Var_6406;
    MR_Integer Var_8723;
    MR_Integer Var_8724;
    MR_Integer Var_8725;
    MR_Integer Var_8726;
    MR_Integer Var_8727;
    MR_Integer Var_8728;
    MR_Integer Var_8729;
    MR_Integer Var_8730;
    MR_Integer Var_8731;
    MR_Integer Var_8732;
    MR_Integer Var_8733;
    MR_Integer Var_8734;
    MR_Integer Var_8735;
    MR_Integer Var_8736;
    MR_Integer Var_8737;
    MR_Integer Var_8738;
    MR_Integer Var_8739;
    MR_Integer Var_8740;
    MR_Integer Var_8741;
    MR_Integer Var_8742;
    MR_Integer Var_8743;
    MR_Integer Var_8744;
    MR_Integer Var_8745;
    MR_Integer Var_8746;
    MR_Integer Var_8747;
    MR_Integer Var_8748;
    MR_Integer Var_8749;
    MR_Integer Var_8750;
    MR_Integer Var_8751;
    MR_Integer Var_8752;
    MR_Integer Var_8753;
    MR_Integer Var_8754;
    MR_Integer Var_8755;
    MR_Integer Var_8756;
    MR_Integer Var_8757;
    MR_Integer Var_8758;
    MR_Integer Var_8759;
    MR_String Var_8760;
    MR_Integer Var_8970;
    MR_Integer Var_8971;
    MR_Integer Var_8972;
    MR_Integer Var_8973;
    MR_Integer Var_8974;
    MR_Integer Var_8975;
    MR_Integer Var_8976;
    MR_Integer Var_8977;
    MR_Integer Var_8978;
    MR_Integer Var_8979;
    MR_Integer Var_8980;
    MR_Integer Var_8981;
    MR_Integer Var_8982;
    MR_Integer Var_8983;
    MR_Integer Var_8984;
    MR_Integer Var_8985;
    MR_Integer Var_8986;
    MR_Integer Var_8987;
    MR_Integer Var_8988;
    MR_Integer Var_8989;
    MR_Integer Var_8990;
    MR_Integer Var_8991;
    MR_Integer Var_8992;
    MR_Integer Var_8993;
    MR_Integer Var_8994;
    MR_Integer Var_8995;
    MR_Integer Var_8996;
    MR_Integer Var_8997;
    MR_Integer Var_8998;
    MR_Integer Var_8999;
    MR_Integer Var_9000;
    MR_Integer Var_9001;
    MR_Integer Var_9002;
    MR_Integer Var_9003;
    MR_Integer Var_9004;
    MR_Integer Var_9005;
    MR_Integer Var_9006;
    MR_String Var_9007;
    MR_Integer Var_9217;
    MR_Integer Var_9218;
    MR_Integer Var_9219;
    MR_Integer Var_9220;
    MR_Integer Var_9221;
    MR_Integer Var_9222;
    MR_Integer Var_9223;
    MR_Integer Var_9224;
    MR_Integer Var_9225;
    MR_Integer Var_9226;
    MR_Integer Var_9227;
    MR_Integer Var_9228;
    MR_Integer Var_9229;
    MR_Integer Var_9230;
    MR_Integer Var_9231;
    MR_Integer Var_9232;
    MR_Integer Var_9233;
    MR_Integer Var_9234;
    MR_Integer Var_9235;
    MR_Integer Var_9236;
    MR_Integer Var_9237;
    MR_Integer Var_9238;
    MR_Integer Var_9239;
    MR_Integer Var_9240;
    MR_Integer Var_9241;
    MR_Integer Var_9242;
    MR_Integer Var_9243;
    MR_Integer Var_9244;
    MR_Integer Var_9245;
    MR_Integer Var_9246;
    MR_Integer Var_9247;
    MR_Integer Var_9248;
    MR_Integer Var_9249;
    MR_Integer Var_9250;
    MR_Integer Var_9251;
    MR_Integer Var_9252;
    MR_Integer Var_9253;
    MR_String Var_9254;
    MR_Word Var_9379;
    MR_Word Var_9380;
    MR_Word Var_9381;
    MR_Word Var_9382;
    MR_Word Var_9383;
    MR_Word Var_9384;
    MR_Word Var_9386;
    MR_Word Var_9387;
    MR_Word Var_9388;
    MR_Word Var_9389;
    MR_Word Var_9391;
    MR_Word Var_9392;
    MR_Word Var_9393;
    MR_Word Var_9394;
    MR_Word Var_9395;
    MR_Word Var_9396;
    MR_Word Var_9397;
    MR_Word Var_9398;
    MR_Word Var_9399;
    MR_Word Var_9400;
    MR_Word Var_9401;
    MR_Word Var_9402;
    MR_Word Var_9403;
    MR_Word Var_9404;
    MR_Word Var_9405;
    MR_Word Var_9406;
    MR_Word Var_9407;
    MR_Word Var_9408;
    MR_Word Var_9409;
    MR_Word Var_9410;
    MR_Word Var_9411;
    MR_Word Var_9412;
    MR_Word Var_9413;
    MR_Word Var_9414;
    MR_Word Var_9415;
    MR_Word Var_9416;
    MR_Word Var_9417;
    MR_Word Var_9418;
    MR_Word Var_9419;
    MR_Word Var_9420;
    MR_Word Var_9421;
    MR_Word Var_9422;
    MR_Word Var_9423;
    MR_Word Var_9424;
    MR_Word Var_9425;
    MR_Word Var_9426;
    MR_Word Var_9427;
    MR_Word Var_9428;
    MR_Word Var_9429;
    MR_Word Var_9430;
    MR_Word Var_9431;
    MR_Word Var_9432;
    MR_Word Var_9433;
    MR_Word Var_9434;
    MR_Word Var_9435;
    MR_Word Var_9436;
    MR_Word Var_9437;
    MR_Word Var_9438;
    MR_Word Var_9439;
    MR_Word Var_9440;
    MR_Word Var_9441;
    MR_Word Var_9442;
    MR_Word Var_9443;
    MR_Word Var_9444;
    MR_Word Var_9445;
    MR_Word Var_9446;
    MR_Word Var_9447;
    MR_Word Var_9448;
    MR_Word Var_9449;
    MR_Word Var_9450;
    MR_Word Var_9451;
    MR_Word Var_9452;
    MR_Word Var_9453;
    MR_Word Var_9454;
    MR_Word Var_9455;
    MR_Word Var_9456;
    MR_Word Var_9457;
    MR_Word Var_9458;
    MR_Word Var_9459;
    MR_Word Var_9460;
    MR_Word Var_9461;
    MR_Word Var_9462;
    MR_Word Var_9463;
    MR_Integer Var_9464;
    MR_Integer Var_9465;
    MR_Integer Var_9466;
    MR_Integer Var_9467;
    MR_Integer Var_9468;
    MR_Integer Var_9469;
    MR_Integer Var_9470;
    MR_Integer Var_9471;
    MR_Integer Var_9472;
    MR_Integer Var_9473;
    MR_Integer Var_9474;
    MR_Integer Var_9475;
    MR_Integer Var_9476;
    MR_Integer Var_9477;
    MR_Integer Var_9478;
    MR_Integer Var_9479;
    MR_Integer Var_9480;
    MR_Integer Var_9481;
    MR_Integer Var_9482;
    MR_Integer Var_9483;
    MR_Integer Var_9484;
    MR_Integer Var_9485;
    MR_Integer Var_9486;
    MR_Integer Var_9487;
    MR_Integer Var_9488;
    MR_Integer Var_9489;
    MR_Integer Var_9490;
    MR_Integer Var_9491;
    MR_Integer Var_9492;
    MR_Integer Var_9493;
    MR_Integer Var_9494;
    MR_Integer Var_9495;
    MR_Integer Var_9496;
    MR_Integer Var_9497;
    MR_Integer Var_9498;
    MR_Integer Var_9499;
    MR_Integer Var_9500;
    MR_String Var_9501;
    MR_Unsigned packed_word_0;
    MR_Unsigned packed_word_1;
    MR_Unsigned packed_word_2;
    MR_Word Var_652;
    MR_Word Var_653;
    MR_Word Var_692;
    MR_Word Var_693;
    MR_Word Var_10256;
    MR_Word Var_707;
    MR_Word Var_708;
    MR_Word Var_713;
    MR_Word Var_714;
    MR_String AllDumpOptions_87;
    MR_String Var_774;
    MR_Unsigned packed_word_34;
    MR_Unsigned packed_word_35;
    MR_Unsigned packed_word_36;
    MR_Unsigned packed_word_67;
    MR_Unsigned packed_word_68;
    MR_Unsigned packed_word_69;
    MR_Unsigned packed_word_70;
    MR_Unsigned packed_word_71;
    MR_Unsigned packed_word_72;
    MR_Unsigned packed_word_73;
    MR_Unsigned packed_word_74;
    MR_Unsigned packed_word_75;
    MR_Word Var_1293;
    MR_Word Var_1294;
    MR_String Var_1342;
    MR_Word ToMihsSubdir_206;
    MR_Word ToHrlsSubdir_207;
    MR_Integer Var_1547;

    mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 663)), &InstallCmd_47);
    succeeded = (strcmp(InstallCmd_47, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InstallCmdDirOption_49;

      mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 664)), &InstallCmdDirOption_49);
      {
        FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 0) = ((MR_Box) (InstallCmd_47));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 1) = ((MR_Box) (InstallCmdDirOption_49));
      }
    }
    libs__globals__globals_init_21_p_0(OptionTable0_25, STATE_VARIABLE_OptTuple_0_227, OpMode_27, Target_28, GC_Method_29, TermNorm_30, Term2Norm_31, TraceLevel_32, TraceSuppress_33, SSTraceLevel_34, MaybeThreadSafe_35, C_CompilerType_36, CSharp_CompilerType_37, ReuseStrategy_38, MaybeFeedbackInfo_39, HostEnvType_40, SystemEnvType_41, TargetEnvType_42, FileInstallCmd_48, LimitErrorContextsMap_43, &STATE_VARIABLE_Globals_235_235);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_235_235, Target_28, GC_Method_29, STATE_VARIABLE_Specs_0_228, &STATE_VARIABLE_Specs_236_236);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_235_235, (MR_Integer) 207, &EventSetFileName0_50);
    succeeded = (strcmp(EventSetFileName0_50, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_51;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_51);
      if ((MaybeEventSetFileName_51 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Globals_242_242 = STATE_VARIABLE_Globals_235_235;
      else
      {
        MR_String EventSetFileName_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEventSetFileName_51, (MR_Integer) 0))));
        MR_Word Var_241;

        {
          Var_241 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_241, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_241, 1) = ((MR_Box) (EventSetFileName_52));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 207, Var_241, STATE_VARIABLE_Globals_235_235, &STATE_VARIABLE_Globals_242_242);
      }
    }
    else
      STATE_VARIABLE_Globals_242_242 = STATE_VARIABLE_Globals_235_235;
    GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(GC_Method_29);
    switch (GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_249_249 = STATE_VARIABLE_Globals_242_242;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_244 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]));
          MR_Word STATE_VARIABLE_Globals_245_245;

          libs__globals__set_option_4_p_0((MR_Integer) 335, Var_244, STATE_VARIABLE_Globals_242_242, &STATE_VARIABLE_Globals_245_245);
          libs__globals__set_option_4_p_0((MR_Integer) 336, Var_244, STATE_VARIABLE_Globals_245_245, &STATE_VARIABLE_Globals_249_249);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_249_249, (MR_Integer) 254, &PregeneratedDist_54);
    switch (PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_274_274 = STATE_VARIABLE_Globals_249_249;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_254_254;
          MR_Word STATE_VARIABLE_Globals_258_258;
          MR_Word Var_261;
          MR_Word STATE_VARIABLE_Globals_262_262;
          MR_Word STATE_VARIABLE_Globals_266_266;
          MR_Word STATE_VARIABLE_Globals_270_270;

          libs__globals__set_option_4_p_0((MR_Integer) 267, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_249_249, &STATE_VARIABLE_Globals_254_254);
          libs__globals__set_option_4_p_0((MR_Integer) 274, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_254_254, &STATE_VARIABLE_Globals_258_258);
          Var_261 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]));
          libs__globals__set_option_4_p_0((MR_Integer) 271, Var_261, STATE_VARIABLE_Globals_258_258, &STATE_VARIABLE_Globals_262_262);
          libs__globals__set_option_4_p_0((MR_Integer) 272, Var_261, STATE_VARIABLE_Globals_262_262, &STATE_VARIABLE_Globals_266_266);
          libs__globals__set_option_4_p_0((MR_Integer) 255, Var_261, STATE_VARIABLE_Globals_266_266, &STATE_VARIABLE_Globals_270_270);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_261, STATE_VARIABLE_Globals_270_270, &STATE_VARIABLE_Globals_274_274);
        }
        break;
    }
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer NumPtagBits0_55;
          MR_Word Var_283;

          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_274_274, (MR_Integer) 267, &NumPtagBits0_55);
          succeeded = (NumPtagBits0_55 == (MR_Integer) -1);
          if (succeeded)
            libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_274_274, (MR_Integer) 270, &NumPtagBits_56);
          else
            NumPtagBits_56 = NumPtagBits0_55;
          {
            Var_283 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_283, 0) = ((MR_Box) (NumPtagBits_56));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 267, Var_283, STATE_VARIABLE_Globals_274_274, &STATE_VARIABLE_Globals_284_284);
          switch (NumPtagBits_56) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
          }
          if (succeeded)
            STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_236_236;
          else
          {
            MR_Word NumPtagBitsSpec_57;
            MR_Word Var_287;
            MR_Word Var_290;
            MR_Word Var_293;
            MR_Word Var_294;

            {
              Var_294 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_294, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_294, 1) = ((MR_Box) (NumPtagBits_56));
            }
            {
              Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_293, 0) = ((MR_Box) (Var_294));
              MR_hl_field(MR_mktag(1), Var_293, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[130])));
            }
            {
              Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_290, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[207])));
              MR_hl_field(MR_mktag(1), Var_290, 1) = ((MR_Box) (Var_293));
            }
            {
              Var_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_287, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[206])));
              MR_hl_field(MR_mktag(1), Var_287, 1) = ((MR_Box) (Var_290));
            }
            {
              NumPtagBitsSpec_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NumPtagBitsSpec_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[205])));
              MR_hl_field(MR_mktag(1), NumPtagBitsSpec_57, 1) = ((MR_Box) (Var_287));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), NumPtagBitsSpec_57, STATE_VARIABLE_Specs_236_236, &STATE_VARIABLE_Specs_305_305);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          NumPtagBits_56 = (MR_Integer) 0;
          libs__globals__set_option_4_p_0((MR_Integer) 267, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4])), STATE_VARIABLE_Globals_274_274, &STATE_VARIABLE_Globals_284_284);
          STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_236_236;
        }
        break;
    }
    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_284_284, &GradeSupportsParConj_58);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_284_284, (MR_Integer) 247, &Parallel_59);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_284_284, (MR_Integer) 248, &Threadscope_60);
    succeeded = (GradeSupportsParConj_58 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_60 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[138])), STATE_VARIABLE_Specs_305_305, &STATE_VARIABLE_Specs_323_323);
    else
      STATE_VARIABLE_Specs_323_323 = STATE_VARIABLE_Specs_305_305;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_284_284, (MR_Integer) 707, &ImplicitParallelism_62);
    switch (ImplicitParallelism_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_367_367 = STATE_VARIABLE_Specs_323_323;
          STATE_VARIABLE_Globals_346_346 = STATE_VARIABLE_Globals_284_284;
        }
        break;
      case (MR_Integer) 1:
        switch (GradeSupportsParConj_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (Parallel_59) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_367_367 = STATE_VARIABLE_Specs_323_323;
                  break;
                case (MR_Integer) 1:
                  libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[147])), STATE_VARIABLE_Specs_323_323, &STATE_VARIABLE_Specs_367_367);
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 707, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_284_284, &STATE_VARIABLE_Globals_346_346);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_63;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_284_284, (MR_Integer) 708, &FeedbackFile_63);
              succeeded = (strcmp(FeedbackFile_63, (MR_String) "") == 0);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[153])), STATE_VARIABLE_Specs_323_323, &STATE_VARIABLE_Specs_367_367);
              else
                STATE_VARIABLE_Specs_367_367 = STATE_VARIABLE_Specs_323_323;
              STATE_VARIABLE_Globals_346_346 = STATE_VARIABLE_Globals_284_284;
            }
            break;
        }
        break;
    }
    Var_370 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 707, (MR_Integer) 229, Var_370, STATE_VARIABLE_Globals_346_346, &STATE_VARIABLE_Globals_371_371);
    switch (GradeSupportsParConj_58) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__set_option_4_p_0((MR_Integer) 709, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_371_371, &STATE_VARIABLE_Globals_375_375);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_375_375 = STATE_VARIABLE_Globals_371_371;
        break;
    }
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__option_implies_5_p_0((MR_Integer) 291, (MR_Integer) 294, Var_370, STATE_VARIABLE_Globals_375_375, &STATE_VARIABLE_Globals_492_492);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_437_437;
          MR_Word STATE_VARIABLE_Globals_440_440;
          MR_Word Var_443;
          MR_Word STATE_VARIABLE_Globals_444_444;
          MR_Word STATE_VARIABLE_Globals_448_448;
          MR_Word STATE_VARIABLE_Globals_452_452;
          MR_Word STATE_VARIABLE_Globals_456_456;
          MR_Word STATE_VARIABLE_Globals_460_460;
          MR_Word STATE_VARIABLE_Globals_464_464;
          MR_Word STATE_VARIABLE_Globals_468_468;
          MR_Word STATE_VARIABLE_Globals_472_472;
          MR_Word STATE_VARIABLE_Globals_476_476;
          MR_Word STATE_VARIABLE_Globals_480_480;
          MR_Word STATE_VARIABLE_Globals_484_484;
          MR_Word STATE_VARIABLE_Globals_488_488;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_375_375, &STATE_VARIABLE_Globals_437_437);
          libs__globals__set_option_4_p_0((MR_Integer) 246, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Globals_437_437, &STATE_VARIABLE_Globals_440_440);
          Var_443 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]));
          libs__globals__set_option_4_p_0((MR_Integer) 336, Var_443, STATE_VARIABLE_Globals_440_440, &STATE_VARIABLE_Globals_444_444);
          libs__globals__set_option_4_p_0((MR_Integer) 335, Var_443, STATE_VARIABLE_Globals_444_444, &STATE_VARIABLE_Globals_448_448);
          libs__globals__set_option_4_p_0((MR_Integer) 291, Var_370, STATE_VARIABLE_Globals_448_448, &STATE_VARIABLE_Globals_452_452);
          libs__globals__set_option_4_p_0((MR_Integer) 271, Var_370, STATE_VARIABLE_Globals_452_452, &STATE_VARIABLE_Globals_456_456);
          libs__globals__set_option_4_p_0((MR_Integer) 272, Var_370, STATE_VARIABLE_Globals_456_456, &STATE_VARIABLE_Globals_460_460);
          libs__globals__set_option_4_p_0((MR_Integer) 293, Var_370, STATE_VARIABLE_Globals_460_460, &STATE_VARIABLE_Globals_464_464);
          libs__globals__set_option_4_p_0((MR_Integer) 292, Var_370, STATE_VARIABLE_Globals_464_464, &STATE_VARIABLE_Globals_468_468);
          libs__globals__set_option_4_p_0((MR_Integer) 273, Var_443, STATE_VARIABLE_Globals_468_468, &STATE_VARIABLE_Globals_472_472);
          libs__globals__set_option_4_p_0((MR_Integer) 295, Var_370, STATE_VARIABLE_Globals_472_472, &STATE_VARIABLE_Globals_476_476);
          libs__globals__set_option_4_p_0((MR_Integer) 304, Var_370, STATE_VARIABLE_Globals_476_476, &STATE_VARIABLE_Globals_480_480);
          libs__globals__set_option_4_p_0((MR_Integer) 496, Var_443, STATE_VARIABLE_Globals_480_480, &STATE_VARIABLE_Globals_484_484);
          libs__globals__set_option_4_p_0((MR_Integer) 494, Var_443, STATE_VARIABLE_Globals_484_484, &STATE_VARIABLE_Globals_488_488);
          switch (Target_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              libs__globals__set_option_4_p_0((MR_Integer) 602, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[209])), STATE_VARIABLE_Globals_488_488, &STATE_VARIABLE_Globals_492_492);
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Globals_492_492 = STATE_VARIABLE_Globals_488_488;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_383_383;
          MR_Word STATE_VARIABLE_Globals_386_386;
          MR_Word STATE_VARIABLE_Globals_390_390;
          MR_Word STATE_VARIABLE_Globals_394_394;
          MR_Word Var_397;
          MR_Word STATE_VARIABLE_Globals_398_398;
          MR_Word STATE_VARIABLE_Globals_402_402;
          MR_Word STATE_VARIABLE_Globals_406_406;
          MR_Word STATE_VARIABLE_Globals_410_410;
          MR_Word STATE_VARIABLE_Globals_414_414;
          MR_Word STATE_VARIABLE_Globals_418_418;
          MR_Word STATE_VARIABLE_Globals_422_422;
          MR_Word STATE_VARIABLE_Globals_426_426;
          MR_Word STATE_VARIABLE_Globals_430_430;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_375_375, &STATE_VARIABLE_Globals_383_383);
          libs__globals__set_option_4_p_0((MR_Integer) 246, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Globals_383_383, &STATE_VARIABLE_Globals_386_386);
          libs__globals__set_option_4_p_0((MR_Integer) 271, Var_370, STATE_VARIABLE_Globals_386_386, &STATE_VARIABLE_Globals_390_390);
          libs__globals__set_option_4_p_0((MR_Integer) 272, Var_370, STATE_VARIABLE_Globals_390_390, &STATE_VARIABLE_Globals_394_394);
          Var_397 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]));
          libs__globals__set_option_4_p_0((MR_Integer) 336, Var_397, STATE_VARIABLE_Globals_394_394, &STATE_VARIABLE_Globals_398_398);
          libs__globals__set_option_4_p_0((MR_Integer) 335, Var_397, STATE_VARIABLE_Globals_398_398, &STATE_VARIABLE_Globals_402_402);
          libs__globals__set_option_4_p_0((MR_Integer) 307, Var_370, STATE_VARIABLE_Globals_402_402, &STATE_VARIABLE_Globals_406_406);
          libs__globals__set_option_4_p_0((MR_Integer) 303, Var_397, STATE_VARIABLE_Globals_406_406, &STATE_VARIABLE_Globals_410_410);
          libs__globals__set_option_4_p_0((MR_Integer) 305, Var_370, STATE_VARIABLE_Globals_410_410, &STATE_VARIABLE_Globals_414_414);
          libs__globals__set_option_4_p_0((MR_Integer) 306, Var_370, STATE_VARIABLE_Globals_414_414, &STATE_VARIABLE_Globals_418_418);
          libs__globals__set_option_4_p_0((MR_Integer) 287, Var_397, STATE_VARIABLE_Globals_418_418, &STATE_VARIABLE_Globals_422_422);
          libs__globals__set_option_4_p_0((MR_Integer) 288, Var_397, STATE_VARIABLE_Globals_422_422, &STATE_VARIABLE_Globals_426_426);
          libs__globals__set_option_4_p_0((MR_Integer) 289, Var_397, STATE_VARIABLE_Globals_426_426, &STATE_VARIABLE_Globals_430_430);
          libs__globals__set_option_4_p_0((MR_Integer) 291, Var_397, STATE_VARIABLE_Globals_430_430, &STATE_VARIABLE_Globals_492_492);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 250, (MR_Integer) 249, Var_370, STATE_VARIABLE_Globals_492_492, &STATE_VARIABLE_Globals_497_497);
    Var_501 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[210]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 120, (MR_Integer) 585, Var_501, STATE_VARIABLE_Globals_497_497, &STATE_VARIABLE_Globals_502_502);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 120, (MR_Integer) 587, Var_501, STATE_VARIABLE_Globals_502_502, &STATE_VARIABLE_Globals_507_507);
    Var_511 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 291, (MR_Integer) 287, Var_511, STATE_VARIABLE_Globals_507_507, &STATE_VARIABLE_Globals_512_512);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 291, (MR_Integer) 288, Var_511, STATE_VARIABLE_Globals_512_512, &STATE_VARIABLE_Globals_517_517);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 291, (MR_Integer) 289, Var_511, STATE_VARIABLE_Globals_517_517, &STATE_VARIABLE_Globals_522_522);
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 0)));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 1)));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 2)));
    Optimize_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
    Var_1658 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 3))));
    Var_1659 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 4))));
    Var_1660 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 5))));
    Var_1661 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 6))));
    Var_1662 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 7))));
    Var_1663 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 8))));
    Var_1664 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 9))));
    Var_1665 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 10))));
    Var_1666 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 11))));
    Var_1667 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 12))));
    Var_1668 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 13))));
    Var_1669 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 14))));
    Var_1670 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 15))));
    Var_1671 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 16))));
    Var_1672 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 17))));
    Var_1673 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 18))));
    Var_1674 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 19))));
    Var_1675 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 20))));
    Var_1676 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 21))));
    Var_1677 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 22))));
    Var_1678 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 23))));
    Var_1679 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 24))));
    Var_1680 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 25))));
    Var_1681 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 26))));
    Var_1682 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 27))));
    Var_1683 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 28))));
    Var_1684 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 29))));
    Var_1685 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 30))));
    Var_1686 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 31))));
    Var_1687 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 32))));
    Var_1688 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 33))));
    Var_1689 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 34))));
    Var_1690 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 35))));
    Var_1691 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 36))));
    Var_1692 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 37))));
    Var_1693 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 38))));
    Var_1694 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 39))));
    Var_1695 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_227, (MR_Integer) 40))));
    switch (Optimize_66) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_OptTuple_524_524 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 1) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 6))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 2) = (MR_Box) (packed_word_2);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 3) = ((MR_Box) (Var_1658));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 4) = ((MR_Box) (Var_1659));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 5) = ((MR_Box) (Var_1660));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 6) = ((MR_Box) (Var_1661));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 7) = ((MR_Box) (Var_1662));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 8) = ((MR_Box) (Var_1663));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 9) = ((MR_Box) (Var_1664));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 10) = ((MR_Box) (Var_1665));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 11) = ((MR_Box) (Var_1666));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 12) = ((MR_Box) (Var_1667));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 13) = ((MR_Box) (Var_1668));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 14) = ((MR_Box) (Var_1669));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 15) = ((MR_Box) (Var_1670));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 16) = ((MR_Box) (Var_1671));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 17) = ((MR_Box) (Var_1672));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 18) = ((MR_Box) (Var_1673));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 19) = ((MR_Box) (Var_1674));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 20) = ((MR_Box) (Var_1675));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 21) = ((MR_Box) (Var_1676));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 22) = ((MR_Box) (Var_1677));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 23) = ((MR_Box) (Var_1678));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 24) = ((MR_Box) (Var_1679));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 25) = ((MR_Box) (Var_1680));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 26) = ((MR_Box) (Var_1681));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 27) = ((MR_Box) (Var_1682));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 28) = ((MR_Box) (Var_1683));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 29) = ((MR_Box) (Var_1684));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 30) = ((MR_Box) (Var_1685));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 31) = ((MR_Box) (Var_1686));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 32) = ((MR_Box) (Var_1687));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 33) = ((MR_Box) (Var_1688));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 34) = ((MR_Box) (Var_1689));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 35) = ((MR_Box) (Var_1690));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 36) = ((MR_Box) (Var_1691));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 37) = ((MR_Box) (Var_1692));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 38) = ((MR_Box) (Var_1693));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 39) = ((MR_Box) (Var_1694));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, 40) = ((MR_Box) (Var_1695));
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_OptTuple_524_524 = STATE_VARIABLE_OptTuple_0_227;
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_522_522, (MR_Integer) 669, &LibLinkages0_67);
    if ((LibLinkages0_67 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 669, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[156])), STATE_VARIABLE_Globals_522_522, &STATE_VARIABLE_Globals_529_529);
    else
      STATE_VARIABLE_Globals_529_529 = STATE_VARIABLE_Globals_522_522;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_529_529, (MR_Integer) 656, &InvokedByMMCMake_70);
    succeeded = (OpMode_27 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (InvokedByMMCMake_70 == (MR_Integer) 1);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 674, Var_370, STATE_VARIABLE_Globals_529_529, &STATE_VARIABLE_Globals_538_538);
    else
      STATE_VARIABLE_Globals_538_538 = STATE_VARIABLE_Globals_529_529;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 656, (MR_Integer) 137, Var_511, STATE_VARIABLE_Globals_538_538, &STATE_VARIABLE_Globals_543_543);
    if ((OpMode_27 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3))
    {
      MR_Word OpModeArgs_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
      MR_Word Var_545;
      MR_Word Var_546;

      succeeded = ((MR_tag((MR_Word) OpModeArgs_71)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_545 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_71, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_545)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_546 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_545, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_546 == (MR_Integer) 2);
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      STATE_VARIABLE_Globals_549_549 = STATE_VARIABLE_Globals_543_543;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 679, Var_511, STATE_VARIABLE_Globals_543_543, &STATE_VARIABLE_Globals_549_549);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_549_549, (MR_Integer) 486, &TransOpt_72);
    switch (TransOpt_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_570_570 = STATE_VARIABLE_Specs_367_367;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_70 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_27 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[163])), STATE_VARIABLE_Specs_367_367, &STATE_VARIABLE_Specs_570_570);
          else
            STATE_VARIABLE_Specs_570_570 = STATE_VARIABLE_Specs_367_367;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_549_549, (MR_Integer) 482, &InterModOpt_74);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_549_549, (MR_Integer) 487, &InterModAnalysis_75);
    succeeded = (InterModOpt_74 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_75 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169])), STATE_VARIABLE_Specs_570_570, &STATE_VARIABLE_Specs_591_591);
    else
      STATE_VARIABLE_Specs_591_591 = STATE_VARIABLE_Specs_570_570;
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      STATE_VARIABLE_Globals_594_594 = STATE_VARIABLE_Globals_549_549;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 660, Var_511, STATE_VARIABLE_Globals_549_549, &STATE_VARIABLE_Globals_594_594);
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_594_594, (MR_Integer) 114, &MaybeStandaloneInt_77);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_594_594, (MR_Integer) 595, &ExtraInitFunctions_78);
    succeeded = (MaybeStandaloneInt_77 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExtraInitFunctions_78 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[175])), STATE_VARIABLE_Specs_591_591, &STATE_VARIABLE_Specs_616_616);
    else
      STATE_VARIABLE_Specs_616_616 = STATE_VARIABLE_Specs_591_591;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 496, (MR_Integer) 494, Var_370, STATE_VARIABLE_Globals_594_594, &STATE_VARIABLE_Globals_620_620);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 504, (MR_Integer) 503, Var_370, STATE_VARIABLE_Globals_620_620, &STATE_VARIABLE_Globals_625_625);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 503, (MR_Integer) 502, Var_370, STATE_VARIABLE_Globals_625_625, &STATE_VARIABLE_Globals_630_630);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 503, (MR_Integer) 17, Var_370, STATE_VARIABLE_Globals_630_630, &STATE_VARIABLE_Globals_635_635);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 511, (MR_Integer) 510, Var_370, STATE_VARIABLE_Globals_635_635, &STATE_VARIABLE_Globals_640_640);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 510, (MR_Integer) 509, Var_370, STATE_VARIABLE_Globals_640_640, &STATE_VARIABLE_Globals_645_645);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 510, (MR_Integer) 17, Var_370, STATE_VARIABLE_Globals_645_645, &STATE_VARIABLE_Globals_650_650);
    succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_652 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_652)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_653 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_652, (MR_Integer) 0))));
        succeeded = (Var_653 == (MR_Word) ((MR_Unsigned) 4U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 486, Var_370, STATE_VARIABLE_Globals_650_650, &STATE_VARIABLE_Globals_656_656);
    else
      STATE_VARIABLE_Globals_656_656 = STATE_VARIABLE_Globals_650_650;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 486, (MR_Integer) 482, Var_370, STATE_VARIABLE_Globals_656_656, &STATE_VARIABLE_Globals_661_661);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 485, (MR_Integer) 484, Var_370, STATE_VARIABLE_Globals_661_661, &STATE_VARIABLE_Globals_666_666);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 482, (MR_Integer) 484, Var_511, STATE_VARIABLE_Globals_666_666, &STATE_VARIABLE_Globals_671_671);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 486, (MR_Integer) 485, Var_511, STATE_VARIABLE_Globals_671_671, &STATE_VARIABLE_Globals_676_676);
    libs__globals__set_option_4_p_0((MR_Integer) 484, Var_511, STATE_VARIABLE_Globals_676_676, &STATE_VARIABLE_Globals_680_680);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 135, (MR_Integer) 136, Var_370, STATE_VARIABLE_Globals_680_680, &STATE_VARIABLE_Globals_685_685);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 69, (MR_Integer) 68, Var_370, STATE_VARIABLE_Globals_685_685, &STATE_VARIABLE_Globals_690_690);
    succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_692 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_692)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_693 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_692, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_693)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      STATE_VARIABLE_Globals_696_696 = STATE_VARIABLE_Globals_690_690;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 135, Var_511, STATE_VARIABLE_Globals_690_690, &STATE_VARIABLE_Globals_696_696);
    succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_10256 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) Var_10256)) == (MR_Integer) 2))
      {
        MR_Word Var_10257 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_10256, (MR_Integer) 0))));

        if ((Var_10257 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if ((Var_10257 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((MR_tag((MR_Word) Var_10256)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 156, Var_511, STATE_VARIABLE_Globals_696_696, &STATE_VARIABLE_Globals_705_705);
    else
      STATE_VARIABLE_Globals_705_705 = STATE_VARIABLE_Globals_696_696;
    succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_707 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_707)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_708 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_707, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_708 == (MR_Integer) 2);
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 136, Var_511, STATE_VARIABLE_Globals_705_705, &STATE_VARIABLE_Globals_711_711);
    else
      STATE_VARIABLE_Globals_711_711 = STATE_VARIABLE_Globals_705_705;
    succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_713 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_713)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_714 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_713, (MR_Integer) 0))));
        succeeded = (Var_714 == (MR_Word) ((MR_Unsigned) 12U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 482, Var_511, STATE_VARIABLE_Globals_711_711, &STATE_VARIABLE_Globals_717_717);
    else
      STATE_VARIABLE_Globals_717_717 = STATE_VARIABLE_Globals_711_711;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_717_717, (MR_Integer) 135, &Smart_83);
    switch (Smart_83) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_734_734 = STATE_VARIABLE_Globals_717_717;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_723_723;
          MR_Word STATE_VARIABLE_Globals_728_728;
          MR_Word Var_730;
          MR_Word Var_731;
          MR_Word Var_732;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_717_717, (MR_Integer) 482, (MR_Integer) 1);
          if (succeeded)
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", STATE_VARIABLE_Globals_717_717, &STATE_VARIABLE_Globals_723_723);
          else
            STATE_VARIABLE_Globals_723_723 = STATE_VARIABLE_Globals_717_717;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_723_723, (MR_Integer) 484, (MR_Integer) 1);
          if (succeeded)
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", STATE_VARIABLE_Globals_723_723, &STATE_VARIABLE_Globals_728_728);
          else
            STATE_VARIABLE_Globals_728_728 = STATE_VARIABLE_Globals_723_723;
          succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_730 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_730)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_731 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_730, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_731)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_732 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_731, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_732 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            STATE_VARIABLE_Globals_734_734 = STATE_VARIABLE_Globals_728_728;
          else
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_728_728, &STATE_VARIABLE_Globals_734_734);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 675, (MR_Integer) 674, Var_370, STATE_VARIABLE_Globals_734_734, &STATE_VARIABLE_Globals_739_739);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 66, (MR_Integer) 65, Var_370, STATE_VARIABLE_Globals_739_739, &STATE_VARIABLE_Globals_744_744);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 71, Var_370, STATE_VARIABLE_Globals_744_744, &STATE_VARIABLE_Globals_749_749);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_749_749, (MR_Integer) 66, &VeryVerbose_84);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_749_749, (MR_Integer) 75, &Statistics_85);
    succeeded = (VeryVerbose_84 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_85 == (MR_Integer) 1);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 76, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_749_749, &STATE_VARIABLE_Globals_755_755);
    else
      STATE_VARIABLE_Globals_755_755 = STATE_VARIABLE_Globals_749_749;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 80, Var_370, STATE_VARIABLE_Globals_755_755, &STATE_VARIABLE_Globals_760_760);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_370, STATE_VARIABLE_Globals_760_760, &STATE_VARIABLE_Globals_765_765);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 81, (MR_Integer) 80, Var_370, STATE_VARIABLE_Globals_765_765, &STATE_VARIABLE_Globals_770_770);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_770_770, (MR_Integer) 93, &DebugLiveness_86);
    succeeded = (DebugLiveness_86 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_774 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_774, &AllDumpOptions_87);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_88;
      MR_String DumpOptions1_89;
      MR_Word Var_777;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_770_770, (MR_Integer) 179, &DumpOptions0_88);
      DumpOptions1_89 = mercury__string__f_43_43_2_f_0(DumpOptions0_88, AllDumpOptions_87);
      {
        Var_777 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_777, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_777, 1) = ((MR_Box) (DumpOptions1_89));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 179, Var_777, STATE_VARIABLE_Globals_770_770, &STATE_VARIABLE_Globals_778_778);
    }
    else
      STATE_VARIABLE_Globals_778_778 = STATE_VARIABLE_Globals_770_770;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_370, STATE_VARIABLE_Globals_778_778, &STATE_VARIABLE_Globals_782_782);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_782_782, (MR_Integer) 84, &DebugModesPredId_90);
    succeeded = (DebugModesPredId_90 > (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 80, Var_370, STATE_VARIABLE_Globals_782_782, &STATE_VARIABLE_Globals_788_788);
    else
      STATE_VARIABLE_Globals_788_788 = STATE_VARIABLE_Globals_782_782;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_788_788, (MR_Integer) 194, &DebugUnneededCodePredNames_91);
    if ((DebugUnneededCodePredNames_91 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_793_793 = STATE_VARIABLE_Globals_788_788;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 193, Var_370, STATE_VARIABLE_Globals_788_788, &STATE_VARIABLE_Globals_793_793);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_793_793, (MR_Integer) 90, &DebugOptPredIdStrs_94);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_793_793, (MR_Integer) 91, &DebugOptPredNames_95);
    succeeded = (DebugOptPredIdStrs_94 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DebugOptPredNames_95 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 88, Var_370, STATE_VARIABLE_Globals_793_793, &STATE_VARIABLE_Globals_799_799);
    else
      STATE_VARIABLE_Globals_799_799 = STATE_VARIABLE_Globals_793_793;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_799_799, (MR_Integer) 99, &DebugIntermoduleAnalysis_100);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_100);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_799_799, (MR_Integer) 173, &DumpHLDSPredIds_101);
    if ((DumpHLDSPredIds_101 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_811_811 = STATE_VARIABLE_Globals_799_799;
    else
    {
      MR_String DumpOptions2_104;
      MR_String DumpOptions3_105;
      MR_String DumpOptions_106;
      MR_Word Var_810;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_799_799, (MR_Integer) 179, &DumpOptions2_104);
      mercury__string__replace_all_4_p_0(DumpOptions2_104, (MR_String) "M", (MR_String) "", &DumpOptions3_105);
      mercury__string__replace_all_4_p_0(DumpOptions3_105, (MR_String) "T", (MR_String) "", &DumpOptions_106);
      {
        Var_810 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_810, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_810, 1) = ((MR_Box) (DumpOptions_106));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 179, Var_810, STATE_VARIABLE_Globals_799_799, &STATE_VARIABLE_Globals_811_811);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 189, Var_370, STATE_VARIABLE_Globals_811_811, &STATE_VARIABLE_Globals_815_815);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 189, (MR_Integer) 187, Var_370, STATE_VARIABLE_Globals_815_815, &STATE_VARIABLE_Globals_820_820);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 188, (MR_Integer) 187, Var_370, STATE_VARIABLE_Globals_820_820, &STATE_VARIABLE_Globals_825_825);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 161, (MR_Integer) 160, Var_370, STATE_VARIABLE_Globals_825_825, &STATE_VARIABLE_Globals_830_830);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_830_830, (MR_Integer) 249, &UseTrail_107);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_830_830, (MR_Integer) 291, &HighLevelCode_108);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_830_830, (MR_Integer) 251, &UseMinimalModelStackCopy_109);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_830_830, (MR_Integer) 252, &UseMinimalModelOwnStacks_110);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_109, UseMinimalModelOwnStacks_110, &UseMinimalModel_111);
    succeeded = (UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_110 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[179])), STATE_VARIABLE_Specs_616_616, &STATE_VARIABLE_Specs_845_845);
    else
    {
      succeeded = (UseMinimalModel_111 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (HighLevelCode_108 == (MR_Integer) 1);
      if (succeeded)
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[183])), STATE_VARIABLE_Specs_616_616, &STATE_VARIABLE_Specs_845_845);
      else
      {
        succeeded = (UseMinimalModel_111 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_107 == (MR_Integer) 1);
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[186])), STATE_VARIABLE_Specs_616_616, &STATE_VARIABLE_Specs_845_845);
        else
          STATE_VARIABLE_Specs_845_845 = STATE_VARIABLE_Specs_616_616;
      }
    }
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgPackBits0_115;
          MR_Integer BitsPerWord_116;
          MR_Integer ArgPackBits_117;
          MR_Word Var_919;

          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_830_830, (MR_Integer) 274, &ArgPackBits0_115);
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_830_830, (MR_Integer) 268, &BitsPerWord_116);
          succeeded = (ArgPackBits0_115 < (MR_Integer) 0);
          if (succeeded)
          {
            ArgPackBits_117 = BitsPerWord_116;
            STATE_VARIABLE_Specs_917_917 = STATE_VARIABLE_Specs_845_845;
          }
          else
          {
            succeeded = (ArgPackBits0_115 > BitsPerWord_116);
            if (succeeded)
            {
              MR_Word ArgPackBitsSpec_118;
              MR_Word Var_887;
              MR_Word Var_888;
              MR_Word Var_890;
              MR_Word Var_893;
              MR_Word Var_896;
              MR_Word Var_899;
              MR_Word Var_902;
              MR_Word Var_905;
              MR_Word Var_908;
              MR_Word Var_909;

              ArgPackBits_117 = BitsPerWord_116;
              Var_888 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212]));
              {
                Var_909 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_909, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_909, 1) = ((MR_Box) (BitsPerWord_116));
              }
              {
                Var_908 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_908, 0) = ((MR_Box) (Var_909));
                MR_hl_field(MR_mktag(1), Var_908, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
              }
              {
                Var_905 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_905, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
                MR_hl_field(MR_mktag(1), Var_905, 1) = ((MR_Box) (Var_908));
              }
              {
                Var_902 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_902, 0) = ((MR_Box) (Var_888));
                MR_hl_field(MR_mktag(1), Var_902, 1) = ((MR_Box) (Var_905));
              }
              {
                Var_899 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_899, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[216])));
                MR_hl_field(MR_mktag(1), Var_899, 1) = ((MR_Box) (Var_902));
              }
              {
                Var_896 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_896, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215])));
                MR_hl_field(MR_mktag(1), Var_896, 1) = ((MR_Box) (Var_899));
              }
              {
                Var_893 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_893, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[214])));
                MR_hl_field(MR_mktag(1), Var_893, 1) = ((MR_Box) (Var_896));
              }
              {
                Var_890 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_890, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[213])));
                MR_hl_field(MR_mktag(1), Var_890, 1) = ((MR_Box) (Var_893));
              }
              {
                Var_887 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_887, 0) = ((MR_Box) (Var_888));
                MR_hl_field(MR_mktag(1), Var_887, 1) = ((MR_Box) (Var_890));
              }
              {
                ArgPackBitsSpec_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[211])));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_118, 1) = ((MR_Box) (Var_887));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_118, STATE_VARIABLE_Specs_845_845, &STATE_VARIABLE_Specs_917_917);
            }
            else
            {
              ArgPackBits_117 = ArgPackBits0_115;
              STATE_VARIABLE_Specs_917_917 = STATE_VARIABLE_Specs_845_845;
            }
          }
          {
            Var_919 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_919, 0) = ((MR_Box) (ArgPackBits_117));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 274, Var_919, STATE_VARIABLE_Globals_830_830, &STATE_VARIABLE_Globals_920_920);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_868_868;
          MR_Word STATE_VARIABLE_Globals_872_872;
          MR_Word STATE_VARIABLE_Globals_876_876;

          libs__globals__set_option_4_p_0((MR_Integer) 274, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4])), STATE_VARIABLE_Globals_830_830, &STATE_VARIABLE_Globals_868_868);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_511, STATE_VARIABLE_Globals_868_868, &STATE_VARIABLE_Globals_872_872);
          libs__globals__set_option_4_p_0((MR_Integer) 279, Var_511, STATE_VARIABLE_Globals_872_872, &STATE_VARIABLE_Globals_876_876);
          libs__globals__set_option_4_p_0((MR_Integer) 280, Var_511, STATE_VARIABLE_Globals_876_876, &STATE_VARIABLE_Globals_920_920);
          STATE_VARIABLE_Specs_917_917 = STATE_VARIABLE_Specs_845_845;
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 271, Var_370, STATE_VARIABLE_Globals_920_920, &STATE_VARIABLE_Globals_924_924);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 291, (MR_Integer) 290, Var_511, STATE_VARIABLE_Globals_924_924, &STATE_VARIABLE_Globals_929_929);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 271, (MR_Integer) 290, Var_511, STATE_VARIABLE_Globals_929_929, &STATE_VARIABLE_Globals_934_934);
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_938_938 = STATE_VARIABLE_Globals_934_934;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_938_938 = STATE_VARIABLE_Globals_934_934;
        break;
      case (MR_Integer) 3:
        libs__globals__set_option_4_p_0((MR_Integer) 327, Var_511, STATE_VARIABLE_Globals_934_934, &STATE_VARIABLE_Globals_938_938);
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_938_938 = STATE_VARIABLE_Globals_934_934;
        break;
    }
    switch (Target_28) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      MR_Integer Var_1906 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 3))));
      MR_Integer Var_1907 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 4))));
      MR_Integer Var_1908 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 5))));
      MR_Integer Var_1909 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 6))));
      MR_Integer Var_1910 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 7))));
      MR_Integer Var_1911 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 8))));
      MR_Integer Var_1912 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 9))));
      MR_Integer Var_1913 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 10))));
      MR_Integer Var_1914 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 11))));
      MR_Integer Var_1915 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 12))));
      MR_Integer Var_1916 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 13))));
      MR_Integer Var_1917 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 14))));
      MR_Integer Var_1918 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 15))));
      MR_Integer Var_1919 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 16))));
      MR_Integer Var_1920 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 17))));
      MR_Integer Var_1921 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 18))));
      MR_Integer Var_1922 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 19))));
      MR_Integer Var_1923 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 20))));
      MR_Integer Var_1924 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 21))));
      MR_Integer Var_1925 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 22))));
      MR_Integer Var_1926 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 23))));
      MR_Integer Var_1927 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 24))));
      MR_Integer Var_1928 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 25))));
      MR_Integer Var_1929 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 26))));
      MR_Integer Var_1930 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 27))));
      MR_Integer Var_1931 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 28))));
      MR_Integer Var_1932 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 29))));
      MR_Integer Var_1933 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 30))));
      MR_Integer Var_1934 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 31))));
      MR_Integer Var_1936 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 33))));
      MR_Integer Var_1937 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 34))));
      MR_Integer Var_1938 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 35))));
      MR_Integer Var_1939 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 36))));
      MR_Integer Var_1940 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 37))));
      MR_Integer Var_1941 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 38))));
      MR_Integer Var_1942 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 39))));
      MR_String Var_1943 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 40))));
      MR_Unsigned packed_word_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 0)));
      MR_Unsigned packed_word_8 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 1)));
      MR_Unsigned packed_word_9 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_524_524, (MR_Integer) 2)));

      {
        STATE_VARIABLE_OptTuple_940_940 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 0) = (MR_Box) (packed_word_7);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 1) = (MR_Box) (packed_word_8);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 2) = (MR_Box) (packed_word_9);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 3) = ((MR_Box) (Var_1906));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 4) = ((MR_Box) (Var_1907));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 5) = ((MR_Box) (Var_1908));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 6) = ((MR_Box) (Var_1909));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 7) = ((MR_Box) (Var_1910));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 8) = ((MR_Box) (Var_1911));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 9) = ((MR_Box) (Var_1912));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 10) = ((MR_Box) (Var_1913));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 11) = ((MR_Box) (Var_1914));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 12) = ((MR_Box) (Var_1915));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 13) = ((MR_Box) (Var_1916));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 14) = ((MR_Box) (Var_1917));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 15) = ((MR_Box) (Var_1918));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 16) = ((MR_Box) (Var_1919));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 17) = ((MR_Box) (Var_1920));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 18) = ((MR_Box) (Var_1921));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 19) = ((MR_Box) (Var_1922));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 20) = ((MR_Box) (Var_1923));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 21) = ((MR_Box) (Var_1924));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 22) = ((MR_Box) (Var_1925));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 23) = ((MR_Box) (Var_1926));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 24) = ((MR_Box) (Var_1927));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 25) = ((MR_Box) (Var_1928));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 26) = ((MR_Box) (Var_1929));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 27) = ((MR_Box) (Var_1930));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 28) = ((MR_Box) (Var_1931));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 29) = ((MR_Box) (Var_1932));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 30) = ((MR_Box) (Var_1933));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 31) = ((MR_Box) (Var_1934));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 32) = ((MR_Box) ((MR_Integer) 999999));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 33) = ((MR_Box) (Var_1936));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 34) = ((MR_Box) (Var_1937));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 35) = ((MR_Box) (Var_1938));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 36) = ((MR_Box) (Var_1939));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 37) = ((MR_Box) (Var_1940));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 38) = ((MR_Box) (Var_1941));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 39) = ((MR_Box) (Var_1942));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, 40) = ((MR_Box) (Var_1943));
      }
    }
    else
      STATE_VARIABLE_OptTuple_940_940 = STATE_VARIABLE_OptTuple_524_524;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 519, (MR_Integer) 589, Var_511, STATE_VARIABLE_Globals_938_938, &STATE_VARIABLE_Globals_945_945);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 230, Var_370, STATE_VARIABLE_Globals_945_945, &STATE_VARIABLE_Globals_950_950);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 242, Var_511, STATE_VARIABLE_Globals_950_950, &STATE_VARIABLE_Globals_955_955);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 147, Var_370, STATE_VARIABLE_Globals_955_955, &STATE_VARIABLE_Globals_960_960);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_960_960, (MR_Integer) 147, &ProfOptimized_119);
    switch (ProfOptimized_119) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ProfDeep_120;

          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_960_960, (MR_Integer) 226, &ProfDeep_120);
          switch (ProfDeep_120) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_OptTuple_964_964 = STATE_VARIABLE_OptTuple_940_940;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_2030 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 3))));
                MR_Integer Var_2031 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 4))));
                MR_Integer Var_2032 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 5))));
                MR_Integer Var_2033 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 6))));
                MR_Integer Var_2034 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 7))));
                MR_Integer Var_2035 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 8))));
                MR_Integer Var_2036 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 9))));
                MR_Integer Var_2037 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 10))));
                MR_Integer Var_2038 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 11))));
                MR_Integer Var_2039 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 12))));
                MR_Integer Var_2040 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 13))));
                MR_Integer Var_2041 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 14))));
                MR_Integer Var_2042 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 15))));
                MR_Integer Var_2043 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 16))));
                MR_Integer Var_2044 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 17))));
                MR_Integer Var_2045 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 18))));
                MR_Integer Var_2046 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 19))));
                MR_Integer Var_2047 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 20))));
                MR_Integer Var_2048 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 21))));
                MR_Integer Var_2049 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 22))));
                MR_Integer Var_2050 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 23))));
                MR_Integer Var_2051 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 24))));
                MR_Integer Var_2052 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 25))));
                MR_Integer Var_2053 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 26))));
                MR_Integer Var_2054 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 27))));
                MR_Integer Var_2055 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 28))));
                MR_Integer Var_2056 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 29))));
                MR_Integer Var_2057 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 30))));
                MR_Integer Var_2058 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 31))));
                MR_Integer Var_2059 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 32))));
                MR_Integer Var_2060 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 33))));
                MR_Integer Var_2061 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 34))));
                MR_Integer Var_2062 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 35))));
                MR_Integer Var_2063 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 36))));
                MR_Integer Var_2064 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 37))));
                MR_Integer Var_2065 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 38))));
                MR_Integer Var_2066 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 39))));
                MR_String Var_2067 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 40))));
                MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 0)));
                MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 1)));
                MR_Unsigned packed_word_12 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_940_940, (MR_Integer) 2)));

                {
                  STATE_VARIABLE_OptTuple_964_964 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 0) = (MR_Box) ((((packed_word_10 & (~((MR_Unsigned) 2147483648U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 31))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 1) = (MR_Box) (packed_word_11);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 2) = (MR_Box) (packed_word_12);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 3) = ((MR_Box) (Var_2030));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 4) = ((MR_Box) (Var_2031));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 5) = ((MR_Box) (Var_2032));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 6) = ((MR_Box) (Var_2033));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 7) = ((MR_Box) (Var_2034));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 8) = ((MR_Box) (Var_2035));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 9) = ((MR_Box) (Var_2036));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 10) = ((MR_Box) (Var_2037));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 11) = ((MR_Box) (Var_2038));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 12) = ((MR_Box) (Var_2039));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 13) = ((MR_Box) (Var_2040));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 14) = ((MR_Box) (Var_2041));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 15) = ((MR_Box) (Var_2042));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 16) = ((MR_Box) (Var_2043));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 17) = ((MR_Box) (Var_2044));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 18) = ((MR_Box) (Var_2045));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 19) = ((MR_Box) (Var_2046));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 20) = ((MR_Box) (Var_2047));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 21) = ((MR_Box) (Var_2048));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 22) = ((MR_Box) (Var_2049));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 23) = ((MR_Box) (Var_2050));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 24) = ((MR_Box) (Var_2051));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 25) = ((MR_Box) (Var_2052));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 26) = ((MR_Box) (Var_2053));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 27) = ((MR_Box) (Var_2054));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 28) = ((MR_Box) (Var_2055));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 29) = ((MR_Box) (Var_2056));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 30) = ((MR_Box) (Var_2057));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 31) = ((MR_Box) (Var_2058));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 32) = ((MR_Box) (Var_2059));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 33) = ((MR_Box) (Var_2060));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 34) = ((MR_Box) (Var_2061));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 35) = ((MR_Box) (Var_2062));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 36) = ((MR_Box) (Var_2063));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 37) = ((MR_Box) (Var_2064));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 38) = ((MR_Box) (Var_2065));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 39) = ((MR_Box) (Var_2066));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, 40) = ((MR_Box) (Var_2067));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_964_964 = STATE_VARIABLE_OptTuple_940_940;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 228, Var_370, STATE_VARIABLE_Globals_960_960, &STATE_VARIABLE_Globals_969_969);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 243, (MR_Integer) 228, Var_370, STATE_VARIABLE_Globals_969_969, &STATE_VARIABLE_Globals_974_974);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 244, (MR_Integer) 228, Var_370, STATE_VARIABLE_Globals_974_974, &STATE_VARIABLE_Globals_979_979);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_979_979, (MR_Integer) 245, &ExpComp_121);
    succeeded = (strcmp(ExpComp_121, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_OptTuple_982_982 = STATE_VARIABLE_OptTuple_964_964;
    else
    {
      MR_Integer Var_2154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 3))));
      MR_Integer Var_2155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 4))));
      MR_Integer Var_2156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 5))));
      MR_Integer Var_2157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 6))));
      MR_Integer Var_2158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 7))));
      MR_Integer Var_2159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 8))));
      MR_Integer Var_2160 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 9))));
      MR_Integer Var_2161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 10))));
      MR_Integer Var_2162 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 11))));
      MR_Integer Var_2163 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 12))));
      MR_Integer Var_2164 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 13))));
      MR_Integer Var_2165 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 14))));
      MR_Integer Var_2166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 15))));
      MR_Integer Var_2167 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 16))));
      MR_Integer Var_2168 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 17))));
      MR_Integer Var_2169 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 18))));
      MR_Integer Var_2170 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 19))));
      MR_Integer Var_2171 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 20))));
      MR_Integer Var_2172 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 21))));
      MR_Integer Var_2173 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 22))));
      MR_Integer Var_2174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 23))));
      MR_Integer Var_2175 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 24))));
      MR_Integer Var_2176 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 25))));
      MR_Integer Var_2177 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 26))));
      MR_Integer Var_2178 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 27))));
      MR_Integer Var_2179 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 28))));
      MR_Integer Var_2180 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 29))));
      MR_Integer Var_2181 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 30))));
      MR_Integer Var_2182 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 31))));
      MR_Integer Var_2183 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 32))));
      MR_Integer Var_2184 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 33))));
      MR_Integer Var_2185 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 34))));
      MR_Integer Var_2186 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 35))));
      MR_Integer Var_2187 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 36))));
      MR_Integer Var_2188 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 37))));
      MR_Integer Var_2189 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 38))));
      MR_Integer Var_2190 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 39))));
      MR_String Var_2191 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 40))));
      MR_Unsigned packed_word_13 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 0)));
      MR_Unsigned packed_word_14 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 1)));
      MR_Unsigned packed_word_15 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_964_964, (MR_Integer) 2)));

      {
        STATE_VARIABLE_OptTuple_982_982 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 0) = (MR_Box) ((((packed_word_13 & (~((MR_Unsigned) 2147483648U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 31))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 1) = (MR_Box) (packed_word_14);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 2) = (MR_Box) (packed_word_15);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 3) = ((MR_Box) (Var_2154));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 4) = ((MR_Box) (Var_2155));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 5) = ((MR_Box) (Var_2156));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 6) = ((MR_Box) (Var_2157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 7) = ((MR_Box) (Var_2158));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 8) = ((MR_Box) (Var_2159));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 9) = ((MR_Box) (Var_2160));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 10) = ((MR_Box) (Var_2161));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 11) = ((MR_Box) (Var_2162));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 12) = ((MR_Box) (Var_2163));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 13) = ((MR_Box) (Var_2164));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 14) = ((MR_Box) (Var_2165));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 15) = ((MR_Box) (Var_2166));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 16) = ((MR_Box) (Var_2167));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 17) = ((MR_Box) (Var_2168));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 18) = ((MR_Box) (Var_2169));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 19) = ((MR_Box) (Var_2170));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 20) = ((MR_Box) (Var_2171));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 21) = ((MR_Box) (Var_2172));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 22) = ((MR_Box) (Var_2173));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 23) = ((MR_Box) (Var_2174));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 24) = ((MR_Box) (Var_2175));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 25) = ((MR_Box) (Var_2176));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 26) = ((MR_Box) (Var_2177));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 27) = ((MR_Box) (Var_2178));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 28) = ((MR_Box) (Var_2179));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 29) = ((MR_Box) (Var_2180));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 30) = ((MR_Box) (Var_2181));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 31) = ((MR_Box) (Var_2182));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 32) = ((MR_Box) (Var_2183));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 33) = ((MR_Box) (Var_2184));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 34) = ((MR_Box) (Var_2185));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 35) = ((MR_Box) (Var_2186));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 36) = ((MR_Box) (Var_2187));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 37) = ((MR_Box) (Var_2188));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 38) = ((MR_Box) (Var_2189));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 39) = ((MR_Box) (Var_2190));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, 40) = ((MR_Box) (Var_2191));
      }
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 218, (MR_Integer) 217, Var_370, STATE_VARIABLE_Globals_979_979, &STATE_VARIABLE_Globals_987_987);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 266, Var_370, STATE_VARIABLE_Globals_987_987, &STATE_VARIABLE_Globals_992_992);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 297, Var_370, STATE_VARIABLE_Globals_992_992, &STATE_VARIABLE_Globals_997_997);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 297, Var_370, STATE_VARIABLE_Globals_997_997, &STATE_VARIABLE_Globals_1002_1002);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 346, Var_370, STATE_VARIABLE_Globals_1002_1002, &STATE_VARIABLE_Globals_1007_1007);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 217, (MR_Integer) 145, Var_370, STATE_VARIABLE_Globals_1007_1007, &STATE_VARIABLE_Globals_1012_1012);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 145, (MR_Integer) 141, Var_370, STATE_VARIABLE_Globals_1012_1012, &STATE_VARIABLE_Globals_1017_1017);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 144, (MR_Integer) 141, Var_370, STATE_VARIABLE_Globals_1017_1017, &STATE_VARIABLE_Globals_1022_1022);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1022_1022, (MR_Integer) 139, &TraceOptimized_122);
    TraceLevelIsNone_123 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
    switch (TraceLevelIsNone_123) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TraceTailRec_124;
          MR_Word STATE_VARIABLE_OptTuple_1057_1057;
          MR_Word STATE_VARIABLE_Globals_1069_1069;
          MR_Word STATE_VARIABLE_Globals_1073_1073;
          MR_Word STATE_VARIABLE_Globals_1077_1077;
          MR_Word Var_4052;
          MR_Word Var_4053;
          MR_Word Var_4054;
          MR_Word Var_4055;
          MR_Word Var_4056;
          MR_Word Var_4057;
          MR_Word Var_4058;
          MR_Word Var_4059;
          MR_Word Var_4060;
          MR_Word Var_4061;
          MR_Word Var_4062;
          MR_Word Var_4064;
          MR_Word Var_4065;
          MR_Word Var_4066;
          MR_Word Var_4067;
          MR_Word Var_4068;
          MR_Word Var_4069;
          MR_Word Var_4070;
          MR_Word Var_4071;
          MR_Word Var_4072;
          MR_Word Var_4073;
          MR_Word Var_4074;
          MR_Word Var_4076;
          MR_Word Var_4077;
          MR_Word Var_4078;
          MR_Word Var_4079;
          MR_Word Var_4080;
          MR_Word Var_4081;
          MR_Word Var_4082;
          MR_Word Var_4083;
          MR_Word Var_4084;
          MR_Word Var_4085;
          MR_Word Var_4086;
          MR_Word Var_4087;
          MR_Word Var_4088;
          MR_Word Var_4089;
          MR_Word Var_4090;
          MR_Word Var_4091;
          MR_Word Var_4092;
          MR_Word Var_4093;
          MR_Word Var_4094;
          MR_Word Var_4095;
          MR_Word Var_4096;
          MR_Word Var_4097;
          MR_Word Var_4098;
          MR_Word Var_4099;
          MR_Word Var_4100;
          MR_Word Var_4101;
          MR_Word Var_4102;
          MR_Word Var_4103;
          MR_Word Var_4104;
          MR_Word Var_4105;
          MR_Word Var_4107;
          MR_Word Var_4109;
          MR_Word Var_4110;
          MR_Word Var_4111;
          MR_Word Var_4112;
          MR_Word Var_4113;
          MR_Word Var_4114;
          MR_Word Var_4115;
          MR_Word Var_4116;
          MR_Word Var_4117;
          MR_Word Var_4118;
          MR_Word Var_4119;
          MR_Word Var_4120;
          MR_Word Var_4121;
          MR_Word Var_4122;
          MR_Word Var_4123;
          MR_Word Var_4124;
          MR_Word Var_4125;
          MR_Word Var_4126;
          MR_Word Var_4127;
          MR_Word Var_4128;
          MR_Word Var_4129;
          MR_Word Var_4130;
          MR_Word Var_4131;
          MR_Word Var_4132;
          MR_Word Var_4133;
          MR_Word Var_4134;
          MR_Word Var_4135;
          MR_Word Var_4136;
          MR_Word Var_4137;
          MR_Integer Var_4138;
          MR_Integer Var_4139;
          MR_Integer Var_4140;
          MR_Integer Var_4141;
          MR_Integer Var_4142;
          MR_Integer Var_4143;
          MR_Integer Var_4144;
          MR_Integer Var_4145;
          MR_Integer Var_4146;
          MR_Integer Var_4147;
          MR_Integer Var_4148;
          MR_Integer Var_4149;
          MR_Integer Var_4150;
          MR_Integer Var_4151;
          MR_Integer Var_4152;
          MR_Integer Var_4153;
          MR_Integer Var_4154;
          MR_Integer Var_4155;
          MR_Integer Var_4156;
          MR_Integer Var_4157;
          MR_Integer Var_4158;
          MR_Integer Var_4159;
          MR_Integer Var_4160;
          MR_Integer Var_4161;
          MR_Integer Var_4162;
          MR_Integer Var_4163;
          MR_Integer Var_4164;
          MR_Integer Var_4165;
          MR_Integer Var_4166;
          MR_Integer Var_4167;
          MR_Integer Var_4168;
          MR_Integer Var_4169;
          MR_Integer Var_4170;
          MR_Integer Var_4171;
          MR_Integer Var_4172;
          MR_Integer Var_4173;
          MR_Integer Var_4174;
          MR_String Var_4175;
          MR_Word Var_4176;
          MR_Word Var_4177;
          MR_Word Var_4178;
          MR_Word Var_4179;
          MR_Word Var_4180;
          MR_Word Var_4181;
          MR_Word Var_4182;
          MR_Word Var_4183;
          MR_Word Var_4184;
          MR_Word Var_4185;
          MR_Word Var_4186;
          MR_Word Var_4188;
          MR_Word Var_4189;
          MR_Word Var_4190;
          MR_Word Var_4191;
          MR_Word Var_4192;
          MR_Word Var_4193;
          MR_Word Var_4194;
          MR_Word Var_4195;
          MR_Word Var_4196;
          MR_Word Var_4197;
          MR_Word Var_4198;
          MR_Word Var_4200;
          MR_Word Var_4201;
          MR_Word Var_4202;
          MR_Word Var_4203;
          MR_Word Var_4204;
          MR_Word Var_4205;
          MR_Word Var_4206;
          MR_Word Var_4207;
          MR_Word Var_4208;
          MR_Word Var_4209;
          MR_Word Var_4210;
          MR_Word Var_4211;
          MR_Word Var_4212;
          MR_Word Var_4213;
          MR_Word Var_4214;
          MR_Word Var_4215;
          MR_Word Var_4216;
          MR_Word Var_4217;
          MR_Word Var_4218;
          MR_Word Var_4219;
          MR_Word Var_4220;
          MR_Word Var_4221;
          MR_Word Var_4222;
          MR_Word Var_4223;
          MR_Word Var_4224;
          MR_Word Var_4225;
          MR_Word Var_4226;
          MR_Word Var_4227;
          MR_Word Var_4228;
          MR_Word Var_4229;
          MR_Word Var_4231;
          MR_Word Var_4233;
          MR_Word Var_4234;
          MR_Word Var_4235;
          MR_Word Var_4236;
          MR_Word Var_4237;
          MR_Word Var_4238;
          MR_Word Var_4239;
          MR_Word Var_4240;
          MR_Word Var_4241;
          MR_Word Var_4242;
          MR_Word Var_4243;
          MR_Word Var_4244;
          MR_Word Var_4245;
          MR_Word Var_4246;
          MR_Word Var_4247;
          MR_Word Var_4248;
          MR_Word Var_4249;
          MR_Word Var_4250;
          MR_Word Var_4251;
          MR_Word Var_4252;
          MR_Word Var_4253;
          MR_Word Var_4254;
          MR_Word Var_4255;
          MR_Word Var_4256;
          MR_Word Var_4257;
          MR_Word Var_4258;
          MR_Word Var_4259;
          MR_Word Var_4260;
          MR_Word Var_4261;
          MR_Integer Var_4262;
          MR_Integer Var_4263;
          MR_Integer Var_4264;
          MR_Integer Var_4265;
          MR_Integer Var_4266;
          MR_Integer Var_4267;
          MR_Integer Var_4268;
          MR_Integer Var_4269;
          MR_Integer Var_4270;
          MR_Integer Var_4271;
          MR_Integer Var_4272;
          MR_Integer Var_4273;
          MR_Integer Var_4274;
          MR_Integer Var_4275;
          MR_Integer Var_4276;
          MR_Integer Var_4277;
          MR_Integer Var_4278;
          MR_Integer Var_4279;
          MR_Integer Var_4280;
          MR_Integer Var_4281;
          MR_Integer Var_4282;
          MR_Integer Var_4283;
          MR_Integer Var_4284;
          MR_Integer Var_4285;
          MR_Integer Var_4286;
          MR_Integer Var_4287;
          MR_Integer Var_4288;
          MR_Integer Var_4289;
          MR_Integer Var_4290;
          MR_Integer Var_4291;
          MR_Integer Var_4292;
          MR_Integer Var_4293;
          MR_Integer Var_4294;
          MR_Integer Var_4295;
          MR_Integer Var_4296;
          MR_Integer Var_4297;
          MR_Integer Var_4298;
          MR_String Var_4299;
          MR_Word Var_4300;
          MR_Word Var_4301;
          MR_Word Var_4302;
          MR_Word Var_4303;
          MR_Word Var_4304;
          MR_Word Var_4305;
          MR_Word Var_4306;
          MR_Word Var_4307;
          MR_Word Var_4308;
          MR_Word Var_4309;
          MR_Word Var_4310;
          MR_Word Var_4312;
          MR_Word Var_4313;
          MR_Word Var_4314;
          MR_Word Var_4315;
          MR_Word Var_4316;
          MR_Word Var_4317;
          MR_Word Var_4318;
          MR_Word Var_4319;
          MR_Word Var_4320;
          MR_Word Var_4321;
          MR_Word Var_4322;
          MR_Word Var_4324;
          MR_Word Var_4325;
          MR_Word Var_4326;
          MR_Word Var_4327;
          MR_Word Var_4328;
          MR_Word Var_4329;
          MR_Word Var_4330;
          MR_Word Var_4331;
          MR_Word Var_4332;
          MR_Word Var_4333;
          MR_Word Var_4334;
          MR_Word Var_4335;
          MR_Word Var_4336;
          MR_Word Var_4337;
          MR_Word Var_4338;
          MR_Word Var_4339;
          MR_Word Var_4340;
          MR_Word Var_4341;
          MR_Word Var_4342;
          MR_Word Var_4343;
          MR_Word Var_4344;
          MR_Word Var_4345;
          MR_Word Var_4346;
          MR_Word Var_4347;
          MR_Word Var_4348;
          MR_Word Var_4349;
          MR_Word Var_4350;
          MR_Word Var_4351;
          MR_Word Var_4352;
          MR_Word Var_4353;
          MR_Word Var_4355;
          MR_Word Var_4357;
          MR_Word Var_4358;
          MR_Word Var_4359;
          MR_Word Var_4360;
          MR_Word Var_4361;
          MR_Word Var_4362;
          MR_Word Var_4363;
          MR_Word Var_4364;
          MR_Word Var_4365;
          MR_Word Var_4366;
          MR_Word Var_4367;
          MR_Word Var_4368;
          MR_Word Var_4369;
          MR_Word Var_4370;
          MR_Word Var_4371;
          MR_Word Var_4372;
          MR_Word Var_4373;
          MR_Word Var_4374;
          MR_Word Var_4375;
          MR_Word Var_4376;
          MR_Word Var_4377;
          MR_Word Var_4378;
          MR_Word Var_4379;
          MR_Word Var_4380;
          MR_Word Var_4381;
          MR_Word Var_4382;
          MR_Word Var_4383;
          MR_Word Var_4384;
          MR_Word Var_4385;
          MR_Integer Var_4386;
          MR_Integer Var_4387;
          MR_Integer Var_4388;
          MR_Integer Var_4389;
          MR_Integer Var_4390;
          MR_Integer Var_4391;
          MR_Integer Var_4392;
          MR_Integer Var_4393;
          MR_Integer Var_4394;
          MR_Integer Var_4395;
          MR_Integer Var_4396;
          MR_Integer Var_4397;
          MR_Integer Var_4398;
          MR_Integer Var_4399;
          MR_Integer Var_4400;
          MR_Integer Var_4401;
          MR_Integer Var_4402;
          MR_Integer Var_4403;
          MR_Integer Var_4404;
          MR_Integer Var_4405;
          MR_Integer Var_4406;
          MR_Integer Var_4407;
          MR_Integer Var_4408;
          MR_Integer Var_4409;
          MR_Integer Var_4410;
          MR_Integer Var_4411;
          MR_Integer Var_4412;
          MR_Integer Var_4413;
          MR_Integer Var_4414;
          MR_Integer Var_4415;
          MR_Integer Var_4416;
          MR_Integer Var_4417;
          MR_Integer Var_4418;
          MR_Integer Var_4419;
          MR_Integer Var_4420;
          MR_Integer Var_4421;
          MR_Integer Var_4422;
          MR_String Var_4423;

          switch (TraceOptimized_122) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_2193 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
                MR_Word Var_2194 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
                MR_Word Var_2195 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
                MR_Word Var_2196 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
                MR_Word Var_2197 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
                MR_Word Var_2198 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
                MR_Word Var_2202 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
                MR_Word Var_2203 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
                MR_Word Var_2205 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
                MR_Word Var_2207 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
                MR_Word Var_2209 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
                MR_Word Var_2210 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
                MR_Word Var_2211 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
                MR_Word Var_2212 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
                MR_Word Var_2213 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
                MR_Word Var_2214 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
                MR_Word Var_2215 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
                MR_Word Var_2217 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
                MR_Word Var_2219 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
                MR_Word Var_2222 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_2223 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Word Var_2224 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
                MR_Word Var_2226 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
                MR_Word Var_2230 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
                MR_Word Var_2231 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
                MR_Word Var_2232 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
                MR_Word Var_2233 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
                MR_Word Var_2234 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
                MR_Word Var_2235 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
                MR_Word Var_2236 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 19)) & (MR_Integer) 1);
                MR_Word Var_2237 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 18)) & (MR_Integer) 1);
                MR_Word Var_2238 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 17)) & (MR_Integer) 1);
                MR_Word Var_2239 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 16)) & (MR_Integer) 1);
                MR_Word Var_2240 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 15)) & (MR_Integer) 1);
                MR_Word Var_2241 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
                MR_Word Var_2242 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
                MR_Word Var_2243 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
                MR_Word Var_2244 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
                MR_Word Var_2245 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
                MR_Word Var_2246 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
                MR_Word Var_2247 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
                MR_Word Var_2248 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
                MR_Word Var_2249 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
                MR_Word Var_2250 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
                MR_Word Var_2251 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
                MR_Word Var_2252 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
                MR_Word Var_2253 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
                MR_Word Var_2254 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_2255 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Var_2256 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
                MR_Word Var_2257 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
                MR_Word Var_2258 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
                MR_Word Var_2259 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 18)) & (MR_Integer) 1);
                MR_Word Var_2260 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
                MR_Word Var_2261 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
                MR_Word Var_2262 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
                MR_Word Var_2263 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
                MR_Word Var_2264 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
                MR_Word Var_2265 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
                MR_Word Var_2266 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
                MR_Word Var_2267 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
                MR_Word Var_2268 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
                MR_Word Var_2269 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
                MR_Word Var_2270 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
                MR_Word Var_2271 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
                MR_Word Var_2272 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
                MR_Word Var_2273 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
                MR_Word Var_2274 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                MR_Word Var_2275 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
                MR_Word Var_2276 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
                MR_Word Var_2277 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Integer Var_2278 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 3))));
                MR_Integer Var_2279 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 4))));
                MR_Integer Var_2280 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 5))));
                MR_Integer Var_2281 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 6))));
                MR_Integer Var_2282 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 7))));
                MR_Integer Var_2283 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 8))));
                MR_Integer Var_2284 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 9))));
                MR_Integer Var_2285 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 10))));
                MR_Integer Var_2286 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 11))));
                MR_Integer Var_2287 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 12))));
                MR_Integer Var_2288 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 13))));
                MR_Integer Var_2289 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 14))));
                MR_Integer Var_2290 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 15))));
                MR_Integer Var_2291 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 16))));
                MR_Integer Var_2292 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 17))));
                MR_Integer Var_2293 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 18))));
                MR_Integer Var_2294 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 19))));
                MR_Integer Var_2295 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 20))));
                MR_Integer Var_2296 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 21))));
                MR_Integer Var_2297 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 22))));
                MR_Integer Var_2298 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 23))));
                MR_Integer Var_2299 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 24))));
                MR_Integer Var_2300 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 25))));
                MR_Integer Var_2301 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 26))));
                MR_Integer Var_2302 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 27))));
                MR_Integer Var_2303 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 28))));
                MR_Integer Var_2304 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 29))));
                MR_Integer Var_2305 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 30))));
                MR_Integer Var_2306 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 31))));
                MR_Integer Var_2307 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 32))));
                MR_Integer Var_2308 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 33))));
                MR_Integer Var_2309 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 34))));
                MR_Integer Var_2310 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 35))));
                MR_Integer Var_2311 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 36))));
                MR_Integer Var_2312 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 37))));
                MR_Integer Var_2313 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 38))));
                MR_Integer Var_2314 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 39))));
                MR_String Var_2315 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_982_982, (MR_Integer) 40))));
                MR_Word Var_2317 = Var_2193;
                MR_Word Var_2318 = Var_2194;
                MR_Word Var_2319 = Var_2195;
                MR_Word Var_2320 = Var_2196;
                MR_Word Var_2321 = Var_2197;
                MR_Word Var_2322 = Var_2198;
                MR_Word Var_2326 = Var_2202;
                MR_Word Var_2327 = Var_2203;
                MR_Word Var_2329 = Var_2205;
                MR_Word Var_2331 = Var_2207;
                MR_Word Var_2333 = Var_2209;
                MR_Word Var_2334 = Var_2210;
                MR_Word Var_2335 = Var_2211;
                MR_Word Var_2336 = Var_2212;
                MR_Word Var_2337 = Var_2213;
                MR_Word Var_2338 = Var_2214;
                MR_Word Var_2339 = Var_2215;
                MR_Word Var_2341 = Var_2217;
                MR_Word Var_2343 = Var_2219;
                MR_Word Var_2346 = Var_2222;
                MR_Word Var_2347 = Var_2223;
                MR_Word Var_2348 = Var_2224;
                MR_Word Var_2350 = Var_2226;
                MR_Word Var_2354 = Var_2230;
                MR_Word Var_2355 = Var_2231;
                MR_Word Var_2356 = Var_2232;
                MR_Word Var_2357 = Var_2233;
                MR_Word Var_2358 = Var_2234;
                MR_Word Var_2359 = Var_2235;
                MR_Word Var_2360 = Var_2236;
                MR_Word Var_2361 = Var_2237;
                MR_Word Var_2362 = Var_2238;
                MR_Word Var_2363 = Var_2239;
                MR_Word Var_2364 = Var_2240;
                MR_Word Var_2365 = Var_2241;
                MR_Word Var_2366 = Var_2242;
                MR_Word Var_2367 = Var_2243;
                MR_Word Var_2368 = Var_2244;
                MR_Word Var_2369 = Var_2245;
                MR_Word Var_2370 = Var_2246;
                MR_Word Var_2371 = Var_2247;
                MR_Word Var_2372 = Var_2248;
                MR_Word Var_2373 = Var_2249;
                MR_Word Var_2374 = Var_2250;
                MR_Word Var_2375 = Var_2251;
                MR_Word Var_2376 = Var_2252;
                MR_Word Var_2377 = Var_2253;
                MR_Word Var_2378 = Var_2254;
                MR_Word Var_2379 = Var_2255;
                MR_Word Var_2380 = Var_2256;
                MR_Word Var_2381 = Var_2257;
                MR_Word Var_2382 = Var_2258;
                MR_Word Var_2383 = Var_2259;
                MR_Word Var_2384 = Var_2260;
                MR_Word Var_2385 = Var_2261;
                MR_Word Var_2386 = Var_2262;
                MR_Word Var_2387 = Var_2263;
                MR_Word Var_2388 = Var_2264;
                MR_Word Var_2389 = Var_2265;
                MR_Word Var_2390 = Var_2266;
                MR_Word Var_2391 = Var_2267;
                MR_Word Var_2392 = Var_2268;
                MR_Word Var_2393 = Var_2269;
                MR_Word Var_2394 = Var_2270;
                MR_Word Var_2395 = Var_2271;
                MR_Word Var_2396 = Var_2272;
                MR_Word Var_2397 = Var_2273;
                MR_Word Var_2398 = Var_2274;
                MR_Word Var_2399 = Var_2275;
                MR_Word Var_2400 = Var_2276;
                MR_Word Var_2401 = Var_2277;
                MR_Integer Var_2402 = Var_2278;
                MR_Integer Var_2403 = Var_2279;
                MR_Integer Var_2404 = Var_2280;
                MR_Integer Var_2405 = Var_2281;
                MR_Integer Var_2406 = Var_2282;
                MR_Integer Var_2407 = Var_2283;
                MR_Integer Var_2408 = Var_2284;
                MR_Integer Var_2409 = Var_2285;
                MR_Integer Var_2410 = Var_2286;
                MR_Integer Var_2411 = Var_2287;
                MR_Integer Var_2412 = Var_2288;
                MR_Integer Var_2413 = Var_2289;
                MR_Integer Var_2414 = Var_2290;
                MR_Integer Var_2415 = Var_2291;
                MR_Integer Var_2416 = Var_2292;
                MR_Integer Var_2417 = Var_2293;
                MR_Integer Var_2418 = Var_2294;
                MR_Integer Var_2419 = Var_2295;
                MR_Integer Var_2420 = Var_2296;
                MR_Integer Var_2421 = Var_2297;
                MR_Integer Var_2422 = Var_2298;
                MR_Integer Var_2423 = Var_2299;
                MR_Integer Var_2424 = Var_2300;
                MR_Integer Var_2425 = Var_2301;
                MR_Integer Var_2426 = Var_2302;
                MR_Integer Var_2427 = Var_2303;
                MR_Integer Var_2428 = Var_2304;
                MR_Integer Var_2429 = Var_2305;
                MR_Integer Var_2430 = Var_2306;
                MR_Integer Var_2431 = Var_2307;
                MR_Integer Var_2432 = Var_2308;
                MR_Integer Var_2433 = Var_2309;
                MR_Integer Var_2434 = Var_2310;
                MR_Integer Var_2435 = Var_2311;
                MR_Integer Var_2436 = Var_2312;
                MR_Integer Var_2437 = Var_2313;
                MR_Integer Var_2438 = Var_2314;
                MR_String Var_2439 = Var_2315;
                MR_Word Var_2441 = Var_2317;
                MR_Word Var_2442 = Var_2318;
                MR_Word Var_2443 = Var_2319;
                MR_Word Var_2444 = Var_2320;
                MR_Word Var_2445 = Var_2321;
                MR_Word Var_2446 = Var_2322;
                MR_Word Var_2450 = Var_2326;
                MR_Word Var_2451 = Var_2327;
                MR_Word Var_2453 = Var_2329;
                MR_Word Var_2455 = Var_2331;
                MR_Word Var_2457 = Var_2333;
                MR_Word Var_2458 = Var_2334;
                MR_Word Var_2459 = Var_2335;
                MR_Word Var_2460 = Var_2336;
                MR_Word Var_2461 = Var_2337;
                MR_Word Var_2462 = Var_2338;
                MR_Word Var_2463 = Var_2339;
                MR_Word Var_2465 = Var_2341;
                MR_Word Var_2467 = Var_2343;
                MR_Word Var_2470 = Var_2346;
                MR_Word Var_2471 = Var_2347;
                MR_Word Var_2472 = Var_2348;
                MR_Word Var_2474 = Var_2350;
                MR_Word Var_2478 = Var_2354;
                MR_Word Var_2479 = Var_2355;
                MR_Word Var_2480 = Var_2356;
                MR_Word Var_2481 = Var_2357;
                MR_Word Var_2482 = Var_2358;
                MR_Word Var_2483 = Var_2359;
                MR_Word Var_2484 = Var_2360;
                MR_Word Var_2485 = Var_2361;
                MR_Word Var_2486 = Var_2362;
                MR_Word Var_2487 = Var_2363;
                MR_Word Var_2488 = Var_2364;
                MR_Word Var_2489 = Var_2365;
                MR_Word Var_2490 = Var_2366;
                MR_Word Var_2491 = Var_2367;
                MR_Word Var_2492 = Var_2368;
                MR_Word Var_2493 = Var_2369;
                MR_Word Var_2494 = Var_2370;
                MR_Word Var_2495 = Var_2371;
                MR_Word Var_2496 = Var_2372;
                MR_Word Var_2497 = Var_2373;
                MR_Word Var_2498 = Var_2374;
                MR_Word Var_2499 = Var_2375;
                MR_Word Var_2500 = Var_2376;
                MR_Word Var_2501 = Var_2377;
                MR_Word Var_2502 = Var_2378;
                MR_Word Var_2503 = Var_2379;
                MR_Word Var_2504 = Var_2380;
                MR_Word Var_2505 = Var_2381;
                MR_Word Var_2506 = Var_2382;
                MR_Word Var_2507 = Var_2383;
                MR_Word Var_2508 = Var_2384;
                MR_Word Var_2509 = Var_2385;
                MR_Word Var_2510 = Var_2386;
                MR_Word Var_2511 = Var_2387;
                MR_Word Var_2512 = Var_2388;
                MR_Word Var_2513 = Var_2389;
                MR_Word Var_2514 = Var_2390;
                MR_Word Var_2515 = Var_2391;
                MR_Word Var_2516 = Var_2392;
                MR_Word Var_2517 = Var_2393;
                MR_Word Var_2518 = Var_2394;
                MR_Word Var_2519 = Var_2395;
                MR_Word Var_2520 = Var_2396;
                MR_Word Var_2521 = Var_2397;
                MR_Word Var_2522 = Var_2398;
                MR_Word Var_2523 = Var_2399;
                MR_Word Var_2524 = Var_2400;
                MR_Word Var_2525 = Var_2401;
                MR_Integer Var_2526 = Var_2402;
                MR_Integer Var_2527 = Var_2403;
                MR_Integer Var_2528 = Var_2404;
                MR_Integer Var_2529 = Var_2405;
                MR_Integer Var_2530 = Var_2406;
                MR_Integer Var_2531 = Var_2407;
                MR_Integer Var_2532 = Var_2408;
                MR_Integer Var_2533 = Var_2409;
                MR_Integer Var_2534 = Var_2410;
                MR_Integer Var_2535 = Var_2411;
                MR_Integer Var_2536 = Var_2412;
                MR_Integer Var_2537 = Var_2413;
                MR_Integer Var_2538 = Var_2414;
                MR_Integer Var_2539 = Var_2415;
                MR_Integer Var_2540 = Var_2416;
                MR_Integer Var_2541 = Var_2417;
                MR_Integer Var_2542 = Var_2418;
                MR_Integer Var_2543 = Var_2419;
                MR_Integer Var_2544 = Var_2420;
                MR_Integer Var_2545 = Var_2421;
                MR_Integer Var_2546 = Var_2422;
                MR_Integer Var_2547 = Var_2423;
                MR_Integer Var_2548 = Var_2424;
                MR_Integer Var_2549 = Var_2425;
                MR_Integer Var_2550 = Var_2426;
                MR_Integer Var_2551 = Var_2427;
                MR_Integer Var_2552 = Var_2428;
                MR_Integer Var_2553 = Var_2429;
                MR_Integer Var_2554 = Var_2430;
                MR_Integer Var_2555 = Var_2431;
                MR_Integer Var_2556 = Var_2432;
                MR_Integer Var_2557 = Var_2433;
                MR_Integer Var_2558 = Var_2434;
                MR_Integer Var_2559 = Var_2435;
                MR_Integer Var_2560 = Var_2436;
                MR_Integer Var_2561 = Var_2437;
                MR_Integer Var_2562 = Var_2438;
                MR_String Var_2563 = Var_2439;
                MR_Word Var_2565 = Var_2441;
                MR_Word Var_2566 = Var_2442;
                MR_Word Var_2567 = Var_2443;
                MR_Word Var_2568 = Var_2444;
                MR_Word Var_2569 = Var_2445;
                MR_Word Var_2570 = Var_2446;
                MR_Word Var_2574 = Var_2450;
                MR_Word Var_2575 = Var_2451;
                MR_Word Var_2577 = Var_2453;
                MR_Word Var_2579 = Var_2455;
                MR_Word Var_2581 = Var_2457;
                MR_Word Var_2582 = Var_2458;
                MR_Word Var_2583 = Var_2459;
                MR_Word Var_2584 = Var_2460;
                MR_Word Var_2585 = Var_2461;
                MR_Word Var_2586 = Var_2462;
                MR_Word Var_2587 = Var_2463;
                MR_Word Var_2589 = Var_2465;
                MR_Word Var_2591 = Var_2467;
                MR_Word Var_2594 = Var_2470;
                MR_Word Var_2595 = Var_2471;
                MR_Word Var_2596 = Var_2472;
                MR_Word Var_2598 = Var_2474;
                MR_Word Var_2602 = Var_2478;
                MR_Word Var_2603 = Var_2479;
                MR_Word Var_2604 = Var_2480;
                MR_Word Var_2605 = Var_2481;
                MR_Word Var_2606 = Var_2482;
                MR_Word Var_2607 = Var_2483;
                MR_Word Var_2608 = Var_2484;
                MR_Word Var_2609 = Var_2485;
                MR_Word Var_2610 = Var_2486;
                MR_Word Var_2611 = Var_2487;
                MR_Word Var_2612 = Var_2488;
                MR_Word Var_2613 = Var_2489;
                MR_Word Var_2614 = Var_2490;
                MR_Word Var_2615 = Var_2491;
                MR_Word Var_2616 = Var_2492;
                MR_Word Var_2617 = Var_2493;
                MR_Word Var_2618 = Var_2494;
                MR_Word Var_2619 = Var_2495;
                MR_Word Var_2620 = Var_2496;
                MR_Word Var_2621 = Var_2497;
                MR_Word Var_2622 = Var_2498;
                MR_Word Var_2623 = Var_2499;
                MR_Word Var_2624 = Var_2500;
                MR_Word Var_2625 = Var_2501;
                MR_Word Var_2626 = Var_2502;
                MR_Word Var_2627 = Var_2503;
                MR_Word Var_2628 = Var_2504;
                MR_Word Var_2629 = Var_2505;
                MR_Word Var_2630 = Var_2506;
                MR_Word Var_2631 = Var_2507;
                MR_Word Var_2632 = Var_2508;
                MR_Word Var_2633 = Var_2509;
                MR_Word Var_2634 = Var_2510;
                MR_Word Var_2635 = Var_2511;
                MR_Word Var_2636 = Var_2512;
                MR_Word Var_2637 = Var_2513;
                MR_Word Var_2638 = Var_2514;
                MR_Word Var_2639 = Var_2515;
                MR_Word Var_2640 = Var_2516;
                MR_Word Var_2641 = Var_2517;
                MR_Word Var_2642 = Var_2518;
                MR_Word Var_2643 = Var_2519;
                MR_Word Var_2644 = Var_2520;
                MR_Word Var_2645 = Var_2521;
                MR_Word Var_2646 = Var_2522;
                MR_Word Var_2647 = Var_2523;
                MR_Word Var_2648 = Var_2524;
                MR_Word Var_2649 = Var_2525;
                MR_Integer Var_2650 = Var_2526;
                MR_Integer Var_2651 = Var_2527;
                MR_Integer Var_2652 = Var_2528;
                MR_Integer Var_2653 = Var_2529;
                MR_Integer Var_2654 = Var_2530;
                MR_Integer Var_2655 = Var_2531;
                MR_Integer Var_2656 = Var_2532;
                MR_Integer Var_2657 = Var_2533;
                MR_Integer Var_2658 = Var_2534;
                MR_Integer Var_2659 = Var_2535;
                MR_Integer Var_2660 = Var_2536;
                MR_Integer Var_2661 = Var_2537;
                MR_Integer Var_2662 = Var_2538;
                MR_Integer Var_2663 = Var_2539;
                MR_Integer Var_2664 = Var_2540;
                MR_Integer Var_2665 = Var_2541;
                MR_Integer Var_2666 = Var_2542;
                MR_Integer Var_2667 = Var_2543;
                MR_Integer Var_2668 = Var_2544;
                MR_Integer Var_2669 = Var_2545;
                MR_Integer Var_2670 = Var_2546;
                MR_Integer Var_2671 = Var_2547;
                MR_Integer Var_2672 = Var_2548;
                MR_Integer Var_2673 = Var_2549;
                MR_Integer Var_2674 = Var_2550;
                MR_Integer Var_2675 = Var_2551;
                MR_Integer Var_2676 = Var_2552;
                MR_Integer Var_2677 = Var_2553;
                MR_Integer Var_2678 = Var_2554;
                MR_Integer Var_2679 = Var_2555;
                MR_Integer Var_2680 = Var_2556;
                MR_Integer Var_2681 = Var_2557;
                MR_Integer Var_2682 = Var_2558;
                MR_Integer Var_2683 = Var_2559;
                MR_Integer Var_2684 = Var_2560;
                MR_Integer Var_2685 = Var_2561;
                MR_Integer Var_2686 = Var_2562;
                MR_String Var_2687 = Var_2563;
                MR_Word Var_2689 = Var_2565;
                MR_Word Var_2690 = Var_2566;
                MR_Word Var_2691 = Var_2567;
                MR_Word Var_2692 = Var_2568;
                MR_Word Var_2693 = Var_2569;
                MR_Word Var_2694 = Var_2570;
                MR_Word Var_2698 = Var_2574;
                MR_Word Var_2699 = Var_2575;
                MR_Word Var_2701 = Var_2577;
                MR_Word Var_2703 = Var_2579;
                MR_Word Var_2705 = Var_2581;
                MR_Word Var_2706 = Var_2582;
                MR_Word Var_2707 = Var_2583;
                MR_Word Var_2708 = Var_2584;
                MR_Word Var_2709 = Var_2585;
                MR_Word Var_2710 = Var_2586;
                MR_Word Var_2711 = Var_2587;
                MR_Word Var_2713 = Var_2589;
                MR_Word Var_2715 = Var_2591;
                MR_Word Var_2718 = Var_2594;
                MR_Word Var_2719 = Var_2595;
                MR_Word Var_2720 = Var_2596;
                MR_Word Var_2722 = Var_2598;
                MR_Word Var_2726 = Var_2602;
                MR_Word Var_2727 = Var_2603;
                MR_Word Var_2728 = Var_2604;
                MR_Word Var_2729 = Var_2605;
                MR_Word Var_2730 = Var_2606;
                MR_Word Var_2731 = Var_2607;
                MR_Word Var_2732 = Var_2608;
                MR_Word Var_2733 = Var_2609;
                MR_Word Var_2734 = Var_2610;
                MR_Word Var_2735 = Var_2611;
                MR_Word Var_2736 = Var_2612;
                MR_Word Var_2737 = Var_2613;
                MR_Word Var_2738 = Var_2614;
                MR_Word Var_2739 = Var_2615;
                MR_Word Var_2740 = Var_2616;
                MR_Word Var_2741 = Var_2617;
                MR_Word Var_2742 = Var_2618;
                MR_Word Var_2743 = Var_2619;
                MR_Word Var_2744 = Var_2620;
                MR_Word Var_2745 = Var_2621;
                MR_Word Var_2746 = Var_2622;
                MR_Word Var_2747 = Var_2623;
                MR_Word Var_2748 = Var_2624;
                MR_Word Var_2749 = Var_2625;
                MR_Word Var_2750 = Var_2626;
                MR_Word Var_2751 = Var_2627;
                MR_Word Var_2752 = Var_2628;
                MR_Word Var_2753 = Var_2629;
                MR_Word Var_2754 = Var_2630;
                MR_Word Var_2755 = Var_2631;
                MR_Word Var_2756 = Var_2632;
                MR_Word Var_2757 = Var_2633;
                MR_Word Var_2758 = Var_2634;
                MR_Word Var_2759 = Var_2635;
                MR_Word Var_2760 = Var_2636;
                MR_Word Var_2761 = Var_2637;
                MR_Word Var_2762 = Var_2638;
                MR_Word Var_2763 = Var_2639;
                MR_Word Var_2764 = Var_2640;
                MR_Word Var_2765 = Var_2641;
                MR_Word Var_2766 = Var_2642;
                MR_Word Var_2767 = Var_2643;
                MR_Word Var_2768 = Var_2644;
                MR_Word Var_2769 = Var_2645;
                MR_Word Var_2770 = Var_2646;
                MR_Word Var_2771 = Var_2647;
                MR_Word Var_2772 = Var_2648;
                MR_Word Var_2773 = Var_2649;
                MR_Integer Var_2774 = Var_2650;
                MR_Integer Var_2775 = Var_2651;
                MR_Integer Var_2776 = Var_2652;
                MR_Integer Var_2777 = Var_2653;
                MR_Integer Var_2778 = Var_2654;
                MR_Integer Var_2779 = Var_2655;
                MR_Integer Var_2780 = Var_2656;
                MR_Integer Var_2781 = Var_2657;
                MR_Integer Var_2782 = Var_2658;
                MR_Integer Var_2783 = Var_2659;
                MR_Integer Var_2784 = Var_2660;
                MR_Integer Var_2785 = Var_2661;
                MR_Integer Var_2786 = Var_2662;
                MR_Integer Var_2787 = Var_2663;
                MR_Integer Var_2788 = Var_2664;
                MR_Integer Var_2789 = Var_2665;
                MR_Integer Var_2790 = Var_2666;
                MR_Integer Var_2791 = Var_2667;
                MR_Integer Var_2792 = Var_2668;
                MR_Integer Var_2793 = Var_2669;
                MR_Integer Var_2794 = Var_2670;
                MR_Integer Var_2795 = Var_2671;
                MR_Integer Var_2796 = Var_2672;
                MR_Integer Var_2797 = Var_2673;
                MR_Integer Var_2798 = Var_2674;
                MR_Integer Var_2799 = Var_2675;
                MR_Integer Var_2800 = Var_2676;
                MR_Integer Var_2801 = Var_2677;
                MR_Integer Var_2802 = Var_2678;
                MR_Integer Var_2803 = Var_2679;
                MR_Integer Var_2804 = Var_2680;
                MR_Integer Var_2805 = Var_2681;
                MR_Integer Var_2806 = Var_2682;
                MR_Integer Var_2807 = Var_2683;
                MR_Integer Var_2808 = Var_2684;
                MR_Integer Var_2809 = Var_2685;
                MR_Integer Var_2810 = Var_2686;
                MR_String Var_2811 = Var_2687;
                MR_Word Var_2813 = Var_2689;
                MR_Word Var_2814 = Var_2690;
                MR_Word Var_2815 = Var_2691;
                MR_Word Var_2816 = Var_2692;
                MR_Word Var_2817 = Var_2693;
                MR_Word Var_2818 = Var_2694;
                MR_Word Var_2822 = Var_2698;
                MR_Word Var_2823 = Var_2699;
                MR_Word Var_2825 = Var_2701;
                MR_Word Var_2827 = Var_2703;
                MR_Word Var_2829 = Var_2705;
                MR_Word Var_2830 = Var_2706;
                MR_Word Var_2831 = Var_2707;
                MR_Word Var_2832 = Var_2708;
                MR_Word Var_2833 = Var_2709;
                MR_Word Var_2834 = Var_2710;
                MR_Word Var_2835 = Var_2711;
                MR_Word Var_2837 = Var_2713;
                MR_Word Var_2839 = Var_2715;
                MR_Word Var_2842 = Var_2718;
                MR_Word Var_2843 = Var_2719;
                MR_Word Var_2844 = Var_2720;
                MR_Word Var_2846 = Var_2722;
                MR_Word Var_2850 = Var_2726;
                MR_Word Var_2851 = Var_2727;
                MR_Word Var_2852 = Var_2728;
                MR_Word Var_2853 = Var_2729;
                MR_Word Var_2854 = Var_2730;
                MR_Word Var_2855 = Var_2731;
                MR_Word Var_2856 = Var_2732;
                MR_Word Var_2857 = Var_2733;
                MR_Word Var_2858 = Var_2734;
                MR_Word Var_2859 = Var_2735;
                MR_Word Var_2860 = Var_2736;
                MR_Word Var_2861 = Var_2737;
                MR_Word Var_2862 = Var_2738;
                MR_Word Var_2863 = Var_2739;
                MR_Word Var_2864 = Var_2740;
                MR_Word Var_2865 = Var_2741;
                MR_Word Var_2866 = Var_2742;
                MR_Word Var_2867 = Var_2743;
                MR_Word Var_2868 = Var_2744;
                MR_Word Var_2869 = Var_2745;
                MR_Word Var_2870 = Var_2746;
                MR_Word Var_2871 = Var_2747;
                MR_Word Var_2872 = Var_2748;
                MR_Word Var_2873 = Var_2749;
                MR_Word Var_2874 = Var_2750;
                MR_Word Var_2875 = Var_2751;
                MR_Word Var_2876 = Var_2752;
                MR_Word Var_2877 = Var_2753;
                MR_Word Var_2878 = Var_2754;
                MR_Word Var_2879 = Var_2755;
                MR_Word Var_2880 = Var_2756;
                MR_Word Var_2881 = Var_2757;
                MR_Word Var_2882 = Var_2758;
                MR_Word Var_2883 = Var_2759;
                MR_Word Var_2884 = Var_2760;
                MR_Word Var_2885 = Var_2761;
                MR_Word Var_2886 = Var_2762;
                MR_Word Var_2887 = Var_2763;
                MR_Word Var_2888 = Var_2764;
                MR_Word Var_2889 = Var_2765;
                MR_Word Var_2890 = Var_2766;
                MR_Word Var_2891 = Var_2767;
                MR_Word Var_2892 = Var_2768;
                MR_Word Var_2893 = Var_2769;
                MR_Word Var_2894 = Var_2770;
                MR_Word Var_2895 = Var_2771;
                MR_Word Var_2896 = Var_2772;
                MR_Word Var_2897 = Var_2773;
                MR_Integer Var_2898 = Var_2774;
                MR_Integer Var_2899 = Var_2775;
                MR_Integer Var_2900 = Var_2776;
                MR_Integer Var_2901 = Var_2777;
                MR_Integer Var_2902 = Var_2778;
                MR_Integer Var_2903 = Var_2779;
                MR_Integer Var_2904 = Var_2780;
                MR_Integer Var_2905 = Var_2781;
                MR_Integer Var_2906 = Var_2782;
                MR_Integer Var_2907 = Var_2783;
                MR_Integer Var_2908 = Var_2784;
                MR_Integer Var_2909 = Var_2785;
                MR_Integer Var_2910 = Var_2786;
                MR_Integer Var_2911 = Var_2787;
                MR_Integer Var_2912 = Var_2788;
                MR_Integer Var_2913 = Var_2789;
                MR_Integer Var_2914 = Var_2790;
                MR_Integer Var_2915 = Var_2791;
                MR_Integer Var_2916 = Var_2792;
                MR_Integer Var_2917 = Var_2793;
                MR_Integer Var_2918 = Var_2794;
                MR_Integer Var_2919 = Var_2795;
                MR_Integer Var_2920 = Var_2796;
                MR_Integer Var_2921 = Var_2797;
                MR_Integer Var_2922 = Var_2798;
                MR_Integer Var_2923 = Var_2799;
                MR_Integer Var_2924 = Var_2800;
                MR_Integer Var_2925 = Var_2801;
                MR_Integer Var_2926 = Var_2802;
                MR_Integer Var_2927 = Var_2803;
                MR_Integer Var_2928 = Var_2804;
                MR_Integer Var_2929 = Var_2805;
                MR_Integer Var_2930 = Var_2806;
                MR_Integer Var_2931 = Var_2807;
                MR_Integer Var_2932 = Var_2808;
                MR_Integer Var_2933 = Var_2809;
                MR_Integer Var_2934 = Var_2810;
                MR_String Var_2935 = Var_2811;
                MR_Word Var_2937 = Var_2813;
                MR_Word Var_2938 = Var_2814;
                MR_Word Var_2939 = Var_2815;
                MR_Word Var_2940 = Var_2816;
                MR_Word Var_2941 = Var_2817;
                MR_Word Var_2942 = Var_2818;
                MR_Word Var_2946 = Var_2822;
                MR_Word Var_2947 = Var_2823;
                MR_Word Var_2949 = Var_2825;
                MR_Word Var_2951 = Var_2827;
                MR_Word Var_2953 = Var_2829;
                MR_Word Var_2954 = Var_2830;
                MR_Word Var_2955 = Var_2831;
                MR_Word Var_2956 = Var_2832;
                MR_Word Var_2957 = Var_2833;
                MR_Word Var_2958 = Var_2834;
                MR_Word Var_2959 = Var_2835;
                MR_Word Var_2961 = Var_2837;
                MR_Word Var_2963 = Var_2839;
                MR_Word Var_2966 = Var_2842;
                MR_Word Var_2967 = Var_2843;
                MR_Word Var_2968 = Var_2844;
                MR_Word Var_2970 = Var_2846;
                MR_Word Var_2974 = Var_2850;
                MR_Word Var_2975 = Var_2851;
                MR_Word Var_2976 = Var_2852;
                MR_Word Var_2977 = Var_2853;
                MR_Word Var_2978 = Var_2854;
                MR_Word Var_2979 = Var_2855;
                MR_Word Var_2980 = Var_2856;
                MR_Word Var_2981 = Var_2857;
                MR_Word Var_2982 = Var_2858;
                MR_Word Var_2983 = Var_2859;
                MR_Word Var_2984 = Var_2860;
                MR_Word Var_2985 = Var_2861;
                MR_Word Var_2986 = Var_2862;
                MR_Word Var_2987 = Var_2863;
                MR_Word Var_2988 = Var_2864;
                MR_Word Var_2989 = Var_2865;
                MR_Word Var_2990 = Var_2866;
                MR_Word Var_2991 = Var_2867;
                MR_Word Var_2992 = Var_2868;
                MR_Word Var_2993 = Var_2869;
                MR_Word Var_2994 = Var_2870;
                MR_Word Var_2995 = Var_2871;
                MR_Word Var_2996 = Var_2872;
                MR_Word Var_2997 = Var_2873;
                MR_Word Var_2998 = Var_2874;
                MR_Word Var_2999 = Var_2875;
                MR_Word Var_3000 = Var_2876;
                MR_Word Var_3001 = Var_2877;
                MR_Word Var_3002 = Var_2878;
                MR_Word Var_3003 = Var_2879;
                MR_Word Var_3004 = Var_2880;
                MR_Word Var_3005 = Var_2881;
                MR_Word Var_3006 = Var_2882;
                MR_Word Var_3007 = Var_2883;
                MR_Word Var_3008 = Var_2884;
                MR_Word Var_3009 = Var_2885;
                MR_Word Var_3010 = Var_2886;
                MR_Word Var_3011 = Var_2887;
                MR_Word Var_3012 = Var_2888;
                MR_Word Var_3013 = Var_2889;
                MR_Word Var_3014 = Var_2890;
                MR_Word Var_3015 = Var_2891;
                MR_Word Var_3016 = Var_2892;
                MR_Word Var_3017 = Var_2893;
                MR_Word Var_3018 = Var_2894;
                MR_Word Var_3019 = Var_2895;
                MR_Word Var_3020 = Var_2896;
                MR_Word Var_3021 = Var_2897;
                MR_Integer Var_3022 = Var_2898;
                MR_Integer Var_3023 = Var_2899;
                MR_Integer Var_3024 = Var_2900;
                MR_Integer Var_3025 = Var_2901;
                MR_Integer Var_3026 = Var_2902;
                MR_Integer Var_3027 = Var_2903;
                MR_Integer Var_3028 = Var_2904;
                MR_Integer Var_3029 = Var_2905;
                MR_Integer Var_3030 = Var_2906;
                MR_Integer Var_3031 = Var_2907;
                MR_Integer Var_3032 = Var_2908;
                MR_Integer Var_3033 = Var_2909;
                MR_Integer Var_3034 = Var_2910;
                MR_Integer Var_3035 = Var_2911;
                MR_Integer Var_3036 = Var_2912;
                MR_Integer Var_3037 = Var_2913;
                MR_Integer Var_3038 = Var_2914;
                MR_Integer Var_3039 = Var_2915;
                MR_Integer Var_3040 = Var_2916;
                MR_Integer Var_3041 = Var_2917;
                MR_Integer Var_3042 = Var_2918;
                MR_Integer Var_3043 = Var_2919;
                MR_Integer Var_3044 = Var_2920;
                MR_Integer Var_3045 = Var_2921;
                MR_Integer Var_3046 = Var_2922;
                MR_Integer Var_3047 = Var_2923;
                MR_Integer Var_3048 = Var_2924;
                MR_Integer Var_3049 = Var_2925;
                MR_Integer Var_3050 = Var_2926;
                MR_Integer Var_3051 = Var_2927;
                MR_Integer Var_3052 = Var_2928;
                MR_Integer Var_3053 = Var_2929;
                MR_Integer Var_3054 = Var_2930;
                MR_Integer Var_3055 = Var_2931;
                MR_Integer Var_3056 = Var_2932;
                MR_Integer Var_3057 = Var_2933;
                MR_Integer Var_3058 = Var_2934;
                MR_String Var_3059 = Var_2935;
                MR_Word Var_3061 = Var_2937;
                MR_Word Var_3062 = Var_2938;
                MR_Word Var_3063 = Var_2939;
                MR_Word Var_3064 = Var_2940;
                MR_Word Var_3065 = Var_2941;
                MR_Word Var_3066 = Var_2942;
                MR_Word Var_3070 = Var_2946;
                MR_Word Var_3071 = Var_2947;
                MR_Word Var_3073 = Var_2949;
                MR_Word Var_3075 = Var_2951;
                MR_Word Var_3077 = Var_2953;
                MR_Word Var_3078 = Var_2954;
                MR_Word Var_3079 = Var_2955;
                MR_Word Var_3080 = Var_2956;
                MR_Word Var_3081 = Var_2957;
                MR_Word Var_3082 = Var_2958;
                MR_Word Var_3083 = Var_2959;
                MR_Word Var_3085 = Var_2961;
                MR_Word Var_3087 = Var_2963;
                MR_Word Var_3090 = Var_2966;
                MR_Word Var_3091 = Var_2967;
                MR_Word Var_3092 = Var_2968;
                MR_Word Var_3094 = Var_2970;
                MR_Word Var_3098 = Var_2974;
                MR_Word Var_3099 = Var_2975;
                MR_Word Var_3100 = Var_2976;
                MR_Word Var_3101 = Var_2977;
                MR_Word Var_3102 = Var_2978;
                MR_Word Var_3103 = Var_2979;
                MR_Word Var_3104 = Var_2980;
                MR_Word Var_3105 = Var_2981;
                MR_Word Var_3106 = Var_2982;
                MR_Word Var_3107 = Var_2983;
                MR_Word Var_3108 = Var_2984;
                MR_Word Var_3109 = Var_2985;
                MR_Word Var_3110 = Var_2986;
                MR_Word Var_3111 = Var_2987;
                MR_Word Var_3112 = Var_2988;
                MR_Word Var_3113 = Var_2989;
                MR_Word Var_3114 = Var_2990;
                MR_Word Var_3115 = Var_2991;
                MR_Word Var_3116 = Var_2992;
                MR_Word Var_3117 = Var_2993;
                MR_Word Var_3118 = Var_2994;
                MR_Word Var_3119 = Var_2995;
                MR_Word Var_3120 = Var_2996;
                MR_Word Var_3121 = Var_2997;
                MR_Word Var_3122 = Var_2998;
                MR_Word Var_3123 = Var_2999;
                MR_Word Var_3124 = Var_3000;
                MR_Word Var_3125 = Var_3001;
                MR_Word Var_3126 = Var_3002;
                MR_Word Var_3127 = Var_3003;
                MR_Word Var_3128 = Var_3004;
                MR_Word Var_3129 = Var_3005;
                MR_Word Var_3130 = Var_3006;
                MR_Word Var_3131 = Var_3007;
                MR_Word Var_3132 = Var_3008;
                MR_Word Var_3133 = Var_3009;
                MR_Word Var_3134 = Var_3010;
                MR_Word Var_3135 = Var_3011;
                MR_Word Var_3136 = Var_3012;
                MR_Word Var_3137 = Var_3013;
                MR_Word Var_3138 = Var_3014;
                MR_Word Var_3139 = Var_3015;
                MR_Word Var_3140 = Var_3016;
                MR_Word Var_3141 = Var_3017;
                MR_Word Var_3142 = Var_3018;
                MR_Word Var_3143 = Var_3019;
                MR_Word Var_3144 = Var_3020;
                MR_Word Var_3145 = Var_3021;
                MR_Integer Var_3146 = Var_3022;
                MR_Integer Var_3147 = Var_3023;
                MR_Integer Var_3148 = Var_3024;
                MR_Integer Var_3149 = Var_3025;
                MR_Integer Var_3150 = Var_3026;
                MR_Integer Var_3151 = Var_3027;
                MR_Integer Var_3152 = Var_3028;
                MR_Integer Var_3153 = Var_3029;
                MR_Integer Var_3154 = Var_3030;
                MR_Integer Var_3155 = Var_3031;
                MR_Integer Var_3156 = Var_3032;
                MR_Integer Var_3157 = Var_3033;
                MR_Integer Var_3158 = Var_3034;
                MR_Integer Var_3159 = Var_3035;
                MR_Integer Var_3160 = Var_3036;
                MR_Integer Var_3161 = Var_3037;
                MR_Integer Var_3162 = Var_3038;
                MR_Integer Var_3163 = Var_3039;
                MR_Integer Var_3164 = Var_3040;
                MR_Integer Var_3165 = Var_3041;
                MR_Integer Var_3166 = Var_3042;
                MR_Integer Var_3167 = Var_3043;
                MR_Integer Var_3168 = Var_3044;
                MR_Integer Var_3169 = Var_3045;
                MR_Integer Var_3170 = Var_3046;
                MR_Integer Var_3171 = Var_3047;
                MR_Integer Var_3172 = Var_3048;
                MR_Integer Var_3173 = Var_3049;
                MR_Integer Var_3174 = Var_3050;
                MR_Integer Var_3175 = Var_3051;
                MR_Integer Var_3176 = Var_3052;
                MR_Integer Var_3177 = Var_3053;
                MR_Integer Var_3178 = Var_3054;
                MR_Integer Var_3179 = Var_3055;
                MR_Integer Var_3180 = Var_3056;
                MR_Integer Var_3181 = Var_3057;
                MR_Integer Var_3182 = Var_3058;
                MR_String Var_3183 = Var_3059;
                MR_Word Var_3185 = Var_3061;
                MR_Word Var_3186 = Var_3062;
                MR_Word Var_3187 = Var_3063;
                MR_Word Var_3188 = Var_3064;
                MR_Word Var_3189 = Var_3065;
                MR_Word Var_3190 = Var_3066;
                MR_Word Var_3194 = Var_3070;
                MR_Word Var_3195 = Var_3071;
                MR_Word Var_3197 = Var_3073;
                MR_Word Var_3199 = Var_3075;
                MR_Word Var_3201 = Var_3077;
                MR_Word Var_3202 = Var_3078;
                MR_Word Var_3203 = Var_3079;
                MR_Word Var_3204 = Var_3080;
                MR_Word Var_3205 = Var_3081;
                MR_Word Var_3206 = Var_3082;
                MR_Word Var_3207 = Var_3083;
                MR_Word Var_3209 = Var_3085;
                MR_Word Var_3211 = Var_3087;
                MR_Word Var_3214 = Var_3090;
                MR_Word Var_3215 = Var_3091;
                MR_Word Var_3216 = Var_3092;
                MR_Word Var_3218 = Var_3094;
                MR_Word Var_3222 = Var_3098;
                MR_Word Var_3223 = Var_3099;
                MR_Word Var_3224 = Var_3100;
                MR_Word Var_3225 = Var_3101;
                MR_Word Var_3226 = Var_3102;
                MR_Word Var_3227 = Var_3103;
                MR_Word Var_3228 = Var_3104;
                MR_Word Var_3229 = Var_3105;
                MR_Word Var_3230 = Var_3106;
                MR_Word Var_3231 = Var_3107;
                MR_Word Var_3232 = Var_3108;
                MR_Word Var_3233 = Var_3109;
                MR_Word Var_3234 = Var_3110;
                MR_Word Var_3235 = Var_3111;
                MR_Word Var_3236 = Var_3112;
                MR_Word Var_3237 = Var_3113;
                MR_Word Var_3238 = Var_3114;
                MR_Word Var_3239 = Var_3115;
                MR_Word Var_3240 = Var_3116;
                MR_Word Var_3241 = Var_3117;
                MR_Word Var_3242 = Var_3118;
                MR_Word Var_3243 = Var_3119;
                MR_Word Var_3244 = Var_3120;
                MR_Word Var_3245 = Var_3121;
                MR_Word Var_3246 = Var_3122;
                MR_Word Var_3247 = Var_3123;
                MR_Word Var_3248 = Var_3124;
                MR_Word Var_3249 = Var_3125;
                MR_Word Var_3250 = Var_3126;
                MR_Word Var_3251 = Var_3127;
                MR_Word Var_3252 = Var_3128;
                MR_Word Var_3253 = Var_3129;
                MR_Word Var_3254 = Var_3130;
                MR_Word Var_3255 = Var_3131;
                MR_Word Var_3256 = Var_3132;
                MR_Word Var_3257 = Var_3133;
                MR_Word Var_3258 = Var_3134;
                MR_Word Var_3259 = Var_3135;
                MR_Word Var_3260 = Var_3136;
                MR_Word Var_3261 = Var_3137;
                MR_Word Var_3262 = Var_3138;
                MR_Word Var_3263 = Var_3139;
                MR_Word Var_3264 = Var_3140;
                MR_Word Var_3265 = Var_3141;
                MR_Word Var_3266 = Var_3142;
                MR_Word Var_3267 = Var_3143;
                MR_Word Var_3268 = Var_3144;
                MR_Word Var_3269 = Var_3145;
                MR_Integer Var_3270 = Var_3146;
                MR_Integer Var_3271 = Var_3147;
                MR_Integer Var_3272 = Var_3148;
                MR_Integer Var_3273 = Var_3149;
                MR_Integer Var_3274 = Var_3150;
                MR_Integer Var_3275 = Var_3151;
                MR_Integer Var_3276 = Var_3152;
                MR_Integer Var_3277 = Var_3153;
                MR_Integer Var_3278 = Var_3154;
                MR_Integer Var_3279 = Var_3155;
                MR_Integer Var_3280 = Var_3156;
                MR_Integer Var_3281 = Var_3157;
                MR_Integer Var_3282 = Var_3158;
                MR_Integer Var_3283 = Var_3159;
                MR_Integer Var_3284 = Var_3160;
                MR_Integer Var_3285 = Var_3161;
                MR_Integer Var_3286 = Var_3162;
                MR_Integer Var_3287 = Var_3163;
                MR_Integer Var_3288 = Var_3164;
                MR_Integer Var_3289 = Var_3165;
                MR_Integer Var_3290 = Var_3166;
                MR_Integer Var_3291 = Var_3167;
                MR_Integer Var_3292 = Var_3168;
                MR_Integer Var_3293 = Var_3169;
                MR_Integer Var_3294 = Var_3170;
                MR_Integer Var_3295 = Var_3171;
                MR_Integer Var_3296 = Var_3172;
                MR_Integer Var_3297 = Var_3173;
                MR_Integer Var_3298 = Var_3174;
                MR_Integer Var_3299 = Var_3175;
                MR_Integer Var_3300 = Var_3176;
                MR_Integer Var_3301 = Var_3177;
                MR_Integer Var_3302 = Var_3178;
                MR_Integer Var_3303 = Var_3179;
                MR_Integer Var_3304 = Var_3180;
                MR_Integer Var_3305 = Var_3181;
                MR_Integer Var_3306 = Var_3182;
                MR_String Var_3307 = Var_3183;
                MR_Word Var_3309 = Var_3185;
                MR_Word Var_3310 = Var_3186;
                MR_Word Var_3311 = Var_3187;
                MR_Word Var_3312 = Var_3188;
                MR_Word Var_3313 = Var_3189;
                MR_Word Var_3314 = Var_3190;
                MR_Word Var_3318 = Var_3194;
                MR_Word Var_3319 = Var_3195;
                MR_Word Var_3321 = Var_3197;
                MR_Word Var_3323 = Var_3199;
                MR_Word Var_3325 = Var_3201;
                MR_Word Var_3326 = Var_3202;
                MR_Word Var_3327 = Var_3203;
                MR_Word Var_3328 = Var_3204;
                MR_Word Var_3329 = Var_3205;
                MR_Word Var_3330 = Var_3206;
                MR_Word Var_3331 = Var_3207;
                MR_Word Var_3333 = Var_3209;
                MR_Word Var_3335 = Var_3211;
                MR_Word Var_3338 = Var_3214;
                MR_Word Var_3339 = Var_3215;
                MR_Word Var_3340 = Var_3216;
                MR_Word Var_3342 = Var_3218;
                MR_Word Var_3346 = Var_3222;
                MR_Word Var_3347 = Var_3223;
                MR_Word Var_3348 = Var_3224;
                MR_Word Var_3349 = Var_3225;
                MR_Word Var_3350 = Var_3226;
                MR_Word Var_3351 = Var_3227;
                MR_Word Var_3352 = Var_3228;
                MR_Word Var_3353 = Var_3229;
                MR_Word Var_3354 = Var_3230;
                MR_Word Var_3355 = Var_3231;
                MR_Word Var_3356 = Var_3232;
                MR_Word Var_3357 = Var_3233;
                MR_Word Var_3358 = Var_3234;
                MR_Word Var_3359 = Var_3235;
                MR_Word Var_3360 = Var_3236;
                MR_Word Var_3361 = Var_3237;
                MR_Word Var_3362 = Var_3238;
                MR_Word Var_3363 = Var_3239;
                MR_Word Var_3364 = Var_3240;
                MR_Word Var_3365 = Var_3241;
                MR_Word Var_3366 = Var_3242;
                MR_Word Var_3367 = Var_3243;
                MR_Word Var_3368 = Var_3244;
                MR_Word Var_3369 = Var_3245;
                MR_Word Var_3370 = Var_3246;
                MR_Word Var_3371 = Var_3247;
                MR_Word Var_3372 = Var_3248;
                MR_Word Var_3373 = Var_3249;
                MR_Word Var_3374 = Var_3250;
                MR_Word Var_3375 = Var_3251;
                MR_Word Var_3376 = Var_3252;
                MR_Word Var_3377 = Var_3253;
                MR_Word Var_3378 = Var_3254;
                MR_Word Var_3379 = Var_3255;
                MR_Word Var_3380 = Var_3256;
                MR_Word Var_3381 = Var_3257;
                MR_Word Var_3382 = Var_3258;
                MR_Word Var_3383 = Var_3259;
                MR_Word Var_3384 = Var_3260;
                MR_Word Var_3385 = Var_3261;
                MR_Word Var_3386 = Var_3262;
                MR_Word Var_3387 = Var_3263;
                MR_Word Var_3388 = Var_3264;
                MR_Word Var_3389 = Var_3265;
                MR_Word Var_3390 = Var_3266;
                MR_Word Var_3391 = Var_3267;
                MR_Word Var_3392 = Var_3268;
                MR_Word Var_3393 = Var_3269;
                MR_Integer Var_3394 = Var_3270;
                MR_Integer Var_3395 = Var_3271;
                MR_Integer Var_3396 = Var_3272;
                MR_Integer Var_3397 = Var_3273;
                MR_Integer Var_3398 = Var_3274;
                MR_Integer Var_3399 = Var_3275;
                MR_Integer Var_3400 = Var_3276;
                MR_Integer Var_3401 = Var_3277;
                MR_Integer Var_3402 = Var_3278;
                MR_Integer Var_3403 = Var_3279;
                MR_Integer Var_3404 = Var_3280;
                MR_Integer Var_3405 = Var_3281;
                MR_Integer Var_3406 = Var_3282;
                MR_Integer Var_3407 = Var_3283;
                MR_Integer Var_3408 = Var_3284;
                MR_Integer Var_3409 = Var_3285;
                MR_Integer Var_3410 = Var_3286;
                MR_Integer Var_3411 = Var_3287;
                MR_Integer Var_3412 = Var_3288;
                MR_Integer Var_3413 = Var_3289;
                MR_Integer Var_3414 = Var_3290;
                MR_Integer Var_3415 = Var_3291;
                MR_Integer Var_3416 = Var_3292;
                MR_Integer Var_3417 = Var_3293;
                MR_Integer Var_3418 = Var_3294;
                MR_Integer Var_3419 = Var_3295;
                MR_Integer Var_3420 = Var_3296;
                MR_Integer Var_3421 = Var_3297;
                MR_Integer Var_3422 = Var_3298;
                MR_Integer Var_3423 = Var_3299;
                MR_Integer Var_3424 = Var_3300;
                MR_Integer Var_3425 = Var_3301;
                MR_Integer Var_3426 = Var_3302;
                MR_Integer Var_3427 = Var_3303;
                MR_Integer Var_3428 = Var_3304;
                MR_Integer Var_3429 = Var_3305;
                MR_Integer Var_3430 = Var_3306;
                MR_String Var_3431 = Var_3307;
                MR_Word Var_3433 = Var_3309;
                MR_Word Var_3434 = Var_3310;
                MR_Word Var_3435 = Var_3311;
                MR_Word Var_3436 = Var_3312;
                MR_Word Var_3437 = Var_3313;
                MR_Word Var_3438 = Var_3314;
                MR_Word Var_3442 = Var_3318;
                MR_Word Var_3443 = Var_3319;
                MR_Word Var_3445 = Var_3321;
                MR_Word Var_3447 = Var_3323;
                MR_Word Var_3449 = Var_3325;
                MR_Word Var_3450 = Var_3326;
                MR_Word Var_3451 = Var_3327;
                MR_Word Var_3452 = Var_3328;
                MR_Word Var_3453 = Var_3329;
                MR_Word Var_3454 = Var_3330;
                MR_Word Var_3455 = Var_3331;
                MR_Word Var_3457 = Var_3333;
                MR_Word Var_3459 = Var_3335;
                MR_Word Var_3462 = Var_3338;
                MR_Word Var_3463 = Var_3339;
                MR_Word Var_3464 = Var_3340;
                MR_Word Var_3466 = Var_3342;
                MR_Word Var_3470 = Var_3346;
                MR_Word Var_3471 = Var_3347;
                MR_Word Var_3472 = Var_3348;
                MR_Word Var_3473 = Var_3349;
                MR_Word Var_3474 = Var_3350;
                MR_Word Var_3475 = Var_3351;
                MR_Word Var_3476 = Var_3352;
                MR_Word Var_3477 = Var_3353;
                MR_Word Var_3478 = Var_3354;
                MR_Word Var_3479 = Var_3355;
                MR_Word Var_3480 = Var_3356;
                MR_Word Var_3481 = Var_3357;
                MR_Word Var_3482 = Var_3358;
                MR_Word Var_3483 = Var_3359;
                MR_Word Var_3484 = Var_3360;
                MR_Word Var_3485 = Var_3361;
                MR_Word Var_3486 = Var_3362;
                MR_Word Var_3487 = Var_3363;
                MR_Word Var_3488 = Var_3364;
                MR_Word Var_3489 = Var_3365;
                MR_Word Var_3490 = Var_3366;
                MR_Word Var_3491 = Var_3367;
                MR_Word Var_3492 = Var_3368;
                MR_Word Var_3493 = Var_3369;
                MR_Word Var_3494 = Var_3370;
                MR_Word Var_3495 = Var_3371;
                MR_Word Var_3496 = Var_3372;
                MR_Word Var_3497 = Var_3373;
                MR_Word Var_3498 = Var_3374;
                MR_Word Var_3499 = Var_3375;
                MR_Word Var_3500 = Var_3376;
                MR_Word Var_3501 = Var_3377;
                MR_Word Var_3502 = Var_3378;
                MR_Word Var_3503 = Var_3379;
                MR_Word Var_3504 = Var_3380;
                MR_Word Var_3505 = Var_3381;
                MR_Word Var_3506 = Var_3382;
                MR_Word Var_3507 = Var_3383;
                MR_Word Var_3508 = Var_3384;
                MR_Word Var_3509 = Var_3385;
                MR_Word Var_3510 = Var_3386;
                MR_Word Var_3511 = Var_3387;
                MR_Word Var_3512 = Var_3388;
                MR_Word Var_3513 = Var_3389;
                MR_Word Var_3514 = Var_3390;
                MR_Word Var_3515 = Var_3391;
                MR_Word Var_3516 = Var_3392;
                MR_Word Var_3517 = Var_3393;
                MR_Integer Var_3518 = Var_3394;
                MR_Integer Var_3519 = Var_3395;
                MR_Integer Var_3520 = Var_3396;
                MR_Integer Var_3521 = Var_3397;
                MR_Integer Var_3522 = Var_3398;
                MR_Integer Var_3523 = Var_3399;
                MR_Integer Var_3524 = Var_3400;
                MR_Integer Var_3525 = Var_3401;
                MR_Integer Var_3526 = Var_3402;
                MR_Integer Var_3527 = Var_3403;
                MR_Integer Var_3528 = Var_3404;
                MR_Integer Var_3529 = Var_3405;
                MR_Integer Var_3530 = Var_3406;
                MR_Integer Var_3531 = Var_3407;
                MR_Integer Var_3532 = Var_3408;
                MR_Integer Var_3533 = Var_3409;
                MR_Integer Var_3534 = Var_3410;
                MR_Integer Var_3535 = Var_3411;
                MR_Integer Var_3536 = Var_3412;
                MR_Integer Var_3537 = Var_3413;
                MR_Integer Var_3538 = Var_3414;
                MR_Integer Var_3539 = Var_3415;
                MR_Integer Var_3540 = Var_3416;
                MR_Integer Var_3541 = Var_3417;
                MR_Integer Var_3542 = Var_3418;
                MR_Integer Var_3543 = Var_3419;
                MR_Integer Var_3544 = Var_3420;
                MR_Integer Var_3545 = Var_3421;
                MR_Integer Var_3546 = Var_3422;
                MR_Integer Var_3547 = Var_3423;
                MR_Integer Var_3548 = Var_3424;
                MR_Integer Var_3549 = Var_3425;
                MR_Integer Var_3550 = Var_3426;
                MR_Integer Var_3551 = Var_3427;
                MR_Integer Var_3552 = Var_3428;
                MR_Integer Var_3553 = Var_3429;
                MR_Integer Var_3554 = Var_3430;
                MR_String Var_3555 = Var_3431;
                MR_Word Var_3557 = Var_3433;
                MR_Word Var_3558 = Var_3434;
                MR_Word Var_3559 = Var_3435;
                MR_Word Var_3560 = Var_3436;
                MR_Word Var_3561 = Var_3437;
                MR_Word Var_3562 = Var_3438;
                MR_Word Var_3566 = Var_3442;
                MR_Word Var_3567 = Var_3443;
                MR_Word Var_3569 = Var_3445;
                MR_Word Var_3571 = Var_3447;
                MR_Word Var_3573 = Var_3449;
                MR_Word Var_3574 = Var_3450;
                MR_Word Var_3575 = Var_3451;
                MR_Word Var_3576 = Var_3452;
                MR_Word Var_3577 = Var_3453;
                MR_Word Var_3578 = Var_3454;
                MR_Word Var_3579 = Var_3455;
                MR_Word Var_3581 = Var_3457;
                MR_Word Var_3583 = Var_3459;
                MR_Word Var_3586 = Var_3462;
                MR_Word Var_3587 = Var_3463;
                MR_Word Var_3588 = Var_3464;
                MR_Word Var_3590 = Var_3466;
                MR_Word Var_3594 = Var_3470;
                MR_Word Var_3595 = Var_3471;
                MR_Word Var_3596 = Var_3472;
                MR_Word Var_3597 = Var_3473;
                MR_Word Var_3598 = Var_3474;
                MR_Word Var_3599 = Var_3475;
                MR_Word Var_3600 = Var_3476;
                MR_Word Var_3601 = Var_3477;
                MR_Word Var_3602 = Var_3478;
                MR_Word Var_3603 = Var_3479;
                MR_Word Var_3604 = Var_3480;
                MR_Word Var_3605 = Var_3481;
                MR_Word Var_3606 = Var_3482;
                MR_Word Var_3607 = Var_3483;
                MR_Word Var_3608 = Var_3484;
                MR_Word Var_3609 = Var_3485;
                MR_Word Var_3610 = Var_3486;
                MR_Word Var_3611 = Var_3487;
                MR_Word Var_3612 = Var_3488;
                MR_Word Var_3613 = Var_3489;
                MR_Word Var_3614 = Var_3490;
                MR_Word Var_3615 = Var_3491;
                MR_Word Var_3616 = Var_3492;
                MR_Word Var_3617 = Var_3493;
                MR_Word Var_3618 = Var_3494;
                MR_Word Var_3619 = Var_3495;
                MR_Word Var_3620 = Var_3496;
                MR_Word Var_3621 = Var_3497;
                MR_Word Var_3622 = Var_3498;
                MR_Word Var_3623 = Var_3499;
                MR_Word Var_3624 = Var_3500;
                MR_Word Var_3625 = Var_3501;
                MR_Word Var_3626 = Var_3502;
                MR_Word Var_3627 = Var_3503;
                MR_Word Var_3628 = Var_3504;
                MR_Word Var_3629 = Var_3505;
                MR_Word Var_3630 = Var_3506;
                MR_Word Var_3631 = Var_3507;
                MR_Word Var_3632 = Var_3508;
                MR_Word Var_3633 = Var_3509;
                MR_Word Var_3634 = Var_3510;
                MR_Word Var_3635 = Var_3511;
                MR_Word Var_3636 = Var_3512;
                MR_Word Var_3637 = Var_3513;
                MR_Word Var_3638 = Var_3514;
                MR_Word Var_3639 = Var_3515;
                MR_Word Var_3640 = Var_3516;
                MR_Word Var_3641 = Var_3517;
                MR_Integer Var_3642 = Var_3518;
                MR_Integer Var_3643 = Var_3519;
                MR_Integer Var_3644 = Var_3520;
                MR_Integer Var_3645 = Var_3521;
                MR_Integer Var_3646 = Var_3522;
                MR_Integer Var_3647 = Var_3523;
                MR_Integer Var_3648 = Var_3524;
                MR_Integer Var_3649 = Var_3525;
                MR_Integer Var_3650 = Var_3526;
                MR_Integer Var_3651 = Var_3527;
                MR_Integer Var_3652 = Var_3528;
                MR_Integer Var_3653 = Var_3529;
                MR_Integer Var_3654 = Var_3530;
                MR_Integer Var_3655 = Var_3531;
                MR_Integer Var_3656 = Var_3532;
                MR_Integer Var_3657 = Var_3533;
                MR_Integer Var_3658 = Var_3534;
                MR_Integer Var_3659 = Var_3535;
                MR_Integer Var_3660 = Var_3536;
                MR_Integer Var_3661 = Var_3537;
                MR_Integer Var_3662 = Var_3538;
                MR_Integer Var_3663 = Var_3539;
                MR_Integer Var_3664 = Var_3540;
                MR_Integer Var_3665 = Var_3541;
                MR_Integer Var_3666 = Var_3542;
                MR_Integer Var_3667 = Var_3543;
                MR_Integer Var_3668 = Var_3544;
                MR_Integer Var_3669 = Var_3545;
                MR_Integer Var_3670 = Var_3546;
                MR_Integer Var_3671 = Var_3547;
                MR_Integer Var_3672 = Var_3548;
                MR_Integer Var_3673 = Var_3549;
                MR_Integer Var_3674 = Var_3550;
                MR_Integer Var_3675 = Var_3551;
                MR_Integer Var_3676 = Var_3552;
                MR_Integer Var_3677 = Var_3553;
                MR_Integer Var_3678 = Var_3554;
                MR_String Var_3679 = Var_3555;
                MR_Word Var_3681 = Var_3557;
                MR_Word Var_3682 = Var_3558;
                MR_Word Var_3683 = Var_3559;
                MR_Word Var_3684 = Var_3560;
                MR_Word Var_3685 = Var_3561;
                MR_Word Var_3686 = Var_3562;
                MR_Word Var_3690 = Var_3566;
                MR_Word Var_3691 = Var_3567;
                MR_Word Var_3693 = Var_3569;
                MR_Word Var_3695 = Var_3571;
                MR_Word Var_3697 = Var_3573;
                MR_Word Var_3698 = Var_3574;
                MR_Word Var_3699 = Var_3575;
                MR_Word Var_3700 = Var_3576;
                MR_Word Var_3701 = Var_3577;
                MR_Word Var_3702 = Var_3578;
                MR_Word Var_3703 = Var_3579;
                MR_Word Var_3705 = Var_3581;
                MR_Word Var_3707 = Var_3583;
                MR_Word Var_3710 = Var_3586;
                MR_Word Var_3711 = Var_3587;
                MR_Word Var_3712 = Var_3588;
                MR_Word Var_3714 = Var_3590;
                MR_Word Var_3718 = Var_3594;
                MR_Word Var_3719 = Var_3595;
                MR_Word Var_3720 = Var_3596;
                MR_Word Var_3721 = Var_3597;
                MR_Word Var_3722 = Var_3598;
                MR_Word Var_3723 = Var_3599;
                MR_Word Var_3724 = Var_3600;
                MR_Word Var_3725 = Var_3601;
                MR_Word Var_3726 = Var_3602;
                MR_Word Var_3727 = Var_3603;
                MR_Word Var_3728 = Var_3604;
                MR_Word Var_3729 = Var_3605;
                MR_Word Var_3730 = Var_3606;
                MR_Word Var_3731 = Var_3607;
                MR_Word Var_3732 = Var_3608;
                MR_Word Var_3733 = Var_3609;
                MR_Word Var_3734 = Var_3610;
                MR_Word Var_3735 = Var_3611;
                MR_Word Var_3736 = Var_3612;
                MR_Word Var_3737 = Var_3613;
                MR_Word Var_3738 = Var_3614;
                MR_Word Var_3739 = Var_3615;
                MR_Word Var_3740 = Var_3616;
                MR_Word Var_3741 = Var_3617;
                MR_Word Var_3742 = Var_3618;
                MR_Word Var_3743 = Var_3619;
                MR_Word Var_3744 = Var_3620;
                MR_Word Var_3745 = Var_3621;
                MR_Word Var_3746 = Var_3622;
                MR_Word Var_3747 = Var_3623;
                MR_Word Var_3748 = Var_3624;
                MR_Word Var_3749 = Var_3625;
                MR_Word Var_3750 = Var_3626;
                MR_Word Var_3751 = Var_3627;
                MR_Word Var_3752 = Var_3628;
                MR_Word Var_3753 = Var_3629;
                MR_Word Var_3754 = Var_3630;
                MR_Word Var_3755 = Var_3631;
                MR_Word Var_3756 = Var_3632;
                MR_Word Var_3757 = Var_3633;
                MR_Word Var_3758 = Var_3634;
                MR_Word Var_3759 = Var_3635;
                MR_Word Var_3760 = Var_3636;
                MR_Word Var_3761 = Var_3637;
                MR_Word Var_3762 = Var_3638;
                MR_Word Var_3763 = Var_3639;
                MR_Word Var_3764 = Var_3640;
                MR_Word Var_3765 = Var_3641;
                MR_Integer Var_3766 = Var_3642;
                MR_Integer Var_3767 = Var_3643;
                MR_Integer Var_3768 = Var_3644;
                MR_Integer Var_3769 = Var_3645;
                MR_Integer Var_3770 = Var_3646;
                MR_Integer Var_3771 = Var_3647;
                MR_Integer Var_3772 = Var_3648;
                MR_Integer Var_3773 = Var_3649;
                MR_Integer Var_3774 = Var_3650;
                MR_Integer Var_3775 = Var_3651;
                MR_Integer Var_3776 = Var_3652;
                MR_Integer Var_3777 = Var_3653;
                MR_Integer Var_3778 = Var_3654;
                MR_Integer Var_3779 = Var_3655;
                MR_Integer Var_3780 = Var_3656;
                MR_Integer Var_3781 = Var_3657;
                MR_Integer Var_3782 = Var_3658;
                MR_Integer Var_3783 = Var_3659;
                MR_Integer Var_3784 = Var_3660;
                MR_Integer Var_3785 = Var_3661;
                MR_Integer Var_3786 = Var_3662;
                MR_Integer Var_3787 = Var_3663;
                MR_Integer Var_3788 = Var_3664;
                MR_Integer Var_3789 = Var_3665;
                MR_Integer Var_3790 = Var_3666;
                MR_Integer Var_3791 = Var_3667;
                MR_Integer Var_3792 = Var_3668;
                MR_Integer Var_3793 = Var_3669;
                MR_Integer Var_3794 = Var_3670;
                MR_Integer Var_3795 = Var_3671;
                MR_Integer Var_3796 = Var_3672;
                MR_Integer Var_3797 = Var_3673;
                MR_Integer Var_3798 = Var_3674;
                MR_Integer Var_3799 = Var_3675;
                MR_Integer Var_3800 = Var_3676;
                MR_Integer Var_3801 = Var_3677;
                MR_Integer Var_3802 = Var_3678;
                MR_String Var_3803 = Var_3679;
                MR_Word Var_3805 = Var_3681;
                MR_Word Var_3806 = Var_3682;
                MR_Word Var_3807 = Var_3683;
                MR_Word Var_3808 = Var_3684;
                MR_Word Var_3809 = Var_3685;
                MR_Word Var_3810 = Var_3686;
                MR_Word Var_3814 = Var_3690;
                MR_Word Var_3815 = Var_3691;
                MR_Word Var_3817 = Var_3693;
                MR_Word Var_3819 = Var_3695;
                MR_Word Var_3821 = Var_3697;
                MR_Word Var_3822 = Var_3698;
                MR_Word Var_3823 = Var_3699;
                MR_Word Var_3824 = Var_3700;
                MR_Word Var_3825 = Var_3701;
                MR_Word Var_3826 = Var_3702;
                MR_Word Var_3827 = Var_3703;
                MR_Word Var_3829 = Var_3705;
                MR_Word Var_3831 = Var_3707;
                MR_Word Var_3834 = Var_3710;
                MR_Word Var_3835 = Var_3711;
                MR_Word Var_3836 = Var_3712;
                MR_Word Var_3838 = Var_3714;
                MR_Word Var_3842 = Var_3718;
                MR_Word Var_3843 = Var_3719;
                MR_Word Var_3844 = Var_3720;
                MR_Word Var_3845 = Var_3721;
                MR_Word Var_3846 = Var_3722;
                MR_Word Var_3847 = Var_3723;
                MR_Word Var_3848 = Var_3724;
                MR_Word Var_3849 = Var_3725;
                MR_Word Var_3850 = Var_3726;
                MR_Word Var_3851 = Var_3727;
                MR_Word Var_3852 = Var_3728;
                MR_Word Var_3853 = Var_3729;
                MR_Word Var_3854 = Var_3730;
                MR_Word Var_3855 = Var_3731;
                MR_Word Var_3856 = Var_3732;
                MR_Word Var_3857 = Var_3733;
                MR_Word Var_3858 = Var_3734;
                MR_Word Var_3859 = Var_3735;
                MR_Word Var_3860 = Var_3736;
                MR_Word Var_3861 = Var_3737;
                MR_Word Var_3862 = Var_3738;
                MR_Word Var_3863 = Var_3739;
                MR_Word Var_3864 = Var_3740;
                MR_Word Var_3865 = Var_3741;
                MR_Word Var_3866 = Var_3742;
                MR_Word Var_3867 = Var_3743;
                MR_Word Var_3868 = Var_3744;
                MR_Word Var_3869 = Var_3745;
                MR_Word Var_3870 = Var_3746;
                MR_Word Var_3871 = Var_3747;
                MR_Word Var_3872 = Var_3748;
                MR_Word Var_3873 = Var_3749;
                MR_Word Var_3874 = Var_3750;
                MR_Word Var_3875 = Var_3751;
                MR_Word Var_3876 = Var_3752;
                MR_Word Var_3877 = Var_3753;
                MR_Word Var_3878 = Var_3754;
                MR_Word Var_3879 = Var_3755;
                MR_Word Var_3880 = Var_3756;
                MR_Word Var_3881 = Var_3757;
                MR_Word Var_3882 = Var_3758;
                MR_Word Var_3883 = Var_3759;
                MR_Word Var_3884 = Var_3760;
                MR_Word Var_3885 = Var_3761;
                MR_Word Var_3886 = Var_3762;
                MR_Word Var_3887 = Var_3763;
                MR_Word Var_3888 = Var_3764;
                MR_Word Var_3889 = Var_3765;
                MR_Integer Var_3890 = Var_3766;
                MR_Integer Var_3891 = Var_3767;
                MR_Integer Var_3892 = Var_3768;
                MR_Integer Var_3893 = Var_3769;
                MR_Integer Var_3894 = Var_3770;
                MR_Integer Var_3895 = Var_3771;
                MR_Integer Var_3896 = Var_3772;
                MR_Integer Var_3897 = Var_3773;
                MR_Integer Var_3898 = Var_3774;
                MR_Integer Var_3899 = Var_3775;
                MR_Integer Var_3900 = Var_3776;
                MR_Integer Var_3901 = Var_3777;
                MR_Integer Var_3902 = Var_3778;
                MR_Integer Var_3903 = Var_3779;
                MR_Integer Var_3904 = Var_3780;
                MR_Integer Var_3905 = Var_3781;
                MR_Integer Var_3906 = Var_3782;
                MR_Integer Var_3907 = Var_3783;
                MR_Integer Var_3908 = Var_3784;
                MR_Integer Var_3909 = Var_3785;
                MR_Integer Var_3910 = Var_3786;
                MR_Integer Var_3911 = Var_3787;
                MR_Integer Var_3912 = Var_3788;
                MR_Integer Var_3913 = Var_3789;
                MR_Integer Var_3914 = Var_3790;
                MR_Integer Var_3915 = Var_3791;
                MR_Integer Var_3916 = Var_3792;
                MR_Integer Var_3917 = Var_3793;
                MR_Integer Var_3918 = Var_3794;
                MR_Integer Var_3919 = Var_3795;
                MR_Integer Var_3920 = Var_3796;
                MR_Integer Var_3921 = Var_3797;
                MR_Integer Var_3922 = Var_3798;
                MR_Integer Var_3923 = Var_3799;
                MR_Integer Var_3924 = Var_3800;
                MR_Integer Var_3925 = Var_3801;
                MR_Integer Var_3926 = Var_3802;
                MR_String Var_3927 = Var_3803;

                {
                  STATE_VARIABLE_OptTuple_1057_1057 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 31)) | (((((MR_Unsigned) (Var_3805) << 30)) | (((((MR_Unsigned) (Var_3806) << 29)) | (((((MR_Unsigned) (Var_3807) << 28)) | (((((MR_Unsigned) (Var_3808) << 27)) | (((((MR_Unsigned) (Var_3809) << 26)) | (((((MR_Unsigned) (Var_3810) << 25)) | (((((MR_Unsigned) ((MR_Integer) 1) << 24)) | (((((MR_Unsigned) ((MR_Integer) 1) << 23)) | (((((MR_Unsigned) ((MR_Integer) 1) << 22)) | (((((MR_Unsigned) (Var_3814) << 21)) | (((((MR_Unsigned) (Var_3815) << 20)) | (((((MR_Unsigned) ((MR_Integer) 1) << 19)) | (((((MR_Unsigned) (Var_3817) << 18)) | (((((MR_Unsigned) ((MR_Integer) 1) << 17)) | (((((MR_Unsigned) (Var_3819) << 16)) | (((((MR_Unsigned) ((MR_Integer) 1) << 15)) | (((((MR_Unsigned) (Var_3821) << 14)) | (((((MR_Unsigned) (Var_3822) << 13)) | (((((MR_Unsigned) (Var_3823) << 12)) | (((((MR_Unsigned) (Var_3824) << 11)) | (((((MR_Unsigned) (Var_3825) << 10)) | (((((MR_Unsigned) (Var_3826) << 9)) | (((((MR_Unsigned) (Var_3827) << 8)) | (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (Var_3829) << 6)) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((((MR_Unsigned) (Var_3831) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) (Var_3834) << 1)) | (MR_Unsigned) (Var_3835)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 1) = (MR_Box) (((((MR_Unsigned) (Var_3836) << 31)) | (((((MR_Unsigned) ((MR_Integer) 1) << 30)) | (((((MR_Unsigned) (Var_3838) << 29)) | (((((MR_Unsigned) ((MR_Integer) 1) << 28)) | (((((MR_Unsigned) ((MR_Integer) 1) << 27)) | (((((MR_Unsigned) ((MR_Integer) 1) << 26)) | (((((MR_Unsigned) (Var_3842) << 25)) | (((((MR_Unsigned) (Var_3843) << 24)) | (((((MR_Unsigned) (Var_3844) << 23)) | (((((MR_Unsigned) (Var_3845) << 22)) | (((((MR_Unsigned) (Var_3846) << 21)) | (((((MR_Unsigned) (Var_3847) << 20)) | (((((MR_Unsigned) (Var_3848) << 19)) | (((((MR_Unsigned) (Var_3849) << 18)) | (((((MR_Unsigned) (Var_3850) << 17)) | (((((MR_Unsigned) (Var_3851) << 16)) | (((((MR_Unsigned) (Var_3852) << 15)) | (((((MR_Unsigned) (Var_3853) << 14)) | (((((MR_Unsigned) (Var_3854) << 13)) | (((((MR_Unsigned) (Var_3855) << 12)) | (((((MR_Unsigned) (Var_3856) << 11)) | (((((MR_Unsigned) (Var_3857) << 10)) | (((((MR_Unsigned) (Var_3858) << 9)) | (((((MR_Unsigned) (Var_3859) << 8)) | (((((MR_Unsigned) (Var_3860) << 7)) | (((((MR_Unsigned) (Var_3861) << 6)) | (((((MR_Unsigned) (Var_3862) << 5)) | (((((MR_Unsigned) (Var_3863) << 4)) | (((((MR_Unsigned) (Var_3864) << 3)) | (((((MR_Unsigned) (Var_3865) << 2)) | (((((MR_Unsigned) (Var_3866) << 1)) | (MR_Unsigned) (Var_3867)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 2) = (MR_Box) (((((MR_Unsigned) (Var_3868) << 21)) | (((((MR_Unsigned) (Var_3869) << 20)) | (((((MR_Unsigned) (Var_3870) << 19)) | (((((MR_Unsigned) (Var_3871) << 18)) | (((((MR_Unsigned) (Var_3872) << 17)) | (((((MR_Unsigned) (Var_3873) << 16)) | (((((MR_Unsigned) (Var_3874) << 15)) | (((((MR_Unsigned) (Var_3875) << 14)) | (((((MR_Unsigned) (Var_3876) << 13)) | (((((MR_Unsigned) (Var_3877) << 12)) | (((((MR_Unsigned) (Var_3878) << 11)) | (((((MR_Unsigned) (Var_3879) << 10)) | (((((MR_Unsigned) (Var_3880) << 9)) | (((((MR_Unsigned) (Var_3881) << 8)) | (((((MR_Unsigned) (Var_3882) << 7)) | (((((MR_Unsigned) (Var_3883) << 6)) | (((((MR_Unsigned) (Var_3884) << 5)) | (((((MR_Unsigned) (Var_3885) << 4)) | (((((MR_Unsigned) (Var_3886) << 3)) | (((((MR_Unsigned) (Var_3887) << 2)) | (((((MR_Unsigned) (Var_3888) << 1)) | (MR_Unsigned) (Var_3889)))))))))))))))))))))))))))))))))))))))))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 3) = ((MR_Box) (Var_3890));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 4) = ((MR_Box) (Var_3891));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 5) = ((MR_Box) (Var_3892));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 6) = ((MR_Box) (Var_3893));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 7) = ((MR_Box) (Var_3894));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 8) = ((MR_Box) (Var_3895));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 9) = ((MR_Box) (Var_3896));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 10) = ((MR_Box) (Var_3897));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 11) = ((MR_Box) (Var_3898));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 12) = ((MR_Box) (Var_3899));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 13) = ((MR_Box) (Var_3900));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 14) = ((MR_Box) (Var_3901));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 15) = ((MR_Box) (Var_3902));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 16) = ((MR_Box) (Var_3903));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 17) = ((MR_Box) (Var_3904));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 18) = ((MR_Box) (Var_3905));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 19) = ((MR_Box) (Var_3906));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 20) = ((MR_Box) (Var_3907));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 21) = ((MR_Box) (Var_3908));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 22) = ((MR_Box) (Var_3909));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 23) = ((MR_Box) (Var_3910));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 24) = ((MR_Box) (Var_3911));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 25) = ((MR_Box) (Var_3912));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 26) = ((MR_Box) (Var_3913));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 27) = ((MR_Box) (Var_3914));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 28) = ((MR_Box) (Var_3915));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 29) = ((MR_Box) (Var_3916));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 30) = ((MR_Box) (Var_3917));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 31) = ((MR_Box) (Var_3918));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 32) = ((MR_Box) (Var_3919));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 33) = ((MR_Box) (Var_3920));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 34) = ((MR_Box) (Var_3921));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 35) = ((MR_Box) (Var_3922));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 36) = ((MR_Box) (Var_3923));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 37) = ((MR_Box) (Var_3924));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 38) = ((MR_Box) (Var_3925));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 39) = ((MR_Box) (Var_3926));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, 40) = ((MR_Box) (Var_3927));
                }
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_OptTuple_1057_1057 = STATE_VARIABLE_OptTuple_982_982;
              break;
          }
          Var_4052 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
          Var_4053 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
          Var_4054 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
          Var_4055 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
          Var_4056 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
          Var_4057 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
          Var_4058 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
          Var_4059 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
          Var_4060 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
          Var_4061 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
          Var_4062 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
          Var_4064 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
          Var_4065 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
          Var_4066 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
          Var_4067 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
          Var_4068 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
          Var_4069 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
          Var_4070 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
          Var_4071 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
          Var_4072 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
          Var_4073 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
          Var_4074 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
          Var_4076 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
          Var_4077 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
          Var_4078 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
          Var_4079 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
          Var_4080 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
          Var_4081 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          Var_4082 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          Var_4083 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_4084 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
          Var_4085 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 30)) & (MR_Integer) 1);
          Var_4086 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
          Var_4087 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
          Var_4088 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
          Var_4089 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
          Var_4090 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
          Var_4091 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
          Var_4092 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
          Var_4093 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
          Var_4094 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
          Var_4095 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
          Var_4096 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 19)) & (MR_Integer) 1);
          Var_4097 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 18)) & (MR_Integer) 1);
          Var_4098 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 17)) & (MR_Integer) 1);
          Var_4099 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 16)) & (MR_Integer) 1);
          Var_4100 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 15)) & (MR_Integer) 1);
          Var_4101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
          Var_4102 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
          Var_4103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
          Var_4104 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
          Var_4105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
          Var_4107 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
          Var_4109 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
          Var_4110 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
          Var_4111 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
          Var_4112 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
          Var_4113 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          Var_4114 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          Var_4115 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_4116 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
          Var_4117 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
          Var_4118 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
          Var_4119 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 18)) & (MR_Integer) 1);
          Var_4120 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
          Var_4121 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
          Var_4122 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
          Var_4123 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
          Var_4124 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
          Var_4125 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
          Var_4126 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
          Var_4127 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
          Var_4128 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
          Var_4129 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
          Var_4130 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
          Var_4131 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
          Var_4132 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
          Var_4133 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
          Var_4134 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_4135 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
          Var_4136 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          Var_4137 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_4138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 3))));
          Var_4139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 4))));
          Var_4140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 5))));
          Var_4141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 6))));
          Var_4142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 7))));
          Var_4143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 8))));
          Var_4144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 9))));
          Var_4145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 10))));
          Var_4146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 11))));
          Var_4147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 12))));
          Var_4148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 13))));
          Var_4149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 14))));
          Var_4150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 15))));
          Var_4151 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 16))));
          Var_4152 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 17))));
          Var_4153 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 18))));
          Var_4154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 19))));
          Var_4155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 20))));
          Var_4156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 21))));
          Var_4157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 22))));
          Var_4158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 23))));
          Var_4159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 24))));
          Var_4160 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 25))));
          Var_4161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 26))));
          Var_4162 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 27))));
          Var_4163 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 28))));
          Var_4164 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 29))));
          Var_4165 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 30))));
          Var_4166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 31))));
          Var_4167 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 32))));
          Var_4168 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 33))));
          Var_4169 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 34))));
          Var_4170 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 35))));
          Var_4171 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 36))));
          Var_4172 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 37))));
          Var_4173 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 38))));
          Var_4174 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 39))));
          Var_4175 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1057_1057, (MR_Integer) 40))));
          Var_4176 = Var_4052;
          Var_4177 = Var_4053;
          Var_4178 = Var_4054;
          Var_4179 = Var_4055;
          Var_4180 = Var_4056;
          Var_4181 = Var_4057;
          Var_4182 = Var_4058;
          Var_4183 = Var_4059;
          Var_4184 = Var_4060;
          Var_4185 = Var_4061;
          Var_4186 = Var_4062;
          Var_4188 = Var_4064;
          Var_4189 = Var_4065;
          Var_4190 = Var_4066;
          Var_4191 = Var_4067;
          Var_4192 = Var_4068;
          Var_4193 = Var_4069;
          Var_4194 = Var_4070;
          Var_4195 = Var_4071;
          Var_4196 = Var_4072;
          Var_4197 = Var_4073;
          Var_4198 = Var_4074;
          Var_4200 = Var_4076;
          Var_4201 = Var_4077;
          Var_4202 = Var_4078;
          Var_4203 = Var_4079;
          Var_4204 = Var_4080;
          Var_4205 = Var_4081;
          Var_4206 = Var_4082;
          Var_4207 = Var_4083;
          Var_4208 = Var_4084;
          Var_4209 = Var_4085;
          Var_4210 = Var_4086;
          Var_4211 = Var_4087;
          Var_4212 = Var_4088;
          Var_4213 = Var_4089;
          Var_4214 = Var_4090;
          Var_4215 = Var_4091;
          Var_4216 = Var_4092;
          Var_4217 = Var_4093;
          Var_4218 = Var_4094;
          Var_4219 = Var_4095;
          Var_4220 = Var_4096;
          Var_4221 = Var_4097;
          Var_4222 = Var_4098;
          Var_4223 = Var_4099;
          Var_4224 = Var_4100;
          Var_4225 = Var_4101;
          Var_4226 = Var_4102;
          Var_4227 = Var_4103;
          Var_4228 = Var_4104;
          Var_4229 = Var_4105;
          Var_4231 = Var_4107;
          Var_4233 = Var_4109;
          Var_4234 = Var_4110;
          Var_4235 = Var_4111;
          Var_4236 = Var_4112;
          Var_4237 = Var_4113;
          Var_4238 = Var_4114;
          Var_4239 = Var_4115;
          Var_4240 = Var_4116;
          Var_4241 = Var_4117;
          Var_4242 = Var_4118;
          Var_4243 = Var_4119;
          Var_4244 = Var_4120;
          Var_4245 = Var_4121;
          Var_4246 = Var_4122;
          Var_4247 = Var_4123;
          Var_4248 = Var_4124;
          Var_4249 = Var_4125;
          Var_4250 = Var_4126;
          Var_4251 = Var_4127;
          Var_4252 = Var_4128;
          Var_4253 = Var_4129;
          Var_4254 = Var_4130;
          Var_4255 = Var_4131;
          Var_4256 = Var_4132;
          Var_4257 = Var_4133;
          Var_4258 = Var_4134;
          Var_4259 = Var_4135;
          Var_4260 = Var_4136;
          Var_4261 = Var_4137;
          Var_4262 = Var_4138;
          Var_4263 = Var_4139;
          Var_4264 = Var_4140;
          Var_4265 = Var_4141;
          Var_4266 = Var_4142;
          Var_4267 = Var_4143;
          Var_4268 = Var_4144;
          Var_4269 = Var_4145;
          Var_4270 = Var_4146;
          Var_4271 = Var_4147;
          Var_4272 = Var_4148;
          Var_4273 = Var_4149;
          Var_4274 = Var_4150;
          Var_4275 = Var_4151;
          Var_4276 = Var_4152;
          Var_4277 = Var_4153;
          Var_4278 = Var_4154;
          Var_4279 = Var_4155;
          Var_4280 = Var_4156;
          Var_4281 = Var_4157;
          Var_4282 = Var_4158;
          Var_4283 = Var_4159;
          Var_4284 = Var_4160;
          Var_4285 = Var_4161;
          Var_4286 = Var_4162;
          Var_4287 = Var_4163;
          Var_4288 = Var_4164;
          Var_4289 = Var_4165;
          Var_4290 = Var_4166;
          Var_4291 = Var_4167;
          Var_4292 = Var_4168;
          Var_4293 = Var_4169;
          Var_4294 = Var_4170;
          Var_4295 = Var_4171;
          Var_4296 = Var_4172;
          Var_4297 = Var_4173;
          Var_4298 = Var_4174;
          Var_4299 = Var_4175;
          Var_4300 = Var_4176;
          Var_4301 = Var_4177;
          Var_4302 = Var_4178;
          Var_4303 = Var_4179;
          Var_4304 = Var_4180;
          Var_4305 = Var_4181;
          Var_4306 = Var_4182;
          Var_4307 = Var_4183;
          Var_4308 = Var_4184;
          Var_4309 = Var_4185;
          Var_4310 = Var_4186;
          Var_4312 = Var_4188;
          Var_4313 = Var_4189;
          Var_4314 = Var_4190;
          Var_4315 = Var_4191;
          Var_4316 = Var_4192;
          Var_4317 = Var_4193;
          Var_4318 = Var_4194;
          Var_4319 = Var_4195;
          Var_4320 = Var_4196;
          Var_4321 = Var_4197;
          Var_4322 = Var_4198;
          Var_4324 = Var_4200;
          Var_4325 = Var_4201;
          Var_4326 = Var_4202;
          Var_4327 = Var_4203;
          Var_4328 = Var_4204;
          Var_4329 = Var_4205;
          Var_4330 = Var_4206;
          Var_4331 = Var_4207;
          Var_4332 = Var_4208;
          Var_4333 = Var_4209;
          Var_4334 = Var_4210;
          Var_4335 = Var_4211;
          Var_4336 = Var_4212;
          Var_4337 = Var_4213;
          Var_4338 = Var_4214;
          Var_4339 = Var_4215;
          Var_4340 = Var_4216;
          Var_4341 = Var_4217;
          Var_4342 = Var_4218;
          Var_4343 = Var_4219;
          Var_4344 = Var_4220;
          Var_4345 = Var_4221;
          Var_4346 = Var_4222;
          Var_4347 = Var_4223;
          Var_4348 = Var_4224;
          Var_4349 = Var_4225;
          Var_4350 = Var_4226;
          Var_4351 = Var_4227;
          Var_4352 = Var_4228;
          Var_4353 = Var_4229;
          Var_4355 = Var_4231;
          Var_4357 = Var_4233;
          Var_4358 = Var_4234;
          Var_4359 = Var_4235;
          Var_4360 = Var_4236;
          Var_4361 = Var_4237;
          Var_4362 = Var_4238;
          Var_4363 = Var_4239;
          Var_4364 = Var_4240;
          Var_4365 = Var_4241;
          Var_4366 = Var_4242;
          Var_4367 = Var_4243;
          Var_4368 = Var_4244;
          Var_4369 = Var_4245;
          Var_4370 = Var_4246;
          Var_4371 = Var_4247;
          Var_4372 = Var_4248;
          Var_4373 = Var_4249;
          Var_4374 = Var_4250;
          Var_4375 = Var_4251;
          Var_4376 = Var_4252;
          Var_4377 = Var_4253;
          Var_4378 = Var_4254;
          Var_4379 = Var_4255;
          Var_4380 = Var_4256;
          Var_4381 = Var_4257;
          Var_4382 = Var_4258;
          Var_4383 = Var_4259;
          Var_4384 = Var_4260;
          Var_4385 = Var_4261;
          Var_4386 = Var_4262;
          Var_4387 = Var_4263;
          Var_4388 = Var_4264;
          Var_4389 = Var_4265;
          Var_4390 = Var_4266;
          Var_4391 = Var_4267;
          Var_4392 = Var_4268;
          Var_4393 = Var_4269;
          Var_4394 = Var_4270;
          Var_4395 = Var_4271;
          Var_4396 = Var_4272;
          Var_4397 = Var_4273;
          Var_4398 = Var_4274;
          Var_4399 = Var_4275;
          Var_4400 = Var_4276;
          Var_4401 = Var_4277;
          Var_4402 = Var_4278;
          Var_4403 = Var_4279;
          Var_4404 = Var_4280;
          Var_4405 = Var_4281;
          Var_4406 = Var_4282;
          Var_4407 = Var_4283;
          Var_4408 = Var_4284;
          Var_4409 = Var_4285;
          Var_4410 = Var_4286;
          Var_4411 = Var_4287;
          Var_4412 = Var_4288;
          Var_4413 = Var_4289;
          Var_4414 = Var_4290;
          Var_4415 = Var_4291;
          Var_4416 = Var_4292;
          Var_4417 = Var_4293;
          Var_4418 = Var_4294;
          Var_4419 = Var_4295;
          Var_4420 = Var_4296;
          Var_4421 = Var_4297;
          Var_4422 = Var_4298;
          Var_4423 = Var_4299;
          {
            STATE_VARIABLE_OptTuple_1065_1065 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 0) = (MR_Box) (((((MR_Unsigned) (Var_4300) << 31)) | (((((MR_Unsigned) (Var_4301) << 30)) | (((((MR_Unsigned) (Var_4302) << 29)) | (((((MR_Unsigned) (Var_4303) << 28)) | (((((MR_Unsigned) (Var_4304) << 27)) | (((((MR_Unsigned) (Var_4305) << 26)) | (((((MR_Unsigned) (Var_4306) << 25)) | (((((MR_Unsigned) (Var_4307) << 24)) | (((((MR_Unsigned) (Var_4308) << 23)) | (((((MR_Unsigned) (Var_4309) << 22)) | (((((MR_Unsigned) (Var_4310) << 21)) | (((((MR_Unsigned) ((MR_Integer) 0) << 20)) | (((((MR_Unsigned) (Var_4312) << 19)) | (((((MR_Unsigned) (Var_4313) << 18)) | (((((MR_Unsigned) (Var_4314) << 17)) | (((((MR_Unsigned) (Var_4315) << 16)) | (((((MR_Unsigned) (Var_4316) << 15)) | (((((MR_Unsigned) (Var_4317) << 14)) | (((((MR_Unsigned) (Var_4318) << 13)) | (((((MR_Unsigned) (Var_4319) << 12)) | (((((MR_Unsigned) (Var_4320) << 11)) | (((((MR_Unsigned) (Var_4321) << 10)) | (((((MR_Unsigned) (Var_4322) << 9)) | (((((MR_Unsigned) ((MR_Integer) 0) << 8)) | (((((MR_Unsigned) (Var_4324) << 7)) | (((((MR_Unsigned) (Var_4325) << 6)) | (((((MR_Unsigned) (Var_4326) << 5)) | (((((MR_Unsigned) (Var_4327) << 4)) | (((((MR_Unsigned) (Var_4328) << 3)) | (((((MR_Unsigned) (Var_4329) << 2)) | (((((MR_Unsigned) (Var_4330) << 1)) | (MR_Unsigned) (Var_4331)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 1) = (MR_Box) (((((MR_Unsigned) (Var_4332) << 31)) | (((((MR_Unsigned) (Var_4333) << 30)) | (((((MR_Unsigned) (Var_4334) << 29)) | (((((MR_Unsigned) (Var_4335) << 28)) | (((((MR_Unsigned) (Var_4336) << 27)) | (((((MR_Unsigned) (Var_4337) << 26)) | (((((MR_Unsigned) (Var_4338) << 25)) | (((((MR_Unsigned) (Var_4339) << 24)) | (((((MR_Unsigned) (Var_4340) << 23)) | (((((MR_Unsigned) (Var_4341) << 22)) | (((((MR_Unsigned) (Var_4342) << 21)) | (((((MR_Unsigned) (Var_4343) << 20)) | (((((MR_Unsigned) (Var_4344) << 19)) | (((((MR_Unsigned) (Var_4345) << 18)) | (((((MR_Unsigned) (Var_4346) << 17)) | (((((MR_Unsigned) (Var_4347) << 16)) | (((((MR_Unsigned) (Var_4348) << 15)) | (((((MR_Unsigned) (Var_4349) << 14)) | (((((MR_Unsigned) (Var_4350) << 13)) | (((((MR_Unsigned) (Var_4351) << 12)) | (((((MR_Unsigned) (Var_4352) << 11)) | (((((MR_Unsigned) (Var_4353) << 10)) | (((((MR_Unsigned) ((MR_Integer) 1) << 9)) | (((((MR_Unsigned) (Var_4355) << 8)) | (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (Var_4357) << 6)) | (((((MR_Unsigned) (Var_4358) << 5)) | (((((MR_Unsigned) (Var_4359) << 4)) | (((((MR_Unsigned) (Var_4360) << 3)) | (((((MR_Unsigned) (Var_4361) << 2)) | (((((MR_Unsigned) (Var_4362) << 1)) | (MR_Unsigned) (Var_4363)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 2) = (MR_Box) (((((MR_Unsigned) (Var_4364) << 21)) | (((((MR_Unsigned) (Var_4365) << 20)) | (((((MR_Unsigned) (Var_4366) << 19)) | (((((MR_Unsigned) (Var_4367) << 18)) | (((((MR_Unsigned) (Var_4368) << 17)) | (((((MR_Unsigned) (Var_4369) << 16)) | (((((MR_Unsigned) (Var_4370) << 15)) | (((((MR_Unsigned) (Var_4371) << 14)) | (((((MR_Unsigned) (Var_4372) << 13)) | (((((MR_Unsigned) (Var_4373) << 12)) | (((((MR_Unsigned) (Var_4374) << 11)) | (((((MR_Unsigned) (Var_4375) << 10)) | (((((MR_Unsigned) (Var_4376) << 9)) | (((((MR_Unsigned) (Var_4377) << 8)) | (((((MR_Unsigned) (Var_4378) << 7)) | (((((MR_Unsigned) (Var_4379) << 6)) | (((((MR_Unsigned) (Var_4380) << 5)) | (((((MR_Unsigned) (Var_4381) << 4)) | (((((MR_Unsigned) (Var_4382) << 3)) | (((((MR_Unsigned) (Var_4383) << 2)) | (((((MR_Unsigned) (Var_4384) << 1)) | (MR_Unsigned) (Var_4385)))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 3) = ((MR_Box) (Var_4386));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 4) = ((MR_Box) (Var_4387));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 5) = ((MR_Box) (Var_4388));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 6) = ((MR_Box) (Var_4389));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 7) = ((MR_Box) (Var_4390));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 8) = ((MR_Box) (Var_4391));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 9) = ((MR_Box) (Var_4392));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 10) = ((MR_Box) (Var_4393));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 11) = ((MR_Box) (Var_4394));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 12) = ((MR_Box) (Var_4395));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 13) = ((MR_Box) (Var_4396));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 14) = ((MR_Box) (Var_4397));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 15) = ((MR_Box) (Var_4398));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 16) = ((MR_Box) (Var_4399));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 17) = ((MR_Box) (Var_4400));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 18) = ((MR_Box) (Var_4401));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 19) = ((MR_Box) (Var_4402));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 20) = ((MR_Box) (Var_4403));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 21) = ((MR_Box) (Var_4404));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 22) = ((MR_Box) (Var_4405));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 23) = ((MR_Box) (Var_4406));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 24) = ((MR_Box) (Var_4407));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 25) = ((MR_Box) (Var_4408));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 26) = ((MR_Box) (Var_4409));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 27) = ((MR_Box) (Var_4410));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 28) = ((MR_Box) (Var_4411));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 29) = ((MR_Box) (Var_4412));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 30) = ((MR_Box) (Var_4413));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 31) = ((MR_Box) (Var_4414));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 32) = ((MR_Box) (Var_4415));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 33) = ((MR_Box) (Var_4416));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 34) = ((MR_Box) (Var_4417));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 35) = ((MR_Box) (Var_4418));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 36) = ((MR_Box) (Var_4419));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 37) = ((MR_Box) (Var_4420));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 38) = ((MR_Box) (Var_4421));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 39) = ((MR_Box) (Var_4422));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, 40) = ((MR_Box) (Var_4423));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 301, Var_370, STATE_VARIABLE_Globals_1022_1022, &STATE_VARIABLE_Globals_1069_1069);
          libs__globals__set_option_4_p_0((MR_Integer) 302, Var_370, STATE_VARIABLE_Globals_1069_1069, &STATE_VARIABLE_Globals_1073_1073);
          libs__globals__set_option_4_p_0((MR_Integer) 352, Var_511, STATE_VARIABLE_Globals_1073_1073, &STATE_VARIABLE_Globals_1077_1077);
          TraceTailRec_124 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_32);
          switch (TraceTailRec_124) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__globals__set_option_4_p_0((MR_Integer) 148, Var_511, STATE_VARIABLE_Globals_1077_1077, &STATE_VARIABLE_Globals_1081_1081);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1081_1081 = STATE_VARIABLE_Globals_1077_1077;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 148, Var_511, STATE_VARIABLE_Globals_1022_1022, &STATE_VARIABLE_Globals_1081_1081);
          STATE_VARIABLE_OptTuple_1065_1065 = STATE_VARIABLE_OptTuple_982_982;
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 300, Var_370, STATE_VARIABLE_Globals_1081_1081, &STATE_VARIABLE_Globals_1086_1086);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1086_1086, (MR_Integer) 226, &ProfileDeep_125);
    switch (ProfileDeep_125) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_OptTuple_1104_1104 = STATE_VARIABLE_OptTuple_1065_1065;
          STATE_VARIABLE_Specs_1098_1098 = STATE_VARIABLE_Specs_917_917;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LotsOfHOSpec_127;
          MR_Word STATE_VARIABLE_OptTuple_1099_1099;
          MR_Integer Var_4634;
          MR_Integer Var_4635;
          MR_Integer Var_4636;
          MR_Integer Var_4637;
          MR_Integer Var_4638;
          MR_Integer Var_4639;
          MR_Integer Var_4640;
          MR_Integer Var_4641;
          MR_Integer Var_4642;
          MR_Integer Var_4643;
          MR_Integer Var_4644;
          MR_Integer Var_4645;
          MR_Integer Var_4646;
          MR_Integer Var_4647;
          MR_Integer Var_4648;
          MR_Integer Var_4649;
          MR_Integer Var_4650;
          MR_Integer Var_4651;
          MR_Integer Var_4652;
          MR_Integer Var_4653;
          MR_Integer Var_4654;
          MR_Integer Var_4655;
          MR_Integer Var_4656;
          MR_Integer Var_4657;
          MR_Integer Var_4658;
          MR_Integer Var_4659;
          MR_Integer Var_4660;
          MR_Integer Var_4661;
          MR_Integer Var_4662;
          MR_Integer Var_4663;
          MR_Integer Var_4664;
          MR_Integer Var_4665;
          MR_Integer Var_4666;
          MR_Integer Var_4667;
          MR_Integer Var_4668;
          MR_Integer Var_4669;
          MR_Integer Var_4670;
          MR_String Var_4671;
          MR_Unsigned packed_word_22;
          MR_Unsigned packed_word_23;
          MR_Unsigned packed_word_24;

          succeeded = (HighLevelCode_108 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_28 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_Specs_1098_1098 = STATE_VARIABLE_Specs_917_917;
          else
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[188])), STATE_VARIABLE_Specs_917_917, &STATE_VARIABLE_Specs_1098_1098);
          packed_word_22 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 0)));
          packed_word_23 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 1)));
          packed_word_24 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 2)));
          Var_4634 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 3))));
          Var_4635 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 4))));
          Var_4636 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 5))));
          Var_4637 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 6))));
          Var_4638 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 7))));
          Var_4639 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 8))));
          Var_4640 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 9))));
          Var_4641 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 10))));
          Var_4642 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 11))));
          Var_4643 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 12))));
          Var_4644 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 13))));
          Var_4645 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 14))));
          Var_4646 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 15))));
          Var_4647 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 16))));
          Var_4648 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 17))));
          Var_4649 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 18))));
          Var_4650 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 19))));
          Var_4651 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 20))));
          Var_4652 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 21))));
          Var_4653 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 22))));
          Var_4654 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 23))));
          Var_4655 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 24))));
          Var_4656 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 25))));
          Var_4657 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 26))));
          Var_4658 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 27))));
          Var_4659 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 28))));
          Var_4660 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 29))));
          Var_4661 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 30))));
          Var_4662 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 31))));
          Var_4663 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 32))));
          Var_4664 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 33))));
          Var_4665 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 34))));
          Var_4666 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 35))));
          Var_4667 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 36))));
          Var_4668 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 37))));
          Var_4669 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 38))));
          Var_4670 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 39))));
          Var_4671 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1065_1065, (MR_Integer) 40))));
          {
            STATE_VARIABLE_OptTuple_1099_1099 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 0) = (MR_Box) (packed_word_22);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 1) = (MR_Box) ((((packed_word_23 & (~((MR_Unsigned) 1073741824U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 30))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 2) = (MR_Box) (packed_word_24);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 3) = ((MR_Box) (Var_4634));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 4) = ((MR_Box) (Var_4635));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 5) = ((MR_Box) (Var_4636));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 6) = ((MR_Box) (Var_4637));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 7) = ((MR_Box) (Var_4638));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 8) = ((MR_Box) (Var_4639));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 9) = ((MR_Box) (Var_4640));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 10) = ((MR_Box) (Var_4641));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 11) = ((MR_Box) (Var_4642));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 12) = ((MR_Box) (Var_4643));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 13) = ((MR_Box) (Var_4644));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 14) = ((MR_Box) (Var_4645));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 15) = ((MR_Box) (Var_4646));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 16) = ((MR_Box) (Var_4647));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 17) = ((MR_Box) (Var_4648));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 18) = ((MR_Box) (Var_4649));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 19) = ((MR_Box) (Var_4650));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 20) = ((MR_Box) (Var_4651));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 21) = ((MR_Box) (Var_4652));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 22) = ((MR_Box) (Var_4653));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 23) = ((MR_Box) (Var_4654));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 24) = ((MR_Box) (Var_4655));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 25) = ((MR_Box) (Var_4656));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 26) = ((MR_Box) (Var_4657));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 27) = ((MR_Box) (Var_4658));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 28) = ((MR_Box) (Var_4659));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 29) = ((MR_Box) (Var_4660));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 30) = ((MR_Box) (Var_4661));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 31) = ((MR_Box) (Var_4662));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 32) = ((MR_Box) (Var_4663));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 33) = ((MR_Box) (Var_4664));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 34) = ((MR_Box) (Var_4665));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 35) = ((MR_Box) (Var_4666));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 36) = ((MR_Box) (Var_4667));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 37) = ((MR_Box) (Var_4668));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 38) = ((MR_Box) (Var_4669));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 39) = ((MR_Box) (Var_4670));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, 40) = ((MR_Box) (Var_4671));
          }
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1086_1086, (MR_Integer) 241, &LotsOfHOSpec_127);
          switch (LotsOfHOSpec_127) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_OptTuple_1104_1104 = STATE_VARIABLE_OptTuple_1099_1099;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_4758 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 3))));
                MR_Integer Var_4759 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 4))));
                MR_Integer Var_4760 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 5))));
                MR_Integer Var_4761 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 6))));
                MR_Integer Var_4762 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 7))));
                MR_Integer Var_4763 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 8))));
                MR_Integer Var_4764 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 9))));
                MR_Integer Var_4765 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 10))));
                MR_Integer Var_4766 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 11))));
                MR_Integer Var_4767 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 12))));
                MR_Integer Var_4768 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 13))));
                MR_Integer Var_4769 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 14))));
                MR_Integer Var_4770 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 15))));
                MR_Integer Var_4771 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 16))));
                MR_Integer Var_4773 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 18))));
                MR_Integer Var_4774 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 19))));
                MR_Integer Var_4775 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 20))));
                MR_Integer Var_4776 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 21))));
                MR_Integer Var_4777 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 22))));
                MR_Integer Var_4778 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 23))));
                MR_Integer Var_4779 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 24))));
                MR_Integer Var_4780 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 25))));
                MR_Integer Var_4781 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 26))));
                MR_Integer Var_4782 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 27))));
                MR_Integer Var_4783 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 28))));
                MR_Integer Var_4784 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 29))));
                MR_Integer Var_4785 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 30))));
                MR_Integer Var_4786 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 31))));
                MR_Integer Var_4787 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 32))));
                MR_Integer Var_4788 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 33))));
                MR_Integer Var_4789 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 34))));
                MR_Integer Var_4790 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 35))));
                MR_Integer Var_4791 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 36))));
                MR_Integer Var_4792 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 37))));
                MR_Integer Var_4793 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 38))));
                MR_Integer Var_4794 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 39))));
                MR_String Var_4795 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 40))));
                MR_Unsigned packed_word_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 0)));
                MR_Unsigned packed_word_26 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 1)));
                MR_Unsigned packed_word_27 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1099_1099, (MR_Integer) 2)));

                {
                  STATE_VARIABLE_OptTuple_1104_1104 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 0) = (MR_Box) ((((packed_word_25 & (~((MR_Unsigned) 32U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 5))));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 1) = (MR_Box) (packed_word_26);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 2) = (MR_Box) (packed_word_27);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 3) = ((MR_Box) (Var_4758));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 4) = ((MR_Box) (Var_4759));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 5) = ((MR_Box) (Var_4760));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 6) = ((MR_Box) (Var_4761));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 7) = ((MR_Box) (Var_4762));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 8) = ((MR_Box) (Var_4763));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 9) = ((MR_Box) (Var_4764));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 10) = ((MR_Box) (Var_4765));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 11) = ((MR_Box) (Var_4766));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 12) = ((MR_Box) (Var_4767));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 13) = ((MR_Box) (Var_4768));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 14) = ((MR_Box) (Var_4769));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 15) = ((MR_Box) (Var_4770));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 16) = ((MR_Box) (Var_4771));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 17) = ((MR_Box) ((MR_Integer) 999999));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 18) = ((MR_Box) (Var_4773));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 19) = ((MR_Box) (Var_4774));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 20) = ((MR_Box) (Var_4775));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 21) = ((MR_Box) (Var_4776));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 22) = ((MR_Box) (Var_4777));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 23) = ((MR_Box) (Var_4778));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 24) = ((MR_Box) (Var_4779));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 25) = ((MR_Box) (Var_4780));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 26) = ((MR_Box) (Var_4781));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 27) = ((MR_Box) (Var_4782));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 28) = ((MR_Box) (Var_4783));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 29) = ((MR_Box) (Var_4784));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 30) = ((MR_Box) (Var_4785));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 31) = ((MR_Box) (Var_4786));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 32) = ((MR_Box) (Var_4787));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 33) = ((MR_Box) (Var_4788));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 34) = ((MR_Box) (Var_4789));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 35) = ((MR_Box) (Var_4790));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 36) = ((MR_Box) (Var_4791));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 37) = ((MR_Box) (Var_4792));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 38) = ((MR_Box) (Var_4793));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 39) = ((MR_Box) (Var_4794));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, 40) = ((MR_Box) (Var_4795));
                }
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1086_1086, (MR_Integer) 243, &RecordTermSizesAsWords_128);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1086_1086, (MR_Integer) 244, &RecordTermSizesAsCells_129);
    succeeded = (RecordTermSizesAsWords_128 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_129 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[190])), STATE_VARIABLE_Specs_1098_1098, &STATE_VARIABLE_Specs_1114_1114);
      STATE_VARIABLE_Globals_1119_1119 = STATE_VARIABLE_Globals_1086_1086;
      STATE_VARIABLE_OptTuple_1115_1115 = STATE_VARIABLE_OptTuple_1104_1104;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_128 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_129 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Integer Var_5006 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 3))));
        MR_Integer Var_5007 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 4))));
        MR_Integer Var_5008 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 5))));
        MR_Integer Var_5009 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 6))));
        MR_Integer Var_5010 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 7))));
        MR_Integer Var_5011 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 8))));
        MR_Integer Var_5012 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 9))));
        MR_Integer Var_5013 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 10))));
        MR_Integer Var_5014 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 11))));
        MR_Integer Var_5015 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 12))));
        MR_Integer Var_5016 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 13))));
        MR_Integer Var_5017 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 14))));
        MR_Integer Var_5018 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 15))));
        MR_Integer Var_5019 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 16))));
        MR_Integer Var_5020 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 17))));
        MR_Integer Var_5021 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 18))));
        MR_Integer Var_5022 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 19))));
        MR_Integer Var_5023 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 20))));
        MR_Integer Var_5024 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 21))));
        MR_Integer Var_5025 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 22))));
        MR_Integer Var_5026 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 23))));
        MR_Integer Var_5027 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 24))));
        MR_Integer Var_5028 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 25))));
        MR_Integer Var_5029 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 26))));
        MR_Integer Var_5030 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 27))));
        MR_Integer Var_5031 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 28))));
        MR_Integer Var_5032 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 29))));
        MR_Integer Var_5033 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 30))));
        MR_Integer Var_5034 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 31))));
        MR_Integer Var_5035 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 32))));
        MR_Integer Var_5036 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 33))));
        MR_Integer Var_5037 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 34))));
        MR_Integer Var_5038 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 35))));
        MR_Integer Var_5039 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 36))));
        MR_Integer Var_5040 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 37))));
        MR_Integer Var_5041 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 38))));
        MR_Integer Var_5042 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 39))));
        MR_String Var_5043 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 40))));
        MR_Unsigned packed_word_28 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 0)));
        MR_Unsigned packed_word_29 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 1)));
        MR_Unsigned packed_word_30 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1104_1104, (MR_Integer) 2)));

        {
          STATE_VARIABLE_OptTuple_1115_1115 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 0) = (MR_Box) (packed_word_28);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 1) = (MR_Box) ((((packed_word_29 & (~((MR_Unsigned) 1073741824U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 30))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 2) = (MR_Box) (packed_word_30);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 3) = ((MR_Box) (Var_5006));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 4) = ((MR_Box) (Var_5007));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 5) = ((MR_Box) (Var_5008));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 6) = ((MR_Box) (Var_5009));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 7) = ((MR_Box) (Var_5010));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 8) = ((MR_Box) (Var_5011));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 9) = ((MR_Box) (Var_5012));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 10) = ((MR_Box) (Var_5013));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 11) = ((MR_Box) (Var_5014));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 12) = ((MR_Box) (Var_5015));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 13) = ((MR_Box) (Var_5016));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 14) = ((MR_Box) (Var_5017));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 15) = ((MR_Box) (Var_5018));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 16) = ((MR_Box) (Var_5019));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 17) = ((MR_Box) (Var_5020));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 18) = ((MR_Box) (Var_5021));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 19) = ((MR_Box) (Var_5022));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 20) = ((MR_Box) (Var_5023));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 21) = ((MR_Box) (Var_5024));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 22) = ((MR_Box) (Var_5025));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 23) = ((MR_Box) (Var_5026));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 24) = ((MR_Box) (Var_5027));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 25) = ((MR_Box) (Var_5028));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 26) = ((MR_Box) (Var_5029));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 27) = ((MR_Box) (Var_5030));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 28) = ((MR_Box) (Var_5031));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 29) = ((MR_Box) (Var_5032));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 30) = ((MR_Box) (Var_5033));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 31) = ((MR_Box) (Var_5034));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 32) = ((MR_Box) (Var_5035));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 33) = ((MR_Box) (Var_5036));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 34) = ((MR_Box) (Var_5037));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 35) = ((MR_Box) (Var_5038));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 36) = ((MR_Box) (Var_5039));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 37) = ((MR_Box) (Var_5040));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 38) = ((MR_Box) (Var_5041));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 39) = ((MR_Box) (Var_5042));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, 40) = ((MR_Box) (Var_5043));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 277, Var_511, STATE_VARIABLE_Globals_1086_1086, &STATE_VARIABLE_Globals_1119_1119);
        switch (HighLevelCode_108) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1114_1114 = STATE_VARIABLE_Specs_1098_1098;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[192])), STATE_VARIABLE_Specs_1098_1098, &STATE_VARIABLE_Specs_1114_1114);
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Globals_1119_1119 = STATE_VARIABLE_Globals_1086_1086;
        STATE_VARIABLE_Specs_1114_1114 = STATE_VARIABLE_Specs_1098_1098;
        STATE_VARIABLE_OptTuple_1115_1115 = STATE_VARIABLE_OptTuple_1104_1104;
      }
    }
    {
      MR_Word Var_1131;

      Var_1131 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
      succeeded = (Var_1131 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (HighLevelCode_108 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Target_28 == (MR_Integer) 0);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_1138_1138 = STATE_VARIABLE_Specs_1114_1114;
    else
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[194])), STATE_VARIABLE_Specs_1114_1114, &STATE_VARIABLE_Specs_1138_1138);
    switch (SSTraceLevel_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word Var_5045 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
          MR_Word Var_5046 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
          MR_Word Var_5047 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
          MR_Word Var_5048 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
          MR_Word Var_5049 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
          MR_Word Var_5050 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
          MR_Word Var_5054 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
          MR_Word Var_5055 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
          MR_Word Var_5056 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
          MR_Word Var_5057 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
          MR_Word Var_5058 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
          MR_Word Var_5059 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
          MR_Word Var_5060 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
          MR_Word Var_5061 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
          MR_Word Var_5062 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
          MR_Word Var_5063 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
          MR_Word Var_5064 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
          MR_Word Var_5065 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
          MR_Word Var_5066 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
          MR_Word Var_5067 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
          MR_Word Var_5069 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
          MR_Word Var_5071 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
          MR_Word Var_5074 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_5075 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_5076 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
          MR_Word Var_5078 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
          MR_Word Var_5080 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
          MR_Word Var_5081 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
          MR_Word Var_5082 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
          MR_Word Var_5083 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
          MR_Word Var_5084 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
          MR_Word Var_5085 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
          MR_Word Var_5086 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
          MR_Word Var_5087 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
          MR_Word Var_5088 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 19)) & (MR_Integer) 1);
          MR_Word Var_5089 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 18)) & (MR_Integer) 1);
          MR_Word Var_5090 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 17)) & (MR_Integer) 1);
          MR_Word Var_5091 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 16)) & (MR_Integer) 1);
          MR_Word Var_5092 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 15)) & (MR_Integer) 1);
          MR_Word Var_5093 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
          MR_Word Var_5094 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
          MR_Word Var_5095 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
          MR_Word Var_5096 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
          MR_Word Var_5097 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
          MR_Word Var_5098 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
          MR_Word Var_5099 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
          MR_Word Var_5100 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
          MR_Word Var_5101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
          MR_Word Var_5102 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
          MR_Word Var_5103 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
          MR_Word Var_5104 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
          MR_Word Var_5105 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          MR_Word Var_5106 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_5107 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Var_5108 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
          MR_Word Var_5109 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
          MR_Word Var_5110 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
          MR_Word Var_5111 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 18)) & (MR_Integer) 1);
          MR_Word Var_5112 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
          MR_Word Var_5113 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
          MR_Word Var_5114 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
          MR_Word Var_5115 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
          MR_Word Var_5116 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
          MR_Word Var_5117 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
          MR_Word Var_5118 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
          MR_Word Var_5119 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
          MR_Word Var_5120 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
          MR_Word Var_5121 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
          MR_Word Var_5122 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
          MR_Word Var_5123 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
          MR_Word Var_5124 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
          MR_Word Var_5125 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
          MR_Word Var_5126 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          MR_Word Var_5127 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
          MR_Word Var_5128 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_5129 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Integer Var_5130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 3))));
          MR_Integer Var_5131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 4))));
          MR_Integer Var_5132 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 5))));
          MR_Integer Var_5133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 6))));
          MR_Integer Var_5134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 7))));
          MR_Integer Var_5135 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 8))));
          MR_Integer Var_5136 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 9))));
          MR_Integer Var_5137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 10))));
          MR_Integer Var_5138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 11))));
          MR_Integer Var_5139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 12))));
          MR_Integer Var_5140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 13))));
          MR_Integer Var_5141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 14))));
          MR_Integer Var_5142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 15))));
          MR_Integer Var_5143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 16))));
          MR_Integer Var_5144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 17))));
          MR_Integer Var_5145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 18))));
          MR_Integer Var_5146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 19))));
          MR_Integer Var_5147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 20))));
          MR_Integer Var_5148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 21))));
          MR_Integer Var_5149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 22))));
          MR_Integer Var_5150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 23))));
          MR_Integer Var_5151 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 24))));
          MR_Integer Var_5152 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 25))));
          MR_Integer Var_5153 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 26))));
          MR_Integer Var_5154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 27))));
          MR_Integer Var_5155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 28))));
          MR_Integer Var_5156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 29))));
          MR_Integer Var_5157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 30))));
          MR_Integer Var_5158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 31))));
          MR_Integer Var_5159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 32))));
          MR_Integer Var_5160 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 33))));
          MR_Integer Var_5161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 34))));
          MR_Integer Var_5162 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 35))));
          MR_Integer Var_5163 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 36))));
          MR_Integer Var_5164 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 37))));
          MR_Integer Var_5165 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 38))));
          MR_Integer Var_5166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 39))));
          MR_String Var_5167 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1115_1115, (MR_Integer) 40))));
          MR_Word Var_5169 = Var_5045;
          MR_Word Var_5170 = Var_5046;
          MR_Word Var_5171 = Var_5047;
          MR_Word Var_5172 = Var_5048;
          MR_Word Var_5173 = Var_5049;
          MR_Word Var_5174 = Var_5050;
          MR_Word Var_5178 = Var_5054;
          MR_Word Var_5179 = Var_5055;
          MR_Word Var_5180 = Var_5056;
          MR_Word Var_5181 = Var_5057;
          MR_Word Var_5182 = Var_5058;
          MR_Word Var_5183 = Var_5059;
          MR_Word Var_5184 = Var_5060;
          MR_Word Var_5185 = Var_5061;
          MR_Word Var_5186 = Var_5062;
          MR_Word Var_5187 = Var_5063;
          MR_Word Var_5188 = Var_5064;
          MR_Word Var_5189 = Var_5065;
          MR_Word Var_5190 = Var_5066;
          MR_Word Var_5191 = Var_5067;
          MR_Word Var_5193 = Var_5069;
          MR_Word Var_5195 = Var_5071;
          MR_Word Var_5198 = Var_5074;
          MR_Word Var_5199 = Var_5075;
          MR_Word Var_5200 = Var_5076;
          MR_Word Var_5202 = Var_5078;
          MR_Word Var_5204 = Var_5080;
          MR_Word Var_5205 = Var_5081;
          MR_Word Var_5206 = Var_5082;
          MR_Word Var_5207 = Var_5083;
          MR_Word Var_5208 = Var_5084;
          MR_Word Var_5209 = Var_5085;
          MR_Word Var_5210 = Var_5086;
          MR_Word Var_5211 = Var_5087;
          MR_Word Var_5212 = Var_5088;
          MR_Word Var_5213 = Var_5089;
          MR_Word Var_5214 = Var_5090;
          MR_Word Var_5215 = Var_5091;
          MR_Word Var_5216 = Var_5092;
          MR_Word Var_5217 = Var_5093;
          MR_Word Var_5218 = Var_5094;
          MR_Word Var_5219 = Var_5095;
          MR_Word Var_5220 = Var_5096;
          MR_Word Var_5221 = Var_5097;
          MR_Word Var_5222 = Var_5098;
          MR_Word Var_5223 = Var_5099;
          MR_Word Var_5224 = Var_5100;
          MR_Word Var_5225 = Var_5101;
          MR_Word Var_5226 = Var_5102;
          MR_Word Var_5227 = Var_5103;
          MR_Word Var_5228 = Var_5104;
          MR_Word Var_5229 = Var_5105;
          MR_Word Var_5230 = Var_5106;
          MR_Word Var_5231 = Var_5107;
          MR_Word Var_5232 = Var_5108;
          MR_Word Var_5233 = Var_5109;
          MR_Word Var_5234 = Var_5110;
          MR_Word Var_5235 = Var_5111;
          MR_Word Var_5236 = Var_5112;
          MR_Word Var_5237 = Var_5113;
          MR_Word Var_5238 = Var_5114;
          MR_Word Var_5239 = Var_5115;
          MR_Word Var_5240 = Var_5116;
          MR_Word Var_5241 = Var_5117;
          MR_Word Var_5242 = Var_5118;
          MR_Word Var_5243 = Var_5119;
          MR_Word Var_5244 = Var_5120;
          MR_Word Var_5245 = Var_5121;
          MR_Word Var_5246 = Var_5122;
          MR_Word Var_5247 = Var_5123;
          MR_Word Var_5248 = Var_5124;
          MR_Word Var_5249 = Var_5125;
          MR_Word Var_5250 = Var_5126;
          MR_Word Var_5251 = Var_5127;
          MR_Word Var_5252 = Var_5128;
          MR_Word Var_5253 = Var_5129;
          MR_Integer Var_5254 = Var_5130;
          MR_Integer Var_5255 = Var_5131;
          MR_Integer Var_5256 = Var_5132;
          MR_Integer Var_5257 = Var_5133;
          MR_Integer Var_5258 = Var_5134;
          MR_Integer Var_5259 = Var_5135;
          MR_Integer Var_5260 = Var_5136;
          MR_Integer Var_5261 = Var_5137;
          MR_Integer Var_5262 = Var_5138;
          MR_Integer Var_5263 = Var_5139;
          MR_Integer Var_5264 = Var_5140;
          MR_Integer Var_5265 = Var_5141;
          MR_Integer Var_5266 = Var_5142;
          MR_Integer Var_5267 = Var_5143;
          MR_Integer Var_5268 = Var_5144;
          MR_Integer Var_5269 = Var_5145;
          MR_Integer Var_5270 = Var_5146;
          MR_Integer Var_5271 = Var_5147;
          MR_Integer Var_5272 = Var_5148;
          MR_Integer Var_5273 = Var_5149;
          MR_Integer Var_5274 = Var_5150;
          MR_Integer Var_5275 = Var_5151;
          MR_Integer Var_5276 = Var_5152;
          MR_Integer Var_5277 = Var_5153;
          MR_Integer Var_5278 = Var_5154;
          MR_Integer Var_5279 = Var_5155;
          MR_Integer Var_5280 = Var_5156;
          MR_Integer Var_5281 = Var_5157;
          MR_Integer Var_5282 = Var_5158;
          MR_Integer Var_5283 = Var_5159;
          MR_Integer Var_5284 = Var_5160;
          MR_Integer Var_5285 = Var_5161;
          MR_Integer Var_5286 = Var_5162;
          MR_Integer Var_5287 = Var_5163;
          MR_Integer Var_5288 = Var_5164;
          MR_Integer Var_5289 = Var_5165;
          MR_Integer Var_5290 = Var_5166;
          MR_String Var_5291 = Var_5167;
          MR_Word Var_5293 = Var_5169;
          MR_Word Var_5294 = Var_5170;
          MR_Word Var_5295 = Var_5171;
          MR_Word Var_5296 = Var_5172;
          MR_Word Var_5297 = Var_5173;
          MR_Word Var_5298 = Var_5174;
          MR_Word Var_5302 = Var_5178;
          MR_Word Var_5303 = Var_5179;
          MR_Word Var_5304 = Var_5180;
          MR_Word Var_5305 = Var_5181;
          MR_Word Var_5306 = Var_5182;
          MR_Word Var_5307 = Var_5183;
          MR_Word Var_5308 = Var_5184;
          MR_Word Var_5309 = Var_5185;
          MR_Word Var_5310 = Var_5186;
          MR_Word Var_5311 = Var_5187;
          MR_Word Var_5312 = Var_5188;
          MR_Word Var_5313 = Var_5189;
          MR_Word Var_5314 = Var_5190;
          MR_Word Var_5315 = Var_5191;
          MR_Word Var_5317 = Var_5193;
          MR_Word Var_5319 = Var_5195;
          MR_Word Var_5322 = Var_5198;
          MR_Word Var_5323 = Var_5199;
          MR_Word Var_5324 = Var_5200;
          MR_Word Var_5326 = Var_5202;
          MR_Word Var_5328 = Var_5204;
          MR_Word Var_5329 = Var_5205;
          MR_Word Var_5330 = Var_5206;
          MR_Word Var_5331 = Var_5207;
          MR_Word Var_5332 = Var_5208;
          MR_Word Var_5333 = Var_5209;
          MR_Word Var_5334 = Var_5210;
          MR_Word Var_5335 = Var_5211;
          MR_Word Var_5336 = Var_5212;
          MR_Word Var_5337 = Var_5213;
          MR_Word Var_5338 = Var_5214;
          MR_Word Var_5339 = Var_5215;
          MR_Word Var_5340 = Var_5216;
          MR_Word Var_5341 = Var_5217;
          MR_Word Var_5342 = Var_5218;
          MR_Word Var_5343 = Var_5219;
          MR_Word Var_5344 = Var_5220;
          MR_Word Var_5345 = Var_5221;
          MR_Word Var_5346 = Var_5222;
          MR_Word Var_5347 = Var_5223;
          MR_Word Var_5348 = Var_5224;
          MR_Word Var_5349 = Var_5225;
          MR_Word Var_5350 = Var_5226;
          MR_Word Var_5351 = Var_5227;
          MR_Word Var_5352 = Var_5228;
          MR_Word Var_5353 = Var_5229;
          MR_Word Var_5354 = Var_5230;
          MR_Word Var_5355 = Var_5231;
          MR_Word Var_5356 = Var_5232;
          MR_Word Var_5357 = Var_5233;
          MR_Word Var_5358 = Var_5234;
          MR_Word Var_5359 = Var_5235;
          MR_Word Var_5360 = Var_5236;
          MR_Word Var_5361 = Var_5237;
          MR_Word Var_5362 = Var_5238;
          MR_Word Var_5363 = Var_5239;
          MR_Word Var_5364 = Var_5240;
          MR_Word Var_5365 = Var_5241;
          MR_Word Var_5366 = Var_5242;
          MR_Word Var_5367 = Var_5243;
          MR_Word Var_5368 = Var_5244;
          MR_Word Var_5369 = Var_5245;
          MR_Word Var_5370 = Var_5246;
          MR_Word Var_5371 = Var_5247;
          MR_Word Var_5372 = Var_5248;
          MR_Word Var_5373 = Var_5249;
          MR_Word Var_5374 = Var_5250;
          MR_Word Var_5375 = Var_5251;
          MR_Word Var_5376 = Var_5252;
          MR_Word Var_5377 = Var_5253;
          MR_Integer Var_5378 = Var_5254;
          MR_Integer Var_5379 = Var_5255;
          MR_Integer Var_5380 = Var_5256;
          MR_Integer Var_5381 = Var_5257;
          MR_Integer Var_5382 = Var_5258;
          MR_Integer Var_5383 = Var_5259;
          MR_Integer Var_5384 = Var_5260;
          MR_Integer Var_5385 = Var_5261;
          MR_Integer Var_5386 = Var_5262;
          MR_Integer Var_5387 = Var_5263;
          MR_Integer Var_5388 = Var_5264;
          MR_Integer Var_5389 = Var_5265;
          MR_Integer Var_5390 = Var_5266;
          MR_Integer Var_5391 = Var_5267;
          MR_Integer Var_5392 = Var_5268;
          MR_Integer Var_5393 = Var_5269;
          MR_Integer Var_5394 = Var_5270;
          MR_Integer Var_5395 = Var_5271;
          MR_Integer Var_5396 = Var_5272;
          MR_Integer Var_5397 = Var_5273;
          MR_Integer Var_5398 = Var_5274;
          MR_Integer Var_5399 = Var_5275;
          MR_Integer Var_5400 = Var_5276;
          MR_Integer Var_5401 = Var_5277;
          MR_Integer Var_5402 = Var_5278;
          MR_Integer Var_5403 = Var_5279;
          MR_Integer Var_5404 = Var_5280;
          MR_Integer Var_5405 = Var_5281;
          MR_Integer Var_5406 = Var_5282;
          MR_Integer Var_5407 = Var_5283;
          MR_Integer Var_5408 = Var_5284;
          MR_Integer Var_5409 = Var_5285;
          MR_Integer Var_5410 = Var_5286;
          MR_Integer Var_5411 = Var_5287;
          MR_Integer Var_5412 = Var_5288;
          MR_Integer Var_5413 = Var_5289;
          MR_Integer Var_5414 = Var_5290;
          MR_String Var_5415 = Var_5291;
          MR_Word Var_5417 = Var_5293;
          MR_Word Var_5418 = Var_5294;
          MR_Word Var_5419 = Var_5295;
          MR_Word Var_5420 = Var_5296;
          MR_Word Var_5421 = Var_5297;
          MR_Word Var_5422 = Var_5298;
          MR_Word Var_5426 = Var_5302;
          MR_Word Var_5427 = Var_5303;
          MR_Word Var_5428 = Var_5304;
          MR_Word Var_5429 = Var_5305;
          MR_Word Var_5430 = Var_5306;
          MR_Word Var_5431 = Var_5307;
          MR_Word Var_5432 = Var_5308;
          MR_Word Var_5433 = Var_5309;
          MR_Word Var_5434 = Var_5310;
          MR_Word Var_5435 = Var_5311;
          MR_Word Var_5436 = Var_5312;
          MR_Word Var_5437 = Var_5313;
          MR_Word Var_5438 = Var_5314;
          MR_Word Var_5439 = Var_5315;
          MR_Word Var_5441 = Var_5317;
          MR_Word Var_5443 = Var_5319;
          MR_Word Var_5446 = Var_5322;
          MR_Word Var_5447 = Var_5323;
          MR_Word Var_5448 = Var_5324;
          MR_Word Var_5450 = Var_5326;
          MR_Word Var_5452 = Var_5328;
          MR_Word Var_5453 = Var_5329;
          MR_Word Var_5454 = Var_5330;
          MR_Word Var_5455 = Var_5331;
          MR_Word Var_5456 = Var_5332;
          MR_Word Var_5457 = Var_5333;
          MR_Word Var_5458 = Var_5334;
          MR_Word Var_5459 = Var_5335;
          MR_Word Var_5460 = Var_5336;
          MR_Word Var_5461 = Var_5337;
          MR_Word Var_5462 = Var_5338;
          MR_Word Var_5463 = Var_5339;
          MR_Word Var_5464 = Var_5340;
          MR_Word Var_5465 = Var_5341;
          MR_Word Var_5466 = Var_5342;
          MR_Word Var_5467 = Var_5343;
          MR_Word Var_5468 = Var_5344;
          MR_Word Var_5469 = Var_5345;
          MR_Word Var_5470 = Var_5346;
          MR_Word Var_5471 = Var_5347;
          MR_Word Var_5472 = Var_5348;
          MR_Word Var_5473 = Var_5349;
          MR_Word Var_5474 = Var_5350;
          MR_Word Var_5475 = Var_5351;
          MR_Word Var_5476 = Var_5352;
          MR_Word Var_5477 = Var_5353;
          MR_Word Var_5478 = Var_5354;
          MR_Word Var_5479 = Var_5355;
          MR_Word Var_5480 = Var_5356;
          MR_Word Var_5481 = Var_5357;
          MR_Word Var_5482 = Var_5358;
          MR_Word Var_5483 = Var_5359;
          MR_Word Var_5484 = Var_5360;
          MR_Word Var_5485 = Var_5361;
          MR_Word Var_5486 = Var_5362;
          MR_Word Var_5487 = Var_5363;
          MR_Word Var_5488 = Var_5364;
          MR_Word Var_5489 = Var_5365;
          MR_Word Var_5490 = Var_5366;
          MR_Word Var_5491 = Var_5367;
          MR_Word Var_5492 = Var_5368;
          MR_Word Var_5493 = Var_5369;
          MR_Word Var_5494 = Var_5370;
          MR_Word Var_5495 = Var_5371;
          MR_Word Var_5496 = Var_5372;
          MR_Word Var_5497 = Var_5373;
          MR_Word Var_5498 = Var_5374;
          MR_Word Var_5499 = Var_5375;
          MR_Word Var_5500 = Var_5376;
          MR_Word Var_5501 = Var_5377;
          MR_Integer Var_5502 = Var_5378;
          MR_Integer Var_5503 = Var_5379;
          MR_Integer Var_5504 = Var_5380;
          MR_Integer Var_5505 = Var_5381;
          MR_Integer Var_5506 = Var_5382;
          MR_Integer Var_5507 = Var_5383;
          MR_Integer Var_5508 = Var_5384;
          MR_Integer Var_5509 = Var_5385;
          MR_Integer Var_5510 = Var_5386;
          MR_Integer Var_5511 = Var_5387;
          MR_Integer Var_5512 = Var_5388;
          MR_Integer Var_5513 = Var_5389;
          MR_Integer Var_5514 = Var_5390;
          MR_Integer Var_5515 = Var_5391;
          MR_Integer Var_5516 = Var_5392;
          MR_Integer Var_5517 = Var_5393;
          MR_Integer Var_5518 = Var_5394;
          MR_Integer Var_5519 = Var_5395;
          MR_Integer Var_5520 = Var_5396;
          MR_Integer Var_5521 = Var_5397;
          MR_Integer Var_5522 = Var_5398;
          MR_Integer Var_5523 = Var_5399;
          MR_Integer Var_5524 = Var_5400;
          MR_Integer Var_5525 = Var_5401;
          MR_Integer Var_5526 = Var_5402;
          MR_Integer Var_5527 = Var_5403;
          MR_Integer Var_5528 = Var_5404;
          MR_Integer Var_5529 = Var_5405;
          MR_Integer Var_5530 = Var_5406;
          MR_Integer Var_5531 = Var_5407;
          MR_Integer Var_5532 = Var_5408;
          MR_Integer Var_5533 = Var_5409;
          MR_Integer Var_5534 = Var_5410;
          MR_Integer Var_5535 = Var_5411;
          MR_Integer Var_5536 = Var_5412;
          MR_Integer Var_5537 = Var_5413;
          MR_Integer Var_5538 = Var_5414;
          MR_String Var_5539 = Var_5415;
          MR_Word Var_5541 = Var_5417;
          MR_Word Var_5542 = Var_5418;
          MR_Word Var_5543 = Var_5419;
          MR_Word Var_5544 = Var_5420;
          MR_Word Var_5545 = Var_5421;
          MR_Word Var_5546 = Var_5422;
          MR_Word Var_5550 = Var_5426;
          MR_Word Var_5551 = Var_5427;
          MR_Word Var_5552 = Var_5428;
          MR_Word Var_5553 = Var_5429;
          MR_Word Var_5554 = Var_5430;
          MR_Word Var_5555 = Var_5431;
          MR_Word Var_5556 = Var_5432;
          MR_Word Var_5557 = Var_5433;
          MR_Word Var_5558 = Var_5434;
          MR_Word Var_5559 = Var_5435;
          MR_Word Var_5560 = Var_5436;
          MR_Word Var_5561 = Var_5437;
          MR_Word Var_5562 = Var_5438;
          MR_Word Var_5563 = Var_5439;
          MR_Word Var_5565 = Var_5441;
          MR_Word Var_5567 = Var_5443;
          MR_Word Var_5570 = Var_5446;
          MR_Word Var_5571 = Var_5447;
          MR_Word Var_5572 = Var_5448;
          MR_Word Var_5574 = Var_5450;
          MR_Word Var_5576 = Var_5452;
          MR_Word Var_5577 = Var_5453;
          MR_Word Var_5578 = Var_5454;
          MR_Word Var_5579 = Var_5455;
          MR_Word Var_5580 = Var_5456;
          MR_Word Var_5581 = Var_5457;
          MR_Word Var_5582 = Var_5458;
          MR_Word Var_5583 = Var_5459;
          MR_Word Var_5584 = Var_5460;
          MR_Word Var_5585 = Var_5461;
          MR_Word Var_5586 = Var_5462;
          MR_Word Var_5587 = Var_5463;
          MR_Word Var_5588 = Var_5464;
          MR_Word Var_5589 = Var_5465;
          MR_Word Var_5590 = Var_5466;
          MR_Word Var_5591 = Var_5467;
          MR_Word Var_5592 = Var_5468;
          MR_Word Var_5593 = Var_5469;
          MR_Word Var_5594 = Var_5470;
          MR_Word Var_5595 = Var_5471;
          MR_Word Var_5596 = Var_5472;
          MR_Word Var_5597 = Var_5473;
          MR_Word Var_5598 = Var_5474;
          MR_Word Var_5599 = Var_5475;
          MR_Word Var_5600 = Var_5476;
          MR_Word Var_5601 = Var_5477;
          MR_Word Var_5602 = Var_5478;
          MR_Word Var_5603 = Var_5479;
          MR_Word Var_5604 = Var_5480;
          MR_Word Var_5605 = Var_5481;
          MR_Word Var_5606 = Var_5482;
          MR_Word Var_5607 = Var_5483;
          MR_Word Var_5608 = Var_5484;
          MR_Word Var_5609 = Var_5485;
          MR_Word Var_5610 = Var_5486;
          MR_Word Var_5611 = Var_5487;
          MR_Word Var_5612 = Var_5488;
          MR_Word Var_5613 = Var_5489;
          MR_Word Var_5614 = Var_5490;
          MR_Word Var_5615 = Var_5491;
          MR_Word Var_5616 = Var_5492;
          MR_Word Var_5617 = Var_5493;
          MR_Word Var_5618 = Var_5494;
          MR_Word Var_5619 = Var_5495;
          MR_Word Var_5620 = Var_5496;
          MR_Word Var_5621 = Var_5497;
          MR_Word Var_5622 = Var_5498;
          MR_Word Var_5623 = Var_5499;
          MR_Word Var_5624 = Var_5500;
          MR_Word Var_5625 = Var_5501;
          MR_Integer Var_5626 = Var_5502;
          MR_Integer Var_5627 = Var_5503;
          MR_Integer Var_5628 = Var_5504;
          MR_Integer Var_5629 = Var_5505;
          MR_Integer Var_5630 = Var_5506;
          MR_Integer Var_5631 = Var_5507;
          MR_Integer Var_5632 = Var_5508;
          MR_Integer Var_5633 = Var_5509;
          MR_Integer Var_5634 = Var_5510;
          MR_Integer Var_5635 = Var_5511;
          MR_Integer Var_5636 = Var_5512;
          MR_Integer Var_5637 = Var_5513;
          MR_Integer Var_5638 = Var_5514;
          MR_Integer Var_5639 = Var_5515;
          MR_Integer Var_5640 = Var_5516;
          MR_Integer Var_5641 = Var_5517;
          MR_Integer Var_5642 = Var_5518;
          MR_Integer Var_5643 = Var_5519;
          MR_Integer Var_5644 = Var_5520;
          MR_Integer Var_5645 = Var_5521;
          MR_Integer Var_5646 = Var_5522;
          MR_Integer Var_5647 = Var_5523;
          MR_Integer Var_5648 = Var_5524;
          MR_Integer Var_5649 = Var_5525;
          MR_Integer Var_5650 = Var_5526;
          MR_Integer Var_5651 = Var_5527;
          MR_Integer Var_5652 = Var_5528;
          MR_Integer Var_5653 = Var_5529;
          MR_Integer Var_5654 = Var_5530;
          MR_Integer Var_5655 = Var_5531;
          MR_Integer Var_5656 = Var_5532;
          MR_Integer Var_5657 = Var_5533;
          MR_Integer Var_5658 = Var_5534;
          MR_Integer Var_5659 = Var_5535;
          MR_Integer Var_5660 = Var_5536;
          MR_Integer Var_5661 = Var_5537;
          MR_Integer Var_5662 = Var_5538;
          MR_String Var_5663 = Var_5539;
          MR_Word Var_5665 = Var_5541;
          MR_Word Var_5666 = Var_5542;
          MR_Word Var_5667 = Var_5543;
          MR_Word Var_5668 = Var_5544;
          MR_Word Var_5669 = Var_5545;
          MR_Word Var_5670 = Var_5546;
          MR_Word Var_5674 = Var_5550;
          MR_Word Var_5675 = Var_5551;
          MR_Word Var_5676 = Var_5552;
          MR_Word Var_5677 = Var_5553;
          MR_Word Var_5678 = Var_5554;
          MR_Word Var_5679 = Var_5555;
          MR_Word Var_5680 = Var_5556;
          MR_Word Var_5681 = Var_5557;
          MR_Word Var_5682 = Var_5558;
          MR_Word Var_5683 = Var_5559;
          MR_Word Var_5684 = Var_5560;
          MR_Word Var_5685 = Var_5561;
          MR_Word Var_5686 = Var_5562;
          MR_Word Var_5687 = Var_5563;
          MR_Word Var_5689 = Var_5565;
          MR_Word Var_5691 = Var_5567;
          MR_Word Var_5694 = Var_5570;
          MR_Word Var_5695 = Var_5571;
          MR_Word Var_5696 = Var_5572;
          MR_Word Var_5698 = Var_5574;
          MR_Word Var_5700 = Var_5576;
          MR_Word Var_5701 = Var_5577;
          MR_Word Var_5702 = Var_5578;
          MR_Word Var_5703 = Var_5579;
          MR_Word Var_5704 = Var_5580;
          MR_Word Var_5705 = Var_5581;
          MR_Word Var_5706 = Var_5582;
          MR_Word Var_5707 = Var_5583;
          MR_Word Var_5708 = Var_5584;
          MR_Word Var_5709 = Var_5585;
          MR_Word Var_5710 = Var_5586;
          MR_Word Var_5711 = Var_5587;
          MR_Word Var_5712 = Var_5588;
          MR_Word Var_5713 = Var_5589;
          MR_Word Var_5714 = Var_5590;
          MR_Word Var_5715 = Var_5591;
          MR_Word Var_5716 = Var_5592;
          MR_Word Var_5717 = Var_5593;
          MR_Word Var_5718 = Var_5594;
          MR_Word Var_5719 = Var_5595;
          MR_Word Var_5720 = Var_5596;
          MR_Word Var_5721 = Var_5597;
          MR_Word Var_5722 = Var_5598;
          MR_Word Var_5723 = Var_5599;
          MR_Word Var_5724 = Var_5600;
          MR_Word Var_5725 = Var_5601;
          MR_Word Var_5726 = Var_5602;
          MR_Word Var_5727 = Var_5603;
          MR_Word Var_5728 = Var_5604;
          MR_Word Var_5729 = Var_5605;
          MR_Word Var_5730 = Var_5606;
          MR_Word Var_5731 = Var_5607;
          MR_Word Var_5732 = Var_5608;
          MR_Word Var_5733 = Var_5609;
          MR_Word Var_5734 = Var_5610;
          MR_Word Var_5735 = Var_5611;
          MR_Word Var_5736 = Var_5612;
          MR_Word Var_5737 = Var_5613;
          MR_Word Var_5738 = Var_5614;
          MR_Word Var_5739 = Var_5615;
          MR_Word Var_5740 = Var_5616;
          MR_Word Var_5741 = Var_5617;
          MR_Word Var_5742 = Var_5618;
          MR_Word Var_5743 = Var_5619;
          MR_Word Var_5744 = Var_5620;
          MR_Word Var_5745 = Var_5621;
          MR_Word Var_5746 = Var_5622;
          MR_Word Var_5747 = Var_5623;
          MR_Word Var_5748 = Var_5624;
          MR_Word Var_5749 = Var_5625;
          MR_Integer Var_5750 = Var_5626;
          MR_Integer Var_5751 = Var_5627;
          MR_Integer Var_5752 = Var_5628;
          MR_Integer Var_5753 = Var_5629;
          MR_Integer Var_5754 = Var_5630;
          MR_Integer Var_5755 = Var_5631;
          MR_Integer Var_5756 = Var_5632;
          MR_Integer Var_5757 = Var_5633;
          MR_Integer Var_5758 = Var_5634;
          MR_Integer Var_5759 = Var_5635;
          MR_Integer Var_5760 = Var_5636;
          MR_Integer Var_5761 = Var_5637;
          MR_Integer Var_5762 = Var_5638;
          MR_Integer Var_5763 = Var_5639;
          MR_Integer Var_5764 = Var_5640;
          MR_Integer Var_5765 = Var_5641;
          MR_Integer Var_5766 = Var_5642;
          MR_Integer Var_5767 = Var_5643;
          MR_Integer Var_5768 = Var_5644;
          MR_Integer Var_5769 = Var_5645;
          MR_Integer Var_5770 = Var_5646;
          MR_Integer Var_5771 = Var_5647;
          MR_Integer Var_5772 = Var_5648;
          MR_Integer Var_5773 = Var_5649;
          MR_Integer Var_5774 = Var_5650;
          MR_Integer Var_5775 = Var_5651;
          MR_Integer Var_5776 = Var_5652;
          MR_Integer Var_5777 = Var_5653;
          MR_Integer Var_5778 = Var_5654;
          MR_Integer Var_5779 = Var_5655;
          MR_Integer Var_5780 = Var_5656;
          MR_Integer Var_5781 = Var_5657;
          MR_Integer Var_5782 = Var_5658;
          MR_Integer Var_5783 = Var_5659;
          MR_Integer Var_5784 = Var_5660;
          MR_Integer Var_5785 = Var_5661;
          MR_Integer Var_5786 = Var_5662;
          MR_String Var_5787 = Var_5663;
          MR_Word Var_5789 = Var_5665;
          MR_Word Var_5790 = Var_5666;
          MR_Word Var_5791 = Var_5667;
          MR_Word Var_5792 = Var_5668;
          MR_Word Var_5793 = Var_5669;
          MR_Word Var_5794 = Var_5670;
          MR_Word Var_5798 = Var_5674;
          MR_Word Var_5799 = Var_5675;
          MR_Word Var_5800 = Var_5676;
          MR_Word Var_5801 = Var_5677;
          MR_Word Var_5802 = Var_5678;
          MR_Word Var_5803 = Var_5679;
          MR_Word Var_5804 = Var_5680;
          MR_Word Var_5805 = Var_5681;
          MR_Word Var_5806 = Var_5682;
          MR_Word Var_5807 = Var_5683;
          MR_Word Var_5808 = Var_5684;
          MR_Word Var_5809 = Var_5685;
          MR_Word Var_5810 = Var_5686;
          MR_Word Var_5811 = Var_5687;
          MR_Word Var_5813 = Var_5689;
          MR_Word Var_5815 = Var_5691;
          MR_Word Var_5818 = Var_5694;
          MR_Word Var_5819 = Var_5695;
          MR_Word Var_5820 = Var_5696;
          MR_Word Var_5822 = Var_5698;
          MR_Word Var_5824 = Var_5700;
          MR_Word Var_5825 = Var_5701;
          MR_Word Var_5826 = Var_5702;
          MR_Word Var_5827 = Var_5703;
          MR_Word Var_5828 = Var_5704;
          MR_Word Var_5829 = Var_5705;
          MR_Word Var_5830 = Var_5706;
          MR_Word Var_5831 = Var_5707;
          MR_Word Var_5832 = Var_5708;
          MR_Word Var_5833 = Var_5709;
          MR_Word Var_5834 = Var_5710;
          MR_Word Var_5835 = Var_5711;
          MR_Word Var_5836 = Var_5712;
          MR_Word Var_5837 = Var_5713;
          MR_Word Var_5838 = Var_5714;
          MR_Word Var_5839 = Var_5715;
          MR_Word Var_5840 = Var_5716;
          MR_Word Var_5841 = Var_5717;
          MR_Word Var_5842 = Var_5718;
          MR_Word Var_5843 = Var_5719;
          MR_Word Var_5844 = Var_5720;
          MR_Word Var_5845 = Var_5721;
          MR_Word Var_5846 = Var_5722;
          MR_Word Var_5847 = Var_5723;
          MR_Word Var_5848 = Var_5724;
          MR_Word Var_5849 = Var_5725;
          MR_Word Var_5850 = Var_5726;
          MR_Word Var_5851 = Var_5727;
          MR_Word Var_5852 = Var_5728;
          MR_Word Var_5853 = Var_5729;
          MR_Word Var_5854 = Var_5730;
          MR_Word Var_5855 = Var_5731;
          MR_Word Var_5856 = Var_5732;
          MR_Word Var_5857 = Var_5733;
          MR_Word Var_5858 = Var_5734;
          MR_Word Var_5859 = Var_5735;
          MR_Word Var_5860 = Var_5736;
          MR_Word Var_5861 = Var_5737;
          MR_Word Var_5862 = Var_5738;
          MR_Word Var_5863 = Var_5739;
          MR_Word Var_5864 = Var_5740;
          MR_Word Var_5865 = Var_5741;
          MR_Word Var_5866 = Var_5742;
          MR_Word Var_5867 = Var_5743;
          MR_Word Var_5868 = Var_5744;
          MR_Word Var_5869 = Var_5745;
          MR_Word Var_5870 = Var_5746;
          MR_Word Var_5871 = Var_5747;
          MR_Word Var_5872 = Var_5748;
          MR_Word Var_5873 = Var_5749;
          MR_Integer Var_5874 = Var_5750;
          MR_Integer Var_5875 = Var_5751;
          MR_Integer Var_5876 = Var_5752;
          MR_Integer Var_5877 = Var_5753;
          MR_Integer Var_5878 = Var_5754;
          MR_Integer Var_5879 = Var_5755;
          MR_Integer Var_5880 = Var_5756;
          MR_Integer Var_5881 = Var_5757;
          MR_Integer Var_5882 = Var_5758;
          MR_Integer Var_5883 = Var_5759;
          MR_Integer Var_5884 = Var_5760;
          MR_Integer Var_5885 = Var_5761;
          MR_Integer Var_5886 = Var_5762;
          MR_Integer Var_5887 = Var_5763;
          MR_Integer Var_5888 = Var_5764;
          MR_Integer Var_5889 = Var_5765;
          MR_Integer Var_5890 = Var_5766;
          MR_Integer Var_5891 = Var_5767;
          MR_Integer Var_5892 = Var_5768;
          MR_Integer Var_5893 = Var_5769;
          MR_Integer Var_5894 = Var_5770;
          MR_Integer Var_5895 = Var_5771;
          MR_Integer Var_5896 = Var_5772;
          MR_Integer Var_5897 = Var_5773;
          MR_Integer Var_5898 = Var_5774;
          MR_Integer Var_5899 = Var_5775;
          MR_Integer Var_5900 = Var_5776;
          MR_Integer Var_5901 = Var_5777;
          MR_Integer Var_5902 = Var_5778;
          MR_Integer Var_5903 = Var_5779;
          MR_Integer Var_5904 = Var_5780;
          MR_Integer Var_5905 = Var_5781;
          MR_Integer Var_5906 = Var_5782;
          MR_Integer Var_5907 = Var_5783;
          MR_Integer Var_5908 = Var_5784;
          MR_Integer Var_5909 = Var_5785;
          MR_Integer Var_5910 = Var_5786;
          MR_String Var_5911 = Var_5787;
          MR_Word Var_5913 = Var_5789;
          MR_Word Var_5914 = Var_5790;
          MR_Word Var_5915 = Var_5791;
          MR_Word Var_5916 = Var_5792;
          MR_Word Var_5917 = Var_5793;
          MR_Word Var_5918 = Var_5794;
          MR_Word Var_5922 = Var_5798;
          MR_Word Var_5923 = Var_5799;
          MR_Word Var_5924 = Var_5800;
          MR_Word Var_5925 = Var_5801;
          MR_Word Var_5926 = Var_5802;
          MR_Word Var_5927 = Var_5803;
          MR_Word Var_5928 = Var_5804;
          MR_Word Var_5929 = Var_5805;
          MR_Word Var_5930 = Var_5806;
          MR_Word Var_5931 = Var_5807;
          MR_Word Var_5932 = Var_5808;
          MR_Word Var_5933 = Var_5809;
          MR_Word Var_5934 = Var_5810;
          MR_Word Var_5935 = Var_5811;
          MR_Word Var_5937 = Var_5813;
          MR_Word Var_5939 = Var_5815;
          MR_Word Var_5942 = Var_5818;
          MR_Word Var_5943 = Var_5819;
          MR_Word Var_5944 = Var_5820;
          MR_Word Var_5946 = Var_5822;
          MR_Word Var_5948 = Var_5824;
          MR_Word Var_5949 = Var_5825;
          MR_Word Var_5950 = Var_5826;
          MR_Word Var_5951 = Var_5827;
          MR_Word Var_5952 = Var_5828;
          MR_Word Var_5953 = Var_5829;
          MR_Word Var_5954 = Var_5830;
          MR_Word Var_5955 = Var_5831;
          MR_Word Var_5956 = Var_5832;
          MR_Word Var_5957 = Var_5833;
          MR_Word Var_5958 = Var_5834;
          MR_Word Var_5959 = Var_5835;
          MR_Word Var_5960 = Var_5836;
          MR_Word Var_5961 = Var_5837;
          MR_Word Var_5962 = Var_5838;
          MR_Word Var_5963 = Var_5839;
          MR_Word Var_5964 = Var_5840;
          MR_Word Var_5965 = Var_5841;
          MR_Word Var_5966 = Var_5842;
          MR_Word Var_5967 = Var_5843;
          MR_Word Var_5968 = Var_5844;
          MR_Word Var_5969 = Var_5845;
          MR_Word Var_5970 = Var_5846;
          MR_Word Var_5971 = Var_5847;
          MR_Word Var_5972 = Var_5848;
          MR_Word Var_5973 = Var_5849;
          MR_Word Var_5974 = Var_5850;
          MR_Word Var_5975 = Var_5851;
          MR_Word Var_5976 = Var_5852;
          MR_Word Var_5977 = Var_5853;
          MR_Word Var_5978 = Var_5854;
          MR_Word Var_5979 = Var_5855;
          MR_Word Var_5980 = Var_5856;
          MR_Word Var_5981 = Var_5857;
          MR_Word Var_5982 = Var_5858;
          MR_Word Var_5983 = Var_5859;
          MR_Word Var_5984 = Var_5860;
          MR_Word Var_5985 = Var_5861;
          MR_Word Var_5986 = Var_5862;
          MR_Word Var_5987 = Var_5863;
          MR_Word Var_5988 = Var_5864;
          MR_Word Var_5989 = Var_5865;
          MR_Word Var_5990 = Var_5866;
          MR_Word Var_5991 = Var_5867;
          MR_Word Var_5992 = Var_5868;
          MR_Word Var_5993 = Var_5869;
          MR_Word Var_5994 = Var_5870;
          MR_Word Var_5995 = Var_5871;
          MR_Word Var_5996 = Var_5872;
          MR_Word Var_5997 = Var_5873;
          MR_Integer Var_5998 = Var_5874;
          MR_Integer Var_5999 = Var_5875;
          MR_Integer Var_6000 = Var_5876;
          MR_Integer Var_6001 = Var_5877;
          MR_Integer Var_6002 = Var_5878;
          MR_Integer Var_6003 = Var_5879;
          MR_Integer Var_6004 = Var_5880;
          MR_Integer Var_6005 = Var_5881;
          MR_Integer Var_6006 = Var_5882;
          MR_Integer Var_6007 = Var_5883;
          MR_Integer Var_6008 = Var_5884;
          MR_Integer Var_6009 = Var_5885;
          MR_Integer Var_6010 = Var_5886;
          MR_Integer Var_6011 = Var_5887;
          MR_Integer Var_6012 = Var_5888;
          MR_Integer Var_6013 = Var_5889;
          MR_Integer Var_6014 = Var_5890;
          MR_Integer Var_6015 = Var_5891;
          MR_Integer Var_6016 = Var_5892;
          MR_Integer Var_6017 = Var_5893;
          MR_Integer Var_6018 = Var_5894;
          MR_Integer Var_6019 = Var_5895;
          MR_Integer Var_6020 = Var_5896;
          MR_Integer Var_6021 = Var_5897;
          MR_Integer Var_6022 = Var_5898;
          MR_Integer Var_6023 = Var_5899;
          MR_Integer Var_6024 = Var_5900;
          MR_Integer Var_6025 = Var_5901;
          MR_Integer Var_6026 = Var_5902;
          MR_Integer Var_6027 = Var_5903;
          MR_Integer Var_6028 = Var_5904;
          MR_Integer Var_6029 = Var_5905;
          MR_Integer Var_6030 = Var_5906;
          MR_Integer Var_6031 = Var_5907;
          MR_Integer Var_6032 = Var_5908;
          MR_Integer Var_6033 = Var_5909;
          MR_Integer Var_6034 = Var_5910;
          MR_String Var_6035 = Var_5911;
          MR_Word Var_6037 = Var_5913;
          MR_Word Var_6038 = Var_5914;
          MR_Word Var_6039 = Var_5915;
          MR_Word Var_6040 = Var_5916;
          MR_Word Var_6041 = Var_5917;
          MR_Word Var_6042 = Var_5918;
          MR_Word Var_6046 = Var_5922;
          MR_Word Var_6047 = Var_5923;
          MR_Word Var_6048 = Var_5924;
          MR_Word Var_6049 = Var_5925;
          MR_Word Var_6050 = Var_5926;
          MR_Word Var_6051 = Var_5927;
          MR_Word Var_6052 = Var_5928;
          MR_Word Var_6053 = Var_5929;
          MR_Word Var_6054 = Var_5930;
          MR_Word Var_6055 = Var_5931;
          MR_Word Var_6056 = Var_5932;
          MR_Word Var_6057 = Var_5933;
          MR_Word Var_6058 = Var_5934;
          MR_Word Var_6059 = Var_5935;
          MR_Word Var_6061 = Var_5937;
          MR_Word Var_6063 = Var_5939;
          MR_Word Var_6066 = Var_5942;
          MR_Word Var_6067 = Var_5943;
          MR_Word Var_6068 = Var_5944;
          MR_Word Var_6070 = Var_5946;
          MR_Word Var_6072 = Var_5948;
          MR_Word Var_6073 = Var_5949;
          MR_Word Var_6074 = Var_5950;
          MR_Word Var_6075 = Var_5951;
          MR_Word Var_6076 = Var_5952;
          MR_Word Var_6077 = Var_5953;
          MR_Word Var_6078 = Var_5954;
          MR_Word Var_6079 = Var_5955;
          MR_Word Var_6080 = Var_5956;
          MR_Word Var_6081 = Var_5957;
          MR_Word Var_6082 = Var_5958;
          MR_Word Var_6083 = Var_5959;
          MR_Word Var_6084 = Var_5960;
          MR_Word Var_6085 = Var_5961;
          MR_Word Var_6086 = Var_5962;
          MR_Word Var_6087 = Var_5963;
          MR_Word Var_6088 = Var_5964;
          MR_Word Var_6089 = Var_5965;
          MR_Word Var_6090 = Var_5966;
          MR_Word Var_6091 = Var_5967;
          MR_Word Var_6092 = Var_5968;
          MR_Word Var_6093 = Var_5969;
          MR_Word Var_6094 = Var_5970;
          MR_Word Var_6095 = Var_5971;
          MR_Word Var_6096 = Var_5972;
          MR_Word Var_6097 = Var_5973;
          MR_Word Var_6098 = Var_5974;
          MR_Word Var_6099 = Var_5975;
          MR_Word Var_6100 = Var_5976;
          MR_Word Var_6101 = Var_5977;
          MR_Word Var_6102 = Var_5978;
          MR_Word Var_6103 = Var_5979;
          MR_Word Var_6104 = Var_5980;
          MR_Word Var_6105 = Var_5981;
          MR_Word Var_6106 = Var_5982;
          MR_Word Var_6107 = Var_5983;
          MR_Word Var_6108 = Var_5984;
          MR_Word Var_6109 = Var_5985;
          MR_Word Var_6110 = Var_5986;
          MR_Word Var_6111 = Var_5987;
          MR_Word Var_6112 = Var_5988;
          MR_Word Var_6113 = Var_5989;
          MR_Word Var_6114 = Var_5990;
          MR_Word Var_6115 = Var_5991;
          MR_Word Var_6116 = Var_5992;
          MR_Word Var_6117 = Var_5993;
          MR_Word Var_6118 = Var_5994;
          MR_Word Var_6119 = Var_5995;
          MR_Word Var_6120 = Var_5996;
          MR_Word Var_6121 = Var_5997;
          MR_Integer Var_6122 = Var_5998;
          MR_Integer Var_6123 = Var_5999;
          MR_Integer Var_6124 = Var_6000;
          MR_Integer Var_6125 = Var_6001;
          MR_Integer Var_6126 = Var_6002;
          MR_Integer Var_6127 = Var_6003;
          MR_Integer Var_6128 = Var_6004;
          MR_Integer Var_6129 = Var_6005;
          MR_Integer Var_6130 = Var_6006;
          MR_Integer Var_6131 = Var_6007;
          MR_Integer Var_6132 = Var_6008;
          MR_Integer Var_6133 = Var_6009;
          MR_Integer Var_6134 = Var_6010;
          MR_Integer Var_6135 = Var_6011;
          MR_Integer Var_6136 = Var_6012;
          MR_Integer Var_6137 = Var_6013;
          MR_Integer Var_6138 = Var_6014;
          MR_Integer Var_6139 = Var_6015;
          MR_Integer Var_6140 = Var_6016;
          MR_Integer Var_6141 = Var_6017;
          MR_Integer Var_6142 = Var_6018;
          MR_Integer Var_6143 = Var_6019;
          MR_Integer Var_6144 = Var_6020;
          MR_Integer Var_6145 = Var_6021;
          MR_Integer Var_6146 = Var_6022;
          MR_Integer Var_6147 = Var_6023;
          MR_Integer Var_6148 = Var_6024;
          MR_Integer Var_6149 = Var_6025;
          MR_Integer Var_6150 = Var_6026;
          MR_Integer Var_6151 = Var_6027;
          MR_Integer Var_6152 = Var_6028;
          MR_Integer Var_6153 = Var_6029;
          MR_Integer Var_6154 = Var_6030;
          MR_Integer Var_6155 = Var_6031;
          MR_Integer Var_6156 = Var_6032;
          MR_Integer Var_6157 = Var_6033;
          MR_Integer Var_6158 = Var_6034;
          MR_String Var_6159 = Var_6035;

          {
            STATE_VARIABLE_OptTuple_1157_1157 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 31)) | (((((MR_Unsigned) (Var_6037) << 30)) | (((((MR_Unsigned) (Var_6038) << 29)) | (((((MR_Unsigned) (Var_6039) << 28)) | (((((MR_Unsigned) (Var_6040) << 27)) | (((((MR_Unsigned) (Var_6041) << 26)) | (((((MR_Unsigned) (Var_6042) << 25)) | (((((MR_Unsigned) ((MR_Integer) 1) << 24)) | (((((MR_Unsigned) ((MR_Integer) 1) << 23)) | (((((MR_Unsigned) ((MR_Integer) 1) << 22)) | (((((MR_Unsigned) (Var_6046) << 21)) | (((((MR_Unsigned) (Var_6047) << 20)) | (((((MR_Unsigned) (Var_6048) << 19)) | (((((MR_Unsigned) (Var_6049) << 18)) | (((((MR_Unsigned) (Var_6050) << 17)) | (((((MR_Unsigned) (Var_6051) << 16)) | (((((MR_Unsigned) (Var_6052) << 15)) | (((((MR_Unsigned) (Var_6053) << 14)) | (((((MR_Unsigned) (Var_6054) << 13)) | (((((MR_Unsigned) (Var_6055) << 12)) | (((((MR_Unsigned) (Var_6056) << 11)) | (((((MR_Unsigned) (Var_6057) << 10)) | (((((MR_Unsigned) (Var_6058) << 9)) | (((((MR_Unsigned) (Var_6059) << 8)) | (((((MR_Unsigned) ((MR_Integer) 1) << 7)) | (((((MR_Unsigned) (Var_6061) << 6)) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((((MR_Unsigned) (Var_6063) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) (Var_6066) << 1)) | (MR_Unsigned) (Var_6067)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 1) = (MR_Box) (((((MR_Unsigned) (Var_6068) << 31)) | (((((MR_Unsigned) ((MR_Integer) 1) << 30)) | (((((MR_Unsigned) (Var_6070) << 29)) | (((((MR_Unsigned) ((MR_Integer) 1) << 28)) | (((((MR_Unsigned) (Var_6072) << 27)) | (((((MR_Unsigned) (Var_6073) << 26)) | (((((MR_Unsigned) (Var_6074) << 25)) | (((((MR_Unsigned) (Var_6075) << 24)) | (((((MR_Unsigned) (Var_6076) << 23)) | (((((MR_Unsigned) (Var_6077) << 22)) | (((((MR_Unsigned) (Var_6078) << 21)) | (((((MR_Unsigned) (Var_6079) << 20)) | (((((MR_Unsigned) (Var_6080) << 19)) | (((((MR_Unsigned) (Var_6081) << 18)) | (((((MR_Unsigned) (Var_6082) << 17)) | (((((MR_Unsigned) (Var_6083) << 16)) | (((((MR_Unsigned) (Var_6084) << 15)) | (((((MR_Unsigned) (Var_6085) << 14)) | (((((MR_Unsigned) (Var_6086) << 13)) | (((((MR_Unsigned) (Var_6087) << 12)) | (((((MR_Unsigned) (Var_6088) << 11)) | (((((MR_Unsigned) (Var_6089) << 10)) | (((((MR_Unsigned) (Var_6090) << 9)) | (((((MR_Unsigned) (Var_6091) << 8)) | (((((MR_Unsigned) (Var_6092) << 7)) | (((((MR_Unsigned) (Var_6093) << 6)) | (((((MR_Unsigned) (Var_6094) << 5)) | (((((MR_Unsigned) (Var_6095) << 4)) | (((((MR_Unsigned) (Var_6096) << 3)) | (((((MR_Unsigned) (Var_6097) << 2)) | (((((MR_Unsigned) (Var_6098) << 1)) | (MR_Unsigned) (Var_6099)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 2) = (MR_Box) (((((MR_Unsigned) (Var_6100) << 21)) | (((((MR_Unsigned) (Var_6101) << 20)) | (((((MR_Unsigned) (Var_6102) << 19)) | (((((MR_Unsigned) (Var_6103) << 18)) | (((((MR_Unsigned) (Var_6104) << 17)) | (((((MR_Unsigned) (Var_6105) << 16)) | (((((MR_Unsigned) (Var_6106) << 15)) | (((((MR_Unsigned) (Var_6107) << 14)) | (((((MR_Unsigned) (Var_6108) << 13)) | (((((MR_Unsigned) (Var_6109) << 12)) | (((((MR_Unsigned) (Var_6110) << 11)) | (((((MR_Unsigned) (Var_6111) << 10)) | (((((MR_Unsigned) (Var_6112) << 9)) | (((((MR_Unsigned) (Var_6113) << 8)) | (((((MR_Unsigned) (Var_6114) << 7)) | (((((MR_Unsigned) (Var_6115) << 6)) | (((((MR_Unsigned) (Var_6116) << 5)) | (((((MR_Unsigned) (Var_6117) << 4)) | (((((MR_Unsigned) (Var_6118) << 3)) | (((((MR_Unsigned) (Var_6119) << 2)) | (((((MR_Unsigned) (Var_6120) << 1)) | (MR_Unsigned) (Var_6121)))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 3) = ((MR_Box) (Var_6122));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 4) = ((MR_Box) (Var_6123));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 5) = ((MR_Box) (Var_6124));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 6) = ((MR_Box) (Var_6125));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 7) = ((MR_Box) (Var_6126));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 8) = ((MR_Box) (Var_6127));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 9) = ((MR_Box) (Var_6128));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 10) = ((MR_Box) (Var_6129));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 11) = ((MR_Box) (Var_6130));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 12) = ((MR_Box) (Var_6131));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 13) = ((MR_Box) (Var_6132));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 14) = ((MR_Box) (Var_6133));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 15) = ((MR_Box) (Var_6134));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 16) = ((MR_Box) (Var_6135));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 17) = ((MR_Box) (Var_6136));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 18) = ((MR_Box) (Var_6137));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 19) = ((MR_Box) (Var_6138));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 20) = ((MR_Box) (Var_6139));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 21) = ((MR_Box) (Var_6140));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 22) = ((MR_Box) (Var_6141));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 23) = ((MR_Box) (Var_6142));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 24) = ((MR_Box) (Var_6143));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 25) = ((MR_Box) (Var_6144));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 26) = ((MR_Box) (Var_6145));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 27) = ((MR_Box) (Var_6146));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 28) = ((MR_Box) (Var_6147));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 29) = ((MR_Box) (Var_6148));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 30) = ((MR_Box) (Var_6149));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 31) = ((MR_Box) (Var_6150));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 32) = ((MR_Box) (Var_6151));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 33) = ((MR_Box) (Var_6152));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 34) = ((MR_Box) (Var_6153));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 35) = ((MR_Box) (Var_6154));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 36) = ((MR_Box) (Var_6155));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 37) = ((MR_Box) (Var_6156));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 38) = ((MR_Box) (Var_6157));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 39) = ((MR_Box) (Var_6158));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, 40) = ((MR_Box) (Var_6159));
          }
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_OptTuple_1157_1157 = STATE_VARIABLE_OptTuple_1115_1115;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 247, (MR_Integer) 524, Var_511, STATE_VARIABLE_Globals_1119_1119, &STATE_VARIABLE_Globals_1162_1162);
    packed_word_34 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 0)));
    InlineBuiltins_133 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
    packed_word_35 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 1)));
    packed_word_36 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 2)));
    Var_6369 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 3))));
    Var_6370 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 4))));
    Var_6371 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 5))));
    Var_6372 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 6))));
    Var_6373 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 7))));
    Var_6374 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 8))));
    Var_6375 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 9))));
    Var_6376 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 10))));
    Var_6377 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 11))));
    Var_6378 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 12))));
    Var_6379 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 13))));
    Var_6380 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 14))));
    Var_6381 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 15))));
    Var_6382 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 16))));
    Var_6383 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 17))));
    Var_6384 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 18))));
    Var_6385 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 19))));
    Var_6386 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 20))));
    Var_6387 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 21))));
    Var_6388 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 22))));
    Var_6389 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 23))));
    Var_6390 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 24))));
    Var_6391 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 25))));
    Var_6392 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 26))));
    Var_6393 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 27))));
    Var_6394 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 28))));
    Var_6395 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 29))));
    Var_6396 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 30))));
    Var_6397 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 31))));
    Var_6398 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 32))));
    Var_6399 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 33))));
    Var_6400 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 34))));
    Var_6401 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 35))));
    Var_6402 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 36))));
    Var_6403 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 37))));
    Var_6404 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 38))));
    Var_6405 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 39))));
    Var_6406 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1157_1157, (MR_Integer) 40))));
    switch (InlineBuiltins_133) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_OptTuple_1164_1164 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 0) = (MR_Box) ((((packed_word_34 & (~((MR_Unsigned) 2097152U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 21))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 1) = (MR_Box) (packed_word_35);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 2) = (MR_Box) (packed_word_36);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 3) = ((MR_Box) (Var_6369));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 4) = ((MR_Box) (Var_6370));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 5) = ((MR_Box) (Var_6371));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 6) = ((MR_Box) (Var_6372));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 7) = ((MR_Box) (Var_6373));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 8) = ((MR_Box) (Var_6374));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 9) = ((MR_Box) (Var_6375));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 10) = ((MR_Box) (Var_6376));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 11) = ((MR_Box) (Var_6377));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 12) = ((MR_Box) (Var_6378));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 13) = ((MR_Box) (Var_6379));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 14) = ((MR_Box) (Var_6380));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 15) = ((MR_Box) (Var_6381));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 16) = ((MR_Box) (Var_6382));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 17) = ((MR_Box) (Var_6383));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 18) = ((MR_Box) (Var_6384));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 19) = ((MR_Box) (Var_6385));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 20) = ((MR_Box) (Var_6386));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 21) = ((MR_Box) (Var_6387));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 22) = ((MR_Box) (Var_6388));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 23) = ((MR_Box) (Var_6389));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 24) = ((MR_Box) (Var_6390));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 25) = ((MR_Box) (Var_6391));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 26) = ((MR_Box) (Var_6392));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 27) = ((MR_Box) (Var_6393));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 28) = ((MR_Box) (Var_6394));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 29) = ((MR_Box) (Var_6395));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 30) = ((MR_Box) (Var_6396));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 31) = ((MR_Box) (Var_6397));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 32) = ((MR_Box) (Var_6398));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 33) = ((MR_Box) (Var_6399));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 34) = ((MR_Box) (Var_6400));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 35) = ((MR_Box) (Var_6401));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 36) = ((MR_Box) (Var_6402));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 37) = ((MR_Box) (Var_6403));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 38) = ((MR_Box) (Var_6404));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 39) = ((MR_Box) (Var_6405));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, 40) = ((MR_Box) (Var_6406));
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_OptTuple_1164_1164 = STATE_VARIABLE_OptTuple_1157_1157;
        break;
    }
    switch (ProfileDeep_125) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word AllowInlining_134 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
          MR_Integer Var_6616 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 3))));
          MR_Integer Var_6617 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 4))));
          MR_Integer Var_6618 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 5))));
          MR_Integer Var_6619 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 6))));
          MR_Integer Var_6620 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 7))));
          MR_Integer Var_6621 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 8))));
          MR_Integer Var_6622 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 9))));
          MR_Integer Var_6623 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 10))));
          MR_Integer Var_6624 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 11))));
          MR_Integer Var_6625 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 12))));
          MR_Integer Var_6626 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 13))));
          MR_Integer Var_6627 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 14))));
          MR_Integer Var_6628 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 15))));
          MR_Integer Var_6629 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 16))));
          MR_Integer Var_6630 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 17))));
          MR_Integer Var_6631 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 18))));
          MR_Integer Var_6632 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 19))));
          MR_Integer Var_6633 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 20))));
          MR_Integer Var_6634 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 21))));
          MR_Integer Var_6635 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 22))));
          MR_Integer Var_6636 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 23))));
          MR_Integer Var_6637 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 24))));
          MR_Integer Var_6638 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 25))));
          MR_Integer Var_6639 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 26))));
          MR_Integer Var_6640 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 27))));
          MR_Integer Var_6641 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 28))));
          MR_Integer Var_6642 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 29))));
          MR_Integer Var_6643 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 30))));
          MR_Integer Var_6644 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 31))));
          MR_Integer Var_6645 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 32))));
          MR_Integer Var_6646 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 33))));
          MR_Integer Var_6647 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 34))));
          MR_Integer Var_6648 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 35))));
          MR_Integer Var_6649 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 36))));
          MR_Integer Var_6650 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 37))));
          MR_Integer Var_6651 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 38))));
          MR_Integer Var_6652 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 39))));
          MR_String Var_6653 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 40))));
          MR_Unsigned packed_word_37 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 0)));
          MR_Unsigned packed_word_38 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 1)));
          MR_Unsigned packed_word_39 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1164_1164, (MR_Integer) 2)));

          switch (AllowInlining_134) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_OptTuple_1166_1166 = STATE_VARIABLE_OptTuple_1164_1164;
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_OptTuple_1166_1166 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 0) = (MR_Box) ((((packed_word_37 & (~((MR_Unsigned) 2097152U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 21))));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 1) = (MR_Box) (packed_word_38);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 2) = (MR_Box) (packed_word_39);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 3) = ((MR_Box) (Var_6616));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 4) = ((MR_Box) (Var_6617));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 5) = ((MR_Box) (Var_6618));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 6) = ((MR_Box) (Var_6619));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 7) = ((MR_Box) (Var_6620));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 8) = ((MR_Box) (Var_6621));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 9) = ((MR_Box) (Var_6622));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 10) = ((MR_Box) (Var_6623));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 11) = ((MR_Box) (Var_6624));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 12) = ((MR_Box) (Var_6625));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 13) = ((MR_Box) (Var_6626));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 14) = ((MR_Box) (Var_6627));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 15) = ((MR_Box) (Var_6628));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 16) = ((MR_Box) (Var_6629));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 17) = ((MR_Box) (Var_6630));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 18) = ((MR_Box) (Var_6631));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 19) = ((MR_Box) (Var_6632));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 20) = ((MR_Box) (Var_6633));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 21) = ((MR_Box) (Var_6634));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 22) = ((MR_Box) (Var_6635));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 23) = ((MR_Box) (Var_6636));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 24) = ((MR_Box) (Var_6637));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 25) = ((MR_Box) (Var_6638));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 26) = ((MR_Box) (Var_6639));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 27) = ((MR_Box) (Var_6640));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 28) = ((MR_Box) (Var_6641));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 29) = ((MR_Box) (Var_6642));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 30) = ((MR_Box) (Var_6643));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 31) = ((MR_Box) (Var_6644));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 32) = ((MR_Box) (Var_6645));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 33) = ((MR_Box) (Var_6646));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 34) = ((MR_Box) (Var_6647));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 35) = ((MR_Box) (Var_6648));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 36) = ((MR_Box) (Var_6649));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 37) = ((MR_Box) (Var_6650));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 38) = ((MR_Box) (Var_6651));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 39) = ((MR_Box) (Var_6652));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, 40) = ((MR_Box) (Var_6653));
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_1166_1166 = STATE_VARIABLE_OptTuple_1164_1164;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1162_1162, (MR_Integer) 196, &ReorderConj_135);
    switch (ReorderConj_135) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_6778 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
          MR_Word Var_6779 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
          MR_Word Var_6780 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
          MR_Word Var_6781 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
          MR_Word Var_6782 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
          MR_Word Var_6783 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
          MR_Word Var_6784 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
          MR_Word Var_6787 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
          MR_Word Var_6788 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
          MR_Word Var_6789 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
          MR_Word Var_6790 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
          MR_Word Var_6791 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
          MR_Word Var_6792 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
          MR_Word Var_6793 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
          MR_Word Var_6794 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
          MR_Word Var_6795 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
          MR_Word Var_6796 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
          MR_Word Var_6797 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
          MR_Word Var_6798 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
          MR_Word Var_6799 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
          MR_Word Var_6800 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
          MR_Word Var_6801 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
          MR_Word Var_6802 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
          MR_Word Var_6803 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
          MR_Word Var_6804 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
          MR_Word Var_6805 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
          MR_Word Var_6806 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
          MR_Word Var_6807 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
          MR_Word Var_6808 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_6809 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_6810 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
          MR_Word Var_6811 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 30)) & (MR_Integer) 1);
          MR_Word Var_6812 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
          MR_Word Var_6814 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
          MR_Word Var_6815 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
          MR_Word Var_6816 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
          MR_Word Var_6817 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
          MR_Word Var_6818 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
          MR_Word Var_6819 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
          MR_Word Var_6820 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
          MR_Word Var_6821 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
          MR_Word Var_6822 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 19)) & (MR_Integer) 1);
          MR_Word Var_6823 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 18)) & (MR_Integer) 1);
          MR_Word Var_6824 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 17)) & (MR_Integer) 1);
          MR_Word Var_6825 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 16)) & (MR_Integer) 1);
          MR_Word Var_6826 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 15)) & (MR_Integer) 1);
          MR_Word Var_6827 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
          MR_Word Var_6828 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
          MR_Word Var_6829 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
          MR_Word Var_6830 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
          MR_Word Var_6831 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
          MR_Word Var_6832 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
          MR_Word Var_6833 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
          MR_Word Var_6834 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
          MR_Word Var_6835 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
          MR_Word Var_6836 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
          MR_Word Var_6837 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
          MR_Word Var_6838 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
          MR_Word Var_6839 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          MR_Word Var_6840 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_6841 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Var_6842 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
          MR_Word Var_6843 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
          MR_Word Var_6844 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
          MR_Word Var_6845 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 18)) & (MR_Integer) 1);
          MR_Word Var_6846 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
          MR_Word Var_6847 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
          MR_Word Var_6848 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
          MR_Word Var_6849 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
          MR_Word Var_6850 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
          MR_Word Var_6851 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
          MR_Word Var_6852 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
          MR_Word Var_6853 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
          MR_Word Var_6854 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
          MR_Word Var_6855 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
          MR_Word Var_6856 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
          MR_Word Var_6857 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
          MR_Word Var_6858 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
          MR_Word Var_6859 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
          MR_Word Var_6860 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          MR_Word Var_6861 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
          MR_Word Var_6862 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_6863 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Integer Var_6864 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 3))));
          MR_Integer Var_6865 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 4))));
          MR_Integer Var_6866 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 5))));
          MR_Integer Var_6867 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 6))));
          MR_Integer Var_6868 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 7))));
          MR_Integer Var_6869 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 8))));
          MR_Integer Var_6870 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 9))));
          MR_Integer Var_6871 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 10))));
          MR_Integer Var_6872 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 11))));
          MR_Integer Var_6873 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 12))));
          MR_Integer Var_6874 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 13))));
          MR_Integer Var_6875 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 14))));
          MR_Integer Var_6876 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 15))));
          MR_Integer Var_6877 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 16))));
          MR_Integer Var_6878 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 17))));
          MR_Integer Var_6879 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 18))));
          MR_Integer Var_6880 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 19))));
          MR_Integer Var_6881 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 20))));
          MR_Integer Var_6882 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 21))));
          MR_Integer Var_6883 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 22))));
          MR_Integer Var_6884 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 23))));
          MR_Integer Var_6885 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 24))));
          MR_Integer Var_6886 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 25))));
          MR_Integer Var_6887 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 26))));
          MR_Integer Var_6888 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 27))));
          MR_Integer Var_6889 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 28))));
          MR_Integer Var_6890 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 29))));
          MR_Integer Var_6891 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 30))));
          MR_Integer Var_6892 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 31))));
          MR_Integer Var_6893 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 32))));
          MR_Integer Var_6894 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 33))));
          MR_Integer Var_6895 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 34))));
          MR_Integer Var_6896 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 35))));
          MR_Integer Var_6897 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 36))));
          MR_Integer Var_6898 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 37))));
          MR_Integer Var_6899 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 38))));
          MR_Integer Var_6900 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 39))));
          MR_String Var_6901 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1166_1166, (MR_Integer) 40))));
          MR_Word Var_6902 = Var_6778;
          MR_Word Var_6903 = Var_6779;
          MR_Word Var_6904 = Var_6780;
          MR_Word Var_6905 = Var_6781;
          MR_Word Var_6906 = Var_6782;
          MR_Word Var_6907 = Var_6783;
          MR_Word Var_6908 = Var_6784;
          MR_Word Var_6911 = Var_6787;
          MR_Word Var_6912 = Var_6788;
          MR_Word Var_6913 = Var_6789;
          MR_Word Var_6914 = Var_6790;
          MR_Word Var_6915 = Var_6791;
          MR_Word Var_6916 = Var_6792;
          MR_Word Var_6917 = Var_6793;
          MR_Word Var_6918 = Var_6794;
          MR_Word Var_6919 = Var_6795;
          MR_Word Var_6920 = Var_6796;
          MR_Word Var_6921 = Var_6797;
          MR_Word Var_6922 = Var_6798;
          MR_Word Var_6923 = Var_6799;
          MR_Word Var_6924 = Var_6800;
          MR_Word Var_6925 = Var_6801;
          MR_Word Var_6926 = Var_6802;
          MR_Word Var_6927 = Var_6803;
          MR_Word Var_6928 = Var_6804;
          MR_Word Var_6929 = Var_6805;
          MR_Word Var_6930 = Var_6806;
          MR_Word Var_6931 = Var_6807;
          MR_Word Var_6932 = Var_6808;
          MR_Word Var_6933 = Var_6809;
          MR_Word Var_6934 = Var_6810;
          MR_Word Var_6935 = Var_6811;
          MR_Word Var_6936 = Var_6812;
          MR_Word Var_6938 = Var_6814;
          MR_Word Var_6939 = Var_6815;
          MR_Word Var_6940 = Var_6816;
          MR_Word Var_6941 = Var_6817;
          MR_Word Var_6942 = Var_6818;
          MR_Word Var_6943 = Var_6819;
          MR_Word Var_6944 = Var_6820;
          MR_Word Var_6945 = Var_6821;
          MR_Word Var_6946 = Var_6822;
          MR_Word Var_6947 = Var_6823;
          MR_Word Var_6948 = Var_6824;
          MR_Word Var_6949 = Var_6825;
          MR_Word Var_6950 = Var_6826;
          MR_Word Var_6951 = Var_6827;
          MR_Word Var_6952 = Var_6828;
          MR_Word Var_6953 = Var_6829;
          MR_Word Var_6954 = Var_6830;
          MR_Word Var_6955 = Var_6831;
          MR_Word Var_6956 = Var_6832;
          MR_Word Var_6957 = Var_6833;
          MR_Word Var_6958 = Var_6834;
          MR_Word Var_6959 = Var_6835;
          MR_Word Var_6960 = Var_6836;
          MR_Word Var_6961 = Var_6837;
          MR_Word Var_6962 = Var_6838;
          MR_Word Var_6963 = Var_6839;
          MR_Word Var_6964 = Var_6840;
          MR_Word Var_6965 = Var_6841;
          MR_Word Var_6966 = Var_6842;
          MR_Word Var_6967 = Var_6843;
          MR_Word Var_6968 = Var_6844;
          MR_Word Var_6969 = Var_6845;
          MR_Word Var_6970 = Var_6846;
          MR_Word Var_6971 = Var_6847;
          MR_Word Var_6972 = Var_6848;
          MR_Word Var_6973 = Var_6849;
          MR_Word Var_6974 = Var_6850;
          MR_Word Var_6975 = Var_6851;
          MR_Word Var_6976 = Var_6852;
          MR_Word Var_6977 = Var_6853;
          MR_Word Var_6978 = Var_6854;
          MR_Word Var_6979 = Var_6855;
          MR_Word Var_6980 = Var_6856;
          MR_Word Var_6981 = Var_6857;
          MR_Word Var_6982 = Var_6858;
          MR_Word Var_6983 = Var_6859;
          MR_Word Var_6984 = Var_6860;
          MR_Word Var_6985 = Var_6861;
          MR_Word Var_6986 = Var_6862;
          MR_Word Var_6987 = Var_6863;
          MR_Integer Var_6988 = Var_6864;
          MR_Integer Var_6989 = Var_6865;
          MR_Integer Var_6990 = Var_6866;
          MR_Integer Var_6991 = Var_6867;
          MR_Integer Var_6992 = Var_6868;
          MR_Integer Var_6993 = Var_6869;
          MR_Integer Var_6994 = Var_6870;
          MR_Integer Var_6995 = Var_6871;
          MR_Integer Var_6996 = Var_6872;
          MR_Integer Var_6997 = Var_6873;
          MR_Integer Var_6998 = Var_6874;
          MR_Integer Var_6999 = Var_6875;
          MR_Integer Var_7000 = Var_6876;
          MR_Integer Var_7001 = Var_6877;
          MR_Integer Var_7002 = Var_6878;
          MR_Integer Var_7003 = Var_6879;
          MR_Integer Var_7004 = Var_6880;
          MR_Integer Var_7005 = Var_6881;
          MR_Integer Var_7006 = Var_6882;
          MR_Integer Var_7007 = Var_6883;
          MR_Integer Var_7008 = Var_6884;
          MR_Integer Var_7009 = Var_6885;
          MR_Integer Var_7010 = Var_6886;
          MR_Integer Var_7011 = Var_6887;
          MR_Integer Var_7012 = Var_6888;
          MR_Integer Var_7013 = Var_6889;
          MR_Integer Var_7014 = Var_6890;
          MR_Integer Var_7015 = Var_6891;
          MR_Integer Var_7016 = Var_6892;
          MR_Integer Var_7017 = Var_6893;
          MR_Integer Var_7018 = Var_6894;
          MR_Integer Var_7019 = Var_6895;
          MR_Integer Var_7020 = Var_6896;
          MR_Integer Var_7021 = Var_6897;
          MR_Integer Var_7022 = Var_6898;
          MR_Integer Var_7023 = Var_6899;
          MR_Integer Var_7024 = Var_6900;
          MR_String Var_7025 = Var_6901;

          {
            STATE_VARIABLE_OptTuple_1173_1173 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 0) = (MR_Box) (((((MR_Unsigned) (Var_6902) << 31)) | (((((MR_Unsigned) (Var_6903) << 30)) | (((((MR_Unsigned) (Var_6904) << 29)) | (((((MR_Unsigned) (Var_6905) << 28)) | (((((MR_Unsigned) (Var_6906) << 27)) | (((((MR_Unsigned) (Var_6907) << 26)) | (((((MR_Unsigned) (Var_6908) << 25)) | (((((MR_Unsigned) ((MR_Integer) 1) << 24)) | (((((MR_Unsigned) ((MR_Integer) 1) << 23)) | (((((MR_Unsigned) (Var_6911) << 22)) | (((((MR_Unsigned) (Var_6912) << 21)) | (((((MR_Unsigned) (Var_6913) << 20)) | (((((MR_Unsigned) (Var_6914) << 19)) | (((((MR_Unsigned) (Var_6915) << 18)) | (((((MR_Unsigned) (Var_6916) << 17)) | (((((MR_Unsigned) (Var_6917) << 16)) | (((((MR_Unsigned) (Var_6918) << 15)) | (((((MR_Unsigned) (Var_6919) << 14)) | (((((MR_Unsigned) (Var_6920) << 13)) | (((((MR_Unsigned) (Var_6921) << 12)) | (((((MR_Unsigned) (Var_6922) << 11)) | (((((MR_Unsigned) (Var_6923) << 10)) | (((((MR_Unsigned) (Var_6924) << 9)) | (((((MR_Unsigned) (Var_6925) << 8)) | (((((MR_Unsigned) (Var_6926) << 7)) | (((((MR_Unsigned) (Var_6927) << 6)) | (((((MR_Unsigned) (Var_6928) << 5)) | (((((MR_Unsigned) (Var_6929) << 4)) | (((((MR_Unsigned) (Var_6930) << 3)) | (((((MR_Unsigned) (Var_6931) << 2)) | (((((MR_Unsigned) (Var_6932) << 1)) | (MR_Unsigned) (Var_6933)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 1) = (MR_Box) (((((MR_Unsigned) (Var_6934) << 31)) | (((((MR_Unsigned) (Var_6935) << 30)) | (((((MR_Unsigned) (Var_6936) << 29)) | (((((MR_Unsigned) ((MR_Integer) 1) << 28)) | (((((MR_Unsigned) (Var_6938) << 27)) | (((((MR_Unsigned) (Var_6939) << 26)) | (((((MR_Unsigned) (Var_6940) << 25)) | (((((MR_Unsigned) (Var_6941) << 24)) | (((((MR_Unsigned) (Var_6942) << 23)) | (((((MR_Unsigned) (Var_6943) << 22)) | (((((MR_Unsigned) (Var_6944) << 21)) | (((((MR_Unsigned) (Var_6945) << 20)) | (((((MR_Unsigned) (Var_6946) << 19)) | (((((MR_Unsigned) (Var_6947) << 18)) | (((((MR_Unsigned) (Var_6948) << 17)) | (((((MR_Unsigned) (Var_6949) << 16)) | (((((MR_Unsigned) (Var_6950) << 15)) | (((((MR_Unsigned) (Var_6951) << 14)) | (((((MR_Unsigned) (Var_6952) << 13)) | (((((MR_Unsigned) (Var_6953) << 12)) | (((((MR_Unsigned) (Var_6954) << 11)) | (((((MR_Unsigned) (Var_6955) << 10)) | (((((MR_Unsigned) (Var_6956) << 9)) | (((((MR_Unsigned) (Var_6957) << 8)) | (((((MR_Unsigned) (Var_6958) << 7)) | (((((MR_Unsigned) (Var_6959) << 6)) | (((((MR_Unsigned) (Var_6960) << 5)) | (((((MR_Unsigned) (Var_6961) << 4)) | (((((MR_Unsigned) (Var_6962) << 3)) | (((((MR_Unsigned) (Var_6963) << 2)) | (((((MR_Unsigned) (Var_6964) << 1)) | (MR_Unsigned) (Var_6965)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 2) = (MR_Box) (((((MR_Unsigned) (Var_6966) << 21)) | (((((MR_Unsigned) (Var_6967) << 20)) | (((((MR_Unsigned) (Var_6968) << 19)) | (((((MR_Unsigned) (Var_6969) << 18)) | (((((MR_Unsigned) (Var_6970) << 17)) | (((((MR_Unsigned) (Var_6971) << 16)) | (((((MR_Unsigned) (Var_6972) << 15)) | (((((MR_Unsigned) (Var_6973) << 14)) | (((((MR_Unsigned) (Var_6974) << 13)) | (((((MR_Unsigned) (Var_6975) << 12)) | (((((MR_Unsigned) (Var_6976) << 11)) | (((((MR_Unsigned) (Var_6977) << 10)) | (((((MR_Unsigned) (Var_6978) << 9)) | (((((MR_Unsigned) (Var_6979) << 8)) | (((((MR_Unsigned) (Var_6980) << 7)) | (((((MR_Unsigned) (Var_6981) << 6)) | (((((MR_Unsigned) (Var_6982) << 5)) | (((((MR_Unsigned) (Var_6983) << 4)) | (((((MR_Unsigned) (Var_6984) << 3)) | (((((MR_Unsigned) (Var_6985) << 2)) | (((((MR_Unsigned) (Var_6986) << 1)) | (MR_Unsigned) (Var_6987)))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 3) = ((MR_Box) (Var_6988));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 4) = ((MR_Box) (Var_6989));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 5) = ((MR_Box) (Var_6990));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 6) = ((MR_Box) (Var_6991));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 7) = ((MR_Box) (Var_6992));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 8) = ((MR_Box) (Var_6993));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 9) = ((MR_Box) (Var_6994));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 10) = ((MR_Box) (Var_6995));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 11) = ((MR_Box) (Var_6996));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 12) = ((MR_Box) (Var_6997));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 13) = ((MR_Box) (Var_6998));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 14) = ((MR_Box) (Var_6999));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 15) = ((MR_Box) (Var_7000));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 16) = ((MR_Box) (Var_7001));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 17) = ((MR_Box) (Var_7002));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 18) = ((MR_Box) (Var_7003));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 19) = ((MR_Box) (Var_7004));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 20) = ((MR_Box) (Var_7005));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 21) = ((MR_Box) (Var_7006));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 22) = ((MR_Box) (Var_7007));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 23) = ((MR_Box) (Var_7008));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 24) = ((MR_Box) (Var_7009));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 25) = ((MR_Box) (Var_7010));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 26) = ((MR_Box) (Var_7011));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 27) = ((MR_Box) (Var_7012));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 28) = ((MR_Box) (Var_7013));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 29) = ((MR_Box) (Var_7014));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 30) = ((MR_Box) (Var_7015));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 31) = ((MR_Box) (Var_7016));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 32) = ((MR_Box) (Var_7017));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 33) = ((MR_Box) (Var_7018));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 34) = ((MR_Box) (Var_7019));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 35) = ((MR_Box) (Var_7020));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 36) = ((MR_Box) (Var_7021));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 37) = ((MR_Box) (Var_7022));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 38) = ((MR_Box) (Var_7023));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 39) = ((MR_Box) (Var_7024));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, 40) = ((MR_Box) (Var_7025));
          }
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_1173_1173 = STATE_VARIABLE_OptTuple_1166_1166;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 297, (MR_Integer) 300, Var_370, STATE_VARIABLE_Globals_1162_1162, &STATE_VARIABLE_Globals_1178_1178);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 301, (MR_Integer) 300, Var_370, STATE_VARIABLE_Globals_1178_1178, &STATE_VARIABLE_Globals_1183_1183);
    switch (GC_Method_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_Globals_1187_1187;
          MR_Word STATE_VARIABLE_Globals_1191_1191;
          MR_Word STATE_VARIABLE_OptTuple_1195_1195;
          MR_Word STATE_VARIABLE_Globals_1199_1199;
          MR_Word STATE_VARIABLE_OptTuple_1201_1201;
          MR_Word STATE_VARIABLE_Globals_1205_1205;
          MR_Integer Var_7236;
          MR_Integer Var_7237;
          MR_Integer Var_7238;
          MR_Integer Var_7239;
          MR_Integer Var_7240;
          MR_Integer Var_7241;
          MR_Integer Var_7242;
          MR_Integer Var_7243;
          MR_Integer Var_7244;
          MR_Integer Var_7245;
          MR_Integer Var_7246;
          MR_Integer Var_7247;
          MR_Integer Var_7248;
          MR_Integer Var_7249;
          MR_Integer Var_7250;
          MR_Integer Var_7251;
          MR_Integer Var_7252;
          MR_Integer Var_7253;
          MR_Integer Var_7254;
          MR_Integer Var_7255;
          MR_Integer Var_7256;
          MR_Integer Var_7257;
          MR_Integer Var_7258;
          MR_Integer Var_7259;
          MR_Integer Var_7260;
          MR_Integer Var_7261;
          MR_Integer Var_7262;
          MR_Integer Var_7263;
          MR_Integer Var_7264;
          MR_Integer Var_7265;
          MR_Integer Var_7266;
          MR_Integer Var_7267;
          MR_Integer Var_7268;
          MR_Integer Var_7269;
          MR_Integer Var_7270;
          MR_Integer Var_7271;
          MR_Integer Var_7272;
          MR_String Var_7273;
          MR_Word Var_7522;
          MR_Word Var_7523;
          MR_Word Var_7524;
          MR_Word Var_7525;
          MR_Word Var_7526;
          MR_Word Var_7527;
          MR_Word Var_7528;
          MR_Word Var_7529;
          MR_Word Var_7530;
          MR_Word Var_7531;
          MR_Word Var_7532;
          MR_Word Var_7533;
          MR_Word Var_7534;
          MR_Word Var_7535;
          MR_Word Var_7536;
          MR_Word Var_7537;
          MR_Word Var_7538;
          MR_Word Var_7539;
          MR_Word Var_7540;
          MR_Word Var_7541;
          MR_Word Var_7542;
          MR_Word Var_7543;
          MR_Word Var_7544;
          MR_Word Var_7545;
          MR_Word Var_7546;
          MR_Word Var_7547;
          MR_Word Var_7548;
          MR_Word Var_7549;
          MR_Word Var_7552;
          MR_Word Var_7553;
          MR_Word Var_7554;
          MR_Word Var_7556;
          MR_Word Var_7557;
          MR_Word Var_7558;
          MR_Word Var_7559;
          MR_Word Var_7560;
          MR_Word Var_7561;
          MR_Word Var_7562;
          MR_Word Var_7563;
          MR_Word Var_7564;
          MR_Word Var_7565;
          MR_Word Var_7566;
          MR_Word Var_7567;
          MR_Word Var_7568;
          MR_Word Var_7569;
          MR_Word Var_7570;
          MR_Word Var_7571;
          MR_Word Var_7572;
          MR_Word Var_7573;
          MR_Word Var_7574;
          MR_Word Var_7575;
          MR_Word Var_7576;
          MR_Word Var_7577;
          MR_Word Var_7578;
          MR_Word Var_7579;
          MR_Word Var_7580;
          MR_Word Var_7581;
          MR_Word Var_7582;
          MR_Word Var_7583;
          MR_Word Var_7584;
          MR_Word Var_7585;
          MR_Word Var_7586;
          MR_Word Var_7587;
          MR_Word Var_7588;
          MR_Word Var_7589;
          MR_Word Var_7590;
          MR_Word Var_7591;
          MR_Word Var_7592;
          MR_Word Var_7593;
          MR_Word Var_7594;
          MR_Word Var_7595;
          MR_Word Var_7596;
          MR_Word Var_7597;
          MR_Word Var_7598;
          MR_Word Var_7599;
          MR_Word Var_7600;
          MR_Word Var_7601;
          MR_Word Var_7602;
          MR_Word Var_7603;
          MR_Word Var_7604;
          MR_Word Var_7605;
          MR_Word Var_7606;
          MR_Word Var_7607;
          MR_Integer Var_7608;
          MR_Integer Var_7609;
          MR_Integer Var_7610;
          MR_Integer Var_7611;
          MR_Integer Var_7612;
          MR_Integer Var_7613;
          MR_Integer Var_7614;
          MR_Integer Var_7615;
          MR_Integer Var_7616;
          MR_Integer Var_7617;
          MR_Integer Var_7618;
          MR_Integer Var_7619;
          MR_Integer Var_7620;
          MR_Integer Var_7621;
          MR_Integer Var_7622;
          MR_Integer Var_7623;
          MR_Integer Var_7624;
          MR_Integer Var_7625;
          MR_Integer Var_7626;
          MR_Integer Var_7627;
          MR_Integer Var_7628;
          MR_Integer Var_7629;
          MR_Integer Var_7630;
          MR_Integer Var_7631;
          MR_Integer Var_7632;
          MR_Integer Var_7633;
          MR_Integer Var_7634;
          MR_Integer Var_7635;
          MR_Integer Var_7636;
          MR_Integer Var_7637;
          MR_Integer Var_7638;
          MR_Integer Var_7639;
          MR_Integer Var_7640;
          MR_Integer Var_7641;
          MR_Integer Var_7642;
          MR_Integer Var_7643;
          MR_Integer Var_7644;
          MR_String Var_7645;
          MR_Word Var_7646;
          MR_Word Var_7647;
          MR_Word Var_7648;
          MR_Word Var_7649;
          MR_Word Var_7650;
          MR_Word Var_7651;
          MR_Word Var_7652;
          MR_Word Var_7653;
          MR_Word Var_7654;
          MR_Word Var_7655;
          MR_Word Var_7656;
          MR_Word Var_7657;
          MR_Word Var_7658;
          MR_Word Var_7659;
          MR_Word Var_7660;
          MR_Word Var_7661;
          MR_Word Var_7662;
          MR_Word Var_7663;
          MR_Word Var_7664;
          MR_Word Var_7665;
          MR_Word Var_7666;
          MR_Word Var_7667;
          MR_Word Var_7668;
          MR_Word Var_7669;
          MR_Word Var_7670;
          MR_Word Var_7671;
          MR_Word Var_7672;
          MR_Word Var_7673;
          MR_Word Var_7676;
          MR_Word Var_7677;
          MR_Word Var_7678;
          MR_Word Var_7680;
          MR_Word Var_7681;
          MR_Word Var_7682;
          MR_Word Var_7683;
          MR_Word Var_7684;
          MR_Word Var_7685;
          MR_Word Var_7686;
          MR_Word Var_7687;
          MR_Word Var_7688;
          MR_Word Var_7689;
          MR_Word Var_7690;
          MR_Word Var_7691;
          MR_Word Var_7692;
          MR_Word Var_7693;
          MR_Word Var_7694;
          MR_Word Var_7695;
          MR_Word Var_7696;
          MR_Word Var_7697;
          MR_Word Var_7698;
          MR_Word Var_7699;
          MR_Word Var_7700;
          MR_Word Var_7701;
          MR_Word Var_7702;
          MR_Word Var_7703;
          MR_Word Var_7704;
          MR_Word Var_7705;
          MR_Word Var_7706;
          MR_Word Var_7707;
          MR_Word Var_7708;
          MR_Word Var_7709;
          MR_Word Var_7710;
          MR_Word Var_7711;
          MR_Word Var_7712;
          MR_Word Var_7713;
          MR_Word Var_7714;
          MR_Word Var_7715;
          MR_Word Var_7716;
          MR_Word Var_7717;
          MR_Word Var_7718;
          MR_Word Var_7719;
          MR_Word Var_7720;
          MR_Word Var_7721;
          MR_Word Var_7722;
          MR_Word Var_7723;
          MR_Word Var_7724;
          MR_Word Var_7725;
          MR_Word Var_7726;
          MR_Word Var_7727;
          MR_Word Var_7728;
          MR_Word Var_7729;
          MR_Word Var_7730;
          MR_Word Var_7731;
          MR_Integer Var_7732;
          MR_Integer Var_7733;
          MR_Integer Var_7734;
          MR_Integer Var_7735;
          MR_Integer Var_7736;
          MR_Integer Var_7737;
          MR_Integer Var_7738;
          MR_Integer Var_7739;
          MR_Integer Var_7740;
          MR_Integer Var_7741;
          MR_Integer Var_7742;
          MR_Integer Var_7743;
          MR_Integer Var_7744;
          MR_Integer Var_7745;
          MR_Integer Var_7746;
          MR_Integer Var_7747;
          MR_Integer Var_7748;
          MR_Integer Var_7749;
          MR_Integer Var_7750;
          MR_Integer Var_7751;
          MR_Integer Var_7752;
          MR_Integer Var_7753;
          MR_Integer Var_7754;
          MR_Integer Var_7755;
          MR_Integer Var_7756;
          MR_Integer Var_7757;
          MR_Integer Var_7758;
          MR_Integer Var_7759;
          MR_Integer Var_7760;
          MR_Integer Var_7761;
          MR_Integer Var_7762;
          MR_Integer Var_7763;
          MR_Integer Var_7764;
          MR_Integer Var_7765;
          MR_Integer Var_7766;
          MR_Integer Var_7767;
          MR_Integer Var_7768;
          MR_String Var_7769;
          MR_Unsigned packed_word_43;
          MR_Unsigned packed_word_44;
          MR_Unsigned packed_word_45;
          MR_Integer Var_7484;
          MR_Integer Var_7485;
          MR_Integer Var_7486;
          MR_Integer Var_7487;
          MR_Integer Var_7488;
          MR_Integer Var_7489;
          MR_Integer Var_7490;
          MR_Integer Var_7491;
          MR_Integer Var_7492;
          MR_Integer Var_7493;
          MR_Integer Var_7494;
          MR_Integer Var_7495;
          MR_Integer Var_7496;
          MR_Integer Var_7497;
          MR_Integer Var_7498;
          MR_Integer Var_7499;
          MR_Integer Var_7500;
          MR_Integer Var_7501;
          MR_Integer Var_7502;
          MR_Integer Var_7503;
          MR_Integer Var_7504;
          MR_Integer Var_7505;
          MR_Integer Var_7506;
          MR_Integer Var_7507;
          MR_Integer Var_7508;
          MR_Integer Var_7509;
          MR_Integer Var_7510;
          MR_Integer Var_7511;
          MR_Integer Var_7512;
          MR_Integer Var_7513;
          MR_Integer Var_7514;
          MR_Integer Var_7515;
          MR_Integer Var_7516;
          MR_Integer Var_7517;
          MR_Integer Var_7518;
          MR_Integer Var_7519;
          MR_Integer Var_7520;
          MR_String Var_7521;
          MR_Unsigned packed_word_46;
          MR_Unsigned packed_word_47;
          MR_Unsigned packed_word_48;

          libs__globals__set_option_4_p_0((MR_Integer) 299, Var_370, STATE_VARIABLE_Globals_1183_1183, &STATE_VARIABLE_Globals_1187_1187);
          libs__globals__set_option_4_p_0((MR_Integer) 302, Var_370, STATE_VARIABLE_Globals_1187_1187, &STATE_VARIABLE_Globals_1191_1191);
          packed_word_43 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 0)));
          packed_word_44 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 1)));
          packed_word_45 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 2)));
          Var_7236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 3))));
          Var_7237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 4))));
          Var_7238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 5))));
          Var_7239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 6))));
          Var_7240 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 7))));
          Var_7241 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 8))));
          Var_7242 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 9))));
          Var_7243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 10))));
          Var_7244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 11))));
          Var_7245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 12))));
          Var_7246 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 13))));
          Var_7247 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 14))));
          Var_7248 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 15))));
          Var_7249 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 16))));
          Var_7250 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 17))));
          Var_7251 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 18))));
          Var_7252 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 19))));
          Var_7253 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 20))));
          Var_7254 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 21))));
          Var_7255 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 22))));
          Var_7256 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 23))));
          Var_7257 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 24))));
          Var_7258 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 25))));
          Var_7259 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 26))));
          Var_7260 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 27))));
          Var_7261 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 28))));
          Var_7262 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 29))));
          Var_7263 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 30))));
          Var_7264 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 31))));
          Var_7265 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 32))));
          Var_7266 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 33))));
          Var_7267 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 34))));
          Var_7268 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 35))));
          Var_7269 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 36))));
          Var_7270 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 37))));
          Var_7271 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 38))));
          Var_7272 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 39))));
          Var_7273 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1173_1173, (MR_Integer) 40))));
          {
            STATE_VARIABLE_OptTuple_1195_1195 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 0) = (MR_Box) (packed_word_43);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 1) = (MR_Box) ((((packed_word_44 & (~((MR_Unsigned) 128U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 7))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 2) = (MR_Box) ((((packed_word_45 & (~((MR_Unsigned) 512U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 9))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 3) = ((MR_Box) (Var_7236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 4) = ((MR_Box) (Var_7237));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 5) = ((MR_Box) (Var_7238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 6) = ((MR_Box) (Var_7239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 7) = ((MR_Box) (Var_7240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 8) = ((MR_Box) (Var_7241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 9) = ((MR_Box) (Var_7242));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 10) = ((MR_Box) (Var_7243));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 11) = ((MR_Box) (Var_7244));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 12) = ((MR_Box) (Var_7245));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 13) = ((MR_Box) (Var_7246));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 14) = ((MR_Box) (Var_7247));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 15) = ((MR_Box) (Var_7248));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 16) = ((MR_Box) (Var_7249));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 17) = ((MR_Box) (Var_7250));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 18) = ((MR_Box) (Var_7251));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 19) = ((MR_Box) (Var_7252));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 20) = ((MR_Box) (Var_7253));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 21) = ((MR_Box) (Var_7254));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 22) = ((MR_Box) (Var_7255));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 23) = ((MR_Box) (Var_7256));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 24) = ((MR_Box) (Var_7257));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 25) = ((MR_Box) (Var_7258));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 26) = ((MR_Box) (Var_7259));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 27) = ((MR_Box) (Var_7260));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 28) = ((MR_Box) (Var_7261));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 29) = ((MR_Box) (Var_7262));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 30) = ((MR_Box) (Var_7263));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 31) = ((MR_Box) (Var_7264));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 32) = ((MR_Box) (Var_7265));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 33) = ((MR_Box) (Var_7266));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 34) = ((MR_Box) (Var_7267));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 35) = ((MR_Box) (Var_7268));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 36) = ((MR_Box) (Var_7269));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 37) = ((MR_Box) (Var_7270));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 38) = ((MR_Box) (Var_7271));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 39) = ((MR_Box) (Var_7272));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, 40) = ((MR_Box) (Var_7273));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 352, Var_511, STATE_VARIABLE_Globals_1191_1191, &STATE_VARIABLE_Globals_1199_1199);
          packed_word_46 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 0)));
          packed_word_47 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 1)));
          packed_word_48 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 2)));
          Var_7484 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 3))));
          Var_7485 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 4))));
          Var_7486 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 5))));
          Var_7487 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 6))));
          Var_7488 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 7))));
          Var_7489 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 8))));
          Var_7490 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 9))));
          Var_7491 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 10))));
          Var_7492 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 11))));
          Var_7493 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 12))));
          Var_7494 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 13))));
          Var_7495 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 14))));
          Var_7496 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 15))));
          Var_7497 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 16))));
          Var_7498 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 17))));
          Var_7499 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 18))));
          Var_7500 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 19))));
          Var_7501 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 20))));
          Var_7502 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 21))));
          Var_7503 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 22))));
          Var_7504 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 23))));
          Var_7505 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 24))));
          Var_7506 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 25))));
          Var_7507 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 26))));
          Var_7508 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 27))));
          Var_7509 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 28))));
          Var_7510 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 29))));
          Var_7511 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 30))));
          Var_7512 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 31))));
          Var_7513 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 32))));
          Var_7514 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 33))));
          Var_7515 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 34))));
          Var_7516 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 35))));
          Var_7517 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 36))));
          Var_7518 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 37))));
          Var_7519 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 38))));
          Var_7520 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 39))));
          Var_7521 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1195_1195, (MR_Integer) 40))));
          {
            STATE_VARIABLE_OptTuple_1201_1201 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 0) = (MR_Box) (packed_word_46);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 1) = (MR_Box) ((((packed_word_47 & (~((MR_Unsigned) 512U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 9))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 2) = (MR_Box) (packed_word_48);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 3) = ((MR_Box) (Var_7484));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 4) = ((MR_Box) (Var_7485));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 5) = ((MR_Box) (Var_7486));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 6) = ((MR_Box) (Var_7487));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 7) = ((MR_Box) (Var_7488));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 8) = ((MR_Box) (Var_7489));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 9) = ((MR_Box) (Var_7490));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 10) = ((MR_Box) (Var_7491));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 11) = ((MR_Box) (Var_7492));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 12) = ((MR_Box) (Var_7493));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 13) = ((MR_Box) (Var_7494));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 14) = ((MR_Box) (Var_7495));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 15) = ((MR_Box) (Var_7496));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 16) = ((MR_Box) (Var_7497));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 17) = ((MR_Box) (Var_7498));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 18) = ((MR_Box) (Var_7499));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 19) = ((MR_Box) (Var_7500));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 20) = ((MR_Box) (Var_7501));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 21) = ((MR_Box) (Var_7502));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 22) = ((MR_Box) (Var_7503));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 23) = ((MR_Box) (Var_7504));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 24) = ((MR_Box) (Var_7505));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 25) = ((MR_Box) (Var_7506));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 26) = ((MR_Box) (Var_7507));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 27) = ((MR_Box) (Var_7508));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 28) = ((MR_Box) (Var_7509));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 29) = ((MR_Box) (Var_7510));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 30) = ((MR_Box) (Var_7511));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 31) = ((MR_Box) (Var_7512));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 32) = ((MR_Box) (Var_7513));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 33) = ((MR_Box) (Var_7514));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 34) = ((MR_Box) (Var_7515));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 35) = ((MR_Box) (Var_7516));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 36) = ((MR_Box) (Var_7517));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 37) = ((MR_Box) (Var_7518));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 38) = ((MR_Box) (Var_7519));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 39) = ((MR_Box) (Var_7520));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, 40) = ((MR_Box) (Var_7521));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 335, Var_511, STATE_VARIABLE_Globals_1199_1199, &STATE_VARIABLE_Globals_1205_1205);
          libs__globals__set_option_4_p_0((MR_Integer) 336, Var_511, STATE_VARIABLE_Globals_1205_1205, &STATE_VARIABLE_Globals_1209_1209);
          Var_7522 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
          Var_7523 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
          Var_7524 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
          Var_7525 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
          Var_7526 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
          Var_7527 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
          Var_7528 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
          Var_7529 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
          Var_7530 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
          Var_7531 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
          Var_7532 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
          Var_7533 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
          Var_7534 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
          Var_7535 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
          Var_7536 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
          Var_7537 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
          Var_7538 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
          Var_7539 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
          Var_7540 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
          Var_7541 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
          Var_7542 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
          Var_7543 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
          Var_7544 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
          Var_7545 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
          Var_7546 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
          Var_7547 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
          Var_7548 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
          Var_7549 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
          Var_7552 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
          Var_7553 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 0))) & (MR_Integer) 1);
          Var_7554 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
          Var_7556 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
          Var_7557 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
          Var_7558 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
          Var_7559 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
          Var_7560 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
          Var_7561 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
          Var_7562 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
          Var_7563 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
          Var_7564 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
          Var_7565 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
          Var_7566 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 19)) & (MR_Integer) 1);
          Var_7567 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 18)) & (MR_Integer) 1);
          Var_7568 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 17)) & (MR_Integer) 1);
          Var_7569 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 16)) & (MR_Integer) 1);
          Var_7570 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 15)) & (MR_Integer) 1);
          Var_7571 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
          Var_7572 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
          Var_7573 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
          Var_7574 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
          Var_7575 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
          Var_7576 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
          Var_7577 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
          Var_7578 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
          Var_7579 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
          Var_7580 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
          Var_7581 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
          Var_7582 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
          Var_7583 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
          Var_7584 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          Var_7585 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 1))) & (MR_Integer) 1);
          Var_7586 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
          Var_7587 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
          Var_7588 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
          Var_7589 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 18)) & (MR_Integer) 1);
          Var_7590 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
          Var_7591 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
          Var_7592 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
          Var_7593 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
          Var_7594 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
          Var_7595 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
          Var_7596 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
          Var_7597 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
          Var_7598 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
          Var_7599 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
          Var_7600 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
          Var_7601 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
          Var_7602 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
          Var_7603 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
          Var_7604 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_7605 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
          Var_7606 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
          Var_7607 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_7608 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 3))));
          Var_7609 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 4))));
          Var_7610 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 5))));
          Var_7611 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 6))));
          Var_7612 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 7))));
          Var_7613 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 8))));
          Var_7614 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 9))));
          Var_7615 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 10))));
          Var_7616 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 11))));
          Var_7617 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 12))));
          Var_7618 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 13))));
          Var_7619 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 14))));
          Var_7620 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 15))));
          Var_7621 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 16))));
          Var_7622 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 17))));
          Var_7623 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 18))));
          Var_7624 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 19))));
          Var_7625 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 20))));
          Var_7626 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 21))));
          Var_7627 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 22))));
          Var_7628 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 23))));
          Var_7629 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 24))));
          Var_7630 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 25))));
          Var_7631 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 26))));
          Var_7632 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 27))));
          Var_7633 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 28))));
          Var_7634 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 29))));
          Var_7635 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 30))));
          Var_7636 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 31))));
          Var_7637 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 32))));
          Var_7638 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 33))));
          Var_7639 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 34))));
          Var_7640 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 35))));
          Var_7641 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 36))));
          Var_7642 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 37))));
          Var_7643 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 38))));
          Var_7644 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 39))));
          Var_7645 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1201_1201, (MR_Integer) 40))));
          Var_7646 = Var_7522;
          Var_7647 = Var_7523;
          Var_7648 = Var_7524;
          Var_7649 = Var_7525;
          Var_7650 = Var_7526;
          Var_7651 = Var_7527;
          Var_7652 = Var_7528;
          Var_7653 = Var_7529;
          Var_7654 = Var_7530;
          Var_7655 = Var_7531;
          Var_7656 = Var_7532;
          Var_7657 = Var_7533;
          Var_7658 = Var_7534;
          Var_7659 = Var_7535;
          Var_7660 = Var_7536;
          Var_7661 = Var_7537;
          Var_7662 = Var_7538;
          Var_7663 = Var_7539;
          Var_7664 = Var_7540;
          Var_7665 = Var_7541;
          Var_7666 = Var_7542;
          Var_7667 = Var_7543;
          Var_7668 = Var_7544;
          Var_7669 = Var_7545;
          Var_7670 = Var_7546;
          Var_7671 = Var_7547;
          Var_7672 = Var_7548;
          Var_7673 = Var_7549;
          Var_7676 = Var_7552;
          Var_7677 = Var_7553;
          Var_7678 = Var_7554;
          Var_7680 = Var_7556;
          Var_7681 = Var_7557;
          Var_7682 = Var_7558;
          Var_7683 = Var_7559;
          Var_7684 = Var_7560;
          Var_7685 = Var_7561;
          Var_7686 = Var_7562;
          Var_7687 = Var_7563;
          Var_7688 = Var_7564;
          Var_7689 = Var_7565;
          Var_7690 = Var_7566;
          Var_7691 = Var_7567;
          Var_7692 = Var_7568;
          Var_7693 = Var_7569;
          Var_7694 = Var_7570;
          Var_7695 = Var_7571;
          Var_7696 = Var_7572;
          Var_7697 = Var_7573;
          Var_7698 = Var_7574;
          Var_7699 = Var_7575;
          Var_7700 = Var_7576;
          Var_7701 = Var_7577;
          Var_7702 = Var_7578;
          Var_7703 = Var_7579;
          Var_7704 = Var_7580;
          Var_7705 = Var_7581;
          Var_7706 = Var_7582;
          Var_7707 = Var_7583;
          Var_7708 = Var_7584;
          Var_7709 = Var_7585;
          Var_7710 = Var_7586;
          Var_7711 = Var_7587;
          Var_7712 = Var_7588;
          Var_7713 = Var_7589;
          Var_7714 = Var_7590;
          Var_7715 = Var_7591;
          Var_7716 = Var_7592;
          Var_7717 = Var_7593;
          Var_7718 = Var_7594;
          Var_7719 = Var_7595;
          Var_7720 = Var_7596;
          Var_7721 = Var_7597;
          Var_7722 = Var_7598;
          Var_7723 = Var_7599;
          Var_7724 = Var_7600;
          Var_7725 = Var_7601;
          Var_7726 = Var_7602;
          Var_7727 = Var_7603;
          Var_7728 = Var_7604;
          Var_7729 = Var_7605;
          Var_7730 = Var_7606;
          Var_7731 = Var_7607;
          Var_7732 = Var_7608;
          Var_7733 = Var_7609;
          Var_7734 = Var_7610;
          Var_7735 = Var_7611;
          Var_7736 = Var_7612;
          Var_7737 = Var_7613;
          Var_7738 = Var_7614;
          Var_7739 = Var_7615;
          Var_7740 = Var_7616;
          Var_7741 = Var_7617;
          Var_7742 = Var_7618;
          Var_7743 = Var_7619;
          Var_7744 = Var_7620;
          Var_7745 = Var_7621;
          Var_7746 = Var_7622;
          Var_7747 = Var_7623;
          Var_7748 = Var_7624;
          Var_7749 = Var_7625;
          Var_7750 = Var_7626;
          Var_7751 = Var_7627;
          Var_7752 = Var_7628;
          Var_7753 = Var_7629;
          Var_7754 = Var_7630;
          Var_7755 = Var_7631;
          Var_7756 = Var_7632;
          Var_7757 = Var_7633;
          Var_7758 = Var_7634;
          Var_7759 = Var_7635;
          Var_7760 = Var_7636;
          Var_7761 = Var_7637;
          Var_7762 = Var_7638;
          Var_7763 = Var_7639;
          Var_7764 = Var_7640;
          Var_7765 = Var_7641;
          Var_7766 = Var_7642;
          Var_7767 = Var_7643;
          Var_7768 = Var_7644;
          Var_7769 = Var_7645;
          {
            STATE_VARIABLE_OptTuple_1215_1215 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 0) = (MR_Box) (((((MR_Unsigned) (Var_7646) << 31)) | (((((MR_Unsigned) (Var_7647) << 30)) | (((((MR_Unsigned) (Var_7648) << 29)) | (((((MR_Unsigned) (Var_7649) << 28)) | (((((MR_Unsigned) (Var_7650) << 27)) | (((((MR_Unsigned) (Var_7651) << 26)) | (((((MR_Unsigned) (Var_7652) << 25)) | (((((MR_Unsigned) (Var_7653) << 24)) | (((((MR_Unsigned) (Var_7654) << 23)) | (((((MR_Unsigned) (Var_7655) << 22)) | (((((MR_Unsigned) (Var_7656) << 21)) | (((((MR_Unsigned) (Var_7657) << 20)) | (((((MR_Unsigned) (Var_7658) << 19)) | (((((MR_Unsigned) (Var_7659) << 18)) | (((((MR_Unsigned) (Var_7660) << 17)) | (((((MR_Unsigned) (Var_7661) << 16)) | (((((MR_Unsigned) (Var_7662) << 15)) | (((((MR_Unsigned) (Var_7663) << 14)) | (((((MR_Unsigned) (Var_7664) << 13)) | (((((MR_Unsigned) (Var_7665) << 12)) | (((((MR_Unsigned) (Var_7666) << 11)) | (((((MR_Unsigned) (Var_7667) << 10)) | (((((MR_Unsigned) (Var_7668) << 9)) | (((((MR_Unsigned) (Var_7669) << 8)) | (((((MR_Unsigned) (Var_7670) << 7)) | (((((MR_Unsigned) (Var_7671) << 6)) | (((((MR_Unsigned) (Var_7672) << 5)) | (((((MR_Unsigned) (Var_7673) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) (Var_7676) << 1)) | (MR_Unsigned) (Var_7677)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 1) = (MR_Box) (((((MR_Unsigned) (Var_7678) << 31)) | (((((MR_Unsigned) ((MR_Integer) 1) << 30)) | (((((MR_Unsigned) (Var_7680) << 29)) | (((((MR_Unsigned) (Var_7681) << 28)) | (((((MR_Unsigned) (Var_7682) << 27)) | (((((MR_Unsigned) (Var_7683) << 26)) | (((((MR_Unsigned) (Var_7684) << 25)) | (((((MR_Unsigned) (Var_7685) << 24)) | (((((MR_Unsigned) (Var_7686) << 23)) | (((((MR_Unsigned) (Var_7687) << 22)) | (((((MR_Unsigned) (Var_7688) << 21)) | (((((MR_Unsigned) (Var_7689) << 20)) | (((((MR_Unsigned) (Var_7690) << 19)) | (((((MR_Unsigned) (Var_7691) << 18)) | (((((MR_Unsigned) (Var_7692) << 17)) | (((((MR_Unsigned) (Var_7693) << 16)) | (((((MR_Unsigned) (Var_7694) << 15)) | (((((MR_Unsigned) (Var_7695) << 14)) | (((((MR_Unsigned) (Var_7696) << 13)) | (((((MR_Unsigned) (Var_7697) << 12)) | (((((MR_Unsigned) (Var_7698) << 11)) | (((((MR_Unsigned) (Var_7699) << 10)) | (((((MR_Unsigned) (Var_7700) << 9)) | (((((MR_Unsigned) (Var_7701) << 8)) | (((((MR_Unsigned) (Var_7702) << 7)) | (((((MR_Unsigned) (Var_7703) << 6)) | (((((MR_Unsigned) (Var_7704) << 5)) | (((((MR_Unsigned) (Var_7705) << 4)) | (((((MR_Unsigned) (Var_7706) << 3)) | (((((MR_Unsigned) (Var_7707) << 2)) | (((((MR_Unsigned) (Var_7708) << 1)) | (MR_Unsigned) (Var_7709)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 2) = (MR_Box) (((((MR_Unsigned) (Var_7710) << 21)) | (((((MR_Unsigned) (Var_7711) << 20)) | (((((MR_Unsigned) (Var_7712) << 19)) | (((((MR_Unsigned) (Var_7713) << 18)) | (((((MR_Unsigned) (Var_7714) << 17)) | (((((MR_Unsigned) (Var_7715) << 16)) | (((((MR_Unsigned) (Var_7716) << 15)) | (((((MR_Unsigned) (Var_7717) << 14)) | (((((MR_Unsigned) (Var_7718) << 13)) | (((((MR_Unsigned) (Var_7719) << 12)) | (((((MR_Unsigned) (Var_7720) << 11)) | (((((MR_Unsigned) (Var_7721) << 10)) | (((((MR_Unsigned) (Var_7722) << 9)) | (((((MR_Unsigned) (Var_7723) << 8)) | (((((MR_Unsigned) (Var_7724) << 7)) | (((((MR_Unsigned) (Var_7725) << 6)) | (((((MR_Unsigned) (Var_7726) << 5)) | (((((MR_Unsigned) (Var_7727) << 4)) | (((((MR_Unsigned) (Var_7728) << 3)) | (((((MR_Unsigned) (Var_7729) << 2)) | (((((MR_Unsigned) (Var_7730) << 1)) | (MR_Unsigned) (Var_7731)))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 3) = ((MR_Box) (Var_7732));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 4) = ((MR_Box) (Var_7733));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 5) = ((MR_Box) (Var_7734));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 6) = ((MR_Box) (Var_7735));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 7) = ((MR_Box) (Var_7736));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 8) = ((MR_Box) (Var_7737));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 9) = ((MR_Box) (Var_7738));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 10) = ((MR_Box) (Var_7739));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 11) = ((MR_Box) (Var_7740));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 12) = ((MR_Box) (Var_7741));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 13) = ((MR_Box) (Var_7742));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 14) = ((MR_Box) (Var_7743));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 15) = ((MR_Box) (Var_7744));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 16) = ((MR_Box) (Var_7745));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 17) = ((MR_Box) (Var_7746));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 18) = ((MR_Box) (Var_7747));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 19) = ((MR_Box) (Var_7748));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 20) = ((MR_Box) (Var_7749));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 21) = ((MR_Box) (Var_7750));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 22) = ((MR_Box) (Var_7751));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 23) = ((MR_Box) (Var_7752));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 24) = ((MR_Box) (Var_7753));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 25) = ((MR_Box) (Var_7754));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 26) = ((MR_Box) (Var_7755));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 27) = ((MR_Box) (Var_7756));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 28) = ((MR_Box) (Var_7757));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 29) = ((MR_Box) (Var_7758));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 30) = ((MR_Box) (Var_7759));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 31) = ((MR_Box) (Var_7760));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 32) = ((MR_Box) (Var_7761));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 33) = ((MR_Box) (Var_7762));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 34) = ((MR_Box) (Var_7763));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 35) = ((MR_Box) (Var_7764));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 36) = ((MR_Box) (Var_7765));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 37) = ((MR_Box) (Var_7766));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 38) = ((MR_Box) (Var_7767));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 39) = ((MR_Box) (Var_7768));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, 40) = ((MR_Box) (Var_7769));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_OptTuple_1215_1215 = STATE_VARIABLE_OptTuple_1173_1173;
          STATE_VARIABLE_Globals_1209_1209 = STATE_VARIABLE_Globals_1183_1183;
        }
        break;
      case (MR_Integer) 2:
        {
          STATE_VARIABLE_OptTuple_1215_1215 = STATE_VARIABLE_OptTuple_1173_1173;
          STATE_VARIABLE_Globals_1209_1209 = STATE_VARIABLE_Globals_1183_1183;
        }
        break;
      case (MR_Integer) 3:
        {
          STATE_VARIABLE_OptTuple_1215_1215 = STATE_VARIABLE_OptTuple_1173_1173;
          STATE_VARIABLE_Globals_1209_1209 = STATE_VARIABLE_Globals_1183_1183;
        }
        break;
      case (MR_Integer) 4:
        {
          STATE_VARIABLE_OptTuple_1215_1215 = STATE_VARIABLE_OptTuple_1173_1173;
          STATE_VARIABLE_Globals_1209_1209 = STATE_VARIABLE_Globals_1183_1183;
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_OptTuple_1215_1215 = STATE_VARIABLE_OptTuple_1173_1173;
          STATE_VARIABLE_Globals_1209_1209 = STATE_VARIABLE_Globals_1183_1183;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1209_1209, (MR_Integer) 295, &PutNondetEnvOnHeap_136);
    succeeded = (HighLevelCode_108 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (GC_Method_29 == (MR_Integer) 5);
      if (succeeded)
        succeeded = (PutNondetEnvOnHeap_136 == (MR_Integer) 1);
    }
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[200])), STATE_VARIABLE_Specs_1138_1138, &STATE_VARIABLE_Specs_1233_1233);
    else
      STATE_VARIABLE_Specs_1233_1233 = STATE_VARIABLE_Specs_1138_1138;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 300, (MR_Integer) 298, Var_370, STATE_VARIABLE_Globals_1209_1209, &STATE_VARIABLE_Globals_1237_1237);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 299, (MR_Integer) 298, Var_370, STATE_VARIABLE_Globals_1237_1237, &STATE_VARIABLE_Globals_1242_1242);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1242_1242, (MR_Integer) 300, &ProcIdStackLayout_138);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1242_1242, (MR_Integer) 299, &AgcStackLayout_139);
    succeeded = (ProcIdStackLayout_138 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (AgcStackLayout_139 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_7980 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 3))));
      MR_Integer Var_7981 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 4))));
      MR_Integer Var_7982 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 5))));
      MR_Integer Var_7983 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 6))));
      MR_Integer Var_7984 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 7))));
      MR_Integer Var_7985 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 8))));
      MR_Integer Var_7986 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 9))));
      MR_Integer Var_7987 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 10))));
      MR_Integer Var_7988 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 11))));
      MR_Integer Var_7989 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 12))));
      MR_Integer Var_7990 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 13))));
      MR_Integer Var_7991 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 14))));
      MR_Integer Var_7992 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 15))));
      MR_Integer Var_7993 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 16))));
      MR_Integer Var_7994 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 17))));
      MR_Integer Var_7995 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 18))));
      MR_Integer Var_7996 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 19))));
      MR_Integer Var_7997 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 20))));
      MR_Integer Var_7998 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 21))));
      MR_Integer Var_7999 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 22))));
      MR_Integer Var_8000 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 23))));
      MR_Integer Var_8001 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 24))));
      MR_Integer Var_8002 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 25))));
      MR_Integer Var_8003 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 26))));
      MR_Integer Var_8004 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 27))));
      MR_Integer Var_8005 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 28))));
      MR_Integer Var_8006 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 29))));
      MR_Integer Var_8007 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 30))));
      MR_Integer Var_8008 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 31))));
      MR_Integer Var_8009 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 32))));
      MR_Integer Var_8010 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 33))));
      MR_Integer Var_8011 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 34))));
      MR_Integer Var_8012 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 35))));
      MR_Integer Var_8013 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 36))));
      MR_Integer Var_8014 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 37))));
      MR_Integer Var_8015 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 38))));
      MR_Integer Var_8016 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 39))));
      MR_String Var_8017 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 40))));
      MR_Unsigned packed_word_52 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 0)));
      MR_Unsigned packed_word_53 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 1)));
      MR_Unsigned packed_word_54 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1215_1215, (MR_Integer) 2)));

      {
        STATE_VARIABLE_OptTuple_1246_1246 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 0) = (MR_Box) (packed_word_52);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 1) = (MR_Box) (packed_word_53);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 2) = (MR_Box) ((((packed_word_54 & (~((MR_Unsigned) 2048U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 11))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 3) = ((MR_Box) (Var_7980));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 4) = ((MR_Box) (Var_7981));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 5) = ((MR_Box) (Var_7982));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 6) = ((MR_Box) (Var_7983));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 7) = ((MR_Box) (Var_7984));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 8) = ((MR_Box) (Var_7985));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 9) = ((MR_Box) (Var_7986));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 10) = ((MR_Box) (Var_7987));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 11) = ((MR_Box) (Var_7988));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 12) = ((MR_Box) (Var_7989));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 13) = ((MR_Box) (Var_7990));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 14) = ((MR_Box) (Var_7991));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 15) = ((MR_Box) (Var_7992));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 16) = ((MR_Box) (Var_7993));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 17) = ((MR_Box) (Var_7994));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 18) = ((MR_Box) (Var_7995));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 19) = ((MR_Box) (Var_7996));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 20) = ((MR_Box) (Var_7997));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 21) = ((MR_Box) (Var_7998));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 22) = ((MR_Box) (Var_7999));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 23) = ((MR_Box) (Var_8000));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 24) = ((MR_Box) (Var_8001));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 25) = ((MR_Box) (Var_8002));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 26) = ((MR_Box) (Var_8003));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 27) = ((MR_Box) (Var_8004));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 28) = ((MR_Box) (Var_8005));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 29) = ((MR_Box) (Var_8006));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 30) = ((MR_Box) (Var_8007));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 31) = ((MR_Box) (Var_8008));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 32) = ((MR_Box) (Var_8009));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 33) = ((MR_Box) (Var_8010));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 34) = ((MR_Box) (Var_8011));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 35) = ((MR_Box) (Var_8012));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 36) = ((MR_Box) (Var_8013));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 37) = ((MR_Box) (Var_8014));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 38) = ((MR_Box) (Var_8015));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 39) = ((MR_Box) (Var_8016));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, 40) = ((MR_Box) (Var_8017));
      }
    }
    else
      STATE_VARIABLE_OptTuple_1246_1246 = STATE_VARIABLE_OptTuple_1215_1215;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1242_1242, (MR_Integer) 298, &BasicStackLayout_140);
    switch (BasicStackLayout_140) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_OptTuple_1249_1249 = STATE_VARIABLE_OptTuple_1246_1246;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_8104 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 3))));
          MR_Integer Var_8105 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 4))));
          MR_Integer Var_8106 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 5))));
          MR_Integer Var_8107 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 6))));
          MR_Integer Var_8108 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 7))));
          MR_Integer Var_8109 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 8))));
          MR_Integer Var_8110 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 9))));
          MR_Integer Var_8111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 10))));
          MR_Integer Var_8112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 11))));
          MR_Integer Var_8113 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 12))));
          MR_Integer Var_8114 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 13))));
          MR_Integer Var_8115 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 14))));
          MR_Integer Var_8116 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 15))));
          MR_Integer Var_8117 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 16))));
          MR_Integer Var_8118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 17))));
          MR_Integer Var_8119 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 18))));
          MR_Integer Var_8120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 19))));
          MR_Integer Var_8121 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 20))));
          MR_Integer Var_8122 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 21))));
          MR_Integer Var_8123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 22))));
          MR_Integer Var_8124 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 23))));
          MR_Integer Var_8125 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 24))));
          MR_Integer Var_8126 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 25))));
          MR_Integer Var_8127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 26))));
          MR_Integer Var_8128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 27))));
          MR_Integer Var_8129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 28))));
          MR_Integer Var_8130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 29))));
          MR_Integer Var_8131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 30))));
          MR_Integer Var_8132 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 31))));
          MR_Integer Var_8133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 32))));
          MR_Integer Var_8134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 33))));
          MR_Integer Var_8135 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 34))));
          MR_Integer Var_8136 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 35))));
          MR_Integer Var_8137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 36))));
          MR_Integer Var_8138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 37))));
          MR_Integer Var_8139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 38))));
          MR_Integer Var_8140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 39))));
          MR_String Var_8141 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 40))));
          MR_Unsigned packed_word_55 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 0)));
          MR_Unsigned packed_word_56 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 1)));
          MR_Unsigned packed_word_57 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1246_1246, (MR_Integer) 2)));

          {
            STATE_VARIABLE_OptTuple_1249_1249 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 0) = (MR_Box) (packed_word_55);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 1) = (MR_Box) (packed_word_56);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 2) = (MR_Box) ((((packed_word_57 & (~((MR_Unsigned) 8192U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 13))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 3) = ((MR_Box) (Var_8104));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 4) = ((MR_Box) (Var_8105));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 5) = ((MR_Box) (Var_8106));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 6) = ((MR_Box) (Var_8107));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 7) = ((MR_Box) (Var_8108));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 8) = ((MR_Box) (Var_8109));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 9) = ((MR_Box) (Var_8110));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 10) = ((MR_Box) (Var_8111));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 11) = ((MR_Box) (Var_8112));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 12) = ((MR_Box) (Var_8113));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 13) = ((MR_Box) (Var_8114));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 14) = ((MR_Box) (Var_8115));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 15) = ((MR_Box) (Var_8116));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 16) = ((MR_Box) (Var_8117));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 17) = ((MR_Box) (Var_8118));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 18) = ((MR_Box) (Var_8119));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 19) = ((MR_Box) (Var_8120));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 20) = ((MR_Box) (Var_8121));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 21) = ((MR_Box) (Var_8122));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 22) = ((MR_Box) (Var_8123));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 23) = ((MR_Box) (Var_8124));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 24) = ((MR_Box) (Var_8125));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 25) = ((MR_Box) (Var_8126));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 26) = ((MR_Box) (Var_8127));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 27) = ((MR_Box) (Var_8128));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 28) = ((MR_Box) (Var_8129));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 29) = ((MR_Box) (Var_8130));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 30) = ((MR_Box) (Var_8131));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 31) = ((MR_Box) (Var_8132));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 32) = ((MR_Box) (Var_8133));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 33) = ((MR_Box) (Var_8134));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 34) = ((MR_Box) (Var_8135));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 35) = ((MR_Box) (Var_8136));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 36) = ((MR_Box) (Var_8137));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 37) = ((MR_Box) (Var_8138));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 38) = ((MR_Box) (Var_8139));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 39) = ((MR_Box) (Var_8140));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, 40) = ((MR_Box) (Var_8141));
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1242_1242, (MR_Integer) 302, &BodyTypeInfoLiveness_141);
    switch (BodyTypeInfoLiveness_141) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_OptTuple_1254_1254 = STATE_VARIABLE_OptTuple_1249_1249;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_8228 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 3))));
          MR_Integer Var_8229 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 4))));
          MR_Integer Var_8230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 5))));
          MR_Integer Var_8231 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 6))));
          MR_Integer Var_8232 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 7))));
          MR_Integer Var_8233 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 8))));
          MR_Integer Var_8234 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 9))));
          MR_Integer Var_8235 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 10))));
          MR_Integer Var_8236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 11))));
          MR_Integer Var_8237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 12))));
          MR_Integer Var_8238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 13))));
          MR_Integer Var_8239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 14))));
          MR_Integer Var_8240 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 15))));
          MR_Integer Var_8241 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 16))));
          MR_Integer Var_8242 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 17))));
          MR_Integer Var_8243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 18))));
          MR_Integer Var_8244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 19))));
          MR_Integer Var_8245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 20))));
          MR_Integer Var_8246 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 21))));
          MR_Integer Var_8247 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 22))));
          MR_Integer Var_8248 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 23))));
          MR_Integer Var_8249 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 24))));
          MR_Integer Var_8250 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 25))));
          MR_Integer Var_8251 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 26))));
          MR_Integer Var_8252 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 27))));
          MR_Integer Var_8253 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 28))));
          MR_Integer Var_8254 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 29))));
          MR_Integer Var_8255 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 30))));
          MR_Integer Var_8256 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 31))));
          MR_Integer Var_8257 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 32))));
          MR_Integer Var_8258 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 33))));
          MR_Integer Var_8259 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 34))));
          MR_Integer Var_8260 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 35))));
          MR_Integer Var_8261 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 36))));
          MR_Integer Var_8262 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 37))));
          MR_Integer Var_8263 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 38))));
          MR_Integer Var_8264 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 39))));
          MR_String Var_8265 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 40))));
          MR_Unsigned packed_word_58 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 0)));
          MR_Unsigned packed_word_59 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 1)));
          MR_Unsigned packed_word_60 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1249_1249, (MR_Integer) 2)));

          {
            STATE_VARIABLE_OptTuple_1254_1254 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 0) = (MR_Box) ((((packed_word_58 & (~((MR_Unsigned) 16777216U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 24))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 1) = (MR_Box) ((((packed_word_59 & (~((MR_Unsigned) 268435456U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 28))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 2) = (MR_Box) (packed_word_60);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 3) = ((MR_Box) (Var_8228));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 4) = ((MR_Box) (Var_8229));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 5) = ((MR_Box) (Var_8230));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 6) = ((MR_Box) (Var_8231));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 7) = ((MR_Box) (Var_8232));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 8) = ((MR_Box) (Var_8233));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 9) = ((MR_Box) (Var_8234));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 10) = ((MR_Box) (Var_8235));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 11) = ((MR_Box) (Var_8236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 12) = ((MR_Box) (Var_8237));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 13) = ((MR_Box) (Var_8238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 14) = ((MR_Box) (Var_8239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 15) = ((MR_Box) (Var_8240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 16) = ((MR_Box) (Var_8241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 17) = ((MR_Box) (Var_8242));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 18) = ((MR_Box) (Var_8243));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 19) = ((MR_Box) (Var_8244));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 20) = ((MR_Box) (Var_8245));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 21) = ((MR_Box) (Var_8246));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 22) = ((MR_Box) (Var_8247));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 23) = ((MR_Box) (Var_8248));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 24) = ((MR_Box) (Var_8249));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 25) = ((MR_Box) (Var_8250));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 26) = ((MR_Box) (Var_8251));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 27) = ((MR_Box) (Var_8252));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 28) = ((MR_Box) (Var_8253));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 29) = ((MR_Box) (Var_8254));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 30) = ((MR_Box) (Var_8255));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 31) = ((MR_Box) (Var_8256));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 32) = ((MR_Box) (Var_8257));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 33) = ((MR_Box) (Var_8258));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 34) = ((MR_Box) (Var_8259));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 35) = ((MR_Box) (Var_8260));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 36) = ((MR_Box) (Var_8261));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 37) = ((MR_Box) (Var_8262));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 38) = ((MR_Box) (Var_8263));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 39) = ((MR_Box) (Var_8264));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, 40) = ((MR_Box) (Var_8265));
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1242_1242, (MR_Integer) 259, &StackSegments_142);
    succeeded = (UseTrail_107 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (StackSegments_142 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer Var_8476 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 3))));
      MR_Integer Var_8477 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 4))));
      MR_Integer Var_8478 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 5))));
      MR_Integer Var_8479 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 6))));
      MR_Integer Var_8480 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 7))));
      MR_Integer Var_8481 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 8))));
      MR_Integer Var_8482 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 9))));
      MR_Integer Var_8483 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 10))));
      MR_Integer Var_8484 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 11))));
      MR_Integer Var_8485 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 12))));
      MR_Integer Var_8486 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 13))));
      MR_Integer Var_8487 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 14))));
      MR_Integer Var_8488 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 15))));
      MR_Integer Var_8489 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 16))));
      MR_Integer Var_8490 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 17))));
      MR_Integer Var_8491 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 18))));
      MR_Integer Var_8492 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 19))));
      MR_Integer Var_8493 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 20))));
      MR_Integer Var_8494 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 21))));
      MR_Integer Var_8495 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 22))));
      MR_Integer Var_8496 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 23))));
      MR_Integer Var_8497 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 24))));
      MR_Integer Var_8498 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 25))));
      MR_Integer Var_8499 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 26))));
      MR_Integer Var_8500 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 27))));
      MR_Integer Var_8501 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 28))));
      MR_Integer Var_8502 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 29))));
      MR_Integer Var_8503 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 30))));
      MR_Integer Var_8504 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 31))));
      MR_Integer Var_8505 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 32))));
      MR_Integer Var_8506 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 33))));
      MR_Integer Var_8507 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 34))));
      MR_Integer Var_8508 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 35))));
      MR_Integer Var_8509 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 36))));
      MR_Integer Var_8510 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 37))));
      MR_Integer Var_8511 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 38))));
      MR_Integer Var_8512 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 39))));
      MR_String Var_8513 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 40))));
      MR_Unsigned packed_word_61 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 0)));
      MR_Unsigned packed_word_62 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 1)));
      MR_Unsigned packed_word_63 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1254_1254, (MR_Integer) 2)));

      {
        STATE_VARIABLE_OptTuple_1257_1257 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 0) = (MR_Box) (packed_word_61);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 1) = (MR_Box) ((((packed_word_62 & (~((MR_Unsigned) 512U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 9))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 2) = (MR_Box) (packed_word_63);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 3) = ((MR_Box) (Var_8476));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 4) = ((MR_Box) (Var_8477));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 5) = ((MR_Box) (Var_8478));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 6) = ((MR_Box) (Var_8479));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 7) = ((MR_Box) (Var_8480));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 8) = ((MR_Box) (Var_8481));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 9) = ((MR_Box) (Var_8482));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 10) = ((MR_Box) (Var_8483));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 11) = ((MR_Box) (Var_8484));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 12) = ((MR_Box) (Var_8485));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 13) = ((MR_Box) (Var_8486));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 14) = ((MR_Box) (Var_8487));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 15) = ((MR_Box) (Var_8488));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 16) = ((MR_Box) (Var_8489));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 17) = ((MR_Box) (Var_8490));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 18) = ((MR_Box) (Var_8491));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 19) = ((MR_Box) (Var_8492));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 20) = ((MR_Box) (Var_8493));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 21) = ((MR_Box) (Var_8494));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 22) = ((MR_Box) (Var_8495));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 23) = ((MR_Box) (Var_8496));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 24) = ((MR_Box) (Var_8497));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 25) = ((MR_Box) (Var_8498));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 26) = ((MR_Box) (Var_8499));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 27) = ((MR_Box) (Var_8500));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 28) = ((MR_Box) (Var_8501));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 29) = ((MR_Box) (Var_8502));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 30) = ((MR_Box) (Var_8503));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 31) = ((MR_Box) (Var_8504));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 32) = ((MR_Box) (Var_8505));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 33) = ((MR_Box) (Var_8506));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 34) = ((MR_Box) (Var_8507));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 35) = ((MR_Box) (Var_8508));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 36) = ((MR_Box) (Var_8509));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 37) = ((MR_Box) (Var_8510));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 38) = ((MR_Box) (Var_8511));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 39) = ((MR_Box) (Var_8512));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, 40) = ((MR_Box) (Var_8513));
      }
    }
    else
      STATE_VARIABLE_OptTuple_1257_1257 = STATE_VARIABLE_OptTuple_1254_1254;
    switch (UseMinimalModelStackCopy_109) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_OptTuple_1259_1259 = STATE_VARIABLE_OptTuple_1257_1257;
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_8600 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 3))));
          MR_Integer Var_8601 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 4))));
          MR_Integer Var_8602 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 5))));
          MR_Integer Var_8603 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 6))));
          MR_Integer Var_8604 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 7))));
          MR_Integer Var_8605 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 8))));
          MR_Integer Var_8606 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 9))));
          MR_Integer Var_8607 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 10))));
          MR_Integer Var_8608 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 11))));
          MR_Integer Var_8609 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 12))));
          MR_Integer Var_8610 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 13))));
          MR_Integer Var_8611 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 14))));
          MR_Integer Var_8612 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 15))));
          MR_Integer Var_8613 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 16))));
          MR_Integer Var_8614 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 17))));
          MR_Integer Var_8615 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 18))));
          MR_Integer Var_8616 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 19))));
          MR_Integer Var_8617 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 20))));
          MR_Integer Var_8618 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 21))));
          MR_Integer Var_8619 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 22))));
          MR_Integer Var_8620 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 23))));
          MR_Integer Var_8621 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 24))));
          MR_Integer Var_8622 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 25))));
          MR_Integer Var_8623 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 26))));
          MR_Integer Var_8624 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 27))));
          MR_Integer Var_8625 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 28))));
          MR_Integer Var_8626 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 29))));
          MR_Integer Var_8627 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 30))));
          MR_Integer Var_8628 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 31))));
          MR_Integer Var_8629 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 32))));
          MR_Integer Var_8630 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 33))));
          MR_Integer Var_8631 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 34))));
          MR_Integer Var_8632 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 35))));
          MR_Integer Var_8633 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 36))));
          MR_Integer Var_8634 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 37))));
          MR_Integer Var_8635 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 38))));
          MR_Integer Var_8636 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 39))));
          MR_String Var_8637 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 40))));
          MR_Unsigned packed_word_64 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 0)));
          MR_Unsigned packed_word_65 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 1)));
          MR_Unsigned packed_word_66 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1257_1257, (MR_Integer) 2)));

          {
            STATE_VARIABLE_OptTuple_1259_1259 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 0) = (MR_Box) (packed_word_64);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 1) = (MR_Box) ((((packed_word_65 & (~((MR_Unsigned) 128U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 7))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 2) = (MR_Box) (packed_word_66);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 3) = ((MR_Box) (Var_8600));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 4) = ((MR_Box) (Var_8601));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 5) = ((MR_Box) (Var_8602));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 6) = ((MR_Box) (Var_8603));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 7) = ((MR_Box) (Var_8604));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 8) = ((MR_Box) (Var_8605));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 9) = ((MR_Box) (Var_8606));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 10) = ((MR_Box) (Var_8607));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 11) = ((MR_Box) (Var_8608));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 12) = ((MR_Box) (Var_8609));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 13) = ((MR_Box) (Var_8610));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 14) = ((MR_Box) (Var_8611));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 15) = ((MR_Box) (Var_8612));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 16) = ((MR_Box) (Var_8613));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 17) = ((MR_Box) (Var_8614));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 18) = ((MR_Box) (Var_8615));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 19) = ((MR_Box) (Var_8616));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 20) = ((MR_Box) (Var_8617));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 21) = ((MR_Box) (Var_8618));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 22) = ((MR_Box) (Var_8619));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 23) = ((MR_Box) (Var_8620));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 24) = ((MR_Box) (Var_8621));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 25) = ((MR_Box) (Var_8622));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 26) = ((MR_Box) (Var_8623));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 27) = ((MR_Box) (Var_8624));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 28) = ((MR_Box) (Var_8625));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 29) = ((MR_Box) (Var_8626));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 30) = ((MR_Box) (Var_8627));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 31) = ((MR_Box) (Var_8628));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 32) = ((MR_Box) (Var_8629));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 33) = ((MR_Box) (Var_8630));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 34) = ((MR_Box) (Var_8631));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 35) = ((MR_Box) (Var_8632));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 36) = ((MR_Box) (Var_8633));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 37) = ((MR_Box) (Var_8634));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 38) = ((MR_Box) (Var_8635));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 39) = ((MR_Box) (Var_8636));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, 40) = ((MR_Box) (Var_8637));
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1242_1242, (MR_Integer) 314, &DisablePneg_143);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1242_1242, (MR_Integer) 315, &DisableCut_144);
    succeeded = (UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_143 == (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 316, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1242_1242, &STATE_VARIABLE_Globals_1265_1265);
    else
      STATE_VARIABLE_Globals_1265_1265 = STATE_VARIABLE_Globals_1242_1242;
    succeeded = (UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_144 == (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1265_1265, &STATE_VARIABLE_Globals_1269_1269);
    else
      STATE_VARIABLE_Globals_1269_1269 = STATE_VARIABLE_Globals_1265_1265;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1269_1269, (MR_Integer) 172, &DumpHLDSStages_145);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1269_1269, (MR_Integer) 171, &DumpTraceStages_146);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1269_1269, (MR_Integer) 332, &ParallelLiveness_147);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1269_1269, (MR_Integer) 333, &ParallelCodeGen_148);
    succeeded = (DumpHLDSStages_145 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DumpTraceStages_146 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_85 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_147 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_148 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 331, Var_511, STATE_VARIABLE_Globals_1269_1269, &STATE_VARIABLE_Globals_1277_1277);
    else
      STATE_VARIABLE_Globals_1277_1277 = STATE_VARIABLE_Globals_1269_1269;
    packed_word_67 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 0)));
    TypeSpec_153 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    packed_word_68 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 1)));
    packed_word_69 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 2)));
    Var_8723 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 3))));
    Var_8724 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 4))));
    Var_8725 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 5))));
    Var_8726 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 6))));
    Var_8727 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 7))));
    Var_8728 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 8))));
    Var_8729 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 9))));
    Var_8730 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 10))));
    Var_8731 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 11))));
    Var_8732 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 12))));
    Var_8733 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 13))));
    Var_8734 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 14))));
    Var_8735 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 15))));
    Var_8736 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 16))));
    Var_8737 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 17))));
    Var_8738 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 18))));
    Var_8739 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 19))));
    Var_8740 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 20))));
    Var_8741 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 21))));
    Var_8742 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 22))));
    Var_8743 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 23))));
    Var_8744 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 24))));
    Var_8745 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 25))));
    Var_8746 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 26))));
    Var_8747 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 27))));
    Var_8748 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 28))));
    Var_8749 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 29))));
    Var_8750 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 30))));
    Var_8751 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 31))));
    Var_8752 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 32))));
    Var_8753 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 33))));
    Var_8754 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 34))));
    Var_8755 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 35))));
    Var_8756 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 36))));
    Var_8757 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 37))));
    Var_8758 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 38))));
    Var_8759 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 39))));
    Var_8760 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1259_1259, (MR_Integer) 40))));
    switch (TypeSpec_153) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_1279_1279 = STATE_VARIABLE_OptTuple_1259_1259;
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_OptTuple_1279_1279 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 0) = (MR_Box) ((((packed_word_67 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 1) = (MR_Box) (packed_word_68);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 2) = (MR_Box) (packed_word_69);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 3) = ((MR_Box) (Var_8723));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 4) = ((MR_Box) (Var_8724));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 5) = ((MR_Box) (Var_8725));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 6) = ((MR_Box) (Var_8726));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 7) = ((MR_Box) (Var_8727));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 8) = ((MR_Box) (Var_8728));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 9) = ((MR_Box) (Var_8729));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 10) = ((MR_Box) (Var_8730));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 11) = ((MR_Box) (Var_8731));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 12) = ((MR_Box) (Var_8732));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 13) = ((MR_Box) (Var_8733));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 14) = ((MR_Box) (Var_8734));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 15) = ((MR_Box) (Var_8735));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 16) = ((MR_Box) (Var_8736));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 17) = ((MR_Box) (Var_8737));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 18) = ((MR_Box) (Var_8738));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 19) = ((MR_Box) (Var_8739));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 20) = ((MR_Box) (Var_8740));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 21) = ((MR_Box) (Var_8741));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 22) = ((MR_Box) (Var_8742));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 23) = ((MR_Box) (Var_8743));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 24) = ((MR_Box) (Var_8744));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 25) = ((MR_Box) (Var_8745));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 26) = ((MR_Box) (Var_8746));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 27) = ((MR_Box) (Var_8747));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 28) = ((MR_Box) (Var_8748));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 29) = ((MR_Box) (Var_8749));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 30) = ((MR_Box) (Var_8750));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 31) = ((MR_Box) (Var_8751));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 32) = ((MR_Box) (Var_8752));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 33) = ((MR_Box) (Var_8753));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 34) = ((MR_Box) (Var_8754));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 35) = ((MR_Box) (Var_8755));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 36) = ((MR_Box) (Var_8756));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 37) = ((MR_Box) (Var_8757));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 38) = ((MR_Box) (Var_8758));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 39) = ((MR_Box) (Var_8759));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, 40) = ((MR_Box) (Var_8760));
        }
        break;
    }
    packed_word_70 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 0)));
    ConstProp_154 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
    packed_word_71 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 1)));
    packed_word_72 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 2)));
    Var_8970 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 3))));
    Var_8971 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 4))));
    Var_8972 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 5))));
    Var_8973 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 6))));
    Var_8974 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 7))));
    Var_8975 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 8))));
    Var_8976 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 9))));
    Var_8977 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 10))));
    Var_8978 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 11))));
    Var_8979 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 12))));
    Var_8980 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 13))));
    Var_8981 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 14))));
    Var_8982 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 15))));
    Var_8983 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 16))));
    Var_8984 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 17))));
    Var_8985 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 18))));
    Var_8986 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 19))));
    Var_8987 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 20))));
    Var_8988 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 21))));
    Var_8989 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 22))));
    Var_8990 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 23))));
    Var_8991 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 24))));
    Var_8992 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 25))));
    Var_8993 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 26))));
    Var_8994 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 27))));
    Var_8995 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 28))));
    Var_8996 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 29))));
    Var_8997 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 30))));
    Var_8998 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 31))));
    Var_8999 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 32))));
    Var_9000 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 33))));
    Var_9001 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 34))));
    Var_9002 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 35))));
    Var_9003 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 36))));
    Var_9004 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 37))));
    Var_9005 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 38))));
    Var_9006 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 39))));
    Var_9007 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1279_1279, (MR_Integer) 40))));
    switch (ConstProp_154) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_1281_1281 = STATE_VARIABLE_OptTuple_1279_1279;
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_OptTuple_1281_1281 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 0) = (MR_Box) ((((packed_word_70 & (~((MR_Unsigned) 8388608U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 23))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 1) = (MR_Box) (packed_word_71);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 2) = (MR_Box) (packed_word_72);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 3) = ((MR_Box) (Var_8970));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 4) = ((MR_Box) (Var_8971));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 5) = ((MR_Box) (Var_8972));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 6) = ((MR_Box) (Var_8973));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 7) = ((MR_Box) (Var_8974));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 8) = ((MR_Box) (Var_8975));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 9) = ((MR_Box) (Var_8976));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 10) = ((MR_Box) (Var_8977));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 11) = ((MR_Box) (Var_8978));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 12) = ((MR_Box) (Var_8979));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 13) = ((MR_Box) (Var_8980));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 14) = ((MR_Box) (Var_8981));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 15) = ((MR_Box) (Var_8982));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 16) = ((MR_Box) (Var_8983));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 17) = ((MR_Box) (Var_8984));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 18) = ((MR_Box) (Var_8985));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 19) = ((MR_Box) (Var_8986));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 20) = ((MR_Box) (Var_8987));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 21) = ((MR_Box) (Var_8988));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 22) = ((MR_Box) (Var_8989));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 23) = ((MR_Box) (Var_8990));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 24) = ((MR_Box) (Var_8991));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 25) = ((MR_Box) (Var_8992));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 26) = ((MR_Box) (Var_8993));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 27) = ((MR_Box) (Var_8994));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 28) = ((MR_Box) (Var_8995));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 29) = ((MR_Box) (Var_8996));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 30) = ((MR_Box) (Var_8997));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 31) = ((MR_Box) (Var_8998));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 32) = ((MR_Box) (Var_8999));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 33) = ((MR_Box) (Var_9000));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 34) = ((MR_Box) (Var_9001));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 35) = ((MR_Box) (Var_9002));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 36) = ((MR_Box) (Var_9003));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 37) = ((MR_Box) (Var_9004));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 38) = ((MR_Box) (Var_9005));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 39) = ((MR_Box) (Var_9006));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, 40) = ((MR_Box) (Var_9007));
        }
        break;
    }
    packed_word_73 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 0)));
    IntermodUnusedArgs_155 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    packed_word_74 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 1)));
    packed_word_75 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 2)));
    Var_9217 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 3))));
    Var_9218 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 4))));
    Var_9219 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 5))));
    Var_9220 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 6))));
    Var_9221 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 7))));
    Var_9222 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 8))));
    Var_9223 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 9))));
    Var_9224 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 10))));
    Var_9225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 11))));
    Var_9226 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 12))));
    Var_9227 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 13))));
    Var_9228 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 14))));
    Var_9229 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 15))));
    Var_9230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 16))));
    Var_9231 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 17))));
    Var_9232 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 18))));
    Var_9233 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 19))));
    Var_9234 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 20))));
    Var_9235 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 21))));
    Var_9236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 22))));
    Var_9237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 23))));
    Var_9238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 24))));
    Var_9239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 25))));
    Var_9240 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 26))));
    Var_9241 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 27))));
    Var_9242 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 28))));
    Var_9243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 29))));
    Var_9244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 30))));
    Var_9245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 31))));
    Var_9246 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 32))));
    Var_9247 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 33))));
    Var_9248 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 34))));
    Var_9249 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 35))));
    Var_9250 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 36))));
    Var_9251 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 37))));
    Var_9252 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 38))));
    Var_9253 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 39))));
    Var_9254 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1281_1281, (MR_Integer) 40))));
    switch (IntermodUnusedArgs_155) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_OptTuple_1283_1283 = STATE_VARIABLE_OptTuple_1281_1281;
          STATE_VARIABLE_Globals_1287_1287 = STATE_VARIABLE_Globals_1277_1277;
        }
        break;
      case (MR_Integer) 0:
        {
          {
            STATE_VARIABLE_OptTuple_1283_1283 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 0) = (MR_Box) ((((packed_word_73 & (~((MR_Unsigned) 128U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 7))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 1) = (MR_Box) (packed_word_74);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 2) = (MR_Box) (packed_word_75);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 3) = ((MR_Box) (Var_9217));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 4) = ((MR_Box) (Var_9218));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 5) = ((MR_Box) (Var_9219));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 6) = ((MR_Box) (Var_9220));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 7) = ((MR_Box) (Var_9221));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 8) = ((MR_Box) (Var_9222));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 9) = ((MR_Box) (Var_9223));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 10) = ((MR_Box) (Var_9224));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 11) = ((MR_Box) (Var_9225));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 12) = ((MR_Box) (Var_9226));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 13) = ((MR_Box) (Var_9227));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 14) = ((MR_Box) (Var_9228));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 15) = ((MR_Box) (Var_9229));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 16) = ((MR_Box) (Var_9230));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 17) = ((MR_Box) (Var_9231));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 18) = ((MR_Box) (Var_9232));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 19) = ((MR_Box) (Var_9233));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 20) = ((MR_Box) (Var_9234));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 21) = ((MR_Box) (Var_9235));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 22) = ((MR_Box) (Var_9236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 23) = ((MR_Box) (Var_9237));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 24) = ((MR_Box) (Var_9238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 25) = ((MR_Box) (Var_9239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 26) = ((MR_Box) (Var_9240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 27) = ((MR_Box) (Var_9241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 28) = ((MR_Box) (Var_9242));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 29) = ((MR_Box) (Var_9243));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 30) = ((MR_Box) (Var_9244));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 31) = ((MR_Box) (Var_9245));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 32) = ((MR_Box) (Var_9246));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 33) = ((MR_Box) (Var_9247));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 34) = ((MR_Box) (Var_9248));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 35) = ((MR_Box) (Var_9249));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 36) = ((MR_Box) (Var_9250));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 37) = ((MR_Box) (Var_9251));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 38) = ((MR_Box) (Var_9252));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 39) = ((MR_Box) (Var_9253));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, 40) = ((MR_Box) (Var_9254));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 482, Var_370, STATE_VARIABLE_Globals_1277_1277, &STATE_VARIABLE_Globals_1287_1287);
        }
        break;
    }
    Var_9379 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
    Var_9380 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
    Var_9381 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
    Var_9382 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
    Var_9383 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
    Var_9384 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
    Var_9386 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
    Var_9387 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
    Var_9388 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
    Var_9389 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
    Var_9391 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
    Var_9392 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
    Var_9393 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
    Var_9394 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
    Var_9395 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    Var_9396 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
    Var_9397 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
    Var_9398 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
    Var_9399 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
    Var_9400 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
    Var_9401 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
    Var_9402 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    Var_9403 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
    Var_9404 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    Var_9405 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    Var_9406 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    Var_9407 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    Var_9408 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    IntroduceAccumulators_156 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_9409 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_9410 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
    Var_9411 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 30)) & (MR_Integer) 1);
    Var_9412 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
    Var_9413 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
    Var_9414 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
    Var_9415 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
    Var_9416 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
    Var_9417 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
    Var_9418 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
    Var_9419 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
    Var_9420 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
    Var_9421 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
    Var_9422 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 19)) & (MR_Integer) 1);
    Var_9423 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 18)) & (MR_Integer) 1);
    Var_9424 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 17)) & (MR_Integer) 1);
    Var_9425 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 16)) & (MR_Integer) 1);
    Var_9426 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 15)) & (MR_Integer) 1);
    Var_9427 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
    Var_9428 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
    Var_9429 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
    Var_9430 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
    Var_9431 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
    Var_9432 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
    Var_9433 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
    Var_9434 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
    Var_9435 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
    Var_9436 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
    Var_9437 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
    Var_9438 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
    Var_9439 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    Var_9440 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    Var_9441 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_9442 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
    Var_9443 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
    Var_9444 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
    Var_9445 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 18)) & (MR_Integer) 1);
    Var_9446 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    Var_9447 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    Var_9448 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    Var_9449 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    Var_9450 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
    Var_9451 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
    Var_9452 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
    Var_9453 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    Var_9454 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    Var_9455 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
    Var_9456 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
    Var_9457 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
    Var_9458 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
    Var_9459 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
    Var_9460 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    Var_9461 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    Var_9462 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    Var_9463 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_9464 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 3))));
    Var_9465 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 4))));
    Var_9466 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 5))));
    Var_9467 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 6))));
    Var_9468 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 7))));
    Var_9469 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 8))));
    Var_9470 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 9))));
    Var_9471 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 10))));
    Var_9472 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 11))));
    Var_9473 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 12))));
    Var_9474 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 13))));
    Var_9475 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 14))));
    Var_9476 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 15))));
    Var_9477 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 16))));
    Var_9478 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 17))));
    Var_9479 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 18))));
    Var_9480 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 19))));
    Var_9481 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 20))));
    Var_9482 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 21))));
    Var_9483 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 22))));
    Var_9484 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 23))));
    Var_9485 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 24))));
    Var_9486 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 25))));
    Var_9487 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 26))));
    Var_9488 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 27))));
    Var_9489 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 28))));
    Var_9490 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 29))));
    Var_9491 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 30))));
    Var_9492 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 31))));
    Var_9493 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 32))));
    Var_9494 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 33))));
    Var_9495 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 34))));
    Var_9496 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 35))));
    Var_9497 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 36))));
    Var_9498 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 37))));
    Var_9499 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 38))));
    Var_9500 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 39))));
    Var_9501 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1283_1283, (MR_Integer) 40))));
    switch (IntroduceAccumulators_156) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_1291_1291 = STATE_VARIABLE_OptTuple_1283_1283;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_9502 = Var_9379;
          MR_Word Var_9503 = Var_9380;
          MR_Word Var_9504 = Var_9381;
          MR_Word Var_9505 = Var_9382;
          MR_Word Var_9506 = Var_9383;
          MR_Word Var_9507 = Var_9384;
          MR_Word Var_9509 = Var_9386;
          MR_Word Var_9510 = Var_9387;
          MR_Word Var_9511 = Var_9388;
          MR_Word Var_9512 = Var_9389;
          MR_Word Var_9514 = Var_9391;
          MR_Word Var_9515 = Var_9392;
          MR_Word Var_9516 = Var_9393;
          MR_Word Var_9517 = Var_9394;
          MR_Word Var_9518 = Var_9395;
          MR_Word Var_9519 = Var_9396;
          MR_Word Var_9520 = Var_9397;
          MR_Word Var_9521 = Var_9398;
          MR_Word Var_9522 = Var_9399;
          MR_Word Var_9523 = Var_9400;
          MR_Word Var_9524 = Var_9401;
          MR_Word Var_9525 = Var_9402;
          MR_Word Var_9526 = Var_9403;
          MR_Word Var_9527 = Var_9404;
          MR_Word Var_9528 = Var_9405;
          MR_Word Var_9529 = Var_9406;
          MR_Word Var_9530 = Var_9407;
          MR_Word Var_9531 = Var_9408;
          MR_Word Var_9532 = IntroduceAccumulators_156;
          MR_Word Var_9533 = Var_9409;
          MR_Word Var_9534 = Var_9410;
          MR_Word Var_9535 = Var_9411;
          MR_Word Var_9536 = Var_9412;
          MR_Word Var_9537 = Var_9413;
          MR_Word Var_9538 = Var_9414;
          MR_Word Var_9539 = Var_9415;
          MR_Word Var_9540 = Var_9416;
          MR_Word Var_9541 = Var_9417;
          MR_Word Var_9542 = Var_9418;
          MR_Word Var_9543 = Var_9419;
          MR_Word Var_9544 = Var_9420;
          MR_Word Var_9545 = Var_9421;
          MR_Word Var_9546 = Var_9422;
          MR_Word Var_9547 = Var_9423;
          MR_Word Var_9548 = Var_9424;
          MR_Word Var_9549 = Var_9425;
          MR_Word Var_9550 = Var_9426;
          MR_Word Var_9551 = Var_9427;
          MR_Word Var_9552 = Var_9428;
          MR_Word Var_9553 = Var_9429;
          MR_Word Var_9554 = Var_9430;
          MR_Word Var_9555 = Var_9431;
          MR_Word Var_9556 = Var_9432;
          MR_Word Var_9557 = Var_9433;
          MR_Word Var_9558 = Var_9434;
          MR_Word Var_9559 = Var_9435;
          MR_Word Var_9560 = Var_9436;
          MR_Word Var_9561 = Var_9437;
          MR_Word Var_9562 = Var_9438;
          MR_Word Var_9563 = Var_9439;
          MR_Word Var_9564 = Var_9440;
          MR_Word Var_9565 = Var_9441;
          MR_Word Var_9566 = Var_9442;
          MR_Word Var_9567 = Var_9443;
          MR_Word Var_9568 = Var_9444;
          MR_Word Var_9569 = Var_9445;
          MR_Word Var_9570 = Var_9446;
          MR_Word Var_9571 = Var_9447;
          MR_Word Var_9572 = Var_9448;
          MR_Word Var_9573 = Var_9449;
          MR_Word Var_9574 = Var_9450;
          MR_Word Var_9575 = Var_9451;
          MR_Word Var_9576 = Var_9452;
          MR_Word Var_9577 = Var_9453;
          MR_Word Var_9578 = Var_9454;
          MR_Word Var_9579 = Var_9455;
          MR_Word Var_9580 = Var_9456;
          MR_Word Var_9581 = Var_9457;
          MR_Word Var_9582 = Var_9458;
          MR_Word Var_9583 = Var_9459;
          MR_Word Var_9584 = Var_9460;
          MR_Word Var_9585 = Var_9461;
          MR_Word Var_9586 = Var_9462;
          MR_Word Var_9587 = Var_9463;
          MR_Integer Var_9588 = Var_9464;
          MR_Integer Var_9589 = Var_9465;
          MR_Integer Var_9590 = Var_9466;
          MR_Integer Var_9591 = Var_9467;
          MR_Integer Var_9592 = Var_9468;
          MR_Integer Var_9593 = Var_9469;
          MR_Integer Var_9594 = Var_9470;
          MR_Integer Var_9595 = Var_9471;
          MR_Integer Var_9596 = Var_9472;
          MR_Integer Var_9597 = Var_9473;
          MR_Integer Var_9598 = Var_9474;
          MR_Integer Var_9599 = Var_9475;
          MR_Integer Var_9600 = Var_9476;
          MR_Integer Var_9601 = Var_9477;
          MR_Integer Var_9602 = Var_9478;
          MR_Integer Var_9603 = Var_9479;
          MR_Integer Var_9604 = Var_9480;
          MR_Integer Var_9605 = Var_9481;
          MR_Integer Var_9606 = Var_9482;
          MR_Integer Var_9607 = Var_9483;
          MR_Integer Var_9608 = Var_9484;
          MR_Integer Var_9609 = Var_9485;
          MR_Integer Var_9610 = Var_9486;
          MR_Integer Var_9611 = Var_9487;
          MR_Integer Var_9612 = Var_9488;
          MR_Integer Var_9613 = Var_9489;
          MR_Integer Var_9614 = Var_9490;
          MR_Integer Var_9615 = Var_9491;
          MR_Integer Var_9616 = Var_9492;
          MR_Integer Var_9617 = Var_9493;
          MR_Integer Var_9618 = Var_9494;
          MR_Integer Var_9619 = Var_9495;
          MR_Integer Var_9620 = Var_9496;
          MR_Integer Var_9621 = Var_9497;
          MR_Integer Var_9622 = Var_9498;
          MR_Integer Var_9623 = Var_9499;
          MR_Integer Var_9624 = Var_9500;
          MR_String Var_9625 = Var_9501;

          {
            STATE_VARIABLE_OptTuple_1291_1291 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 0) = (MR_Box) (((((MR_Unsigned) (Var_9502) << 31)) | (((((MR_Unsigned) (Var_9503) << 30)) | (((((MR_Unsigned) (Var_9504) << 29)) | (((((MR_Unsigned) (Var_9505) << 28)) | (((((MR_Unsigned) (Var_9506) << 27)) | (((((MR_Unsigned) (Var_9507) << 26)) | (((((MR_Unsigned) ((MR_Integer) 0) << 25)) | (((((MR_Unsigned) (Var_9509) << 24)) | (((((MR_Unsigned) (Var_9510) << 23)) | (((((MR_Unsigned) (Var_9511) << 22)) | (((((MR_Unsigned) (Var_9512) << 21)) | (((((MR_Unsigned) ((MR_Integer) 0) << 20)) | (((((MR_Unsigned) (Var_9514) << 19)) | (((((MR_Unsigned) (Var_9515) << 18)) | (((((MR_Unsigned) (Var_9516) << 17)) | (((((MR_Unsigned) (Var_9517) << 16)) | (((((MR_Unsigned) (Var_9518) << 15)) | (((((MR_Unsigned) (Var_9519) << 14)) | (((((MR_Unsigned) (Var_9520) << 13)) | (((((MR_Unsigned) (Var_9521) << 12)) | (((((MR_Unsigned) (Var_9522) << 11)) | (((((MR_Unsigned) (Var_9523) << 10)) | (((((MR_Unsigned) (Var_9524) << 9)) | (((((MR_Unsigned) (Var_9525) << 8)) | (((((MR_Unsigned) (Var_9526) << 7)) | (((((MR_Unsigned) (Var_9527) << 6)) | (((((MR_Unsigned) (Var_9528) << 5)) | (((((MR_Unsigned) (Var_9529) << 4)) | (((((MR_Unsigned) (Var_9530) << 3)) | (((((MR_Unsigned) (Var_9531) << 2)) | (((((MR_Unsigned) (Var_9532) << 1)) | (MR_Unsigned) (Var_9533)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 1) = (MR_Box) (((((MR_Unsigned) (Var_9534) << 31)) | (((((MR_Unsigned) (Var_9535) << 30)) | (((((MR_Unsigned) (Var_9536) << 29)) | (((((MR_Unsigned) (Var_9537) << 28)) | (((((MR_Unsigned) (Var_9538) << 27)) | (((((MR_Unsigned) (Var_9539) << 26)) | (((((MR_Unsigned) (Var_9540) << 25)) | (((((MR_Unsigned) (Var_9541) << 24)) | (((((MR_Unsigned) (Var_9542) << 23)) | (((((MR_Unsigned) (Var_9543) << 22)) | (((((MR_Unsigned) (Var_9544) << 21)) | (((((MR_Unsigned) (Var_9545) << 20)) | (((((MR_Unsigned) (Var_9546) << 19)) | (((((MR_Unsigned) (Var_9547) << 18)) | (((((MR_Unsigned) (Var_9548) << 17)) | (((((MR_Unsigned) (Var_9549) << 16)) | (((((MR_Unsigned) (Var_9550) << 15)) | (((((MR_Unsigned) (Var_9551) << 14)) | (((((MR_Unsigned) (Var_9552) << 13)) | (((((MR_Unsigned) (Var_9553) << 12)) | (((((MR_Unsigned) (Var_9554) << 11)) | (((((MR_Unsigned) (Var_9555) << 10)) | (((((MR_Unsigned) (Var_9556) << 9)) | (((((MR_Unsigned) (Var_9557) << 8)) | (((((MR_Unsigned) (Var_9558) << 7)) | (((((MR_Unsigned) (Var_9559) << 6)) | (((((MR_Unsigned) (Var_9560) << 5)) | (((((MR_Unsigned) (Var_9561) << 4)) | (((((MR_Unsigned) (Var_9562) << 3)) | (((((MR_Unsigned) (Var_9563) << 2)) | (((((MR_Unsigned) (Var_9564) << 1)) | (MR_Unsigned) (Var_9565)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 2) = (MR_Box) (((((MR_Unsigned) (Var_9566) << 21)) | (((((MR_Unsigned) (Var_9567) << 20)) | (((((MR_Unsigned) (Var_9568) << 19)) | (((((MR_Unsigned) (Var_9569) << 18)) | (((((MR_Unsigned) (Var_9570) << 17)) | (((((MR_Unsigned) (Var_9571) << 16)) | (((((MR_Unsigned) (Var_9572) << 15)) | (((((MR_Unsigned) (Var_9573) << 14)) | (((((MR_Unsigned) (Var_9574) << 13)) | (((((MR_Unsigned) (Var_9575) << 12)) | (((((MR_Unsigned) (Var_9576) << 11)) | (((((MR_Unsigned) (Var_9577) << 10)) | (((((MR_Unsigned) (Var_9578) << 9)) | (((((MR_Unsigned) (Var_9579) << 8)) | (((((MR_Unsigned) (Var_9580) << 7)) | (((((MR_Unsigned) (Var_9581) << 6)) | (((((MR_Unsigned) (Var_9582) << 5)) | (((((MR_Unsigned) (Var_9583) << 4)) | (((((MR_Unsigned) (Var_9584) << 3)) | (((((MR_Unsigned) (Var_9585) << 2)) | (((((MR_Unsigned) (Var_9586) << 1)) | (MR_Unsigned) (Var_9587)))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 3) = ((MR_Box) (Var_9588));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 4) = ((MR_Box) (Var_9589));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 5) = ((MR_Box) (Var_9590));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 6) = ((MR_Box) (Var_9591));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 7) = ((MR_Box) (Var_9592));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 8) = ((MR_Box) (Var_9593));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 9) = ((MR_Box) (Var_9594));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 10) = ((MR_Box) (Var_9595));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 11) = ((MR_Box) (Var_9596));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 12) = ((MR_Box) (Var_9597));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 13) = ((MR_Box) (Var_9598));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 14) = ((MR_Box) (Var_9599));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 15) = ((MR_Box) (Var_9600));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 16) = ((MR_Box) (Var_9601));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 17) = ((MR_Box) (Var_9602));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 18) = ((MR_Box) (Var_9603));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 19) = ((MR_Box) (Var_9604));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 20) = ((MR_Box) (Var_9605));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 21) = ((MR_Box) (Var_9606));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 22) = ((MR_Box) (Var_9607));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 23) = ((MR_Box) (Var_9608));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 24) = ((MR_Box) (Var_9609));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 25) = ((MR_Box) (Var_9610));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 26) = ((MR_Box) (Var_9611));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 27) = ((MR_Box) (Var_9612));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 28) = ((MR_Box) (Var_9613));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 29) = ((MR_Box) (Var_9614));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 30) = ((MR_Box) (Var_9615));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 31) = ((MR_Box) (Var_9616));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 32) = ((MR_Box) (Var_9617));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 33) = ((MR_Box) (Var_9618));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 34) = ((MR_Box) (Var_9619));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 35) = ((MR_Box) (Var_9620));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 36) = ((MR_Box) (Var_9621));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 37) = ((MR_Box) (Var_9622));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 38) = ((MR_Box) (Var_9623));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 39) = ((MR_Box) (Var_9624));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, 40) = ((MR_Box) (Var_9625));
          }
        }
        break;
    }
    succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1293 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_1293)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_1294 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1293, (MR_Integer) 0))));
        succeeded = (Var_1294 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
    {
      MR_Integer Var_9836 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 3))));
      MR_Integer Var_9837 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 4))));
      MR_Integer Var_9838 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 5))));
      MR_Integer Var_9839 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 6))));
      MR_Integer Var_9840 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 7))));
      MR_Integer Var_9841 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 8))));
      MR_Integer Var_9842 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 9))));
      MR_Integer Var_9843 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 10))));
      MR_Integer Var_9844 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 11))));
      MR_Integer Var_9845 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 12))));
      MR_Integer Var_9846 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 13))));
      MR_Integer Var_9847 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 14))));
      MR_Integer Var_9848 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 15))));
      MR_Integer Var_9849 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 16))));
      MR_Integer Var_9850 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 17))));
      MR_Integer Var_9851 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 18))));
      MR_Integer Var_9852 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 19))));
      MR_Integer Var_9853 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 20))));
      MR_Integer Var_9854 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 21))));
      MR_Integer Var_9855 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 22))));
      MR_Integer Var_9856 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 23))));
      MR_Integer Var_9857 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 24))));
      MR_Integer Var_9858 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 25))));
      MR_Integer Var_9859 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 26))));
      MR_Integer Var_9860 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 27))));
      MR_Integer Var_9861 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 28))));
      MR_Integer Var_9862 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 29))));
      MR_Integer Var_9863 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 30))));
      MR_Integer Var_9864 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 31))));
      MR_Integer Var_9865 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 32))));
      MR_Integer Var_9866 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 33))));
      MR_Integer Var_9867 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 34))));
      MR_Integer Var_9868 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 35))));
      MR_Integer Var_9869 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 36))));
      MR_Integer Var_9870 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 37))));
      MR_Integer Var_9871 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 38))));
      MR_Integer Var_9872 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 39))));
      MR_String Var_9873 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 40))));
      MR_Unsigned packed_word_79 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 0)));
      MR_Unsigned packed_word_80 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 1)));
      MR_Unsigned packed_word_81 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1291_1291, (MR_Integer) 2)));

      {
        STATE_VARIABLE_OptTuple_1295_1295 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 0) = (MR_Box) ((((packed_word_79 & (~((MR_Unsigned) 128U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 7))));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 1) = (MR_Box) (packed_word_80);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 2) = (MR_Box) (packed_word_81);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 3) = ((MR_Box) (Var_9836));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 4) = ((MR_Box) (Var_9837));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 5) = ((MR_Box) (Var_9838));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 6) = ((MR_Box) (Var_9839));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 7) = ((MR_Box) (Var_9840));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 8) = ((MR_Box) (Var_9841));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 9) = ((MR_Box) (Var_9842));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 10) = ((MR_Box) (Var_9843));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 11) = ((MR_Box) (Var_9844));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 12) = ((MR_Box) (Var_9845));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 13) = ((MR_Box) (Var_9846));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 14) = ((MR_Box) (Var_9847));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 15) = ((MR_Box) (Var_9848));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 16) = ((MR_Box) (Var_9849));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 17) = ((MR_Box) (Var_9850));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 18) = ((MR_Box) (Var_9851));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 19) = ((MR_Box) (Var_9852));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 20) = ((MR_Box) (Var_9853));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 21) = ((MR_Box) (Var_9854));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 22) = ((MR_Box) (Var_9855));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 23) = ((MR_Box) (Var_9856));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 24) = ((MR_Box) (Var_9857));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 25) = ((MR_Box) (Var_9858));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 26) = ((MR_Box) (Var_9859));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 27) = ((MR_Box) (Var_9860));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 28) = ((MR_Box) (Var_9861));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 29) = ((MR_Box) (Var_9862));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 30) = ((MR_Box) (Var_9863));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 31) = ((MR_Box) (Var_9864));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 32) = ((MR_Box) (Var_9865));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 33) = ((MR_Box) (Var_9866));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 34) = ((MR_Box) (Var_9867));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 35) = ((MR_Box) (Var_9868));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 36) = ((MR_Box) (Var_9869));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 37) = ((MR_Box) (Var_9870));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 38) = ((MR_Box) (Var_9871));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 39) = ((MR_Box) (Var_9872));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, 40) = ((MR_Box) (Var_9873));
      }
    }
    else
      STATE_VARIABLE_OptTuple_1295_1295 = STATE_VARIABLE_OptTuple_1291_1291;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 490, (MR_Integer) 491, Var_370, STATE_VARIABLE_Globals_1287_1287, &STATE_VARIABLE_Globals_1300_1300);
    succeeded = (OpMode_27 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 30, Var_511, STATE_VARIABLE_Globals_1300_1300, &STATE_VARIABLE_Globals_1304_1304);
    else
      STATE_VARIABLE_Globals_1304_1304 = STATE_VARIABLE_Globals_1300_1300;
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1304_1304, (MR_Integer) 693, &TargetArch_157);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1304_1304, (MR_Integer) 587, &MercuryLinkage_158);
    succeeded = (strcmp(MercuryLinkage_158, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_159 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 571, Var_511, STATE_VARIABLE_Globals_1304_1304, &STATE_VARIABLE_Globals_1310_1310);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1304_1304, (MR_Integer) 571, &DefaultRuntimeLibraryDirs_159);
      STATE_VARIABLE_Globals_1310_1310 = STATE_VARIABLE_Globals_1304_1304;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1310_1310, (MR_Integer) 580, &MaybeStdLibDir_160);
    if ((MaybeStdLibDir_160 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 679, Var_511, STATE_VARIABLE_Globals_1310_1310, &STATE_VARIABLE_Globals_1329_1329);
    else
    {
      MR_String StdLibDir_161 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_160, (MR_Integer) 0))));
      MR_Word OptionTable2_162;
      MR_Word OptionTable_163;
      MR_Word LinkLibDirs0_164;
      MR_Word STATE_VARIABLE_Globals_1318_1318;
      MR_Word Var_1321;
      MR_Word STATE_VARIABLE_Globals_1322_1322;
      MR_Word Var_1323;
      MR_String Var_1324;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_1310_1310, &OptionTable2_162);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_161, OptionTable2_162, &OptionTable_163);
      libs__globals__set_options_3_p_0(OptionTable_163, STATE_VARIABLE_Globals_1310_1310, &STATE_VARIABLE_Globals_1318_1318);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1318_1318, (MR_Integer) 569, &LinkLibDirs0_164);
      Var_1324 = mercury__dir__f_slash_2_f_0(StdLibDir_161, (MR_String) "lib");
      {
        Var_1323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1323, 0) = ((MR_Box) (Var_1324));
        MR_hl_field(MR_mktag(1), Var_1323, 1) = ((MR_Box) (LinkLibDirs0_164));
      }
      {
        Var_1321 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1321, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1321, 1) = ((MR_Box) (Var_1323));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 569, Var_1321, STATE_VARIABLE_Globals_1318_1318, &STATE_VARIABLE_Globals_1322_1322);
      switch (DefaultRuntimeLibraryDirs_159) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1329_1329 = STATE_VARIABLE_Globals_1322_1322;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_165;
            MR_Word Var_1328;
            MR_Word Var_1330;
            MR_String Var_1331;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1322_1322, (MR_Integer) 570, &Rpath0_165);
            Var_1331 = mercury__dir__f_slash_2_f_0(StdLibDir_161, (MR_String) "lib");
            {
              Var_1330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1330, 0) = ((MR_Box) (Var_1331));
              MR_hl_field(MR_mktag(1), Var_1330, 1) = ((MR_Box) (Rpath0_165));
            }
            {
              Var_1328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1328, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1328, 1) = ((MR_Box) (Var_1330));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 570, Var_1328, STATE_VARIABLE_Globals_1322_1322, &STATE_VARIABLE_Globals_1329_1329);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1329_1329, (MR_Integer) 661, &MaybeConfDir_166);
    if ((MaybeConfDir_166 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1337_1337 = STATE_VARIABLE_Globals_1329_1329;
    else
    {
      MR_String ConfDir_167 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_166, (MR_Integer) 0))));
      MR_Word CIncludeDirs0_168;
      MR_Word Var_1336;
      MR_Word Var_1338;
      MR_String Var_1339;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1329_1329, (MR_Integer) 523, &CIncludeDirs0_168);
      Var_1339 = mercury__dir__f_slash_2_f_0(ConfDir_167, (MR_String) "conf");
      {
        Var_1338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1338, 0) = ((MR_Box) (Var_1339));
        MR_hl_field(MR_mktag(1), Var_1338, 1) = ((MR_Box) (CIncludeDirs0_168));
      }
      {
        Var_1336 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1336, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1336, 1) = ((MR_Box) (Var_1338));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 523, Var_1336, STATE_VARIABLE_Globals_1329_1329, &STATE_VARIABLE_Globals_1337_1337);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1337_1337, (MR_Integer) 672, &ConfigFile_169);
    succeeded = (ConfigFile_169 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_1342 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConfigFile_169, (MR_Integer) 0))));
      succeeded = (strcmp(Var_1342, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_166 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__globals__set_option_4_p_0((MR_Integer) 672, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])), STATE_VARIABLE_Globals_1337_1337, &STATE_VARIABLE_Globals_1349_1349);
      else
      {
        MR_String ConfDir1_170 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_166, (MR_Integer) 0))));
        MR_Word Var_1348;
        MR_Word Var_1350;
        MR_String Var_1351;
        MR_String Var_1352;

        Var_1352 = mercury__dir__f_slash_2_f_0(ConfDir1_170, (MR_String) "conf");
        Var_1351 = mercury__dir__f_slash_2_f_0(Var_1352, (MR_String) "Mercury.config");
        {
          Var_1350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1350, 0) = ((MR_Box) (Var_1351));
        }
        {
          Var_1348 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1348, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_1348, 1) = ((MR_Box) (Var_1350));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 672, Var_1348, STATE_VARIABLE_Globals_1337_1337, &STATE_VARIABLE_Globals_1349_1349);
      }
    else
      STATE_VARIABLE_Globals_1349_1349 = STATE_VARIABLE_Globals_1337_1337;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1349_1349, (MR_Integer) 574, &MercuryLibDirs_171);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_1349_1349, &GradeString_172);
    if ((MercuryLibDirs_171 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1406_1406 = STATE_VARIABLE_Globals_1349_1349;
    else
    {
      MR_Word ExtraLinkLibDirs_175;
      MR_Word LinkLibDirs1_177;
      MR_Word ExtraIncludeDirs_179;
      MR_Word CIncludeDirs_180;
      MR_Word ErlangIncludeDirs_181;
      MR_Word ExtraIntermodDirs_182;
      MR_Word IntermodDirs0_183;
      MR_Word ExtraInitDirs_184;
      MR_Word InitDirs1_185;
      MR_Word Var_1356;
      MR_Word Var_1363;
      MR_Word STATE_VARIABLE_Globals_1364_1364;
      MR_Word Var_1365;
      MR_Word STATE_VARIABLE_Globals_1369_1369;
      MR_Word Var_1371;
      MR_Word Var_1380;
      MR_Word STATE_VARIABLE_Globals_1381_1381;
      MR_Word Var_1382;
      MR_Word Var_1385;
      MR_Word STATE_VARIABLE_Globals_1386_1386;
      MR_Word Var_1387;
      MR_Word Var_1388;
      MR_Word Var_1395;
      MR_Word STATE_VARIABLE_Globals_1396_1396;
      MR_Word Var_1397;
      MR_Word Var_1398;
      MR_Word Var_1405;
      MR_Word Var_1407;

      {
        Var_1356 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1356, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1356, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
        MR_hl_field(MR_mktag(0), Var_1356, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1356, 3) = ((MR_Box) (GradeString_172));
      }
      ExtraLinkLibDirs_175 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1356, MercuryLibDirs_171);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1349_1349, (MR_Integer) 569, &LinkLibDirs1_177);
      Var_1365 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_177, ExtraLinkLibDirs_175);
      {
        Var_1363 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1363, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1363, 1) = ((MR_Box) (Var_1365));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 569, Var_1363, STATE_VARIABLE_Globals_1349_1349, &STATE_VARIABLE_Globals_1364_1364);
      switch (DefaultRuntimeLibraryDirs_159) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1369_1369 = STATE_VARIABLE_Globals_1364_1364;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_178;
            MR_Word Var_1368;
            MR_Word Var_1370;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1364_1364, (MR_Integer) 570, &Rpath_178);
            Var_1370 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_178, ExtraLinkLibDirs_175);
            {
              Var_1368 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1368, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1368, 1) = ((MR_Box) (Var_1370));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 570, Var_1368, STATE_VARIABLE_Globals_1364_1364, &STATE_VARIABLE_Globals_1369_1369);
          }
          break;
      }
      {
        Var_1371 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1371, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1371, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
        MR_hl_field(MR_mktag(0), Var_1371, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1371, 3) = ((MR_Box) (GradeString_172));
      }
      ExtraIncludeDirs_179 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1371, MercuryLibDirs_171);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1369_1369, (MR_Integer) 523, &CIncludeDirs_180);
      Var_1382 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_179, CIncludeDirs_180);
      {
        Var_1380 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1380, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1380, 1) = ((MR_Box) (Var_1382));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 523, Var_1380, STATE_VARIABLE_Globals_1369_1369, &STATE_VARIABLE_Globals_1381_1381);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1381_1381, (MR_Integer) 560, &ErlangIncludeDirs_181);
      Var_1387 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_179, ErlangIncludeDirs_181);
      {
        Var_1385 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1385, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1385, 1) = ((MR_Box) (Var_1387));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1385, STATE_VARIABLE_Globals_1381_1381, &STATE_VARIABLE_Globals_1386_1386);
      {
        Var_1388 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1388, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1388, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
        MR_hl_field(MR_mktag(0), Var_1388, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1388, 3) = ((MR_Box) (GradeString_172));
      }
      ExtraIntermodDirs_182 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1388, MercuryLibDirs_171);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1386_1386, (MR_Integer) 677, &IntermodDirs0_183);
      Var_1397 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_182, IntermodDirs0_183);
      {
        Var_1395 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1395, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1395, 1) = ((MR_Box) (Var_1397));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 677, Var_1395, STATE_VARIABLE_Globals_1386_1386, &STATE_VARIABLE_Globals_1396_1396);
      {
        Var_1398 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1398, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1398, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
        MR_hl_field(MR_mktag(0), Var_1398, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1398, 3) = ((MR_Box) (GradeString_172));
      }
      ExtraInitDirs_184 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1398, MercuryLibDirs_171);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1396_1396, (MR_Integer) 582, &InitDirs1_185);
      Var_1407 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_185, ExtraInitDirs_184);
      {
        Var_1405 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1405, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1405, 1) = ((MR_Box) (Var_1407));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 582, Var_1405, STATE_VARIABLE_Globals_1396_1396, &STATE_VARIABLE_Globals_1406_1406);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 678, &UseSearchDirs_186);
    switch (UseSearchDirs_186) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1413_1413 = STATE_VARIABLE_Globals_1406_1406;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_187;
          MR_Word SearchDirs_188;
          MR_Word Var_1412;
          MR_Word Var_1414;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 677, &IntermodDirs1_187);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1406_1406, (MR_Integer) 676, &SearchDirs_188);
          Var_1414 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_187, SearchDirs_188);
          {
            Var_1412 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1412, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1412, 1) = ((MR_Box) (Var_1414));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 677, Var_1412, STATE_VARIABLE_Globals_1406_1406, &STATE_VARIABLE_Globals_1413_1413);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1413_1413, (MR_Integer) 675, &UseGradeSubdirs_189);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1413_1413, (MR_Integer) 576, &SearchLibFilesDirs_190);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1413_1413, (MR_Integer) 677, &IntermodDirs2_191);
    {
      ToGradeSubdir_192 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_192, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_192, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_192, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_192, 3) = ((MR_Box) (TargetArch_157));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_192, 4) = ((MR_Box) (GradeString_172));
    }
    switch (UseGradeSubdirs_189) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntermodDirs3_196;
          MR_Word LinkLibDirs2_197;
          MR_Word InitDirs2_198;
          MR_Word Var_1433;

          IntermodDirs3_196 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_190, IntermodDirs2_191);
          {
            Var_1433 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1433, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1433, 1) = ((MR_Box) (IntermodDirs3_196));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 677, Var_1433, STATE_VARIABLE_Globals_1413_1413, &STATE_VARIABLE_Globals_1434_1434);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1434_1434, (MR_Integer) 569, &LinkLibDirs2_197);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1434_1434, (MR_Integer) 582, &InitDirs2_198);
          LinkLibDirs_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_190, LinkLibDirs2_197);
          InitDirs_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_190, InitDirs2_198);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeSubdir_194;
          MR_Word SearchLibFilesGradeSubdirs_195;
          MR_Word ToGradeLibDir_199;
          MR_Word SearchGradeLibDirs_200;
          MR_Word ToGradeInitDir_202;
          MR_Word SearchGradeInitDirs_203;
          MR_String Var_1423;
          MR_Word Var_1425;
          MR_Word Var_1427;
          MR_Word Var_1428;
          MR_Word Var_1429;
          MR_Word Var_1430;
          MR_String Var_1431;
          MR_Word IntermodDirs3_257961;
          MR_Word LinkLibDirs2_257962;
          MR_Word InitDirs2_257963;
          MR_Word Var_257964;

          Var_1423 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_172);
          GradeSubdir_194 = mercury__dir__f_slash_2_f_0(Var_1423, TargetArch_157);
          SearchLibFilesGradeSubdirs_195 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_192, SearchLibFilesDirs_190);
          {
            Var_1425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_1425, 0) = ((MR_Box) (GradeSubdir_194));
            MR_hl_field(MR_mktag(1), Var_1425, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_1431 = mercury__dir__this_directory_0_f_0();
          {
            Var_1430 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1430, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_1430, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), Var_1430, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1430, 3) = ((MR_Box) (Var_1431));
          }
          {
            Var_1429 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1429, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_1429, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), Var_1429, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1429, 3) = ((MR_Box) (Var_1430));
          }
          Var_1428 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1429, IntermodDirs2_191);
          Var_1427 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_195, Var_1428);
          IntermodDirs3_257961 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1425, Var_1427);
          {
            Var_257964 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_257964, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_257964, 1) = ((MR_Box) (IntermodDirs3_257961));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 677, Var_257964, STATE_VARIABLE_Globals_1413_1413, &STATE_VARIABLE_Globals_1434_1434);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1434_1434, (MR_Integer) 569, &LinkLibDirs2_257962);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1434_1434, (MR_Integer) 582, &InitDirs2_257963);
          {
            ToGradeLibDir_199 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_199, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_199, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_199, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_199, 3) = ((MR_Box) (ToGradeSubdir_192));
          }
          SearchGradeLibDirs_200 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_199, SearchLibFilesDirs_190);
          LinkLibDirs_201 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_200, LinkLibDirs2_257962);
          {
            ToGradeInitDir_202 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_202, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_202, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_202, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_202, 3) = ((MR_Box) (ToGradeSubdir_192));
          }
          SearchGradeInitDirs_203 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_202, SearchLibFilesDirs_190);
          InitDirs_204 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_203, InitDirs2_257963);
        }
        break;
    }
    {
      Var_1450 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1450, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1450, 1) = ((MR_Box) (LinkLibDirs_201));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 569, Var_1450, STATE_VARIABLE_Globals_1434_1434, &STATE_VARIABLE_Globals_1451_1451);
    {
      Var_1453 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1453, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1453, 1) = ((MR_Box) (InitDirs_204));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 582, Var_1453, STATE_VARIABLE_Globals_1451_1451, &STATE_VARIABLE_Globals_1454_1454);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1454_1454, (MR_Integer) 674, &UseSubdirs_205);
    switch (UseGradeSubdirs_189) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_205 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_206 = (MR_Word) (&libs__handle_options_scalar_common_7[0]);
            ToHrlsSubdir_207 = (MR_Word) (&libs__handle_options_scalar_common_7[1]);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_206 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_206, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_206, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_206, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_206, 3) = ((MR_Box) (ToGradeSubdir_192));
          }
          {
            ToHrlsSubdir_207 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_207, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_207, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_207, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_207, 3) = ((MR_Box) (ToGradeSubdir_192));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word CIncludeDirs1_208;
      MR_String MihsSubdir_209;
      MR_Word SearchLibMihsSubdirs_210;
      MR_Word SubdirCIncludeDirs_211;
      MR_Word ErlangIncludeDirs1_212;
      MR_String HrlsSubdir_213;
      MR_Word SubdirErlangIncludeDirs_214;
      MR_String Var_1479;
      MR_String Var_1480;
      MR_Word Var_1481;
      MR_Word Var_1482;
      MR_Word Var_1484;
      MR_Word STATE_VARIABLE_Globals_1485_1485;
      MR_String Var_1487;
      MR_Word Var_1489;
      MR_Box MR_CALL (* func_11)(MR_Box, MR_Box);
      MR_Box conv12_MihsSubdir_209;
      MR_Box MR_CALL (* func_13)(MR_Box, MR_Box);
      MR_Box conv14_HrlsSubdir_213;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1454_1454, (MR_Integer) 523, &CIncludeDirs1_208);
      Var_1479 = mercury__dir__this_directory_0_f_0();
      func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToMihsSubdir_206, (MR_Integer) 1))));
      conv12_MihsSubdir_209 = func_11(((MR_Box) (ToMihsSubdir_206)), ((MR_Box) (Var_1479)));
      MihsSubdir_209 = ((MR_String) (conv12_MihsSubdir_209));
      SearchLibMihsSubdirs_210 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_206, SearchLibFilesDirs_190);
      Var_1480 = mercury__dir__this_directory_0_f_0();
      Var_1482 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_210, CIncludeDirs1_208);
      {
        Var_1481 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1481, 0) = ((MR_Box) (MihsSubdir_209));
        MR_hl_field(MR_mktag(1), Var_1481, 1) = ((MR_Box) (Var_1482));
      }
      {
        SubdirCIncludeDirs_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_211, 0) = ((MR_Box) (Var_1480));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_211, 1) = ((MR_Box) (Var_1481));
      }
      {
        Var_1484 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1484, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1484, 1) = ((MR_Box) (SubdirCIncludeDirs_211));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 523, Var_1484, STATE_VARIABLE_Globals_1454_1454, &STATE_VARIABLE_Globals_1485_1485);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1485_1485, (MR_Integer) 560, &ErlangIncludeDirs1_212);
      Var_1487 = mercury__dir__this_directory_0_f_0();
      func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToHrlsSubdir_207, (MR_Integer) 1))));
      conv14_HrlsSubdir_213 = func_13(((MR_Box) (ToHrlsSubdir_207)), ((MR_Box) (Var_1487)));
      HrlsSubdir_213 = ((MR_String) (conv14_HrlsSubdir_213));
      {
        SubdirErlangIncludeDirs_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_214, 0) = ((MR_Box) (HrlsSubdir_213));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_214, 1) = ((MR_Box) (ErlangIncludeDirs1_212));
      }
      {
        Var_1489 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1489, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1489, 1) = ((MR_Box) (SubdirErlangIncludeDirs_214));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1489, STATE_VARIABLE_Globals_1485_1485, &STATE_VARIABLE_Globals_1490_1490);
    }
    else
      STATE_VARIABLE_Globals_1490_1490 = STATE_VARIABLE_Globals_1454_1454;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 484, (MR_Integer) 16, Var_511, STATE_VARIABLE_Globals_1490_1490, &STATE_VARIABLE_Globals_1494_1494);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1494_1494, (MR_Integer) 34, &WarnNonTailRecSelf_215);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1494_1494, (MR_Integer) 35, &WarnNonTailRecMutual_216);
    succeeded = (WarnNonTailRecSelf_215 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_216 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word PessimizeTailCalls_217 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      MR_Word OptimizeTailCalls_218 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_Specs_1502_1502;
      MR_Word STATE_VARIABLE_Specs_1507_1507;
      MR_Word Var_1510;
      MR_Word Var_1511;

      switch (PessimizeTailCalls_217) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1502_1502 = STATE_VARIABLE_Specs_1233_1233;
          break;
        case (MR_Integer) 0:
          {
            MR_String PessimizeWords_219;
            MR_Word Var_1501;
            MR_Word Var_1503;

            PessimizeWords_219 = mercury__string__f_43_43_2_f_0((MR_String) "--warn-non-tail-recursion is incompatible", (MR_String) " with --pessimize-tailcalls");
            {
              Var_1503 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1503, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_1503, 1) = ((MR_Box) (PessimizeWords_219));
            }
            {
              Var_1501 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1501, 0) = ((MR_Box) (Var_1503));
              MR_hl_field(MR_mktag(1), Var_1501, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_1501, STATE_VARIABLE_Specs_1233_1233, &STATE_VARIABLE_Specs_1502_1502);
          }
          break;
      }
      switch (OptimizeTailCalls_218) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[220])), STATE_VARIABLE_Specs_1502_1502, &STATE_VARIABLE_Specs_1507_1507);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1507_1507 = STATE_VARIABLE_Specs_1502_1502;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_27)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_1510 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_27, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_1510)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_1511 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1510, (MR_Integer) 0))));
          succeeded = (Var_1511 == (MR_Word) ((MR_Unsigned) 20U));
        }
      }
      if (succeeded)
      {
        MR_String ECOWords_221;
        MR_Word Var_1515;
        MR_Word Var_1517;

        ECOWords_221 = mercury__string__f_43_43_2_f_0((MR_String) "--warn-non-tail-recursion is incompatible", (MR_String) " with --errorcheck-only");
        {
          Var_1517 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1517, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_1517, 1) = ((MR_Box) (ECOWords_221));
        }
        {
          Var_1515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1515, 0) = ((MR_Box) (Var_1517));
          MR_hl_field(MR_mktag(1), Var_1515, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_1515, STATE_VARIABLE_Specs_1507_1507, &STATE_VARIABLE_Specs_1516_1516);
      }
      else
        STATE_VARIABLE_Specs_1516_1516 = STATE_VARIABLE_Specs_1507_1507;
    }
    else
      STATE_VARIABLE_Specs_1516_1516 = STATE_VARIABLE_Specs_1233_1233;
    switch (Target_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          BackendForeignLanguages_222 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[221]));
          STATE_VARIABLE_OptTuple_1521_1521 = STATE_VARIABLE_OptTuple_1295_1295;
          STATE_VARIABLE_Globals_1525_1525 = STATE_VARIABLE_Globals_1494_1494;
        }
        break;
      case (MR_Integer) 1:
        {
          BackendForeignLanguages_222 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[222]));
          STATE_VARIABLE_OptTuple_1521_1521 = STATE_VARIABLE_OptTuple_1295_1295;
          STATE_VARIABLE_Globals_1525_1525 = STATE_VARIABLE_Globals_1494_1494;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer Var_10206;
          MR_Integer Var_10207;
          MR_Integer Var_10208;
          MR_Integer Var_10209;
          MR_Integer Var_10210;
          MR_Integer Var_10211;
          MR_Integer Var_10212;
          MR_Integer Var_10213;
          MR_Integer Var_10214;
          MR_Integer Var_10215;
          MR_Integer Var_10216;
          MR_Integer Var_10217;
          MR_Integer Var_10218;
          MR_Integer Var_10219;
          MR_Integer Var_10220;
          MR_Integer Var_10221;
          MR_Integer Var_10222;
          MR_Integer Var_10223;
          MR_Integer Var_10224;
          MR_Integer Var_10225;
          MR_Integer Var_10226;
          MR_Integer Var_10227;
          MR_Integer Var_10228;
          MR_Integer Var_10229;
          MR_Integer Var_10230;
          MR_Integer Var_10231;
          MR_Integer Var_10232;
          MR_Integer Var_10233;
          MR_Integer Var_10234;
          MR_Integer Var_10235;
          MR_Integer Var_10236;
          MR_Integer Var_10237;
          MR_Integer Var_10238;
          MR_Integer Var_10239;
          MR_Integer Var_10240;
          MR_Integer Var_10241;
          MR_Integer Var_10242;
          MR_String Var_10243;
          MR_Unsigned packed_word_85;
          MR_Unsigned packed_word_86;
          MR_Unsigned packed_word_87;

          BackendForeignLanguages_222 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[19]));
          packed_word_85 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 0)));
          packed_word_86 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 1)));
          packed_word_87 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 2)));
          Var_10206 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 3))));
          Var_10207 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 4))));
          Var_10208 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 5))));
          Var_10209 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 6))));
          Var_10210 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 7))));
          Var_10211 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 8))));
          Var_10212 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 9))));
          Var_10213 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 10))));
          Var_10214 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 11))));
          Var_10215 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 12))));
          Var_10216 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 13))));
          Var_10217 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 14))));
          Var_10218 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 15))));
          Var_10219 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 16))));
          Var_10220 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 17))));
          Var_10221 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 18))));
          Var_10222 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 19))));
          Var_10223 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 20))));
          Var_10224 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 21))));
          Var_10225 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 22))));
          Var_10226 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 23))));
          Var_10227 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 24))));
          Var_10228 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 25))));
          Var_10229 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 26))));
          Var_10230 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 27))));
          Var_10231 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 28))));
          Var_10232 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 29))));
          Var_10233 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 30))));
          Var_10234 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 31))));
          Var_10235 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 32))));
          Var_10236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 33))));
          Var_10237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 34))));
          Var_10238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 35))));
          Var_10239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 36))));
          Var_10240 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 37))));
          Var_10241 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 38))));
          Var_10242 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 39))));
          Var_10243 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1295_1295, (MR_Integer) 40))));
          {
            STATE_VARIABLE_OptTuple_1521_1521 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 0) = (MR_Box) (packed_word_85);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 1) = (MR_Box) ((((packed_word_86 & (~((MR_Unsigned) 1073741824U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 30))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 2) = (MR_Box) (packed_word_87);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 3) = ((MR_Box) (Var_10206));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 4) = ((MR_Box) (Var_10207));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 5) = ((MR_Box) (Var_10208));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 6) = ((MR_Box) (Var_10209));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 7) = ((MR_Box) (Var_10210));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 8) = ((MR_Box) (Var_10211));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 9) = ((MR_Box) (Var_10212));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 10) = ((MR_Box) (Var_10213));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 11) = ((MR_Box) (Var_10214));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 12) = ((MR_Box) (Var_10215));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 13) = ((MR_Box) (Var_10216));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 14) = ((MR_Box) (Var_10217));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 15) = ((MR_Box) (Var_10218));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 16) = ((MR_Box) (Var_10219));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 17) = ((MR_Box) (Var_10220));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 18) = ((MR_Box) (Var_10221));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 19) = ((MR_Box) (Var_10222));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 20) = ((MR_Box) (Var_10223));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 21) = ((MR_Box) (Var_10224));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 22) = ((MR_Box) (Var_10225));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 23) = ((MR_Box) (Var_10226));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 24) = ((MR_Box) (Var_10227));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 25) = ((MR_Box) (Var_10228));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 26) = ((MR_Box) (Var_10229));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 27) = ((MR_Box) (Var_10230));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 28) = ((MR_Box) (Var_10231));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 29) = ((MR_Box) (Var_10232));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 30) = ((MR_Box) (Var_10233));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 31) = ((MR_Box) (Var_10234));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 32) = ((MR_Box) (Var_10235));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 33) = ((MR_Box) (Var_10236));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 34) = ((MR_Box) (Var_10237));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 35) = ((MR_Box) (Var_10238));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 36) = ((MR_Box) (Var_10239));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 37) = ((MR_Box) (Var_10240));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 38) = ((MR_Box) (Var_10241));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 39) = ((MR_Box) (Var_10242));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_1521_1521, 40) = ((MR_Box) (Var_10243));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 327, Var_511, STATE_VARIABLE_Globals_1494_1494, &STATE_VARIABLE_Globals_1525_1525);
        }
        break;
      case (MR_Integer) 2:
        {
          BackendForeignLanguages_222 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[223]));
          STATE_VARIABLE_OptTuple_1521_1521 = STATE_VARIABLE_OptTuple_1295_1295;
          STATE_VARIABLE_Globals_1525_1525 = STATE_VARIABLE_Globals_1494_1494;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1525_1525, (MR_Integer) 296, &CurrentBackendForeignLanguage_223);
    if ((CurrentBackendForeignLanguage_223 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_1535;

      {
        Var_1535 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1535, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1535, 1) = ((MR_Box) (BackendForeignLanguages_222));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 296, Var_1535, STATE_VARIABLE_Globals_1525_1525, &STATE_VARIABLE_Globals_1536_1536);
    }
    else
      STATE_VARIABLE_Globals_1536_1536 = STATE_VARIABLE_Globals_1525_1525;
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_1536_1536, (MR_Integer) 345, &CompareSpec_226);
    succeeded = (CompareSpec_226 < (MR_Integer) 0);
    if (succeeded)
      switch (HighLevelCode_108) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_1536_1536, &STATE_VARIABLE_Globals_1545_1545);
          break;
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_1536_1536, &STATE_VARIABLE_Globals_1545_1545);
          break;
      }
    else
      STATE_VARIABLE_Globals_1545_1545 = STATE_VARIABLE_Globals_1536_1536;
    succeeded = (Target_28 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_1547 = (MR_Integer) 2;
      succeeded = (NumPtagBits_56 >= Var_1547);
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 303, Var_370, STATE_VARIABLE_Globals_1545_1545, &STATE_VARIABLE_Globals_1550_1550);
    else
      libs__globals__set_option_4_p_0((MR_Integer) 303, Var_511, STATE_VARIABLE_Globals_1545_1545, &STATE_VARIABLE_Globals_1550_1550);
    switch (HighLevelCode_108) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_4_p_0(STATE_VARIABLE_Globals_1550_1550, &STATE_VARIABLE_Globals_1556_1556, STATE_VARIABLE_OptTuple_1521_1521, &STATE_VARIABLE_OptTuple_1557_1557);
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_OptTuple_1557_1557 = STATE_VARIABLE_OptTuple_1521_1521;
          STATE_VARIABLE_Globals_1556_1556 = STATE_VARIABLE_Globals_1550_1550;
        }
        break;
    }
    libs__globals__set_opt_tuple_3_p_0(STATE_VARIABLE_OptTuple_1557_1557, STATE_VARIABLE_Globals_1556_1556, &STATE_VARIABLE_Globals_1558_1558);
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_1558_1558, STATE_VARIABLE_Globals_230, STATE_VARIABLE_Specs_1516_1516, STATE_VARIABLE_Specs_229);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_230);
  }
}

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String OptionDescr_6,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  {
    MR_Word WarnSmart_9;

    libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    libs__globals__set_option_4_p_0((MR_Integer) 135, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_12, (MR_Integer) 31, &WarnSmart_9);
    switch (WarnSmart_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Halt_10;
          MR_String Var_22;

          Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: smart recompilation ", (MR_String) "does not yet work with ");
          mercury__io__write_string_3_p_0(Var_22);
          mercury__io__write_string_3_p_0(OptionDescr_6);
          mercury__io__write_string_3_p_0((MR_String) ".\n");
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_12, (MR_Integer) 3, &Halt_10);
          switch (Halt_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  {
    MR_Word SourceOptionValue_10;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, SourceOption_6, &SourceOptionValue_10);
    switch (SourceOptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Globals_12 = STATE_VARIABLE_Globals_0_11;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0(ImpliedOption_7, ImpliedOptionValue_8, STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_OptTuple_0_18,
  MR_Word * STATE_VARIABLE_OptTuple_19)
{
  {
    MR_bool succeeded;
    MR_Word SavedVarsCell_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    MR_Word OptFrames_8;
    MR_Word OptProcDups_9;
    MR_Word UseLocalVars_10;
    MR_Integer OptRepeat_11;
    MR_Word UnboxedFloat_12;
    MR_Word UnboxedInt64s_13;
    MR_Word NonLocalGotos_14;
    MR_Word AsmLabels_15;
    MR_Word STATE_VARIABLE_OptTuple_20_20;
    MR_Word STATE_VARIABLE_OptTuple_24_24;
    MR_Word STATE_VARIABLE_OptTuple_31_31;
    MR_Word STATE_VARIABLE_OptTuple_36_36;
    MR_Word STATE_VARIABLE_OptTuple_41_41;
    MR_Integer Var_134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 3))));
    MR_Integer Var_135 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 4))));
    MR_Integer Var_136 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 5))));
    MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 6))));
    MR_Integer Var_138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 7))));
    MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 8))));
    MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 9))));
    MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 10))));
    MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 11))));
    MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 12))));
    MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 13))));
    MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 14))));
    MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 15))));
    MR_Integer Var_147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 16))));
    MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 17))));
    MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 18))));
    MR_Integer Var_150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 19))));
    MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 20))));
    MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 21))));
    MR_Integer Var_153 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 22))));
    MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 23))));
    MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 24))));
    MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 25))));
    MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 26))));
    MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 27))));
    MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 28))));
    MR_Integer Var_160 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 29))));
    MR_Integer Var_161 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 30))));
    MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 31))));
    MR_Integer Var_163 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 32))));
    MR_Integer Var_164 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 33))));
    MR_Integer Var_165 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 34))));
    MR_Integer Var_166 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 35))));
    MR_Integer Var_167 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 36))));
    MR_Integer Var_168 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 37))));
    MR_Integer Var_169 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 38))));
    MR_Integer Var_170 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 39))));
    MR_String Var_171 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 40))));
    MR_Word Var_296;
    MR_Word Var_297;
    MR_Word Var_298;
    MR_Word Var_299;
    MR_Word Var_300;
    MR_Word Var_301;
    MR_Word Var_302;
    MR_Word Var_303;
    MR_Word Var_304;
    MR_Word Var_305;
    MR_Word Var_306;
    MR_Word Var_307;
    MR_Word Var_308;
    MR_Word Var_309;
    MR_Word Var_310;
    MR_Word Var_311;
    MR_Word Var_312;
    MR_Word Var_313;
    MR_Word Var_314;
    MR_Word Var_315;
    MR_Word Var_316;
    MR_Word Var_317;
    MR_Word Var_318;
    MR_Word Var_319;
    MR_Word Var_320;
    MR_Word Var_321;
    MR_Word Var_322;
    MR_Word Var_323;
    MR_Word Var_324;
    MR_Word Var_325;
    MR_Word Var_326;
    MR_Word Var_327;
    MR_Word Var_328;
    MR_Word Var_329;
    MR_Word Var_330;
    MR_Word Var_331;
    MR_Word Var_332;
    MR_Word Var_333;
    MR_Word Var_334;
    MR_Word Var_335;
    MR_Word Var_336;
    MR_Word Var_337;
    MR_Word Var_338;
    MR_Word Var_339;
    MR_Word Var_340;
    MR_Word Var_341;
    MR_Word Var_342;
    MR_Word Var_343;
    MR_Word Var_344;
    MR_Word Var_345;
    MR_Word Var_346;
    MR_Word Var_347;
    MR_Word Var_348;
    MR_Word Var_349;
    MR_Word Var_350;
    MR_Word Var_351;
    MR_Word Var_352;
    MR_Word Var_353;
    MR_Word Var_354;
    MR_Word Var_355;
    MR_Word Var_356;
    MR_Word Var_357;
    MR_Word Var_358;
    MR_Word Var_359;
    MR_Word Var_360;
    MR_Word Var_361;
    MR_Word Var_362;
    MR_Word Var_364;
    MR_Word Var_365;
    MR_Word Var_366;
    MR_Word Var_367;
    MR_Word Var_368;
    MR_Word Var_370;
    MR_Word Var_371;
    MR_Word Var_372;
    MR_Word Var_373;
    MR_Word Var_374;
    MR_Word Var_375;
    MR_Word Var_376;
    MR_Word Var_377;
    MR_Word Var_378;
    MR_Word Var_379;
    MR_Word Var_380;
    MR_Integer Var_381;
    MR_Integer Var_382;
    MR_Integer Var_383;
    MR_Integer Var_384;
    MR_Integer Var_385;
    MR_Integer Var_386;
    MR_Integer Var_387;
    MR_Integer Var_388;
    MR_Integer Var_389;
    MR_Integer Var_390;
    MR_Integer Var_391;
    MR_Integer Var_392;
    MR_Integer Var_393;
    MR_Integer Var_394;
    MR_Integer Var_395;
    MR_Integer Var_396;
    MR_Integer Var_397;
    MR_Integer Var_398;
    MR_Integer Var_399;
    MR_Integer Var_400;
    MR_Integer Var_401;
    MR_Integer Var_402;
    MR_Integer Var_403;
    MR_Integer Var_404;
    MR_Integer Var_405;
    MR_Integer Var_406;
    MR_Integer Var_407;
    MR_Integer Var_408;
    MR_Integer Var_409;
    MR_Integer Var_410;
    MR_Integer Var_411;
    MR_Integer Var_412;
    MR_Integer Var_413;
    MR_Integer Var_414;
    MR_Integer Var_415;
    MR_Integer Var_416;
    MR_Integer Var_417;
    MR_String Var_418;
    MR_String Var_1904;
    MR_Integer Var_1905;
    MR_Integer Var_1906;
    MR_Integer Var_1907;
    MR_Integer Var_1908;
    MR_Integer Var_1909;
    MR_Integer Var_1910;
    MR_Integer Var_1911;
    MR_Integer Var_1912;
    MR_Integer Var_1913;
    MR_Integer Var_1914;
    MR_Integer Var_1915;
    MR_Integer Var_1916;
    MR_Integer Var_1917;
    MR_Integer Var_1918;
    MR_Integer Var_1919;
    MR_Integer Var_1920;
    MR_Integer Var_1921;
    MR_Integer Var_1922;
    MR_Integer Var_1923;
    MR_Integer Var_1924;
    MR_Integer Var_1925;
    MR_Integer Var_1926;
    MR_Integer Var_1927;
    MR_Integer Var_1928;
    MR_Integer Var_1929;
    MR_Integer Var_1930;
    MR_Integer Var_1931;
    MR_Integer Var_1932;
    MR_Integer Var_1933;
    MR_Integer Var_1934;
    MR_Integer Var_1935;
    MR_Integer Var_1936;
    MR_Integer Var_1937;
    MR_Integer Var_1938;
    MR_Integer Var_1939;
    MR_Integer Var_1940;
    MR_Integer Var_1941;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 0)));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 1)));
    MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 2)));
    MR_Integer Var_30;
    MR_Unsigned packed_word_12;
    MR_Unsigned packed_word_13;
    MR_Unsigned packed_word_14;

    switch (SavedVarsCell_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_20_20 = STATE_VARIABLE_OptTuple_0_18;
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_OptTuple_20_20 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 1) = (MR_Box) (packed_word_1);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 2) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 16384U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 14))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 3) = ((MR_Box) (Var_134));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 4) = ((MR_Box) (Var_135));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 5) = ((MR_Box) (Var_136));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 6) = ((MR_Box) (Var_137));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 7) = ((MR_Box) (Var_138));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 8) = ((MR_Box) (Var_139));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 9) = ((MR_Box) (Var_140));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 10) = ((MR_Box) (Var_141));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 11) = ((MR_Box) (Var_142));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 12) = ((MR_Box) (Var_143));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 13) = ((MR_Box) (Var_144));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 14) = ((MR_Box) (Var_145));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 15) = ((MR_Box) (Var_146));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 16) = ((MR_Box) (Var_147));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 17) = ((MR_Box) (Var_148));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 18) = ((MR_Box) (Var_149));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 19) = ((MR_Box) (Var_150));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 20) = ((MR_Box) (Var_151));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 21) = ((MR_Box) (Var_152));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 22) = ((MR_Box) (Var_153));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 23) = ((MR_Box) (Var_154));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 24) = ((MR_Box) (Var_155));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 25) = ((MR_Box) (Var_156));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 26) = ((MR_Box) (Var_157));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 27) = ((MR_Box) (Var_158));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 28) = ((MR_Box) (Var_159));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 29) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 30) = ((MR_Box) (Var_161));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 31) = ((MR_Box) (Var_162));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 32) = ((MR_Box) (Var_163));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 33) = ((MR_Box) (Var_164));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 34) = ((MR_Box) (Var_165));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 35) = ((MR_Box) (Var_166));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 36) = ((MR_Box) (Var_167));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 37) = ((MR_Box) (Var_168));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 38) = ((MR_Box) (Var_169));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 39) = ((MR_Box) (Var_170));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, 40) = ((MR_Box) (Var_171));
        }
        break;
    }
    Var_296 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
    Var_297 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
    Var_298 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
    Var_299 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
    Var_300 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
    Var_301 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
    Var_302 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
    Var_303 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
    Var_304 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
    Var_305 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
    Var_306 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
    Var_307 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
    Var_308 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
    Var_309 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
    Var_310 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
    Var_311 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
    Var_312 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    Var_313 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
    Var_314 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
    Var_315 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 12)) & (MR_Integer) 1);
    Var_316 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 11)) & (MR_Integer) 1);
    Var_317 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 10)) & (MR_Integer) 1);
    Var_318 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 9)) & (MR_Integer) 1);
    Var_319 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    Var_320 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
    Var_321 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    Var_322 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    Var_323 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    Var_324 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    Var_325 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    Var_326 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Var_327 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0))) & (MR_Integer) 1);
    Var_328 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
    Var_329 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 30)) & (MR_Integer) 1);
    Var_330 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
    Var_331 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
    Var_332 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
    Var_333 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
    Var_334 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
    Var_335 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
    Var_336 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
    Var_337 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
    Var_338 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
    Var_339 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 20)) & (MR_Integer) 1);
    Var_340 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 19)) & (MR_Integer) 1);
    Var_341 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 18)) & (MR_Integer) 1);
    Var_342 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 17)) & (MR_Integer) 1);
    Var_343 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 16)) & (MR_Integer) 1);
    Var_344 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 15)) & (MR_Integer) 1);
    Var_345 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 14)) & (MR_Integer) 1);
    Var_346 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 13)) & (MR_Integer) 1);
    Var_347 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 12)) & (MR_Integer) 1);
    Var_348 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 11)) & (MR_Integer) 1);
    Var_349 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 10)) & (MR_Integer) 1);
    Var_350 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
    Var_351 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 8)) & (MR_Integer) 1);
    Var_352 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
    Var_353 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
    Var_354 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
    Var_355 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
    Var_356 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 3)) & (MR_Integer) 1);
    Var_357 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    Var_358 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    Var_359 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1))) & (MR_Integer) 1);
    Var_360 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
    Var_361 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
    Var_362 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 19)) & (MR_Integer) 1);
    Var_364 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 17)) & (MR_Integer) 1);
    Var_365 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
    Var_366 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    Var_367 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    Var_368 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
    Var_370 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
    Var_371 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    OptFrames_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    Var_372 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
    Var_373 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 7)) & (MR_Integer) 1);
    Var_374 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 6)) & (MR_Integer) 1);
    Var_375 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 5)) & (MR_Integer) 1);
    Var_376 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
    Var_377 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
    Var_378 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
    Var_379 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    Var_380 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_381 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 3))));
    Var_382 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 4))));
    Var_383 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 5))));
    Var_384 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 6))));
    Var_385 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 7))));
    Var_386 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 8))));
    Var_387 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 9))));
    Var_388 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 10))));
    Var_389 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 11))));
    Var_390 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 12))));
    Var_391 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 13))));
    Var_392 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 14))));
    Var_393 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 15))));
    Var_394 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 16))));
    Var_395 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 17))));
    Var_396 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 18))));
    Var_397 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 19))));
    Var_398 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 20))));
    Var_399 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 21))));
    Var_400 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 22))));
    Var_401 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 23))));
    Var_402 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 24))));
    Var_403 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 25))));
    Var_404 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 26))));
    Var_405 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 27))));
    Var_406 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 28))));
    Var_407 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 29))));
    Var_408 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 30))));
    Var_409 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 31))));
    Var_410 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 32))));
    Var_411 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 33))));
    Var_412 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 34))));
    Var_413 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 35))));
    Var_414 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 36))));
    Var_415 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 37))));
    Var_416 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 38))));
    Var_417 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 39))));
    Var_418 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 40))));
    switch (OptFrames_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_OptTuple_24_24 = STATE_VARIABLE_OptTuple_20_20;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_419 = Var_296;
          MR_Word Var_420 = Var_297;
          MR_Word Var_421 = Var_298;
          MR_Word Var_422 = Var_299;
          MR_Word Var_423 = Var_300;
          MR_Word Var_424 = Var_301;
          MR_Word Var_425 = Var_302;
          MR_Word Var_426 = Var_303;
          MR_Word Var_427 = Var_304;
          MR_Word Var_428 = Var_305;
          MR_Word Var_429 = Var_306;
          MR_Word Var_430 = Var_307;
          MR_Word Var_431 = Var_308;
          MR_Word Var_432 = Var_309;
          MR_Word Var_433 = Var_310;
          MR_Word Var_434 = Var_311;
          MR_Word Var_435 = Var_312;
          MR_Word Var_436 = Var_313;
          MR_Word Var_437 = Var_314;
          MR_Word Var_438 = Var_315;
          MR_Word Var_439 = Var_316;
          MR_Word Var_440 = Var_317;
          MR_Word Var_441 = Var_318;
          MR_Word Var_442 = Var_319;
          MR_Word Var_443 = Var_320;
          MR_Word Var_444 = Var_321;
          MR_Word Var_445 = Var_322;
          MR_Word Var_446 = Var_323;
          MR_Word Var_447 = Var_324;
          MR_Word Var_448 = Var_325;
          MR_Word Var_449 = Var_326;
          MR_Word Var_450 = Var_327;
          MR_Word Var_451 = Var_328;
          MR_Word Var_452 = Var_329;
          MR_Word Var_453 = Var_330;
          MR_Word Var_454 = Var_331;
          MR_Word Var_455 = Var_332;
          MR_Word Var_456 = Var_333;
          MR_Word Var_457 = Var_334;
          MR_Word Var_458 = Var_335;
          MR_Word Var_459 = Var_336;
          MR_Word Var_460 = Var_337;
          MR_Word Var_461 = Var_338;
          MR_Word Var_462 = Var_339;
          MR_Word Var_463 = Var_340;
          MR_Word Var_464 = Var_341;
          MR_Word Var_465 = Var_342;
          MR_Word Var_466 = Var_343;
          MR_Word Var_467 = Var_344;
          MR_Word Var_468 = Var_345;
          MR_Word Var_469 = Var_346;
          MR_Word Var_470 = Var_347;
          MR_Word Var_471 = Var_348;
          MR_Word Var_472 = Var_349;
          MR_Word Var_473 = Var_350;
          MR_Word Var_474 = Var_351;
          MR_Word Var_475 = Var_352;
          MR_Word Var_476 = Var_353;
          MR_Word Var_477 = Var_354;
          MR_Word Var_478 = Var_355;
          MR_Word Var_479 = Var_356;
          MR_Word Var_480 = Var_357;
          MR_Word Var_481 = Var_358;
          MR_Word Var_482 = Var_359;
          MR_Word Var_483 = Var_360;
          MR_Word Var_484 = Var_361;
          MR_Word Var_485 = Var_362;
          MR_Word Var_487 = Var_364;
          MR_Word Var_488 = Var_365;
          MR_Word Var_489 = Var_366;
          MR_Word Var_490 = Var_367;
          MR_Word Var_491 = Var_368;
          MR_Word Var_493 = Var_370;
          MR_Word Var_494 = Var_371;
          MR_Word Var_495 = OptFrames_8;
          MR_Word Var_496 = Var_372;
          MR_Word Var_497 = Var_373;
          MR_Word Var_498 = Var_374;
          MR_Word Var_499 = Var_375;
          MR_Word Var_500 = Var_376;
          MR_Word Var_501 = Var_377;
          MR_Word Var_502 = Var_378;
          MR_Word Var_503 = Var_379;
          MR_Word Var_504 = Var_380;
          MR_Integer Var_505 = Var_381;
          MR_Integer Var_506 = Var_382;
          MR_Integer Var_507 = Var_383;
          MR_Integer Var_508 = Var_384;
          MR_Integer Var_509 = Var_385;
          MR_Integer Var_510 = Var_386;
          MR_Integer Var_511 = Var_387;
          MR_Integer Var_512 = Var_388;
          MR_Integer Var_513 = Var_389;
          MR_Integer Var_514 = Var_390;
          MR_Integer Var_515 = Var_391;
          MR_Integer Var_516 = Var_392;
          MR_Integer Var_517 = Var_393;
          MR_Integer Var_518 = Var_394;
          MR_Integer Var_519 = Var_395;
          MR_Integer Var_520 = Var_396;
          MR_Integer Var_521 = Var_397;
          MR_Integer Var_522 = Var_398;
          MR_Integer Var_523 = Var_399;
          MR_Integer Var_524 = Var_400;
          MR_Integer Var_525 = Var_401;
          MR_Integer Var_526 = Var_402;
          MR_Integer Var_527 = Var_403;
          MR_Integer Var_528 = Var_404;
          MR_Integer Var_529 = Var_405;
          MR_Integer Var_530 = Var_406;
          MR_Integer Var_531 = Var_407;
          MR_Integer Var_532 = Var_408;
          MR_Integer Var_533 = Var_409;
          MR_Integer Var_534 = Var_410;
          MR_Integer Var_535 = Var_411;
          MR_Integer Var_536 = Var_412;
          MR_Integer Var_537 = Var_413;
          MR_Integer Var_538 = Var_414;
          MR_Integer Var_539 = Var_415;
          MR_Integer Var_540 = Var_416;
          MR_Integer Var_541 = Var_417;
          MR_String Var_542 = Var_418;

          {
            STATE_VARIABLE_OptTuple_24_24 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 0) = (MR_Box) (((((MR_Unsigned) (Var_419) << 31)) | (((((MR_Unsigned) (Var_420) << 30)) | (((((MR_Unsigned) (Var_421) << 29)) | (((((MR_Unsigned) (Var_422) << 28)) | (((((MR_Unsigned) (Var_423) << 27)) | (((((MR_Unsigned) (Var_424) << 26)) | (((((MR_Unsigned) (Var_425) << 25)) | (((((MR_Unsigned) (Var_426) << 24)) | (((((MR_Unsigned) (Var_427) << 23)) | (((((MR_Unsigned) (Var_428) << 22)) | (((((MR_Unsigned) (Var_429) << 21)) | (((((MR_Unsigned) (Var_430) << 20)) | (((((MR_Unsigned) (Var_431) << 19)) | (((((MR_Unsigned) (Var_432) << 18)) | (((((MR_Unsigned) (Var_433) << 17)) | (((((MR_Unsigned) (Var_434) << 16)) | (((((MR_Unsigned) (Var_435) << 15)) | (((((MR_Unsigned) (Var_436) << 14)) | (((((MR_Unsigned) (Var_437) << 13)) | (((((MR_Unsigned) (Var_438) << 12)) | (((((MR_Unsigned) (Var_439) << 11)) | (((((MR_Unsigned) (Var_440) << 10)) | (((((MR_Unsigned) (Var_441) << 9)) | (((((MR_Unsigned) (Var_442) << 8)) | (((((MR_Unsigned) (Var_443) << 7)) | (((((MR_Unsigned) (Var_444) << 6)) | (((((MR_Unsigned) (Var_445) << 5)) | (((((MR_Unsigned) (Var_446) << 4)) | (((((MR_Unsigned) (Var_447) << 3)) | (((((MR_Unsigned) (Var_448) << 2)) | (((((MR_Unsigned) (Var_449) << 1)) | (MR_Unsigned) (Var_450)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 1) = (MR_Box) (((((MR_Unsigned) (Var_451) << 31)) | (((((MR_Unsigned) (Var_452) << 30)) | (((((MR_Unsigned) (Var_453) << 29)) | (((((MR_Unsigned) (Var_454) << 28)) | (((((MR_Unsigned) (Var_455) << 27)) | (((((MR_Unsigned) (Var_456) << 26)) | (((((MR_Unsigned) (Var_457) << 25)) | (((((MR_Unsigned) (Var_458) << 24)) | (((((MR_Unsigned) (Var_459) << 23)) | (((((MR_Unsigned) (Var_460) << 22)) | (((((MR_Unsigned) (Var_461) << 21)) | (((((MR_Unsigned) (Var_462) << 20)) | (((((MR_Unsigned) (Var_463) << 19)) | (((((MR_Unsigned) (Var_464) << 18)) | (((((MR_Unsigned) (Var_465) << 17)) | (((((MR_Unsigned) (Var_466) << 16)) | (((((MR_Unsigned) (Var_467) << 15)) | (((((MR_Unsigned) (Var_468) << 14)) | (((((MR_Unsigned) (Var_469) << 13)) | (((((MR_Unsigned) (Var_470) << 12)) | (((((MR_Unsigned) (Var_471) << 11)) | (((((MR_Unsigned) (Var_472) << 10)) | (((((MR_Unsigned) (Var_473) << 9)) | (((((MR_Unsigned) (Var_474) << 8)) | (((((MR_Unsigned) (Var_475) << 7)) | (((((MR_Unsigned) (Var_476) << 6)) | (((((MR_Unsigned) (Var_477) << 5)) | (((((MR_Unsigned) (Var_478) << 4)) | (((((MR_Unsigned) (Var_479) << 3)) | (((((MR_Unsigned) (Var_480) << 2)) | (((((MR_Unsigned) (Var_481) << 1)) | (MR_Unsigned) (Var_482)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 2) = (MR_Box) (((((MR_Unsigned) (Var_483) << 21)) | (((((MR_Unsigned) (Var_484) << 20)) | (((((MR_Unsigned) (Var_485) << 19)) | (((((MR_Unsigned) ((MR_Integer) 0) << 18)) | (((((MR_Unsigned) (Var_487) << 17)) | (((((MR_Unsigned) (Var_488) << 16)) | (((((MR_Unsigned) (Var_489) << 15)) | (((((MR_Unsigned) (Var_490) << 14)) | (((((MR_Unsigned) (Var_491) << 13)) | (((((MR_Unsigned) ((MR_Integer) 0) << 12)) | (((((MR_Unsigned) (Var_493) << 11)) | (((((MR_Unsigned) (Var_494) << 10)) | (((((MR_Unsigned) (Var_495) << 9)) | (((((MR_Unsigned) (Var_496) << 8)) | (((((MR_Unsigned) (Var_497) << 7)) | (((((MR_Unsigned) (Var_498) << 6)) | (((((MR_Unsigned) (Var_499) << 5)) | (((((MR_Unsigned) (Var_500) << 4)) | (((((MR_Unsigned) (Var_501) << 3)) | (((((MR_Unsigned) (Var_502) << 2)) | (((((MR_Unsigned) (Var_503) << 1)) | (MR_Unsigned) (Var_504)))))))))))))))))))))))))))))))))))))))))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 3) = ((MR_Box) (Var_505));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 4) = ((MR_Box) (Var_506));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 5) = ((MR_Box) (Var_507));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 6) = ((MR_Box) (Var_508));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 7) = ((MR_Box) (Var_509));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 8) = ((MR_Box) (Var_510));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 9) = ((MR_Box) (Var_511));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 10) = ((MR_Box) (Var_512));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 11) = ((MR_Box) (Var_513));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 12) = ((MR_Box) (Var_514));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 13) = ((MR_Box) (Var_515));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 14) = ((MR_Box) (Var_516));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 15) = ((MR_Box) (Var_517));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 16) = ((MR_Box) (Var_518));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 17) = ((MR_Box) (Var_519));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 18) = ((MR_Box) (Var_520));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 19) = ((MR_Box) (Var_521));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 20) = ((MR_Box) (Var_522));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 21) = ((MR_Box) (Var_523));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 22) = ((MR_Box) (Var_524));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 23) = ((MR_Box) (Var_525));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 24) = ((MR_Box) (Var_526));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 25) = ((MR_Box) (Var_527));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 26) = ((MR_Box) (Var_528));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 27) = ((MR_Box) (Var_529));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 28) = ((MR_Box) (Var_530));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 29) = ((MR_Box) (Var_531));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 30) = ((MR_Box) (Var_532));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 31) = ((MR_Box) (Var_533));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 32) = ((MR_Box) (Var_534));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 33) = ((MR_Box) (Var_535));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 34) = ((MR_Box) (Var_536));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 35) = ((MR_Box) (Var_537));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 36) = ((MR_Box) (Var_538));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 37) = ((MR_Box) (Var_539));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 38) = ((MR_Box) (Var_540));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 39) = ((MR_Box) (Var_541));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 40) = ((MR_Box) (Var_542));
          }
        }
        break;
    }
    UseLocalVars_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 2))) >> 14)) & (MR_Integer) 1);
    OptProcDups_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
    OptRepeat_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 37))));
    switch (OptProcDups_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_Globals_17 = STATE_VARIABLE_Globals_0_16;
        break;
      case (MR_Integer) 0:
        libs__globals__set_option_4_p_0((MR_Integer) 331, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_0_16, STATE_VARIABLE_Globals_17);
        break;
    }
    succeeded = (OptFrames_8 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (UseLocalVars_10 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = (MR_Integer) 1;
      succeeded = (OptRepeat_11 < Var_30);
    }
    if (succeeded)
    {
      MR_Integer Var_1122 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 3))));
      MR_Integer Var_1123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 4))));
      MR_Integer Var_1124 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 5))));
      MR_Integer Var_1125 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 6))));
      MR_Integer Var_1126 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 7))));
      MR_Integer Var_1127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 8))));
      MR_Integer Var_1128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 9))));
      MR_Integer Var_1129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 10))));
      MR_Integer Var_1130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 11))));
      MR_Integer Var_1131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 12))));
      MR_Integer Var_1132 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 13))));
      MR_Integer Var_1133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 14))));
      MR_Integer Var_1134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 15))));
      MR_Integer Var_1135 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 16))));
      MR_Integer Var_1136 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 17))));
      MR_Integer Var_1137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 18))));
      MR_Integer Var_1138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 19))));
      MR_Integer Var_1139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 20))));
      MR_Integer Var_1140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 21))));
      MR_Integer Var_1141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 22))));
      MR_Integer Var_1142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 23))));
      MR_Integer Var_1143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 24))));
      MR_Integer Var_1144 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 25))));
      MR_Integer Var_1145 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 26))));
      MR_Integer Var_1146 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 27))));
      MR_Integer Var_1147 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 28))));
      MR_Integer Var_1148 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 29))));
      MR_Integer Var_1149 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 30))));
      MR_Integer Var_1150 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 31))));
      MR_Integer Var_1151 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 32))));
      MR_Integer Var_1152 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 33))));
      MR_Integer Var_1153 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 34))));
      MR_Integer Var_1154 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 35))));
      MR_Integer Var_1155 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 36))));
      MR_Integer Var_1157 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 38))));
      MR_Integer Var_1158 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 39))));
      MR_String Var_1159 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 40))));
      MR_Unsigned packed_word_9 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 0)));
      MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 1)));
      MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 2)));

      {
        STATE_VARIABLE_OptTuple_31_31 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 0) = (MR_Box) (packed_word_9);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 1) = (MR_Box) (packed_word_10);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 2) = (MR_Box) (packed_word_11);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 3) = ((MR_Box) (Var_1122));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 4) = ((MR_Box) (Var_1123));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 5) = ((MR_Box) (Var_1124));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 6) = ((MR_Box) (Var_1125));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 7) = ((MR_Box) (Var_1126));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 8) = ((MR_Box) (Var_1127));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 9) = ((MR_Box) (Var_1128));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 10) = ((MR_Box) (Var_1129));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 11) = ((MR_Box) (Var_1130));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 12) = ((MR_Box) (Var_1131));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 13) = ((MR_Box) (Var_1132));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 14) = ((MR_Box) (Var_1133));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 15) = ((MR_Box) (Var_1134));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 16) = ((MR_Box) (Var_1135));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 17) = ((MR_Box) (Var_1136));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 18) = ((MR_Box) (Var_1137));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 19) = ((MR_Box) (Var_1138));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 20) = ((MR_Box) (Var_1139));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 21) = ((MR_Box) (Var_1140));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 22) = ((MR_Box) (Var_1141));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 23) = ((MR_Box) (Var_1142));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 24) = ((MR_Box) (Var_1143));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 25) = ((MR_Box) (Var_1144));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 26) = ((MR_Box) (Var_1145));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 27) = ((MR_Box) (Var_1146));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 28) = ((MR_Box) (Var_1147));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 29) = ((MR_Box) (Var_1148));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 30) = ((MR_Box) (Var_1149));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 31) = ((MR_Box) (Var_1150));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 32) = ((MR_Box) (Var_1151));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 33) = ((MR_Box) (Var_1152));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 34) = ((MR_Box) (Var_1153));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 35) = ((MR_Box) (Var_1154));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 36) = ((MR_Box) (Var_1155));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 37) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 38) = ((MR_Box) (Var_1157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 39) = ((MR_Box) (Var_1158));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 40) = ((MR_Box) (Var_1159));
      }
    }
    else
      STATE_VARIABLE_OptTuple_31_31 = STATE_VARIABLE_OptTuple_24_24;
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 271, &UnboxedFloat_12);
    packed_word_12 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 0)));
    packed_word_13 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 1)));
    packed_word_14 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 2)));
    Var_1941 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 3))));
    Var_1940 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 4))));
    Var_1939 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 5))));
    Var_1938 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 6))));
    Var_1937 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 7))));
    Var_1936 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 8))));
    Var_1935 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 9))));
    Var_1934 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 10))));
    Var_1933 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 11))));
    Var_1932 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 12))));
    Var_1931 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 13))));
    Var_1930 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 14))));
    Var_1929 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 15))));
    Var_1928 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 16))));
    Var_1927 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 17))));
    Var_1926 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 18))));
    Var_1925 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 19))));
    Var_1924 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 20))));
    Var_1923 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 21))));
    Var_1922 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 22))));
    Var_1921 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 23))));
    Var_1920 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 24))));
    Var_1919 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 25))));
    Var_1918 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 26))));
    Var_1917 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 27))));
    Var_1916 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 28))));
    Var_1915 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 29))));
    Var_1914 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 30))));
    Var_1913 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 31))));
    Var_1912 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 32))));
    Var_1911 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 33))));
    Var_1910 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 34))));
    Var_1909 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 35))));
    Var_1908 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 36))));
    Var_1907 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 37))));
    Var_1906 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 38))));
    Var_1905 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 39))));
    Var_1904 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 40))));
    switch (UnboxedFloat_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_OptTuple_36_36 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 0) = (MR_Box) (packed_word_12);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 1) = (MR_Box) ((((packed_word_13 & (~((MR_Unsigned) 8192U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 13))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 2) = (MR_Box) (packed_word_14);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 3) = ((MR_Box) (Var_1941));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 4) = ((MR_Box) (Var_1940));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 5) = ((MR_Box) (Var_1939));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 6) = ((MR_Box) (Var_1938));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 7) = ((MR_Box) (Var_1937));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 8) = ((MR_Box) (Var_1936));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 9) = ((MR_Box) (Var_1935));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 10) = ((MR_Box) (Var_1934));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 11) = ((MR_Box) (Var_1933));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 12) = ((MR_Box) (Var_1932));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 13) = ((MR_Box) (Var_1931));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 14) = ((MR_Box) (Var_1930));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 15) = ((MR_Box) (Var_1929));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 16) = ((MR_Box) (Var_1928));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 17) = ((MR_Box) (Var_1927));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 18) = ((MR_Box) (Var_1926));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 19) = ((MR_Box) (Var_1925));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 20) = ((MR_Box) (Var_1924));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 21) = ((MR_Box) (Var_1923));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 22) = ((MR_Box) (Var_1922));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 23) = ((MR_Box) (Var_1921));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 24) = ((MR_Box) (Var_1920));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 25) = ((MR_Box) (Var_1919));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 26) = ((MR_Box) (Var_1918));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 27) = ((MR_Box) (Var_1917));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 28) = ((MR_Box) (Var_1916));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 29) = ((MR_Box) (Var_1915));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 30) = ((MR_Box) (Var_1914));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 31) = ((MR_Box) (Var_1913));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 32) = ((MR_Box) (Var_1912));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 33) = ((MR_Box) (Var_1911));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 34) = ((MR_Box) (Var_1910));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 35) = ((MR_Box) (Var_1909));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 36) = ((MR_Box) (Var_1908));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 37) = ((MR_Box) (Var_1907));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 38) = ((MR_Box) (Var_1906));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 39) = ((MR_Box) (Var_1905));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 40) = ((MR_Box) (Var_1904));
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_OptTuple_36_36 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 0) = (MR_Box) (packed_word_12);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 1) = (MR_Box) ((((packed_word_13 & (~((MR_Unsigned) 8192U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 13))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 2) = (MR_Box) (packed_word_14);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 3) = ((MR_Box) (Var_1941));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 4) = ((MR_Box) (Var_1940));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 5) = ((MR_Box) (Var_1939));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 6) = ((MR_Box) (Var_1938));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 7) = ((MR_Box) (Var_1937));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 8) = ((MR_Box) (Var_1936));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 9) = ((MR_Box) (Var_1935));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 10) = ((MR_Box) (Var_1934));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 11) = ((MR_Box) (Var_1933));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 12) = ((MR_Box) (Var_1932));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 13) = ((MR_Box) (Var_1931));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 14) = ((MR_Box) (Var_1930));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 15) = ((MR_Box) (Var_1929));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 16) = ((MR_Box) (Var_1928));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 17) = ((MR_Box) (Var_1927));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 18) = ((MR_Box) (Var_1926));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 19) = ((MR_Box) (Var_1925));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 20) = ((MR_Box) (Var_1924));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 21) = ((MR_Box) (Var_1923));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 22) = ((MR_Box) (Var_1922));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 23) = ((MR_Box) (Var_1921));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 24) = ((MR_Box) (Var_1920));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 25) = ((MR_Box) (Var_1919));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 26) = ((MR_Box) (Var_1918));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 27) = ((MR_Box) (Var_1917));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 28) = ((MR_Box) (Var_1916));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 29) = ((MR_Box) (Var_1915));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 30) = ((MR_Box) (Var_1914));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 31) = ((MR_Box) (Var_1913));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 32) = ((MR_Box) (Var_1912));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 33) = ((MR_Box) (Var_1911));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 34) = ((MR_Box) (Var_1910));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 35) = ((MR_Box) (Var_1909));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 36) = ((MR_Box) (Var_1908));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 37) = ((MR_Box) (Var_1907));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 38) = ((MR_Box) (Var_1906));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 39) = ((MR_Box) (Var_1905));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, 40) = ((MR_Box) (Var_1904));
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 272, &UnboxedInt64s_13);
    switch (UnboxedInt64s_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_1618 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 3))));
          MR_Integer Var_1619 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 4))));
          MR_Integer Var_1620 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 5))));
          MR_Integer Var_1621 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 6))));
          MR_Integer Var_1622 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 7))));
          MR_Integer Var_1623 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 8))));
          MR_Integer Var_1624 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 9))));
          MR_Integer Var_1625 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 10))));
          MR_Integer Var_1626 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 11))));
          MR_Integer Var_1627 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 12))));
          MR_Integer Var_1628 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 13))));
          MR_Integer Var_1629 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 14))));
          MR_Integer Var_1630 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 15))));
          MR_Integer Var_1631 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 16))));
          MR_Integer Var_1632 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 17))));
          MR_Integer Var_1633 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 18))));
          MR_Integer Var_1634 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 19))));
          MR_Integer Var_1635 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 20))));
          MR_Integer Var_1636 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 21))));
          MR_Integer Var_1637 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 22))));
          MR_Integer Var_1638 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 23))));
          MR_Integer Var_1639 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 24))));
          MR_Integer Var_1640 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 25))));
          MR_Integer Var_1641 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 26))));
          MR_Integer Var_1642 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 27))));
          MR_Integer Var_1643 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 28))));
          MR_Integer Var_1644 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 29))));
          MR_Integer Var_1645 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 30))));
          MR_Integer Var_1646 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 31))));
          MR_Integer Var_1647 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 32))));
          MR_Integer Var_1648 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 33))));
          MR_Integer Var_1649 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 34))));
          MR_Integer Var_1650 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 35))));
          MR_Integer Var_1651 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 36))));
          MR_Integer Var_1652 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 37))));
          MR_Integer Var_1653 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 38))));
          MR_Integer Var_1654 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 39))));
          MR_String Var_1655 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 40))));
          MR_Unsigned packed_word_15 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 0)));
          MR_Unsigned packed_word_16 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 1)));
          MR_Unsigned packed_word_17 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 2)));

          {
            STATE_VARIABLE_OptTuple_41_41 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 0) = (MR_Box) (packed_word_15);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 1) = (MR_Box) ((((packed_word_16 & (~((MR_Unsigned) 4096U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 12))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 2) = (MR_Box) (packed_word_17);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 3) = ((MR_Box) (Var_1618));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 4) = ((MR_Box) (Var_1619));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 5) = ((MR_Box) (Var_1620));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 6) = ((MR_Box) (Var_1621));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 7) = ((MR_Box) (Var_1622));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 8) = ((MR_Box) (Var_1623));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 9) = ((MR_Box) (Var_1624));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 10) = ((MR_Box) (Var_1625));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 11) = ((MR_Box) (Var_1626));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 12) = ((MR_Box) (Var_1627));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 13) = ((MR_Box) (Var_1628));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 14) = ((MR_Box) (Var_1629));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 15) = ((MR_Box) (Var_1630));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 16) = ((MR_Box) (Var_1631));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 17) = ((MR_Box) (Var_1632));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 18) = ((MR_Box) (Var_1633));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 19) = ((MR_Box) (Var_1634));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 20) = ((MR_Box) (Var_1635));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 21) = ((MR_Box) (Var_1636));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 22) = ((MR_Box) (Var_1637));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 23) = ((MR_Box) (Var_1638));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 24) = ((MR_Box) (Var_1639));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 25) = ((MR_Box) (Var_1640));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 26) = ((MR_Box) (Var_1641));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 27) = ((MR_Box) (Var_1642));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 28) = ((MR_Box) (Var_1643));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 29) = ((MR_Box) (Var_1644));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 30) = ((MR_Box) (Var_1645));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 31) = ((MR_Box) (Var_1646));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 32) = ((MR_Box) (Var_1647));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 33) = ((MR_Box) (Var_1648));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 34) = ((MR_Box) (Var_1649));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 35) = ((MR_Box) (Var_1650));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 36) = ((MR_Box) (Var_1651));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 37) = ((MR_Box) (Var_1652));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 38) = ((MR_Box) (Var_1653));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 39) = ((MR_Box) (Var_1654));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 40) = ((MR_Box) (Var_1655));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_1494 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 3))));
          MR_Integer Var_1495 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 4))));
          MR_Integer Var_1496 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 5))));
          MR_Integer Var_1497 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 6))));
          MR_Integer Var_1498 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 7))));
          MR_Integer Var_1499 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 8))));
          MR_Integer Var_1500 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 9))));
          MR_Integer Var_1501 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 10))));
          MR_Integer Var_1502 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 11))));
          MR_Integer Var_1503 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 12))));
          MR_Integer Var_1504 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 13))));
          MR_Integer Var_1505 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 14))));
          MR_Integer Var_1506 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 15))));
          MR_Integer Var_1507 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 16))));
          MR_Integer Var_1508 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 17))));
          MR_Integer Var_1509 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 18))));
          MR_Integer Var_1510 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 19))));
          MR_Integer Var_1511 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 20))));
          MR_Integer Var_1512 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 21))));
          MR_Integer Var_1513 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 22))));
          MR_Integer Var_1514 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 23))));
          MR_Integer Var_1515 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 24))));
          MR_Integer Var_1516 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 25))));
          MR_Integer Var_1517 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 26))));
          MR_Integer Var_1518 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 27))));
          MR_Integer Var_1519 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 28))));
          MR_Integer Var_1520 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 29))));
          MR_Integer Var_1521 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 30))));
          MR_Integer Var_1522 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 31))));
          MR_Integer Var_1523 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 32))));
          MR_Integer Var_1524 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 33))));
          MR_Integer Var_1525 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 34))));
          MR_Integer Var_1526 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 35))));
          MR_Integer Var_1527 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 36))));
          MR_Integer Var_1528 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 37))));
          MR_Integer Var_1529 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 38))));
          MR_Integer Var_1530 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 39))));
          MR_String Var_1531 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 40))));
          MR_Unsigned packed_word_18 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 0)));
          MR_Unsigned packed_word_19 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 1)));
          MR_Unsigned packed_word_20 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_36_36, (MR_Integer) 2)));

          {
            STATE_VARIABLE_OptTuple_41_41 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 0) = (MR_Box) (packed_word_18);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 1) = (MR_Box) ((((packed_word_19 & (~((MR_Unsigned) 4096U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 12))));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 2) = (MR_Box) (packed_word_20);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 3) = ((MR_Box) (Var_1494));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 4) = ((MR_Box) (Var_1495));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 5) = ((MR_Box) (Var_1496));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 6) = ((MR_Box) (Var_1497));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 7) = ((MR_Box) (Var_1498));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 8) = ((MR_Box) (Var_1499));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 9) = ((MR_Box) (Var_1500));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 10) = ((MR_Box) (Var_1501));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 11) = ((MR_Box) (Var_1502));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 12) = ((MR_Box) (Var_1503));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 13) = ((MR_Box) (Var_1504));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 14) = ((MR_Box) (Var_1505));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 15) = ((MR_Box) (Var_1506));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 16) = ((MR_Box) (Var_1507));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 17) = ((MR_Box) (Var_1508));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 18) = ((MR_Box) (Var_1509));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 19) = ((MR_Box) (Var_1510));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 20) = ((MR_Box) (Var_1511));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 21) = ((MR_Box) (Var_1512));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 22) = ((MR_Box) (Var_1513));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 23) = ((MR_Box) (Var_1514));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 24) = ((MR_Box) (Var_1515));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 25) = ((MR_Box) (Var_1516));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 26) = ((MR_Box) (Var_1517));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 27) = ((MR_Box) (Var_1518));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 28) = ((MR_Box) (Var_1519));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 29) = ((MR_Box) (Var_1520));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 30) = ((MR_Box) (Var_1521));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 31) = ((MR_Box) (Var_1522));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 32) = ((MR_Box) (Var_1523));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 33) = ((MR_Box) (Var_1524));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 34) = ((MR_Box) (Var_1525));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 35) = ((MR_Box) (Var_1526));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 36) = ((MR_Box) (Var_1527));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 37) = ((MR_Box) (Var_1528));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 38) = ((MR_Box) (Var_1529));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 39) = ((MR_Box) (Var_1530));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, 40) = ((MR_Box) (Var_1531));
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 287, &NonLocalGotos_14);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 289, &AsmLabels_15);
    succeeded = (NonLocalGotos_14 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (AsmLabels_15 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer Var_1742 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 3))));
      MR_Integer Var_1743 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 4))));
      MR_Integer Var_1744 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 5))));
      MR_Integer Var_1745 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 6))));
      MR_Integer Var_1746 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 7))));
      MR_Integer Var_1747 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 8))));
      MR_Integer Var_1748 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 9))));
      MR_Integer Var_1749 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 10))));
      MR_Integer Var_1750 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 11))));
      MR_Integer Var_1751 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 12))));
      MR_Integer Var_1752 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 13))));
      MR_Integer Var_1753 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 14))));
      MR_Integer Var_1754 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 15))));
      MR_Integer Var_1755 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 16))));
      MR_Integer Var_1756 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 17))));
      MR_Integer Var_1757 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 18))));
      MR_Integer Var_1758 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 19))));
      MR_Integer Var_1759 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 20))));
      MR_Integer Var_1760 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 21))));
      MR_Integer Var_1761 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 22))));
      MR_Integer Var_1762 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 23))));
      MR_Integer Var_1763 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 24))));
      MR_Integer Var_1764 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 25))));
      MR_Integer Var_1765 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 26))));
      MR_Integer Var_1766 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 27))));
      MR_Integer Var_1767 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 28))));
      MR_Integer Var_1768 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 29))));
      MR_Integer Var_1769 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 30))));
      MR_Integer Var_1770 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 31))));
      MR_Integer Var_1771 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 32))));
      MR_Integer Var_1772 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 33))));
      MR_Integer Var_1773 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 34))));
      MR_Integer Var_1774 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 35))));
      MR_Integer Var_1775 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 36))));
      MR_Integer Var_1776 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 37))));
      MR_Integer Var_1777 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 38))));
      MR_Integer Var_1778 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 39))));
      MR_String Var_1779 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 40))));
      MR_Unsigned packed_word_21 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 0)));
      MR_Unsigned packed_word_22 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 1)));
      MR_Unsigned packed_word_23 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 2)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_OptTuple_19 = base;
        MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (packed_word_21);
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((((packed_word_22 & (~((MR_Unsigned) 2048U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 11))));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) (packed_word_23);
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_1742));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_1743));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_1744));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1745));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1746));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_1747));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1748));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1749));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_1750));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_1751));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_1752));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_1753));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_1754));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_1755));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_1756));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_1757));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_1758));
        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_1759));
        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_1760));
        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_1761));
        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_1762));
        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_1763));
        MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_1764));
        MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_1765));
        MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_1766));
        MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_1767));
        MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_1768));
        MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (Var_1769));
        MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (Var_1770));
        MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (Var_1771));
        MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (Var_1772));
        MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (Var_1773));
        MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (Var_1774));
        MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (Var_1775));
        MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (Var_1776));
        MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) (Var_1777));
        MR_hl_field(MR_mktag(0), base, 39) = ((MR_Box) (Var_1778));
        MR_hl_field(MR_mktag(0), base, 40) = ((MR_Box) (Var_1779));
      }
    }
    else
    {
      MR_Integer Var_1866 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 3))));
      MR_Integer Var_1867 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 4))));
      MR_Integer Var_1868 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 5))));
      MR_Integer Var_1869 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 6))));
      MR_Integer Var_1870 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 7))));
      MR_Integer Var_1871 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 8))));
      MR_Integer Var_1872 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 9))));
      MR_Integer Var_1873 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 10))));
      MR_Integer Var_1874 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 11))));
      MR_Integer Var_1875 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 12))));
      MR_Integer Var_1876 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 13))));
      MR_Integer Var_1877 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 14))));
      MR_Integer Var_1878 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 15))));
      MR_Integer Var_1879 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 16))));
      MR_Integer Var_1880 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 17))));
      MR_Integer Var_1881 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 18))));
      MR_Integer Var_1882 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 19))));
      MR_Integer Var_1883 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 20))));
      MR_Integer Var_1884 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 21))));
      MR_Integer Var_1885 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 22))));
      MR_Integer Var_1886 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 23))));
      MR_Integer Var_1887 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 24))));
      MR_Integer Var_1888 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 25))));
      MR_Integer Var_1889 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 26))));
      MR_Integer Var_1890 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 27))));
      MR_Integer Var_1891 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 28))));
      MR_Integer Var_1892 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 29))));
      MR_Integer Var_1893 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 30))));
      MR_Integer Var_1894 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 31))));
      MR_Integer Var_1895 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 32))));
      MR_Integer Var_1896 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 33))));
      MR_Integer Var_1897 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 34))));
      MR_Integer Var_1898 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 35))));
      MR_Integer Var_1899 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 36))));
      MR_Integer Var_1900 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 37))));
      MR_Integer Var_1901 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 38))));
      MR_Integer Var_1902 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 39))));
      MR_String Var_1903 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 40))));
      MR_Unsigned packed_word_24 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 0)));
      MR_Unsigned packed_word_25 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 1)));
      MR_Unsigned packed_word_26 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_41_41, (MR_Integer) 2)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_OptTuple_19 = base;
        MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (packed_word_24);
        MR_hl_field(MR_mktag(0), base, 1) = (MR_Box) ((((packed_word_25 & (~((MR_Unsigned) 2048U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 11))));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) (packed_word_26);
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_1866));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_1867));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_1868));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_1869));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_1870));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_1871));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_1872));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_1873));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_1874));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_1875));
        MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (Var_1876));
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_1877));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_1878));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_1879));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_1880));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_1881));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_1882));
        MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (Var_1883));
        MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (Var_1884));
        MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (Var_1885));
        MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (Var_1886));
        MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (Var_1887));
        MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (Var_1888));
        MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (Var_1889));
        MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (Var_1890));
        MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (Var_1891));
        MR_hl_field(MR_mktag(0), base, 29) = ((MR_Box) (Var_1892));
        MR_hl_field(MR_mktag(0), base, 30) = ((MR_Box) (Var_1893));
        MR_hl_field(MR_mktag(0), base, 31) = ((MR_Box) (Var_1894));
        MR_hl_field(MR_mktag(0), base, 32) = ((MR_Box) (Var_1895));
        MR_hl_field(MR_mktag(0), base, 33) = ((MR_Box) (Var_1896));
        MR_hl_field(MR_mktag(0), base, 34) = ((MR_Box) (Var_1897));
        MR_hl_field(MR_mktag(0), base, 35) = ((MR_Box) (Var_1898));
        MR_hl_field(MR_mktag(0), base, 36) = ((MR_Box) (Var_1899));
        MR_hl_field(MR_mktag(0), base, 37) = ((MR_Box) (Var_1900));
        MR_hl_field(MR_mktag(0), base, 38) = ((MR_Box) (Var_1901));
        MR_hl_field(MR_mktag(0), base, 39) = ((MR_Box) (Var_1902));
        MR_hl_field(MR_mktag(0), base, 40) = ((MR_Box) (Var_1903));
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__check_option_values_21_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_112,
  MR_Word * STATE_VARIABLE_OptionTable_113,
  MR_Word * Target_23,
  MR_Word * GC_Method_24,
  MR_Word * TermNorm_25,
  MR_Word * Term2Norm_26,
  MR_Word * TraceLevel_27,
  MR_Word * TraceSuppress_28,
  MR_Word * SSTraceLevel_29,
  MR_Word * MaybeThreadSafe_30,
  MR_Word * C_CompilerType_31,
  MR_Word * CSharp_CompilerType_32,
  MR_Word * ReuseStrategy_33,
  MR_Word * MaybeFeedbackInfo_34,
  MR_Word * HostEnvType_35,
  MR_Word * SystemEnvType_36,
  MR_Word * TargetEnvType_37,
  MR_Word * LimitErrorContextsMap_38,
  MR_Word * STATE_VARIABLE_Specs_114)
{
  {
    MR_bool succeeded;
    MR_String TargetStr_41;
    MR_String GC_MethodStr_44;
    MR_Integer FactTablePercentFull_47;
    MR_Integer IncompleteSwitchThreshold_49;
    MR_String TermNormStr_51;
    MR_String Term2NormStr_54;
    MR_Word ForceDisableTracing_57;
    MR_String SuppressStr_64;
    MR_Word ForceDisableSSDB_67;
    MR_String MaybeThreadSafeStr_72;
    MR_String DumpAlias_75;
    MR_String C_CompilerTypeStr_79;
    MR_String CSharp_CompilerTypeStr_82;
    MR_String ReuseConstraintStr_85;
    MR_Integer ReuseConstraintArgNum_86;
    MR_String FeedbackFile_89;
    MR_String HostEnvTypeStr_95;
    MR_String SystemEnvTypeStr_98;
    MR_String TargetEnvTypeStr_101;
    MR_Word LimitErrorContextsOptionStrs_104;
    MR_Word BadLimitErrorContextsOptions_105;
    MR_Word STATE_VARIABLE_Specs_152_152;
    MR_Word STATE_VARIABLE_Specs_191_191;
    MR_Word STATE_VARIABLE_Specs_212_212;
    MR_Word STATE_VARIABLE_Specs_233_233;
    MR_Word STATE_VARIABLE_Specs_266_266;
    MR_Word STATE_VARIABLE_Specs_299_299;
    MR_Word STATE_VARIABLE_Specs_321_321;
    MR_Word STATE_VARIABLE_Specs_378_378;
    MR_Word STATE_VARIABLE_Specs_415_415;
    MR_Word STATE_VARIABLE_Specs_449_449;
    MR_Word STATE_VARIABLE_OptionTable_453_453;
    MR_Word STATE_VARIABLE_Specs_480_480;
    MR_String STATE_VARIABLE_DumpOptions_482_482;
    MR_String STATE_VARIABLE_DumpOptions_483_483;
    MR_String STATE_VARIABLE_DumpOptions_486_486;
    MR_String STATE_VARIABLE_DumpOptions_490_490;
    MR_String STATE_VARIABLE_DumpOptions_514_514;
    MR_Word Var_517;
    MR_Word STATE_VARIABLE_Specs_556_556;
    MR_Word STATE_VARIABLE_Specs_592_592;
    MR_Word STATE_VARIABLE_Specs_624_624;
    MR_Word STATE_VARIABLE_Specs_629_629;
    MR_Word STATE_VARIABLE_Specs_666_666;
    MR_Word STATE_VARIABLE_Specs_704_704;
    MR_Word STATE_VARIABLE_Specs_742_742;
    MR_Word TargetPrime_42;
    MR_Word GC_MethodPrime_45;
    MR_Integer Var_194;
    MR_Integer Var_215;
    MR_Word TermNormPrime_52;
    MR_Word Term2NormPrime_55;
    MR_Word TraceSuppressPrime_65;
    MR_Word MaybeThreadSafePrime_73;
    MR_Char Var_485;
    MR_Char Var_489;
    MR_Char Var_513;
    MR_Word C_CompilerTypePrime_80;
    MR_Word CSharp_CompilerTypePrime_83;
    MR_Word ReuseStrategyPrime_87;
    MR_Word HostEnvTypePrime_96;
    MR_Word SystemEnvTypePrime_99;
    MR_Word TargetEnvTypePrime_102;

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 209, &TargetStr_41);
    succeeded = libs__globals__convert_target_2_p_0(TargetStr_41, &TargetPrime_42);
    if (succeeded)
    {
      *Target_23 = TargetPrime_42;
      STATE_VARIABLE_Specs_152_152 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TargetSpec_43;
      MR_Word Var_119;
      MR_Word Var_122;
      MR_Word Var_123;
      MR_Word Var_134;
      MR_Word Var_135;

      *Target_23 = (MR_Integer) 0;
      {
        Var_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_123, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_123, 1) = ((MR_Box) (TargetStr_41));
      }
      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Var_123));
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18])));
      }
      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
      }
      Var_135 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[22])));
      Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_135, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      TargetSpec_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, Var_134);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_43, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_152_152);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 246, &GC_MethodStr_44);
    succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_44, &GC_MethodPrime_45);
    if (succeeded)
    {
      *GC_Method_24 = GC_MethodPrime_45;
      STATE_VARIABLE_Specs_191_191 = STATE_VARIABLE_Specs_152_152;
    }
    else
    {
      MR_Word GCMethodSpec_46;
      MR_Word Var_154;
      MR_Word Var_157;
      MR_Word Var_158;
      MR_Word Var_169;
      MR_Word Var_170;

      *GC_Method_24 = (MR_Integer) 1;
      {
        Var_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_158, 1) = ((MR_Box) (GC_MethodStr_44));
      }
      {
        Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) (Var_158));
        MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[25])));
      }
      {
        Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_157));
      }
      Var_170 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[31])));
      Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_170, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      GCMethodSpec_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_154, Var_169);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_46, STATE_VARIABLE_Specs_152_152, &STATE_VARIABLE_Specs_191_191);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 348, &FactTablePercentFull_47);
    succeeded = (FactTablePercentFull_47 >= (MR_Integer) 1);
    if (succeeded)
    {
      Var_194 = (MR_Integer) 100;
      succeeded = (FactTablePercentFull_47 <= Var_194);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_212_212 = STATE_VARIABLE_Specs_191_191;
    else
    {
      MR_Word FactTablePercentFullSpec_48;
      MR_Word Var_197;
      MR_Word Var_198;

      {
        Var_198 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_198, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_198, 1) = ((MR_Box) (FactTablePercentFull_47));
      }
      {
        Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_197, 0) = ((MR_Box) (Var_198));
        MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36])));
      }
      {
        FactTablePercentFullSpec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_48, 1) = ((MR_Box) (Var_197));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), FactTablePercentFullSpec_48, STATE_VARIABLE_Specs_191_191, &STATE_VARIABLE_Specs_212_212);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 54, &IncompleteSwitchThreshold_49);
    succeeded = (IncompleteSwitchThreshold_49 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_215 = (MR_Integer) 100;
      succeeded = (IncompleteSwitchThreshold_49 <= Var_215);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_233_233 = STATE_VARIABLE_Specs_212_212;
    else
    {
      MR_Word IncompleteSwitchThresholdSpec_50;
      MR_Word Var_218;
      MR_Word Var_219;

      {
        Var_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_219, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_219, 1) = ((MR_Box) (IncompleteSwitchThreshold_49));
      }
      {
        Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Var_219));
        MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
      }
      {
        IncompleteSwitchThresholdSpec_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_50, 1) = ((MR_Box) (Var_218));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_50, STATE_VARIABLE_Specs_212_212, &STATE_VARIABLE_Specs_233_233);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 506, &TermNormStr_51);
    succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_51, &TermNormPrime_52);
    if (succeeded)
    {
      *TermNorm_25 = TermNormPrime_52;
      STATE_VARIABLE_Specs_266_266 = STATE_VARIABLE_Specs_233_233;
    }
    else
    {
      MR_Word TermNormSpec_53;
      MR_Word Var_235;
      MR_Word Var_238;
      MR_Word Var_239;
      MR_Word Var_250;
      MR_Word Var_251;

      *TermNorm_25 = (MR_Integer) 0;
      {
        Var_239 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_239, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_239, 1) = ((MR_Box) (TermNormStr_51));
      }
      {
        Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (Var_239));
        MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[44])));
      }
      {
        Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) (Var_238));
      }
      Var_251 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47])));
      Var_250 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_251, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      TermNormSpec_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_235, Var_250);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_53, STATE_VARIABLE_Specs_233_233, &STATE_VARIABLE_Specs_266_266);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 512, &Term2NormStr_54);
    succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_54, &Term2NormPrime_55);
    if (succeeded)
    {
      *Term2Norm_26 = Term2NormPrime_55;
      STATE_VARIABLE_Specs_299_299 = STATE_VARIABLE_Specs_266_266;
    }
    else
    {
      MR_Word Term2NormSpec_56;
      MR_Word Var_268;
      MR_Word Var_271;
      MR_Word Var_272;
      MR_Word Var_283;
      MR_Word Var_284;

      *Term2Norm_26 = (MR_Integer) 0;
      {
        Var_272 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_272, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_272, 1) = ((MR_Box) (TermNormStr_51));
      }
      {
        Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_271, 0) = ((MR_Box) (Var_272));
        MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[50])));
      }
      {
        Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) (Var_271));
      }
      Var_284 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47])));
      Var_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_284, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      Term2NormSpec_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_268, Var_283);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Term2NormSpec_56, STATE_VARIABLE_Specs_266_266, &STATE_VARIABLE_Specs_299_299);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 150, &ForceDisableTracing_57);
    switch (ForceDisableTracing_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Trace_58;
          MR_Word ExecTrace_59;
          MR_Word DeclDebug_60;
          MR_Word MaybeTraceLevel_61;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 138, &Trace_58);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 217, &ExecTrace_59);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 218, &DeclDebug_60);
          succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_58, ExecTrace_59, DeclDebug_60, &MaybeTraceLevel_61);
          if (succeeded)
            if ((MaybeTraceLevel_61 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InconsistentTraceLevelSpec_62;
              MR_Word Var_306;
              MR_Word Var_307;

              *TraceLevel_27 = libs__trace_params__trace_level_none_0_f_0();
              {
                Var_307 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_307, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_307, 1) = ((MR_Box) (Trace_58));
              }
              {
                Var_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_306, 0) = ((MR_Box) (Var_307));
                MR_hl_field(MR_mktag(1), Var_306, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[56])));
              }
              {
                InconsistentTraceLevelSpec_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[202])));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_62, 1) = ((MR_Box) (Var_306));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InconsistentTraceLevelSpec_62, STATE_VARIABLE_Specs_299_299, &STATE_VARIABLE_Specs_321_321);
            }
            else
            {
              *TraceLevel_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceLevel_61, (MR_Integer) 0))));
              STATE_VARIABLE_Specs_321_321 = STATE_VARIABLE_Specs_299_299;
            }
          else
          {
            MR_Word BadTraceLevelSpec_63;
            MR_Word Var_322;
            MR_Word Var_325;
            MR_Word Var_326;
            MR_Word Var_337;
            MR_Word Var_338;

            *TraceLevel_27 = libs__trace_params__trace_level_none_0_f_0();
            {
              Var_326 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_326, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_326, 1) = ((MR_Box) (Trace_58));
            }
            {
              Var_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_325, 0) = ((MR_Box) (Var_326));
              MR_hl_field(MR_mktag(1), Var_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])));
            }
            {
              Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_322, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
              MR_hl_field(MR_mktag(1), Var_322, 1) = ((MR_Box) (Var_325));
            }
            Var_338 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[65])));
            Var_337 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_338, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
            BadTraceLevelSpec_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_322, Var_337);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BadTraceLevelSpec_63, STATE_VARIABLE_Specs_299_299, &STATE_VARIABLE_Specs_321_321);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *TraceLevel_27 = libs__trace_params__trace_level_none_0_f_0();
          STATE_VARIABLE_Specs_321_321 = STATE_VARIABLE_Specs_299_299;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 149, &SuppressStr_64);
    succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_64, &TraceSuppressPrime_65);
    if (succeeded)
    {
      *TraceSuppress_28 = TraceSuppressPrime_65;
      STATE_VARIABLE_Specs_378_378 = STATE_VARIABLE_Specs_321_321;
    }
    else
    {
      MR_Word TraceSuppressSpec_66;
      MR_Word Var_363;
      MR_Word Var_364;

      *TraceSuppress_28 = libs__trace_params__default_trace_suppress_0_f_0();
      {
        Var_364 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_364, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_364, 1) = ((MR_Box) (SuppressStr_64));
      }
      {
        Var_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_363, 0) = ((MR_Box) (Var_364));
        MR_hl_field(MR_mktag(1), Var_363, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[68])));
      }
      {
        TraceSuppressSpec_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_66, 1) = ((MR_Box) (Var_363));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TraceSuppressSpec_66, STATE_VARIABLE_Specs_321_321, &STATE_VARIABLE_Specs_378_378);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 154, &ForceDisableSSDB_67);
    switch (ForceDisableSSDB_67) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SSTrace_68;
          MR_Word SSDB_69;
          MR_Word SSTL_70;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 265, &SSTrace_68);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 264, &SSDB_69);
          succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_68, SSDB_69, &SSTL_70);
          if (succeeded)
          {
            *SSTraceLevel_29 = SSTL_70;
            STATE_VARIABLE_Specs_415_415 = STATE_VARIABLE_Specs_378_378;
          }
          else
          {
            MR_Word SSDBSpec_71;
            MR_Word Var_382;
            MR_Word Var_385;
            MR_Word Var_386;
            MR_Word Var_397;
            MR_Word Var_398;

            *SSTraceLevel_29 = (MR_Integer) 0;
            {
              Var_386 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_386, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_386, 1) = ((MR_Box) (SSTrace_68));
            }
            {
              Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (Var_386));
              MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[71])));
            }
            {
              Var_382 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_382, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
              MR_hl_field(MR_mktag(1), Var_382, 1) = ((MR_Box) (Var_385));
            }
            Var_398 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[75])));
            Var_397 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_398, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
            SSDBSpec_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_382, Var_397);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SSDBSpec_71, STATE_VARIABLE_Specs_378_378, &STATE_VARIABLE_Specs_415_415);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *SSTraceLevel_29 = (MR_Integer) 0;
          STATE_VARIABLE_Specs_415_415 = STATE_VARIABLE_Specs_378_378;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 257, &MaybeThreadSafeStr_72);
    succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_72, &MaybeThreadSafePrime_73);
    if (succeeded)
    {
      *MaybeThreadSafe_30 = MaybeThreadSafePrime_73;
      STATE_VARIABLE_Specs_449_449 = STATE_VARIABLE_Specs_415_415;
    }
    else
    {
      MR_Word MTSSpec_74;
      MR_Word Var_417;
      MR_Word Var_420;
      MR_Word Var_421;
      MR_Word Var_435;
      MR_Word Var_436;

      *MaybeThreadSafe_30 = (MR_Integer) 0;
      {
        Var_421 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_421, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_421, 1) = ((MR_Box) (MaybeThreadSafeStr_72));
      }
      {
        Var_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_420, 0) = ((MR_Box) (Var_421));
        MR_hl_field(MR_mktag(1), Var_420, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])));
      }
      {
        Var_417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_417, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_417, 1) = ((MR_Box) (Var_420));
      }
      Var_436 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])));
      Var_435 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_436, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      MTSSpec_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_417, Var_435);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MTSSpec_74, STATE_VARIABLE_Specs_415_415, &STATE_VARIABLE_Specs_449_449);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 178, &DumpAlias_75);
    succeeded = (strcmp(DumpAlias_75, (MR_String) "") == 0);
    if (succeeded)
    {
      STATE_VARIABLE_Specs_480_480 = STATE_VARIABLE_Specs_449_449;
      STATE_VARIABLE_OptionTable_453_453 = STATE_VARIABLE_OptionTable_0_112;
    }
    else
    {
      MR_String AliasDumpOptions_76;

      succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_75, &AliasDumpOptions_76);
      if (succeeded)
      {
        MR_Word Var_452;

        {
          Var_452 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_452, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_452, 1) = ((MR_Box) (AliasDumpOptions_76));
        }
        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 179)), ((MR_Box) (Var_452)), STATE_VARIABLE_OptionTable_0_112, &STATE_VARIABLE_OptionTable_453_453);
        STATE_VARIABLE_Specs_480_480 = STATE_VARIABLE_Specs_449_449;
      }
      else
      {
        MR_Word DumpAliasSpec_77;
        MR_Word Var_456;
        MR_Word Var_457;

        {
          Var_457 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_457, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_457, 1) = ((MR_Box) (DumpAlias_75));
        }
        {
          Var_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_456, 0) = ((MR_Box) (Var_457));
          MR_hl_field(MR_mktag(1), Var_456, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])));
        }
        {
          DumpAliasSpec_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_77, 1) = ((MR_Box) (Var_456));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_77, STATE_VARIABLE_Specs_449_449, &STATE_VARIABLE_Specs_480_480);
        STATE_VARIABLE_OptionTable_453_453 = STATE_VARIABLE_OptionTable_0_112;
      }
    }
    mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_453_453, ((MR_Box) ((MR_Integer) 179)), &STATE_VARIABLE_DumpOptions_482_482);
    succeeded = (strcmp(STATE_VARIABLE_DumpOptions_482_482, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_DumpOptions_483_483 = (MR_String) "x";
    else
      STATE_VARIABLE_DumpOptions_483_483 = STATE_VARIABLE_DumpOptions_482_482;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_483_483, (MR_Char) 121);
    if (succeeded)
    {
      Var_485 = (MR_Char) 97;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_483_483, Var_485);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_486_486 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_483_483);
    else
      STATE_VARIABLE_DumpOptions_486_486 = STATE_VARIABLE_DumpOptions_483_483;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_486_486, (MR_Char) 97);
    if (succeeded)
    {
      Var_489 = (MR_Char) 117;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_486_486, Var_489);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_490_490 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_486_486);
    else
      STATE_VARIABLE_DumpOptions_490_490 = STATE_VARIABLE_DumpOptions_486_486;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 65);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 66);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 68);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 71);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 80);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 82);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 83);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 98);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 99);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 100);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 102);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 103);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 105);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 108);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 109);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 110);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 112);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 115);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 116);
                                        if (!(succeeded))
                                        {
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 117);
                                          if (!(succeeded))
                                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, (MR_Char) 122);
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
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      Var_513 = (MR_Char) 120;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_490_490, Var_513);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_514_514 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_490_490);
    else
      STATE_VARIABLE_DumpOptions_514_514 = STATE_VARIABLE_DumpOptions_490_490;
    {
      Var_517 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_517, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_517, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_514_514));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 179)), ((MR_Box) (Var_517)), STATE_VARIABLE_OptionTable_453_453, STATE_VARIABLE_OptionTable_113);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 544, &C_CompilerTypeStr_79);
    succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_79, &C_CompilerTypePrime_80);
    if (succeeded)
    {
      *C_CompilerType_31 = C_CompilerTypePrime_80;
      STATE_VARIABLE_Specs_556_556 = STATE_VARIABLE_Specs_480_480;
    }
    else
    {
      MR_Word CCTpec_81;
      MR_Word Var_520;
      MR_Word Var_523;
      MR_Word Var_524;
      MR_Word Var_538;
      MR_Word Var_539;

      *C_CompilerType_31 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_524, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_524, 1) = ((MR_Box) (C_CompilerTypeStr_79));
      }
      {
        Var_523 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_523, 0) = ((MR_Box) (Var_524));
        MR_hl_field(MR_mktag(1), Var_523, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[96])));
      }
      {
        Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_520, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_520, 1) = ((MR_Box) (Var_523));
      }
      Var_539 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[100])));
      Var_538 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_539, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      CCTpec_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_520, Var_538);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_81, STATE_VARIABLE_Specs_480_480, &STATE_VARIABLE_Specs_556_556);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 545, &CSharp_CompilerTypeStr_82);
    succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_82, &CSharp_CompilerTypePrime_83);
    if (succeeded)
    {
      *CSharp_CompilerType_32 = CSharp_CompilerTypePrime_83;
      STATE_VARIABLE_Specs_592_592 = STATE_VARIABLE_Specs_556_556;
    }
    else
    {
      MR_Word CSCSpec_84;
      MR_Word Var_558;
      MR_Word Var_561;
      MR_Word Var_562;
      MR_Word Var_576;
      MR_Word Var_577;

      *CSharp_CompilerType_32 = (MR_Integer) 2;
      {
        Var_562 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_562, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_562, 1) = ((MR_Box) (CSharp_CompilerTypeStr_82));
      }
      {
        Var_561 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_561, 0) = ((MR_Box) (Var_562));
        MR_hl_field(MR_mktag(1), Var_561, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[103])));
      }
      {
        Var_558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_558, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_558, 1) = ((MR_Box) (Var_561));
      }
      Var_577 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[105])));
      Var_576 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_577, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      CSCSpec_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_558, Var_576);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_84, STATE_VARIABLE_Specs_556_556, &STATE_VARIABLE_Specs_592_592);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 497, &ReuseConstraintStr_85);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 498, &ReuseConstraintArgNum_86);
    succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_85, ReuseConstraintArgNum_86, &ReuseStrategyPrime_87);
    if (succeeded)
    {
      *ReuseStrategy_33 = ReuseStrategyPrime_87;
      STATE_VARIABLE_Specs_624_624 = STATE_VARIABLE_Specs_592_592;
    }
    else
    {
      MR_Word ReuseConstrSpec_88;
      MR_Word Var_595;
      MR_Word Var_598;
      MR_Word Var_599;
      MR_Word Var_610;
      MR_Word Var_611;

      *ReuseStrategy_33 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_599 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_599, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_599, 1) = ((MR_Box) (ReuseConstraintStr_85));
      }
      {
        Var_598 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_598, 0) = ((MR_Box) (Var_599));
        MR_hl_field(MR_mktag(1), Var_598, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])));
      }
      {
        Var_595 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_595, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_595, 1) = ((MR_Box) (Var_598));
      }
      Var_611 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110])));
      Var_610 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_611, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      ReuseConstrSpec_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_595, Var_610);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_88, STATE_VARIABLE_Specs_592_592, &STATE_VARIABLE_Specs_624_624);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 708, &FeedbackFile_89);
    succeeded = (strcmp(FeedbackFile_89, (MR_String) "") == 0);
    if (succeeded)
    {
      *MaybeFeedbackInfo_34 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_629_629 = STATE_VARIABLE_Specs_624_624;
    }
    else
    {
      MR_Word FeedbackReadResult_91;

      mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_89, (MR_Word) ((MR_Unsigned) 0U), &FeedbackReadResult_91);
      if (((MR_tag((MR_Word) FeedbackReadResult_91)) == (MR_Integer) 1))
      {
        MR_Word Error_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FeedbackReadResult_91, (MR_Integer) 0))));
        MR_String ErrorMessage_94;
        MR_Word Var_628;
        MR_Word Var_630;

        mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_89, Error_93, &ErrorMessage_94);
        {
          Var_630 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_630, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_630, 1) = ((MR_Box) (ErrorMessage_94));
        }
        {
          Var_628 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_628, 0) = ((MR_Box) (Var_630));
          MR_hl_field(MR_mktag(1), Var_628, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_628, STATE_VARIABLE_Specs_624_624, &STATE_VARIABLE_Specs_629_629);
        *MaybeFeedbackInfo_34 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word FeedbackInfo_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FeedbackReadResult_91, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFeedbackInfo_34 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FeedbackInfo_92));
        }
        STATE_VARIABLE_Specs_629_629 = STATE_VARIABLE_Specs_624_624;
      }
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 685, &HostEnvTypeStr_95);
    succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_95, &HostEnvTypePrime_96);
    if (succeeded)
    {
      *HostEnvType_35 = HostEnvTypePrime_96;
      STATE_VARIABLE_Specs_666_666 = STATE_VARIABLE_Specs_629_629;
    }
    else
    {
      MR_Word HostEnvSpec_97;
      MR_Word Var_633;
      MR_Word Var_636;
      MR_Word Var_637;
      MR_Word Var_648;
      MR_Word Var_649;

      *HostEnvType_35 = (MR_Integer) 0;
      {
        Var_637 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_637, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_637, 1) = ((MR_Box) (HostEnvTypeStr_95));
      }
      {
        Var_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_636, 0) = ((MR_Box) (Var_637));
        MR_hl_field(MR_mktag(1), Var_636, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])));
      }
      {
        Var_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_633, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_633, 1) = ((MR_Box) (Var_636));
      }
      Var_649 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117])));
      Var_648 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_649, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      HostEnvSpec_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_633, Var_648);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_97, STATE_VARIABLE_Specs_629_629, &STATE_VARIABLE_Specs_666_666);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 686, &SystemEnvTypeStr_98);
    succeeded = (strcmp(SystemEnvTypeStr_98, (MR_String) "") == 0);
    if (succeeded)
    {
      SystemEnvTypePrime_99 = *HostEnvType_35;
      succeeded = MR_TRUE;
    }
    else
      succeeded = libs__globals__convert_env_type_2_p_0(SystemEnvTypeStr_98, &SystemEnvTypePrime_99);
    if (succeeded)
    {
      *SystemEnvType_36 = SystemEnvTypePrime_99;
      STATE_VARIABLE_Specs_704_704 = STATE_VARIABLE_Specs_666_666;
    }
    else
    {
      MR_Word SystemEnvSpec_100;
      MR_Word Var_668;
      MR_Word Var_671;
      MR_Word Var_672;
      MR_Word Var_686;
      MR_Word Var_687;

      *SystemEnvType_36 = (MR_Integer) 0;
      {
        Var_672 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_672, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_672, 1) = ((MR_Box) (SystemEnvTypeStr_98));
      }
      {
        Var_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_671, 0) = ((MR_Box) (Var_672));
        MR_hl_field(MR_mktag(1), Var_671, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[120])));
      }
      {
        Var_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_668, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_668, 1) = ((MR_Box) (Var_671));
      }
      Var_687 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117])));
      Var_686 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_687, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      SystemEnvSpec_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_668, Var_686);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_100, STATE_VARIABLE_Specs_666_666, &STATE_VARIABLE_Specs_704_704);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 687, &TargetEnvTypeStr_101);
    succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_101, &TargetEnvTypePrime_102);
    if (succeeded)
    {
      *TargetEnvType_37 = TargetEnvTypePrime_102;
      STATE_VARIABLE_Specs_742_742 = STATE_VARIABLE_Specs_704_704;
    }
    else
    {
      MR_Word TargetEnvTypeSpec_103;
      MR_Word Var_706;
      MR_Word Var_709;
      MR_Word Var_710;
      MR_Word Var_724;
      MR_Word Var_725;

      *TargetEnvType_37 = (MR_Integer) 0;
      {
        Var_710 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_710, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_710, 1) = ((MR_Box) (TargetEnvTypeStr_101));
      }
      {
        Var_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_709, 0) = ((MR_Box) (Var_710));
        MR_hl_field(MR_mktag(1), Var_709, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[123])));
      }
      {
        Var_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_706, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
        MR_hl_field(MR_mktag(1), Var_706, 1) = ((MR_Box) (Var_709));
      }
      Var_725 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117])));
      Var_724 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_725, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      TargetEnvTypeSpec_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_706, Var_724);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetEnvTypeSpec_103, STATE_VARIABLE_Specs_704_704, &STATE_VARIABLE_Specs_742_742);
    }
    libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 78, &LimitErrorContextsOptionStrs_104);
    libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_104, &BadLimitErrorContextsOptions_105, LimitErrorContextsMap_38);
    if ((BadLimitErrorContextsOptions_105 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_114 = STATE_VARIABLE_Specs_742_742;
    else
    {
      MR_Word Var_802 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_105, (MR_Integer) 1))));
      MR_String Var_803 = ((MR_String) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_105, (MR_Integer) 0))));

      if ((Var_802 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LECSpec_107;
        MR_Word Var_767;
        MR_Word Var_768;

        {
          Var_768 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_768, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_768, 1) = ((MR_Box) (Var_803));
        }
        {
          Var_767 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_767, 0) = ((MR_Box) (Var_768));
          MR_hl_field(MR_mktag(1), Var_767, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[126])));
        }
        {
          LECSpec_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LECSpec_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
          MR_hl_field(MR_mktag(1), LECSpec_107, 1) = ((MR_Box) (Var_767));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_107, STATE_VARIABLE_Specs_742_742, STATE_VARIABLE_Specs_114);
      }
      else
      {
        MR_Word BadPieces_111;
        MR_Word Var_749;
        MR_Word LECSpec_783;

        BadPieces_111 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(BadLimitErrorContextsOptions_105);
        Var_749 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), BadPieces_111, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[126])));
        LECSpec_783 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[204])), Var_749);
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_783, STATE_VARIABLE_Specs_742_742, STATE_VARIABLE_Specs_114);
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * AccumulatingValue_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word AccumulatingValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      AccumulatingValuePrime_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1))));
      *AccumulatingValue_6 = AccumulatingValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not accumulating");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_accumulating_option\'/3", Var_11);
        return;
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_String * StringValue_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_String StringValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      StringValuePrime_8 = ((MR_String) ((MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1))));
      *StringValue_6 = StringValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not a string");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_string_option\'/3", Var_11);
        return;
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Integer * IntValue_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Integer IntValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 2);
    if (succeeded)
    {
      IntValuePrime_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), OptionValue_7, (MR_Integer) 0))));
      *IntValue_6 = IntValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not an int");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_int_option\'/3", Var_11);
        return;
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * BoolValue_6)
{
  {
    MR_bool succeeded;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word BoolValuePrime_8;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 1);
    if (succeeded)
    {
      BoolValuePrime_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OptionValue_7, (MR_Integer) 0))) & (MR_Integer) 1);
      *BoolValue_6 = BoolValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_11;

      OptionStr_9 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) (Option_5)));
      Var_11 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) " is not a bool");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", Var_11);
        return;
      }
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
  MR_String HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(HeadVar__1_1, 0)) {
        case (MR_Integer) 65:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "ALL"))
            case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          if (((((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 108))))
            switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 68:
                if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "allD"))
                  case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 109:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "cmp"))
                case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "codegen"))
                case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "ctgc"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 100:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "detism"))
                case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "du"))
                case_num_0 = (MR_Integer) 7;
              break;
          }
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "lco"))
            case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 9;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "mintrans"))
                      case_num_0 = (MR_Integer) 10;
                    break;
                }
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mm"))
                case_num_0 = (MR_Integer) 11;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "most"))
                case_num_0 = (MR_Integer) 12;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "osv"))
            case_num_0 = (MR_Integer) 13;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "paths"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "petdr"))
                case_num_0 = (MR_Integer) 15;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "poly"))
                case_num_0 = (MR_Integer) 16;
              break;
          }
          break;
        case (MR_Integer) 115:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "statevar"))
            case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "trans"))
            case_num_0 = (MR_Integer) 18;
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 97))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vanessa"))
                  case_num_0 = (MR_Integer) 19;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vars"))
                  case_num_0 = (MR_Integer) 20;
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
        *HeadVar__2_2 = ((&libs__handle_options_vector_common_2[0 + case_num_0]))->libs__handle_options__vector_common_type_2_0__vct_2_f_0;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void mercury__libs__handle_options__init(void)
{
}

void mercury__libs__handle_options__init_type_tables(void)
{
}

void mercury__libs__handle_options__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__handle_options__required_init(void)
{
	libs__handle_options__user_init_pred_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__handle_options__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.handle_options.
