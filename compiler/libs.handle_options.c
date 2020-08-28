/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2020-08-26
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
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2142__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1601);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2140__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1595);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_1_f_0(
  MR_String LambdaHeadVar__1_1590);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2148__1_1_f_0(
  MR_String LambdaHeadVar__1_1585);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2118__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1572);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2114__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1566);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2096__2_2_p_0(
  MR_Word HeadVar__1_1559,
  MR_String HeadVar__2_1708);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2096__1_2_p_0(
  MR_String HeadVar__1_1560,
  MR_String HeadVar__2_1710);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2078__1_3_f_0(
  MR_String TargetArch_141,
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1547);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2042__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1528);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2032__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1518);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2019__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1501);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1999__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1486);

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
  MR_Word * STATE_VARIABLE_Specs_40,
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
libs__handle_options__convert_options_to_globals_23_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
  MR_Word OptionTable0_24,
  MR_Word OpMode_25,
  MR_Word Target_26,
  MR_Word GC_Method_27,
  MR_Word TermNorm_28,
  MR_Word Term2Norm_29,
  MR_Word TraceLevel_30,
  MR_Word TraceSuppress_31,
  MR_Word SSTraceLevel_32,
  MR_Word MaybeThreadSafe_33,
  MR_Word C_CompilerType_34,
  MR_Word CSharp_CompilerType_35,
  MR_Word ReuseStrategy_36,
  MR_Word MaybeFeedbackInfo_37,
  MR_Word HostEnvType_38,
  MR_Word SystemEnvType_39,
  MR_Word TargetEnvType_40,
  MR_Word LimitErrorContextsMap_41,
  MR_Word STATE_VARIABLE_Specs_0_211,
  MR_Word * STATE_VARIABLE_Specs_212,
  MR_Word * STATE_VARIABLE_Globals_213);

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


static /* final */ const MR_Box libs__handle_options_scalar_common_1[228][2];

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



static /* final */ const MR_Box libs__handle_options_scalar_common_1[228][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--inform-incomplete-switch-threshold"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[88]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[91])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[78])))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) "msvc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[78])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[96])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[78])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[78])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but the only valid values are 2 and 3."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[161])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[164])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[51])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[170])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[195])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])))
  },
  /* row 200 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 202 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[202]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the value of the"))
  },
  /* row 205 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-ptag-bits"))
  },
  /* row 206 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is"))
  },
  /* row 207 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 208 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 211 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 213 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 215 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 220 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[220]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 222 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 225 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 226 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 227 */
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
    ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_11)),
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
#line 2462 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 2462 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2462 "handle_options.m"
{
#line 2462 "handle_options.m"
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2142__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1601)
{
  {
    MR_String LambdaHeadVar__2_1602;
    MR_String Var_1603;
    MR_String Var_1604;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_176, (MR_Integer) 1))));
    MR_Box conv1_Var_1604;

    conv1_Var_1604 = func_0(((MR_Box) (ToGradeSubdir_176)), ((MR_Box) (LambdaHeadVar__1_1601)));
    Var_1604 = ((MR_String) (conv1_Var_1604));
    Var_1603 = mercury__dir__f_slash_2_f_0(Var_1604, (MR_String) "Mercury");
    LambdaHeadVar__2_1602 = mercury__dir__f_slash_2_f_0(Var_1603, (MR_String) "hrls");
    return LambdaHeadVar__2_1602;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2140__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1595)
{
  {
    MR_String LambdaHeadVar__2_1596;
    MR_String Var_1597;
    MR_String Var_1598;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_176, (MR_Integer) 1))));
    MR_Box conv1_Var_1598;

    conv1_Var_1598 = func_0(((MR_Box) (ToGradeSubdir_176)), ((MR_Box) (LambdaHeadVar__1_1595)));
    Var_1598 = ((MR_String) (conv1_Var_1598));
    Var_1597 = mercury__dir__f_slash_2_f_0(Var_1598, (MR_String) "Mercury");
    LambdaHeadVar__2_1596 = mercury__dir__f_slash_2_f_0(Var_1597, (MR_String) "mihs");
    return LambdaHeadVar__2_1596;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_1_f_0(
  MR_String LambdaHeadVar__1_1590)
{
  {
    MR_String LambdaHeadVar__2_1591;
    MR_String Var_1592;

    Var_1592 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1590, (MR_String) "Mercury");
    LambdaHeadVar__2_1591 = mercury__dir__f_slash_2_f_0(Var_1592, (MR_String) "hrls");
    return LambdaHeadVar__2_1591;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2148__1_1_f_0(
  MR_String LambdaHeadVar__1_1585)
{
  {
    MR_String LambdaHeadVar__2_1586;
    MR_String Var_1587;

    Var_1587 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1585, (MR_String) "Mercury");
    LambdaHeadVar__2_1586 = mercury__dir__f_slash_2_f_0(Var_1587, (MR_String) "mihs");
    return LambdaHeadVar__2_1586;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2118__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1572)
{
  {
    MR_String LambdaHeadVar__2_1573;
    MR_String Var_1574;
    MR_String Var_1575;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_176, (MR_Integer) 1))));
    MR_Box conv1_Var_1575;

    conv1_Var_1575 = func_0(((MR_Box) (ToGradeSubdir_176)), ((MR_Box) (LambdaHeadVar__1_1572)));
    Var_1575 = ((MR_String) (conv1_Var_1575));
    Var_1574 = mercury__dir__f_slash_2_f_0(Var_1575, (MR_String) "Mercury");
    LambdaHeadVar__2_1573 = mercury__dir__f_slash_2_f_0(Var_1574, (MR_String) "inits");
    return LambdaHeadVar__2_1573;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2114__1_2_f_0(
  MR_Word ToGradeSubdir_176,
  MR_String LambdaHeadVar__1_1566)
{
  {
    MR_String LambdaHeadVar__2_1567;
    MR_String Var_1568;
    MR_String Var_1569;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_176, (MR_Integer) 1))));
    MR_Box conv1_Var_1569;

    conv1_Var_1569 = func_0(((MR_Box) (ToGradeSubdir_176)), ((MR_Box) (LambdaHeadVar__1_1566)));
    Var_1569 = ((MR_String) (conv1_Var_1569));
    Var_1568 = mercury__dir__f_slash_2_f_0(Var_1569, (MR_String) "Mercury");
    LambdaHeadVar__2_1567 = mercury__dir__f_slash_2_f_0(Var_1568, (MR_String) "lib");
    return LambdaHeadVar__2_1567;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2096__2_2_p_0(
  MR_Word HeadVar__1_1559,
  MR_String HeadVar__2_1708)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_1559, ((MR_Box) (HeadVar__2_1708)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2096__1_2_p_0(
  MR_String HeadVar__1_1560,
  MR_String HeadVar__2_1710)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1560, HeadVar__2_1710) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2078__1_3_f_0(
  MR_String TargetArch_141,
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1547)
{
  {
    MR_String LambdaHeadVar__2_1548;
    MR_String Var_1549;
    MR_String Var_1550;

    Var_1550 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1547, (MR_String) "Mercury");
    Var_1549 = mercury__dir__f_slash_2_f_0(Var_1550, GradeString_156);
    LambdaHeadVar__2_1548 = mercury__dir__f_slash_2_f_0(Var_1549, TargetArch_141);
    return LambdaHeadVar__2_1548;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2042__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1528)
{
  {
    MR_String LambdaHeadVar__2_1529;
    MR_String Var_1530;

    Var_1530 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1528, (MR_String) "modules");
    LambdaHeadVar__2_1529 = mercury__dir__f_slash_2_f_0(Var_1530, GradeString_156);
    return LambdaHeadVar__2_1529;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2032__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1518)
{
  {
    MR_String LambdaHeadVar__2_1519;
    MR_String Var_1520;

    Var_1520 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_156);
    LambdaHeadVar__2_1519 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_1518, Var_1520);
    return LambdaHeadVar__2_1519;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2019__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1501)
{
  {
    MR_String LambdaHeadVar__2_1502;
    MR_String Var_1503;
    MR_String Var_1504;

    Var_1504 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1501, (MR_String) "lib");
    Var_1503 = mercury__dir__f_slash_2_f_0(Var_1504, GradeString_156);
    LambdaHeadVar__2_1502 = mercury__dir__f_slash_2_f_0(Var_1503, (MR_String) "inc");
    return LambdaHeadVar__2_1502;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1999__1_2_f_0(
  MR_String GradeString_156,
  MR_String LambdaHeadVar__1_1486)
{
  {
    MR_String LambdaHeadVar__2_1487;
    MR_String Var_1488;

    Var_1488 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1486, (MR_String) "lib");
    LambdaHeadVar__2_1487 = mercury__dir__f_slash_2_f_0(Var_1488, GradeString_156);
    return LambdaHeadVar__2_1487;
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
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[227])));
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
  MR_Word * STATE_VARIABLE_Specs_40,
  MR_Word * Globals_8)
{
  if (((MR_tag((MR_Word) MaybeOptionTable0_6)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionTable0_6, (MR_Integer) 0))));
    MR_Word OptionTablePieces_11;
    MR_Word OptionTableMsg_12;
    MR_Word OptionTableSpec_13;
    MR_Word Var_67;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_78;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;

    {
      Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ErrorMessage_10));
    }
    {
      OptionTablePieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 0) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (OptionTablePieces_11));
    }
    {
      Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableMsg_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), OptionTableMsg_12, 3) = ((MR_Box) (Var_72));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (OptionTableMsg_12));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.convert_option_table_result_to_globals\'/5"));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 3) = ((MR_Box) (Var_78));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_40 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OptionTableSpec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__handle_options__handle_given_options_7_p_0((MR_Word) ((MR_Unsigned) 0U), &Var_92, &Var_93, &Var_94, Globals_8);
  }
  else
  {
    MR_Word OptionTable0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptionTable0_6, (MR_Integer) 0))));
    MR_Word OptionTable_15;
    MR_Word Target_16;
    MR_Word GC_Method_17;
    MR_Word TermNorm_18;
    MR_Word Term2Norm_19;
    MR_Word TraceLevel_20;
    MR_Word TraceSuppress_21;
    MR_Word SSTraceLevel_22;
    MR_Word MaybeThreadSafe_23;
    MR_Word C_CompilerType_24;
    MR_Word CSharp_CompilerType_25;
    MR_Word ReuseStrategy_26;
    MR_Word MaybeFeedbackInfo_27;
    MR_Word HostEnvType_28;
    MR_Word SystemEnvType_29;
    MR_Word TargetEnvType_30;
    MR_Word LimitErrorContextsMap_31;
    MR_Word OpMode_32;
    MR_Word OtherOpModes_33;
    MR_Word STATE_VARIABLE_Specs_43_43;
    MR_Word STATE_VARIABLE_Specs_63_63;

    libs__handle_options__check_option_values_21_p_0(OptionTable0_14, &OptionTable_15, &Target_16, &GC_Method_17, &TermNorm_18, &Term2Norm_19, &TraceLevel_20, &TraceSuppress_21, &SSTraceLevel_22, &MaybeThreadSafe_23, &C_CompilerType_24, &CSharp_CompilerType_25, &ReuseStrategy_26, &MaybeFeedbackInfo_27, &HostEnvType_28, &SystemEnvType_29, &TargetEnvType_30, &LimitErrorContextsMap_31, &STATE_VARIABLE_Specs_43_43);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_15, &OpMode_32, &OtherOpModes_33);
    if ((OtherOpModes_33 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_63_63 = STATE_VARIABLE_Specs_43_43;
    else
    {
      MR_Word OpModeStrs_36;
      MR_Word OpModePieces_37;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_54;
      MR_Word Var_55;

      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_45, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_45, 3) = ((MR_Box) (OptionTable_15));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (OpMode_32));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (OtherOpModes_33));
      }
      OpModeStrs_36 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_45, Var_46);
      Var_55 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(OpModeStrs_36);
      Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_55, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      OpModePieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[8])), Var_54);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_37, STATE_VARIABLE_Specs_43_43, &STATE_VARIABLE_Specs_63_63);
    }
    if ((STATE_VARIABLE_Specs_63_63 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__handle_options__convert_options_to_globals_23_p_0(OptionTable_15, OpMode_32, Target_16, GC_Method_17, TermNorm_18, Term2Norm_19, TraceLevel_20, TraceSuppress_21, SSTraceLevel_22, MaybeThreadSafe_23, C_CompilerType_24, CSharp_CompilerType_25, ReuseStrategy_26, MaybeFeedbackInfo_27, HostEnvType_28, SystemEnvType_29, TargetEnvType_30, LimitErrorContextsMap_31, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_40, Globals_8);
    else
    {
      libs__handle_options__generate_default_globals_3_p_0(Globals_8);
      *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_63_63;
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
libs__handle_options__convert_options_to_globals_23_p_0_13(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv10_LambdaHeadVar__2_1602;

    conv10_LambdaHeadVar__2_1602 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2142__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_1602));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv9_LambdaHeadVar__2_1596;

    conv9_LambdaHeadVar__2_1596 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2140__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_1596));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv8_LambdaHeadVar__2_1591;

    conv8_LambdaHeadVar__2_1591 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2149__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_1591));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_LambdaHeadVar__2_1586;

    conv7_LambdaHeadVar__2_1586 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2148__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_1586));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv6_LambdaHeadVar__2_1573;

    conv6_LambdaHeadVar__2_1573 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2118__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_1573));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv5_LambdaHeadVar__2_1567;

    conv5_LambdaHeadVar__2_1567 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2114__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_1567));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2096__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2096__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv4_LambdaHeadVar__2_1548;

    conv4_LambdaHeadVar__2_1548 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2078__1_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_1548));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_LambdaHeadVar__2_1529;

    conv3_LambdaHeadVar__2_1529 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2042__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_1529));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_1519;

    conv2_LambdaHeadVar__2_1519 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2032__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_1519));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_LambdaHeadVar__2_1502;

    conv1_LambdaHeadVar__2_1502 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2019__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_1502));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_1487;

    conv0_LambdaHeadVar__2_1487 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1999__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_1487));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_options_to_globals_23_p_0(
  MR_Word OptionTable0_24,
  MR_Word OpMode_25,
  MR_Word Target_26,
  MR_Word GC_Method_27,
  MR_Word TermNorm_28,
  MR_Word Term2Norm_29,
  MR_Word TraceLevel_30,
  MR_Word TraceSuppress_31,
  MR_Word SSTraceLevel_32,
  MR_Word MaybeThreadSafe_33,
  MR_Word C_CompilerType_34,
  MR_Word CSharp_CompilerType_35,
  MR_Word ReuseStrategy_36,
  MR_Word MaybeFeedbackInfo_37,
  MR_Word HostEnvType_38,
  MR_Word SystemEnvType_39,
  MR_Word TargetEnvType_40,
  MR_Word LimitErrorContextsMap_41,
  MR_Word STATE_VARIABLE_Specs_0_211,
  MR_Word * STATE_VARIABLE_Specs_212,
  MR_Word * STATE_VARIABLE_Globals_213)
{
  {
    MR_bool succeeded;
    MR_String InstallCmd_45;
    MR_Word FileInstallCmd_46;
    MR_String EventSetFileName0_48;
    MR_Word GCIsConservative_51;
    MR_Word PregeneratedDist_52;
    MR_Integer NumPtagBits_54;
    MR_Word GradeSupportsParConj_56;
    MR_Word Parallel_57;
    MR_Word Threadscope_58;
    MR_Word ImplicitParallelism_60;
    MR_Word LibLinkages0_64;
    MR_Word InvokedByMMCMake_67;
    MR_Word TransOpt_69;
    MR_Word InterModOpt_71;
    MR_Word InterModAnalysis_72;
    MR_Word MaybeStandaloneInt_74;
    MR_Word ExtraInitFunctions_75;
    MR_Word Smart_80;
    MR_Word VeryVerbose_81;
    MR_Word Statistics_82;
    MR_Integer DebugLiveness_83;
    MR_Integer DebugModesPredId_87;
    MR_Word DebugUnneededCodePredNames_88;
    MR_Word DebugOptPredIdStrs_91;
    MR_Word DebugOptPredNames_92;
    MR_Word DebugIntermoduleAnalysis_97;
    MR_Word DumpHLDSPredIds_98;
    MR_Word UseTrail_104;
    MR_Word HighLevelCode_105;
    MR_Word UseMinimalModelStackCopy_106;
    MR_Word UseMinimalModelOwnStacks_107;
    MR_Word UseMinimalModel_108;
    MR_Word ProfOptimized_116;
    MR_String ExpComp_117;
    MR_Word TraceOptimized_118;
    MR_Word TraceLevelIsNone_119;
    MR_Word ProfileDeep_121;
    MR_Word RecordTermSizesAsWords_124;
    MR_Word RecordTermSizesAsCells_125;
    MR_Word PutNondetEnvOnHeap_129;
    MR_Word DisablePneg_131;
    MR_Word DisableCut_132;
    MR_Word DumpHLDSStages_133;
    MR_Word DumpTraceStages_134;
    MR_Word ParallelLiveness_135;
    MR_Word ParallelCodeGen_136;
    MR_String TargetArch_141;
    MR_String MercuryLinkage_142;
    MR_Word DefaultRuntimeLibraryDirs_143;
    MR_Word MaybeStdLibDir_144;
    MR_Word MaybeConfDir_150;
    MR_Word ConfigFile_153;
    MR_Word MercuryLibDirs_155;
    MR_String GradeString_156;
    MR_Word UseSearchDirs_170;
    MR_Word UseGradeSubdirs_173;
    MR_Word SearchLibFilesDirs_174;
    MR_Word IntermodDirs2_175;
    MR_Word ToGradeSubdir_176;
    MR_Word LinkLibDirs_185;
    MR_Word InitDirs_188;
    MR_Word UseSubdirs_189;
    MR_Word WarnNonTailRecSelf_199;
    MR_Word WarnNonTailRecMutual_200;
    MR_Word BackendForeignLanguages_206;
    MR_Word CurrentBackendForeignLanguage_207;
    MR_Integer CompareSpec_210;
    MR_Word STATE_VARIABLE_Globals_218_218;
    MR_Word STATE_VARIABLE_Specs_219_219;
    MR_Word STATE_VARIABLE_Globals_225_225;
    MR_Word STATE_VARIABLE_Globals_232_232;
    MR_Word STATE_VARIABLE_Globals_257_257;
    MR_Word STATE_VARIABLE_Globals_267_267;
    MR_Word STATE_VARIABLE_Specs_288_288;
    MR_Word STATE_VARIABLE_Specs_306_306;
    MR_Word STATE_VARIABLE_Globals_329_329;
    MR_Word STATE_VARIABLE_Specs_350_350;
    MR_Word Var_353;
    MR_Word STATE_VARIABLE_Globals_354_354;
    MR_Word STATE_VARIABLE_Globals_358_358;
    MR_Word STATE_VARIABLE_Globals_479_479;
    MR_Word STATE_VARIABLE_Globals_484_484;
    MR_Word Var_488;
    MR_Word STATE_VARIABLE_Globals_489_489;
    MR_Word STATE_VARIABLE_Globals_494_494;
    MR_Word Var_498;
    MR_Word STATE_VARIABLE_Globals_499_499;
    MR_Word STATE_VARIABLE_Globals_504_504;
    MR_Word STATE_VARIABLE_Globals_509_509;
    MR_Word STATE_VARIABLE_Globals_514_514;
    MR_Word STATE_VARIABLE_Globals_519_519;
    MR_Word STATE_VARIABLE_Globals_528_528;
    MR_Word STATE_VARIABLE_Globals_533_533;
    MR_Word STATE_VARIABLE_Globals_539_539;
    MR_Word STATE_VARIABLE_Specs_560_560;
    MR_Word STATE_VARIABLE_Specs_581_581;
    MR_Word STATE_VARIABLE_Globals_584_584;
    MR_Word STATE_VARIABLE_Specs_606_606;
    MR_Word STATE_VARIABLE_Globals_610_610;
    MR_Word STATE_VARIABLE_Globals_615_615;
    MR_Word STATE_VARIABLE_Globals_620_620;
    MR_Word STATE_VARIABLE_Globals_625_625;
    MR_Word STATE_VARIABLE_Globals_630_630;
    MR_Word STATE_VARIABLE_Globals_635_635;
    MR_Word STATE_VARIABLE_Globals_640_640;
    MR_Word STATE_VARIABLE_Globals_646_646;
    MR_Word STATE_VARIABLE_Globals_651_651;
    MR_Word STATE_VARIABLE_Globals_656_656;
    MR_Word STATE_VARIABLE_Globals_661_661;
    MR_Word STATE_VARIABLE_Globals_666_666;
    MR_Word STATE_VARIABLE_Globals_670_670;
    MR_Word STATE_VARIABLE_Globals_675_675;
    MR_Word STATE_VARIABLE_Globals_680_680;
    MR_Word STATE_VARIABLE_Globals_686_686;
    MR_Word STATE_VARIABLE_Globals_695_695;
    MR_Word STATE_VARIABLE_Globals_701_701;
    MR_Word STATE_VARIABLE_Globals_707_707;
    MR_Word STATE_VARIABLE_Globals_724_724;
    MR_Word STATE_VARIABLE_Globals_729_729;
    MR_Word STATE_VARIABLE_Globals_734_734;
    MR_Word STATE_VARIABLE_Globals_739_739;
    MR_Word STATE_VARIABLE_Globals_745_745;
    MR_Word STATE_VARIABLE_Globals_750_750;
    MR_Word STATE_VARIABLE_Globals_755_755;
    MR_Word STATE_VARIABLE_Globals_760_760;
    MR_Word STATE_VARIABLE_Globals_768_768;
    MR_Word STATE_VARIABLE_Globals_772_772;
    MR_Word STATE_VARIABLE_Globals_778_778;
    MR_Word STATE_VARIABLE_Globals_783_783;
    MR_Word STATE_VARIABLE_Globals_789_789;
    MR_Word STATE_VARIABLE_Globals_801_801;
    MR_Word STATE_VARIABLE_Globals_805_805;
    MR_Word STATE_VARIABLE_Globals_810_810;
    MR_Word STATE_VARIABLE_Globals_815_815;
    MR_Word STATE_VARIABLE_Globals_820_820;
    MR_Word STATE_VARIABLE_Specs_835_835;
    MR_Word STATE_VARIABLE_Specs_907_907;
    MR_Word STATE_VARIABLE_Globals_910_910;
    MR_Word STATE_VARIABLE_Globals_914_914;
    MR_Word STATE_VARIABLE_Globals_919_919;
    MR_Word STATE_VARIABLE_Globals_924_924;
    MR_Word STATE_VARIABLE_Globals_928_928;
    MR_Word STATE_VARIABLE_Globals_932_932;
    MR_Word STATE_VARIABLE_Globals_937_937;
    MR_Word STATE_VARIABLE_Globals_942_942;
    MR_Word STATE_VARIABLE_Globals_947_947;
    MR_Word STATE_VARIABLE_Globals_952_952;
    MR_Word STATE_VARIABLE_Globals_958_958;
    MR_Word STATE_VARIABLE_Globals_963_963;
    MR_Word STATE_VARIABLE_Globals_968_968;
    MR_Word STATE_VARIABLE_Globals_973_973;
    MR_Word STATE_VARIABLE_Globals_978_978;
    MR_Word STATE_VARIABLE_Globals_983_983;
    MR_Word STATE_VARIABLE_Globals_988_988;
    MR_Word STATE_VARIABLE_Globals_993_993;
    MR_Word STATE_VARIABLE_Globals_998_998;
    MR_Word STATE_VARIABLE_Globals_1003_1003;
    MR_Word STATE_VARIABLE_Globals_1008_1008;
    MR_Word STATE_VARIABLE_Globals_1013_1013;
    MR_Word STATE_VARIABLE_Globals_1018_1018;
    MR_Word STATE_VARIABLE_Globals_1115_1115;
    MR_Word STATE_VARIABLE_Globals_1120_1120;
    MR_Word STATE_VARIABLE_Specs_1132_1132;
    MR_Word STATE_VARIABLE_Globals_1144_1144;
    MR_Word STATE_VARIABLE_Specs_1154_1154;
    MR_Word STATE_VARIABLE_Globals_1161_1161;
    MR_Word STATE_VARIABLE_Specs_1180_1180;
    MR_Word STATE_VARIABLE_Globals_1219_1219;
    MR_Word STATE_VARIABLE_Globals_1224_1224;
    MR_Word STATE_VARIABLE_Globals_1229_1229;
    MR_Word STATE_VARIABLE_Globals_1234_1234;
    MR_Word STATE_VARIABLE_Globals_1239_1239;
    MR_Word STATE_VARIABLE_Globals_1244_1244;
    MR_Word STATE_VARIABLE_Globals_1249_1249;
    MR_Word STATE_VARIABLE_Globals_1254_1254;
    MR_Word STATE_VARIABLE_Globals_1259_1259;
    MR_Word STATE_VARIABLE_Globals_1303_1303;
    MR_Word STATE_VARIABLE_Specs_1321_1321;
    MR_Word STATE_VARIABLE_Globals_1325_1325;
    MR_Word STATE_VARIABLE_Globals_1330_1330;
    MR_Word STATE_VARIABLE_Globals_1335_1335;
    MR_Word STATE_VARIABLE_Globals_1340_1340;
    MR_Word STATE_VARIABLE_Globals_1345_1345;
    MR_Word STATE_VARIABLE_Globals_1350_1350;
    MR_Word STATE_VARIABLE_Globals_1355_1355;
    MR_Word STATE_VARIABLE_Globals_1360_1360;
    MR_Word STATE_VARIABLE_Globals_1365_1365;
    MR_Word STATE_VARIABLE_Globals_1370_1370;
    MR_Word STATE_VARIABLE_Globals_1376_1376;
    MR_Word STATE_VARIABLE_Globals_1380_1380;
    MR_Word STATE_VARIABLE_Globals_1388_1388;
    MR_Word STATE_VARIABLE_Globals_1393_1393;
    MR_Word STATE_VARIABLE_Globals_1398_1398;
    MR_Word STATE_VARIABLE_Globals_1403_1403;
    MR_Word STATE_VARIABLE_Globals_1408_1408;
    MR_Word STATE_VARIABLE_Globals_1413_1413;
    MR_Word STATE_VARIABLE_Globals_1418_1418;
    MR_Word STATE_VARIABLE_Globals_1424_1424;
    MR_Word STATE_VARIABLE_Globals_1429_1429;
    MR_Word STATE_VARIABLE_Globals_1433_1433;
    MR_Word STATE_VARIABLE_Globals_1439_1439;
    MR_Word STATE_VARIABLE_Globals_1458_1458;
    MR_Word STATE_VARIABLE_Globals_1466_1466;
    MR_Word STATE_VARIABLE_Globals_1478_1478;
    MR_Word STATE_VARIABLE_Globals_1535_1535;
    MR_Word STATE_VARIABLE_Globals_1542_1542;
    MR_Word STATE_VARIABLE_Globals_1563_1563;
    MR_Word Var_1579;
    MR_Word STATE_VARIABLE_Globals_1580_1580;
    MR_Word Var_1582;
    MR_Word STATE_VARIABLE_Globals_1583_1583;
    MR_Word STATE_VARIABLE_Globals_1619_1619;
    MR_Word STATE_VARIABLE_Globals_1623_1623;
    MR_Word STATE_VARIABLE_Specs_1647_1647;
    MR_Word STATE_VARIABLE_Globals_1658_1658;
    MR_Word STATE_VARIABLE_Globals_1669_1669;
    MR_Word STATE_VARIABLE_Globals_1678_1678;
    MR_Word STATE_VARIABLE_Globals_1683_1683;
    MR_Word STATE_VARIABLE_Globals_1689_1689;
    MR_Word Var_642;
    MR_Word Var_643;
    MR_Word Var_682;
    MR_Word Var_683;
    MR_Word Var_1716;
    MR_Word Var_697;
    MR_Word Var_698;
    MR_Word Var_703;
    MR_Word Var_704;
    MR_String AllDumpOptions_84;
    MR_String Var_764;
    MR_Word Var_1420;
    MR_Word Var_1421;
    MR_String Var_1471;
    MR_Word ToMihsSubdir_190;
    MR_Word ToHrlsSubdir_191;
    MR_Integer Var_1680;

    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_24, ((MR_Box) ((MR_Integer) 665)), &InstallCmd_45);
    succeeded = (strcmp(InstallCmd_45, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_46 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InstallCmdDirOption_47;

      mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_24, ((MR_Box) ((MR_Integer) 666)), &InstallCmdDirOption_47);
      {
        FileInstallCmd_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_46, 0) = ((MR_Box) (InstallCmd_45));
        MR_hl_field(MR_mktag(1), FileInstallCmd_46, 1) = ((MR_Box) (InstallCmdDirOption_47));
      }
    }
    libs__globals__globals_init_20_p_0(OptionTable0_24, OpMode_25, Target_26, GC_Method_27, TermNorm_28, Term2Norm_29, TraceLevel_30, TraceSuppress_31, SSTraceLevel_32, MaybeThreadSafe_33, C_CompilerType_34, CSharp_CompilerType_35, ReuseStrategy_36, MaybeFeedbackInfo_37, HostEnvType_38, SystemEnvType_39, TargetEnvType_40, FileInstallCmd_46, LimitErrorContextsMap_41, &STATE_VARIABLE_Globals_218_218);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_218_218, Target_26, GC_Method_27, STATE_VARIABLE_Specs_0_211, &STATE_VARIABLE_Specs_219_219);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_218_218, (MR_Integer) 204, &EventSetFileName0_48);
    succeeded = (strcmp(EventSetFileName0_48, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_49;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_49);
      if ((MaybeEventSetFileName_49 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_Globals_225_225 = STATE_VARIABLE_Globals_218_218;
      else
      {
        MR_String EventSetFileName_50 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEventSetFileName_49, (MR_Integer) 0))));
        MR_Word Var_224;

        {
          Var_224 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_224, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_224, 1) = ((MR_Box) (EventSetFileName_50));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 204, Var_224, STATE_VARIABLE_Globals_218_218, &STATE_VARIABLE_Globals_225_225);
      }
    }
    else
      STATE_VARIABLE_Globals_225_225 = STATE_VARIABLE_Globals_218_218;
    GCIsConservative_51 = libs__globals__gc_is_conservative_1_f_0(GC_Method_27);
    switch (GCIsConservative_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_232_232 = STATE_VARIABLE_Globals_225_225;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_227 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          MR_Word STATE_VARIABLE_Globals_228_228;

          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_227, STATE_VARIABLE_Globals_225_225, &STATE_VARIABLE_Globals_228_228);
          libs__globals__set_option_4_p_0((MR_Integer) 334, Var_227, STATE_VARIABLE_Globals_228_228, &STATE_VARIABLE_Globals_232_232);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_232_232, (MR_Integer) 251, &PregeneratedDist_52);
    switch (PregeneratedDist_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_257_257 = STATE_VARIABLE_Globals_232_232;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_237_237;
          MR_Word STATE_VARIABLE_Globals_241_241;
          MR_Word Var_244;
          MR_Word STATE_VARIABLE_Globals_245_245;
          MR_Word STATE_VARIABLE_Globals_249_249;
          MR_Word STATE_VARIABLE_Globals_253_253;

          libs__globals__set_option_4_p_0((MR_Integer) 264, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_232_232, &STATE_VARIABLE_Globals_237_237);
          libs__globals__set_option_4_p_0((MR_Integer) 271, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4])), STATE_VARIABLE_Globals_237_237, &STATE_VARIABLE_Globals_241_241);
          Var_244 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 268, Var_244, STATE_VARIABLE_Globals_241_241, &STATE_VARIABLE_Globals_245_245);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_244, STATE_VARIABLE_Globals_245_245, &STATE_VARIABLE_Globals_249_249);
          libs__globals__set_option_4_p_0((MR_Integer) 252, Var_244, STATE_VARIABLE_Globals_249_249, &STATE_VARIABLE_Globals_253_253);
          libs__globals__set_option_4_p_0((MR_Integer) 274, Var_244, STATE_VARIABLE_Globals_253_253, &STATE_VARIABLE_Globals_257_257);
        }
        break;
    }
    switch (Target_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer NumPtagBits0_53;
          MR_Word Var_266;

          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_257_257, (MR_Integer) 264, &NumPtagBits0_53);
          succeeded = (NumPtagBits0_53 == (MR_Integer) -1);
          if (succeeded)
            libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_257_257, (MR_Integer) 267, &NumPtagBits_54);
          else
            NumPtagBits_54 = NumPtagBits0_53;
          {
            Var_266 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_266, 0) = ((MR_Box) (NumPtagBits_54));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 264, Var_266, STATE_VARIABLE_Globals_257_257, &STATE_VARIABLE_Globals_267_267);
          switch (NumPtagBits_54) {
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
            STATE_VARIABLE_Specs_288_288 = STATE_VARIABLE_Specs_219_219;
          else
          {
            MR_Word NumPtagBitsSpec_55;
            MR_Word Var_270;
            MR_Word Var_273;
            MR_Word Var_276;
            MR_Word Var_277;

            {
              Var_277 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_277, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_277, 1) = ((MR_Box) (NumPtagBits_54));
            }
            {
              Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_276, 0) = ((MR_Box) (Var_277));
              MR_hl_field(MR_mktag(1), Var_276, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[129])));
            }
            {
              Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[206])));
              MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) (Var_276));
            }
            {
              Var_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_270, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[205])));
              MR_hl_field(MR_mktag(1), Var_270, 1) = ((MR_Box) (Var_273));
            }
            {
              NumPtagBitsSpec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NumPtagBitsSpec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[204])));
              MR_hl_field(MR_mktag(1), NumPtagBitsSpec_55, 1) = ((MR_Box) (Var_270));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), NumPtagBitsSpec_55, STATE_VARIABLE_Specs_219_219, &STATE_VARIABLE_Specs_288_288);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          NumPtagBits_54 = (MR_Integer) 0;
          libs__globals__set_option_4_p_0((MR_Integer) 264, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_257_257, &STATE_VARIABLE_Globals_267_267);
          STATE_VARIABLE_Specs_288_288 = STATE_VARIABLE_Specs_219_219;
        }
        break;
    }
    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_267_267, &GradeSupportsParConj_56);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_267_267, (MR_Integer) 244, &Parallel_57);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_267_267, (MR_Integer) 245, &Threadscope_58);
    succeeded = (GradeSupportsParConj_56 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_58 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])), STATE_VARIABLE_Specs_288_288, &STATE_VARIABLE_Specs_306_306);
    else
      STATE_VARIABLE_Specs_306_306 = STATE_VARIABLE_Specs_288_288;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_267_267, (MR_Integer) 709, &ImplicitParallelism_60);
    switch (ImplicitParallelism_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_350_350 = STATE_VARIABLE_Specs_306_306;
          STATE_VARIABLE_Globals_329_329 = STATE_VARIABLE_Globals_267_267;
        }
        break;
      case (MR_Integer) 1:
        switch (GradeSupportsParConj_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (Parallel_57) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_350_350 = STATE_VARIABLE_Specs_306_306;
                  break;
                case (MR_Integer) 1:
                  libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146])), STATE_VARIABLE_Specs_306_306, &STATE_VARIABLE_Specs_350_350);
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 709, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_267_267, &STATE_VARIABLE_Globals_329_329);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_61;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_267_267, (MR_Integer) 710, &FeedbackFile_61);
              succeeded = (strcmp(FeedbackFile_61, (MR_String) "") == 0);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[152])), STATE_VARIABLE_Specs_306_306, &STATE_VARIABLE_Specs_350_350);
              else
                STATE_VARIABLE_Specs_350_350 = STATE_VARIABLE_Specs_306_306;
              STATE_VARIABLE_Globals_329_329 = STATE_VARIABLE_Globals_267_267;
            }
            break;
        }
        break;
    }
    Var_353 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 709, (MR_Integer) 226, Var_353, STATE_VARIABLE_Globals_329_329, &STATE_VARIABLE_Globals_354_354);
    switch (GradeSupportsParConj_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__set_option_4_p_0((MR_Integer) 711, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_354_354, &STATE_VARIABLE_Globals_358_358);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_358_358 = STATE_VARIABLE_Globals_354_354;
        break;
    }
    switch (Target_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__option_implies_5_p_0((MR_Integer) 288, (MR_Integer) 291, Var_353, STATE_VARIABLE_Globals_358_358, &STATE_VARIABLE_Globals_479_479);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_424_424;
          MR_Word STATE_VARIABLE_Globals_427_427;
          MR_Word Var_430;
          MR_Word STATE_VARIABLE_Globals_431_431;
          MR_Word STATE_VARIABLE_Globals_435_435;
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

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_358_358, &STATE_VARIABLE_Globals_424_424);
          libs__globals__set_option_4_p_0((MR_Integer) 243, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[207])), STATE_VARIABLE_Globals_424_424, &STATE_VARIABLE_Globals_427_427);
          Var_430 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 334, Var_430, STATE_VARIABLE_Globals_427_427, &STATE_VARIABLE_Globals_431_431);
          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_430, STATE_VARIABLE_Globals_431_431, &STATE_VARIABLE_Globals_435_435);
          libs__globals__set_option_4_p_0((MR_Integer) 288, Var_353, STATE_VARIABLE_Globals_435_435, &STATE_VARIABLE_Globals_439_439);
          libs__globals__set_option_4_p_0((MR_Integer) 268, Var_353, STATE_VARIABLE_Globals_439_439, &STATE_VARIABLE_Globals_443_443);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_353, STATE_VARIABLE_Globals_443_443, &STATE_VARIABLE_Globals_447_447);
          libs__globals__set_option_4_p_0((MR_Integer) 290, Var_353, STATE_VARIABLE_Globals_447_447, &STATE_VARIABLE_Globals_451_451);
          libs__globals__set_option_4_p_0((MR_Integer) 289, Var_353, STATE_VARIABLE_Globals_451_451, &STATE_VARIABLE_Globals_455_455);
          libs__globals__set_option_4_p_0((MR_Integer) 270, Var_430, STATE_VARIABLE_Globals_455_455, &STATE_VARIABLE_Globals_459_459);
          libs__globals__set_option_4_p_0((MR_Integer) 292, Var_353, STATE_VARIABLE_Globals_459_459, &STATE_VARIABLE_Globals_463_463);
          libs__globals__set_option_4_p_0((MR_Integer) 301, Var_353, STATE_VARIABLE_Globals_463_463, &STATE_VARIABLE_Globals_467_467);
          libs__globals__set_option_4_p_0((MR_Integer) 440, Var_430, STATE_VARIABLE_Globals_467_467, &STATE_VARIABLE_Globals_471_471);
          libs__globals__set_option_4_p_0((MR_Integer) 438, Var_430, STATE_VARIABLE_Globals_471_471, &STATE_VARIABLE_Globals_475_475);
          switch (Target_26) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              libs__globals__set_option_4_p_0((MR_Integer) 604, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Globals_475_475, &STATE_VARIABLE_Globals_479_479);
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Globals_479_479 = STATE_VARIABLE_Globals_475_475;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_366_366;
          MR_Word STATE_VARIABLE_Globals_369_369;
          MR_Word STATE_VARIABLE_Globals_373_373;
          MR_Word STATE_VARIABLE_Globals_377_377;
          MR_Word Var_380;
          MR_Word STATE_VARIABLE_Globals_381_381;
          MR_Word STATE_VARIABLE_Globals_385_385;
          MR_Word STATE_VARIABLE_Globals_389_389;
          MR_Word STATE_VARIABLE_Globals_393_393;
          MR_Word STATE_VARIABLE_Globals_397_397;
          MR_Word STATE_VARIABLE_Globals_401_401;
          MR_Word STATE_VARIABLE_Globals_405_405;
          MR_Word STATE_VARIABLE_Globals_409_409;
          MR_Word STATE_VARIABLE_Globals_413_413;
          MR_Word STATE_VARIABLE_Globals_417_417;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_358_358, &STATE_VARIABLE_Globals_366_366);
          libs__globals__set_option_4_p_0((MR_Integer) 243, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[207])), STATE_VARIABLE_Globals_366_366, &STATE_VARIABLE_Globals_369_369);
          libs__globals__set_option_4_p_0((MR_Integer) 268, Var_353, STATE_VARIABLE_Globals_369_369, &STATE_VARIABLE_Globals_373_373);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_353, STATE_VARIABLE_Globals_373_373, &STATE_VARIABLE_Globals_377_377);
          Var_380 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 334, Var_380, STATE_VARIABLE_Globals_377_377, &STATE_VARIABLE_Globals_381_381);
          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_380, STATE_VARIABLE_Globals_381_381, &STATE_VARIABLE_Globals_385_385);
          libs__globals__set_option_4_p_0((MR_Integer) 304, Var_353, STATE_VARIABLE_Globals_385_385, &STATE_VARIABLE_Globals_389_389);
          libs__globals__set_option_4_p_0((MR_Integer) 300, Var_380, STATE_VARIABLE_Globals_389_389, &STATE_VARIABLE_Globals_393_393);
          libs__globals__set_option_4_p_0((MR_Integer) 302, Var_353, STATE_VARIABLE_Globals_393_393, &STATE_VARIABLE_Globals_397_397);
          libs__globals__set_option_4_p_0((MR_Integer) 303, Var_353, STATE_VARIABLE_Globals_397_397, &STATE_VARIABLE_Globals_401_401);
          libs__globals__set_option_4_p_0((MR_Integer) 488, Var_380, STATE_VARIABLE_Globals_401_401, &STATE_VARIABLE_Globals_405_405);
          libs__globals__set_option_4_p_0((MR_Integer) 284, Var_380, STATE_VARIABLE_Globals_405_405, &STATE_VARIABLE_Globals_409_409);
          libs__globals__set_option_4_p_0((MR_Integer) 285, Var_380, STATE_VARIABLE_Globals_409_409, &STATE_VARIABLE_Globals_413_413);
          libs__globals__set_option_4_p_0((MR_Integer) 286, Var_380, STATE_VARIABLE_Globals_413_413, &STATE_VARIABLE_Globals_417_417);
          libs__globals__set_option_4_p_0((MR_Integer) 288, Var_380, STATE_VARIABLE_Globals_417_417, &STATE_VARIABLE_Globals_479_479);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 247, (MR_Integer) 246, Var_353, STATE_VARIABLE_Globals_479_479, &STATE_VARIABLE_Globals_484_484);
    Var_488 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[209]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 120, (MR_Integer) 587, Var_488, STATE_VARIABLE_Globals_484_484, &STATE_VARIABLE_Globals_489_489);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 120, (MR_Integer) 589, Var_488, STATE_VARIABLE_Globals_489_489, &STATE_VARIABLE_Globals_494_494);
    Var_498 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 288, (MR_Integer) 284, Var_498, STATE_VARIABLE_Globals_494_494, &STATE_VARIABLE_Globals_499_499);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 288, (MR_Integer) 285, Var_498, STATE_VARIABLE_Globals_499_499, &STATE_VARIABLE_Globals_504_504);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 288, (MR_Integer) 286, Var_498, STATE_VARIABLE_Globals_504_504, &STATE_VARIABLE_Globals_509_509);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 495, (MR_Integer) 488, Var_498, STATE_VARIABLE_Globals_509_509, &STATE_VARIABLE_Globals_514_514);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_514_514, (MR_Integer) 671, &LibLinkages0_64);
    if ((LibLinkages0_64 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 671, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[155])), STATE_VARIABLE_Globals_514_514, &STATE_VARIABLE_Globals_519_519);
    else
      STATE_VARIABLE_Globals_519_519 = STATE_VARIABLE_Globals_514_514;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_519_519, (MR_Integer) 658, &InvokedByMMCMake_67);
    succeeded = (OpMode_25 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (InvokedByMMCMake_67 == (MR_Integer) 1);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 676, Var_353, STATE_VARIABLE_Globals_519_519, &STATE_VARIABLE_Globals_528_528);
    else
      STATE_VARIABLE_Globals_528_528 = STATE_VARIABLE_Globals_519_519;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 658, (MR_Integer) 137, Var_498, STATE_VARIABLE_Globals_528_528, &STATE_VARIABLE_Globals_533_533);
    if ((OpMode_25 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3))
    {
      MR_Word OpModeArgs_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
      MR_Word Var_535;
      MR_Word Var_536;

      succeeded = ((MR_tag((MR_Word) OpModeArgs_68)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_535 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_68, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_535)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_536 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_535, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_536 == (MR_Integer) 2);
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      STATE_VARIABLE_Globals_539_539 = STATE_VARIABLE_Globals_533_533;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 681, Var_498, STATE_VARIABLE_Globals_533_533, &STATE_VARIABLE_Globals_539_539);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_539_539, (MR_Integer) 359, &TransOpt_69);
    switch (TransOpt_69) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_560_560 = STATE_VARIABLE_Specs_350_350;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_67 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_25 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[162])), STATE_VARIABLE_Specs_350_350, &STATE_VARIABLE_Specs_560_560);
          else
            STATE_VARIABLE_Specs_560_560 = STATE_VARIABLE_Specs_350_350;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_539_539, (MR_Integer) 355, &InterModOpt_71);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_539_539, (MR_Integer) 360, &InterModAnalysis_72);
    succeeded = (InterModOpt_71 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_72 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])), STATE_VARIABLE_Specs_560_560, &STATE_VARIABLE_Specs_581_581);
    else
      STATE_VARIABLE_Specs_581_581 = STATE_VARIABLE_Specs_560_560;
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      STATE_VARIABLE_Globals_584_584 = STATE_VARIABLE_Globals_539_539;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 662, Var_498, STATE_VARIABLE_Globals_539_539, &STATE_VARIABLE_Globals_584_584);
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_584_584, (MR_Integer) 114, &MaybeStandaloneInt_74);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_584_584, (MR_Integer) 597, &ExtraInitFunctions_75);
    succeeded = (MaybeStandaloneInt_74 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExtraInitFunctions_75 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[174])), STATE_VARIABLE_Specs_581_581, &STATE_VARIABLE_Specs_606_606);
    else
      STATE_VARIABLE_Specs_606_606 = STATE_VARIABLE_Specs_581_581;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 440, (MR_Integer) 438, Var_353, STATE_VARIABLE_Globals_584_584, &STATE_VARIABLE_Globals_610_610);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 448, (MR_Integer) 447, Var_353, STATE_VARIABLE_Globals_610_610, &STATE_VARIABLE_Globals_615_615);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 447, (MR_Integer) 446, Var_353, STATE_VARIABLE_Globals_615_615, &STATE_VARIABLE_Globals_620_620);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 447, (MR_Integer) 17, Var_353, STATE_VARIABLE_Globals_620_620, &STATE_VARIABLE_Globals_625_625);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 455, (MR_Integer) 454, Var_353, STATE_VARIABLE_Globals_625_625, &STATE_VARIABLE_Globals_630_630);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 454, (MR_Integer) 453, Var_353, STATE_VARIABLE_Globals_630_630, &STATE_VARIABLE_Globals_635_635);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 454, (MR_Integer) 17, Var_353, STATE_VARIABLE_Globals_635_635, &STATE_VARIABLE_Globals_640_640);
    succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_642 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_642)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_643 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_642, (MR_Integer) 0))));
        succeeded = (Var_643 == (MR_Word) ((MR_Unsigned) 4U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 359, Var_353, STATE_VARIABLE_Globals_640_640, &STATE_VARIABLE_Globals_646_646);
    else
      STATE_VARIABLE_Globals_646_646 = STATE_VARIABLE_Globals_640_640;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 359, (MR_Integer) 355, Var_353, STATE_VARIABLE_Globals_646_646, &STATE_VARIABLE_Globals_651_651);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 358, (MR_Integer) 357, Var_353, STATE_VARIABLE_Globals_651_651, &STATE_VARIABLE_Globals_656_656);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 355, (MR_Integer) 357, Var_498, STATE_VARIABLE_Globals_656_656, &STATE_VARIABLE_Globals_661_661);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 359, (MR_Integer) 358, Var_498, STATE_VARIABLE_Globals_661_661, &STATE_VARIABLE_Globals_666_666);
    libs__globals__set_option_4_p_0((MR_Integer) 357, Var_498, STATE_VARIABLE_Globals_666_666, &STATE_VARIABLE_Globals_670_670);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 135, (MR_Integer) 136, Var_353, STATE_VARIABLE_Globals_670_670, &STATE_VARIABLE_Globals_675_675);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 69, (MR_Integer) 68, Var_353, STATE_VARIABLE_Globals_675_675, &STATE_VARIABLE_Globals_680_680);
    succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_682 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_682)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_683 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_682, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_683)) == (MR_Integer) 1);
        if (succeeded)
        {
        }
      }
    }
    if (succeeded)
      STATE_VARIABLE_Globals_686_686 = STATE_VARIABLE_Globals_680_680;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 135, Var_498, STATE_VARIABLE_Globals_680_680, &STATE_VARIABLE_Globals_686_686);
    succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1716 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
      if (((MR_tag((MR_Word) Var_1716)) == (MR_Integer) 2))
      {
        MR_Word Var_1717 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1716, (MR_Integer) 0))));

        if ((Var_1717 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if ((Var_1717 == (MR_Word) ((MR_Unsigned) 4U)))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
      }
      else
      if (((MR_tag((MR_Word) Var_1716)) == (MR_Integer) 1))
        succeeded = MR_TRUE;
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 156, Var_498, STATE_VARIABLE_Globals_686_686, &STATE_VARIABLE_Globals_695_695);
    else
      STATE_VARIABLE_Globals_695_695 = STATE_VARIABLE_Globals_686_686;
    succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_697 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_697)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_698 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_697, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_698 == (MR_Integer) 2);
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 136, Var_498, STATE_VARIABLE_Globals_695_695, &STATE_VARIABLE_Globals_701_701);
    else
      STATE_VARIABLE_Globals_701_701 = STATE_VARIABLE_Globals_695_695;
    succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_703 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_703)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_704 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_703, (MR_Integer) 0))));
        succeeded = (Var_704 == (MR_Word) ((MR_Unsigned) 12U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 355, Var_498, STATE_VARIABLE_Globals_701_701, &STATE_VARIABLE_Globals_707_707);
    else
      STATE_VARIABLE_Globals_707_707 = STATE_VARIABLE_Globals_701_701;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_707_707, (MR_Integer) 135, &Smart_80);
    switch (Smart_80) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_724_724 = STATE_VARIABLE_Globals_707_707;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_713_713;
          MR_Word STATE_VARIABLE_Globals_718_718;
          MR_Word Var_720;
          MR_Word Var_721;
          MR_Word Var_722;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_707_707, (MR_Integer) 355, (MR_Integer) 1);
          if (succeeded)
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", STATE_VARIABLE_Globals_707_707, &STATE_VARIABLE_Globals_713_713);
          else
            STATE_VARIABLE_Globals_713_713 = STATE_VARIABLE_Globals_707_707;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_713_713, (MR_Integer) 357, (MR_Integer) 1);
          if (succeeded)
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", STATE_VARIABLE_Globals_713_713, &STATE_VARIABLE_Globals_718_718);
          else
            STATE_VARIABLE_Globals_718_718 = STATE_VARIABLE_Globals_713_713;
          succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_720 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_720)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_721 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_720, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_721)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_722 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_721, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_722 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            STATE_VARIABLE_Globals_724_724 = STATE_VARIABLE_Globals_718_718;
          else
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_718_718, &STATE_VARIABLE_Globals_724_724);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 677, (MR_Integer) 676, Var_353, STATE_VARIABLE_Globals_724_724, &STATE_VARIABLE_Globals_729_729);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 66, (MR_Integer) 65, Var_353, STATE_VARIABLE_Globals_729_729, &STATE_VARIABLE_Globals_734_734);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 71, Var_353, STATE_VARIABLE_Globals_734_734, &STATE_VARIABLE_Globals_739_739);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_739_739, (MR_Integer) 66, &VeryVerbose_81);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_739_739, (MR_Integer) 75, &Statistics_82);
    succeeded = (VeryVerbose_81 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_82 == (MR_Integer) 1);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 76, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_739_739, &STATE_VARIABLE_Globals_745_745);
    else
      STATE_VARIABLE_Globals_745_745 = STATE_VARIABLE_Globals_739_739;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 80, Var_353, STATE_VARIABLE_Globals_745_745, &STATE_VARIABLE_Globals_750_750);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_353, STATE_VARIABLE_Globals_750_750, &STATE_VARIABLE_Globals_755_755);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 81, (MR_Integer) 80, Var_353, STATE_VARIABLE_Globals_755_755, &STATE_VARIABLE_Globals_760_760);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_760_760, (MR_Integer) 93, &DebugLiveness_83);
    succeeded = (DebugLiveness_83 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_764 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_764, &AllDumpOptions_84);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_85;
      MR_String DumpOptions1_86;
      MR_Word Var_767;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_760_760, (MR_Integer) 179, &DumpOptions0_85);
      DumpOptions1_86 = mercury__string__f_43_43_2_f_0(DumpOptions0_85, AllDumpOptions_84);
      {
        Var_767 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_767, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_767, 1) = ((MR_Box) (DumpOptions1_86));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 179, Var_767, STATE_VARIABLE_Globals_760_760, &STATE_VARIABLE_Globals_768_768);
    }
    else
      STATE_VARIABLE_Globals_768_768 = STATE_VARIABLE_Globals_760_760;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_353, STATE_VARIABLE_Globals_768_768, &STATE_VARIABLE_Globals_772_772);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_772_772, (MR_Integer) 84, &DebugModesPredId_87);
    succeeded = (DebugModesPredId_87 > (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 80, Var_353, STATE_VARIABLE_Globals_772_772, &STATE_VARIABLE_Globals_778_778);
    else
      STATE_VARIABLE_Globals_778_778 = STATE_VARIABLE_Globals_772_772;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_778_778, (MR_Integer) 389, &DebugUnneededCodePredNames_88);
    if ((DebugUnneededCodePredNames_88 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_783_783 = STATE_VARIABLE_Globals_778_778;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 388, Var_353, STATE_VARIABLE_Globals_778_778, &STATE_VARIABLE_Globals_783_783);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_783_783, (MR_Integer) 90, &DebugOptPredIdStrs_91);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_783_783, (MR_Integer) 91, &DebugOptPredNames_92);
    succeeded = (DebugOptPredIdStrs_91 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DebugOptPredNames_92 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 88, Var_353, STATE_VARIABLE_Globals_783_783, &STATE_VARIABLE_Globals_789_789);
    else
      STATE_VARIABLE_Globals_789_789 = STATE_VARIABLE_Globals_783_783;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_789_789, (MR_Integer) 99, &DebugIntermoduleAnalysis_97);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_97);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_789_789, (MR_Integer) 173, &DumpHLDSPredIds_98);
    if ((DumpHLDSPredIds_98 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_801_801 = STATE_VARIABLE_Globals_789_789;
    else
    {
      MR_String DumpOptions2_101;
      MR_String DumpOptions3_102;
      MR_String DumpOptions_103;
      MR_Word Var_800;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_789_789, (MR_Integer) 179, &DumpOptions2_101);
      mercury__string__replace_all_4_p_0(DumpOptions2_101, (MR_String) "M", (MR_String) "", &DumpOptions3_102);
      mercury__string__replace_all_4_p_0(DumpOptions3_102, (MR_String) "T", (MR_String) "", &DumpOptions_103);
      {
        Var_800 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_800, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_800, 1) = ((MR_Box) (DumpOptions_103));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 179, Var_800, STATE_VARIABLE_Globals_789_789, &STATE_VARIABLE_Globals_801_801);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 189, Var_353, STATE_VARIABLE_Globals_801_801, &STATE_VARIABLE_Globals_805_805);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 189, (MR_Integer) 187, Var_353, STATE_VARIABLE_Globals_805_805, &STATE_VARIABLE_Globals_810_810);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 188, (MR_Integer) 187, Var_353, STATE_VARIABLE_Globals_810_810, &STATE_VARIABLE_Globals_815_815);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 161, (MR_Integer) 160, Var_353, STATE_VARIABLE_Globals_815_815, &STATE_VARIABLE_Globals_820_820);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_820_820, (MR_Integer) 246, &UseTrail_104);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_820_820, (MR_Integer) 288, &HighLevelCode_105);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_820_820, (MR_Integer) 248, &UseMinimalModelStackCopy_106);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_820_820, (MR_Integer) 249, &UseMinimalModelOwnStacks_107);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_106, UseMinimalModelOwnStacks_107, &UseMinimalModel_108);
    succeeded = (UseMinimalModelStackCopy_106 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_107 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[178])), STATE_VARIABLE_Specs_606_606, &STATE_VARIABLE_Specs_835_835);
    else
    {
      succeeded = (UseMinimalModel_108 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (HighLevelCode_105 == (MR_Integer) 1);
      if (succeeded)
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])), STATE_VARIABLE_Specs_606_606, &STATE_VARIABLE_Specs_835_835);
      else
      {
        succeeded = (UseMinimalModel_108 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_104 == (MR_Integer) 1);
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])), STATE_VARIABLE_Specs_606_606, &STATE_VARIABLE_Specs_835_835);
        else
          STATE_VARIABLE_Specs_835_835 = STATE_VARIABLE_Specs_606_606;
      }
    }
    switch (Target_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgPackBits0_112;
          MR_Integer BitsPerWord_113;
          MR_Integer ArgPackBits_114;
          MR_Word Var_909;

          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_820_820, (MR_Integer) 271, &ArgPackBits0_112);
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_820_820, (MR_Integer) 265, &BitsPerWord_113);
          succeeded = (ArgPackBits0_112 < (MR_Integer) 0);
          if (succeeded)
          {
            ArgPackBits_114 = BitsPerWord_113;
            STATE_VARIABLE_Specs_907_907 = STATE_VARIABLE_Specs_835_835;
          }
          else
          {
            succeeded = (ArgPackBits0_112 > BitsPerWord_113);
            if (succeeded)
            {
              MR_Word ArgPackBitsSpec_115;
              MR_Word Var_877;
              MR_Word Var_878;
              MR_Word Var_880;
              MR_Word Var_883;
              MR_Word Var_886;
              MR_Word Var_889;
              MR_Word Var_892;
              MR_Word Var_895;
              MR_Word Var_898;
              MR_Word Var_899;

              ArgPackBits_114 = BitsPerWord_113;
              Var_878 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[211]));
              {
                Var_899 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_899, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_899, 1) = ((MR_Box) (BitsPerWord_113));
              }
              {
                Var_898 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_898, 0) = ((MR_Box) (Var_899));
                MR_hl_field(MR_mktag(1), Var_898, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
              }
              {
                Var_895 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_895, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[216])));
                MR_hl_field(MR_mktag(1), Var_895, 1) = ((MR_Box) (Var_898));
              }
              {
                Var_892 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_892, 0) = ((MR_Box) (Var_878));
                MR_hl_field(MR_mktag(1), Var_892, 1) = ((MR_Box) (Var_895));
              }
              {
                Var_889 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_889, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215])));
                MR_hl_field(MR_mktag(1), Var_889, 1) = ((MR_Box) (Var_892));
              }
              {
                Var_886 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_886, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[214])));
                MR_hl_field(MR_mktag(1), Var_886, 1) = ((MR_Box) (Var_889));
              }
              {
                Var_883 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_883, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[213])));
                MR_hl_field(MR_mktag(1), Var_883, 1) = ((MR_Box) (Var_886));
              }
              {
                Var_880 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_880, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
                MR_hl_field(MR_mktag(1), Var_880, 1) = ((MR_Box) (Var_883));
              }
              {
                Var_877 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_877, 0) = ((MR_Box) (Var_878));
                MR_hl_field(MR_mktag(1), Var_877, 1) = ((MR_Box) (Var_880));
              }
              {
                ArgPackBitsSpec_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_115, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[210])));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_115, 1) = ((MR_Box) (Var_877));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_115, STATE_VARIABLE_Specs_835_835, &STATE_VARIABLE_Specs_907_907);
            }
            else
            {
              ArgPackBits_114 = ArgPackBits0_112;
              STATE_VARIABLE_Specs_907_907 = STATE_VARIABLE_Specs_835_835;
            }
          }
          {
            Var_909 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_909, 0) = ((MR_Box) (ArgPackBits_114));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 271, Var_909, STATE_VARIABLE_Globals_820_820, &STATE_VARIABLE_Globals_910_910);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_858_858;
          MR_Word STATE_VARIABLE_Globals_862_862;
          MR_Word STATE_VARIABLE_Globals_866_866;

          libs__globals__set_option_4_p_0((MR_Integer) 271, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_820_820, &STATE_VARIABLE_Globals_858_858);
          libs__globals__set_option_4_p_0((MR_Integer) 274, Var_498, STATE_VARIABLE_Globals_858_858, &STATE_VARIABLE_Globals_862_862);
          libs__globals__set_option_4_p_0((MR_Integer) 276, Var_498, STATE_VARIABLE_Globals_862_862, &STATE_VARIABLE_Globals_866_866);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_498, STATE_VARIABLE_Globals_866_866, &STATE_VARIABLE_Globals_910_910);
          STATE_VARIABLE_Specs_907_907 = STATE_VARIABLE_Specs_835_835;
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 268, Var_353, STATE_VARIABLE_Globals_910_910, &STATE_VARIABLE_Globals_914_914);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 288, (MR_Integer) 287, Var_498, STATE_VARIABLE_Globals_914_914, &STATE_VARIABLE_Globals_919_919);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 268, (MR_Integer) 287, Var_498, STATE_VARIABLE_Globals_919_919, &STATE_VARIABLE_Globals_924_924);
    switch (Target_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_928_928 = STATE_VARIABLE_Globals_924_924;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_928_928 = STATE_VARIABLE_Globals_924_924;
        break;
      case (MR_Integer) 3:
        libs__globals__set_option_4_p_0((MR_Integer) 325, Var_498, STATE_VARIABLE_Globals_924_924, &STATE_VARIABLE_Globals_928_928);
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_928_928 = STATE_VARIABLE_Globals_924_924;
        break;
    }
    switch (Target_26) {
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
      libs__globals__set_option_4_p_0((MR_Integer) 469, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_928_928, &STATE_VARIABLE_Globals_932_932);
    else
      STATE_VARIABLE_Globals_932_932 = STATE_VARIABLE_Globals_928_928;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 519, (MR_Integer) 591, Var_498, STATE_VARIABLE_Globals_932_932, &STATE_VARIABLE_Globals_937_937);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 236, (MR_Integer) 227, Var_353, STATE_VARIABLE_Globals_937_937, &STATE_VARIABLE_Globals_942_942);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 227, (MR_Integer) 239, Var_498, STATE_VARIABLE_Globals_942_942, &STATE_VARIABLE_Globals_947_947);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 236, (MR_Integer) 147, Var_353, STATE_VARIABLE_Globals_947_947, &STATE_VARIABLE_Globals_952_952);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_952_952, (MR_Integer) 147, &ProfOptimized_116);
    switch (ProfOptimized_116) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 363, Var_498, STATE_VARIABLE_Globals_952_952, &STATE_VARIABLE_Globals_958_958);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_958_958 = STATE_VARIABLE_Globals_952_952;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 225, Var_353, STATE_VARIABLE_Globals_958_958, &STATE_VARIABLE_Globals_963_963);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 240, (MR_Integer) 225, Var_353, STATE_VARIABLE_Globals_963_963, &STATE_VARIABLE_Globals_968_968);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 241, (MR_Integer) 225, Var_353, STATE_VARIABLE_Globals_968_968, &STATE_VARIABLE_Globals_973_973);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_973_973, (MR_Integer) 242, &ExpComp_117);
    succeeded = (strcmp(ExpComp_117, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_Globals_978_978 = STATE_VARIABLE_Globals_973_973;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 363, Var_498, STATE_VARIABLE_Globals_973_973, &STATE_VARIABLE_Globals_978_978);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 215, (MR_Integer) 214, Var_353, STATE_VARIABLE_Globals_978_978, &STATE_VARIABLE_Globals_983_983);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 261, (MR_Integer) 263, Var_353, STATE_VARIABLE_Globals_983_983, &STATE_VARIABLE_Globals_988_988);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 294, Var_353, STATE_VARIABLE_Globals_988_988, &STATE_VARIABLE_Globals_993_993);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 294, Var_353, STATE_VARIABLE_Globals_993_993, &STATE_VARIABLE_Globals_998_998);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 344, Var_353, STATE_VARIABLE_Globals_998_998, &STATE_VARIABLE_Globals_1003_1003);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 214, (MR_Integer) 145, Var_353, STATE_VARIABLE_Globals_1003_1003, &STATE_VARIABLE_Globals_1008_1008);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 145, (MR_Integer) 141, Var_353, STATE_VARIABLE_Globals_1008_1008, &STATE_VARIABLE_Globals_1013_1013);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 144, (MR_Integer) 141, Var_353, STATE_VARIABLE_Globals_1013_1013, &STATE_VARIABLE_Globals_1018_1018);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1018_1018, (MR_Integer) 139, &TraceOptimized_118);
    TraceLevelIsNone_119 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_30);
    switch (TraceLevelIsNone_119) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TraceTailRec_120;
          MR_Word STATE_VARIABLE_Globals_1083_1083;
          MR_Word STATE_VARIABLE_Globals_1087_1087;
          MR_Word STATE_VARIABLE_Globals_1091_1091;
          MR_Word STATE_VARIABLE_Globals_1095_1095;
          MR_Word STATE_VARIABLE_Globals_1099_1099;
          MR_Word STATE_VARIABLE_Globals_1103_1103;
          MR_Word STATE_VARIABLE_Globals_1107_1107;
          MR_Word STATE_VARIABLE_Globals_1111_1111;

          switch (TraceOptimized_118) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Globals_1027_1027;
                MR_Word STATE_VARIABLE_Globals_1031_1031;
                MR_Word STATE_VARIABLE_Globals_1035_1035;
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

                libs__globals__set_option_4_p_0((MR_Integer) 363, Var_498, STATE_VARIABLE_Globals_1018_1018, &STATE_VARIABLE_Globals_1027_1027);
                libs__globals__set_option_4_p_0((MR_Integer) 381, Var_498, STATE_VARIABLE_Globals_1027_1027, &STATE_VARIABLE_Globals_1031_1031);
                libs__globals__set_option_4_p_0((MR_Integer) 383, Var_498, STATE_VARIABLE_Globals_1031_1031, &STATE_VARIABLE_Globals_1035_1035);
                libs__globals__set_option_4_p_0((MR_Integer) 390, Var_498, STATE_VARIABLE_Globals_1035_1035, &STATE_VARIABLE_Globals_1039_1039);
                libs__globals__set_option_4_p_0((MR_Integer) 391, Var_498, STATE_VARIABLE_Globals_1039_1039, &STATE_VARIABLE_Globals_1043_1043);
                libs__globals__set_option_4_p_0((MR_Integer) 420, Var_498, STATE_VARIABLE_Globals_1043_1043, &STATE_VARIABLE_Globals_1047_1047);
                libs__globals__set_option_4_p_0((MR_Integer) 379, Var_498, STATE_VARIABLE_Globals_1047_1047, &STATE_VARIABLE_Globals_1051_1051);
                libs__globals__set_option_4_p_0((MR_Integer) 380, Var_498, STATE_VARIABLE_Globals_1051_1051, &STATE_VARIABLE_Globals_1055_1055);
                libs__globals__set_option_4_p_0((MR_Integer) 396, Var_498, STATE_VARIABLE_Globals_1055_1055, &STATE_VARIABLE_Globals_1059_1059);
                libs__globals__set_option_4_p_0((MR_Integer) 395, Var_498, STATE_VARIABLE_Globals_1059_1059, &STATE_VARIABLE_Globals_1063_1063);
                libs__globals__set_option_4_p_0((MR_Integer) 402, Var_498, STATE_VARIABLE_Globals_1063_1063, &STATE_VARIABLE_Globals_1067_1067);
                libs__globals__set_option_4_p_0((MR_Integer) 416, Var_498, STATE_VARIABLE_Globals_1067_1067, &STATE_VARIABLE_Globals_1071_1071);
                libs__globals__set_option_4_p_0((MR_Integer) 429, Var_498, STATE_VARIABLE_Globals_1071_1071, &STATE_VARIABLE_Globals_1075_1075);
                libs__globals__set_option_4_p_0((MR_Integer) 430, Var_498, STATE_VARIABLE_Globals_1075_1075, &STATE_VARIABLE_Globals_1079_1079);
                libs__globals__set_option_4_p_0((MR_Integer) 399, Var_498, STATE_VARIABLE_Globals_1079_1079, &STATE_VARIABLE_Globals_1083_1083);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1083_1083 = STATE_VARIABLE_Globals_1018_1018;
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 487, Var_498, STATE_VARIABLE_Globals_1083_1083, &STATE_VARIABLE_Globals_1087_1087);
          libs__globals__set_option_4_p_0((MR_Integer) 398, Var_353, STATE_VARIABLE_Globals_1087_1087, &STATE_VARIABLE_Globals_1091_1091);
          libs__globals__set_option_4_p_0((MR_Integer) 418, Var_353, STATE_VARIABLE_Globals_1091_1091, &STATE_VARIABLE_Globals_1095_1095);
          libs__globals__set_option_4_p_0((MR_Integer) 485, Var_498, STATE_VARIABLE_Globals_1095_1095, &STATE_VARIABLE_Globals_1099_1099);
          libs__globals__set_option_4_p_0((MR_Integer) 298, Var_353, STATE_VARIABLE_Globals_1099_1099, &STATE_VARIABLE_Globals_1103_1103);
          libs__globals__set_option_4_p_0((MR_Integer) 299, Var_353, STATE_VARIABLE_Globals_1103_1103, &STATE_VARIABLE_Globals_1107_1107);
          libs__globals__set_option_4_p_0((MR_Integer) 350, Var_498, STATE_VARIABLE_Globals_1107_1107, &STATE_VARIABLE_Globals_1111_1111);
          TraceTailRec_120 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_30);
          switch (TraceTailRec_120) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__globals__set_option_4_p_0((MR_Integer) 148, Var_498, STATE_VARIABLE_Globals_1111_1111, &STATE_VARIABLE_Globals_1115_1115);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1115_1115 = STATE_VARIABLE_Globals_1111_1111;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 148, Var_498, STATE_VARIABLE_Globals_1018_1018, &STATE_VARIABLE_Globals_1115_1115);
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 297, Var_353, STATE_VARIABLE_Globals_1115_1115, &STATE_VARIABLE_Globals_1120_1120);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1120_1120, (MR_Integer) 223, &ProfileDeep_121);
    switch (ProfileDeep_121) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_1132_1132 = STATE_VARIABLE_Specs_907_907;
          STATE_VARIABLE_Globals_1144_1144 = STATE_VARIABLE_Globals_1120_1120;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LotsOfHOSpec_123;
          MR_Word STATE_VARIABLE_Globals_1135_1135;

          succeeded = (HighLevelCode_105 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_26 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_Specs_1132_1132 = STATE_VARIABLE_Specs_907_907;
          else
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[187])), STATE_VARIABLE_Specs_907_907, &STATE_VARIABLE_Specs_1132_1132);
          libs__globals__set_option_4_p_0((MR_Integer) 395, Var_498, STATE_VARIABLE_Globals_1120_1120, &STATE_VARIABLE_Globals_1135_1135);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1135_1135, (MR_Integer) 238, &LotsOfHOSpec_123);
          switch (LotsOfHOSpec_123) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Globals_1144_1144 = STATE_VARIABLE_Globals_1135_1135;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Globals_1140_1140;

                libs__globals__set_option_4_p_0((MR_Integer) 383, Var_353, STATE_VARIABLE_Globals_1135_1135, &STATE_VARIABLE_Globals_1140_1140);
                libs__globals__set_option_4_p_0((MR_Integer) 384, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_1140_1140, &STATE_VARIABLE_Globals_1144_1144);
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1144_1144, (MR_Integer) 240, &RecordTermSizesAsWords_124);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1144_1144, (MR_Integer) 241, &RecordTermSizesAsCells_125);
    succeeded = (RecordTermSizesAsWords_124 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_125 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[189])), STATE_VARIABLE_Specs_1132_1132, &STATE_VARIABLE_Specs_1154_1154);
      STATE_VARIABLE_Globals_1161_1161 = STATE_VARIABLE_Globals_1144_1144;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_124 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_125 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Globals_1157_1157;

        libs__globals__set_option_4_p_0((MR_Integer) 395, Var_498, STATE_VARIABLE_Globals_1144_1144, &STATE_VARIABLE_Globals_1157_1157);
        libs__globals__set_option_4_p_0((MR_Integer) 274, Var_498, STATE_VARIABLE_Globals_1157_1157, &STATE_VARIABLE_Globals_1161_1161);
        switch (HighLevelCode_105) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1154_1154 = STATE_VARIABLE_Specs_1132_1132;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191])), STATE_VARIABLE_Specs_1132_1132, &STATE_VARIABLE_Specs_1154_1154);
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Globals_1161_1161 = STATE_VARIABLE_Globals_1144_1144;
        STATE_VARIABLE_Specs_1154_1154 = STATE_VARIABLE_Specs_1132_1132;
      }
    }
    {
      MR_Word Var_1173;

      Var_1173 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_30);
      succeeded = (Var_1173 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (HighLevelCode_105 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Target_26 == (MR_Integer) 0);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_1180_1180 = STATE_VARIABLE_Specs_1154_1154;
    else
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[193])), STATE_VARIABLE_Specs_1154_1154, &STATE_VARIABLE_Specs_1180_1180);
    switch (SSTraceLevel_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_1183_1183;
          MR_Word STATE_VARIABLE_Globals_1187_1187;
          MR_Word STATE_VARIABLE_Globals_1191_1191;
          MR_Word STATE_VARIABLE_Globals_1195_1195;
          MR_Word STATE_VARIABLE_Globals_1199_1199;
          MR_Word STATE_VARIABLE_Globals_1203_1203;
          MR_Word STATE_VARIABLE_Globals_1207_1207;
          MR_Word STATE_VARIABLE_Globals_1211_1211;
          MR_Word STATE_VARIABLE_Globals_1215_1215;

          libs__globals__set_option_4_p_0((MR_Integer) 363, Var_498, STATE_VARIABLE_Globals_1161_1161, &STATE_VARIABLE_Globals_1183_1183);
          libs__globals__set_option_4_p_0((MR_Integer) 381, Var_498, STATE_VARIABLE_Globals_1183_1183, &STATE_VARIABLE_Globals_1187_1187);
          libs__globals__set_option_4_p_0((MR_Integer) 383, Var_498, STATE_VARIABLE_Globals_1187_1187, &STATE_VARIABLE_Globals_1191_1191);
          libs__globals__set_option_4_p_0((MR_Integer) 390, Var_498, STATE_VARIABLE_Globals_1191_1191, &STATE_VARIABLE_Globals_1195_1195);
          libs__globals__set_option_4_p_0((MR_Integer) 391, Var_498, STATE_VARIABLE_Globals_1195_1195, &STATE_VARIABLE_Globals_1199_1199);
          libs__globals__set_option_4_p_0((MR_Integer) 420, Var_498, STATE_VARIABLE_Globals_1199_1199, &STATE_VARIABLE_Globals_1203_1203);
          libs__globals__set_option_4_p_0((MR_Integer) 379, Var_498, STATE_VARIABLE_Globals_1203_1203, &STATE_VARIABLE_Globals_1207_1207);
          libs__globals__set_option_4_p_0((MR_Integer) 380, Var_498, STATE_VARIABLE_Globals_1207_1207, &STATE_VARIABLE_Globals_1211_1211);
          libs__globals__set_option_4_p_0((MR_Integer) 396, Var_498, STATE_VARIABLE_Globals_1211_1211, &STATE_VARIABLE_Globals_1215_1215);
          libs__globals__set_option_4_p_0((MR_Integer) 395, Var_498, STATE_VARIABLE_Globals_1215_1215, &STATE_VARIABLE_Globals_1219_1219);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1219_1219 = STATE_VARIABLE_Globals_1161_1161;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 244, (MR_Integer) 525, Var_498, STATE_VARIABLE_Globals_1219_1219, &STATE_VARIABLE_Globals_1224_1224);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 366, (MR_Integer) 397, Var_498, STATE_VARIABLE_Globals_1224_1224, &STATE_VARIABLE_Globals_1229_1229);
    switch (ProfileDeep_121) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 363, (MR_Integer) 397, Var_498, STATE_VARIABLE_Globals_1229_1229, &STATE_VARIABLE_Globals_1234_1234);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1234_1234 = STATE_VARIABLE_Globals_1229_1229;
        break;
    }
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 193, (MR_Integer) 420, Var_498, STATE_VARIABLE_Globals_1234_1234, &STATE_VARIABLE_Globals_1239_1239);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 193, (MR_Integer) 379, Var_498, STATE_VARIABLE_Globals_1239_1239, &STATE_VARIABLE_Globals_1244_1244);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 193, (MR_Integer) 380, Var_498, STATE_VARIABLE_Globals_1244_1244, &STATE_VARIABLE_Globals_1249_1249);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 294, (MR_Integer) 297, Var_353, STATE_VARIABLE_Globals_1249_1249, &STATE_VARIABLE_Globals_1254_1254);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 298, (MR_Integer) 297, Var_353, STATE_VARIABLE_Globals_1254_1254, &STATE_VARIABLE_Globals_1259_1259);
    switch (GC_Method_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_Globals_1263_1263;
          MR_Word STATE_VARIABLE_Globals_1267_1267;
          MR_Word STATE_VARIABLE_Globals_1271_1271;
          MR_Word STATE_VARIABLE_Globals_1275_1275;
          MR_Word STATE_VARIABLE_Globals_1279_1279;
          MR_Word STATE_VARIABLE_Globals_1283_1283;
          MR_Word STATE_VARIABLE_Globals_1287_1287;
          MR_Word STATE_VARIABLE_Globals_1291_1291;
          MR_Word STATE_VARIABLE_Globals_1295_1295;
          MR_Word STATE_VARIABLE_Globals_1299_1299;

          libs__globals__set_option_4_p_0((MR_Integer) 296, Var_353, STATE_VARIABLE_Globals_1259_1259, &STATE_VARIABLE_Globals_1263_1263);
          libs__globals__set_option_4_p_0((MR_Integer) 299, Var_353, STATE_VARIABLE_Globals_1263_1263, &STATE_VARIABLE_Globals_1267_1267);
          libs__globals__set_option_4_p_0((MR_Integer) 487, Var_498, STATE_VARIABLE_Globals_1267_1267, &STATE_VARIABLE_Globals_1271_1271);
          libs__globals__set_option_4_p_0((MR_Integer) 508, Var_498, STATE_VARIABLE_Globals_1271_1271, &STATE_VARIABLE_Globals_1275_1275);
          libs__globals__set_option_4_p_0((MR_Integer) 350, Var_498, STATE_VARIABLE_Globals_1275_1275, &STATE_VARIABLE_Globals_1279_1279);
          libs__globals__set_option_4_p_0((MR_Integer) 485, Var_498, STATE_VARIABLE_Globals_1279_1279, &STATE_VARIABLE_Globals_1283_1283);
          libs__globals__set_option_4_p_0((MR_Integer) 333, Var_498, STATE_VARIABLE_Globals_1283_1283, &STATE_VARIABLE_Globals_1287_1287);
          libs__globals__set_option_4_p_0((MR_Integer) 334, Var_498, STATE_VARIABLE_Globals_1287_1287, &STATE_VARIABLE_Globals_1291_1291);
          libs__globals__set_option_4_p_0((MR_Integer) 395, Var_498, STATE_VARIABLE_Globals_1291_1291, &STATE_VARIABLE_Globals_1295_1295);
          libs__globals__set_option_4_p_0((MR_Integer) 390, Var_498, STATE_VARIABLE_Globals_1295_1295, &STATE_VARIABLE_Globals_1299_1299);
          libs__globals__set_option_4_p_0((MR_Integer) 391, Var_498, STATE_VARIABLE_Globals_1299_1299, &STATE_VARIABLE_Globals_1303_1303);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1303_1303 = STATE_VARIABLE_Globals_1259_1259;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_1303_1303 = STATE_VARIABLE_Globals_1259_1259;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Globals_1303_1303 = STATE_VARIABLE_Globals_1259_1259;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_Globals_1303_1303 = STATE_VARIABLE_Globals_1259_1259;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1303_1303 = STATE_VARIABLE_Globals_1259_1259;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1303_1303, (MR_Integer) 292, &PutNondetEnvOnHeap_129);
    succeeded = (HighLevelCode_105 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (GC_Method_27 == (MR_Integer) 5);
      if (succeeded)
        succeeded = (PutNondetEnvOnHeap_129 == (MR_Integer) 1);
    }
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[199])), STATE_VARIABLE_Specs_1180_1180, &STATE_VARIABLE_Specs_1321_1321);
    else
      STATE_VARIABLE_Specs_1321_1321 = STATE_VARIABLE_Specs_1180_1180;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 297, (MR_Integer) 295, Var_353, STATE_VARIABLE_Globals_1303_1303, &STATE_VARIABLE_Globals_1325_1325);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 296, (MR_Integer) 295, Var_353, STATE_VARIABLE_Globals_1325_1325, &STATE_VARIABLE_Globals_1330_1330);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 297, (MR_Integer) 506, Var_498, STATE_VARIABLE_Globals_1330_1330, &STATE_VARIABLE_Globals_1335_1335);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 296, (MR_Integer) 506, Var_498, STATE_VARIABLE_Globals_1335_1335, &STATE_VARIABLE_Globals_1340_1340);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 295, (MR_Integer) 504, Var_498, STATE_VARIABLE_Globals_1340_1340, &STATE_VARIABLE_Globals_1345_1345);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 299, (MR_Integer) 420, Var_498, STATE_VARIABLE_Globals_1345_1345, &STATE_VARIABLE_Globals_1350_1350);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 299, (MR_Integer) 379, Var_498, STATE_VARIABLE_Globals_1350_1350, &STATE_VARIABLE_Globals_1355_1355);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 246, (MR_Integer) 485, Var_498, STATE_VARIABLE_Globals_1355_1355, &STATE_VARIABLE_Globals_1360_1360);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 256, (MR_Integer) 485, Var_498, STATE_VARIABLE_Globals_1360_1360, &STATE_VARIABLE_Globals_1365_1365);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 248, (MR_Integer) 487, Var_498, STATE_VARIABLE_Globals_1365_1365, &STATE_VARIABLE_Globals_1370_1370);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1370_1370, (MR_Integer) 311, &DisablePneg_131);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1370_1370, (MR_Integer) 312, &DisableCut_132);
    succeeded = (UseMinimalModelStackCopy_106 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_131 == (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1370_1370, &STATE_VARIABLE_Globals_1376_1376);
    else
      STATE_VARIABLE_Globals_1376_1376 = STATE_VARIABLE_Globals_1370_1370;
    succeeded = (UseMinimalModelStackCopy_106 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_132 == (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 314, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_1376_1376, &STATE_VARIABLE_Globals_1380_1380);
    else
      STATE_VARIABLE_Globals_1380_1380 = STATE_VARIABLE_Globals_1376_1376;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1380_1380, (MR_Integer) 172, &DumpHLDSStages_133);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1380_1380, (MR_Integer) 171, &DumpTraceStages_134);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1380_1380, (MR_Integer) 330, &ParallelLiveness_135);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1380_1380, (MR_Integer) 331, &ParallelCodeGen_136);
    succeeded = (DumpHLDSStages_133 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DumpTraceStages_134 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_82 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_135 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_136 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 329, Var_498, STATE_VARIABLE_Globals_1380_1380, &STATE_VARIABLE_Globals_1388_1388);
    else
      STATE_VARIABLE_Globals_1388_1388 = STATE_VARIABLE_Globals_1380_1380;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 390, (MR_Integer) 391, Var_353, STATE_VARIABLE_Globals_1388_1388, &STATE_VARIABLE_Globals_1393_1393);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 379, (MR_Integer) 380, Var_353, STATE_VARIABLE_Globals_1393_1393, &STATE_VARIABLE_Globals_1398_1398);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 382, (MR_Integer) 355, Var_353, STATE_VARIABLE_Globals_1398_1398, &STATE_VARIABLE_Globals_1403_1403);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 382, (MR_Integer) 381, Var_353, STATE_VARIABLE_Globals_1403_1403, &STATE_VARIABLE_Globals_1408_1408);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 392, (MR_Integer) 398, Var_353, STATE_VARIABLE_Globals_1408_1408, &STATE_VARIABLE_Globals_1413_1413);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 392, (MR_Integer) 377, Var_353, STATE_VARIABLE_Globals_1413_1413, &STATE_VARIABLE_Globals_1418_1418);
    succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_1420 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_1420)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_1421 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1420, (MR_Integer) 0))));
        succeeded = (Var_1421 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 381, Var_498, STATE_VARIABLE_Globals_1418_1418, &STATE_VARIABLE_Globals_1424_1424);
    else
      STATE_VARIABLE_Globals_1424_1424 = STATE_VARIABLE_Globals_1418_1418;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 425, (MR_Integer) 426, Var_353, STATE_VARIABLE_Globals_1424_1424, &STATE_VARIABLE_Globals_1429_1429);
    succeeded = (OpMode_25 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 30, Var_498, STATE_VARIABLE_Globals_1429_1429, &STATE_VARIABLE_Globals_1433_1433);
    else
      STATE_VARIABLE_Globals_1433_1433 = STATE_VARIABLE_Globals_1429_1429;
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1433_1433, (MR_Integer) 695, &TargetArch_141);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1433_1433, (MR_Integer) 589, &MercuryLinkage_142);
    succeeded = (strcmp(MercuryLinkage_142, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_143 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 573, Var_498, STATE_VARIABLE_Globals_1433_1433, &STATE_VARIABLE_Globals_1439_1439);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1433_1433, (MR_Integer) 573, &DefaultRuntimeLibraryDirs_143);
      STATE_VARIABLE_Globals_1439_1439 = STATE_VARIABLE_Globals_1433_1433;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1439_1439, (MR_Integer) 582, &MaybeStdLibDir_144);
    if ((MaybeStdLibDir_144 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 681, Var_498, STATE_VARIABLE_Globals_1439_1439, &STATE_VARIABLE_Globals_1458_1458);
    else
    {
      MR_String StdLibDir_145 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_144, (MR_Integer) 0))));
      MR_Word OptionTable2_146;
      MR_Word OptionTable_147;
      MR_Word LinkLibDirs0_148;
      MR_Word STATE_VARIABLE_Globals_1447_1447;
      MR_Word Var_1450;
      MR_Word STATE_VARIABLE_Globals_1451_1451;
      MR_Word Var_1452;
      MR_String Var_1453;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_1439_1439, &OptionTable2_146);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_145, OptionTable2_146, &OptionTable_147);
      libs__globals__set_options_3_p_0(OptionTable_147, STATE_VARIABLE_Globals_1439_1439, &STATE_VARIABLE_Globals_1447_1447);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1447_1447, (MR_Integer) 571, &LinkLibDirs0_148);
      Var_1453 = mercury__dir__f_slash_2_f_0(StdLibDir_145, (MR_String) "lib");
      {
        Var_1452 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1452, 0) = ((MR_Box) (Var_1453));
        MR_hl_field(MR_mktag(1), Var_1452, 1) = ((MR_Box) (LinkLibDirs0_148));
      }
      {
        Var_1450 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1450, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1450, 1) = ((MR_Box) (Var_1452));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 571, Var_1450, STATE_VARIABLE_Globals_1447_1447, &STATE_VARIABLE_Globals_1451_1451);
      switch (DefaultRuntimeLibraryDirs_143) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1458_1458 = STATE_VARIABLE_Globals_1451_1451;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_149;
            MR_Word Var_1457;
            MR_Word Var_1459;
            MR_String Var_1460;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1451_1451, (MR_Integer) 572, &Rpath0_149);
            Var_1460 = mercury__dir__f_slash_2_f_0(StdLibDir_145, (MR_String) "lib");
            {
              Var_1459 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1459, 0) = ((MR_Box) (Var_1460));
              MR_hl_field(MR_mktag(1), Var_1459, 1) = ((MR_Box) (Rpath0_149));
            }
            {
              Var_1457 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1457, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1457, 1) = ((MR_Box) (Var_1459));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 572, Var_1457, STATE_VARIABLE_Globals_1451_1451, &STATE_VARIABLE_Globals_1458_1458);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1458_1458, (MR_Integer) 663, &MaybeConfDir_150);
    if ((MaybeConfDir_150 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1466_1466 = STATE_VARIABLE_Globals_1458_1458;
    else
    {
      MR_String ConfDir_151 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_150, (MR_Integer) 0))));
      MR_Word CIncludeDirs0_152;
      MR_Word Var_1465;
      MR_Word Var_1467;
      MR_String Var_1468;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1458_1458, (MR_Integer) 523, &CIncludeDirs0_152);
      Var_1468 = mercury__dir__f_slash_2_f_0(ConfDir_151, (MR_String) "conf");
      {
        Var_1467 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1467, 0) = ((MR_Box) (Var_1468));
        MR_hl_field(MR_mktag(1), Var_1467, 1) = ((MR_Box) (CIncludeDirs0_152));
      }
      {
        Var_1465 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1465, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1465, 1) = ((MR_Box) (Var_1467));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 523, Var_1465, STATE_VARIABLE_Globals_1458_1458, &STATE_VARIABLE_Globals_1466_1466);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1466_1466, (MR_Integer) 674, &ConfigFile_153);
    succeeded = (ConfigFile_153 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_1471 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConfigFile_153, (MR_Integer) 0))));
      succeeded = (strcmp(Var_1471, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_150 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__globals__set_option_4_p_0((MR_Integer) 674, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])), STATE_VARIABLE_Globals_1466_1466, &STATE_VARIABLE_Globals_1478_1478);
      else
      {
        MR_String ConfDir1_154 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_150, (MR_Integer) 0))));
        MR_Word Var_1477;
        MR_Word Var_1479;
        MR_String Var_1480;
        MR_String Var_1481;

        Var_1481 = mercury__dir__f_slash_2_f_0(ConfDir1_154, (MR_String) "conf");
        Var_1480 = mercury__dir__f_slash_2_f_0(Var_1481, (MR_String) "Mercury.config");
        {
          Var_1479 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1479, 0) = ((MR_Box) (Var_1480));
        }
        {
          Var_1477 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1477, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_1477, 1) = ((MR_Box) (Var_1479));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 674, Var_1477, STATE_VARIABLE_Globals_1466_1466, &STATE_VARIABLE_Globals_1478_1478);
      }
    else
      STATE_VARIABLE_Globals_1478_1478 = STATE_VARIABLE_Globals_1466_1466;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1478_1478, (MR_Integer) 576, &MercuryLibDirs_155);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_1478_1478, &GradeString_156);
    if ((MercuryLibDirs_155 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_1535_1535 = STATE_VARIABLE_Globals_1478_1478;
    else
    {
      MR_Word ExtraLinkLibDirs_159;
      MR_Word LinkLibDirs1_161;
      MR_Word ExtraIncludeDirs_163;
      MR_Word CIncludeDirs_164;
      MR_Word ErlangIncludeDirs_165;
      MR_Word ExtraIntermodDirs_166;
      MR_Word IntermodDirs0_167;
      MR_Word ExtraInitDirs_168;
      MR_Word InitDirs1_169;
      MR_Word Var_1485;
      MR_Word Var_1492;
      MR_Word STATE_VARIABLE_Globals_1493_1493;
      MR_Word Var_1494;
      MR_Word STATE_VARIABLE_Globals_1498_1498;
      MR_Word Var_1500;
      MR_Word Var_1509;
      MR_Word STATE_VARIABLE_Globals_1510_1510;
      MR_Word Var_1511;
      MR_Word Var_1514;
      MR_Word STATE_VARIABLE_Globals_1515_1515;
      MR_Word Var_1516;
      MR_Word Var_1517;
      MR_Word Var_1524;
      MR_Word STATE_VARIABLE_Globals_1525_1525;
      MR_Word Var_1526;
      MR_Word Var_1527;
      MR_Word Var_1534;
      MR_Word Var_1536;

      {
        Var_1485 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1485, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1485, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_1));
        MR_hl_field(MR_mktag(0), Var_1485, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1485, 3) = ((MR_Box) (GradeString_156));
      }
      ExtraLinkLibDirs_159 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1485, MercuryLibDirs_155);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1478_1478, (MR_Integer) 571, &LinkLibDirs1_161);
      Var_1494 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_161, ExtraLinkLibDirs_159);
      {
        Var_1492 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1492, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1492, 1) = ((MR_Box) (Var_1494));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 571, Var_1492, STATE_VARIABLE_Globals_1478_1478, &STATE_VARIABLE_Globals_1493_1493);
      switch (DefaultRuntimeLibraryDirs_143) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1498_1498 = STATE_VARIABLE_Globals_1493_1493;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_162;
            MR_Word Var_1497;
            MR_Word Var_1499;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1493_1493, (MR_Integer) 572, &Rpath_162);
            Var_1499 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_162, ExtraLinkLibDirs_159);
            {
              Var_1497 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1497, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_1497, 1) = ((MR_Box) (Var_1499));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 572, Var_1497, STATE_VARIABLE_Globals_1493_1493, &STATE_VARIABLE_Globals_1498_1498);
          }
          break;
      }
      {
        Var_1500 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1500, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1500, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_2));
        MR_hl_field(MR_mktag(0), Var_1500, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1500, 3) = ((MR_Box) (GradeString_156));
      }
      ExtraIncludeDirs_163 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1500, MercuryLibDirs_155);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1498_1498, (MR_Integer) 523, &CIncludeDirs_164);
      Var_1511 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_163, CIncludeDirs_164);
      {
        Var_1509 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1509, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1509, 1) = ((MR_Box) (Var_1511));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 523, Var_1509, STATE_VARIABLE_Globals_1498_1498, &STATE_VARIABLE_Globals_1510_1510);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 562, &ErlangIncludeDirs_165);
      Var_1516 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_163, ErlangIncludeDirs_165);
      {
        Var_1514 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1514, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1514, 1) = ((MR_Box) (Var_1516));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 562, Var_1514, STATE_VARIABLE_Globals_1510_1510, &STATE_VARIABLE_Globals_1515_1515);
      {
        Var_1517 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1517, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1517, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_3));
        MR_hl_field(MR_mktag(0), Var_1517, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1517, 3) = ((MR_Box) (GradeString_156));
      }
      ExtraIntermodDirs_166 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1517, MercuryLibDirs_155);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1515_1515, (MR_Integer) 679, &IntermodDirs0_167);
      Var_1526 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_166, IntermodDirs0_167);
      {
        Var_1524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1524, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1524, 1) = ((MR_Box) (Var_1526));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 679, Var_1524, STATE_VARIABLE_Globals_1515_1515, &STATE_VARIABLE_Globals_1525_1525);
      {
        Var_1527 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1527, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1527, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_4));
        MR_hl_field(MR_mktag(0), Var_1527, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1527, 3) = ((MR_Box) (GradeString_156));
      }
      ExtraInitDirs_168 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1527, MercuryLibDirs_155);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1525_1525, (MR_Integer) 584, &InitDirs1_169);
      Var_1536 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_169, ExtraInitDirs_168);
      {
        Var_1534 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1534, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1534, 1) = ((MR_Box) (Var_1536));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 584, Var_1534, STATE_VARIABLE_Globals_1525_1525, &STATE_VARIABLE_Globals_1535_1535);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1535_1535, (MR_Integer) 680, &UseSearchDirs_170);
    switch (UseSearchDirs_170) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1542_1542 = STATE_VARIABLE_Globals_1535_1535;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_171;
          MR_Word SearchDirs_172;
          MR_Word Var_1541;
          MR_Word Var_1543;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1535_1535, (MR_Integer) 679, &IntermodDirs1_171);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1535_1535, (MR_Integer) 678, &SearchDirs_172);
          Var_1543 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_171, SearchDirs_172);
          {
            Var_1541 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1541, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1541, 1) = ((MR_Box) (Var_1543));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 679, Var_1541, STATE_VARIABLE_Globals_1535_1535, &STATE_VARIABLE_Globals_1542_1542);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1542_1542, (MR_Integer) 677, &UseGradeSubdirs_173);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1542_1542, (MR_Integer) 578, &SearchLibFilesDirs_174);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1542_1542, (MR_Integer) 679, &IntermodDirs2_175);
    {
      ToGradeSubdir_176 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_176, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_176, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_176, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_176, 3) = ((MR_Box) (TargetArch_141));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_176, 4) = ((MR_Box) (GradeString_156));
    }
    switch (UseGradeSubdirs_173) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntermodDirs3_180;
          MR_Word LinkLibDirs2_181;
          MR_Word InitDirs2_182;
          MR_Word Var_1562;

          IntermodDirs3_180 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_174, IntermodDirs2_175);
          {
            Var_1562 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1562, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_1562, 1) = ((MR_Box) (IntermodDirs3_180));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 679, Var_1562, STATE_VARIABLE_Globals_1542_1542, &STATE_VARIABLE_Globals_1563_1563);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1563_1563, (MR_Integer) 571, &LinkLibDirs2_181);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1563_1563, (MR_Integer) 584, &InitDirs2_182);
          LinkLibDirs_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_174, LinkLibDirs2_181);
          InitDirs_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_174, InitDirs2_182);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeSubdir_178;
          MR_Word SearchLibFilesGradeSubdirs_179;
          MR_Word ToGradeLibDir_183;
          MR_Word SearchGradeLibDirs_184;
          MR_Word ToGradeInitDir_186;
          MR_Word SearchGradeInitDirs_187;
          MR_String Var_1552;
          MR_Word Var_1554;
          MR_Word Var_1556;
          MR_Word Var_1557;
          MR_Word Var_1558;
          MR_Word Var_1559;
          MR_String Var_1560;
          MR_Word IntermodDirs3_13380;
          MR_Word LinkLibDirs2_13381;
          MR_Word InitDirs2_13382;
          MR_Word Var_13383;

          Var_1552 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_156);
          GradeSubdir_178 = mercury__dir__f_slash_2_f_0(Var_1552, TargetArch_141);
          SearchLibFilesGradeSubdirs_179 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_176, SearchLibFilesDirs_174);
          {
            Var_1554 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_1554, 0) = ((MR_Box) (GradeSubdir_178));
            MR_hl_field(MR_mktag(1), Var_1554, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_1560 = mercury__dir__this_directory_0_f_0();
          {
            Var_1559 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1559, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_1559, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_6));
            MR_hl_field(MR_mktag(0), Var_1559, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1559, 3) = ((MR_Box) (Var_1560));
          }
          {
            Var_1558 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1558, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_1558, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_7));
            MR_hl_field(MR_mktag(0), Var_1558, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1558, 3) = ((MR_Box) (Var_1559));
          }
          Var_1557 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1558, IntermodDirs2_175);
          Var_1556 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_179, Var_1557);
          IntermodDirs3_13380 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_1554, Var_1556);
          {
            Var_13383 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_13383, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_13383, 1) = ((MR_Box) (IntermodDirs3_13380));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 679, Var_13383, STATE_VARIABLE_Globals_1542_1542, &STATE_VARIABLE_Globals_1563_1563);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1563_1563, (MR_Integer) 571, &LinkLibDirs2_13381);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1563_1563, (MR_Integer) 584, &InitDirs2_13382);
          {
            ToGradeLibDir_183 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_183, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_183, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_183, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_183, 3) = ((MR_Box) (ToGradeSubdir_176));
          }
          SearchGradeLibDirs_184 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_183, SearchLibFilesDirs_174);
          LinkLibDirs_185 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_184, LinkLibDirs2_13381);
          {
            ToGradeInitDir_186 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_186, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_186, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_186, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_186, 3) = ((MR_Box) (ToGradeSubdir_176));
          }
          SearchGradeInitDirs_187 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_186, SearchLibFilesDirs_174);
          InitDirs_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_187, InitDirs2_13382);
        }
        break;
    }
    {
      Var_1579 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1579, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1579, 1) = ((MR_Box) (LinkLibDirs_185));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 571, Var_1579, STATE_VARIABLE_Globals_1563_1563, &STATE_VARIABLE_Globals_1580_1580);
    {
      Var_1582 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1582, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_1582, 1) = ((MR_Box) (InitDirs_188));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 584, Var_1582, STATE_VARIABLE_Globals_1580_1580, &STATE_VARIABLE_Globals_1583_1583);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1583_1583, (MR_Integer) 676, &UseSubdirs_189);
    switch (UseGradeSubdirs_173) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_189 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_190 = (MR_Word) (&libs__handle_options_scalar_common_7[0]);
            ToHrlsSubdir_191 = (MR_Word) (&libs__handle_options_scalar_common_7[1]);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_190 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_190, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_190, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_12));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_190, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_190, 3) = ((MR_Box) (ToGradeSubdir_176));
          }
          {
            ToHrlsSubdir_191 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_191, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_191, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_23_p_0_13));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_191, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_191, 3) = ((MR_Box) (ToGradeSubdir_176));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word CIncludeDirs1_192;
      MR_String MihsSubdir_193;
      MR_Word SearchLibMihsSubdirs_194;
      MR_Word SubdirCIncludeDirs_195;
      MR_Word ErlangIncludeDirs1_196;
      MR_String HrlsSubdir_197;
      MR_Word SubdirErlangIncludeDirs_198;
      MR_String Var_1608;
      MR_String Var_1609;
      MR_Word Var_1610;
      MR_Word Var_1611;
      MR_Word Var_1613;
      MR_Word STATE_VARIABLE_Globals_1614_1614;
      MR_String Var_1616;
      MR_Word Var_1618;
      MR_Box MR_CALL (* func_11)(MR_Box, MR_Box);
      MR_Box conv12_MihsSubdir_193;
      MR_Box MR_CALL (* func_13)(MR_Box, MR_Box);
      MR_Box conv14_HrlsSubdir_197;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1583_1583, (MR_Integer) 523, &CIncludeDirs1_192);
      Var_1608 = mercury__dir__this_directory_0_f_0();
      func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToMihsSubdir_190, (MR_Integer) 1))));
      conv12_MihsSubdir_193 = func_11(((MR_Box) (ToMihsSubdir_190)), ((MR_Box) (Var_1608)));
      MihsSubdir_193 = ((MR_String) (conv12_MihsSubdir_193));
      SearchLibMihsSubdirs_194 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_190, SearchLibFilesDirs_174);
      Var_1609 = mercury__dir__this_directory_0_f_0();
      Var_1611 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_194, CIncludeDirs1_192);
      {
        Var_1610 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1610, 0) = ((MR_Box) (MihsSubdir_193));
        MR_hl_field(MR_mktag(1), Var_1610, 1) = ((MR_Box) (Var_1611));
      }
      {
        SubdirCIncludeDirs_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_195, 0) = ((MR_Box) (Var_1609));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_195, 1) = ((MR_Box) (Var_1610));
      }
      {
        Var_1613 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1613, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1613, 1) = ((MR_Box) (SubdirCIncludeDirs_195));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 523, Var_1613, STATE_VARIABLE_Globals_1583_1583, &STATE_VARIABLE_Globals_1614_1614);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1614_1614, (MR_Integer) 562, &ErlangIncludeDirs1_196);
      Var_1616 = mercury__dir__this_directory_0_f_0();
      func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToHrlsSubdir_191, (MR_Integer) 1))));
      conv14_HrlsSubdir_197 = func_13(((MR_Box) (ToHrlsSubdir_191)), ((MR_Box) (Var_1616)));
      HrlsSubdir_197 = ((MR_String) (conv14_HrlsSubdir_197));
      {
        SubdirErlangIncludeDirs_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_198, 0) = ((MR_Box) (HrlsSubdir_197));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_198, 1) = ((MR_Box) (ErlangIncludeDirs1_196));
      }
      {
        Var_1618 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1618, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1618, 1) = ((MR_Box) (SubdirErlangIncludeDirs_198));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 562, Var_1618, STATE_VARIABLE_Globals_1614_1614, &STATE_VARIABLE_Globals_1619_1619);
    }
    else
      STATE_VARIABLE_Globals_1619_1619 = STATE_VARIABLE_Globals_1583_1583;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 357, (MR_Integer) 16, Var_498, STATE_VARIABLE_Globals_1619_1619, &STATE_VARIABLE_Globals_1623_1623);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1623_1623, (MR_Integer) 34, &WarnNonTailRecSelf_199);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1623_1623, (MR_Integer) 35, &WarnNonTailRecMutual_200);
    succeeded = (WarnNonTailRecSelf_199 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_200 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word PessimizeTailCalls_201;
      MR_Word OptimizeTailCalls_202;
      MR_Word STATE_VARIABLE_Specs_1633_1633;
      MR_Word STATE_VARIABLE_Specs_1638_1638;
      MR_Word Var_1641;
      MR_Word Var_1642;

      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1623_1623, (MR_Integer) 500, &PessimizeTailCalls_201);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1623_1623, (MR_Integer) 488, &OptimizeTailCalls_202);
      switch (PessimizeTailCalls_201) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1633_1633 = STATE_VARIABLE_Specs_1321_1321;
          break;
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[219])), STATE_VARIABLE_Specs_1321_1321, &STATE_VARIABLE_Specs_1633_1633);
          break;
      }
      switch (OptimizeTailCalls_202) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[221])), STATE_VARIABLE_Specs_1633_1633, &STATE_VARIABLE_Specs_1638_1638);
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1638_1638 = STATE_VARIABLE_Specs_1633_1633;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_25)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_1641 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_25, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_1641)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_1642 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_1641, (MR_Integer) 0))));
          succeeded = (Var_1642 == (MR_Word) ((MR_Unsigned) 20U));
        }
      }
      if (succeeded)
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[223])), STATE_VARIABLE_Specs_1638_1638, &STATE_VARIABLE_Specs_1647_1647);
      else
        STATE_VARIABLE_Specs_1647_1647 = STATE_VARIABLE_Specs_1638_1638;
    }
    else
      STATE_VARIABLE_Specs_1647_1647 = STATE_VARIABLE_Specs_1321_1321;
    switch (Target_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          BackendForeignLanguages_206 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[224]));
          STATE_VARIABLE_Globals_1658_1658 = STATE_VARIABLE_Globals_1623_1623;
        }
        break;
      case (MR_Integer) 1:
        {
          BackendForeignLanguages_206 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[225]));
          STATE_VARIABLE_Globals_1658_1658 = STATE_VARIABLE_Globals_1623_1623;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_1654_1654;

          BackendForeignLanguages_206 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]));
          libs__globals__set_option_4_p_0((MR_Integer) 395, Var_498, STATE_VARIABLE_Globals_1623_1623, &STATE_VARIABLE_Globals_1654_1654);
          libs__globals__set_option_4_p_0((MR_Integer) 325, Var_498, STATE_VARIABLE_Globals_1654_1654, &STATE_VARIABLE_Globals_1658_1658);
        }
        break;
      case (MR_Integer) 2:
        {
          BackendForeignLanguages_206 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[226]));
          STATE_VARIABLE_Globals_1658_1658 = STATE_VARIABLE_Globals_1623_1623;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1658_1658, (MR_Integer) 293, &CurrentBackendForeignLanguage_207);
    if ((CurrentBackendForeignLanguage_207 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_1668;

      {
        Var_1668 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1668, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_1668, 1) = ((MR_Box) (BackendForeignLanguages_206));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 293, Var_1668, STATE_VARIABLE_Globals_1658_1658, &STATE_VARIABLE_Globals_1669_1669);
    }
    else
      STATE_VARIABLE_Globals_1669_1669 = STATE_VARIABLE_Globals_1658_1658;
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_1669_1669, (MR_Integer) 343, &CompareSpec_210);
    succeeded = (CompareSpec_210 < (MR_Integer) 0);
    if (succeeded)
      switch (HighLevelCode_105) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__globals__set_option_4_p_0((MR_Integer) 343, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7])), STATE_VARIABLE_Globals_1669_1669, &STATE_VARIABLE_Globals_1678_1678);
          break;
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 343, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8])), STATE_VARIABLE_Globals_1669_1669, &STATE_VARIABLE_Globals_1678_1678);
          break;
      }
    else
      STATE_VARIABLE_Globals_1678_1678 = STATE_VARIABLE_Globals_1669_1669;
    succeeded = (Target_26 == (MR_Integer) 0);
    if (succeeded)
    {
      Var_1680 = (MR_Integer) 2;
      succeeded = (NumPtagBits_54 >= Var_1680);
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 300, Var_353, STATE_VARIABLE_Globals_1678_1678, &STATE_VARIABLE_Globals_1683_1683);
    else
      libs__globals__set_option_4_p_0((MR_Integer) 300, Var_498, STATE_VARIABLE_Globals_1678_1678, &STATE_VARIABLE_Globals_1683_1683);
    switch (HighLevelCode_105) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_2_p_0(STATE_VARIABLE_Globals_1683_1683, &STATE_VARIABLE_Globals_1689_1689);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1689_1689 = STATE_VARIABLE_Globals_1683_1683;
        break;
    }
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_1689_1689, STATE_VARIABLE_Globals_213, STATE_VARIABLE_Specs_1647_1647, STATE_VARIABLE_Specs_212);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_213);
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

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 402, &SourceOptionValue_63);
    switch (SourceOptionValue_63) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_19_19 = STATE_VARIABLE_Globals_0_14;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 502, Var_18, STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_19_19);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_19_19, (MR_Integer) 508, &SourceOptionValue_71);
    switch (SourceOptionValue_71) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_24_24 = STATE_VARIABLE_Globals_19_19;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 505, Var_18, STATE_VARIABLE_Globals_19_19, &STATE_VARIABLE_Globals_24_24);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_24_24, (MR_Integer) 508, &SourceOptionValue_79);
    switch (SourceOptionValue_79) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_24_24;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 498, Var_18, STATE_VARIABLE_Globals_24_24, &STATE_VARIABLE_Globals_29_29);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 507, &SourceOptionValue_87);
    switch (SourceOptionValue_87) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_34_34 = STATE_VARIABLE_Globals_29_29;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 329, Var_18, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 508, &OptFrames_4);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 502, &OptLocalVars_5);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_34_34, (MR_Integer) 511, &OptRepeat_6);
    succeeded = (OptFrames_4 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OptLocalVars_5 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_39 = (MR_Integer) 1;
      succeeded = (OptRepeat_6 < Var_39);
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 511, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_42_42);
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
    libs__globals__set_option_4_p_0((MR_Integer) 481, Var_46, STATE_VARIABLE_Globals_42_42, &STATE_VARIABLE_Globals_47_47);
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
    libs__globals__set_option_4_p_0((MR_Integer) 482, Var_50, STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 284, &NonLocalGotos_11);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 286, &AsmLabels_12);
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
    libs__globals__set_option_4_p_0((MR_Integer) 483, Var_55, STATE_VARIABLE_Globals_51_51, STATE_VARIABLE_Globals_15);
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

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 206, &TargetStr_41);
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
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])));
      }
      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_119, 1) = ((MR_Box) (Var_122));
      }
      Var_135 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21])));
      Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_135, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TargetSpec_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_119, Var_134);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_43, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_152_152);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 243, &GC_MethodStr_44);
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
        MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])));
      }
      {
        Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (Var_157));
      }
      Var_170 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30])));
      Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_170, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      GCMethodSpec_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_154, Var_169);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_46, STATE_VARIABLE_Specs_152_152, &STATE_VARIABLE_Specs_191_191);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 346, &FactTablePercentFull_47);
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
        MR_hl_field(MR_mktag(1), Var_197, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[35])));
      }
      {
        FactTablePercentFullSpec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
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
        MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[40])));
      }
      {
        IncompleteSwitchThresholdSpec_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_50, 1) = ((MR_Box) (Var_218));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_50, STATE_VARIABLE_Specs_212_212, &STATE_VARIABLE_Specs_233_233);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 450, &TermNormStr_51);
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
        MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])));
      }
      {
        Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_235, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_235, 1) = ((MR_Box) (Var_238));
      }
      Var_251 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])));
      Var_250 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_251, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      TermNormSpec_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_235, Var_250);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_53, STATE_VARIABLE_Specs_233_233, &STATE_VARIABLE_Specs_266_266);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 456, &Term2NormStr_54);
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
        MR_hl_field(MR_mktag(1), Var_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])));
      }
      {
        Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) (Var_271));
      }
      Var_284 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])));
      Var_283 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_284, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
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
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 214, &ExecTrace_59);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 215, &DeclDebug_60);
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
                MR_hl_field(MR_mktag(1), Var_306, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[55])));
              }
              {
                InconsistentTraceLevelSpec_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201])));
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
              MR_hl_field(MR_mktag(1), Var_325, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[58])));
            }
            {
              Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_322, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
              MR_hl_field(MR_mktag(1), Var_322, 1) = ((MR_Box) (Var_325));
            }
            Var_338 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])));
            Var_337 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_338, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
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
        MR_hl_field(MR_mktag(1), Var_363, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[67])));
      }
      {
        TraceSuppressSpec_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
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

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 262, &SSTrace_68);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 261, &SSDB_69);
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
              MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70])));
            }
            {
              Var_382 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_382, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
              MR_hl_field(MR_mktag(1), Var_382, 1) = ((MR_Box) (Var_385));
            }
            Var_398 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[74])));
            Var_397 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_398, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
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
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_112, (MR_Integer) 254, &MaybeThreadSafeStr_72);
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
        MR_hl_field(MR_mktag(1), Var_420, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[81])));
      }
      {
        Var_417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_417, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_417, 1) = ((MR_Box) (Var_420));
      }
      Var_436 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[83])));
      Var_435 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_436, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
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
        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 179)), ((MR_Box) (Var_452)), STATE_VARIABLE_OptionTable_0_112, &STATE_VARIABLE_OptionTable_453_453);
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
          MR_hl_field(MR_mktag(1), Var_456, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[92])));
        }
        {
          DumpAliasSpec_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_77, 1) = ((MR_Box) (Var_456));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_77, STATE_VARIABLE_Specs_449_449, &STATE_VARIABLE_Specs_480_480);
        STATE_VARIABLE_OptionTable_453_453 = STATE_VARIABLE_OptionTable_0_112;
      }
    }
    mercury__getopt_io__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_453_453, ((MR_Box) ((MR_Integer) 179)), &STATE_VARIABLE_DumpOptions_482_482);
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
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 179)), ((MR_Box) (Var_517)), STATE_VARIABLE_OptionTable_453_453, STATE_VARIABLE_OptionTable_113);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 546, &C_CompilerTypeStr_79);
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
        MR_hl_field(MR_mktag(1), Var_523, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[95])));
      }
      {
        Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_520, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_520, 1) = ((MR_Box) (Var_523));
      }
      Var_539 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[99])));
      Var_538 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_539, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      CCTpec_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_520, Var_538);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_81, STATE_VARIABLE_Specs_480_480, &STATE_VARIABLE_Specs_556_556);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 547, &CSharp_CompilerTypeStr_82);
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
        MR_hl_field(MR_mktag(1), Var_561, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[102])));
      }
      {
        Var_558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_558, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_558, 1) = ((MR_Box) (Var_561));
      }
      Var_577 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[104])));
      Var_576 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_577, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      CSCSpec_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_558, Var_576);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_84, STATE_VARIABLE_Specs_556_556, &STATE_VARIABLE_Specs_592_592);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 441, &ReuseConstraintStr_85);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 442, &ReuseConstraintArgNum_86);
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
        MR_hl_field(MR_mktag(1), Var_598, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[107])));
      }
      {
        Var_595 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_595, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_595, 1) = ((MR_Box) (Var_598));
      }
      Var_611 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109])));
      Var_610 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_611, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      ReuseConstrSpec_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_595, Var_610);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_88, STATE_VARIABLE_Specs_592_592, &STATE_VARIABLE_Specs_624_624);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 710, &FeedbackFile_89);
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
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 687, &HostEnvTypeStr_95);
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
        MR_hl_field(MR_mktag(1), Var_636, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[112])));
      }
      {
        Var_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_633, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_633, 1) = ((MR_Box) (Var_636));
      }
      Var_649 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[116])));
      Var_648 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_649, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      HostEnvSpec_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_633, Var_648);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_97, STATE_VARIABLE_Specs_629_629, &STATE_VARIABLE_Specs_666_666);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 688, &SystemEnvTypeStr_98);
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
        MR_hl_field(MR_mktag(1), Var_671, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[119])));
      }
      {
        Var_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_668, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_668, 1) = ((MR_Box) (Var_671));
      }
      Var_687 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[116])));
      Var_686 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_687, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
      SystemEnvSpec_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_668, Var_686);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_100, STATE_VARIABLE_Specs_666_666, &STATE_VARIABLE_Specs_704_704);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_113, (MR_Integer) 689, &TargetEnvTypeStr_101);
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
        MR_hl_field(MR_mktag(1), Var_709, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])));
      }
      {
        Var_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_706, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
        MR_hl_field(MR_mktag(1), Var_706, 1) = ((MR_Box) (Var_709));
      }
      Var_725 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[116])));
      Var_724 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_725, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
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
          MR_hl_field(MR_mktag(1), Var_767, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])));
        }
        {
          LECSpec_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LECSpec_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200])));
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
        Var_749 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), BadPieces_111, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])));
        LECSpec_783 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203])), Var_749);
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
