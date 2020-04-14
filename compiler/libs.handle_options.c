/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2020-04-14
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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s {
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1;
  MR_Box * libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2;
  MR_Cont libs__handle_options__separate_option_args_5_p_0_4_env_0__cont;
  void * libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr;
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2;
};

struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s {
  MR_Box * libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1;
  MR_Box * libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2;
  MR_Cont libs__handle_options__handle_given_options_7_p_0_4_env_0__cont;
  void * libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr;
  MR_Word libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2147__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1573);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1567);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2154__1_1_f_0(
  MR_String LambdaHeadVar__1_1562);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2153__1_1_f_0(
  MR_String LambdaHeadVar__1_1557);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2123__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1544);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1538);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2101__2_2_p_0(
  MR_Word HeadVar__1_1531,
  MR_String HeadVar__2_1680);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2101__1_2_p_0(
  MR_String HeadVar__1_1532,
  MR_String HeadVar__2_1682);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2083__1_3_f_0(
  MR_String TargetArch_145,
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1519);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2047__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1500);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2037__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1490);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2024__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1473);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2004__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1458);

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

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

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
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
  MR_Word MaybeOptionTable0_6,
  MR_Word * STATE_VARIABLE_Specs_41,
  MR_Word * Globals_8);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

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
  MR_Word OpMode_26,
  MR_Word Target_27,
  MR_Word GC_Method_28,
  MR_Word TagsMethod0_29,
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
  MR_Word STATE_VARIABLE_Specs_0_215,
  MR_Word * STATE_VARIABLE_Specs_216,
  MR_Word * STATE_VARIABLE_Globals_217);

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String OptionDescr_6,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
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
libs__handle_options__postprocess_options_lowlevel_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15);

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_117,
  MR_Word * STATE_VARIABLE_OptionTable_118,
  MR_Word * Target_24,
  MR_Word * GC_Method_25,
  MR_Word * TagsMethod_26,
  MR_Word * TermNorm_27,
  MR_Word * Term2Norm_28,
  MR_Word * TraceLevel_29,
  MR_Word * TraceSuppress_30,
  MR_Word * SSTraceLevel_31,
  MR_Word * MaybeThreadSafe_32,
  MR_Word * C_CompilerType_33,
  MR_Word * CSharp_CompilerType_34,
  MR_Word * ReuseStrategy_35,
  MR_Word * MaybeFeedbackInfo_36,
  MR_Word * HostEnvType_37,
  MR_Word * SystemEnvType_38,
  MR_Word * TargetEnvType_39,
  MR_Word * LimitErrorContextsMap_40,
  MR_Word * STATE_VARIABLE_Specs_119);

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


static /* final */ const MR_Box libs__handle_options_scalar_common_1[242][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[2][4];


/* sealed */ struct libs__handle_options__vector_common_type_2_0_s {
  const MR_String libs__handle_options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[21];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[242][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2020 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: only one of the following options"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "erlang")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gc"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "automatic")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "accurate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "boehm")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "conservative")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--tags"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "high")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "low")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[38])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--inform-incomplete-switch-threshold"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[77])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "msvc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "which disables tags."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-tag-bits 0"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Using"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is either unspecified or invalid."))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[140])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-tag-bits"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[142])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the value of the"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[170])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[178])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[181])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[193])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[201])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[212])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[219]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 222 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 223 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 225 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 226 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 228 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 229 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 231 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 232 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 234 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[234]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 236 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[236]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 238 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 239 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 240 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 241 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 999999))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 8 */
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
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_special_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0))
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
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3] = {
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
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_8[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[3])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[4])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[5]))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[6])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[7])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[8])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[9]))
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
#line 2473 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 2473 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2473 "handle_options.m"
{
#line 2473 "handle_options.m"
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

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0)
  }
};

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2147__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1573)
{
  {
    MR_String LambdaHeadVar__2_1574;
    MR_String Var_1575;
    MR_String Var_1576;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1576;

    conv1_Var_1576 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1573)));
    Var_1576 = ((MR_String) (conv1_Var_1576));
    Var_1575 = mercury__dir__f_slash_2_f_0(Var_1576, (MR_String) "Mercury");
    LambdaHeadVar__2_1574 = mercury__dir__f_slash_2_f_0(Var_1575, (MR_String) "hrls");
    return LambdaHeadVar__2_1574;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1567)
{
  {
    MR_String LambdaHeadVar__2_1568;
    MR_String Var_1569;
    MR_String Var_1570;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1570;

    conv1_Var_1570 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1567)));
    Var_1570 = ((MR_String) (conv1_Var_1570));
    Var_1569 = mercury__dir__f_slash_2_f_0(Var_1570, (MR_String) "Mercury");
    LambdaHeadVar__2_1568 = mercury__dir__f_slash_2_f_0(Var_1569, (MR_String) "mihs");
    return LambdaHeadVar__2_1568;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2154__1_1_f_0(
  MR_String LambdaHeadVar__1_1562)
{
  {
    MR_String LambdaHeadVar__2_1563;
    MR_String Var_1564;

    Var_1564 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1562, (MR_String) "Mercury");
    LambdaHeadVar__2_1563 = mercury__dir__f_slash_2_f_0(Var_1564, (MR_String) "hrls");
    return LambdaHeadVar__2_1563;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2153__1_1_f_0(
  MR_String LambdaHeadVar__1_1557)
{
  {
    MR_String LambdaHeadVar__2_1558;
    MR_String Var_1559;

    Var_1559 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1557, (MR_String) "Mercury");
    LambdaHeadVar__2_1558 = mercury__dir__f_slash_2_f_0(Var_1559, (MR_String) "mihs");
    return LambdaHeadVar__2_1558;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2123__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1544)
{
  {
    MR_String LambdaHeadVar__2_1545;
    MR_String Var_1546;
    MR_String Var_1547;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1547;

    conv1_Var_1547 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1544)));
    Var_1547 = ((MR_String) (conv1_Var_1547));
    Var_1546 = mercury__dir__f_slash_2_f_0(Var_1547, (MR_String) "Mercury");
    LambdaHeadVar__2_1545 = mercury__dir__f_slash_2_f_0(Var_1546, (MR_String) "inits");
    return LambdaHeadVar__2_1545;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(
  MR_Word ToGradeSubdir_180,
  MR_String LambdaHeadVar__1_1538)
{
  {
    MR_String LambdaHeadVar__2_1539;
    MR_String Var_1540;
    MR_String Var_1541;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_180, (MR_Integer) 1))));
    MR_Box conv1_Var_1541;

    conv1_Var_1541 = func_0(((MR_Box) (ToGradeSubdir_180)), ((MR_Box) (LambdaHeadVar__1_1538)));
    Var_1541 = ((MR_String) (conv1_Var_1541));
    Var_1540 = mercury__dir__f_slash_2_f_0(Var_1541, (MR_String) "Mercury");
    LambdaHeadVar__2_1539 = mercury__dir__f_slash_2_f_0(Var_1540, (MR_String) "lib");
    return LambdaHeadVar__2_1539;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2101__2_2_p_0(
  MR_Word HeadVar__1_1531,
  MR_String HeadVar__2_1680)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_1531, ((MR_Box) (HeadVar__2_1680)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2101__1_2_p_0(
  MR_String HeadVar__1_1532,
  MR_String HeadVar__2_1682)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1532, HeadVar__2_1682) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2083__1_3_f_0(
  MR_String TargetArch_145,
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1519)
{
  {
    MR_String LambdaHeadVar__2_1520;
    MR_String Var_1521;
    MR_String Var_1522;

    Var_1522 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1519, (MR_String) "Mercury");
    Var_1521 = mercury__dir__f_slash_2_f_0(Var_1522, GradeString_160);
    LambdaHeadVar__2_1520 = mercury__dir__f_slash_2_f_0(Var_1521, TargetArch_145);
    return LambdaHeadVar__2_1520;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2047__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1500)
{
  {
    MR_String LambdaHeadVar__2_1501;
    MR_String Var_1502;

    Var_1502 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1500, (MR_String) "modules");
    LambdaHeadVar__2_1501 = mercury__dir__f_slash_2_f_0(Var_1502, GradeString_160);
    return LambdaHeadVar__2_1501;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2037__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1490)
{
  {
    MR_String LambdaHeadVar__2_1491;
    MR_String Var_1492;

    Var_1492 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_160);
    LambdaHeadVar__2_1491 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_1490, Var_1492);
    return LambdaHeadVar__2_1491;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2024__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1473)
{
  {
    MR_String LambdaHeadVar__2_1474;
    MR_String Var_1475;
    MR_String Var_1476;

    Var_1476 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1473, (MR_String) "lib");
    Var_1475 = mercury__dir__f_slash_2_f_0(Var_1476, GradeString_160);
    LambdaHeadVar__2_1474 = mercury__dir__f_slash_2_f_0(Var_1475, (MR_String) "inc");
    return LambdaHeadVar__2_1474;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2004__1_2_f_0(
  MR_String GradeString_160,
  MR_String LambdaHeadVar__1_1458)
{
  {
    MR_String LambdaHeadVar__2_1459;
    MR_String Var_1460;

    Var_1460 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1458, (MR_String) "lib");
    LambdaHeadVar__2_1459 = mercury__dir__f_slash_2_f_0(Var_1460, GradeString_160);
    return LambdaHeadVar__2_1459;
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

	X =  X_1 ;
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

	X =  (MR_Integer) 0 ;
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

    mercury__library__version_2_p_0(&Version_4, &Fullarch_5);
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[241])));
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
    mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2020 The Mercury team\n");
    mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
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
          mercury__io__write_strings_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4])));
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

	X =  (MR_Integer) 1 ;
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
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__io__nl_2_p_0();
    parse_tree__error_util__write_error_specs_ignore_4_p_0(Specs_6, Globals_5);
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
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])));
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

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont)((env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s env;

    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont = cont;
    (env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      libs__options__option_defaults_2_p_0(&(env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1, &(env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_3, &env);
    }
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
  MR_Word Args0_6,
  MR_Word * OptionArgs_7,
  MR_Word * Args_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;

    mercury__getopt_io__process_options_7_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[1])), Args0_6, OptionArgs_7, Args_8, &Var_10);
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
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
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
  MR_Word MaybeOptionTable0_6,
  MR_Word * STATE_VARIABLE_Specs_41,
  MR_Word * Globals_8)
{
  if (((MR_tag((MR_Word) MaybeOptionTable0_6)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionTable0_6, (MR_Integer) 0))));
    MR_Word OptionTablePieces_11;
    MR_Word OptionTableMsg_12;
    MR_Word OptionTableSpec_13;
    MR_Word Var_68;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_79;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;

    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ErrorMessage_10));
    }
    {
      OptionTablePieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (OptionTablePieces_11));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableMsg_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 3) = ((MR_Box) (Var_73));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (OptionTableMsg_12));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.convert_option_table_result_to_globals\'/5"));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 3) = ((MR_Box) (Var_79));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_41 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OptionTableSpec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_93, &Var_94, &Var_95, Globals_8);
  }
  else
  {
    MR_Word OptionTable0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionTable0_6, (MR_Integer) 0))));
    MR_Word OptionTable_15;
    MR_Word Target_16;
    MR_Word GC_Method_17;
    MR_Word TagsMethod_18;
    MR_Word TermNorm_19;
    MR_Word Term2Norm_20;
    MR_Word TraceLevel_21;
    MR_Word TraceSuppress_22;
    MR_Word SSTraceLevel_23;
    MR_Word MaybeThreadSafe_24;
    MR_Word C_CompilerType_25;
    MR_Word CSharp_CompilerType_26;
    MR_Word ReuseStrategy_27;
    MR_Word MaybeFeedbackInfo_28;
    MR_Word HostEnvType_29;
    MR_Word SystemEnvType_30;
    MR_Word TargetEnvType_31;
    MR_Word LimitErrorContextsMap_32;
    MR_Word OpMode_33;
    MR_Word OtherOpModes_34;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word STATE_VARIABLE_Specs_64_64;

    libs__handle_options__check_option_values_22_p_0(OptionTable0_14, &OptionTable_15, &Target_16, &GC_Method_17, &TagsMethod_18, &TermNorm_19, &Term2Norm_20, &TraceLevel_21, &TraceSuppress_22, &SSTraceLevel_23, &MaybeThreadSafe_24, &C_CompilerType_25, &CSharp_CompilerType_26, &ReuseStrategy_27, &MaybeFeedbackInfo_28, &HostEnvType_29, &SystemEnvType_30, &TargetEnvType_31, &LimitErrorContextsMap_32, &STATE_VARIABLE_Specs_44_44);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_15, &OpMode_33, &OtherOpModes_34);
    if ((OtherOpModes_34 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_44_44;
    else
    {
      MR_Word OpModeStrs_37;
      MR_Word OpModePieces_38;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (OptionTable_15));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (OpMode_33));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (OtherOpModes_34));
      }
      OpModeStrs_37 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_46, Var_47);
      Var_56 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(OpModeStrs_37);
      Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_56, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      OpModePieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[8])), Var_55);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_38, STATE_VARIABLE_Specs_44_44, &STATE_VARIABLE_Specs_64_64);
    }
    if ((STATE_VARIABLE_Specs_64_64 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__handle_options__convert_options_to_globals_24_p_0(OptionTable_15, OpMode_33, Target_16, GC_Method_17, TagsMethod_18, TermNorm_19, Term2Norm_20, TraceLevel_21, TraceSuppress_22, SSTraceLevel_23, MaybeThreadSafe_24, C_CompilerType_25, CSharp_CompilerType_26, ReuseStrategy_27, MaybeFeedbackInfo_28, HostEnvType_29, SystemEnvType_30, TargetEnvType_31, LimitErrorContextsMap_32, STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Specs_41, Globals_8);
    else
    {
      libs__handle_options__generate_default_globals_3_p_0(Globals_8);
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_64_64;
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont)((env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s env;

    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont = cont;
    (env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      libs__options__option_defaults_2_p_0(&(env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1, &(env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__handle_given_options_7_p_0_3, &env);
    }
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
  MR_Word * STATE_VARIABLE_Globals_20)
{
  {
    MR_bool succeeded;
    MR_Word Result_15;
    MR_Word STATE_VARIABLE_Globals_38_38;

    mercury__getopt_io__process_options_7_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[0])), Args0_8, OptionArgs_9, Args_10, &Result_15);
    libs__handle_options__convert_option_table_result_to_globals_5_p_0(Result_15, Specs_11, &STATE_VARIABLE_Globals_38_38);
    if ((*Specs_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpMode_18;
      MR_Word Smart_19;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;

      libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_38_38, &OpMode_18);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 135, &Smart_19);
      succeeded = (Smart_19 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) OpMode_18)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_18, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_41, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (Var_43 == (MR_Integer) 2);
            }
          }
        }
      }
      if (succeeded)
        libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", STATE_VARIABLE_Globals_38_38, STATE_VARIABLE_Globals_20);
      else
        *STATE_VARIABLE_Globals_20 = STATE_VARIABLE_Globals_38_38;
    }
    else
      *STATE_VARIABLE_Globals_20 = STATE_VARIABLE_Globals_38_38;
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
    MR_String conv10_LambdaHeadVar__2_1574;

    conv10_LambdaHeadVar__2_1574 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2147__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_1574));
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
    MR_String conv9_LambdaHeadVar__2_1568;

    conv9_LambdaHeadVar__2_1568 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2145__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_1568));
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
    MR_String conv8_LambdaHeadVar__2_1563;

    conv8_LambdaHeadVar__2_1563 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2154__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_1563));
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
    MR_String conv7_LambdaHeadVar__2_1558;

    conv7_LambdaHeadVar__2_1558 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2153__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_1558));
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
    MR_String conv6_LambdaHeadVar__2_1545;

    conv6_LambdaHeadVar__2_1545 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2123__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_1545));
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
    MR_String conv5_LambdaHeadVar__2_1539;

    conv5_LambdaHeadVar__2_1539 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_1539));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2101__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2101__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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
    MR_String conv4_LambdaHeadVar__2_1520;

    conv4_LambdaHeadVar__2_1520 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2083__1_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_1520));
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
    MR_String conv3_LambdaHeadVar__2_1501;

    conv3_LambdaHeadVar__2_1501 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2047__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_1501));
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
    MR_String conv2_LambdaHeadVar__2_1491;

    conv2_LambdaHeadVar__2_1491 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2037__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_1491));
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
    MR_String conv1_LambdaHeadVar__2_1474;

    conv1_LambdaHeadVar__2_1474 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2024__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_1474));
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
    MR_String conv0_LambdaHeadVar__2_1459;

    conv0_LambdaHeadVar__2_1459 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2004__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_1459));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
  MR_Word OptionTable0_25,
  MR_Word OpMode_26,
  MR_Word Target_27,
  MR_Word GC_Method_28,
  MR_Word TagsMethod0_29,
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
  MR_Word STATE_VARIABLE_Specs_0_215,
  MR_Word * STATE_VARIABLE_Specs_216,
  MR_Word * STATE_VARIABLE_Globals_217)
{
  {
    MR_bool succeeded;
    MR_String InstallCmd_47;
    MR_Word FileInstallCmd_48;
    MR_String EventSetFileName0_50;
    MR_Word GCIsConservative_53;
    MR_Word PregeneratedDist_54;
    MR_Integer NumPtagBits0_55;
    MR_Integer NumPtagBits1_56;
    MR_Integer NumPtagBits_57;
    MR_Word TagsMethod_59;
    MR_Word GradeSupportsParConj_60;
    MR_Word Parallel_61;
    MR_Word Threadscope_62;
    MR_Word ImplicitParallelism_64;
    MR_Word LibLinkages0_68;
    MR_Word InvokedByMMCMake_71;
    MR_Word TransOpt_73;
    MR_Word InterModOpt_75;
    MR_Word InterModAnalysis_76;
    MR_Word MaybeStandaloneInt_78;
    MR_Word ExtraInitFunctions_79;
    MR_Word Smart_84;
    MR_Word VeryVerbose_85;
    MR_Word Statistics_86;
    MR_Integer DebugLiveness_87;
    MR_Integer DebugModesPredId_91;
    MR_Word DebugUnneededCodePredNames_92;
    MR_Word DebugOptPredIdStrs_95;
    MR_Word DebugOptPredNames_96;
    MR_Word DebugIntermoduleAnalysis_101;
    MR_Word DumpHLDSPredIds_102;
    MR_Word UseTrail_108;
    MR_Word HighLevelCode_109;
    MR_Word UseMinimalModelStackCopy_110;
    MR_Word UseMinimalModelOwnStacks_111;
    MR_Word UseMinimalModel_112;
    MR_Word ProfOptimized_120;
    MR_String ExpComp_121;
    MR_Word TraceOptimized_122;
    MR_Word TraceLevelIsNone_123;
    MR_Word ProfileDeep_125;
    MR_Word RecordTermSizesAsWords_128;
    MR_Word RecordTermSizesAsCells_129;
    MR_Word PutNondetEnvOnHeap_133;
    MR_Word DisablePneg_135;
    MR_Word DisableCut_136;
    MR_Word DumpHLDSStages_137;
    MR_Word DumpTraceStages_138;
    MR_Word ParallelLiveness_139;
    MR_Word ParallelCodeGen_140;
    MR_String TargetArch_145;
    MR_String MercuryLinkage_146;
    MR_Word DefaultRuntimeLibraryDirs_147;
    MR_Word MaybeStdLibDir_148;
    MR_Word MaybeConfDir_154;
    MR_Word ConfigFile_157;
    MR_Word MercuryLibDirs_159;
    MR_String GradeString_160;
    MR_Word UseSearchDirs_174;
    MR_Word UseGradeSubdirs_177;
    MR_Word SearchLibFilesDirs_178;
    MR_Word IntermodDirs2_179;
    MR_Word ToGradeSubdir_180;
    MR_Word LinkLibDirs_189;
    MR_Word InitDirs_192;
    MR_Word UseSubdirs_193;
    MR_Word WarnNonTailRecSelf_203;
    MR_Word WarnNonTailRecMutual_204;
    MR_Word BackendForeignLanguages_210;
    MR_Word CurrentBackendForeignLanguage_211;
    MR_Integer CompareSpec_214;
    MR_Word STATE_VARIABLE_Globals_222_222;
    MR_Word STATE_VARIABLE_Specs_223_223;
    MR_Word STATE_VARIABLE_Globals_229_229;
    MR_Word STATE_VARIABLE_Globals_236_236;
    MR_Word STATE_VARIABLE_Globals_261_261;
    MR_Word STATE_VARIABLE_Specs_292_292;
    MR_Word Var_294;
    MR_Word STATE_VARIABLE_Globals_295_295;
    MR_Word STATE_VARIABLE_Globals_296_296;
    MR_Word STATE_VARIABLE_Specs_314_314;
    MR_Word STATE_VARIABLE_Globals_337_337;
    MR_Word STATE_VARIABLE_Specs_358_358;
    MR_Word Var_361;
    MR_Word STATE_VARIABLE_Globals_362_362;
    MR_Word STATE_VARIABLE_Globals_366_366;
    MR_Word STATE_VARIABLE_Globals_491_491;
    MR_Word STATE_VARIABLE_Globals_496_496;
    MR_Word Var_500;
    MR_Word STATE_VARIABLE_Globals_501_501;
    MR_Word STATE_VARIABLE_Globals_506_506;
    MR_Word Var_510;
    MR_Word STATE_VARIABLE_Globals_511_511;
    MR_Word STATE_VARIABLE_Globals_516_516;
    MR_Word STATE_VARIABLE_Globals_521_521;
    MR_Word STATE_VARIABLE_Globals_526_526;
    MR_Word STATE_VARIABLE_Globals_531_531;
    MR_Word STATE_VARIABLE_Globals_540_540;
    MR_Word STATE_VARIABLE_Globals_545_545;
    MR_Word STATE_VARIABLE_Globals_551_551;
    MR_Word STATE_VARIABLE_Specs_572_572;
    MR_Word STATE_VARIABLE_Specs_593_593;
    MR_Word STATE_VARIABLE_Globals_596_596;
    MR_Word STATE_VARIABLE_Specs_618_618;
    MR_Word STATE_VARIABLE_Globals_622_622;
    MR_Word STATE_VARIABLE_Globals_627_627;
    MR_Word STATE_VARIABLE_Globals_632_632;
    MR_Word STATE_VARIABLE_Globals_637_637;
    MR_Word STATE_VARIABLE_Globals_642_642;
    MR_Word STATE_VARIABLE_Globals_647_647;
    MR_Word STATE_VARIABLE_Globals_652_652;
    MR_Word STATE_VARIABLE_Globals_658_658;
    MR_Word STATE_VARIABLE_Globals_663_663;
    MR_Word STATE_VARIABLE_Globals_668_668;
    MR_Word STATE_VARIABLE_Globals_673_673;
    MR_Word STATE_VARIABLE_Globals_678_678;
    MR_Word STATE_VARIABLE_Globals_682_682;
    MR_Word STATE_VARIABLE_Globals_687_687;
    MR_Word STATE_VARIABLE_Globals_692_692;
    MR_Word STATE_VARIABLE_Globals_698_698;
    MR_Word STATE_VARIABLE_Globals_707_707;
    MR_Word STATE_VARIABLE_Globals_713_713;
    MR_Word STATE_VARIABLE_Globals_719_719;
    MR_Word STATE_VARIABLE_Globals_736_736;
    MR_Word STATE_VARIABLE_Globals_741_741;
    MR_Word STATE_VARIABLE_Globals_746_746;
    MR_Word STATE_VARIABLE_Globals_751_751;
    MR_Word STATE_VARIABLE_Globals_757_757;
    MR_Word STATE_VARIABLE_Globals_762_762;
    MR_Word STATE_VARIABLE_Globals_767_767;
    MR_Word STATE_VARIABLE_Globals_772_772;
    MR_Word STATE_VARIABLE_Globals_780_780;
    MR_Word STATE_VARIABLE_Globals_784_784;
    MR_Word STATE_VARIABLE_Globals_790_790;
    MR_Word STATE_VARIABLE_Globals_795_795;
    MR_Word STATE_VARIABLE_Globals_801_801;
    MR_Word STATE_VARIABLE_Globals_813_813;
    MR_Word STATE_VARIABLE_Globals_817_817;
    MR_Word STATE_VARIABLE_Globals_822_822;
    MR_Word STATE_VARIABLE_Globals_827_827;
    MR_Word STATE_VARIABLE_Globals_832_832;
    MR_Word STATE_VARIABLE_Specs_847_847;
    MR_Word STATE_VARIABLE_Specs_919_919;
    MR_Word STATE_VARIABLE_Globals_922_922;
    MR_Word STATE_VARIABLE_Globals_926_926;
    MR_Word STATE_VARIABLE_Globals_931_931;
    MR_Word STATE_VARIABLE_Globals_936_936;
    MR_Word STATE_VARIABLE_Globals_940_940;
    MR_Word STATE_VARIABLE_Globals_944_944;
    MR_Word STATE_VARIABLE_Globals_949_949;
    MR_Word STATE_VARIABLE_Globals_954_954;
    MR_Word STATE_VARIABLE_Globals_959_959;
    MR_Word STATE_VARIABLE_Globals_964_964;
    MR_Word STATE_VARIABLE_Globals_970_970;
    MR_Word STATE_VARIABLE_Globals_975_975;
    MR_Word STATE_VARIABLE_Globals_980_980;
    MR_Word STATE_VARIABLE_Globals_985_985;
    MR_Word STATE_VARIABLE_Globals_990_990;
    MR_Word STATE_VARIABLE_Globals_995_995;
    MR_Word STATE_VARIABLE_Globals_1000_1000;
    MR_Word STATE_VARIABLE_Globals_1005_1005;
    MR_Word STATE_VARIABLE_Globals_1010_1010;
    MR_Word STATE_VARIABLE_Globals_1015_1015;
    MR_Word STATE_VARIABLE_Globals_1020_1020;
    MR_Word STATE_VARIABLE_Globals_1025_1025;
    MR_Word STATE_VARIABLE_Globals_1030_1030;
    MR_Word STATE_VARIABLE_Globals_1127_1127;
    MR_Word STATE_VARIABLE_Globals_1132_1132;
    MR_Word STATE_VARIABLE_Specs_1144_1144;
    MR_Word STATE_VARIABLE_Globals_1156_1156;
    MR_Word STATE_VARIABLE_Specs_1166_1166;
    MR_Word STATE_VARIABLE_Globals_1173_1173;
    MR_Word STATE_VARIABLE_Specs_1192_1192;
    MR_Word STATE_VARIABLE_Globals_1196_1196;
    MR_Word STATE_VARIABLE_Globals_1201_1201;
    MR_Word STATE_VARIABLE_Globals_1206_1206;
    MR_Word STATE_VARIABLE_Globals_1211_1211;
    MR_Word STATE_VARIABLE_Globals_1216_1216;
    MR_Word STATE_VARIABLE_Globals_1221_1221;
    MR_Word STATE_VARIABLE_Globals_1226_1226;
    MR_Word STATE_VARIABLE_Globals_1231_1231;
    MR_Word STATE_VARIABLE_Globals_1275_1275;
    MR_Word STATE_VARIABLE_Specs_1293_1293;
    MR_Word STATE_VARIABLE_Globals_1297_1297;
    MR_Word STATE_VARIABLE_Globals_1302_1302;
    MR_Word STATE_VARIABLE_Globals_1307_1307;
    MR_Word STATE_VARIABLE_Globals_1312_1312;
    MR_Word STATE_VARIABLE_Globals_1317_1317;
    MR_Word STATE_VARIABLE_Globals_1322_1322;
    MR_Word STATE_VARIABLE_Globals_1327_1327;
    MR_Word STATE_VARIABLE_Globals_1332_1332;
    MR_Word STATE_VARIABLE_Globals_1337_1337;
    MR_Word STATE_VARIABLE_Globals_1342_1342;
    MR_Word STATE_VARIABLE_Globals_1348_1348;
    MR_Word STATE_VARIABLE_Globals_1352_1352;
    MR_Word STATE_VARIABLE_Globals_1360_1360;
    MR_Word STATE_VARIABLE_Globals_1365_1365;
    MR_Word STATE_VARIABLE_Globals_1370_1370;
    MR_Word STATE_VARIABLE_Globals_1375_1375;
    MR_Word STATE_VARIABLE_Globals_1380_1380;
    MR_Word STATE_VARIABLE_Globals_1385_1385;
    MR_Word STATE_VARIABLE_Globals_1390_1390;
    MR_Word STATE_VARIABLE_Globals_1396_1396;
    MR_Word STATE_VARIABLE_Globals_1401_1401;
    MR_Word STATE_VARIABLE_Globals_1405_1405;
    MR_Word STATE_VARIABLE_Globals_1411_1411;
    MR_Word STATE_VARIABLE_Globals_1430_1430;
    MR_Word STATE_VARIABLE_Globals_1438_1438;
    MR_Word STATE_VARIABLE_Globals_1450_1450;
    MR_Word STATE_VARIABLE_Globals_1507_1507;
    MR_Word STATE_VARIABLE_Globals_1514_1514;
    MR_Word STATE_VARIABLE_Globals_1535_1535;
    MR_Word Var_1551;
    MR_Word STATE_VARIABLE_Globals_1552_1552;
    MR_Word Var_1554;
    MR_Word STATE_VARIABLE_Globals_1555_1555;
    MR_Word STATE_VARIABLE_Globals_1591_1591;
    MR_Word STATE_VARIABLE_Globals_1595_1595;
    MR_Word STATE_VARIABLE_Specs_1619_1619;
    MR_Word STATE_VARIABLE_Globals_1630_1630;
    MR_Word STATE_VARIABLE_Globals_1641_1641;
    MR_Word STATE_VARIABLE_Globals_1650_1650;
    MR_Word STATE_VARIABLE_Globals_1655_1655;
    MR_Word STATE_VARIABLE_Globals_1661_1661;
    MR_Word Var_654;
    MR_Word Var_655;
    MR_Word Var_694;
    MR_Word Var_695;
    MR_Word Var_1688;
    MR_Word Var_709;
    MR_Word Var_710;
    MR_Word Var_715;
    MR_Word Var_716;
    MR_String AllDumpOptions_88;
    MR_String Var_776;
    MR_Word Var_1392;
    MR_Word Var_1393;
    MR_String Var_1443;
    MR_Word ToMihsSubdir_194;
    MR_Word ToHrlsSubdir_195;
    MR_Integer Var_1652;

    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 664)), &InstallCmd_47);
    succeeded = (strcmp(InstallCmd_47, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InstallCmdDirOption_49;

      mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_25, ((MR_Box) ((MR_Integer) 665)), &InstallCmdDirOption_49);
      {
        FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 0) = ((MR_Box) (InstallCmd_47));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 1) = ((MR_Box) (InstallCmdDirOption_49));
      }
    }
    libs__globals__globals_init_21_p_0(OptionTable0_25, OpMode_26, Target_27, GC_Method_28, TagsMethod0_29, TermNorm_30, Term2Norm_31, TraceLevel_32, TraceSuppress_33, SSTraceLevel_34, MaybeThreadSafe_35, C_CompilerType_36, CSharp_CompilerType_37, ReuseStrategy_38, MaybeFeedbackInfo_39, HostEnvType_40, SystemEnvType_41, TargetEnvType_42, FileInstallCmd_48, LimitErrorContextsMap_43, &STATE_VARIABLE_Globals_222_222);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_222_222, Target_27, GC_Method_28, STATE_VARIABLE_Specs_0_215, &STATE_VARIABLE_Specs_223_223);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_222_222, (MR_Integer) 203, &EventSetFileName0_50);
    succeeded = (strcmp(EventSetFileName0_50, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_51;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_51);
      if ((MaybeEventSetFileName_51 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Globals_229_229 = STATE_VARIABLE_Globals_222_222;
      else
      {
        MR_String EventSetFileName_52 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEventSetFileName_51, (MR_Integer) 0))));
        MR_Word Var_228;

        {
          Var_228 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_228, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_228, 1) = ((MR_Box) (EventSetFileName_52));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 203, Var_228, STATE_VARIABLE_Globals_222_222, &STATE_VARIABLE_Globals_229_229);
      }
    }
    else
      STATE_VARIABLE_Globals_229_229 = STATE_VARIABLE_Globals_222_222;
    GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(GC_Method_28);
    switch (GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_236_236 = STATE_VARIABLE_Globals_229_229;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_231 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          MR_Word STATE_VARIABLE_Globals_232_232;

          libs__globals__set_option_4_p_0((MR_Integer) 332, Var_231, STATE_VARIABLE_Globals_229_229, &STATE_VARIABLE_Globals_232_232);
          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_231, STATE_VARIABLE_Globals_232_232, &STATE_VARIABLE_Globals_236_236);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_236_236, (MR_Integer) 250, &PregeneratedDist_54);
    switch (PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_261_261 = STATE_VARIABLE_Globals_236_236;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_241_241;
          MR_Word STATE_VARIABLE_Globals_245_245;
          MR_Word Var_248;
          MR_Word STATE_VARIABLE_Globals_249_249;
          MR_Word STATE_VARIABLE_Globals_253_253;
          MR_Word STATE_VARIABLE_Globals_257_257;

          libs__globals__set_option_4_p_0((MR_Integer) 264, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_236_236, &STATE_VARIABLE_Globals_241_241);
          libs__globals__set_option_4_p_0((MR_Integer) 271, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4])), STATE_VARIABLE_Globals_241_241, &STATE_VARIABLE_Globals_245_245);
          Var_248 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 268, Var_248, STATE_VARIABLE_Globals_245_245, &STATE_VARIABLE_Globals_249_249);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_248, STATE_VARIABLE_Globals_249_249, &STATE_VARIABLE_Globals_253_253);
          libs__globals__set_option_4_p_0((MR_Integer) 251, Var_248, STATE_VARIABLE_Globals_253_253, &STATE_VARIABLE_Globals_257_257);
          libs__globals__set_option_4_p_0((MR_Integer) 273, Var_248, STATE_VARIABLE_Globals_257_257, &STATE_VARIABLE_Globals_261_261);
        }
        break;
    }
    switch (TagsMethod0_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_261_261, (MR_Integer) 264, &NumPtagBits0_55);
        break;
      case (MR_Integer) 0:
        NumPtagBits0_55 = (MR_Integer) 0;
        break;
    }
    succeeded = (TagsMethod0_29 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (NumPtagBits0_55 == (MR_Integer) -1);
    if (succeeded)
      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_261_261, (MR_Integer) 267, &NumPtagBits1_56);
    else
      NumPtagBits1_56 = NumPtagBits0_55;
    succeeded = (NumPtagBits1_56 < (MR_Integer) 0);
    if (succeeded)
    {
      NumPtagBits_57 = (MR_Integer) 0;
      libs__compiler_util__add_warning_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146])), STATE_VARIABLE_Specs_223_223, &STATE_VARIABLE_Specs_292_292);
    }
    else
    {
      NumPtagBits_57 = NumPtagBits1_56;
      STATE_VARIABLE_Specs_292_292 = STATE_VARIABLE_Specs_223_223;
    }
    {
      Var_294 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_294, 0) = ((MR_Box) (NumPtagBits_57));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 264, Var_294, STATE_VARIABLE_Globals_261_261, &STATE_VARIABLE_Globals_295_295);
    succeeded = (NumPtagBits_57 == (MR_Integer) 0);
    if (succeeded)
    {
      TagsMethod_59 = (MR_Integer) 0;
      libs__globals__set_tags_method_3_p_0(TagsMethod_59, STATE_VARIABLE_Globals_295_295, &STATE_VARIABLE_Globals_296_296);
    }
    else
    {
      TagsMethod_59 = TagsMethod0_29;
      STATE_VARIABLE_Globals_296_296 = STATE_VARIABLE_Globals_295_295;
    }
    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_296_296, &GradeSupportsParConj_60);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 243, &Parallel_61);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 244, &Threadscope_62);
    succeeded = (GradeSupportsParConj_60 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_62 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])), STATE_VARIABLE_Specs_292_292, &STATE_VARIABLE_Specs_314_314);
    else
      STATE_VARIABLE_Specs_314_314 = STATE_VARIABLE_Specs_292_292;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 708, &ImplicitParallelism_64);
    switch (ImplicitParallelism_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_314_314;
          STATE_VARIABLE_Globals_337_337 = STATE_VARIABLE_Globals_296_296;
        }
        break;
      case (MR_Integer) 1:
        switch (GradeSupportsParConj_60) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (Parallel_61) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_314_314;
                  break;
                case (MR_Integer) 1:
                  libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[163])), STATE_VARIABLE_Specs_314_314, &STATE_VARIABLE_Specs_358_358);
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 708, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_296_296, &STATE_VARIABLE_Globals_337_337);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_65;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_296_296, (MR_Integer) 709, &FeedbackFile_65);
              succeeded = (strcmp(FeedbackFile_65, (MR_String) "") == 0);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169])), STATE_VARIABLE_Specs_314_314, &STATE_VARIABLE_Specs_358_358);
              else
                STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_314_314;
              STATE_VARIABLE_Globals_337_337 = STATE_VARIABLE_Globals_296_296;
            }
            break;
        }
        break;
    }
    Var_361 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 708, (MR_Integer) 225, Var_361, STATE_VARIABLE_Globals_337_337, &STATE_VARIABLE_Globals_362_362);
    switch (GradeSupportsParConj_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__set_option_4_p_0((MR_Integer) 710, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_362_362, &STATE_VARIABLE_Globals_366_366);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_366_366 = STATE_VARIABLE_Globals_362_362;
        break;
    }
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__option_implies_5_p_0((MR_Integer) 287, (MR_Integer) 290, Var_361, STATE_VARIABLE_Globals_366_366, &STATE_VARIABLE_Globals_491_491);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_432_432;
          MR_Word STATE_VARIABLE_Globals_435_435;
          MR_Word Var_438;
          MR_Word STATE_VARIABLE_Globals_439_439;
          MR_Word STATE_VARIABLE_Globals_443_443;
          MR_Word STATE_VARIABLE_Globals_447_447;
          MR_Word STATE_VARIABLE_Globals_451_451;
          MR_Word STATE_VARIABLE_Globals_455_455;
          MR_Word STATE_VARIABLE_Globals_459_459;
          MR_Word STATE_VARIABLE_Globals_463_463;
          MR_Word STATE_VARIABLE_Globals_467_467;
          MR_Word STATE_VARIABLE_Globals_471_471;
          MR_Word STATE_VARIABLE_Globals_475_475;
          MR_Word STATE_VARIABLE_Globals_479_479;
          MR_Word STATE_VARIABLE_Globals_483_483;
          MR_Word STATE_VARIABLE_Globals_487_487;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_366_366, &STATE_VARIABLE_Globals_432_432);
          libs__globals__set_option_4_p_0((MR_Integer) 242, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[221])), STATE_VARIABLE_Globals_432_432, &STATE_VARIABLE_Globals_435_435);
          Var_438 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_438, STATE_VARIABLE_Globals_435_435, &STATE_VARIABLE_Globals_439_439);
          libs__globals__set_option_4_p_0((MR_Integer) 332, Var_438, STATE_VARIABLE_Globals_439_439, &STATE_VARIABLE_Globals_443_443);
          libs__globals__set_option_4_p_0((MR_Integer) 287, Var_361, STATE_VARIABLE_Globals_443_443, &STATE_VARIABLE_Globals_447_447);
          libs__globals__set_option_4_p_0((MR_Integer) 268, Var_361, STATE_VARIABLE_Globals_447_447, &STATE_VARIABLE_Globals_451_451);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_361, STATE_VARIABLE_Globals_451_451, &STATE_VARIABLE_Globals_455_455);
          libs__globals__set_option_4_p_0((MR_Integer) 289, Var_361, STATE_VARIABLE_Globals_455_455, &STATE_VARIABLE_Globals_459_459);
          libs__globals__set_option_4_p_0((MR_Integer) 288, Var_361, STATE_VARIABLE_Globals_459_459, &STATE_VARIABLE_Globals_463_463);
          libs__globals__set_option_4_p_0((MR_Integer) 264, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_463_463, &STATE_VARIABLE_Globals_467_467);
          libs__globals__set_option_4_p_0((MR_Integer) 270, Var_438, STATE_VARIABLE_Globals_467_467, &STATE_VARIABLE_Globals_471_471);
          libs__globals__set_option_4_p_0((MR_Integer) 291, Var_361, STATE_VARIABLE_Globals_471_471, &STATE_VARIABLE_Globals_475_475);
          libs__globals__set_option_4_p_0((MR_Integer) 300, Var_361, STATE_VARIABLE_Globals_475_475, &STATE_VARIABLE_Globals_479_479);
          libs__globals__set_option_4_p_0((MR_Integer) 439, Var_438, STATE_VARIABLE_Globals_479_479, &STATE_VARIABLE_Globals_483_483);
          libs__globals__set_option_4_p_0((MR_Integer) 437, Var_438, STATE_VARIABLE_Globals_483_483, &STATE_VARIABLE_Globals_487_487);
          switch (Target_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              libs__globals__set_option_4_p_0((MR_Integer) 603, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])), STATE_VARIABLE_Globals_487_487, &STATE_VARIABLE_Globals_491_491);
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Globals_491_491 = STATE_VARIABLE_Globals_487_487;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_374_374;
          MR_Word STATE_VARIABLE_Globals_377_377;
          MR_Word STATE_VARIABLE_Globals_381_381;
          MR_Word STATE_VARIABLE_Globals_385_385;
          MR_Word Var_388;
          MR_Word STATE_VARIABLE_Globals_389_389;
          MR_Word STATE_VARIABLE_Globals_393_393;
          MR_Word STATE_VARIABLE_Globals_397_397;
          MR_Word STATE_VARIABLE_Globals_401_401;
          MR_Word STATE_VARIABLE_Globals_405_405;
          MR_Word STATE_VARIABLE_Globals_409_409;
          MR_Word STATE_VARIABLE_Globals_413_413;
          MR_Word STATE_VARIABLE_Globals_417_417;
          MR_Word STATE_VARIABLE_Globals_421_421;
          MR_Word STATE_VARIABLE_Globals_425_425;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_366_366, &STATE_VARIABLE_Globals_374_374);
          libs__globals__set_option_4_p_0((MR_Integer) 242, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[221])), STATE_VARIABLE_Globals_374_374, &STATE_VARIABLE_Globals_377_377);
          libs__globals__set_option_4_p_0((MR_Integer) 268, Var_361, STATE_VARIABLE_Globals_377_377, &STATE_VARIABLE_Globals_381_381);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_361, STATE_VARIABLE_Globals_381_381, &STATE_VARIABLE_Globals_385_385);
          Var_388 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_388, STATE_VARIABLE_Globals_385_385, &STATE_VARIABLE_Globals_389_389);
          libs__globals__set_option_4_p_0((MR_Integer) 332, Var_388, STATE_VARIABLE_Globals_389_389, &STATE_VARIABLE_Globals_393_393);
          libs__globals__set_option_4_p_0((MR_Integer) 303, Var_361, STATE_VARIABLE_Globals_393_393, &STATE_VARIABLE_Globals_397_397);
          libs__globals__set_option_4_p_0((MR_Integer) 299, Var_388, STATE_VARIABLE_Globals_397_397, &STATE_VARIABLE_Globals_401_401);
          libs__globals__set_option_4_p_0((MR_Integer) 301, Var_361, STATE_VARIABLE_Globals_401_401, &STATE_VARIABLE_Globals_405_405);
          libs__globals__set_option_4_p_0((MR_Integer) 302, Var_361, STATE_VARIABLE_Globals_405_405, &STATE_VARIABLE_Globals_409_409);
          libs__globals__set_option_4_p_0((MR_Integer) 487, Var_388, STATE_VARIABLE_Globals_409_409, &STATE_VARIABLE_Globals_413_413);
          libs__globals__set_option_4_p_0((MR_Integer) 283, Var_388, STATE_VARIABLE_Globals_413_413, &STATE_VARIABLE_Globals_417_417);
          libs__globals__set_option_4_p_0((MR_Integer) 284, Var_388, STATE_VARIABLE_Globals_417_417, &STATE_VARIABLE_Globals_421_421);
          libs__globals__set_option_4_p_0((MR_Integer) 285, Var_388, STATE_VARIABLE_Globals_421_421, &STATE_VARIABLE_Globals_425_425);
          libs__globals__set_option_4_p_0((MR_Integer) 287, Var_388, STATE_VARIABLE_Globals_425_425, &STATE_VARIABLE_Globals_491_491);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 246, (MR_Integer) 245, Var_361, STATE_VARIABLE_Globals_491_491, &STATE_VARIABLE_Globals_496_496);
    Var_500 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 120, (MR_Integer) 586, Var_500, STATE_VARIABLE_Globals_496_496, &STATE_VARIABLE_Globals_501_501);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 120, (MR_Integer) 588, Var_500, STATE_VARIABLE_Globals_501_501, &STATE_VARIABLE_Globals_506_506);
    Var_510 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 287, (MR_Integer) 283, Var_510, STATE_VARIABLE_Globals_506_506, &STATE_VARIABLE_Globals_511_511);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 287, (MR_Integer) 284, Var_510, STATE_VARIABLE_Globals_511_511, &STATE_VARIABLE_Globals_516_516);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 287, (MR_Integer) 285, Var_510, STATE_VARIABLE_Globals_516_516, &STATE_VARIABLE_Globals_521_521);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 494, (MR_Integer) 487, Var_510, STATE_VARIABLE_Globals_521_521, &STATE_VARIABLE_Globals_526_526);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_526_526, (MR_Integer) 670, &LibLinkages0_68);
    if ((LibLinkages0_68 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 670, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[172])), STATE_VARIABLE_Globals_526_526, &STATE_VARIABLE_Globals_531_531);
    else
      STATE_VARIABLE_Globals_531_531 = STATE_VARIABLE_Globals_526_526;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_531_531, (MR_Integer) 657, &InvokedByMMCMake_71);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 675, Var_361, STATE_VARIABLE_Globals_531_531, &STATE_VARIABLE_Globals_540_540);
    else
      STATE_VARIABLE_Globals_540_540 = STATE_VARIABLE_Globals_531_531;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 657, (MR_Integer) 137, Var_510, STATE_VARIABLE_Globals_540_540, &STATE_VARIABLE_Globals_545_545);
    if ((OpMode_26 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3))
    {
      MR_Word OpModeArgs_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      MR_Word Var_547;
      MR_Word Var_548;

      succeeded = ((MR_tag((MR_Word) OpModeArgs_72)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_547 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_72, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_547)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_548 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_547, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_548 == (MR_Integer) 2);
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      STATE_VARIABLE_Globals_551_551 = STATE_VARIABLE_Globals_545_545;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 680, Var_510, STATE_VARIABLE_Globals_545_545, &STATE_VARIABLE_Globals_551_551);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_551_551, (MR_Integer) 358, &TransOpt_73);
    switch (TransOpt_73) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_572_572 = STATE_VARIABLE_Specs_358_358;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[179])), STATE_VARIABLE_Specs_358_358, &STATE_VARIABLE_Specs_572_572);
          else
            STATE_VARIABLE_Specs_572_572 = STATE_VARIABLE_Specs_358_358;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_551_551, (MR_Integer) 354, &InterModOpt_75);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_551_551, (MR_Integer) 359, &InterModAnalysis_76);
    succeeded = (InterModOpt_75 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_76 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])), STATE_VARIABLE_Specs_572_572, &STATE_VARIABLE_Specs_593_593);
    else
      STATE_VARIABLE_Specs_593_593 = STATE_VARIABLE_Specs_572_572;
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      STATE_VARIABLE_Globals_596_596 = STATE_VARIABLE_Globals_551_551;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 661, Var_510, STATE_VARIABLE_Globals_551_551, &STATE_VARIABLE_Globals_596_596);
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_596_596, (MR_Integer) 114, &MaybeStandaloneInt_78);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_596_596, (MR_Integer) 596, &ExtraInitFunctions_79);
    succeeded = (MaybeStandaloneInt_78 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExtraInitFunctions_79 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191])), STATE_VARIABLE_Specs_593_593, &STATE_VARIABLE_Specs_618_618);
    else
      STATE_VARIABLE_Specs_618_618 = STATE_VARIABLE_Specs_593_593;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 439, (MR_Integer) 437, Var_361, STATE_VARIABLE_Globals_596_596, &STATE_VARIABLE_Globals_622_622);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 447, (MR_Integer) 446, Var_361, STATE_VARIABLE_Globals_622_622, &STATE_VARIABLE_Globals_627_627);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 446, (MR_Integer) 445, Var_361, STATE_VARIABLE_Globals_627_627, &STATE_VARIABLE_Globals_632_632);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 446, (MR_Integer) 17, Var_361, STATE_VARIABLE_Globals_632_632, &STATE_VARIABLE_Globals_637_637);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 454, (MR_Integer) 453, Var_361, STATE_VARIABLE_Globals_637_637, &STATE_VARIABLE_Globals_642_642);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 453, (MR_Integer) 452, Var_361, STATE_VARIABLE_Globals_642_642, &STATE_VARIABLE_Globals_647_647);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 453, (MR_Integer) 17, Var_361, STATE_VARIABLE_Globals_647_647, &STATE_VARIABLE_Globals_652_652);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_654 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_654)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_655 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_654, (MR_Integer) 0))));
        succeeded = (Var_655 == (MR_Word) ((MR_Unsigned) 4U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 358, Var_361, STATE_VARIABLE_Globals_652_652, &STATE_VARIABLE_Globals_658_658);
    else
      STATE_VARIABLE_Globals_658_658 = STATE_VARIABLE_Globals_652_652;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 358, (MR_Integer) 354, Var_361, STATE_VARIABLE_Globals_658_658, &STATE_VARIABLE_Globals_663_663);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 357, (MR_Integer) 356, Var_361, STATE_VARIABLE_Globals_663_663, &STATE_VARIABLE_Globals_668_668);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 354, (MR_Integer) 356, Var_510, STATE_VARIABLE_Globals_668_668, &STATE_VARIABLE_Globals_673_673);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 358, (MR_Integer) 357, Var_510, STATE_VARIABLE_Globals_673_673, &STATE_VARIABLE_Globals_678_678);
    libs__globals__set_option_4_p_0((MR_Integer) 356, Var_510, STATE_VARIABLE_Globals_678_678, &STATE_VARIABLE_Globals_682_682);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 135, (MR_Integer) 136, Var_361, STATE_VARIABLE_Globals_682_682, &STATE_VARIABLE_Globals_687_687);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 69, (MR_Integer) 68, Var_361, STATE_VARIABLE_Globals_687_687, &STATE_VARIABLE_Globals_692_692);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_694 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_694)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_695 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_694, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_695)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      STATE_VARIABLE_Globals_698_698 = STATE_VARIABLE_Globals_692_692;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 135, Var_510, STATE_VARIABLE_Globals_692_692, &STATE_VARIABLE_Globals_698_698);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1688 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) Var_1688)) == (MR_Integer) 2))
      {
        MR_Word Var_1689 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1688, (MR_Integer) 0))));

        if ((Var_1689 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if ((Var_1689 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((MR_tag((MR_Word) Var_1688)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 157, Var_510, STATE_VARIABLE_Globals_698_698, &STATE_VARIABLE_Globals_707_707);
    else
      STATE_VARIABLE_Globals_707_707 = STATE_VARIABLE_Globals_698_698;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_709 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_709)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_710 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_709, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_710 == (MR_Integer) 2);
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 136, Var_510, STATE_VARIABLE_Globals_707_707, &STATE_VARIABLE_Globals_713_713);
    else
      STATE_VARIABLE_Globals_713_713 = STATE_VARIABLE_Globals_707_707;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_715 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_715)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_716 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_715, (MR_Integer) 0))));
        succeeded = (Var_716 == (MR_Word) ((MR_Unsigned) 12U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 354, Var_510, STATE_VARIABLE_Globals_713_713, &STATE_VARIABLE_Globals_719_719);
    else
      STATE_VARIABLE_Globals_719_719 = STATE_VARIABLE_Globals_713_713;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_719_719, (MR_Integer) 135, &Smart_84);
    switch (Smart_84) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_736_736 = STATE_VARIABLE_Globals_719_719;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_725_725;
          MR_Word STATE_VARIABLE_Globals_730_730;
          MR_Word Var_732;
          MR_Word Var_733;
          MR_Word Var_734;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_719_719, (MR_Integer) 354, (MR_Integer) 1);
          if (succeeded)
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", STATE_VARIABLE_Globals_719_719, &STATE_VARIABLE_Globals_725_725);
          else
            STATE_VARIABLE_Globals_725_725 = STATE_VARIABLE_Globals_719_719;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_725_725, (MR_Integer) 356, (MR_Integer) 1);
          if (succeeded)
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", STATE_VARIABLE_Globals_725_725, &STATE_VARIABLE_Globals_730_730);
          else
            STATE_VARIABLE_Globals_730_730 = STATE_VARIABLE_Globals_725_725;
          succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_732 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_732)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_733 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_732, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_733)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_734 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_733, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_734 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            STATE_VARIABLE_Globals_736_736 = STATE_VARIABLE_Globals_730_730;
          else
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_730_730, &STATE_VARIABLE_Globals_736_736);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 676, (MR_Integer) 675, Var_361, STATE_VARIABLE_Globals_736_736, &STATE_VARIABLE_Globals_741_741);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 66, (MR_Integer) 65, Var_361, STATE_VARIABLE_Globals_741_741, &STATE_VARIABLE_Globals_746_746);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 71, Var_361, STATE_VARIABLE_Globals_746_746, &STATE_VARIABLE_Globals_751_751);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_751_751, (MR_Integer) 66, &VeryVerbose_85);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_751_751, (MR_Integer) 75, &Statistics_86);
    succeeded = (VeryVerbose_85 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_86 == (MR_Integer) 1);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 76, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_751_751, &STATE_VARIABLE_Globals_757_757);
    else
      STATE_VARIABLE_Globals_757_757 = STATE_VARIABLE_Globals_751_751;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 80, Var_361, STATE_VARIABLE_Globals_757_757, &STATE_VARIABLE_Globals_762_762);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_361, STATE_VARIABLE_Globals_762_762, &STATE_VARIABLE_Globals_767_767);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 81, (MR_Integer) 80, Var_361, STATE_VARIABLE_Globals_767_767, &STATE_VARIABLE_Globals_772_772);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_772_772, (MR_Integer) 93, &DebugLiveness_87);
    succeeded = (DebugLiveness_87 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_776 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_776, &AllDumpOptions_88);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_89;
      MR_String DumpOptions1_90;
      MR_Word Var_779;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_772_772, (MR_Integer) 179, &DumpOptions0_89);
      DumpOptions1_90 = mercury__string__f_43_43_2_f_0(DumpOptions0_89, AllDumpOptions_88);
      {
        Var_779 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_779, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_779, 1) = ((MR_Box) (DumpOptions1_90));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 179, Var_779, STATE_VARIABLE_Globals_772_772, &STATE_VARIABLE_Globals_780_780);
    }
    else
      STATE_VARIABLE_Globals_780_780 = STATE_VARIABLE_Globals_772_772;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_361, STATE_VARIABLE_Globals_780_780, &STATE_VARIABLE_Globals_784_784);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_784_784, (MR_Integer) 84, &DebugModesPredId_91);
    succeeded = (DebugModesPredId_91 > (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 80, Var_361, STATE_VARIABLE_Globals_784_784, &STATE_VARIABLE_Globals_790_790);
    else
      STATE_VARIABLE_Globals_790_790 = STATE_VARIABLE_Globals_784_784;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_790_790, (MR_Integer) 388, &DebugUnneededCodePredNames_92);
    if ((DebugUnneededCodePredNames_92 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_795_795 = STATE_VARIABLE_Globals_790_790;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 387, Var_361, STATE_VARIABLE_Globals_790_790, &STATE_VARIABLE_Globals_795_795);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_795_795, (MR_Integer) 90, &DebugOptPredIdStrs_95);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_795_795, (MR_Integer) 91, &DebugOptPredNames_96);
    succeeded = (DebugOptPredIdStrs_95 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DebugOptPredNames_96 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 88, Var_361, STATE_VARIABLE_Globals_795_795, &STATE_VARIABLE_Globals_801_801);
    else
      STATE_VARIABLE_Globals_801_801 = STATE_VARIABLE_Globals_795_795;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_801_801, (MR_Integer) 99, &DebugIntermoduleAnalysis_101);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_101);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_801_801, (MR_Integer) 173, &DumpHLDSPredIds_102);
    if ((DumpHLDSPredIds_102 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_813_813 = STATE_VARIABLE_Globals_801_801;
    else
    {
      MR_String DumpOptions2_105;
      MR_String DumpOptions3_106;
      MR_String DumpOptions_107;
      MR_Word Var_812;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_801_801, (MR_Integer) 179, &DumpOptions2_105);
      mercury__string__replace_all_4_p_0(DumpOptions2_105, (MR_String) "M", (MR_String) "", &DumpOptions3_106);
      mercury__string__replace_all_4_p_0(DumpOptions3_106, (MR_String) "T", (MR_String) "", &DumpOptions_107);
      {
        Var_812 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_812, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_812, 1) = ((MR_Box) (DumpOptions_107));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 179, Var_812, STATE_VARIABLE_Globals_801_801, &STATE_VARIABLE_Globals_813_813);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 188, Var_361, STATE_VARIABLE_Globals_813_813, &STATE_VARIABLE_Globals_817_817);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 188, (MR_Integer) 186, Var_361, STATE_VARIABLE_Globals_817_817, &STATE_VARIABLE_Globals_822_822);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 187, (MR_Integer) 186, Var_361, STATE_VARIABLE_Globals_822_822, &STATE_VARIABLE_Globals_827_827);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 162, (MR_Integer) 161, Var_361, STATE_VARIABLE_Globals_827_827, &STATE_VARIABLE_Globals_832_832);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_832_832, (MR_Integer) 245, &UseTrail_108);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_832_832, (MR_Integer) 287, &HighLevelCode_109);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_832_832, (MR_Integer) 247, &UseMinimalModelStackCopy_110);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_832_832, (MR_Integer) 248, &UseMinimalModelOwnStacks_111);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_110, UseMinimalModelOwnStacks_111, &UseMinimalModel_112);
    succeeded = (UseMinimalModelStackCopy_110 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_111 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[195])), STATE_VARIABLE_Specs_618_618, &STATE_VARIABLE_Specs_847_847);
    else
    {
      succeeded = (UseMinimalModel_112 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (HighLevelCode_109 == (MR_Integer) 1);
      if (succeeded)
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[199])), STATE_VARIABLE_Specs_618_618, &STATE_VARIABLE_Specs_847_847);
      else
      {
        succeeded = (UseMinimalModel_112 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_108 == (MR_Integer) 1);
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[202])), STATE_VARIABLE_Specs_618_618, &STATE_VARIABLE_Specs_847_847);
        else
          STATE_VARIABLE_Specs_847_847 = STATE_VARIABLE_Specs_618_618;
      }
    }
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgPackBits0_116;
          MR_Integer BitsPerWord_117;
          MR_Integer ArgPackBits_118;
          MR_Word Var_921;

          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_832_832, (MR_Integer) 271, &ArgPackBits0_116);
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_832_832, (MR_Integer) 265, &BitsPerWord_117);
          succeeded = (ArgPackBits0_116 < (MR_Integer) 0);
          if (succeeded)
          {
            ArgPackBits_118 = BitsPerWord_117;
            STATE_VARIABLE_Specs_919_919 = STATE_VARIABLE_Specs_847_847;
          }
          else
          {
            succeeded = (ArgPackBits0_116 > BitsPerWord_117);
            if (succeeded)
            {
              MR_Word ArgPackBitsSpec_119;
              MR_Word Var_889;
              MR_Word Var_890;
              MR_Word Var_892;
              MR_Word Var_895;
              MR_Word Var_898;
              MR_Word Var_901;
              MR_Word Var_904;
              MR_Word Var_907;
              MR_Word Var_910;
              MR_Word Var_911;

              ArgPackBits_118 = BitsPerWord_117;
              Var_890 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[225]));
              {
                Var_911 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_911, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_911, 1) = ((MR_Box) (BitsPerWord_117));
              }
              {
                Var_910 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_910, 0) = ((MR_Box) (Var_911));
                MR_hl_field(MR_mktag(1), Var_910, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
              }
              {
                Var_907 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_907, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230])));
                MR_hl_field(MR_mktag(1), Var_907, 1) = ((MR_Box) (Var_910));
              }
              {
                Var_904 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_904, 0) = ((MR_Box) (Var_890));
                MR_hl_field(MR_mktag(1), Var_904, 1) = ((MR_Box) (Var_907));
              }
              {
                Var_901 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_901, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
                MR_hl_field(MR_mktag(1), Var_901, 1) = ((MR_Box) (Var_904));
              }
              {
                Var_898 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_898, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228])));
                MR_hl_field(MR_mktag(1), Var_898, 1) = ((MR_Box) (Var_901));
              }
              {
                Var_895 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_895, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227])));
                MR_hl_field(MR_mktag(1), Var_895, 1) = ((MR_Box) (Var_898));
              }
              {
                Var_892 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_892, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226])));
                MR_hl_field(MR_mktag(1), Var_892, 1) = ((MR_Box) (Var_895));
              }
              {
                Var_889 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_889, 0) = ((MR_Box) (Var_890));
                MR_hl_field(MR_mktag(1), Var_889, 1) = ((MR_Box) (Var_892));
              }
              {
                ArgPackBitsSpec_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224])));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_119, 1) = ((MR_Box) (Var_889));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_119, STATE_VARIABLE_Specs_847_847, &STATE_VARIABLE_Specs_919_919);
            }
            else
            {
              ArgPackBits_118 = ArgPackBits0_116;
              STATE_VARIABLE_Specs_919_919 = STATE_VARIABLE_Specs_847_847;
            }
          }
          {
            Var_921 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_921, 0) = ((MR_Box) (ArgPackBits_118));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 271, Var_921, STATE_VARIABLE_Globals_832_832, &STATE_VARIABLE_Globals_922_922);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_870_870;
          MR_Word STATE_VARIABLE_Globals_874_874;
          MR_Word STATE_VARIABLE_Globals_878_878;

          libs__globals__set_option_4_p_0((MR_Integer) 271, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_832_832, &STATE_VARIABLE_Globals_870_870);
          libs__globals__set_option_4_p_0((MR_Integer) 273, Var_510, STATE_VARIABLE_Globals_870_870, &STATE_VARIABLE_Globals_874_874);
          libs__globals__set_option_4_p_0((MR_Integer) 275, Var_510, STATE_VARIABLE_Globals_874_874, &STATE_VARIABLE_Globals_878_878);
          libs__globals__set_option_4_p_0((MR_Integer) 276, Var_510, STATE_VARIABLE_Globals_878_878, &STATE_VARIABLE_Globals_922_922);
          STATE_VARIABLE_Specs_919_919 = STATE_VARIABLE_Specs_847_847;
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 251, (MR_Integer) 268, Var_361, STATE_VARIABLE_Globals_922_922, &STATE_VARIABLE_Globals_926_926);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 287, (MR_Integer) 286, Var_510, STATE_VARIABLE_Globals_926_926, &STATE_VARIABLE_Globals_931_931);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 268, (MR_Integer) 286, Var_510, STATE_VARIABLE_Globals_931_931, &STATE_VARIABLE_Globals_936_936);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_940_940 = STATE_VARIABLE_Globals_936_936;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_940_940 = STATE_VARIABLE_Globals_936_936;
        break;
      case (MR_Integer) 3:
        libs__globals__set_option_4_p_0((MR_Integer) 324, Var_510, STATE_VARIABLE_Globals_936_936, &STATE_VARIABLE_Globals_940_940);
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_940_940 = STATE_VARIABLE_Globals_936_936;
        break;
    }
    switch (Target_27) {
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
      libs__globals__set_option_4_p_0((MR_Integer) 468, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_940_940, &STATE_VARIABLE_Globals_944_944);
    else
      STATE_VARIABLE_Globals_944_944 = STATE_VARIABLE_Globals_940_940;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 518, (MR_Integer) 590, Var_510, STATE_VARIABLE_Globals_944_944, &STATE_VARIABLE_Globals_949_949);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 235, (MR_Integer) 226, Var_361, STATE_VARIABLE_Globals_949_949, &STATE_VARIABLE_Globals_954_954);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 226, (MR_Integer) 238, Var_510, STATE_VARIABLE_Globals_954_954, &STATE_VARIABLE_Globals_959_959);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 235, (MR_Integer) 148, Var_361, STATE_VARIABLE_Globals_959_959, &STATE_VARIABLE_Globals_964_964);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_964_964, (MR_Integer) 148, &ProfOptimized_120);
    switch (ProfOptimized_120) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 362, Var_510, STATE_VARIABLE_Globals_964_964, &STATE_VARIABLE_Globals_970_970);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_970_970 = STATE_VARIABLE_Globals_964_964;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 224, Var_361, STATE_VARIABLE_Globals_970_970, &STATE_VARIABLE_Globals_975_975);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 224, Var_361, STATE_VARIABLE_Globals_975_975, &STATE_VARIABLE_Globals_980_980);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 240, (MR_Integer) 224, Var_361, STATE_VARIABLE_Globals_980_980, &STATE_VARIABLE_Globals_985_985);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_985_985, (MR_Integer) 241, &ExpComp_121);
    succeeded = (strcmp(ExpComp_121, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_Globals_990_990 = STATE_VARIABLE_Globals_985_985;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 362, Var_510, STATE_VARIABLE_Globals_985_985, &STATE_VARIABLE_Globals_990_990);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 213, Var_361, STATE_VARIABLE_Globals_990_990, &STATE_VARIABLE_Globals_995_995);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 260, (MR_Integer) 262, Var_361, STATE_VARIABLE_Globals_995_995, &STATE_VARIABLE_Globals_1000_1000);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 293, Var_361, STATE_VARIABLE_Globals_1000_1000, &STATE_VARIABLE_Globals_1005_1005);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 293, Var_361, STATE_VARIABLE_Globals_1005_1005, &STATE_VARIABLE_Globals_1010_1010);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 343, Var_361, STATE_VARIABLE_Globals_1010_1010, &STATE_VARIABLE_Globals_1015_1015);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 146, Var_361, STATE_VARIABLE_Globals_1015_1015, &STATE_VARIABLE_Globals_1020_1020);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 146, (MR_Integer) 142, Var_361, STATE_VARIABLE_Globals_1020_1020, &STATE_VARIABLE_Globals_1025_1025);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 145, (MR_Integer) 142, Var_361, STATE_VARIABLE_Globals_1025_1025, &STATE_VARIABLE_Globals_1030_1030);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1030_1030, (MR_Integer) 140, &TraceOptimized_122);
    TraceLevelIsNone_123 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
    switch (TraceLevelIsNone_123) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TraceTailRec_124;
          MR_Word STATE_VARIABLE_Globals_1095_1095;
          MR_Word STATE_VARIABLE_Globals_1099_1099;
          MR_Word STATE_VARIABLE_Globals_1103_1103;
          MR_Word STATE_VARIABLE_Globals_1107_1107;
          MR_Word STATE_VARIABLE_Globals_1111_1111;
          MR_Word STATE_VARIABLE_Globals_1115_1115;
          MR_Word STATE_VARIABLE_Globals_1119_1119;
          MR_Word STATE_VARIABLE_Globals_1123_1123;

          switch (TraceOptimized_122) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Globals_1039_1039;
                MR_Word STATE_VARIABLE_Globals_1043_1043;
                MR_Word STATE_VARIABLE_Globals_1047_1047;
                MR_Word STATE_VARIABLE_Globals_1051_1051;
                MR_Word STATE_VARIABLE_Globals_1055_1055;
                MR_Word STATE_VARIABLE_Globals_1059_1059;
                MR_Word STATE_VARIABLE_Globals_1063_1063;
                MR_Word STATE_VARIABLE_Globals_1067_1067;
                MR_Word STATE_VARIABLE_Globals_1071_1071;
                MR_Word STATE_VARIABLE_Globals_1075_1075;
                MR_Word STATE_VARIABLE_Globals_1079_1079;
                MR_Word STATE_VARIABLE_Globals_1083_1083;
                MR_Word STATE_VARIABLE_Globals_1087_1087;
                MR_Word STATE_VARIABLE_Globals_1091_1091;

                libs__globals__set_option_4_p_0((MR_Integer) 362, Var_510, STATE_VARIABLE_Globals_1030_1030, &STATE_VARIABLE_Globals_1039_1039);
                libs__globals__set_option_4_p_0((MR_Integer) 380, Var_510, STATE_VARIABLE_Globals_1039_1039, &STATE_VARIABLE_Globals_1043_1043);
                libs__globals__set_option_4_p_0((MR_Integer) 382, Var_510, STATE_VARIABLE_Globals_1043_1043, &STATE_VARIABLE_Globals_1047_1047);
                libs__globals__set_option_4_p_0((MR_Integer) 389, Var_510, STATE_VARIABLE_Globals_1047_1047, &STATE_VARIABLE_Globals_1051_1051);
                libs__globals__set_option_4_p_0((MR_Integer) 390, Var_510, STATE_VARIABLE_Globals_1051_1051, &STATE_VARIABLE_Globals_1055_1055);
                libs__globals__set_option_4_p_0((MR_Integer) 419, Var_510, STATE_VARIABLE_Globals_1055_1055, &STATE_VARIABLE_Globals_1059_1059);
                libs__globals__set_option_4_p_0((MR_Integer) 378, Var_510, STATE_VARIABLE_Globals_1059_1059, &STATE_VARIABLE_Globals_1063_1063);
                libs__globals__set_option_4_p_0((MR_Integer) 379, Var_510, STATE_VARIABLE_Globals_1063_1063, &STATE_VARIABLE_Globals_1067_1067);
                libs__globals__set_option_4_p_0((MR_Integer) 395, Var_510, STATE_VARIABLE_Globals_1067_1067, &STATE_VARIABLE_Globals_1071_1071);
                libs__globals__set_option_4_p_0((MR_Integer) 394, Var_510, STATE_VARIABLE_Globals_1071_1071, &STATE_VARIABLE_Globals_1075_1075);
                libs__globals__set_option_4_p_0((MR_Integer) 401, Var_510, STATE_VARIABLE_Globals_1075_1075, &STATE_VARIABLE_Globals_1079_1079);
                libs__globals__set_option_4_p_0((MR_Integer) 415, Var_510, STATE_VARIABLE_Globals_1079_1079, &STATE_VARIABLE_Globals_1083_1083);
                libs__globals__set_option_4_p_0((MR_Integer) 428, Var_510, STATE_VARIABLE_Globals_1083_1083, &STATE_VARIABLE_Globals_1087_1087);
                libs__globals__set_option_4_p_0((MR_Integer) 429, Var_510, STATE_VARIABLE_Globals_1087_1087, &STATE_VARIABLE_Globals_1091_1091);
                libs__globals__set_option_4_p_0((MR_Integer) 398, Var_510, STATE_VARIABLE_Globals_1091_1091, &STATE_VARIABLE_Globals_1095_1095);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1095_1095 = STATE_VARIABLE_Globals_1030_1030;
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 486, Var_510, STATE_VARIABLE_Globals_1095_1095, &STATE_VARIABLE_Globals_1099_1099);
          libs__globals__set_option_4_p_0((MR_Integer) 397, Var_361, STATE_VARIABLE_Globals_1099_1099, &STATE_VARIABLE_Globals_1103_1103);
          libs__globals__set_option_4_p_0((MR_Integer) 417, Var_361, STATE_VARIABLE_Globals_1103_1103, &STATE_VARIABLE_Globals_1107_1107);
          libs__globals__set_option_4_p_0((MR_Integer) 484, Var_510, STATE_VARIABLE_Globals_1107_1107, &STATE_VARIABLE_Globals_1111_1111);
          libs__globals__set_option_4_p_0((MR_Integer) 297, Var_361, STATE_VARIABLE_Globals_1111_1111, &STATE_VARIABLE_Globals_1115_1115);
          libs__globals__set_option_4_p_0((MR_Integer) 298, Var_361, STATE_VARIABLE_Globals_1115_1115, &STATE_VARIABLE_Globals_1119_1119);
          libs__globals__set_option_4_p_0((MR_Integer) 349, Var_510, STATE_VARIABLE_Globals_1119_1119, &STATE_VARIABLE_Globals_1123_1123);
          TraceTailRec_124 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_32);
          switch (TraceTailRec_124) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__globals__set_option_4_p_0((MR_Integer) 149, Var_510, STATE_VARIABLE_Globals_1123_1123, &STATE_VARIABLE_Globals_1127_1127);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1127_1127 = STATE_VARIABLE_Globals_1123_1123;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 149, Var_510, STATE_VARIABLE_Globals_1030_1030, &STATE_VARIABLE_Globals_1127_1127);
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 296, Var_361, STATE_VARIABLE_Globals_1127_1127, &STATE_VARIABLE_Globals_1132_1132);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1132_1132, (MR_Integer) 222, &ProfileDeep_125);
    switch (ProfileDeep_125) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_1144_1144 = STATE_VARIABLE_Specs_919_919;
          STATE_VARIABLE_Globals_1156_1156 = STATE_VARIABLE_Globals_1132_1132;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LotsOfHOSpec_127;
          MR_Word STATE_VARIABLE_Globals_1147_1147;

          succeeded = (HighLevelCode_109 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_27 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_Specs_1144_1144 = STATE_VARIABLE_Specs_919_919;
          else
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[204])), STATE_VARIABLE_Specs_919_919, &STATE_VARIABLE_Specs_1144_1144);
          libs__globals__set_option_4_p_0((MR_Integer) 394, Var_510, STATE_VARIABLE_Globals_1132_1132, &STATE_VARIABLE_Globals_1147_1147);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1147_1147, (MR_Integer) 237, &LotsOfHOSpec_127);
          switch (LotsOfHOSpec_127) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Globals_1156_1156 = STATE_VARIABLE_Globals_1147_1147;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Globals_1152_1152;

                libs__globals__set_option_4_p_0((MR_Integer) 382, Var_361, STATE_VARIABLE_Globals_1147_1147, &STATE_VARIABLE_Globals_1152_1152);
                libs__globals__set_option_4_p_0((MR_Integer) 383, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_1152_1152, &STATE_VARIABLE_Globals_1156_1156);
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1156_1156, (MR_Integer) 239, &RecordTermSizesAsWords_128);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1156_1156, (MR_Integer) 240, &RecordTermSizesAsCells_129);
    succeeded = (RecordTermSizesAsWords_128 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_129 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[206])), STATE_VARIABLE_Specs_1144_1144, &STATE_VARIABLE_Specs_1166_1166);
      STATE_VARIABLE_Globals_1173_1173 = STATE_VARIABLE_Globals_1156_1156;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_128 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_129 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Globals_1169_1169;

        libs__globals__set_option_4_p_0((MR_Integer) 394, Var_510, STATE_VARIABLE_Globals_1156_1156, &STATE_VARIABLE_Globals_1169_1169);
        libs__globals__set_option_4_p_0((MR_Integer) 273, Var_510, STATE_VARIABLE_Globals_1169_1169, &STATE_VARIABLE_Globals_1173_1173);
        switch (HighLevelCode_109) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1166_1166 = STATE_VARIABLE_Specs_1144_1144;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Specs_1144_1144, &STATE_VARIABLE_Specs_1166_1166);
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Globals_1173_1173 = STATE_VARIABLE_Globals_1156_1156;
        STATE_VARIABLE_Specs_1166_1166 = STATE_VARIABLE_Specs_1144_1144;
      }
    }
    {
      MR_Word Var_1185;

      Var_1185 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
      succeeded = (Var_1185 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (HighLevelCode_109 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Target_27 == (MR_Integer) 0);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_1192_1192 = STATE_VARIABLE_Specs_1166_1166;
    else
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[210])), STATE_VARIABLE_Specs_1166_1166, &STATE_VARIABLE_Specs_1192_1192);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 243, (MR_Integer) 524, Var_510, STATE_VARIABLE_Globals_1173_1173, &STATE_VARIABLE_Globals_1196_1196);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 365, (MR_Integer) 396, Var_510, STATE_VARIABLE_Globals_1196_1196, &STATE_VARIABLE_Globals_1201_1201);
    switch (ProfileDeep_125) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 362, (MR_Integer) 396, Var_510, STATE_VARIABLE_Globals_1201_1201, &STATE_VARIABLE_Globals_1206_1206);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1206_1206 = STATE_VARIABLE_Globals_1201_1201;
        break;
    }
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 192, (MR_Integer) 419, Var_510, STATE_VARIABLE_Globals_1206_1206, &STATE_VARIABLE_Globals_1211_1211);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 192, (MR_Integer) 378, Var_510, STATE_VARIABLE_Globals_1211_1211, &STATE_VARIABLE_Globals_1216_1216);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 192, (MR_Integer) 379, Var_510, STATE_VARIABLE_Globals_1216_1216, &STATE_VARIABLE_Globals_1221_1221);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 293, (MR_Integer) 296, Var_361, STATE_VARIABLE_Globals_1221_1221, &STATE_VARIABLE_Globals_1226_1226);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 297, (MR_Integer) 296, Var_361, STATE_VARIABLE_Globals_1226_1226, &STATE_VARIABLE_Globals_1231_1231);
    switch (GC_Method_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_Globals_1235_1235;
          MR_Word STATE_VARIABLE_Globals_1239_1239;
          MR_Word STATE_VARIABLE_Globals_1243_1243;
          MR_Word STATE_VARIABLE_Globals_1247_1247;
          MR_Word STATE_VARIABLE_Globals_1251_1251;
          MR_Word STATE_VARIABLE_Globals_1255_1255;
          MR_Word STATE_VARIABLE_Globals_1259_1259;
          MR_Word STATE_VARIABLE_Globals_1263_1263;
          MR_Word STATE_VARIABLE_Globals_1267_1267;
          MR_Word STATE_VARIABLE_Globals_1271_1271;

          libs__globals__set_option_4_p_0((MR_Integer) 295, Var_361, STATE_VARIABLE_Globals_1231_1231, &STATE_VARIABLE_Globals_1235_1235);
          libs__globals__set_option_4_p_0((MR_Integer) 298, Var_361, STATE_VARIABLE_Globals_1235_1235, &STATE_VARIABLE_Globals_1239_1239);
          libs__globals__set_option_4_p_0((MR_Integer) 486, Var_510, STATE_VARIABLE_Globals_1239_1239, &STATE_VARIABLE_Globals_1243_1243);
          libs__globals__set_option_4_p_0((MR_Integer) 507, Var_510, STATE_VARIABLE_Globals_1243_1243, &STATE_VARIABLE_Globals_1247_1247);
          libs__globals__set_option_4_p_0((MR_Integer) 349, Var_510, STATE_VARIABLE_Globals_1247_1247, &STATE_VARIABLE_Globals_1251_1251);
          libs__globals__set_option_4_p_0((MR_Integer) 484, Var_510, STATE_VARIABLE_Globals_1251_1251, &STATE_VARIABLE_Globals_1255_1255);
          libs__globals__set_option_4_p_0((MR_Integer) 332, Var_510, STATE_VARIABLE_Globals_1255_1255, &STATE_VARIABLE_Globals_1259_1259);
          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_510, STATE_VARIABLE_Globals_1259_1259, &STATE_VARIABLE_Globals_1263_1263);
          libs__globals__set_option_4_p_0((MR_Integer) 394, Var_510, STATE_VARIABLE_Globals_1263_1263, &STATE_VARIABLE_Globals_1267_1267);
          libs__globals__set_option_4_p_0((MR_Integer) 389, Var_510, STATE_VARIABLE_Globals_1267_1267, &STATE_VARIABLE_Globals_1271_1271);
          libs__globals__set_option_4_p_0((MR_Integer) 390, Var_510, STATE_VARIABLE_Globals_1271_1271, &STATE_VARIABLE_Globals_1275_1275);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1275_1275 = STATE_VARIABLE_Globals_1231_1231;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_1275_1275 = STATE_VARIABLE_Globals_1231_1231;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Globals_1275_1275 = STATE_VARIABLE_Globals_1231_1231;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_Globals_1275_1275 = STATE_VARIABLE_Globals_1231_1231;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1275_1275 = STATE_VARIABLE_Globals_1231_1231;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1275_1275, (MR_Integer) 291, &PutNondetEnvOnHeap_133);
    succeeded = (HighLevelCode_109 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (GC_Method_28 == (MR_Integer) 5);
      if (succeeded)
        succeeded = (PutNondetEnvOnHeap_133 == (MR_Integer) 1);
    }
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216])), STATE_VARIABLE_Specs_1192_1192, &STATE_VARIABLE_Specs_1293_1293);
    else
      STATE_VARIABLE_Specs_1293_1293 = STATE_VARIABLE_Specs_1192_1192;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 296, (MR_Integer) 294, Var_361, STATE_VARIABLE_Globals_1275_1275, &STATE_VARIABLE_Globals_1297_1297);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 295, (MR_Integer) 294, Var_361, STATE_VARIABLE_Globals_1297_1297, &STATE_VARIABLE_Globals_1302_1302);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 296, (MR_Integer) 505, Var_510, STATE_VARIABLE_Globals_1302_1302, &STATE_VARIABLE_Globals_1307_1307);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 295, (MR_Integer) 505, Var_510, STATE_VARIABLE_Globals_1307_1307, &STATE_VARIABLE_Globals_1312_1312);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 294, (MR_Integer) 503, Var_510, STATE_VARIABLE_Globals_1312_1312, &STATE_VARIABLE_Globals_1317_1317);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 298, (MR_Integer) 419, Var_510, STATE_VARIABLE_Globals_1317_1317, &STATE_VARIABLE_Globals_1322_1322);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 298, (MR_Integer) 378, Var_510, STATE_VARIABLE_Globals_1322_1322, &STATE_VARIABLE_Globals_1327_1327);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 245, (MR_Integer) 484, Var_510, STATE_VARIABLE_Globals_1327_1327, &STATE_VARIABLE_Globals_1332_1332);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 484, Var_510, STATE_VARIABLE_Globals_1332_1332, &STATE_VARIABLE_Globals_1337_1337);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 247, (MR_Integer) 486, Var_510, STATE_VARIABLE_Globals_1337_1337, &STATE_VARIABLE_Globals_1342_1342);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 310, &DisablePneg_135);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 311, &DisableCut_136);
    succeeded = (UseMinimalModelStackCopy_110 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_135 == (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1342_1342, &STATE_VARIABLE_Globals_1348_1348);
    else
      STATE_VARIABLE_Globals_1348_1348 = STATE_VARIABLE_Globals_1342_1342;
    succeeded = (UseMinimalModelStackCopy_110 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_136 == (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1348_1348, &STATE_VARIABLE_Globals_1352_1352);
    else
      STATE_VARIABLE_Globals_1352_1352 = STATE_VARIABLE_Globals_1348_1348;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1352_1352, (MR_Integer) 172, &DumpHLDSStages_137);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1352_1352, (MR_Integer) 171, &DumpTraceStages_138);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1352_1352, (MR_Integer) 329, &ParallelLiveness_139);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1352_1352, (MR_Integer) 330, &ParallelCodeGen_140);
    succeeded = (DumpHLDSStages_137 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DumpTraceStages_138 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_86 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_139 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_140 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 328, Var_510, STATE_VARIABLE_Globals_1352_1352, &STATE_VARIABLE_Globals_1360_1360);
    else
      STATE_VARIABLE_Globals_1360_1360 = STATE_VARIABLE_Globals_1352_1352;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 389, (MR_Integer) 390, Var_361, STATE_VARIABLE_Globals_1360_1360, &STATE_VARIABLE_Globals_1365_1365);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 378, (MR_Integer) 379, Var_361, STATE_VARIABLE_Globals_1365_1365, &STATE_VARIABLE_Globals_1370_1370);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 381, (MR_Integer) 354, Var_361, STATE_VARIABLE_Globals_1370_1370, &STATE_VARIABLE_Globals_1375_1375);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 381, (MR_Integer) 380, Var_361, STATE_VARIABLE_Globals_1375_1375, &STATE_VARIABLE_Globals_1380_1380);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 391, (MR_Integer) 397, Var_361, STATE_VARIABLE_Globals_1380_1380, &STATE_VARIABLE_Globals_1385_1385);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 391, (MR_Integer) 376, Var_361, STATE_VARIABLE_Globals_1385_1385, &STATE_VARIABLE_Globals_1390_1390);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1392 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_1392)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_1393 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1392, (MR_Integer) 0))));
        succeeded = (Var_1393 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 380, Var_510, STATE_VARIABLE_Globals_1390_1390, &STATE_VARIABLE_Globals_1396_1396);
    else
      STATE_VARIABLE_Globals_1396_1396 = STATE_VARIABLE_Globals_1390_1390;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 424, (MR_Integer) 425, Var_361, STATE_VARIABLE_Globals_1396_1396, &STATE_VARIABLE_Globals_1401_1401);
    succeeded = (OpMode_26 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 30, Var_510, STATE_VARIABLE_Globals_1401_1401, &STATE_VARIABLE_Globals_1405_1405);
    else
      STATE_VARIABLE_Globals_1405_1405 = STATE_VARIABLE_Globals_1401_1401;
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1405_1405, (MR_Integer) 694, &TargetArch_145);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1405_1405, (MR_Integer) 588, &MercuryLinkage_146);
    succeeded = (strcmp(MercuryLinkage_146, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_147 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 572, Var_510, STATE_VARIABLE_Globals_1405_1405, &STATE_VARIABLE_Globals_1411_1411);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1405_1405, (MR_Integer) 572, &DefaultRuntimeLibraryDirs_147);
      STATE_VARIABLE_Globals_1411_1411 = STATE_VARIABLE_Globals_1405_1405;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1411_1411, (MR_Integer) 581, &MaybeStdLibDir_148);
    if ((MaybeStdLibDir_148 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 680, Var_510, STATE_VARIABLE_Globals_1411_1411, &STATE_VARIABLE_Globals_1430_1430);
    else
    {
      MR_String StdLibDir_149 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_148, (MR_Integer) 0))));
      MR_Word OptionTable2_150;
      MR_Word OptionTable_151;
      MR_Word LinkLibDirs0_152;
      MR_Word STATE_VARIABLE_Globals_1419_1419;
      MR_Word Var_1422;
      MR_Word STATE_VARIABLE_Globals_1423_1423;
      MR_Word Var_1424;
      MR_String Var_1425;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_1411_1411, &OptionTable2_150);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_149, OptionTable2_150, &OptionTable_151);
      libs__globals__set_options_3_p_0(OptionTable_151, STATE_VARIABLE_Globals_1411_1411, &STATE_VARIABLE_Globals_1419_1419);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1419_1419, (MR_Integer) 570, &LinkLibDirs0_152);
      Var_1425 = mercury__dir__f_slash_2_f_0(StdLibDir_149, (MR_String) "lib");
      {
        Var_1424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1424, 0) = ((MR_Box) (Var_1425));
        MR_hl_field(MR_mktag(1), Var_1424, 1) = ((MR_Box) (LinkLibDirs0_152));
      }
      {
        Var_1422 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1422, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1422, 1) = ((MR_Box) (Var_1424));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 570, Var_1422, STATE_VARIABLE_Globals_1419_1419, &STATE_VARIABLE_Globals_1423_1423);
      switch (DefaultRuntimeLibraryDirs_147) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1430_1430 = STATE_VARIABLE_Globals_1423_1423;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_153;
            MR_Word Var_1429;
            MR_Word Var_1431;
            MR_String Var_1432;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1423_1423, (MR_Integer) 571, &Rpath0_153);
            Var_1432 = mercury__dir__f_slash_2_f_0(StdLibDir_149, (MR_String) "lib");
            {
              Var_1431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1431, 0) = ((MR_Box) (Var_1432));
              MR_hl_field(MR_mktag(1), Var_1431, 1) = ((MR_Box) (Rpath0_153));
            }
            {
              Var_1429 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1429, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1429, 1) = ((MR_Box) (Var_1431));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 571, Var_1429, STATE_VARIABLE_Globals_1423_1423, &STATE_VARIABLE_Globals_1430_1430);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1430_1430, (MR_Integer) 662, &MaybeConfDir_154);
    if ((MaybeConfDir_154 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1438_1438 = STATE_VARIABLE_Globals_1430_1430;
    else
    {
      MR_String ConfDir_155 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_154, (MR_Integer) 0))));
      MR_Word CIncludeDirs0_156;
      MR_Word Var_1437;
      MR_Word Var_1439;
      MR_String Var_1440;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1430_1430, (MR_Integer) 522, &CIncludeDirs0_156);
      Var_1440 = mercury__dir__f_slash_2_f_0(ConfDir_155, (MR_String) "conf");
      {
        Var_1439 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1439, 0) = ((MR_Box) (Var_1440));
        MR_hl_field(MR_mktag(1), Var_1439, 1) = ((MR_Box) (CIncludeDirs0_156));
      }
      {
        Var_1437 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1437, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1437, 1) = ((MR_Box) (Var_1439));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 522, Var_1437, STATE_VARIABLE_Globals_1430_1430, &STATE_VARIABLE_Globals_1438_1438);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1438_1438, (MR_Integer) 673, &ConfigFile_157);
    succeeded = (ConfigFile_157 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_1443 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConfigFile_157, (MR_Integer) 0))));
      succeeded = (strcmp(Var_1443, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_154 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__globals__set_option_4_p_0((MR_Integer) 673, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])), STATE_VARIABLE_Globals_1438_1438, &STATE_VARIABLE_Globals_1450_1450);
      else
      {
        MR_String ConfDir1_158 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_154, (MR_Integer) 0))));
        MR_Word Var_1449;
        MR_Word Var_1451;
        MR_String Var_1452;
        MR_String Var_1453;

        Var_1453 = mercury__dir__f_slash_2_f_0(ConfDir1_158, (MR_String) "conf");
        Var_1452 = mercury__dir__f_slash_2_f_0(Var_1453, (MR_String) "Mercury.config");
        {
          Var_1451 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1451, 0) = ((MR_Box) (Var_1452));
        }
        {
          Var_1449 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1449, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_1449, 1) = ((MR_Box) (Var_1451));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 673, Var_1449, STATE_VARIABLE_Globals_1438_1438, &STATE_VARIABLE_Globals_1450_1450);
      }
    else
      STATE_VARIABLE_Globals_1450_1450 = STATE_VARIABLE_Globals_1438_1438;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1450_1450, (MR_Integer) 575, &MercuryLibDirs_159);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_1450_1450, &GradeString_160);
    if ((MercuryLibDirs_159 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1507_1507 = STATE_VARIABLE_Globals_1450_1450;
    else
    {
      MR_Word ExtraLinkLibDirs_163;
      MR_Word LinkLibDirs1_165;
      MR_Word ExtraIncludeDirs_167;
      MR_Word CIncludeDirs_168;
      MR_Word ErlangIncludeDirs_169;
      MR_Word ExtraIntermodDirs_170;
      MR_Word IntermodDirs0_171;
      MR_Word ExtraInitDirs_172;
      MR_Word InitDirs1_173;
      MR_Word Var_1457;
      MR_Word Var_1464;
      MR_Word STATE_VARIABLE_Globals_1465_1465;
      MR_Word Var_1466;
      MR_Word STATE_VARIABLE_Globals_1470_1470;
      MR_Word Var_1472;
      MR_Word Var_1481;
      MR_Word STATE_VARIABLE_Globals_1482_1482;
      MR_Word Var_1483;
      MR_Word Var_1486;
      MR_Word STATE_VARIABLE_Globals_1487_1487;
      MR_Word Var_1488;
      MR_Word Var_1489;
      MR_Word Var_1496;
      MR_Word STATE_VARIABLE_Globals_1497_1497;
      MR_Word Var_1498;
      MR_Word Var_1499;
      MR_Word Var_1506;
      MR_Word Var_1508;

      {
        Var_1457 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1457, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1457, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
        MR_hl_field(MR_mktag(0), Var_1457, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1457, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraLinkLibDirs_163 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1457, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1450_1450, (MR_Integer) 570, &LinkLibDirs1_165);
      Var_1466 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_165, ExtraLinkLibDirs_163);
      {
        Var_1464 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1464, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1464, 1) = ((MR_Box) (Var_1466));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 570, Var_1464, STATE_VARIABLE_Globals_1450_1450, &STATE_VARIABLE_Globals_1465_1465);
      switch (DefaultRuntimeLibraryDirs_147) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1470_1470 = STATE_VARIABLE_Globals_1465_1465;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_166;
            MR_Word Var_1469;
            MR_Word Var_1471;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1465_1465, (MR_Integer) 571, &Rpath_166);
            Var_1471 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_166, ExtraLinkLibDirs_163);
            {
              Var_1469 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1469, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1469, 1) = ((MR_Box) (Var_1471));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 571, Var_1469, STATE_VARIABLE_Globals_1465_1465, &STATE_VARIABLE_Globals_1470_1470);
          }
          break;
      }
      {
        Var_1472 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1472, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1472, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
        MR_hl_field(MR_mktag(0), Var_1472, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1472, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraIncludeDirs_167 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1472, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1470_1470, (MR_Integer) 522, &CIncludeDirs_168);
      Var_1483 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_167, CIncludeDirs_168);
      {
        Var_1481 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1481, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1481, 1) = ((MR_Box) (Var_1483));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 522, Var_1481, STATE_VARIABLE_Globals_1470_1470, &STATE_VARIABLE_Globals_1482_1482);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1482_1482, (MR_Integer) 561, &ErlangIncludeDirs_169);
      Var_1488 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_167, ErlangIncludeDirs_169);
      {
        Var_1486 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1486, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1486, 1) = ((MR_Box) (Var_1488));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 561, Var_1486, STATE_VARIABLE_Globals_1482_1482, &STATE_VARIABLE_Globals_1487_1487);
      {
        Var_1489 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1489, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1489, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
        MR_hl_field(MR_mktag(0), Var_1489, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1489, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraIntermodDirs_170 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1489, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1487_1487, (MR_Integer) 678, &IntermodDirs0_171);
      Var_1498 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_170, IntermodDirs0_171);
      {
        Var_1496 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1496, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1496, 1) = ((MR_Box) (Var_1498));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 678, Var_1496, STATE_VARIABLE_Globals_1487_1487, &STATE_VARIABLE_Globals_1497_1497);
      {
        Var_1499 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1499, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1499, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
        MR_hl_field(MR_mktag(0), Var_1499, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1499, 3) = ((MR_Box) (GradeString_160));
      }
      ExtraInitDirs_172 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1499, MercuryLibDirs_159);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1497_1497, (MR_Integer) 583, &InitDirs1_173);
      Var_1508 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_173, ExtraInitDirs_172);
      {
        Var_1506 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1506, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1506, 1) = ((MR_Box) (Var_1508));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 583, Var_1506, STATE_VARIABLE_Globals_1497_1497, &STATE_VARIABLE_Globals_1507_1507);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1507_1507, (MR_Integer) 679, &UseSearchDirs_174);
    switch (UseSearchDirs_174) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1514_1514 = STATE_VARIABLE_Globals_1507_1507;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_175;
          MR_Word SearchDirs_176;
          MR_Word Var_1513;
          MR_Word Var_1515;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1507_1507, (MR_Integer) 678, &IntermodDirs1_175);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1507_1507, (MR_Integer) 677, &SearchDirs_176);
          Var_1515 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_175, SearchDirs_176);
          {
            Var_1513 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1513, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1513, 1) = ((MR_Box) (Var_1515));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 678, Var_1513, STATE_VARIABLE_Globals_1507_1507, &STATE_VARIABLE_Globals_1514_1514);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1514_1514, (MR_Integer) 676, &UseGradeSubdirs_177);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1514_1514, (MR_Integer) 577, &SearchLibFilesDirs_178);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1514_1514, (MR_Integer) 678, &IntermodDirs2_179);
    {
      ToGradeSubdir_180 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 3) = ((MR_Box) (TargetArch_145));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_180, 4) = ((MR_Box) (GradeString_160));
    }
    switch (UseGradeSubdirs_177) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntermodDirs3_184;
          MR_Word LinkLibDirs2_185;
          MR_Word InitDirs2_186;
          MR_Word Var_1534;

          IntermodDirs3_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_178, IntermodDirs2_179);
          {
            Var_1534 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1534, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1534, 1) = ((MR_Box) (IntermodDirs3_184));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 678, Var_1534, STATE_VARIABLE_Globals_1514_1514, &STATE_VARIABLE_Globals_1535_1535);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1535_1535, (MR_Integer) 570, &LinkLibDirs2_185);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1535_1535, (MR_Integer) 583, &InitDirs2_186);
          LinkLibDirs_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_178, LinkLibDirs2_185);
          InitDirs_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_178, InitDirs2_186);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeSubdir_182;
          MR_Word SearchLibFilesGradeSubdirs_183;
          MR_Word ToGradeLibDir_187;
          MR_Word SearchGradeLibDirs_188;
          MR_Word ToGradeInitDir_190;
          MR_Word SearchGradeInitDirs_191;
          MR_String Var_1524;
          MR_Word Var_1526;
          MR_Word Var_1528;
          MR_Word Var_1529;
          MR_Word Var_1530;
          MR_Word Var_1531;
          MR_String Var_1532;
          MR_Word IntermodDirs3_12772;
          MR_Word LinkLibDirs2_12773;
          MR_Word InitDirs2_12774;
          MR_Word Var_12775;

          Var_1524 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_160);
          GradeSubdir_182 = mercury__dir__f_slash_2_f_0(Var_1524, TargetArch_145);
          SearchLibFilesGradeSubdirs_183 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_180, SearchLibFilesDirs_178);
          {
            Var_1526 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_1526, 0) = ((MR_Box) (GradeSubdir_182));
            MR_hl_field(MR_mktag(1), Var_1526, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_1532 = mercury__dir__this_directory_0_f_0();
          {
            Var_1531 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1531, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_1531, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), Var_1531, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1531, 3) = ((MR_Box) (Var_1532));
          }
          {
            Var_1530 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1530, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_1530, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), Var_1530, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1530, 3) = ((MR_Box) (Var_1531));
          }
          Var_1529 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1530, IntermodDirs2_179);
          Var_1528 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_183, Var_1529);
          IntermodDirs3_12772 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1526, Var_1528);
          {
            Var_12775 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_12775, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_12775, 1) = ((MR_Box) (IntermodDirs3_12772));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 678, Var_12775, STATE_VARIABLE_Globals_1514_1514, &STATE_VARIABLE_Globals_1535_1535);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1535_1535, (MR_Integer) 570, &LinkLibDirs2_12773);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1535_1535, (MR_Integer) 583, &InitDirs2_12774);
          {
            ToGradeLibDir_187 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_187, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          SearchGradeLibDirs_188 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_187, SearchLibFilesDirs_178);
          LinkLibDirs_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_188, LinkLibDirs2_12773);
          {
            ToGradeInitDir_190 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_190, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          SearchGradeInitDirs_191 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_190, SearchLibFilesDirs_178);
          InitDirs_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_191, InitDirs2_12774);
        }
        break;
    }
    {
      Var_1551 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1551, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1551, 1) = ((MR_Box) (LinkLibDirs_189));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 570, Var_1551, STATE_VARIABLE_Globals_1535_1535, &STATE_VARIABLE_Globals_1552_1552);
    {
      Var_1554 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1554, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1554, 1) = ((MR_Box) (InitDirs_192));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 583, Var_1554, STATE_VARIABLE_Globals_1552_1552, &STATE_VARIABLE_Globals_1555_1555);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1555_1555, (MR_Integer) 675, &UseSubdirs_193);
    switch (UseGradeSubdirs_177) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_193 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_194 = (MR_Word) (&libs__handle_options_scalar_common_7[0]);
            ToHrlsSubdir_195 = (MR_Word) (&libs__handle_options_scalar_common_7[1]);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_194 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_194, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          {
            ToHrlsSubdir_195 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, 3) = ((MR_Box) (ToGradeSubdir_180));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word CIncludeDirs1_196;
      MR_String MihsSubdir_197;
      MR_Word SearchLibMihsSubdirs_198;
      MR_Word SubdirCIncludeDirs_199;
      MR_Word ErlangIncludeDirs1_200;
      MR_String HrlsSubdir_201;
      MR_Word SubdirErlangIncludeDirs_202;
      MR_String Var_1580;
      MR_String Var_1581;
      MR_Word Var_1582;
      MR_Word Var_1583;
      MR_Word Var_1585;
      MR_Word STATE_VARIABLE_Globals_1586_1586;
      MR_String Var_1588;
      MR_Word Var_1590;
      MR_Box MR_CALL (* func_11)(MR_Box, MR_Box);
      MR_Box conv12_MihsSubdir_197;
      MR_Box MR_CALL (* func_13)(MR_Box, MR_Box);
      MR_Box conv14_HrlsSubdir_201;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1555_1555, (MR_Integer) 522, &CIncludeDirs1_196);
      Var_1580 = mercury__dir__this_directory_0_f_0();
      func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToMihsSubdir_194, (MR_Integer) 1))));
      conv12_MihsSubdir_197 = func_11(((MR_Box) (ToMihsSubdir_194)), ((MR_Box) (Var_1580)));
      MihsSubdir_197 = ((MR_String) (conv12_MihsSubdir_197));
      SearchLibMihsSubdirs_198 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_194, SearchLibFilesDirs_178);
      Var_1581 = mercury__dir__this_directory_0_f_0();
      Var_1583 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_198, CIncludeDirs1_196);
      {
        Var_1582 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1582, 0) = ((MR_Box) (MihsSubdir_197));
        MR_hl_field(MR_mktag(1), Var_1582, 1) = ((MR_Box) (Var_1583));
      }
      {
        SubdirCIncludeDirs_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_199, 0) = ((MR_Box) (Var_1581));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_199, 1) = ((MR_Box) (Var_1582));
      }
      {
        Var_1585 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1585, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1585, 1) = ((MR_Box) (SubdirCIncludeDirs_199));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 522, Var_1585, STATE_VARIABLE_Globals_1555_1555, &STATE_VARIABLE_Globals_1586_1586);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1586_1586, (MR_Integer) 561, &ErlangIncludeDirs1_200);
      Var_1588 = mercury__dir__this_directory_0_f_0();
      func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToHrlsSubdir_195, (MR_Integer) 1))));
      conv14_HrlsSubdir_201 = func_13(((MR_Box) (ToHrlsSubdir_195)), ((MR_Box) (Var_1588)));
      HrlsSubdir_201 = ((MR_String) (conv14_HrlsSubdir_201));
      {
        SubdirErlangIncludeDirs_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_202, 0) = ((MR_Box) (HrlsSubdir_201));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_202, 1) = ((MR_Box) (ErlangIncludeDirs1_200));
      }
      {
        Var_1590 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1590, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1590, 1) = ((MR_Box) (SubdirErlangIncludeDirs_202));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 561, Var_1590, STATE_VARIABLE_Globals_1586_1586, &STATE_VARIABLE_Globals_1591_1591);
    }
    else
      STATE_VARIABLE_Globals_1591_1591 = STATE_VARIABLE_Globals_1555_1555;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 356, (MR_Integer) 16, Var_510, STATE_VARIABLE_Globals_1591_1591, &STATE_VARIABLE_Globals_1595_1595);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1595_1595, (MR_Integer) 34, &WarnNonTailRecSelf_203);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1595_1595, (MR_Integer) 35, &WarnNonTailRecMutual_204);
    succeeded = (WarnNonTailRecSelf_203 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_204 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word PessimizeTailCalls_205;
      MR_Word OptimizeTailCalls_206;
      MR_Word STATE_VARIABLE_Specs_1605_1605;
      MR_Word STATE_VARIABLE_Specs_1610_1610;
      MR_Word Var_1613;
      MR_Word Var_1614;

      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1595_1595, (MR_Integer) 499, &PessimizeTailCalls_205);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1595_1595, (MR_Integer) 487, &OptimizeTailCalls_206);
      switch (PessimizeTailCalls_205) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1605_1605 = STATE_VARIABLE_Specs_1293_1293;
          break;
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[233])), STATE_VARIABLE_Specs_1293_1293, &STATE_VARIABLE_Specs_1605_1605);
          break;
      }
      switch (OptimizeTailCalls_206) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[235])), STATE_VARIABLE_Specs_1605_1605, &STATE_VARIABLE_Specs_1610_1610);
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1610_1610 = STATE_VARIABLE_Specs_1605_1605;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_1613 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_1613)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_1614 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1613, (MR_Integer) 0))));
          succeeded = (Var_1614 == (MR_Word) ((MR_Unsigned) 20U));
        }
      }
      if (succeeded)
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[237])), STATE_VARIABLE_Specs_1610_1610, &STATE_VARIABLE_Specs_1619_1619);
      else
        STATE_VARIABLE_Specs_1619_1619 = STATE_VARIABLE_Specs_1610_1610;
    }
    else
      STATE_VARIABLE_Specs_1619_1619 = STATE_VARIABLE_Specs_1293_1293;
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[238]));
          STATE_VARIABLE_Globals_1630_1630 = STATE_VARIABLE_Globals_1595_1595;
        }
        break;
      case (MR_Integer) 1:
        {
          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[239]));
          STATE_VARIABLE_Globals_1630_1630 = STATE_VARIABLE_Globals_1595_1595;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_1626_1626;

          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]));
          libs__globals__set_option_4_p_0((MR_Integer) 394, Var_510, STATE_VARIABLE_Globals_1595_1595, &STATE_VARIABLE_Globals_1626_1626);
          libs__globals__set_option_4_p_0((MR_Integer) 324, Var_510, STATE_VARIABLE_Globals_1626_1626, &STATE_VARIABLE_Globals_1630_1630);
        }
        break;
      case (MR_Integer) 2:
        {
          BackendForeignLanguages_210 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[240]));
          STATE_VARIABLE_Globals_1630_1630 = STATE_VARIABLE_Globals_1595_1595;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1630_1630, (MR_Integer) 292, &CurrentBackendForeignLanguage_211);
    if ((CurrentBackendForeignLanguage_211 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_1640;

      {
        Var_1640 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1640, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1640, 1) = ((MR_Box) (BackendForeignLanguages_210));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 292, Var_1640, STATE_VARIABLE_Globals_1630_1630, &STATE_VARIABLE_Globals_1641_1641);
    }
    else
      STATE_VARIABLE_Globals_1641_1641 = STATE_VARIABLE_Globals_1630_1630;
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_1641_1641, (MR_Integer) 342, &CompareSpec_214);
    succeeded = (CompareSpec_214 < (MR_Integer) 0);
    if (succeeded)
      switch (HighLevelCode_109) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__globals__set_option_4_p_0((MR_Integer) 342, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7])), STATE_VARIABLE_Globals_1641_1641, &STATE_VARIABLE_Globals_1650_1650);
          break;
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 342, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8])), STATE_VARIABLE_Globals_1641_1641, &STATE_VARIABLE_Globals_1650_1650);
          break;
      }
    else
      STATE_VARIABLE_Globals_1650_1650 = STATE_VARIABLE_Globals_1641_1641;
    succeeded = (Target_27 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (TagsMethod_59 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_1652 = (MR_Integer) 2;
        succeeded = (NumPtagBits_57 >= Var_1652);
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 299, Var_361, STATE_VARIABLE_Globals_1650_1650, &STATE_VARIABLE_Globals_1655_1655);
    else
      libs__globals__set_option_4_p_0((MR_Integer) 299, Var_510, STATE_VARIABLE_Globals_1650_1650, &STATE_VARIABLE_Globals_1655_1655);
    switch (HighLevelCode_109) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_2_p_0(STATE_VARIABLE_Globals_1655_1655, &STATE_VARIABLE_Globals_1661_1661);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1661_1661 = STATE_VARIABLE_Globals_1655_1655;
        break;
    }
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_1661_1661, STATE_VARIABLE_Globals_217, STATE_VARIABLE_Specs_1619_1619, STATE_VARIABLE_Specs_216);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_217);
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
    libs__globals__set_option_4_p_0((MR_Integer) 135, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
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

          mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
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
libs__handle_options__postprocess_options_lowlevel_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15)
{
  {
    MR_bool succeeded;
    MR_Word OptFrames_4;
    MR_Word OptLocalVars_5;
    MR_Integer OptRepeat_6;
    MR_Word UnboxedFloat_7;
    MR_Word StaticGroundFloats_8;
    MR_Word UnboxedInt64s_9;
    MR_Word StaticGroundInt64s_10;
    MR_Word NonLocalGotos_11;
    MR_Word AsmLabels_12;
    MR_Word StaticCodeAddrs_13;
    MR_Word Var_18 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]));
    MR_Word STATE_VARIABLE_Globals_19_19;
    MR_Word STATE_VARIABLE_Globals_24_24;
    MR_Word STATE_VARIABLE_Globals_29_29;
    MR_Word STATE_VARIABLE_Globals_34_34;
    MR_Word STATE_VARIABLE_Globals_42_42;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_Globals_47_47;
    MR_Word Var_50;
    MR_Word STATE_VARIABLE_Globals_51_51;
    MR_Word Var_55;
    MR_Word SourceOptionValue_63;
    MR_Word SourceOptionValue_71;
    MR_Word SourceOptionValue_79;
    MR_Word SourceOptionValue_87;
    MR_Integer Var_39;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 401, &SourceOptionValue_63);
    switch (SourceOptionValue_63) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_19_19 = STATE_VARIABLE_Globals_0_14;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 501, Var_18, STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_19_19);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_19_19, (MR_Integer) 507, &SourceOptionValue_71);
    switch (SourceOptionValue_71) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_24_24 = STATE_VARIABLE_Globals_19_19;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 504, Var_18, STATE_VARIABLE_Globals_19_19, &STATE_VARIABLE_Globals_24_24);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_24_24, (MR_Integer) 507, &SourceOptionValue_79);
    switch (SourceOptionValue_79) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_24_24;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 497, Var_18, STATE_VARIABLE_Globals_24_24, &STATE_VARIABLE_Globals_29_29);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 506, &SourceOptionValue_87);
    switch (SourceOptionValue_87) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_34_34 = STATE_VARIABLE_Globals_29_29;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 328, Var_18, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 507, &OptFrames_4);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 501, &OptLocalVars_5);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 510, &OptRepeat_6);
    succeeded = (OptFrames_4 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OptLocalVars_5 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_39 = (MR_Integer) 1;
      succeeded = (OptRepeat_6 < Var_39);
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 510, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_42_42);
    else
      STATE_VARIABLE_Globals_42_42 = STATE_VARIABLE_Globals_34_34;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_42_42, (MR_Integer) 268, &UnboxedFloat_7);
    switch (UnboxedFloat_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        StaticGroundFloats_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        StaticGroundFloats_8 = (MR_Integer) 1;
        break;
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = (MR_Box) ((MR_Unsigned) (StaticGroundFloats_8));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 480, Var_46, STATE_VARIABLE_Globals_42_42, &STATE_VARIABLE_Globals_47_47);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_47_47, (MR_Integer) 269, &UnboxedInt64s_9);
    switch (UnboxedInt64s_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        StaticGroundInt64s_10 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        StaticGroundInt64s_10 = (MR_Integer) 1;
        break;
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = (MR_Box) ((MR_Unsigned) (StaticGroundInt64s_10));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 481, Var_50, STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 283, &NonLocalGotos_11);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 285, &AsmLabels_12);
    succeeded = (NonLocalGotos_11 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (AsmLabels_12 == (MR_Integer) 0);
    if (succeeded)
      StaticCodeAddrs_13 = (MR_Integer) 0;
    else
      StaticCodeAddrs_13 = (MR_Integer) 1;
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = (MR_Box) ((MR_Unsigned) (StaticCodeAddrs_13));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 482, Var_55, STATE_VARIABLE_Globals_51_51, STATE_VARIABLE_Globals_15);
  }
}

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_117,
  MR_Word * STATE_VARIABLE_OptionTable_118,
  MR_Word * Target_24,
  MR_Word * GC_Method_25,
  MR_Word * TagsMethod_26,
  MR_Word * TermNorm_27,
  MR_Word * Term2Norm_28,
  MR_Word * TraceLevel_29,
  MR_Word * TraceSuppress_30,
  MR_Word * SSTraceLevel_31,
  MR_Word * MaybeThreadSafe_32,
  MR_Word * C_CompilerType_33,
  MR_Word * CSharp_CompilerType_34,
  MR_Word * ReuseStrategy_35,
  MR_Word * MaybeFeedbackInfo_36,
  MR_Word * HostEnvType_37,
  MR_Word * SystemEnvType_38,
  MR_Word * TargetEnvType_39,
  MR_Word * LimitErrorContextsMap_40,
  MR_Word * STATE_VARIABLE_Specs_119)
{
  {
    MR_bool succeeded;
    MR_String TargetStr_43;
    MR_String GC_MethodStr_46;
    MR_String TagsMethodStr_49;
    MR_Integer FactTablePercentFull_52;
    MR_Integer IncompleteSwitchThreshold_54;
    MR_String TermNormStr_56;
    MR_String Term2NormStr_59;
    MR_Word ForceDisableTracing_62;
    MR_String SuppressStr_69;
    MR_Word ForceDisableSSDB_72;
    MR_String MaybeThreadSafeStr_77;
    MR_String DumpAlias_80;
    MR_String C_CompilerTypeStr_84;
    MR_String CSharp_CompilerTypeStr_87;
    MR_String ReuseConstraintStr_90;
    MR_Integer ReuseConstraintArgNum_91;
    MR_String FeedbackFile_94;
    MR_String HostEnvTypeStr_100;
    MR_String SystemEnvTypeStr_103;
    MR_String TargetEnvTypeStr_106;
    MR_Word LimitErrorContextsOptionStrs_109;
    MR_Word BadLimitErrorContextsOptions_110;
    MR_Word STATE_VARIABLE_Specs_157_157;
    MR_Word STATE_VARIABLE_Specs_196_196;
    MR_Word STATE_VARIABLE_Specs_229_229;
    MR_Word STATE_VARIABLE_Specs_250_250;
    MR_Word STATE_VARIABLE_Specs_271_271;
    MR_Word STATE_VARIABLE_Specs_304_304;
    MR_Word STATE_VARIABLE_Specs_337_337;
    MR_Word STATE_VARIABLE_Specs_359_359;
    MR_Word STATE_VARIABLE_Specs_416_416;
    MR_Word STATE_VARIABLE_Specs_453_453;
    MR_Word STATE_VARIABLE_Specs_487_487;
    MR_Word STATE_VARIABLE_OptionTable_491_491;
    MR_Word STATE_VARIABLE_Specs_518_518;
    MR_String STATE_VARIABLE_DumpOptions_520_520;
    MR_String STATE_VARIABLE_DumpOptions_521_521;
    MR_String STATE_VARIABLE_DumpOptions_524_524;
    MR_String STATE_VARIABLE_DumpOptions_528_528;
    MR_String STATE_VARIABLE_DumpOptions_552_552;
    MR_Word Var_555;
    MR_Word STATE_VARIABLE_Specs_594_594;
    MR_Word STATE_VARIABLE_Specs_630_630;
    MR_Word STATE_VARIABLE_Specs_662_662;
    MR_Word STATE_VARIABLE_Specs_667_667;
    MR_Word STATE_VARIABLE_Specs_704_704;
    MR_Word STATE_VARIABLE_Specs_742_742;
    MR_Word STATE_VARIABLE_Specs_780_780;
    MR_Word TargetPrime_44;
    MR_Word GC_MethodPrime_47;
    MR_Word TagsMethodPrime_50;
    MR_Integer Var_232;
    MR_Integer Var_253;
    MR_Word TermNormPrime_57;
    MR_Word Term2NormPrime_60;
    MR_Word TraceSuppressPrime_70;
    MR_Word MaybeThreadSafePrime_78;
    MR_Char Var_523;
    MR_Char Var_527;
    MR_Char Var_551;
    MR_Word C_CompilerTypePrime_85;
    MR_Word CSharp_CompilerTypePrime_88;
    MR_Word ReuseStrategyPrime_92;
    MR_Word HostEnvTypePrime_101;
    MR_Word SystemEnvTypePrime_104;
    MR_Word TargetEnvTypePrime_107;

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 205, &TargetStr_43);
    succeeded = libs__globals__convert_target_2_p_0(TargetStr_43, &TargetPrime_44);
    if (succeeded)
    {
      *Target_24 = TargetPrime_44;
      STATE_VARIABLE_Specs_157_157 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word TargetSpec_45;
      MR_Word Var_124;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_139;
      MR_Word Var_140;

      *Target_24 = (MR_Integer) 0;
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_128, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_128, 1) = ((MR_Box) (TargetStr_43));
      }
      {
        Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_127, 0) = ((MR_Box) (Var_128));
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])));
      }
      {
        Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
      }
      Var_140 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21])));
      Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_140, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TargetSpec_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_124, Var_139);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_45, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_157_157);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 242, &GC_MethodStr_46);
    succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_46, &GC_MethodPrime_47);
    if (succeeded)
    {
      *GC_Method_25 = GC_MethodPrime_47;
      STATE_VARIABLE_Specs_196_196 = STATE_VARIABLE_Specs_157_157;
    }
    else
    {
      MR_Word GCMethodSpec_48;
      MR_Word Var_159;
      MR_Word Var_162;
      MR_Word Var_163;
      MR_Word Var_174;
      MR_Word Var_175;

      *GC_Method_25 = (MR_Integer) 1;
      {
        Var_163 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_163, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_163, 1) = ((MR_Box) (GC_MethodStr_46));
      }
      {
        Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
        MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])));
      }
      {
        Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (Var_162));
      }
      Var_175 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30])));
      Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_175, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      GCMethodSpec_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_159, Var_174);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_48, STATE_VARIABLE_Specs_157_157, &STATE_VARIABLE_Specs_196_196);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 263, &TagsMethodStr_49);
    succeeded = libs__globals__convert_tags_method_2_p_0(TagsMethodStr_49, &TagsMethodPrime_50);
    if (succeeded)
    {
      *TagsMethod_26 = TagsMethodPrime_50;
      STATE_VARIABLE_Specs_229_229 = STATE_VARIABLE_Specs_196_196;
    }
    else
    {
      MR_Word TagsMethodSpec_51;
      MR_Word Var_198;
      MR_Word Var_201;
      MR_Word Var_202;
      MR_Word Var_213;
      MR_Word Var_214;

      *TagsMethod_26 = (MR_Integer) 0;
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_202, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_202, 1) = ((MR_Box) (TagsMethodStr_49));
      }
      {
        Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Var_202));
        MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])));
      }
      {
        Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_201));
      }
      Var_214 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36])));
      Var_213 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_214, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TagsMethodSpec_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_198, Var_213);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TagsMethodSpec_51, STATE_VARIABLE_Specs_196_196, &STATE_VARIABLE_Specs_229_229);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 345, &FactTablePercentFull_52);
    succeeded = (FactTablePercentFull_52 >= (MR_Integer) 1);
    if (succeeded)
    {
      Var_232 = (MR_Integer) 100;
      succeeded = (FactTablePercentFull_52 <= Var_232);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_250_250 = STATE_VARIABLE_Specs_229_229;
    else
    {
      MR_Word FactTablePercentFullSpec_53;
      MR_Word Var_235;
      MR_Word Var_236;

      {
        Var_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_236, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_236, 1) = ((MR_Box) (FactTablePercentFull_52));
      }
      {
        Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (Var_236));
        MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
      }
      {
        FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 1) = ((MR_Box) (Var_235));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), FactTablePercentFullSpec_53, STATE_VARIABLE_Specs_229_229, &STATE_VARIABLE_Specs_250_250);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 54, &IncompleteSwitchThreshold_54);
    succeeded = (IncompleteSwitchThreshold_54 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_253 = (MR_Integer) 100;
      succeeded = (IncompleteSwitchThreshold_54 <= Var_253);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_271_271 = STATE_VARIABLE_Specs_250_250;
    else
    {
      MR_Word IncompleteSwitchThresholdSpec_55;
      MR_Word Var_256;
      MR_Word Var_257;

      {
        Var_257 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_257, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_257, 1) = ((MR_Box) (IncompleteSwitchThreshold_54));
      }
      {
        Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Var_257));
        MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])));
      }
      {
        IncompleteSwitchThresholdSpec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 1) = ((MR_Box) (Var_256));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_55, STATE_VARIABLE_Specs_250_250, &STATE_VARIABLE_Specs_271_271);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 449, &TermNormStr_56);
    succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_56, &TermNormPrime_57);
    if (succeeded)
    {
      *TermNorm_27 = TermNormPrime_57;
      STATE_VARIABLE_Specs_304_304 = STATE_VARIABLE_Specs_271_271;
    }
    else
    {
      MR_Word TermNormSpec_58;
      MR_Word Var_273;
      MR_Word Var_276;
      MR_Word Var_277;
      MR_Word Var_288;
      MR_Word Var_289;

      *TermNorm_27 = (MR_Integer) 0;
      {
        Var_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_277, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_277, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (Var_277));
        MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])));
      }
      {
        Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (Var_276));
      }
      Var_289 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])));
      Var_288 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_289, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TermNormSpec_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_273, Var_288);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_58, STATE_VARIABLE_Specs_271_271, &STATE_VARIABLE_Specs_304_304);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 455, &Term2NormStr_59);
    succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_59, &Term2NormPrime_60);
    if (succeeded)
    {
      *Term2Norm_28 = Term2NormPrime_60;
      STATE_VARIABLE_Specs_337_337 = STATE_VARIABLE_Specs_304_304;
    }
    else
    {
      MR_Word Term2NormSpec_61;
      MR_Word Var_306;
      MR_Word Var_309;
      MR_Word Var_310;
      MR_Word Var_321;
      MR_Word Var_322;

      *Term2Norm_28 = (MR_Integer) 0;
      {
        Var_310 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_310, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_310, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_309, 0) = ((MR_Box) (Var_310));
        MR_hl_field(MR_mktag(1), Var_309, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[55])));
      }
      {
        Var_306 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_306, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_306, 1) = ((MR_Box) (Var_309));
      }
      Var_322 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])));
      Var_321 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_322, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      Term2NormSpec_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_306, Var_321);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Term2NormSpec_61, STATE_VARIABLE_Specs_304_304, &STATE_VARIABLE_Specs_337_337);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 151, &ForceDisableTracing_62);
    switch (ForceDisableTracing_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Trace_63;
          MR_Word ExecTrace_64;
          MR_Word DeclDebug_65;
          MR_Word MaybeTraceLevel_66;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 139, &Trace_63);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 213, &ExecTrace_64);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 214, &DeclDebug_65);
          succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_63, ExecTrace_64, DeclDebug_65, &MaybeTraceLevel_66);
          if (succeeded)
            if ((MaybeTraceLevel_66 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InconsistentTraceLevelSpec_67;
              MR_Word Var_344;
              MR_Word Var_345;

              *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              {
                Var_345 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_345, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_345, 1) = ((MR_Box) (Trace_63));
              }
              {
                Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_344, 0) = ((MR_Box) (Var_345));
                MR_hl_field(MR_mktag(1), Var_344, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])));
              }
              {
                InconsistentTraceLevelSpec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 1) = ((MR_Box) (Var_344));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InconsistentTraceLevelSpec_67, STATE_VARIABLE_Specs_337_337, &STATE_VARIABLE_Specs_359_359);
            }
            else
            {
              *TraceLevel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceLevel_66, (MR_Integer) 0))));
              STATE_VARIABLE_Specs_359_359 = STATE_VARIABLE_Specs_337_337;
            }
          else
          {
            MR_Word BadTraceLevelSpec_68;
            MR_Word Var_360;
            MR_Word Var_363;
            MR_Word Var_364;
            MR_Word Var_375;
            MR_Word Var_376;

            *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
            {
              Var_364 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_364, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_364, 1) = ((MR_Box) (Trace_63));
            }
            {
              Var_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_363, 0) = ((MR_Box) (Var_364));
              MR_hl_field(MR_mktag(1), Var_363, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])));
            }
            {
              Var_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_360, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
              MR_hl_field(MR_mktag(1), Var_360, 1) = ((MR_Box) (Var_363));
            }
            Var_376 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70])));
            Var_375 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_376, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
            BadTraceLevelSpec_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_360, Var_375);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BadTraceLevelSpec_68, STATE_VARIABLE_Specs_337_337, &STATE_VARIABLE_Specs_359_359);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          STATE_VARIABLE_Specs_359_359 = STATE_VARIABLE_Specs_337_337;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 150, &SuppressStr_69);
    succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_69, &TraceSuppressPrime_70);
    if (succeeded)
    {
      *TraceSuppress_30 = TraceSuppressPrime_70;
      STATE_VARIABLE_Specs_416_416 = STATE_VARIABLE_Specs_359_359;
    }
    else
    {
      MR_Word TraceSuppressSpec_71;
      MR_Word Var_401;
      MR_Word Var_402;

      *TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
      {
        Var_402 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_402, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_402, 1) = ((MR_Box) (SuppressStr_69));
      }
      {
        Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_401, 0) = ((MR_Box) (Var_402));
        MR_hl_field(MR_mktag(1), Var_401, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])));
      }
      {
        TraceSuppressSpec_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 1) = ((MR_Box) (Var_401));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TraceSuppressSpec_71, STATE_VARIABLE_Specs_359_359, &STATE_VARIABLE_Specs_416_416);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 155, &ForceDisableSSDB_72);
    switch (ForceDisableSSDB_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SSTrace_73;
          MR_Word SSDB_74;
          MR_Word SSTL_75;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 261, &SSTrace_73);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 260, &SSDB_74);
          succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_73, SSDB_74, &SSTL_75);
          if (succeeded)
          {
            *SSTraceLevel_31 = SSTL_75;
            STATE_VARIABLE_Specs_453_453 = STATE_VARIABLE_Specs_416_416;
          }
          else
          {
            MR_Word SSDBSpec_76;
            MR_Word Var_420;
            MR_Word Var_423;
            MR_Word Var_424;
            MR_Word Var_435;
            MR_Word Var_436;

            *SSTraceLevel_31 = (MR_Integer) 0;
            {
              Var_424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_424, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_424, 1) = ((MR_Box) (SSTrace_73));
            }
            {
              Var_423 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_423, 0) = ((MR_Box) (Var_424));
              MR_hl_field(MR_mktag(1), Var_423, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[76])));
            }
            {
              Var_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_420, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
              MR_hl_field(MR_mktag(1), Var_420, 1) = ((MR_Box) (Var_423));
            }
            Var_436 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[80])));
            Var_435 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_436, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
            SSDBSpec_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_420, Var_435);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SSDBSpec_76, STATE_VARIABLE_Specs_416_416, &STATE_VARIABLE_Specs_453_453);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *SSTraceLevel_31 = (MR_Integer) 0;
          STATE_VARIABLE_Specs_453_453 = STATE_VARIABLE_Specs_416_416;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 253, &MaybeThreadSafeStr_77);
    succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_77, &MaybeThreadSafePrime_78);
    if (succeeded)
    {
      *MaybeThreadSafe_32 = MaybeThreadSafePrime_78;
      STATE_VARIABLE_Specs_487_487 = STATE_VARIABLE_Specs_453_453;
    }
    else
    {
      MR_Word MTSSpec_79;
      MR_Word Var_455;
      MR_Word Var_458;
      MR_Word Var_459;
      MR_Word Var_473;
      MR_Word Var_474;

      *MaybeThreadSafe_32 = (MR_Integer) 0;
      {
        Var_459 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_459, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_459, 1) = ((MR_Box) (MaybeThreadSafeStr_77));
      }
      {
        Var_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_458, 0) = ((MR_Box) (Var_459));
        MR_hl_field(MR_mktag(1), Var_458, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87])));
      }
      {
        Var_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_455, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_455, 1) = ((MR_Box) (Var_458));
      }
      Var_474 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[89])));
      Var_473 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_474, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      MTSSpec_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_455, Var_473);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MTSSpec_79, STATE_VARIABLE_Specs_453_453, &STATE_VARIABLE_Specs_487_487);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 178, &DumpAlias_80);
    succeeded = (strcmp(DumpAlias_80, (MR_String) "") == 0);
    if (succeeded)
    {
      STATE_VARIABLE_Specs_518_518 = STATE_VARIABLE_Specs_487_487;
      STATE_VARIABLE_OptionTable_491_491 = STATE_VARIABLE_OptionTable_0_117;
    }
    else
    {
      MR_String AliasDumpOptions_81;

      succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_80, &AliasDumpOptions_81);
      if (succeeded)
      {
        MR_Word Var_490;

        {
          Var_490 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_490, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_490, 1) = ((MR_Box) (AliasDumpOptions_81));
        }
        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 179)), ((MR_Box) (Var_490)), STATE_VARIABLE_OptionTable_0_117, &STATE_VARIABLE_OptionTable_491_491);
        STATE_VARIABLE_Specs_518_518 = STATE_VARIABLE_Specs_487_487;
      }
      else
      {
        MR_Word DumpAliasSpec_82;
        MR_Word Var_494;
        MR_Word Var_495;

        {
          Var_495 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_495, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_495, 1) = ((MR_Box) (DumpAlias_80));
        }
        {
          Var_494 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_494, 0) = ((MR_Box) (Var_495));
          MR_hl_field(MR_mktag(1), Var_494, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98])));
        }
        {
          DumpAliasSpec_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 1) = ((MR_Box) (Var_494));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_82, STATE_VARIABLE_Specs_487_487, &STATE_VARIABLE_Specs_518_518);
        STATE_VARIABLE_OptionTable_491_491 = STATE_VARIABLE_OptionTable_0_117;
      }
    }
    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_491_491, ((MR_Box) ((MR_Integer) 179)), &STATE_VARIABLE_DumpOptions_520_520);
    succeeded = (strcmp(STATE_VARIABLE_DumpOptions_520_520, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_DumpOptions_521_521 = (MR_String) "x";
    else
      STATE_VARIABLE_DumpOptions_521_521 = STATE_VARIABLE_DumpOptions_520_520;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_521_521, (MR_Char) 121);
    if (succeeded)
    {
      Var_523 = (MR_Char) 97;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_521_521, Var_523);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_524_524 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_521_521);
    else
      STATE_VARIABLE_DumpOptions_524_524 = STATE_VARIABLE_DumpOptions_521_521;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_524_524, (MR_Char) 97);
    if (succeeded)
    {
      Var_527 = (MR_Char) 117;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_524_524, Var_527);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_528_528 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_524_524);
    else
      STATE_VARIABLE_DumpOptions_528_528 = STATE_VARIABLE_DumpOptions_524_524;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 65);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 66);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 68);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 71);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 80);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 82);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 83);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 98);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 99);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 100);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 102);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 103);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 105);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 108);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 109);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 110);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 112);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 115);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 116);
                                        if (!(succeeded))
                                        {
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 117);
                                          if (!(succeeded))
                                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, (MR_Char) 122);
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
      Var_551 = (MR_Char) 120;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_528_528, Var_551);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_552_552 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_528_528);
    else
      STATE_VARIABLE_DumpOptions_552_552 = STATE_VARIABLE_DumpOptions_528_528;
    {
      Var_555 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_555, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_555, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_552_552));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 179)), ((MR_Box) (Var_555)), STATE_VARIABLE_OptionTable_491_491, STATE_VARIABLE_OptionTable_118);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 545, &C_CompilerTypeStr_84);
    succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_84, &C_CompilerTypePrime_85);
    if (succeeded)
    {
      *C_CompilerType_33 = C_CompilerTypePrime_85;
      STATE_VARIABLE_Specs_594_594 = STATE_VARIABLE_Specs_518_518;
    }
    else
    {
      MR_Word CCTpec_86;
      MR_Word Var_558;
      MR_Word Var_561;
      MR_Word Var_562;
      MR_Word Var_576;
      MR_Word Var_577;

      *C_CompilerType_33 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_562 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_562, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_562, 1) = ((MR_Box) (C_CompilerTypeStr_84));
      }
      {
        Var_561 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_561, 0) = ((MR_Box) (Var_562));
        MR_hl_field(MR_mktag(1), Var_561, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[101])));
      }
      {
        Var_558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_558, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_558, 1) = ((MR_Box) (Var_561));
      }
      Var_577 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[105])));
      Var_576 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_577, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      CCTpec_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_558, Var_576);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_86, STATE_VARIABLE_Specs_518_518, &STATE_VARIABLE_Specs_594_594);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 546, &CSharp_CompilerTypeStr_87);
    succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_87, &CSharp_CompilerTypePrime_88);
    if (succeeded)
    {
      *CSharp_CompilerType_34 = CSharp_CompilerTypePrime_88;
      STATE_VARIABLE_Specs_630_630 = STATE_VARIABLE_Specs_594_594;
    }
    else
    {
      MR_Word CSCSpec_89;
      MR_Word Var_596;
      MR_Word Var_599;
      MR_Word Var_600;
      MR_Word Var_614;
      MR_Word Var_615;

      *CSharp_CompilerType_34 = (MR_Integer) 2;
      {
        Var_600 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_600, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_600, 1) = ((MR_Box) (CSharp_CompilerTypeStr_87));
      }
      {
        Var_599 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_599, 0) = ((MR_Box) (Var_600));
        MR_hl_field(MR_mktag(1), Var_599, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])));
      }
      {
        Var_596 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_596, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_596, 1) = ((MR_Box) (Var_599));
      }
      Var_615 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110])));
      Var_614 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_615, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      CSCSpec_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_596, Var_614);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_89, STATE_VARIABLE_Specs_594_594, &STATE_VARIABLE_Specs_630_630);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 440, &ReuseConstraintStr_90);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 441, &ReuseConstraintArgNum_91);
    succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_90, ReuseConstraintArgNum_91, &ReuseStrategyPrime_92);
    if (succeeded)
    {
      *ReuseStrategy_35 = ReuseStrategyPrime_92;
      STATE_VARIABLE_Specs_662_662 = STATE_VARIABLE_Specs_630_630;
    }
    else
    {
      MR_Word ReuseConstrSpec_93;
      MR_Word Var_633;
      MR_Word Var_636;
      MR_Word Var_637;
      MR_Word Var_648;
      MR_Word Var_649;

      *ReuseStrategy_35 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_637 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_637, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_637, 1) = ((MR_Box) (ReuseConstraintStr_90));
      }
      {
        Var_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_636, 0) = ((MR_Box) (Var_637));
        MR_hl_field(MR_mktag(1), Var_636, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])));
      }
      {
        Var_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_633, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_633, 1) = ((MR_Box) (Var_636));
      }
      Var_649 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115])));
      Var_648 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_649, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      ReuseConstrSpec_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_633, Var_648);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_93, STATE_VARIABLE_Specs_630_630, &STATE_VARIABLE_Specs_662_662);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 709, &FeedbackFile_94);
    succeeded = (strcmp(FeedbackFile_94, (MR_String) "") == 0);
    if (succeeded)
    {
      *MaybeFeedbackInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_667_667 = STATE_VARIABLE_Specs_662_662;
    }
    else
    {
      MR_Word FeedbackReadResult_96;

      mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_94, (MR_Word) ((MR_Unsigned) 0U), &FeedbackReadResult_96);
      if (((MR_tag((MR_Word) FeedbackReadResult_96)) == (MR_Integer) 1))
      {
        MR_Word Error_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FeedbackReadResult_96, (MR_Integer) 0))));
        MR_String ErrorMessage_99;
        MR_Word Var_666;
        MR_Word Var_668;

        mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_94, Error_98, &ErrorMessage_99);
        {
          Var_668 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_668, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_668, 1) = ((MR_Box) (ErrorMessage_99));
        }
        {
          Var_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_666, 0) = ((MR_Box) (Var_668));
          MR_hl_field(MR_mktag(1), Var_666, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_666, STATE_VARIABLE_Specs_662_662, &STATE_VARIABLE_Specs_667_667);
        *MaybeFeedbackInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word FeedbackInfo_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FeedbackReadResult_96, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFeedbackInfo_36 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FeedbackInfo_97));
        }
        STATE_VARIABLE_Specs_667_667 = STATE_VARIABLE_Specs_662_662;
      }
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 686, &HostEnvTypeStr_100);
    succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_100, &HostEnvTypePrime_101);
    if (succeeded)
    {
      *HostEnvType_37 = HostEnvTypePrime_101;
      STATE_VARIABLE_Specs_704_704 = STATE_VARIABLE_Specs_667_667;
    }
    else
    {
      MR_Word HostEnvSpec_102;
      MR_Word Var_671;
      MR_Word Var_674;
      MR_Word Var_675;
      MR_Word Var_686;
      MR_Word Var_687;

      *HostEnvType_37 = (MR_Integer) 0;
      {
        Var_675 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_675, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_675, 1) = ((MR_Box) (HostEnvTypeStr_100));
      }
      {
        Var_674 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_674, 0) = ((MR_Box) (Var_675));
        MR_hl_field(MR_mktag(1), Var_674, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[118])));
      }
      {
        Var_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_671, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_671, 1) = ((MR_Box) (Var_674));
      }
      Var_687 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])));
      Var_686 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_687, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      HostEnvSpec_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_671, Var_686);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_102, STATE_VARIABLE_Specs_667_667, &STATE_VARIABLE_Specs_704_704);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 687, &SystemEnvTypeStr_103);
    succeeded = (strcmp(SystemEnvTypeStr_103, (MR_String) "") == 0);
    if (succeeded)
    {
      SystemEnvTypePrime_104 = *HostEnvType_37;
      succeeded = MR_TRUE;
    }
    else
      succeeded = libs__globals__convert_env_type_2_p_0(SystemEnvTypeStr_103, &SystemEnvTypePrime_104);
    if (succeeded)
    {
      *SystemEnvType_38 = SystemEnvTypePrime_104;
      STATE_VARIABLE_Specs_742_742 = STATE_VARIABLE_Specs_704_704;
    }
    else
    {
      MR_Word SystemEnvSpec_105;
      MR_Word Var_706;
      MR_Word Var_709;
      MR_Word Var_710;
      MR_Word Var_724;
      MR_Word Var_725;

      *SystemEnvType_38 = (MR_Integer) 0;
      {
        Var_710 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_710, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_710, 1) = ((MR_Box) (SystemEnvTypeStr_103));
      }
      {
        Var_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_709, 0) = ((MR_Box) (Var_710));
        MR_hl_field(MR_mktag(1), Var_709, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])));
      }
      {
        Var_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_706, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_706, 1) = ((MR_Box) (Var_709));
      }
      Var_725 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])));
      Var_724 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_725, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      SystemEnvSpec_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_706, Var_724);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_105, STATE_VARIABLE_Specs_704_704, &STATE_VARIABLE_Specs_742_742);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 688, &TargetEnvTypeStr_106);
    succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_106, &TargetEnvTypePrime_107);
    if (succeeded)
    {
      *TargetEnvType_39 = TargetEnvTypePrime_107;
      STATE_VARIABLE_Specs_780_780 = STATE_VARIABLE_Specs_742_742;
    }
    else
    {
      MR_Word TargetEnvTypeSpec_108;
      MR_Word Var_744;
      MR_Word Var_747;
      MR_Word Var_748;
      MR_Word Var_762;
      MR_Word Var_763;

      *TargetEnvType_39 = (MR_Integer) 0;
      {
        Var_748 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_748, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_748, 1) = ((MR_Box) (TargetEnvTypeStr_106));
      }
      {
        Var_747 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_747, 0) = ((MR_Box) (Var_748));
        MR_hl_field(MR_mktag(1), Var_747, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])));
      }
      {
        Var_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_744, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
        MR_hl_field(MR_mktag(1), Var_744, 1) = ((MR_Box) (Var_747));
      }
      Var_763 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])));
      Var_762 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_763, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TargetEnvTypeSpec_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_744, Var_762);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetEnvTypeSpec_108, STATE_VARIABLE_Specs_742_742, &STATE_VARIABLE_Specs_780_780);
    }
    libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 78, &LimitErrorContextsOptionStrs_109);
    libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_109, &BadLimitErrorContextsOptions_110, LimitErrorContextsMap_40);
    if ((BadLimitErrorContextsOptions_110 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_119 = STATE_VARIABLE_Specs_780_780;
    else
    {
      MR_Word Var_841 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_110, (MR_Integer) 1))));
      MR_String Var_842 = ((MR_String) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_110, (MR_Integer) 0))));

      if ((Var_841 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LECSpec_112;
        MR_Word Var_805;
        MR_Word Var_806;

        {
          Var_806 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_806, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_806, 1) = ((MR_Box) (Var_842));
        }
        {
          Var_805 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_805, 0) = ((MR_Box) (Var_806));
          MR_hl_field(MR_mktag(1), Var_805, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])));
        }
        {
          LECSpec_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LECSpec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
          MR_hl_field(MR_mktag(1), LECSpec_112, 1) = ((MR_Box) (Var_805));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_112, STATE_VARIABLE_Specs_780_780, STATE_VARIABLE_Specs_119);
      }
      else
      {
        MR_Word BadPieces_116;
        MR_Word Var_787;
        MR_Word LECSpec_821;

        BadPieces_116 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(BadLimitErrorContextsOptions_110);
        Var_787 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), BadPieces_116, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])));
        LECSpec_821 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[220])), Var_787);
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_821, STATE_VARIABLE_Specs_780_780, STATE_VARIABLE_Specs_119);
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

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
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

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
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

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
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

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
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
