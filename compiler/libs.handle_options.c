/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2017-09-13
** configured for x86_64-pc-linux-gnu.
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2140__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1559);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2138__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1553);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2147__1_1_f_0(
  MR_String LambdaHeadVar__1_1548);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2146__1_1_f_0(
  MR_String LambdaHeadVar__1_1543);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2116__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1530);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2112__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1524);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2094__2_2_p_0(
  MR_Word HeadVar__1_1517,
  MR_String HeadVar__2_1666);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2094__1_2_p_0(
  MR_String HeadVar__1_1518,
  MR_String HeadVar__2_1668);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2076__1_3_f_0(
  MR_String TargetArch_143,
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1505);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2040__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1486);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2030__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1476);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2017__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1459);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1997__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1444);

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1);

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

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
  MR_Word STATE_VARIABLE_Specs_0_213,
  MR_Word * STATE_VARIABLE_Specs_214,
  MR_Word * STATE_VARIABLE_Globals_215);

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
  MR_Word STATE_VARIABLE_Globals_0_12,
  MR_Word * STATE_VARIABLE_Globals_13);

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_118,
  MR_Word * STATE_VARIABLE_OptionTable_119,
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
  MR_Word * STATE_VARIABLE_Specs_120);

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


static /* final */ const MR_Box libs__handle_options_scalar_common_1[247][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[2][4];


/* sealed */ struct libs__handle_options__vector_common_type_2_0_s {
  const MR_String libs__handle_options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[20];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[247][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2017 The Mercury team\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: only one of the following options"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 84 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type microsoft"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--host-env-type posix"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[132])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which disables tags."))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits 0"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Using"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is either unspecified or invalid."))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the value of the"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[163]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[164])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[174])))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[189]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[188])))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[190])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[193])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[196])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[200]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[199])))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[207])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[218])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[219])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[237]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[241]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 243 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 244 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 245 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 246 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[9][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[10][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_5[1])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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


static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[20] = {
  /* row 0 */   {     (MR_String) "abcdEfgilmnprstuvzBCDIMPRSTUZ" },
  /* row 1 */   {     (MR_String) "abcdEfgilmnprstuvzBCMPTZ" },
  /* row 2 */   {     (MR_String) "abcdEfgilmnprstuvzBCDMPT" },
  /* row 3 */   {     (MR_String) "bdfgilmnprstuvzP" },
  /* row 4 */   {     (MR_String) "dfnprsu" },
  /* row 5 */   {     (MR_String) "cdinpGDRS" },
  /* row 6 */   {     (MR_String) "divM" },
  /* row 7 */   {     (MR_String) "agiuvzD" },
  /* row 8 */   {     (MR_String) "ilv" },
  /* row 9 */   {     (MR_String) "bcdglmnstvz" },
  /* row 10 */   {     (MR_String) "bdgvP" },
  /* row 11 */   {     (MR_String) "bcdfgilmnprstvzP" },
  /* row 12 */   {     (MR_String) "bcdglmnpruvP" },
  /* row 13 */   {     (MR_String) "cP" },
  /* row 14 */   {     (MR_String) "din" },
  /* row 15 */   {     (MR_String) "vxX" },
  /* row 16 */   {     (MR_String) "gvCP" },
  /* row 17 */   {     (MR_String) "bcdglmnstuvz" },
  /* row 18 */   {     (MR_String) "ltuCIU" },
  /* row 19 */   {     (MR_String) "npBis" },
};


#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.handle_options.mh"
#include "mdbcomp.rtti_access.mh"
#line 2454 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2454 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2454 "handle_options.m"
{
#line 2454 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0
  }
};

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2140__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1559)
{
  {
    MR_String LambdaHeadVar__2_1560;
    MR_String Var_1561;
    MR_String Var_1562;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1562;

    conv1_Var_1562 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1559)));
    Var_1562 = ((MR_String) conv1_Var_1562);
    Var_1561 = mercury__dir__f_slash_2_f_0(Var_1562, (MR_String) "Mercury");
    LambdaHeadVar__2_1560 = mercury__dir__f_slash_2_f_0(Var_1561, (MR_String) "hrls");
    return LambdaHeadVar__2_1560;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2138__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1553)
{
  {
    MR_String LambdaHeadVar__2_1554;
    MR_String Var_1555;
    MR_String Var_1556;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1556;

    conv1_Var_1556 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1553)));
    Var_1556 = ((MR_String) conv1_Var_1556);
    Var_1555 = mercury__dir__f_slash_2_f_0(Var_1556, (MR_String) "Mercury");
    LambdaHeadVar__2_1554 = mercury__dir__f_slash_2_f_0(Var_1555, (MR_String) "mihs");
    return LambdaHeadVar__2_1554;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2147__1_1_f_0(
  MR_String LambdaHeadVar__1_1548)
{
  {
    MR_String LambdaHeadVar__2_1549;
    MR_String Var_1550;

    Var_1550 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1548, (MR_String) "Mercury");
    LambdaHeadVar__2_1549 = mercury__dir__f_slash_2_f_0(Var_1550, (MR_String) "hrls");
    return LambdaHeadVar__2_1549;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2146__1_1_f_0(
  MR_String LambdaHeadVar__1_1543)
{
  {
    MR_String LambdaHeadVar__2_1544;
    MR_String Var_1545;

    Var_1545 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1543, (MR_String) "Mercury");
    LambdaHeadVar__2_1544 = mercury__dir__f_slash_2_f_0(Var_1545, (MR_String) "mihs");
    return LambdaHeadVar__2_1544;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2116__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1530)
{
  {
    MR_String LambdaHeadVar__2_1531;
    MR_String Var_1532;
    MR_String Var_1533;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1533;

    conv1_Var_1533 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1530)));
    Var_1533 = ((MR_String) conv1_Var_1533);
    Var_1532 = mercury__dir__f_slash_2_f_0(Var_1533, (MR_String) "Mercury");
    LambdaHeadVar__2_1531 = mercury__dir__f_slash_2_f_0(Var_1532, (MR_String) "inits");
    return LambdaHeadVar__2_1531;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2112__1_2_f_0(
  MR_Word ToGradeSubdir_178,
  MR_String LambdaHeadVar__1_1524)
{
  {
    MR_String LambdaHeadVar__2_1525;
    MR_String Var_1526;
    MR_String Var_1527;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box conv1_Var_1527;

    conv1_Var_1527 = func_0(((MR_Box) ToGradeSubdir_178), ((MR_Box) (LambdaHeadVar__1_1524)));
    Var_1527 = ((MR_String) conv1_Var_1527);
    Var_1526 = mercury__dir__f_slash_2_f_0(Var_1527, (MR_String) "Mercury");
    LambdaHeadVar__2_1525 = mercury__dir__f_slash_2_f_0(Var_1526, (MR_String) "lib");
    return LambdaHeadVar__2_1525;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2094__2_2_p_0(
  MR_Word HeadVar__1_1517,
  MR_String HeadVar__2_1666)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, HeadVar__1_1517, ((MR_Box) (HeadVar__2_1666)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2094__1_2_p_0(
  MR_String HeadVar__1_1518,
  MR_String HeadVar__2_1668)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1518, HeadVar__2_1668) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2076__1_3_f_0(
  MR_String TargetArch_143,
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1505)
{
  {
    MR_String LambdaHeadVar__2_1506;
    MR_String Var_1507;
    MR_String Var_1508;

    Var_1508 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1505, (MR_String) "Mercury");
    Var_1507 = mercury__dir__f_slash_2_f_0(Var_1508, GradeString_158);
    LambdaHeadVar__2_1506 = mercury__dir__f_slash_2_f_0(Var_1507, TargetArch_143);
    return LambdaHeadVar__2_1506;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2040__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1486)
{
  {
    MR_String LambdaHeadVar__2_1487;
    MR_String Var_1488;

    Var_1488 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1486, (MR_String) "modules");
    LambdaHeadVar__2_1487 = mercury__dir__f_slash_2_f_0(Var_1488, GradeString_158);
    return LambdaHeadVar__2_1487;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2030__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1476)
{
  {
    MR_String LambdaHeadVar__2_1477;
    MR_String Var_1478;

    Var_1478 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_158);
    LambdaHeadVar__2_1477 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_1476, Var_1478);
    return LambdaHeadVar__2_1477;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2017__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1459)
{
  {
    MR_String LambdaHeadVar__2_1460;
    MR_String Var_1461;
    MR_String Var_1462;

    Var_1462 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1459, (MR_String) "lib");
    Var_1461 = mercury__dir__f_slash_2_f_0(Var_1462, GradeString_158);
    LambdaHeadVar__2_1460 = mercury__dir__f_slash_2_f_0(Var_1461, (MR_String) "inc");
    return LambdaHeadVar__2_1460;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1997__1_2_f_0(
  MR_String GradeString_158,
  MR_String LambdaHeadVar__1_1444)
{
  {
    MR_String LambdaHeadVar__2_1445;
    MR_String Var_1446;

    Var_1446 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_1444, (MR_String) "lib");
    LambdaHeadVar__2_1445 = mercury__dir__f_slash_2_f_0(Var_1446, GradeString_158);
    return LambdaHeadVar__2_1445;
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
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[246])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    mercury__io__write_strings_3_p_0(Var_8);
    mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2017 The Mercury team\n");
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
          mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4]));
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
    MR_Integer _NumWarnings_9;
    MR_Integer _NumErrors_10;

    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_8);
    mercury__io__write_string_3_p_0(ProgName_8);
    mercury__io__write_string_3_p_0((MR_String) ":");
    mercury__io__nl_2_p_0();
    parse_tree__error_util__write_error_specs_8_p_0(Specs_6, Globals_5, (MR_Integer) 0, &_NumWarnings_9, (MR_Integer) 0, &_NumErrors_10);
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
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Fullarch_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Version_4));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv4_HeadVar__4_4);
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
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) env_ptr_arg;

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

    succeeded = libs__options__long_option_2_p_0(((MR_String) wrapper_arg_1), &conv1_HeadVar__2_2);
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

    mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[1]), Args0_6, OptionArgs_7, Args_8, &Var_10);
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

    conv0_HeadVar__3_3 = libs__op_mode__op_mode_to_option_string_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
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
  if (((MR_tag((MR_Word) MaybeOptionTable0_6)) == (MR_mktag((MR_Integer) 1))))
  {
    MR_String ErrorMessage_10 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptionTable0_6, (MR_Integer) 0)));
    MR_Word OptionTablePieces_11;
    MR_Word OptionTableMsg_12;
    MR_Word OptionTableSpec_13;
    MR_Word Var_68;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_78;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;

    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ErrorMessage_10));
    }
    {
      OptionTablePieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(1), OptionTablePieces_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (OptionTablePieces_11));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      OptionTableMsg_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), OptionTableMsg_12, 3) = ((MR_Box) (Var_73));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (OptionTableMsg_12));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      OptionTableSpec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), OptionTableSpec_13, 2) = ((MR_Box) (Var_78));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_41 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OptionTableSpec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_92, &Var_93, &Var_94, Globals_8);
  }
  else
  {
    MR_Word OptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeOptionTable0_6, (MR_Integer) 0)));
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
    if ((OtherOpModes_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_64_64 = STATE_VARIABLE_Specs_44_44;
    else
    {
      MR_Word TypeCtorInfo_87_87;
      MR_Word OpModeStrs_37;
      MR_Word OpModePieces_38;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (OptionTable_15));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (OpMode_33));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (OtherOpModes_34));
      }
      OpModeStrs_37 = mercury__list__map_2_f_0((MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_46, Var_47);
      TypeCtorInfo_87_87 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      Var_56 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(OpModeStrs_37);
      Var_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, Var_56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      OpModePieces_38 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_87_87, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[8]), Var_55);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), OpModePieces_38, STATE_VARIABLE_Specs_44_44, &STATE_VARIABLE_Specs_64_64);
    }
    if ((STATE_VARIABLE_Specs_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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

    succeeded = libs__options__special_handler_4_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3), &conv4_HeadVar__4_4);
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
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s * env_ptr = (struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s *) env_ptr_arg;

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

    succeeded = libs__options__long_option_2_p_0(((MR_String) wrapper_arg_1), &conv1_HeadVar__2_2);
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

    mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_8[0]), Args0_8, OptionArgs_9, Args_10, &Result_15);
    libs__handle_options__convert_option_table_result_to_globals_5_p_0(Result_15, Specs_11, &STATE_VARIABLE_Globals_38_38);
    if ((*Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word OpMode_18;
      MR_Word Smart_19;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;

      libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_38_38, &OpMode_18);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 126, &Smart_19);
      succeeded = (Smart_19 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) OpMode_18)) == (MR_mktag((MR_Integer) 3)));
        if (succeeded)
        {
          Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_18, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0)));
              succeeded = (Var_43 == (MR_Integer) 2);
            }
          }
        }
      }
      if (succeeded)
      {
        libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", STATE_VARIABLE_Globals_38_38, STATE_VARIABLE_Globals_20);
      }
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

    libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &Var_6, &Var_7, &Var_8, DefaultGlobals_4);
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
    MR_String conv10_LambdaHeadVar__2_1560;

    conv10_LambdaHeadVar__2_1560 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2140__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_1560));
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
    MR_String conv9_LambdaHeadVar__2_1554;

    conv9_LambdaHeadVar__2_1554 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2138__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_1554));
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
    MR_String conv8_LambdaHeadVar__2_1549;

    conv8_LambdaHeadVar__2_1549 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2147__1_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_1549));
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
    MR_String conv7_LambdaHeadVar__2_1544;

    conv7_LambdaHeadVar__2_1544 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2146__1_1_f_0(((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_1544));
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
    MR_String conv6_LambdaHeadVar__2_1531;

    conv6_LambdaHeadVar__2_1531 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2116__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_1531));
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
    MR_String conv5_LambdaHeadVar__2_1525;

    conv5_LambdaHeadVar__2_1525 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2112__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_1525));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2094__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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

    succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2094__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
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
    MR_String conv4_LambdaHeadVar__2_1506;

    conv4_LambdaHeadVar__2_1506 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2076__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_1506));
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
    MR_String conv3_LambdaHeadVar__2_1487;

    conv3_LambdaHeadVar__2_1487 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2040__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_1487));
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
    MR_String conv2_LambdaHeadVar__2_1477;

    conv2_LambdaHeadVar__2_1477 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2030__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_1477));
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
    MR_String conv1_LambdaHeadVar__2_1460;

    conv1_LambdaHeadVar__2_1460 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2017__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_1460));
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
    MR_String conv0_LambdaHeadVar__2_1445;

    conv0_LambdaHeadVar__2_1445 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1997__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_1445));
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
  MR_Word STATE_VARIABLE_Specs_0_213,
  MR_Word * STATE_VARIABLE_Specs_214,
  MR_Word * STATE_VARIABLE_Globals_215)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_1662_1662 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_String InstallCmd_47;
    MR_Word FileInstallCmd_48;
    MR_String EventSetFileName0_50;
    MR_Word GCIsConservative_53;
    MR_Word PregeneratedDist_54;
    MR_Integer NumTagBits0_55;
    MR_Integer NumTagBits1_56;
    MR_Integer NumTagBits_57;
    MR_Word TagsMethod_59;
    MR_Word GradeSupportsParConj_60;
    MR_Word Parallel_61;
    MR_Word Threadscope_62;
    MR_Word ImplicitParallelism_64;
    MR_Word LibLinkages0_68;
    MR_Word InvokedByMMCMake_71;
    MR_Word TransOpt_72;
    MR_Word InterModOpt_74;
    MR_Word InterModAnalysis_75;
    MR_Word MaybeStandaloneInt_77;
    MR_Word ExtraInitFunctions_78;
    MR_Word Smart_82;
    MR_Word VeryVerbose_83;
    MR_Word Statistics_84;
    MR_Integer DebugLiveness_85;
    MR_Integer DebugModesPredId_89;
    MR_Word DebugUnneededCodePredNames_90;
    MR_Word DebugOptPredIdStrs_93;
    MR_Word DebugOptPredNames_94;
    MR_Word DebugIntermoduleAnalysis_99;
    MR_Word DumpHLDSPredIds_100;
    MR_Word UseTrail_106;
    MR_Word HighLevelCode_107;
    MR_Word UseMinimalModelStackCopy_108;
    MR_Word UseMinimalModelOwnStacks_109;
    MR_Word UseMinimalModel_110;
    MR_Word ProfOptimized_118;
    MR_String ExpComp_119;
    MR_Word TraceOptimized_120;
    MR_Word TraceLevelIsNone_121;
    MR_Word ProfileDeep_123;
    MR_Word RecordTermSizesAsWords_126;
    MR_Word RecordTermSizesAsCells_127;
    MR_Word PutNondetEnvOnHeap_131;
    MR_Word DisablePneg_133;
    MR_Word DisableCut_134;
    MR_Word DumpHLDSStages_135;
    MR_Word DumpTraceStages_136;
    MR_Word ParallelLiveness_137;
    MR_Word ParallelCodeGen_138;
    MR_String TargetArch_143;
    MR_String MercuryLinkage_144;
    MR_Word DefaultRuntimeLibraryDirs_145;
    MR_Word MaybeStdLibDir_146;
    MR_Word MaybeConfDir_152;
    MR_Word ConfigFile_155;
    MR_Word MercuryLibDirs_157;
    MR_String GradeString_158;
    MR_Word UseSearchDirs_172;
    MR_Word UseGradeSubdirs_175;
    MR_Word SearchLibFilesDirs_176;
    MR_Word IntermodDirs2_177;
    MR_Word ToGradeSubdir_178;
    MR_Word LinkLibDirs_187;
    MR_Word InitDirs_190;
    MR_Word UseSubdirs_191;
    MR_Word WarnNonTailRecSelf_201;
    MR_Word WarnNonTailRecMutual_202;
    MR_Word BackendForeignLanguages_208;
    MR_Word CurrentBackendForeignLanguage_209;
    MR_Integer CompareSpec_212;
    MR_Word STATE_VARIABLE_Globals_220_220;
    MR_Word STATE_VARIABLE_Specs_221_221;
    MR_Word STATE_VARIABLE_Globals_227_227;
    MR_Word STATE_VARIABLE_Globals_234_234;
    MR_Word STATE_VARIABLE_Globals_255_255;
    MR_Word STATE_VARIABLE_Specs_286_286;
    MR_Word Var_288;
    MR_Word STATE_VARIABLE_Globals_289_289;
    MR_Word STATE_VARIABLE_Globals_290_290;
    MR_Word STATE_VARIABLE_Specs_308_308;
    MR_Word STATE_VARIABLE_Globals_331_331;
    MR_Word STATE_VARIABLE_Specs_352_352;
    MR_Word Var_355;
    MR_Word STATE_VARIABLE_Globals_356_356;
    MR_Word STATE_VARIABLE_Globals_360_360;
    MR_Word STATE_VARIABLE_Globals_485_485;
    MR_Word STATE_VARIABLE_Globals_490_490;
    MR_Word Var_494;
    MR_Word STATE_VARIABLE_Globals_495_495;
    MR_Word STATE_VARIABLE_Globals_500_500;
    MR_Word Var_504;
    MR_Word STATE_VARIABLE_Globals_505_505;
    MR_Word STATE_VARIABLE_Globals_510_510;
    MR_Word STATE_VARIABLE_Globals_515_515;
    MR_Word STATE_VARIABLE_Globals_520_520;
    MR_Word STATE_VARIABLE_Globals_525_525;
    MR_Word STATE_VARIABLE_Globals_534_534;
    MR_Word STATE_VARIABLE_Globals_539_539;
    MR_Word STATE_VARIABLE_Globals_543_543;
    MR_Word STATE_VARIABLE_Specs_564_564;
    MR_Word STATE_VARIABLE_Specs_585_585;
    MR_Word STATE_VARIABLE_Globals_588_588;
    MR_Word STATE_VARIABLE_Specs_610_610;
    MR_Word STATE_VARIABLE_Globals_614_614;
    MR_Word STATE_VARIABLE_Globals_619_619;
    MR_Word STATE_VARIABLE_Globals_624_624;
    MR_Word STATE_VARIABLE_Globals_629_629;
    MR_Word STATE_VARIABLE_Globals_634_634;
    MR_Word STATE_VARIABLE_Globals_639_639;
    MR_Word STATE_VARIABLE_Globals_644_644;
    MR_Word STATE_VARIABLE_Globals_650_650;
    MR_Word STATE_VARIABLE_Globals_655_655;
    MR_Word STATE_VARIABLE_Globals_660_660;
    MR_Word STATE_VARIABLE_Globals_665_665;
    MR_Word STATE_VARIABLE_Globals_670_670;
    MR_Word STATE_VARIABLE_Globals_674_674;
    MR_Word STATE_VARIABLE_Globals_679_679;
    MR_Word STATE_VARIABLE_Globals_684_684;
    MR_Word STATE_VARIABLE_Globals_690_690;
    MR_Word STATE_VARIABLE_Globals_701_701;
    MR_Word STATE_VARIABLE_Globals_706_706;
    MR_Word STATE_VARIABLE_Globals_712_712;
    MR_Word STATE_VARIABLE_Globals_729_729;
    MR_Word STATE_VARIABLE_Globals_734_734;
    MR_Word STATE_VARIABLE_Globals_739_739;
    MR_Word STATE_VARIABLE_Globals_744_744;
    MR_Word STATE_VARIABLE_Globals_750_750;
    MR_Word STATE_VARIABLE_Globals_755_755;
    MR_Word STATE_VARIABLE_Globals_760_760;
    MR_Word STATE_VARIABLE_Globals_765_765;
    MR_Word STATE_VARIABLE_Globals_773_773;
    MR_Word STATE_VARIABLE_Globals_777_777;
    MR_Word STATE_VARIABLE_Globals_783_783;
    MR_Word STATE_VARIABLE_Globals_788_788;
    MR_Word STATE_VARIABLE_Globals_794_794;
    MR_Word STATE_VARIABLE_Globals_806_806;
    MR_Word STATE_VARIABLE_Globals_810_810;
    MR_Word STATE_VARIABLE_Globals_815_815;
    MR_Word STATE_VARIABLE_Globals_820_820;
    MR_Word STATE_VARIABLE_Globals_825_825;
    MR_Word STATE_VARIABLE_Specs_840_840;
    MR_Word Var_863;
    MR_Word STATE_VARIABLE_Globals_864_864;
    MR_Word STATE_VARIABLE_Specs_909_909;
    MR_Word STATE_VARIABLE_Globals_912_912;
    MR_Word STATE_VARIABLE_Globals_916_916;
    MR_Word STATE_VARIABLE_Globals_921_921;
    MR_Word STATE_VARIABLE_Globals_926_926;
    MR_Word STATE_VARIABLE_Globals_930_930;
    MR_Word STATE_VARIABLE_Globals_934_934;
    MR_Word STATE_VARIABLE_Globals_939_939;
    MR_Word STATE_VARIABLE_Globals_944_944;
    MR_Word STATE_VARIABLE_Globals_949_949;
    MR_Word STATE_VARIABLE_Globals_954_954;
    MR_Word STATE_VARIABLE_Globals_960_960;
    MR_Word STATE_VARIABLE_Globals_965_965;
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
    MR_Word STATE_VARIABLE_Globals_1117_1117;
    MR_Word STATE_VARIABLE_Globals_1122_1122;
    MR_Word STATE_VARIABLE_Specs_1134_1134;
    MR_Word STATE_VARIABLE_Globals_1146_1146;
    MR_Word STATE_VARIABLE_Specs_1156_1156;
    MR_Word STATE_VARIABLE_Globals_1163_1163;
    MR_Word STATE_VARIABLE_Specs_1182_1182;
    MR_Word STATE_VARIABLE_Globals_1186_1186;
    MR_Word STATE_VARIABLE_Globals_1191_1191;
    MR_Word STATE_VARIABLE_Globals_1196_1196;
    MR_Word STATE_VARIABLE_Globals_1201_1201;
    MR_Word STATE_VARIABLE_Globals_1206_1206;
    MR_Word STATE_VARIABLE_Globals_1211_1211;
    MR_Word STATE_VARIABLE_Globals_1216_1216;
    MR_Word STATE_VARIABLE_Globals_1221_1221;
    MR_Word STATE_VARIABLE_Globals_1265_1265;
    MR_Word STATE_VARIABLE_Specs_1283_1283;
    MR_Word STATE_VARIABLE_Globals_1287_1287;
    MR_Word STATE_VARIABLE_Globals_1292_1292;
    MR_Word STATE_VARIABLE_Globals_1297_1297;
    MR_Word STATE_VARIABLE_Globals_1302_1302;
    MR_Word STATE_VARIABLE_Globals_1307_1307;
    MR_Word STATE_VARIABLE_Globals_1312_1312;
    MR_Word STATE_VARIABLE_Globals_1317_1317;
    MR_Word STATE_VARIABLE_Globals_1322_1322;
    MR_Word STATE_VARIABLE_Globals_1327_1327;
    MR_Word STATE_VARIABLE_Globals_1332_1332;
    MR_Word STATE_VARIABLE_Globals_1338_1338;
    MR_Word STATE_VARIABLE_Globals_1342_1342;
    MR_Word STATE_VARIABLE_Globals_1350_1350;
    MR_Word STATE_VARIABLE_Globals_1355_1355;
    MR_Word STATE_VARIABLE_Globals_1360_1360;
    MR_Word STATE_VARIABLE_Globals_1365_1365;
    MR_Word STATE_VARIABLE_Globals_1370_1370;
    MR_Word STATE_VARIABLE_Globals_1375_1375;
    MR_Word STATE_VARIABLE_Globals_1380_1380;
    MR_Word STATE_VARIABLE_Globals_1386_1386;
    MR_Word STATE_VARIABLE_Globals_1391_1391;
    MR_Word STATE_VARIABLE_Globals_1395_1395;
    MR_Word STATE_VARIABLE_Globals_1401_1401;
    MR_Word STATE_VARIABLE_Globals_1416_1416;
    MR_Word STATE_VARIABLE_Globals_1424_1424;
    MR_Word STATE_VARIABLE_Globals_1436_1436;
    MR_Word STATE_VARIABLE_Globals_1493_1493;
    MR_Word STATE_VARIABLE_Globals_1500_1500;
    MR_Word STATE_VARIABLE_Globals_1521_1521;
    MR_Word Var_1537;
    MR_Word STATE_VARIABLE_Globals_1538_1538;
    MR_Word Var_1540;
    MR_Word STATE_VARIABLE_Globals_1541_1541;
    MR_Word STATE_VARIABLE_Globals_1577_1577;
    MR_Word STATE_VARIABLE_Globals_1581_1581;
    MR_Word STATE_VARIABLE_Specs_1605_1605;
    MR_Word STATE_VARIABLE_Globals_1616_1616;
    MR_Word STATE_VARIABLE_Globals_1627_1627;
    MR_Word STATE_VARIABLE_Globals_1636_1636;
    MR_Word STATE_VARIABLE_Globals_1641_1641;
    MR_Word STATE_VARIABLE_Globals_1647_1647;
    MR_String Var_79;
    MR_Word Var_646;
    MR_Word Var_647;
    MR_Word Var_686;
    MR_Word Var_687;
    MR_Word Var_81;
    MR_Word Var_1674;
    MR_Word Var_703;
    MR_Word Var_708;
    MR_Word Var_709;
    MR_String AllDumpOptions_86;
    MR_String Var_769;
    MR_Word Var_1382;
    MR_Word Var_1383;
    MR_String Var_1429;
    MR_Word ToMihsSubdir_192;
    MR_Word ToHrlsSubdir_193;
    MR_Integer Var_1638;

    mercury__getopt_io__lookup_string_option_3_p_0(TypeCtorInfo_1662_1662, OptionTable0_25, ((MR_Box) ((MR_Integer) 640)), &InstallCmd_47);
    succeeded = (strcmp(InstallCmd_47, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String InstallCmdDirOption_49;

      mercury__getopt_io__lookup_string_option_3_p_0(TypeCtorInfo_1662_1662, OptionTable0_25, ((MR_Box) ((MR_Integer) 641)), &InstallCmdDirOption_49);
      {
        FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 0) = ((MR_Box) (InstallCmd_47));
        MR_hl_field(MR_mktag(1), FileInstallCmd_48, 1) = ((MR_Box) (InstallCmdDirOption_49));
      }
    }
    libs__globals__globals_init_21_p_0(OptionTable0_25, OpMode_26, Target_27, GC_Method_28, TagsMethod0_29, TermNorm_30, Term2Norm_31, TraceLevel_32, TraceSuppress_33, SSTraceLevel_34, MaybeThreadSafe_35, C_CompilerType_36, CSharp_CompilerType_37, ReuseStrategy_38, MaybeFeedbackInfo_39, HostEnvType_40, SystemEnvType_41, TargetEnvType_42, FileInstallCmd_48, LimitErrorContextsMap_43, &STATE_VARIABLE_Globals_220_220);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_220_220, Target_27, GC_Method_28, STATE_VARIABLE_Specs_0_213, &STATE_VARIABLE_Specs_221_221);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_220_220, (MR_Integer) 187, &EventSetFileName0_50);
    succeeded = (strcmp(EventSetFileName0_50, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_51;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_51);
      if ((MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_Globals_227_227 = STATE_VARIABLE_Globals_220_220;
      else
      {
        MR_String EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeEventSetFileName_51, (MR_Integer) 0)));
        MR_Word Var_226;

        {
          Var_226 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_226, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_226, 1) = ((MR_Box) (EventSetFileName_52));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 187, Var_226, STATE_VARIABLE_Globals_220_220, &STATE_VARIABLE_Globals_227_227);
      }
    }
    else
      STATE_VARIABLE_Globals_227_227 = STATE_VARIABLE_Globals_220_220;
    GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(GC_Method_28);
    switch (GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_234_234 = STATE_VARIABLE_Globals_227_227;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_229 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          MR_Word STATE_VARIABLE_Globals_230_230;

          libs__globals__set_option_4_p_0((MR_Integer) 311, Var_229, STATE_VARIABLE_Globals_227_227, &STATE_VARIABLE_Globals_230_230);
          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_229, STATE_VARIABLE_Globals_230_230, &STATE_VARIABLE_Globals_234_234);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_234_234, (MR_Integer) 234, &PregeneratedDist_54);
    switch (PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_255_255 = STATE_VARIABLE_Globals_234_234;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_239_239;
          MR_Word STATE_VARIABLE_Globals_243_243;
          MR_Word Var_246;
          MR_Word STATE_VARIABLE_Globals_247_247;
          MR_Word STATE_VARIABLE_Globals_251_251;

          libs__globals__set_option_4_p_0((MR_Integer) 248, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[3]), STATE_VARIABLE_Globals_234_234, &STATE_VARIABLE_Globals_239_239);
          libs__globals__set_option_4_p_0((MR_Integer) 257, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4]), STATE_VARIABLE_Globals_239_239, &STATE_VARIABLE_Globals_243_243);
          Var_246 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          libs__globals__set_option_4_p_0((MR_Integer) 254, Var_246, STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_247_247);
          libs__globals__set_option_4_p_0((MR_Integer) 235, Var_246, STATE_VARIABLE_Globals_247_247, &STATE_VARIABLE_Globals_251_251);
          libs__globals__set_option_4_p_0((MR_Integer) 258, Var_246, STATE_VARIABLE_Globals_251_251, &STATE_VARIABLE_Globals_255_255);
        }
        break;
    }
    switch (TagsMethod0_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_255_255, (MR_Integer) 248, &NumTagBits0_55);
        }
        break;
      case (MR_Integer) 0:
        NumTagBits0_55 = (MR_Integer) 0;
        break;
    }
    succeeded = (TagsMethod0_29 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (NumTagBits0_55 == (MR_Integer) -1);
    if (succeeded)
    {
      libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_255_255, (MR_Integer) 253, &NumTagBits1_56);
    }
    else
      NumTagBits1_56 = NumTagBits0_55;
    succeeded = (NumTagBits1_56 < (MR_Integer) 0);
    if (succeeded)
    {
      NumTagBits_57 = (MR_Integer) 0;
      libs__compiler_util__add_warning_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[152]), STATE_VARIABLE_Specs_221_221, &STATE_VARIABLE_Specs_286_286);
    }
    else
    {
      NumTagBits_57 = NumTagBits1_56;
      STATE_VARIABLE_Specs_286_286 = STATE_VARIABLE_Specs_221_221;
    }
    {
      Var_288 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_288, 0) = ((MR_Box) (NumTagBits_57));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 248, Var_288, STATE_VARIABLE_Globals_255_255, &STATE_VARIABLE_Globals_289_289);
    succeeded = (NumTagBits_57 == (MR_Integer) 0);
    if (succeeded)
    {
      TagsMethod_59 = (MR_Integer) 0;
      libs__globals__set_tags_method_3_p_0(TagsMethod_59, STATE_VARIABLE_Globals_289_289, &STATE_VARIABLE_Globals_290_290);
    }
    else
    {
      TagsMethod_59 = TagsMethod0_29;
      STATE_VARIABLE_Globals_290_290 = STATE_VARIABLE_Globals_289_289;
    }
    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_290_290, &GradeSupportsParConj_60);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_290_290, (MR_Integer) 227, &Parallel_61);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_290_290, (MR_Integer) 228, &Threadscope_62);
    succeeded = (GradeSupportsParConj_60 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_62 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[160]), STATE_VARIABLE_Specs_286_286, &STATE_VARIABLE_Specs_308_308);
    }
    else
      STATE_VARIABLE_Specs_308_308 = STATE_VARIABLE_Specs_286_286;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_290_290, (MR_Integer) 679, &ImplicitParallelism_64);
    switch (ImplicitParallelism_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_352_352 = STATE_VARIABLE_Specs_308_308;
          STATE_VARIABLE_Globals_331_331 = STATE_VARIABLE_Globals_290_290;
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
                  STATE_VARIABLE_Specs_352_352 = STATE_VARIABLE_Specs_308_308;
                  break;
                case (MR_Integer) 1:
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169]), STATE_VARIABLE_Specs_308_308, &STATE_VARIABLE_Specs_352_352);
                  }
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 679, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]), STATE_VARIABLE_Globals_290_290, &STATE_VARIABLE_Globals_331_331);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_65;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_290_290, (MR_Integer) 680, &FeedbackFile_65);
              succeeded = (strcmp(FeedbackFile_65, (MR_String) "") == 0);
              if (succeeded)
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[175]), STATE_VARIABLE_Specs_308_308, &STATE_VARIABLE_Specs_352_352);
              }
              else
                STATE_VARIABLE_Specs_352_352 = STATE_VARIABLE_Specs_308_308;
              STATE_VARIABLE_Globals_331_331 = STATE_VARIABLE_Globals_290_290;
            }
            break;
        }
        break;
    }
    Var_355 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 679, (MR_Integer) 209, Var_355, STATE_VARIABLE_Globals_331_331, &STATE_VARIABLE_Globals_356_356);
    switch (GradeSupportsParConj_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 681, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]), STATE_VARIABLE_Globals_356_356, &STATE_VARIABLE_Globals_360_360);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_360_360 = STATE_VARIABLE_Globals_356_356;
        break;
    }
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 268, Var_355, STATE_VARIABLE_Globals_360_360, &STATE_VARIABLE_Globals_485_485);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_430_430;
          MR_Word STATE_VARIABLE_Globals_433_433;
          MR_Word Var_436;
          MR_Word STATE_VARIABLE_Globals_437_437;
          MR_Word STATE_VARIABLE_Globals_441_441;
          MR_Word STATE_VARIABLE_Globals_445_445;
          MR_Word STATE_VARIABLE_Globals_449_449;
          MR_Word STATE_VARIABLE_Globals_453_453;
          MR_Word STATE_VARIABLE_Globals_457_457;
          MR_Word STATE_VARIABLE_Globals_461_461;
          MR_Word STATE_VARIABLE_Globals_465_465;
          MR_Word STATE_VARIABLE_Globals_469_469;
          MR_Word STATE_VARIABLE_Globals_473_473;
          MR_Word STATE_VARIABLE_Globals_477_477;
          MR_Word STATE_VARIABLE_Globals_481_481;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_360_360, &STATE_VARIABLE_Globals_430_430);
          libs__globals__set_option_4_p_0((MR_Integer) 226, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226]), STATE_VARIABLE_Globals_430_430, &STATE_VARIABLE_Globals_433_433);
          Var_436 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_436, STATE_VARIABLE_Globals_433_433, &STATE_VARIABLE_Globals_437_437);
          libs__globals__set_option_4_p_0((MR_Integer) 311, Var_436, STATE_VARIABLE_Globals_437_437, &STATE_VARIABLE_Globals_441_441);
          libs__globals__set_option_4_p_0((MR_Integer) 264, Var_355, STATE_VARIABLE_Globals_441_441, &STATE_VARIABLE_Globals_445_445);
          libs__globals__set_option_4_p_0((MR_Integer) 265, Var_355, STATE_VARIABLE_Globals_445_445, &STATE_VARIABLE_Globals_449_449);
          libs__globals__set_option_4_p_0((MR_Integer) 254, Var_355, STATE_VARIABLE_Globals_449_449, &STATE_VARIABLE_Globals_453_453);
          libs__globals__set_option_4_p_0((MR_Integer) 267, Var_355, STATE_VARIABLE_Globals_453_453, &STATE_VARIABLE_Globals_457_457);
          libs__globals__set_option_4_p_0((MR_Integer) 266, Var_355, STATE_VARIABLE_Globals_457_457, &STATE_VARIABLE_Globals_461_461);
          libs__globals__set_option_4_p_0((MR_Integer) 248, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5]), STATE_VARIABLE_Globals_461_461, &STATE_VARIABLE_Globals_465_465);
          libs__globals__set_option_4_p_0((MR_Integer) 256, Var_436, STATE_VARIABLE_Globals_465_465, &STATE_VARIABLE_Globals_469_469);
          libs__globals__set_option_4_p_0((MR_Integer) 269, Var_355, STATE_VARIABLE_Globals_469_469, &STATE_VARIABLE_Globals_473_473);
          libs__globals__set_option_4_p_0((MR_Integer) 278, Var_355, STATE_VARIABLE_Globals_473_473, &STATE_VARIABLE_Globals_477_477);
          libs__globals__set_option_4_p_0((MR_Integer) 656, Var_436, STATE_VARIABLE_Globals_477_477, &STATE_VARIABLE_Globals_481_481);
          switch (Target_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 580, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227]), STATE_VARIABLE_Globals_481_481, &STATE_VARIABLE_Globals_485_485);
              }
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_Globals_485_485 = STATE_VARIABLE_Globals_481_481;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_368_368;
          MR_Word STATE_VARIABLE_Globals_371_371;
          MR_Word STATE_VARIABLE_Globals_375_375;
          MR_Word Var_378;
          MR_Word STATE_VARIABLE_Globals_379_379;
          MR_Word STATE_VARIABLE_Globals_383_383;
          MR_Word STATE_VARIABLE_Globals_387_387;
          MR_Word STATE_VARIABLE_Globals_391_391;
          MR_Word STATE_VARIABLE_Globals_395_395;
          MR_Word STATE_VARIABLE_Globals_399_399;
          MR_Word STATE_VARIABLE_Globals_403_403;
          MR_Word STATE_VARIABLE_Globals_407_407;
          MR_Word STATE_VARIABLE_Globals_411_411;
          MR_Word STATE_VARIABLE_Globals_415_415;
          MR_Word STATE_VARIABLE_Globals_419_419;
          MR_Word STATE_VARIABLE_Globals_423_423;

          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_360_360, &STATE_VARIABLE_Globals_368_368);
          libs__globals__set_option_4_p_0((MR_Integer) 226, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226]), STATE_VARIABLE_Globals_368_368, &STATE_VARIABLE_Globals_371_371);
          libs__globals__set_option_4_p_0((MR_Integer) 254, Var_355, STATE_VARIABLE_Globals_371_371, &STATE_VARIABLE_Globals_375_375);
          Var_378 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_378, STATE_VARIABLE_Globals_375_375, &STATE_VARIABLE_Globals_379_379);
          libs__globals__set_option_4_p_0((MR_Integer) 311, Var_378, STATE_VARIABLE_Globals_379_379, &STATE_VARIABLE_Globals_383_383);
          libs__globals__set_option_4_p_0((MR_Integer) 281, Var_355, STATE_VARIABLE_Globals_383_383, &STATE_VARIABLE_Globals_387_387);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_378, STATE_VARIABLE_Globals_387_387, &STATE_VARIABLE_Globals_391_391);
          libs__globals__set_option_4_p_0((MR_Integer) 279, Var_355, STATE_VARIABLE_Globals_391_391, &STATE_VARIABLE_Globals_395_395);
          libs__globals__set_option_4_p_0((MR_Integer) 280, Var_355, STATE_VARIABLE_Globals_395_395, &STATE_VARIABLE_Globals_399_399);
          libs__globals__set_option_4_p_0((MR_Integer) 656, Var_378, STATE_VARIABLE_Globals_399_399, &STATE_VARIABLE_Globals_403_403);
          libs__globals__set_option_4_p_0((MR_Integer) 464, Var_378, STATE_VARIABLE_Globals_403_403, &STATE_VARIABLE_Globals_407_407);
          libs__globals__set_option_4_p_0((MR_Integer) 260, Var_378, STATE_VARIABLE_Globals_407_407, &STATE_VARIABLE_Globals_411_411);
          libs__globals__set_option_4_p_0((MR_Integer) 261, Var_378, STATE_VARIABLE_Globals_411_411, &STATE_VARIABLE_Globals_415_415);
          libs__globals__set_option_4_p_0((MR_Integer) 262, Var_378, STATE_VARIABLE_Globals_415_415, &STATE_VARIABLE_Globals_419_419);
          libs__globals__set_option_4_p_0((MR_Integer) 264, Var_378, STATE_VARIABLE_Globals_419_419, &STATE_VARIABLE_Globals_423_423);
          libs__globals__set_option_4_p_0((MR_Integer) 265, Var_378, STATE_VARIABLE_Globals_423_423, &STATE_VARIABLE_Globals_485_485);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 229, Var_355, STATE_VARIABLE_Globals_485_485, &STATE_VARIABLE_Globals_490_490);
    Var_494 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 111, (MR_Integer) 563, Var_494, STATE_VARIABLE_Globals_490_490, &STATE_VARIABLE_Globals_495_495);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 111, (MR_Integer) 565, Var_494, STATE_VARIABLE_Globals_495_495, &STATE_VARIABLE_Globals_500_500);
    Var_504 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 260, Var_504, STATE_VARIABLE_Globals_500_500, &STATE_VARIABLE_Globals_505_505);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 261, Var_504, STATE_VARIABLE_Globals_505_505, &STATE_VARIABLE_Globals_510_510);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 262, Var_504, STATE_VARIABLE_Globals_510_510, &STATE_VARIABLE_Globals_515_515);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 472, (MR_Integer) 464, Var_504, STATE_VARIABLE_Globals_515_515, &STATE_VARIABLE_Globals_520_520);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_520_520, (MR_Integer) 646, &LibLinkages0_68);
    if ((LibLinkages0_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      libs__globals__set_option_4_p_0((MR_Integer) 646, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[178]), STATE_VARIABLE_Globals_520_520, &STATE_VARIABLE_Globals_525_525);
    }
    else
      STATE_VARIABLE_Globals_525_525 = STATE_VARIABLE_Globals_520_520;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_525_525, (MR_Integer) 633, &InvokedByMMCMake_71);
    succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (!(succeeded))
      succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 651, Var_355, STATE_VARIABLE_Globals_525_525, &STATE_VARIABLE_Globals_534_534);
    }
    else
      STATE_VARIABLE_Globals_534_534 = STATE_VARIABLE_Globals_525_525;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 633, (MR_Integer) 128, Var_504, STATE_VARIABLE_Globals_534_534, &STATE_VARIABLE_Globals_539_539);
    succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      STATE_VARIABLE_Globals_543_543 = STATE_VARIABLE_Globals_539_539;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 656, Var_504, STATE_VARIABLE_Globals_539_539, &STATE_VARIABLE_Globals_543_543);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_543_543, (MR_Integer) 336, &TransOpt_72);
    switch (TransOpt_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_564_564 = STATE_VARIABLE_Specs_352_352;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_71 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185]), STATE_VARIABLE_Specs_352_352, &STATE_VARIABLE_Specs_564_564);
          }
          else
            STATE_VARIABLE_Specs_564_564 = STATE_VARIABLE_Specs_352_352;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_543_543, (MR_Integer) 332, &InterModOpt_74);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_543_543, (MR_Integer) 337, &InterModAnalysis_75);
    succeeded = (InterModOpt_74 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_75 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191]), STATE_VARIABLE_Specs_564_564, &STATE_VARIABLE_Specs_585_585);
    }
    else
      STATE_VARIABLE_Specs_585_585 = STATE_VARIABLE_Specs_564_564;
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      STATE_VARIABLE_Globals_588_588 = STATE_VARIABLE_Globals_543_543;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 637, Var_504, STATE_VARIABLE_Globals_543_543, &STATE_VARIABLE_Globals_588_588);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_588_588, (MR_Integer) 105, &MaybeStandaloneInt_77);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_588_588, (MR_Integer) 573, &ExtraInitFunctions_78);
    succeeded = ((MR_tag((MR_Word) MaybeStandaloneInt_77)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_79 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeStandaloneInt_77, (MR_Integer) 0)));
      succeeded = (ExtraInitFunctions_78 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197]), STATE_VARIABLE_Specs_585_585, &STATE_VARIABLE_Specs_610_610);
    }
    else
      STATE_VARIABLE_Specs_610_610 = STATE_VARIABLE_Specs_585_585;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 417, (MR_Integer) 415, Var_355, STATE_VARIABLE_Globals_588_588, &STATE_VARIABLE_Globals_614_614);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 425, (MR_Integer) 424, Var_355, STATE_VARIABLE_Globals_614_614, &STATE_VARIABLE_Globals_619_619);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 424, (MR_Integer) 423, Var_355, STATE_VARIABLE_Globals_619_619, &STATE_VARIABLE_Globals_624_624);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 424, (MR_Integer) 15, Var_355, STATE_VARIABLE_Globals_624_624, &STATE_VARIABLE_Globals_629_629);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 432, (MR_Integer) 431, Var_355, STATE_VARIABLE_Globals_629_629, &STATE_VARIABLE_Globals_634_634);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 431, (MR_Integer) 430, Var_355, STATE_VARIABLE_Globals_634_634, &STATE_VARIABLE_Globals_639_639);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 431, (MR_Integer) 15, Var_355, STATE_VARIABLE_Globals_639_639, &STATE_VARIABLE_Globals_644_644);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_646 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_646)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_647 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_646, (MR_Integer) 0)));
        succeeded = (Var_647 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 336, Var_355, STATE_VARIABLE_Globals_644_644, &STATE_VARIABLE_Globals_650_650);
    }
    else
      STATE_VARIABLE_Globals_650_650 = STATE_VARIABLE_Globals_644_644;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 336, (MR_Integer) 332, Var_355, STATE_VARIABLE_Globals_650_650, &STATE_VARIABLE_Globals_655_655);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 335, (MR_Integer) 334, Var_355, STATE_VARIABLE_Globals_655_655, &STATE_VARIABLE_Globals_660_660);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 332, (MR_Integer) 334, Var_504, STATE_VARIABLE_Globals_660_660, &STATE_VARIABLE_Globals_665_665);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 336, (MR_Integer) 335, Var_504, STATE_VARIABLE_Globals_665_665, &STATE_VARIABLE_Globals_670_670);
    libs__globals__set_option_4_p_0((MR_Integer) 334, Var_504, STATE_VARIABLE_Globals_670_670, &STATE_VARIABLE_Globals_674_674);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 126, (MR_Integer) 127, Var_355, STATE_VARIABLE_Globals_674_674, &STATE_VARIABLE_Globals_679_679);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 60, (MR_Integer) 59, Var_355, STATE_VARIABLE_Globals_679_679, &STATE_VARIABLE_Globals_684_684);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_686 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_686)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_687 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_686, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) Var_687)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_687, (MR_Integer) 0)));
      }
    }
    if (succeeded)
      STATE_VARIABLE_Globals_690_690 = STATE_VARIABLE_Globals_684_684;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 126, Var_504, STATE_VARIABLE_Globals_684_684, &STATE_VARIABLE_Globals_690_690);
    }
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_1674 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      switch (MR_tag((MR_Word) Var_1674)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          switch (MR_unmkbody(Var_1674)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 3:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 4:
              succeeded = MR_TRUE;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_1675 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_1674, (MR_Integer) 0)));

            if ((Var_1675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              succeeded = MR_TRUE;
            else
            if ((Var_1675 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
          }
          break;
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 148, Var_504, STATE_VARIABLE_Globals_690_690, &STATE_VARIABLE_Globals_701_701);
    }
    else
      STATE_VARIABLE_Globals_701_701 = STATE_VARIABLE_Globals_690_690;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_703 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = (Var_703 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 127, Var_504, STATE_VARIABLE_Globals_701_701, &STATE_VARIABLE_Globals_706_706);
    }
    else
      STATE_VARIABLE_Globals_706_706 = STATE_VARIABLE_Globals_701_701;
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_708 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_708)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_709 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_708, (MR_Integer) 0)));
        succeeded = (Var_709 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 332, Var_504, STATE_VARIABLE_Globals_706_706, &STATE_VARIABLE_Globals_712_712);
    }
    else
      STATE_VARIABLE_Globals_712_712 = STATE_VARIABLE_Globals_706_706;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_712_712, (MR_Integer) 126, &Smart_82);
    switch (Smart_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_729_729 = STATE_VARIABLE_Globals_712_712;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_718_718;
          MR_Word STATE_VARIABLE_Globals_723_723;
          MR_Word Var_725;
          MR_Word Var_726;
          MR_Word Var_727;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_712_712, (MR_Integer) 332, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", STATE_VARIABLE_Globals_712_712, &STATE_VARIABLE_Globals_718_718);
          }
          else
            STATE_VARIABLE_Globals_718_718 = STATE_VARIABLE_Globals_712_712;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_718_718, (MR_Integer) 334, (MR_Integer) 1);
          if (succeeded)
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", STATE_VARIABLE_Globals_718_718, &STATE_VARIABLE_Globals_723_723);
          }
          else
            STATE_VARIABLE_Globals_723_723 = STATE_VARIABLE_Globals_718_718;
          succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
          if (succeeded)
          {
            Var_725 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
            succeeded = ((MR_tag((MR_Word) Var_725)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Var_726 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_725, (MR_Integer) 0)));
              succeeded = ((MR_tag((MR_Word) Var_726)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_727 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_726, (MR_Integer) 0)));
                succeeded = (Var_727 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            STATE_VARIABLE_Globals_729_729 = STATE_VARIABLE_Globals_723_723;
          else
          {
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_723_723, &STATE_VARIABLE_Globals_729_729);
          }
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 652, (MR_Integer) 651, Var_355, STATE_VARIABLE_Globals_729_729, &STATE_VARIABLE_Globals_734_734);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 57, (MR_Integer) 56, Var_355, STATE_VARIABLE_Globals_734_734, &STATE_VARIABLE_Globals_739_739);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 56, (MR_Integer) 62, Var_355, STATE_VARIABLE_Globals_739_739, &STATE_VARIABLE_Globals_744_744);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_744_744, (MR_Integer) 57, &VeryVerbose_83);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_744_744, (MR_Integer) 66, &Statistics_84);
    succeeded = (VeryVerbose_83 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_84 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 67, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), STATE_VARIABLE_Globals_744_744, &STATE_VARIABLE_Globals_750_750);
    }
    else
      STATE_VARIABLE_Globals_750_750 = STATE_VARIABLE_Globals_744_744;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 73, (MR_Integer) 71, Var_355, STATE_VARIABLE_Globals_750_750, &STATE_VARIABLE_Globals_755_755);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 74, (MR_Integer) 71, Var_355, STATE_VARIABLE_Globals_755_755, &STATE_VARIABLE_Globals_760_760);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 72, (MR_Integer) 71, Var_355, STATE_VARIABLE_Globals_760_760, &STATE_VARIABLE_Globals_765_765);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_765_765, (MR_Integer) 84, &DebugLiveness_85);
    succeeded = (DebugLiveness_85 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_769 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_769, &AllDumpOptions_86);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_87;
      MR_String DumpOptions1_88;
      MR_Word Var_772;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_765_765, (MR_Integer) 164, &DumpOptions0_87);
      DumpOptions1_88 = mercury__string__f_43_43_2_f_0(DumpOptions0_87, AllDumpOptions_86);
      {
        Var_772 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_772, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_772, 1) = ((MR_Box) (DumpOptions1_88));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 164, Var_772, STATE_VARIABLE_Globals_765_765, &STATE_VARIABLE_Globals_773_773);
    }
    else
      STATE_VARIABLE_Globals_773_773 = STATE_VARIABLE_Globals_765_765;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 74, (MR_Integer) 71, Var_355, STATE_VARIABLE_Globals_773_773, &STATE_VARIABLE_Globals_777_777);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_777_777, (MR_Integer) 75, &DebugModesPredId_89);
    succeeded = (DebugModesPredId_89 > (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 71, Var_355, STATE_VARIABLE_Globals_777_777, &STATE_VARIABLE_Globals_783_783);
    }
    else
      STATE_VARIABLE_Globals_783_783 = STATE_VARIABLE_Globals_777_777;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_783_783, (MR_Integer) 366, &DebugUnneededCodePredNames_90);
    if ((DebugUnneededCodePredNames_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_788_788 = STATE_VARIABLE_Globals_783_783;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 365, Var_355, STATE_VARIABLE_Globals_783_783, &STATE_VARIABLE_Globals_788_788);
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_788_788, (MR_Integer) 81, &DebugOptPredIdStrs_93);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_788_788, (MR_Integer) 82, &DebugOptPredNames_94);
    {
      MR_String Var_95;
      MR_Word Var_96;

      succeeded = ((MR_tag((MR_Word) DebugOptPredIdStrs_93)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_95 = ((MR_String) (MR_hl_field(MR_mktag(1), DebugOptPredIdStrs_93, (MR_Integer) 0)));
        Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), DebugOptPredIdStrs_93, (MR_Integer) 1)));
      }
    }
    if (!(succeeded))
    {
      MR_String Var_97;
      MR_Word Var_98;

      succeeded = ((MR_tag((MR_Word) DebugOptPredNames_94)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_97 = ((MR_String) (MR_hl_field(MR_mktag(1), DebugOptPredNames_94, (MR_Integer) 0)));
        Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), DebugOptPredNames_94, (MR_Integer) 1)));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 79, Var_355, STATE_VARIABLE_Globals_788_788, &STATE_VARIABLE_Globals_794_794);
    }
    else
      STATE_VARIABLE_Globals_794_794 = STATE_VARIABLE_Globals_788_788;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_794_794, (MR_Integer) 90, &DebugIntermoduleAnalysis_99);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_99);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_794_794, (MR_Integer) 160, &DumpHLDSPredIds_100);
    if ((DumpHLDSPredIds_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_806_806 = STATE_VARIABLE_Globals_794_794;
    else
    {
      MR_String DumpOptions2_103;
      MR_String DumpOptions3_104;
      MR_String DumpOptions_105;
      MR_Word Var_805;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_794_794, (MR_Integer) 164, &DumpOptions2_103);
      mercury__string__replace_all_4_p_0(DumpOptions2_103, (MR_String) "M", (MR_String) "", &DumpOptions3_104);
      mercury__string__replace_all_4_p_0(DumpOptions3_104, (MR_String) "T", (MR_String) "", &DumpOptions_105);
      {
        Var_805 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_805, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_805, 1) = ((MR_Box) (DumpOptions_105));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 164, Var_805, STATE_VARIABLE_Globals_794_794, &STATE_VARIABLE_Globals_806_806);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 173, Var_355, STATE_VARIABLE_Globals_806_806, &STATE_VARIABLE_Globals_810_810);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 173, (MR_Integer) 171, Var_355, STATE_VARIABLE_Globals_810_810, &STATE_VARIABLE_Globals_815_815);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 172, (MR_Integer) 171, Var_355, STATE_VARIABLE_Globals_815_815, &STATE_VARIABLE_Globals_820_820);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 152, (MR_Integer) 151, Var_355, STATE_VARIABLE_Globals_820_820, &STATE_VARIABLE_Globals_825_825);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_825_825, (MR_Integer) 229, &UseTrail_106);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_825_825, (MR_Integer) 264, &HighLevelCode_107);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_825_825, (MR_Integer) 231, &UseMinimalModelStackCopy_108);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_825_825, (MR_Integer) 232, &UseMinimalModelOwnStacks_109);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_108, UseMinimalModelOwnStacks_109, &UseMinimalModel_110);
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_109 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[201]), STATE_VARIABLE_Specs_610_610, &STATE_VARIABLE_Specs_840_840);
    }
    else
    {
      succeeded = (UseMinimalModel_110 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (HighLevelCode_107 == (MR_Integer) 1);
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[205]), STATE_VARIABLE_Specs_610_610, &STATE_VARIABLE_Specs_840_840);
      }
      else
      {
        succeeded = (UseMinimalModel_110 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (UseTrail_106 == (MR_Integer) 1);
        if (succeeded)
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[208]), STATE_VARIABLE_Specs_610_610, &STATE_VARIABLE_Specs_840_840);
        }
        else
          STATE_VARIABLE_Specs_840_840 = STATE_VARIABLE_Specs_610_610;
      }
    }
    Var_863 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5]);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 257, Var_863, STATE_VARIABLE_Globals_825_825, &STATE_VARIABLE_Globals_864_864);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer ArgPackBits0_114;
          MR_Integer BitsPerWord_115;
          MR_Integer ArgPackBits_116;
          MR_Word Var_911;

          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_864_864, (MR_Integer) 257, &ArgPackBits0_114);
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_864_864, (MR_Integer) 251, &BitsPerWord_115);
          succeeded = (ArgPackBits0_114 < (MR_Integer) 0);
          if (succeeded)
          {
            ArgPackBits_116 = BitsPerWord_115;
            STATE_VARIABLE_Specs_909_909 = STATE_VARIABLE_Specs_840_840;
          }
          else
          {
            succeeded = (ArgPackBits0_114 > BitsPerWord_115);
            if (succeeded)
            {
              MR_Word ArgPackBitsSpec_117;
              MR_Word Var_879;
              MR_Word Var_880;
              MR_Word Var_882;
              MR_Word Var_885;
              MR_Word Var_888;
              MR_Word Var_891;
              MR_Word Var_894;
              MR_Word Var_897;
              MR_Word Var_900;
              MR_Word Var_901;

              ArgPackBits_116 = BitsPerWord_115;
              Var_880 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230]);
              {
                Var_901 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_901, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_901, 1) = ((MR_Box) (BitsPerWord_115));
              }
              {
                Var_900 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_900, 0) = ((MR_Box) (Var_901));
                MR_hl_field(MR_mktag(1), Var_900, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
              }
              {
                Var_897 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_897, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[235])));
                MR_hl_field(MR_mktag(1), Var_897, 1) = ((MR_Box) (Var_900));
              }
              {
                Var_894 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_894, 0) = ((MR_Box) (Var_880));
                MR_hl_field(MR_mktag(1), Var_894, 1) = ((MR_Box) (Var_897));
              }
              {
                Var_891 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_891, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[234])));
                MR_hl_field(MR_mktag(1), Var_891, 1) = ((MR_Box) (Var_894));
              }
              {
                Var_888 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_888, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[233])));
                MR_hl_field(MR_mktag(1), Var_888, 1) = ((MR_Box) (Var_891));
              }
              {
                Var_885 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_885, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232])));
                MR_hl_field(MR_mktag(1), Var_885, 1) = ((MR_Box) (Var_888));
              }
              {
                Var_882 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_882, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])));
                MR_hl_field(MR_mktag(1), Var_882, 1) = ((MR_Box) (Var_885));
              }
              {
                Var_879 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_879, 0) = ((MR_Box) (Var_880));
                MR_hl_field(MR_mktag(1), Var_879, 1) = ((MR_Box) (Var_882));
              }
              {
                ArgPackBitsSpec_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_117, 1) = ((MR_Box) (Var_879));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ArgPackBitsSpec_117, STATE_VARIABLE_Specs_840_840, &STATE_VARIABLE_Specs_909_909);
            }
            else
            {
              ArgPackBits_116 = ArgPackBits0_114;
              STATE_VARIABLE_Specs_909_909 = STATE_VARIABLE_Specs_840_840;
            }
          }
          {
            Var_911 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_911, 0) = ((MR_Box) (ArgPackBits_116));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 257, Var_911, STATE_VARIABLE_Globals_864_864, &STATE_VARIABLE_Globals_912_912);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Globals_868_868;

          libs__globals__set_option_4_p_0((MR_Integer) 257, Var_863, STATE_VARIABLE_Globals_864_864, &STATE_VARIABLE_Globals_868_868);
          libs__globals__set_option_4_p_0((MR_Integer) 258, Var_504, STATE_VARIABLE_Globals_868_868, &STATE_VARIABLE_Globals_912_912);
          STATE_VARIABLE_Specs_909_909 = STATE_VARIABLE_Specs_840_840;
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 235, (MR_Integer) 254, Var_355, STATE_VARIABLE_Globals_912_912, &STATE_VARIABLE_Globals_916_916);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 263, Var_504, STATE_VARIABLE_Globals_916_916, &STATE_VARIABLE_Globals_921_921);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 263, Var_504, STATE_VARIABLE_Globals_921_921, &STATE_VARIABLE_Globals_926_926);
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_930_930 = STATE_VARIABLE_Globals_926_926;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_930_930 = STATE_VARIABLE_Globals_926_926;
        break;
      case (MR_Integer) 3:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 303, Var_504, STATE_VARIABLE_Globals_926_926, &STATE_VARIABLE_Globals_930_930);
        }
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_930_930 = STATE_VARIABLE_Globals_926_926;
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
    {
      libs__globals__set_option_4_p_0((MR_Integer) 446, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6]), STATE_VARIABLE_Globals_930_930, &STATE_VARIABLE_Globals_934_934);
    }
    else
      STATE_VARIABLE_Globals_934_934 = STATE_VARIABLE_Globals_930_930;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 496, (MR_Integer) 567, Var_504, STATE_VARIABLE_Globals_934_934, &STATE_VARIABLE_Globals_939_939);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 219, (MR_Integer) 210, Var_355, STATE_VARIABLE_Globals_939_939, &STATE_VARIABLE_Globals_944_944);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 210, (MR_Integer) 222, Var_504, STATE_VARIABLE_Globals_944_944, &STATE_VARIABLE_Globals_949_949);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 219, (MR_Integer) 139, Var_355, STATE_VARIABLE_Globals_949_949, &STATE_VARIABLE_Globals_954_954);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_954_954, (MR_Integer) 139, &ProfOptimized_118);
    switch (ProfOptimized_118) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_implies_5_p_0((MR_Integer) 206, (MR_Integer) 340, Var_504, STATE_VARIABLE_Globals_954_954, &STATE_VARIABLE_Globals_960_960);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_960_960 = STATE_VARIABLE_Globals_954_954;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 206, (MR_Integer) 208, Var_355, STATE_VARIABLE_Globals_960_960, &STATE_VARIABLE_Globals_965_965);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 223, (MR_Integer) 208, Var_355, STATE_VARIABLE_Globals_965_965, &STATE_VARIABLE_Globals_970_970);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 224, (MR_Integer) 208, Var_355, STATE_VARIABLE_Globals_970_970, &STATE_VARIABLE_Globals_975_975);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_975_975, (MR_Integer) 225, &ExpComp_119);
    succeeded = (strcmp(ExpComp_119, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_Globals_980_980 = STATE_VARIABLE_Globals_975_975;
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 340, Var_504, STATE_VARIABLE_Globals_975_975, &STATE_VARIABLE_Globals_980_980);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 198, (MR_Integer) 197, Var_355, STATE_VARIABLE_Globals_980_980, &STATE_VARIABLE_Globals_985_985);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 244, (MR_Integer) 246, Var_355, STATE_VARIABLE_Globals_985_985, &STATE_VARIABLE_Globals_990_990);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 197, (MR_Integer) 271, Var_355, STATE_VARIABLE_Globals_990_990, &STATE_VARIABLE_Globals_995_995);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 206, (MR_Integer) 271, Var_355, STATE_VARIABLE_Globals_995_995, &STATE_VARIABLE_Globals_1000_1000);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 206, (MR_Integer) 322, Var_355, STATE_VARIABLE_Globals_1000_1000, &STATE_VARIABLE_Globals_1005_1005);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 197, (MR_Integer) 137, Var_355, STATE_VARIABLE_Globals_1005_1005, &STATE_VARIABLE_Globals_1010_1010);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 137, (MR_Integer) 133, Var_355, STATE_VARIABLE_Globals_1010_1010, &STATE_VARIABLE_Globals_1015_1015);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 136, (MR_Integer) 133, Var_355, STATE_VARIABLE_Globals_1015_1015, &STATE_VARIABLE_Globals_1020_1020);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1020_1020, (MR_Integer) 131, &TraceOptimized_120);
    TraceLevelIsNone_121 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
    switch (TraceLevelIsNone_121) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TraceTailRec_122;
          MR_Word STATE_VARIABLE_Globals_1085_1085;
          MR_Word STATE_VARIABLE_Globals_1089_1089;
          MR_Word STATE_VARIABLE_Globals_1093_1093;
          MR_Word STATE_VARIABLE_Globals_1097_1097;
          MR_Word STATE_VARIABLE_Globals_1101_1101;
          MR_Word STATE_VARIABLE_Globals_1105_1105;
          MR_Word STATE_VARIABLE_Globals_1109_1109;
          MR_Word STATE_VARIABLE_Globals_1113_1113;

          switch (TraceOptimized_120) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word STATE_VARIABLE_Globals_1029_1029;
                MR_Word STATE_VARIABLE_Globals_1033_1033;
                MR_Word STATE_VARIABLE_Globals_1037_1037;
                MR_Word STATE_VARIABLE_Globals_1041_1041;
                MR_Word STATE_VARIABLE_Globals_1045_1045;
                MR_Word STATE_VARIABLE_Globals_1049_1049;
                MR_Word STATE_VARIABLE_Globals_1053_1053;
                MR_Word STATE_VARIABLE_Globals_1057_1057;
                MR_Word STATE_VARIABLE_Globals_1061_1061;
                MR_Word STATE_VARIABLE_Globals_1065_1065;
                MR_Word STATE_VARIABLE_Globals_1069_1069;
                MR_Word STATE_VARIABLE_Globals_1073_1073;
                MR_Word STATE_VARIABLE_Globals_1077_1077;
                MR_Word STATE_VARIABLE_Globals_1081_1081;

                libs__globals__set_option_4_p_0((MR_Integer) 340, Var_504, STATE_VARIABLE_Globals_1020_1020, &STATE_VARIABLE_Globals_1029_1029);
                libs__globals__set_option_4_p_0((MR_Integer) 358, Var_504, STATE_VARIABLE_Globals_1029_1029, &STATE_VARIABLE_Globals_1033_1033);
                libs__globals__set_option_4_p_0((MR_Integer) 360, Var_504, STATE_VARIABLE_Globals_1033_1033, &STATE_VARIABLE_Globals_1037_1037);
                libs__globals__set_option_4_p_0((MR_Integer) 367, Var_504, STATE_VARIABLE_Globals_1037_1037, &STATE_VARIABLE_Globals_1041_1041);
                libs__globals__set_option_4_p_0((MR_Integer) 368, Var_504, STATE_VARIABLE_Globals_1041_1041, &STATE_VARIABLE_Globals_1045_1045);
                libs__globals__set_option_4_p_0((MR_Integer) 397, Var_504, STATE_VARIABLE_Globals_1045_1045, &STATE_VARIABLE_Globals_1049_1049);
                libs__globals__set_option_4_p_0((MR_Integer) 356, Var_504, STATE_VARIABLE_Globals_1049_1049, &STATE_VARIABLE_Globals_1053_1053);
                libs__globals__set_option_4_p_0((MR_Integer) 357, Var_504, STATE_VARIABLE_Globals_1053_1053, &STATE_VARIABLE_Globals_1057_1057);
                libs__globals__set_option_4_p_0((MR_Integer) 373, Var_504, STATE_VARIABLE_Globals_1057_1057, &STATE_VARIABLE_Globals_1061_1061);
                libs__globals__set_option_4_p_0((MR_Integer) 372, Var_504, STATE_VARIABLE_Globals_1061_1061, &STATE_VARIABLE_Globals_1065_1065);
                libs__globals__set_option_4_p_0((MR_Integer) 379, Var_504, STATE_VARIABLE_Globals_1065_1065, &STATE_VARIABLE_Globals_1069_1069);
                libs__globals__set_option_4_p_0((MR_Integer) 393, Var_504, STATE_VARIABLE_Globals_1069_1069, &STATE_VARIABLE_Globals_1073_1073);
                libs__globals__set_option_4_p_0((MR_Integer) 406, Var_504, STATE_VARIABLE_Globals_1073_1073, &STATE_VARIABLE_Globals_1077_1077);
                libs__globals__set_option_4_p_0((MR_Integer) 407, Var_504, STATE_VARIABLE_Globals_1077_1077, &STATE_VARIABLE_Globals_1081_1081);
                libs__globals__set_option_4_p_0((MR_Integer) 376, Var_504, STATE_VARIABLE_Globals_1081_1081, &STATE_VARIABLE_Globals_1085_1085);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1085_1085 = STATE_VARIABLE_Globals_1020_1020;
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 463, Var_504, STATE_VARIABLE_Globals_1085_1085, &STATE_VARIABLE_Globals_1089_1089);
          libs__globals__set_option_4_p_0((MR_Integer) 375, Var_355, STATE_VARIABLE_Globals_1089_1089, &STATE_VARIABLE_Globals_1093_1093);
          libs__globals__set_option_4_p_0((MR_Integer) 395, Var_355, STATE_VARIABLE_Globals_1093_1093, &STATE_VARIABLE_Globals_1097_1097);
          libs__globals__set_option_4_p_0((MR_Integer) 461, Var_504, STATE_VARIABLE_Globals_1097_1097, &STATE_VARIABLE_Globals_1101_1101);
          libs__globals__set_option_4_p_0((MR_Integer) 275, Var_355, STATE_VARIABLE_Globals_1101_1101, &STATE_VARIABLE_Globals_1105_1105);
          libs__globals__set_option_4_p_0((MR_Integer) 276, Var_355, STATE_VARIABLE_Globals_1105_1105, &STATE_VARIABLE_Globals_1109_1109);
          libs__globals__set_option_4_p_0((MR_Integer) 328, Var_504, STATE_VARIABLE_Globals_1109_1109, &STATE_VARIABLE_Globals_1113_1113);
          TraceTailRec_122 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_32);
          switch (TraceTailRec_122) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                libs__globals__set_option_4_p_0((MR_Integer) 140, Var_504, STATE_VARIABLE_Globals_1113_1113, &STATE_VARIABLE_Globals_1117_1117);
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_1117_1117 = STATE_VARIABLE_Globals_1113_1113;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 140, Var_504, STATE_VARIABLE_Globals_1020_1020, &STATE_VARIABLE_Globals_1117_1117);
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 206, (MR_Integer) 274, Var_355, STATE_VARIABLE_Globals_1117_1117, &STATE_VARIABLE_Globals_1122_1122);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1122_1122, (MR_Integer) 206, &ProfileDeep_123);
    switch (ProfileDeep_123) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Specs_1134_1134 = STATE_VARIABLE_Specs_909_909;
          STATE_VARIABLE_Globals_1146_1146 = STATE_VARIABLE_Globals_1122_1122;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LotsOfHOSpec_125;
          MR_Word STATE_VARIABLE_Globals_1137_1137;

          succeeded = (HighLevelCode_107 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_27 == (MR_Integer) 0);
          if (succeeded)
            STATE_VARIABLE_Specs_1134_1134 = STATE_VARIABLE_Specs_909_909;
          else
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[210]), STATE_VARIABLE_Specs_909_909, &STATE_VARIABLE_Specs_1134_1134);
          }
          libs__globals__set_option_4_p_0((MR_Integer) 372, Var_504, STATE_VARIABLE_Globals_1122_1122, &STATE_VARIABLE_Globals_1137_1137);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1137_1137, (MR_Integer) 221, &LotsOfHOSpec_125);
          switch (LotsOfHOSpec_125) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Globals_1146_1146 = STATE_VARIABLE_Globals_1137_1137;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Globals_1142_1142;

                libs__globals__set_option_4_p_0((MR_Integer) 360, Var_355, STATE_VARIABLE_Globals_1137_1137, &STATE_VARIABLE_Globals_1142_1142);
                libs__globals__set_option_4_p_0((MR_Integer) 361, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6]), STATE_VARIABLE_Globals_1142_1142, &STATE_VARIABLE_Globals_1146_1146);
              }
              break;
          }
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1146_1146, (MR_Integer) 223, &RecordTermSizesAsWords_126);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1146_1146, (MR_Integer) 224, &RecordTermSizesAsCells_127);
    succeeded = (RecordTermSizesAsWords_126 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_127 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[212]), STATE_VARIABLE_Specs_1134_1134, &STATE_VARIABLE_Specs_1156_1156);
      STATE_VARIABLE_Globals_1163_1163 = STATE_VARIABLE_Globals_1146_1146;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_126 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_127 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_Globals_1159_1159;

        libs__globals__set_option_4_p_0((MR_Integer) 372, Var_504, STATE_VARIABLE_Globals_1146_1146, &STATE_VARIABLE_Globals_1159_1159);
        libs__globals__set_option_4_p_0((MR_Integer) 258, Var_504, STATE_VARIABLE_Globals_1159_1159, &STATE_VARIABLE_Globals_1163_1163);
        switch (HighLevelCode_107) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_1156_1156 = STATE_VARIABLE_Specs_1134_1134;
            break;
          case (MR_Integer) 1:
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[214]), STATE_VARIABLE_Specs_1134_1134, &STATE_VARIABLE_Specs_1156_1156);
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_Globals_1163_1163 = STATE_VARIABLE_Globals_1146_1146;
        STATE_VARIABLE_Specs_1156_1156 = STATE_VARIABLE_Specs_1134_1134;
      }
    }
    {
      MR_Word Var_1175;

      Var_1175 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_32);
      succeeded = (Var_1175 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (HighLevelCode_107 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Target_27 == (MR_Integer) 0);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_1182_1182 = STATE_VARIABLE_Specs_1156_1156;
    else
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216]), STATE_VARIABLE_Specs_1156_1156, &STATE_VARIABLE_Specs_1182_1182);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 227, (MR_Integer) 502, Var_504, STATE_VARIABLE_Globals_1163_1163, &STATE_VARIABLE_Globals_1186_1186);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 343, (MR_Integer) 374, Var_504, STATE_VARIABLE_Globals_1186_1186, &STATE_VARIABLE_Globals_1191_1191);
    switch (ProfileDeep_123) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 340, (MR_Integer) 374, Var_504, STATE_VARIABLE_Globals_1191_1191, &STATE_VARIABLE_Globals_1196_1196);
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1196_1196 = STATE_VARIABLE_Globals_1191_1191;
        break;
    }
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 176, (MR_Integer) 397, Var_504, STATE_VARIABLE_Globals_1196_1196, &STATE_VARIABLE_Globals_1201_1201);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 176, (MR_Integer) 356, Var_504, STATE_VARIABLE_Globals_1201_1201, &STATE_VARIABLE_Globals_1206_1206);
    libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 176, (MR_Integer) 357, Var_504, STATE_VARIABLE_Globals_1206_1206, &STATE_VARIABLE_Globals_1211_1211);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 271, (MR_Integer) 274, Var_355, STATE_VARIABLE_Globals_1211_1211, &STATE_VARIABLE_Globals_1216_1216);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 275, (MR_Integer) 274, Var_355, STATE_VARIABLE_Globals_1216_1216, &STATE_VARIABLE_Globals_1221_1221);
    switch (GC_Method_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word STATE_VARIABLE_Globals_1225_1225;
          MR_Word STATE_VARIABLE_Globals_1229_1229;
          MR_Word STATE_VARIABLE_Globals_1233_1233;
          MR_Word STATE_VARIABLE_Globals_1237_1237;
          MR_Word STATE_VARIABLE_Globals_1241_1241;
          MR_Word STATE_VARIABLE_Globals_1245_1245;
          MR_Word STATE_VARIABLE_Globals_1249_1249;
          MR_Word STATE_VARIABLE_Globals_1253_1253;
          MR_Word STATE_VARIABLE_Globals_1257_1257;
          MR_Word STATE_VARIABLE_Globals_1261_1261;

          libs__globals__set_option_4_p_0((MR_Integer) 273, Var_355, STATE_VARIABLE_Globals_1221_1221, &STATE_VARIABLE_Globals_1225_1225);
          libs__globals__set_option_4_p_0((MR_Integer) 276, Var_355, STATE_VARIABLE_Globals_1225_1225, &STATE_VARIABLE_Globals_1229_1229);
          libs__globals__set_option_4_p_0((MR_Integer) 463, Var_504, STATE_VARIABLE_Globals_1229_1229, &STATE_VARIABLE_Globals_1233_1233);
          libs__globals__set_option_4_p_0((MR_Integer) 485, Var_504, STATE_VARIABLE_Globals_1233_1233, &STATE_VARIABLE_Globals_1237_1237);
          libs__globals__set_option_4_p_0((MR_Integer) 328, Var_504, STATE_VARIABLE_Globals_1237_1237, &STATE_VARIABLE_Globals_1241_1241);
          libs__globals__set_option_4_p_0((MR_Integer) 461, Var_504, STATE_VARIABLE_Globals_1241_1241, &STATE_VARIABLE_Globals_1245_1245);
          libs__globals__set_option_4_p_0((MR_Integer) 311, Var_504, STATE_VARIABLE_Globals_1245_1245, &STATE_VARIABLE_Globals_1249_1249);
          libs__globals__set_option_4_p_0((MR_Integer) 312, Var_504, STATE_VARIABLE_Globals_1249_1249, &STATE_VARIABLE_Globals_1253_1253);
          libs__globals__set_option_4_p_0((MR_Integer) 372, Var_504, STATE_VARIABLE_Globals_1253_1253, &STATE_VARIABLE_Globals_1257_1257);
          libs__globals__set_option_4_p_0((MR_Integer) 367, Var_504, STATE_VARIABLE_Globals_1257_1257, &STATE_VARIABLE_Globals_1261_1261);
          libs__globals__set_option_4_p_0((MR_Integer) 368, Var_504, STATE_VARIABLE_Globals_1261_1261, &STATE_VARIABLE_Globals_1265_1265);
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1265_1265 = STATE_VARIABLE_Globals_1221_1221;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_Globals_1265_1265 = STATE_VARIABLE_Globals_1221_1221;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_Globals_1265_1265 = STATE_VARIABLE_Globals_1221_1221;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_Globals_1265_1265 = STATE_VARIABLE_Globals_1221_1221;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1265_1265 = STATE_VARIABLE_Globals_1221_1221;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1265_1265, (MR_Integer) 269, &PutNondetEnvOnHeap_131);
    succeeded = (HighLevelCode_107 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (GC_Method_28 == (MR_Integer) 5);
      if (succeeded)
        succeeded = (PutNondetEnvOnHeap_131 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[221]), STATE_VARIABLE_Specs_1182_1182, &STATE_VARIABLE_Specs_1283_1283);
    }
    else
      STATE_VARIABLE_Specs_1283_1283 = STATE_VARIABLE_Specs_1182_1182;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 274, (MR_Integer) 272, Var_355, STATE_VARIABLE_Globals_1265_1265, &STATE_VARIABLE_Globals_1287_1287);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 273, (MR_Integer) 272, Var_355, STATE_VARIABLE_Globals_1287_1287, &STATE_VARIABLE_Globals_1292_1292);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 274, (MR_Integer) 483, Var_504, STATE_VARIABLE_Globals_1292_1292, &STATE_VARIABLE_Globals_1297_1297);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 273, (MR_Integer) 483, Var_504, STATE_VARIABLE_Globals_1297_1297, &STATE_VARIABLE_Globals_1302_1302);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 272, (MR_Integer) 481, Var_504, STATE_VARIABLE_Globals_1302_1302, &STATE_VARIABLE_Globals_1307_1307);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 276, (MR_Integer) 397, Var_504, STATE_VARIABLE_Globals_1307_1307, &STATE_VARIABLE_Globals_1312_1312);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 276, (MR_Integer) 356, Var_504, STATE_VARIABLE_Globals_1312_1312, &STATE_VARIABLE_Globals_1317_1317);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 229, (MR_Integer) 461, Var_504, STATE_VARIABLE_Globals_1317_1317, &STATE_VARIABLE_Globals_1322_1322);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 239, (MR_Integer) 461, Var_504, STATE_VARIABLE_Globals_1322_1322, &STATE_VARIABLE_Globals_1327_1327);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 463, Var_504, STATE_VARIABLE_Globals_1327_1327, &STATE_VARIABLE_Globals_1332_1332);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1332_1332, (MR_Integer) 289, &DisablePneg_133);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1332_1332, (MR_Integer) 290, &DisableCut_134);
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_133 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 291, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), STATE_VARIABLE_Globals_1332_1332, &STATE_VARIABLE_Globals_1338_1338);
    }
    else
      STATE_VARIABLE_Globals_1338_1338 = STATE_VARIABLE_Globals_1332_1332;
    succeeded = (UseMinimalModelStackCopy_108 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_134 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 292, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]), STATE_VARIABLE_Globals_1338_1338, &STATE_VARIABLE_Globals_1342_1342);
    }
    else
      STATE_VARIABLE_Globals_1342_1342 = STATE_VARIABLE_Globals_1338_1338;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 159, &DumpHLDSStages_135);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 158, &DumpTraceStages_136);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 308, &ParallelLiveness_137);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1342_1342, (MR_Integer) 309, &ParallelCodeGen_138);
    {
      MR_String Var_139;
      MR_Word Var_140;

      succeeded = ((MR_tag((MR_Word) DumpHLDSStages_135)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_139 = ((MR_String) (MR_hl_field(MR_mktag(1), DumpHLDSStages_135, (MR_Integer) 0)));
        Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), DumpHLDSStages_135, (MR_Integer) 1)));
      }
    }
    if (!(succeeded))
    {
      {
        MR_String Var_141;
        MR_Word Var_142;

        succeeded = ((MR_tag((MR_Word) DumpTraceStages_136)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_141 = ((MR_String) (MR_hl_field(MR_mktag(1), DumpTraceStages_136, (MR_Integer) 0)));
          Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), DumpTraceStages_136, (MR_Integer) 1)));
        }
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_84 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_137 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_138 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 307, Var_504, STATE_VARIABLE_Globals_1342_1342, &STATE_VARIABLE_Globals_1350_1350);
    }
    else
      STATE_VARIABLE_Globals_1350_1350 = STATE_VARIABLE_Globals_1342_1342;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 367, (MR_Integer) 368, Var_355, STATE_VARIABLE_Globals_1350_1350, &STATE_VARIABLE_Globals_1355_1355);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 356, (MR_Integer) 357, Var_355, STATE_VARIABLE_Globals_1355_1355, &STATE_VARIABLE_Globals_1360_1360);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 359, (MR_Integer) 332, Var_355, STATE_VARIABLE_Globals_1360_1360, &STATE_VARIABLE_Globals_1365_1365);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 359, (MR_Integer) 358, Var_355, STATE_VARIABLE_Globals_1365_1365, &STATE_VARIABLE_Globals_1370_1370);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 369, (MR_Integer) 375, Var_355, STATE_VARIABLE_Globals_1370_1370, &STATE_VARIABLE_Globals_1375_1375);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 369, (MR_Integer) 354, Var_355, STATE_VARIABLE_Globals_1375_1375, &STATE_VARIABLE_Globals_1380_1380);
    succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
    if (succeeded)
    {
      Var_1382 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) Var_1382)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_1383 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_1382, (MR_Integer) 0)));
        succeeded = (Var_1383 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 358, Var_504, STATE_VARIABLE_Globals_1380_1380, &STATE_VARIABLE_Globals_1386_1386);
    }
    else
      STATE_VARIABLE_Globals_1386_1386 = STATE_VARIABLE_Globals_1380_1380;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 402, (MR_Integer) 403, Var_355, STATE_VARIABLE_Globals_1386_1386, &STATE_VARIABLE_Globals_1391_1391);
    succeeded = (OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 28, Var_504, STATE_VARIABLE_Globals_1391_1391, &STATE_VARIABLE_Globals_1395_1395);
    }
    else
      STATE_VARIABLE_Globals_1395_1395 = STATE_VARIABLE_Globals_1391_1391;
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1395_1395, (MR_Integer) 670, &TargetArch_143);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1395_1395, (MR_Integer) 565, &MercuryLinkage_144);
    succeeded = (strcmp(MercuryLinkage_144, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_145 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 549, Var_504, STATE_VARIABLE_Globals_1395_1395, &STATE_VARIABLE_Globals_1401_1401);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1395_1395, (MR_Integer) 549, &DefaultRuntimeLibraryDirs_145);
      STATE_VARIABLE_Globals_1401_1401 = STATE_VARIABLE_Globals_1395_1395;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1401_1401, (MR_Integer) 558, &MaybeStdLibDir_146);
    if ((MaybeStdLibDir_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_1416_1416 = STATE_VARIABLE_Globals_1401_1401;
    else
    {
      MR_String StdLibDir_147 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeStdLibDir_146, (MR_Integer) 0)));
      MR_Word OptionTable2_148;
      MR_Word OptionTable_149;
      MR_Word LinkLibDirs0_150;
      MR_Word STATE_VARIABLE_Globals_1405_1405;
      MR_Word Var_1408;
      MR_Word STATE_VARIABLE_Globals_1409_1409;
      MR_Word Var_1410;
      MR_String Var_1411;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_1401_1401, &OptionTable2_148);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_147, OptionTable2_148, &OptionTable_149);
      libs__globals__set_options_3_p_0(OptionTable_149, STATE_VARIABLE_Globals_1401_1401, &STATE_VARIABLE_Globals_1405_1405);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1405_1405, (MR_Integer) 547, &LinkLibDirs0_150);
      Var_1411 = mercury__dir__f_slash_2_f_0(StdLibDir_147, (MR_String) "lib");
      {
        Var_1410 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1410, 0) = ((MR_Box) (Var_1411));
        MR_hl_field(MR_mktag(1), Var_1410, 1) = ((MR_Box) (LinkLibDirs0_150));
      }
      {
        Var_1408 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1408, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1408, 1) = ((MR_Box) (Var_1410));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 547, Var_1408, STATE_VARIABLE_Globals_1405_1405, &STATE_VARIABLE_Globals_1409_1409);
      switch (DefaultRuntimeLibraryDirs_145) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1416_1416 = STATE_VARIABLE_Globals_1409_1409;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_151;
            MR_Word Var_1415;
            MR_Word Var_1417;
            MR_String Var_1418;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1409_1409, (MR_Integer) 548, &Rpath0_151);
            Var_1418 = mercury__dir__f_slash_2_f_0(StdLibDir_147, (MR_String) "lib");
            {
              Var_1417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_1417, 0) = ((MR_Box) (Var_1418));
              MR_hl_field(MR_mktag(1), Var_1417, 1) = ((MR_Box) (Rpath0_151));
            }
            {
              Var_1415 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1415, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), Var_1415, 1) = ((MR_Box) (Var_1417));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 548, Var_1415, STATE_VARIABLE_Globals_1409_1409, &STATE_VARIABLE_Globals_1416_1416);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1416_1416, (MR_Integer) 638, &MaybeConfDir_152);
    if ((MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_1424_1424 = STATE_VARIABLE_Globals_1416_1416;
    else
    {
      MR_String ConfDir_153 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeConfDir_152, (MR_Integer) 0)));
      MR_Word CIncludeDirs0_154;
      MR_Word Var_1423;
      MR_Word Var_1425;
      MR_String Var_1426;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1416_1416, (MR_Integer) 500, &CIncludeDirs0_154);
      Var_1426 = mercury__dir__f_slash_2_f_0(ConfDir_153, (MR_String) "conf");
      {
        Var_1425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1425, 0) = ((MR_Box) (Var_1426));
        MR_hl_field(MR_mktag(1), Var_1425, 1) = ((MR_Box) (CIncludeDirs0_154));
      }
      {
        Var_1423 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1423, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1423, 1) = ((MR_Box) (Var_1425));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 500, Var_1423, STATE_VARIABLE_Globals_1416_1416, &STATE_VARIABLE_Globals_1424_1424);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_1424_1424, (MR_Integer) 649, &ConfigFile_155);
    succeeded = ((MR_tag((MR_Word) ConfigFile_155)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_1429 = ((MR_String) (MR_hl_field(MR_mktag(1), ConfigFile_155, (MR_Integer) 0)));
      succeeded = (strcmp(Var_1429, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        libs__globals__set_option_4_p_0((MR_Integer) 649, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[236]), STATE_VARIABLE_Globals_1424_1424, &STATE_VARIABLE_Globals_1436_1436);
      }
      else
      {
        MR_String ConfDir1_156 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeConfDir_152, (MR_Integer) 0)));
        MR_Word Var_1435;
        MR_Word Var_1437;
        MR_String Var_1438;
        MR_String Var_1439;

        Var_1439 = mercury__dir__f_slash_2_f_0(ConfDir1_156, (MR_String) "conf");
        Var_1438 = mercury__dir__f_slash_2_f_0(Var_1439, (MR_String) "Mercury.config");
        {
          Var_1437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_1437, 0) = ((MR_Box) (Var_1438));
        }
        {
          Var_1435 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_1435, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), Var_1435, 1) = ((MR_Box) (Var_1437));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 649, Var_1435, STATE_VARIABLE_Globals_1424_1424, &STATE_VARIABLE_Globals_1436_1436);
      }
    else
      STATE_VARIABLE_Globals_1436_1436 = STATE_VARIABLE_Globals_1424_1424;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1436_1436, (MR_Integer) 552, &MercuryLibDirs_157);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_1436_1436, &GradeString_158);
    if ((MercuryLibDirs_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Globals_1493_1493 = STATE_VARIABLE_Globals_1436_1436;
    else
    {
      MR_Word TypeCtorInfo_1663_1663 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word ExtraLinkLibDirs_161;
      MR_Word LinkLibDirs1_163;
      MR_Word ExtraIncludeDirs_165;
      MR_Word CIncludeDirs_166;
      MR_Word ErlangIncludeDirs_167;
      MR_Word ExtraIntermodDirs_168;
      MR_Word IntermodDirs0_169;
      MR_Word ExtraInitDirs_170;
      MR_Word InitDirs1_171;
      MR_Word Var_1443;
      MR_Word Var_1450;
      MR_Word STATE_VARIABLE_Globals_1451_1451;
      MR_Word Var_1452;
      MR_Word STATE_VARIABLE_Globals_1456_1456;
      MR_Word Var_1458;
      MR_Word Var_1467;
      MR_Word STATE_VARIABLE_Globals_1468_1468;
      MR_Word Var_1469;
      MR_Word Var_1472;
      MR_Word STATE_VARIABLE_Globals_1473_1473;
      MR_Word Var_1474;
      MR_Word Var_1475;
      MR_Word Var_1482;
      MR_Word STATE_VARIABLE_Globals_1483_1483;
      MR_Word Var_1484;
      MR_Word Var_1485;
      MR_Word Var_1492;
      MR_Word Var_1494;

      {
        Var_1443 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1443, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1443, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
        MR_hl_field(MR_mktag(0), Var_1443, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1443, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraLinkLibDirs_161 = mercury__list__map_2_f_0(TypeCtorInfo_1663_1663, TypeCtorInfo_1663_1663, Var_1443, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1436_1436, (MR_Integer) 547, &LinkLibDirs1_163);
      Var_1452 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1663_1663, LinkLibDirs1_163, ExtraLinkLibDirs_161);
      {
        Var_1450 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1450, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1450, 1) = ((MR_Box) (Var_1452));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 547, Var_1450, STATE_VARIABLE_Globals_1436_1436, &STATE_VARIABLE_Globals_1451_1451);
      switch (DefaultRuntimeLibraryDirs_145) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_1456_1456 = STATE_VARIABLE_Globals_1451_1451;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_164;
            MR_Word Var_1455;
            MR_Word Var_1457;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1451_1451, (MR_Integer) 548, &Rpath_164);
            Var_1457 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1663_1663, Rpath_164, ExtraLinkLibDirs_161);
            {
              Var_1455 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_1455, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(3), Var_1455, 1) = ((MR_Box) (Var_1457));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 548, Var_1455, STATE_VARIABLE_Globals_1451_1451, &STATE_VARIABLE_Globals_1456_1456);
          }
          break;
      }
      {
        Var_1458 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1458, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1458, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
        MR_hl_field(MR_mktag(0), Var_1458, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1458, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraIncludeDirs_165 = mercury__list__map_2_f_0(TypeCtorInfo_1663_1663, TypeCtorInfo_1663_1663, Var_1458, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1456_1456, (MR_Integer) 500, &CIncludeDirs_166);
      Var_1469 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1663_1663, ExtraIncludeDirs_165, CIncludeDirs_166);
      {
        Var_1467 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1467, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1467, 1) = ((MR_Box) (Var_1469));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 500, Var_1467, STATE_VARIABLE_Globals_1456_1456, &STATE_VARIABLE_Globals_1468_1468);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1468_1468, (MR_Integer) 538, &ErlangIncludeDirs_167);
      Var_1474 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1663_1663, ExtraIncludeDirs_165, ErlangIncludeDirs_167);
      {
        Var_1472 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1472, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1472, 1) = ((MR_Box) (Var_1474));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 538, Var_1472, STATE_VARIABLE_Globals_1468_1468, &STATE_VARIABLE_Globals_1473_1473);
      {
        Var_1475 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1475, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1475, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
        MR_hl_field(MR_mktag(0), Var_1475, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1475, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraIntermodDirs_168 = mercury__list__map_2_f_0(TypeCtorInfo_1663_1663, TypeCtorInfo_1663_1663, Var_1475, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1473_1473, (MR_Integer) 654, &IntermodDirs0_169);
      Var_1484 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1663_1663, ExtraIntermodDirs_168, IntermodDirs0_169);
      {
        Var_1482 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1482, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1482, 1) = ((MR_Box) (Var_1484));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 654, Var_1482, STATE_VARIABLE_Globals_1473_1473, &STATE_VARIABLE_Globals_1483_1483);
      {
        Var_1485 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_1485, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_1485, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
        MR_hl_field(MR_mktag(0), Var_1485, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_1485, 3) = ((MR_Box) (GradeString_158));
      }
      ExtraInitDirs_170 = mercury__list__map_2_f_0(TypeCtorInfo_1663_1663, TypeCtorInfo_1663_1663, Var_1485, MercuryLibDirs_157);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1483_1483, (MR_Integer) 560, &InitDirs1_171);
      Var_1494 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1663_1663, InitDirs1_171, ExtraInitDirs_170);
      {
        Var_1492 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1492, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1492, 1) = ((MR_Box) (Var_1494));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1492, STATE_VARIABLE_Globals_1483_1483, &STATE_VARIABLE_Globals_1493_1493);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1493_1493, (MR_Integer) 655, &UseSearchDirs_172);
    switch (UseSearchDirs_172) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_1500_1500 = STATE_VARIABLE_Globals_1493_1493;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_173;
          MR_Word SearchDirs_174;
          MR_Word Var_1499;
          MR_Word Var_1501;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1493_1493, (MR_Integer) 654, &IntermodDirs1_173);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1493_1493, (MR_Integer) 653, &SearchDirs_174);
          Var_1501 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, IntermodDirs1_173, SearchDirs_174);
          {
            Var_1499 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1499, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_1499, 1) = ((MR_Box) (Var_1501));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 654, Var_1499, STATE_VARIABLE_Globals_1493_1493, &STATE_VARIABLE_Globals_1500_1500);
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1500_1500, (MR_Integer) 652, &UseGradeSubdirs_175);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1500_1500, (MR_Integer) 554, &SearchLibFilesDirs_176);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1500_1500, (MR_Integer) 654, &IntermodDirs2_177);
    {
      ToGradeSubdir_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 3) = ((MR_Box) (TargetArch_143));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_178, 4) = ((MR_Box) (GradeString_158));
    }
    switch (UseGradeSubdirs_175) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_1672_1672;
          MR_Word IntermodDirs3_182;
          MR_Word LinkLibDirs2_183;
          MR_Word InitDirs2_184;
          MR_Word Var_1520;

          IntermodDirs3_182 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, SearchLibFilesDirs_176, IntermodDirs2_177);
          {
            Var_1520 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_1520, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_1520, 1) = ((MR_Box) (IntermodDirs3_182));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 654, Var_1520, STATE_VARIABLE_Globals_1500_1500, &STATE_VARIABLE_Globals_1521_1521);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1521_1521, (MR_Integer) 547, &LinkLibDirs2_183);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1521_1521, (MR_Integer) 560, &InitDirs2_184);
          TypeCtorInfo_1672_1672 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1672_1672, SearchLibFilesDirs_176, LinkLibDirs2_183);
          InitDirs_190 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1672_1672, SearchLibFilesDirs_176, InitDirs2_184);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_1665_1665;
          MR_Word TypeCtorInfo_1671_1671;
          MR_String GradeSubdir_180;
          MR_Word SearchLibFilesGradeSubdirs_181;
          MR_Word ToGradeLibDir_185;
          MR_Word SearchGradeLibDirs_186;
          MR_Word ToGradeInitDir_188;
          MR_Word SearchGradeInitDirs_189;
          MR_String Var_1510;
          MR_Word Var_1512;
          MR_Word Var_1514;
          MR_Word Var_1515;
          MR_Word Var_1516;
          MR_Word Var_1517;
          MR_String Var_1518;
          MR_Word IntermodDirs3_12676;
          MR_Word LinkLibDirs2_12677;
          MR_Word InitDirs2_12678;
          MR_Word Var_12679;

          Var_1510 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_158);
          GradeSubdir_180 = mercury__dir__f_slash_2_f_0(Var_1510, TargetArch_143);
          TypeCtorInfo_1665_1665 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          SearchLibFilesGradeSubdirs_181 = mercury__list__map_2_f_0(TypeCtorInfo_1665_1665, TypeCtorInfo_1665_1665, ToGradeSubdir_178, SearchLibFilesDirs_176);
          {
            Var_1512 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_1512, 0) = ((MR_Box) (GradeSubdir_180));
            MR_hl_field(MR_mktag(1), Var_1512, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_1518 = mercury__dir__this_directory_0_f_0();
          {
            Var_1517 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1517, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_1517, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), Var_1517, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1517, 3) = ((MR_Box) (Var_1518));
          }
          {
            Var_1516 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_1516, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_1516, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), Var_1516, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_1516, 3) = ((MR_Box) (Var_1517));
          }
          Var_1515 = mercury__list__filter_2_f_0(TypeCtorInfo_1665_1665, Var_1516, IntermodDirs2_177);
          Var_1514 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1665_1665, SearchLibFilesGradeSubdirs_181, Var_1515);
          IntermodDirs3_12676 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1665_1665, Var_1512, Var_1514);
          {
            Var_12679 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_12679, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), Var_12679, 1) = ((MR_Box) (IntermodDirs3_12676));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 654, Var_12679, STATE_VARIABLE_Globals_1500_1500, &STATE_VARIABLE_Globals_1521_1521);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1521_1521, (MR_Integer) 547, &LinkLibDirs2_12677);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1521_1521, (MR_Integer) 560, &InitDirs2_12678);
          {
            ToGradeLibDir_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_185, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          TypeCtorInfo_1671_1671 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          SearchGradeLibDirs_186 = mercury__list__map_2_f_0(TypeCtorInfo_1671_1671, TypeCtorInfo_1671_1671, ToGradeLibDir_185, SearchLibFilesDirs_176);
          LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1671_1671, SearchGradeLibDirs_186, LinkLibDirs2_12677);
          {
            ToGradeInitDir_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_188, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          SearchGradeInitDirs_189 = mercury__list__map_2_f_0(TypeCtorInfo_1671_1671, TypeCtorInfo_1671_1671, ToGradeInitDir_188, SearchLibFilesDirs_176);
          InitDirs_190 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1671_1671, SearchGradeInitDirs_189, InitDirs2_12678);
        }
        break;
    }
    {
      Var_1537 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1537, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_1537, 1) = ((MR_Box) (LinkLibDirs_187));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 547, Var_1537, STATE_VARIABLE_Globals_1521_1521, &STATE_VARIABLE_Globals_1538_1538);
    {
      Var_1540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_1540, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), Var_1540, 1) = ((MR_Box) (InitDirs_190));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 560, Var_1540, STATE_VARIABLE_Globals_1538_1538, &STATE_VARIABLE_Globals_1541_1541);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1541_1541, (MR_Integer) 651, &UseSubdirs_191);
    switch (UseGradeSubdirs_175) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_191 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_192 = (MR_Word) &libs__handle_options_scalar_common_7[0];
            ToHrlsSubdir_193 = (MR_Word) &libs__handle_options_scalar_common_7[1];
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_192, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          {
            ToHrlsSubdir_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, 3) = ((MR_Box) (ToGradeSubdir_178));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word TypeCtorInfo_1673_1673;
      MR_Word CIncludeDirs1_194;
      MR_String MihsSubdir_195;
      MR_Word SearchLibMihsSubdirs_196;
      MR_Word SubdirCIncludeDirs_197;
      MR_Word ErlangIncludeDirs1_198;
      MR_String HrlsSubdir_199;
      MR_Word SubdirErlangIncludeDirs_200;
      MR_String Var_1566;
      MR_String Var_1567;
      MR_Word Var_1568;
      MR_Word Var_1569;
      MR_Word Var_1571;
      MR_Word STATE_VARIABLE_Globals_1572_1572;
      MR_String Var_1574;
      MR_Word Var_1576;
      MR_Box MR_CALL (* func_11)(MR_Box, MR_Box);
      MR_Box conv12_MihsSubdir_195;
      MR_Box MR_CALL (* func_13)(MR_Box, MR_Box);
      MR_Box conv14_HrlsSubdir_199;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1541_1541, (MR_Integer) 500, &CIncludeDirs1_194);
      Var_1566 = mercury__dir__this_directory_0_f_0();
      func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToMihsSubdir_192, (MR_Integer) 1)));
      conv12_MihsSubdir_195 = func_11(((MR_Box) ToMihsSubdir_192), ((MR_Box) (Var_1566)));
      MihsSubdir_195 = ((MR_String) conv12_MihsSubdir_195);
      TypeCtorInfo_1673_1673 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      SearchLibMihsSubdirs_196 = mercury__list__map_2_f_0(TypeCtorInfo_1673_1673, TypeCtorInfo_1673_1673, ToMihsSubdir_192, SearchLibFilesDirs_176);
      Var_1567 = mercury__dir__this_directory_0_f_0();
      Var_1569 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_1673_1673, SearchLibMihsSubdirs_196, CIncludeDirs1_194);
      {
        Var_1568 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_1568, 0) = ((MR_Box) (MihsSubdir_195));
        MR_hl_field(MR_mktag(1), Var_1568, 1) = ((MR_Box) (Var_1569));
      }
      {
        SubdirCIncludeDirs_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_197, 0) = ((MR_Box) (Var_1567));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_197, 1) = ((MR_Box) (Var_1568));
      }
      {
        Var_1571 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1571, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1571, 1) = ((MR_Box) (SubdirCIncludeDirs_197));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 500, Var_1571, STATE_VARIABLE_Globals_1541_1541, &STATE_VARIABLE_Globals_1572_1572);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1572_1572, (MR_Integer) 538, &ErlangIncludeDirs1_198);
      Var_1574 = mercury__dir__this_directory_0_f_0();
      func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), ToHrlsSubdir_193, (MR_Integer) 1)));
      conv14_HrlsSubdir_199 = func_13(((MR_Box) ToHrlsSubdir_193), ((MR_Box) (Var_1574)));
      HrlsSubdir_199 = ((MR_String) conv14_HrlsSubdir_199);
      {
        SubdirErlangIncludeDirs_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_200, 0) = ((MR_Box) (HrlsSubdir_199));
        MR_hl_field(MR_mktag(1), SubdirErlangIncludeDirs_200, 1) = ((MR_Box) (ErlangIncludeDirs1_198));
      }
      {
        Var_1576 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1576, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1576, 1) = ((MR_Box) (SubdirErlangIncludeDirs_200));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 538, Var_1576, STATE_VARIABLE_Globals_1572_1572, &STATE_VARIABLE_Globals_1577_1577);
    }
    else
      STATE_VARIABLE_Globals_1577_1577 = STATE_VARIABLE_Globals_1541_1541;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 334, (MR_Integer) 14, Var_504, STATE_VARIABLE_Globals_1577_1577, &STATE_VARIABLE_Globals_1581_1581);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1581_1581, (MR_Integer) 31, &WarnNonTailRecSelf_201);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1581_1581, (MR_Integer) 32, &WarnNonTailRecMutual_202);
    succeeded = (WarnNonTailRecSelf_201 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_202 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word PessimizeTailCalls_203;
      MR_Word OptimizeTailCalls_204;
      MR_Word STATE_VARIABLE_Specs_1591_1591;
      MR_Word STATE_VARIABLE_Specs_1596_1596;
      MR_Word Var_1599;
      MR_Word Var_1600;

      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1581_1581, (MR_Integer) 477, &PessimizeTailCalls_203);
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1581_1581, (MR_Integer) 464, &OptimizeTailCalls_204);
      switch (PessimizeTailCalls_203) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_1591_1591 = STATE_VARIABLE_Specs_1283_1283;
          break;
        case (MR_Integer) 1:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[238]), STATE_VARIABLE_Specs_1283_1283, &STATE_VARIABLE_Specs_1591_1591);
          }
          break;
      }
      switch (OptimizeTailCalls_204) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[240]), STATE_VARIABLE_Specs_1591_1591, &STATE_VARIABLE_Specs_1596_1596);
          }
          break;
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_1596_1596 = STATE_VARIABLE_Specs_1591_1591;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_26)) == (MR_mktag((MR_Integer) 3)));
      if (succeeded)
      {
        Var_1599 = ((MR_Word) (MR_hl_field(MR_mktag(3), OpMode_26, (MR_Integer) 0)));
        succeeded = ((MR_tag((MR_Word) Var_1599)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_1600 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_1599, (MR_Integer) 0)));
          succeeded = (Var_1600 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        }
      }
      if (succeeded)
      {
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[242]), STATE_VARIABLE_Specs_1596_1596, &STATE_VARIABLE_Specs_1605_1605);
      }
      else
        STATE_VARIABLE_Specs_1605_1605 = STATE_VARIABLE_Specs_1596_1596;
    }
    else
      STATE_VARIABLE_Specs_1605_1605 = STATE_VARIABLE_Specs_1283_1283;
    switch (Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[243]);
          STATE_VARIABLE_Globals_1616_1616 = STATE_VARIABLE_Globals_1581_1581;
        }
        break;
      case (MR_Integer) 1:
        {
          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[244]);
          STATE_VARIABLE_Globals_1616_1616 = STATE_VARIABLE_Globals_1581_1581;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word STATE_VARIABLE_Globals_1612_1612;

          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]);
          libs__globals__set_option_4_p_0((MR_Integer) 372, Var_504, STATE_VARIABLE_Globals_1581_1581, &STATE_VARIABLE_Globals_1612_1612);
          libs__globals__set_option_4_p_0((MR_Integer) 303, Var_504, STATE_VARIABLE_Globals_1612_1612, &STATE_VARIABLE_Globals_1616_1616);
        }
        break;
      case (MR_Integer) 2:
        {
          BackendForeignLanguages_208 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[245]);
          STATE_VARIABLE_Globals_1616_1616 = STATE_VARIABLE_Globals_1581_1581;
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1616_1616, (MR_Integer) 270, &CurrentBackendForeignLanguage_209);
    if ((CurrentBackendForeignLanguage_209 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_1626;

      {
        Var_1626 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_1626, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(3), Var_1626, 1) = ((MR_Box) (BackendForeignLanguages_208));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 270, Var_1626, STATE_VARIABLE_Globals_1616_1616, &STATE_VARIABLE_Globals_1627_1627);
    }
    else
      STATE_VARIABLE_Globals_1627_1627 = STATE_VARIABLE_Globals_1616_1616;
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_1627_1627, (MR_Integer) 321, &CompareSpec_212);
    succeeded = (CompareSpec_212 < (MR_Integer) 0);
    if (succeeded)
      switch (HighLevelCode_107) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[7]), STATE_VARIABLE_Globals_1627_1627, &STATE_VARIABLE_Globals_1636_1636);
          }
          break;
        case (MR_Integer) 1:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[8]), STATE_VARIABLE_Globals_1627_1627, &STATE_VARIABLE_Globals_1636_1636);
          }
          break;
      }
    else
      STATE_VARIABLE_Globals_1636_1636 = STATE_VARIABLE_Globals_1627_1627;
    succeeded = (Target_27 == (MR_Integer) 0);
    if (succeeded)
    {
      switch (TagsMethod_59) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
      if (succeeded)
      {
        Var_1638 = (MR_Integer) 2;
        succeeded = (NumTagBits_57 >= Var_1638);
      }
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 277, Var_355, STATE_VARIABLE_Globals_1636_1636, &STATE_VARIABLE_Globals_1641_1641);
    }
    else
    {
      libs__globals__set_option_4_p_0((MR_Integer) 277, Var_504, STATE_VARIABLE_Globals_1636_1636, &STATE_VARIABLE_Globals_1641_1641);
    }
    switch (HighLevelCode_107) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_2_p_0(STATE_VARIABLE_Globals_1641_1641, &STATE_VARIABLE_Globals_1647_1647);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_1647_1647 = STATE_VARIABLE_Globals_1641_1641;
        break;
    }
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_1647_1647, STATE_VARIABLE_Globals_215, STATE_VARIABLE_Specs_1605_1605, STATE_VARIABLE_Specs_214);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_215);
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
    libs__globals__set_option_4_p_0((MR_Integer) 126, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]), STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_12, (MR_Integer) 29, &WarnSmart_9);
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
              {
                mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
              }
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
  MR_Word STATE_VARIABLE_Globals_0_12,
  MR_Word * STATE_VARIABLE_Globals_13)
{
  {
    MR_bool succeeded;
    MR_Word OptFrames_4;
    MR_Word OptLocalVars_5;
    MR_Integer OptRepeat_6;
    MR_Word UnboxedFloat_7;
    MR_Word StaticGroundFloats_8;
    MR_Word NonLocalGotos_9;
    MR_Word AsmLabels_10;
    MR_Word StaticCodeAddrs_11;
    MR_Word Var_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[0]);
    MR_Word STATE_VARIABLE_Globals_17_17;
    MR_Word STATE_VARIABLE_Globals_22_22;
    MR_Word STATE_VARIABLE_Globals_27_27;
    MR_Word STATE_VARIABLE_Globals_32_32;
    MR_Word STATE_VARIABLE_Globals_40_40;
    MR_Word Var_44;
    MR_Word STATE_VARIABLE_Globals_45_45;
    MR_Word Var_49;
    MR_Word SourceOptionValue_57;
    MR_Word SourceOptionValue_65;
    MR_Word SourceOptionValue_73;
    MR_Word SourceOptionValue_81;
    MR_Integer Var_37;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_12, (MR_Integer) 379, &SourceOptionValue_57);
    switch (SourceOptionValue_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_17_17 = STATE_VARIABLE_Globals_0_12;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 479, Var_16, STATE_VARIABLE_Globals_0_12, &STATE_VARIABLE_Globals_17_17);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_17_17, (MR_Integer) 485, &SourceOptionValue_65);
    switch (SourceOptionValue_65) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_22_22 = STATE_VARIABLE_Globals_17_17;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 482, Var_16, STATE_VARIABLE_Globals_17_17, &STATE_VARIABLE_Globals_22_22);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 485, &SourceOptionValue_73);
    switch (SourceOptionValue_73) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_27_27 = STATE_VARIABLE_Globals_22_22;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 475, Var_16, STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_27_27);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_27_27, (MR_Integer) 484, &SourceOptionValue_81);
    switch (SourceOptionValue_81) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_32_32 = STATE_VARIABLE_Globals_27_27;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 307, Var_16, STATE_VARIABLE_Globals_27_27, &STATE_VARIABLE_Globals_32_32);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_32_32, (MR_Integer) 485, &OptFrames_4);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_32_32, (MR_Integer) 479, &OptLocalVars_5);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_32_32, (MR_Integer) 488, &OptRepeat_6);
    succeeded = (OptFrames_4 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OptLocalVars_5 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_37 = (MR_Integer) 1;
      succeeded = (OptRepeat_6 < Var_37);
    }
    if (succeeded)
    {
      libs__globals__set_option_4_p_0((MR_Integer) 488, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[1]), STATE_VARIABLE_Globals_32_32, &STATE_VARIABLE_Globals_40_40);
    }
    else
      STATE_VARIABLE_Globals_40_40 = STATE_VARIABLE_Globals_32_32;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_40_40, (MR_Integer) 254, &UnboxedFloat_7);
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
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (StaticGroundFloats_8));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 458, Var_44, STATE_VARIABLE_Globals_40_40, &STATE_VARIABLE_Globals_45_45);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_45_45, (MR_Integer) 260, &NonLocalGotos_9);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_45_45, (MR_Integer) 262, &AsmLabels_10);
    succeeded = (NonLocalGotos_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (AsmLabels_10 == (MR_Integer) 0);
    if (succeeded)
      StaticCodeAddrs_11 = (MR_Integer) 0;
    else
      StaticCodeAddrs_11 = (MR_Integer) 1;
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (StaticCodeAddrs_11));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 459, Var_49, STATE_VARIABLE_Globals_45_45, STATE_VARIABLE_Globals_13);
  }
}

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_118,
  MR_Word * STATE_VARIABLE_OptionTable_119,
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
  MR_Word * STATE_VARIABLE_Specs_120)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_849_849;
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
    MR_Word LimitErrorContextsOptionStrs_110;
    MR_Word BadLimitErrorContextsOptions_111;
    MR_Word STATE_VARIABLE_Specs_123_123 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word STATE_VARIABLE_Specs_158_158;
    MR_Word STATE_VARIABLE_Specs_197_197;
    MR_Word STATE_VARIABLE_Specs_230_230;
    MR_Word STATE_VARIABLE_Specs_251_251;
    MR_Word STATE_VARIABLE_Specs_272_272;
    MR_Word STATE_VARIABLE_Specs_305_305;
    MR_Word STATE_VARIABLE_Specs_338_338;
    MR_Word STATE_VARIABLE_Specs_360_360;
    MR_Word STATE_VARIABLE_Specs_417_417;
    MR_Word STATE_VARIABLE_Specs_454_454;
    MR_Word STATE_VARIABLE_Specs_488_488;
    MR_Word STATE_VARIABLE_OptionTable_492_492;
    MR_Word STATE_VARIABLE_Specs_519_519;
    MR_String STATE_VARIABLE_DumpOptions_521_521;
    MR_String STATE_VARIABLE_DumpOptions_522_522;
    MR_String STATE_VARIABLE_DumpOptions_525_525;
    MR_String STATE_VARIABLE_DumpOptions_529_529;
    MR_String STATE_VARIABLE_DumpOptions_553_553;
    MR_Word Var_556;
    MR_Word STATE_VARIABLE_Specs_595_595;
    MR_Word STATE_VARIABLE_Specs_631_631;
    MR_Word STATE_VARIABLE_Specs_663_663;
    MR_Word STATE_VARIABLE_Specs_668_668;
    MR_Word STATE_VARIABLE_Specs_705_705;
    MR_Word STATE_VARIABLE_Specs_743_743;
    MR_Word STATE_VARIABLE_Specs_781_781;
    MR_Word STATE_VARIABLE_Specs_797_797;
    MR_Word TargetPrime_44;
    MR_Word GC_MethodPrime_47;
    MR_Word TagsMethodPrime_50;
    MR_Integer Var_233;
    MR_Integer Var_254;
    MR_Word TermNormPrime_57;
    MR_Word Term2NormPrime_60;
    MR_Word TraceSuppressPrime_70;
    MR_Word MaybeThreadSafePrime_78;
    MR_Char Var_524;
    MR_Char Var_528;
    MR_Char Var_552;
    MR_Word C_CompilerTypePrime_85;
    MR_Word CSharp_CompilerTypePrime_88;
    MR_Word ReuseStrategyPrime_92;
    MR_Word HostEnvTypePrime_101;
    MR_Word SystemEnvTypePrime_104;
    MR_Word TargetEnvTypePrime_107;

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 189, &TargetStr_43);
    succeeded = libs__globals__convert_target_2_p_0(TargetStr_43, &TargetPrime_44);
    if (succeeded)
    {
      *Target_24 = TargetPrime_44;
      STATE_VARIABLE_Specs_158_158 = STATE_VARIABLE_Specs_123_123;
    }
    else
    {
      MR_Word TypeCtorInfo_839_839;
      MR_Word TargetSpec_45;
      MR_Word Var_125;
      MR_Word Var_128;
      MR_Word Var_129;
      MR_Word Var_140;
      MR_Word Var_141;

      *Target_24 = (MR_Integer) 0;
      TypeCtorInfo_839_839 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (TargetStr_43));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_128));
      }
      Var_141 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21]));
      Var_140 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_839_839, Var_141, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TargetSpec_45 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_839_839, Var_125, Var_140);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TargetSpec_45, STATE_VARIABLE_Specs_123_123, &STATE_VARIABLE_Specs_158_158);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 226, &GC_MethodStr_46);
    succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_46, &GC_MethodPrime_47);
    if (succeeded)
    {
      *GC_Method_25 = GC_MethodPrime_47;
      STATE_VARIABLE_Specs_197_197 = STATE_VARIABLE_Specs_158_158;
    }
    else
    {
      MR_Word TypeCtorInfo_840_840;
      MR_Word GCMethodSpec_48;
      MR_Word Var_160;
      MR_Word Var_163;
      MR_Word Var_164;
      MR_Word Var_175;
      MR_Word Var_176;

      *GC_Method_25 = (MR_Integer) 1;
      TypeCtorInfo_840_840 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_164, 1) = ((MR_Box) (GC_MethodStr_46));
      }
      {
        Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Var_164));
        MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])));
      }
      {
        Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_160, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_160, 1) = ((MR_Box) (Var_163));
      }
      Var_176 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30]));
      Var_175 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_840_840, Var_176, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      GCMethodSpec_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_840_840, Var_160, Var_175);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), GCMethodSpec_48, STATE_VARIABLE_Specs_158_158, &STATE_VARIABLE_Specs_197_197);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 247, &TagsMethodStr_49);
    succeeded = libs__globals__convert_tags_method_2_p_0(TagsMethodStr_49, &TagsMethodPrime_50);
    if (succeeded)
    {
      *TagsMethod_26 = TagsMethodPrime_50;
      STATE_VARIABLE_Specs_230_230 = STATE_VARIABLE_Specs_197_197;
    }
    else
    {
      MR_Word TypeCtorInfo_841_841;
      MR_Word TagsMethodSpec_51;
      MR_Word Var_199;
      MR_Word Var_202;
      MR_Word Var_203;
      MR_Word Var_214;
      MR_Word Var_215;

      *TagsMethod_26 = (MR_Integer) 0;
      TypeCtorInfo_841_841 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_203, 1) = ((MR_Box) (TagsMethodStr_49));
      }
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) (Var_203));
        MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])));
      }
      {
        Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_199, 1) = ((MR_Box) (Var_202));
      }
      Var_215 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36]));
      Var_214 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_841_841, Var_215, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TagsMethodSpec_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_841_841, Var_199, Var_214);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TagsMethodSpec_51, STATE_VARIABLE_Specs_197_197, &STATE_VARIABLE_Specs_230_230);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 324, &FactTablePercentFull_52);
    succeeded = (FactTablePercentFull_52 >= (MR_Integer) 1);
    if (succeeded)
    {
      Var_233 = (MR_Integer) 100;
      succeeded = (FactTablePercentFull_52 <= Var_233);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_251_251 = STATE_VARIABLE_Specs_230_230;
    else
    {
      MR_Word FactTablePercentFullSpec_53;
      MR_Word Var_236;
      MR_Word Var_237;

      {
        Var_237 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_237, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_237, 1) = ((MR_Box) (FactTablePercentFull_52));
      }
      {
        Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (Var_237));
        MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
      }
      {
        FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 1) = ((MR_Box) (Var_236));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), FactTablePercentFullSpec_53, STATE_VARIABLE_Specs_230_230, &STATE_VARIABLE_Specs_251_251);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 49, &IncompleteSwitchThreshold_54);
    succeeded = (IncompleteSwitchThreshold_54 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_254 = (MR_Integer) 100;
      succeeded = (IncompleteSwitchThreshold_54 <= Var_254);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_272_272 = STATE_VARIABLE_Specs_251_251;
    else
    {
      MR_Word IncompleteSwitchThresholdSpec_55;
      MR_Word Var_257;
      MR_Word Var_258;

      {
        Var_258 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_258, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_258, 1) = ((MR_Box) (IncompleteSwitchThreshold_54));
      }
      {
        Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (Var_258));
        MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[46])));
      }
      {
        IncompleteSwitchThresholdSpec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 1) = ((MR_Box) (Var_257));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), IncompleteSwitchThresholdSpec_55, STATE_VARIABLE_Specs_251_251, &STATE_VARIABLE_Specs_272_272);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 427, &TermNormStr_56);
    succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_56, &TermNormPrime_57);
    if (succeeded)
    {
      *TermNorm_27 = TermNormPrime_57;
      STATE_VARIABLE_Specs_305_305 = STATE_VARIABLE_Specs_272_272;
    }
    else
    {
      MR_Word TypeCtorInfo_842_842;
      MR_Word TermNormSpec_58;
      MR_Word Var_274;
      MR_Word Var_277;
      MR_Word Var_278;
      MR_Word Var_289;
      MR_Word Var_290;

      *TermNorm_27 = (MR_Integer) 0;
      TypeCtorInfo_842_842 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_278 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_278, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_278, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (Var_278));
        MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])));
      }
      {
        Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_274, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_274, 1) = ((MR_Box) (Var_277));
      }
      Var_290 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52]));
      Var_289 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_842_842, Var_290, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TermNormSpec_58 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_842_842, Var_274, Var_289);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TermNormSpec_58, STATE_VARIABLE_Specs_272_272, &STATE_VARIABLE_Specs_305_305);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 433, &Term2NormStr_59);
    succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_59, &Term2NormPrime_60);
    if (succeeded)
    {
      *Term2Norm_28 = Term2NormPrime_60;
      STATE_VARIABLE_Specs_338_338 = STATE_VARIABLE_Specs_305_305;
    }
    else
    {
      MR_Word TypeCtorInfo_843_843;
      MR_Word Term2NormSpec_61;
      MR_Word Var_307;
      MR_Word Var_310;
      MR_Word Var_311;
      MR_Word Var_322;
      MR_Word Var_323;

      *Term2Norm_28 = (MR_Integer) 0;
      TypeCtorInfo_843_843 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_311 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_311, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_311, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_310, 0) = ((MR_Box) (Var_311));
        MR_hl_field(MR_mktag(1), Var_310, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[55])));
      }
      {
        Var_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_307, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_307, 1) = ((MR_Box) (Var_310));
      }
      Var_323 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52]));
      Var_322 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_843_843, Var_323, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      Term2NormSpec_61 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_843_843, Var_307, Var_322);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Term2NormSpec_61, STATE_VARIABLE_Specs_305_305, &STATE_VARIABLE_Specs_338_338);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 142, &ForceDisableTracing_62);
    switch (ForceDisableTracing_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Trace_63;
          MR_Word ExecTrace_64;
          MR_Word DeclDebug_65;
          MR_Word MaybeTraceLevel_66;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 130, &Trace_63);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 197, &ExecTrace_64);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 198, &DeclDebug_65);
          succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_63, ExecTrace_64, DeclDebug_65, &MaybeTraceLevel_66);
          if (succeeded)
            if ((MaybeTraceLevel_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word InconsistentTraceLevelSpec_67;
              MR_Word Var_345;
              MR_Word Var_346;

              *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              {
                Var_346 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_346, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), Var_346, 1) = ((MR_Box) (Trace_63));
              }
              {
                Var_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_345, 0) = ((MR_Box) (Var_346));
                MR_hl_field(MR_mktag(1), Var_345, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])));
              }
              {
                InconsistentTraceLevelSpec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223])));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 1) = ((MR_Box) (Var_345));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), InconsistentTraceLevelSpec_67, STATE_VARIABLE_Specs_338_338, &STATE_VARIABLE_Specs_360_360);
            }
            else
            {
              *TraceLevel_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTraceLevel_66, (MR_Integer) 0)));
              STATE_VARIABLE_Specs_360_360 = STATE_VARIABLE_Specs_338_338;
            }
          else
          {
            MR_Word TypeCtorInfo_844_844;
            MR_Word BadTraceLevelSpec_68;
            MR_Word Var_361;
            MR_Word Var_364;
            MR_Word Var_365;
            MR_Word Var_376;
            MR_Word Var_377;

            *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
            TypeCtorInfo_844_844 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              Var_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_365, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_365, 1) = ((MR_Box) (Trace_63));
            }
            {
              Var_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_364, 0) = ((MR_Box) (Var_365));
              MR_hl_field(MR_mktag(1), Var_364, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])));
            }
            {
              Var_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_361, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
              MR_hl_field(MR_mktag(1), Var_361, 1) = ((MR_Box) (Var_364));
            }
            Var_377 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70]));
            Var_376 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_844_844, Var_377, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
            BadTraceLevelSpec_68 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_844_844, Var_361, Var_376);
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), BadTraceLevelSpec_68, STATE_VARIABLE_Specs_338_338, &STATE_VARIABLE_Specs_360_360);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          STATE_VARIABLE_Specs_360_360 = STATE_VARIABLE_Specs_338_338;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 141, &SuppressStr_69);
    succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_69, &TraceSuppressPrime_70);
    if (succeeded)
    {
      *TraceSuppress_30 = TraceSuppressPrime_70;
      STATE_VARIABLE_Specs_417_417 = STATE_VARIABLE_Specs_360_360;
    }
    else
    {
      MR_Word TraceSuppressSpec_71;
      MR_Word Var_402;
      MR_Word Var_403;

      *TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
      {
        Var_403 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_403, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_403, 1) = ((MR_Box) (SuppressStr_69));
      }
      {
        Var_402 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_402, 0) = ((MR_Box) (Var_403));
        MR_hl_field(MR_mktag(1), Var_402, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])));
      }
      {
        TraceSuppressSpec_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 1) = ((MR_Box) (Var_402));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TraceSuppressSpec_71, STATE_VARIABLE_Specs_360_360, &STATE_VARIABLE_Specs_417_417);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 146, &ForceDisableSSDB_72);
    switch (ForceDisableSSDB_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SSTrace_73;
          MR_Word SSDB_74;
          MR_Word SSTL_75;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 245, &SSTrace_73);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 244, &SSDB_74);
          succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_73, SSDB_74, &SSTL_75);
          if (succeeded)
          {
            *SSTraceLevel_31 = SSTL_75;
            STATE_VARIABLE_Specs_454_454 = STATE_VARIABLE_Specs_417_417;
          }
          else
          {
            MR_Word TypeCtorInfo_845_845;
            MR_Word SSDBSpec_76;
            MR_Word Var_421;
            MR_Word Var_424;
            MR_Word Var_425;
            MR_Word Var_436;
            MR_Word Var_437;

            *SSTraceLevel_31 = (MR_Integer) 0;
            TypeCtorInfo_845_845 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              Var_425 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_425, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), Var_425, 1) = ((MR_Box) (SSTrace_73));
            }
            {
              Var_424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_424, 0) = ((MR_Box) (Var_425));
              MR_hl_field(MR_mktag(1), Var_424, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[76])));
            }
            {
              Var_421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_421, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
              MR_hl_field(MR_mktag(1), Var_421, 1) = ((MR_Box) (Var_424));
            }
            Var_437 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[80]));
            Var_436 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_845_845, Var_437, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
            SSDBSpec_76 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_845_845, Var_421, Var_436);
            libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SSDBSpec_76, STATE_VARIABLE_Specs_417_417, &STATE_VARIABLE_Specs_454_454);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *SSTraceLevel_31 = (MR_Integer) 0;
          STATE_VARIABLE_Specs_454_454 = STATE_VARIABLE_Specs_417_417;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 237, &MaybeThreadSafeStr_77);
    succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_77, &MaybeThreadSafePrime_78);
    if (succeeded)
    {
      *MaybeThreadSafe_32 = MaybeThreadSafePrime_78;
      STATE_VARIABLE_Specs_488_488 = STATE_VARIABLE_Specs_454_454;
    }
    else
    {
      MR_Word TypeCtorInfo_846_846;
      MR_Word MTSSpec_79;
      MR_Word Var_456;
      MR_Word Var_459;
      MR_Word Var_460;
      MR_Word Var_474;
      MR_Word Var_475;

      *MaybeThreadSafe_32 = (MR_Integer) 0;
      TypeCtorInfo_846_846 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_460 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_460, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_460, 1) = ((MR_Box) (MaybeThreadSafeStr_77));
      }
      {
        Var_459 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_459, 0) = ((MR_Box) (Var_460));
        MR_hl_field(MR_mktag(1), Var_459, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87])));
      }
      {
        Var_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_456, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_456, 1) = ((MR_Box) (Var_459));
      }
      Var_475 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[89]));
      Var_474 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_846_846, Var_475, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      MTSSpec_79 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_846_846, Var_456, Var_474);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), MTSSpec_79, STATE_VARIABLE_Specs_454_454, &STATE_VARIABLE_Specs_488_488);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_118, (MR_Integer) 163, &DumpAlias_80);
    succeeded = (strcmp(DumpAlias_80, (MR_String) "") == 0);
    if (succeeded)
    {
      STATE_VARIABLE_Specs_519_519 = STATE_VARIABLE_Specs_488_488;
      STATE_VARIABLE_OptionTable_492_492 = STATE_VARIABLE_OptionTable_0_118;
    }
    else
    {
      MR_String AliasDumpOptions_81;

      succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_80, &AliasDumpOptions_81);
      if (succeeded)
      {
        MR_Word Var_491;

        {
          Var_491 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_491, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_491, 1) = ((MR_Box) (AliasDumpOptions_81));
        }
        mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 164)), ((MR_Box) (Var_491)), STATE_VARIABLE_OptionTable_0_118, &STATE_VARIABLE_OptionTable_492_492);
        STATE_VARIABLE_Specs_519_519 = STATE_VARIABLE_Specs_488_488;
      }
      else
      {
        MR_Word DumpAliasSpec_82;
        MR_Word Var_495;
        MR_Word Var_496;

        {
          Var_496 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_496, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_496, 1) = ((MR_Box) (DumpAlias_80));
        }
        {
          Var_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_495, 0) = ((MR_Box) (Var_496));
          MR_hl_field(MR_mktag(1), Var_495, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[98])));
        }
        {
          DumpAliasSpec_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 1) = ((MR_Box) (Var_495));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), DumpAliasSpec_82, STATE_VARIABLE_Specs_488_488, &STATE_VARIABLE_Specs_519_519);
        STATE_VARIABLE_OptionTable_492_492 = STATE_VARIABLE_OptionTable_0_118;
      }
    }
    TypeCtorInfo_849_849 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    mercury__getopt_io__lookup_string_option_3_p_0(TypeCtorInfo_849_849, STATE_VARIABLE_OptionTable_492_492, ((MR_Box) ((MR_Integer) 164)), &STATE_VARIABLE_DumpOptions_521_521);
    succeeded = (strcmp(STATE_VARIABLE_DumpOptions_521_521, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_DumpOptions_522_522 = (MR_String) "x";
    else
      STATE_VARIABLE_DumpOptions_522_522 = STATE_VARIABLE_DumpOptions_521_521;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_522_522, (MR_Char) 121);
    if (succeeded)
    {
      Var_524 = (MR_Char) 97;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_522_522, Var_524);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_525_525 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_522_522);
    }
    else
      STATE_VARIABLE_DumpOptions_525_525 = STATE_VARIABLE_DumpOptions_522_522;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_525_525, (MR_Char) 97);
    if (succeeded)
    {
      Var_528 = (MR_Char) 117;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_525_525, Var_528);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_529_529 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_525_525);
    }
    else
      STATE_VARIABLE_DumpOptions_529_529 = STATE_VARIABLE_DumpOptions_525_525;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 65);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 66);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 68);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 71);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 80);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 82);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 83);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 98);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 99);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 100);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 102);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 103);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 105);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 108);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 109);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 110);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 112);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 115);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 116);
                                        if (!(succeeded))
                                        {
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 117);
                                          if (!(succeeded))
                                          {
                                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 122);
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
    }
    if (succeeded)
    {
      Var_552 = (MR_Char) 120;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, Var_552);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      STATE_VARIABLE_DumpOptions_553_553 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_529_529);
    }
    else
      STATE_VARIABLE_DumpOptions_553_553 = STATE_VARIABLE_DumpOptions_529_529;
    {
      Var_556 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_556, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_556, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_553_553));
    }
    mercury__map__set_4_p_0(TypeCtorInfo_849_849, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 164)), ((MR_Box) (Var_556)), STATE_VARIABLE_OptionTable_492_492, STATE_VARIABLE_OptionTable_119);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 522, &C_CompilerTypeStr_84);
    succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_84, &C_CompilerTypePrime_85);
    if (succeeded)
    {
      *C_CompilerType_33 = C_CompilerTypePrime_85;
      STATE_VARIABLE_Specs_595_595 = STATE_VARIABLE_Specs_519_519;
    }
    else
    {
      MR_Word TypeCtorInfo_851_851;
      MR_Word CCTpec_86;
      MR_Word Var_559;
      MR_Word Var_562;
      MR_Word Var_563;
      MR_Word Var_577;
      MR_Word Var_578;

      *C_CompilerType_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TypeCtorInfo_851_851 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_563 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_563, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_563, 1) = ((MR_Box) (C_CompilerTypeStr_84));
      }
      {
        Var_562 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_562, 0) = ((MR_Box) (Var_563));
        MR_hl_field(MR_mktag(1), Var_562, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[101])));
      }
      {
        Var_559 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_559, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_559, 1) = ((MR_Box) (Var_562));
      }
      Var_578 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[105]));
      Var_577 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_851_851, Var_578, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      CCTpec_86 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_851_851, Var_559, Var_577);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CCTpec_86, STATE_VARIABLE_Specs_519_519, &STATE_VARIABLE_Specs_595_595);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 523, &CSharp_CompilerTypeStr_87);
    succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_87, &CSharp_CompilerTypePrime_88);
    if (succeeded)
    {
      *CSharp_CompilerType_34 = CSharp_CompilerTypePrime_88;
      STATE_VARIABLE_Specs_631_631 = STATE_VARIABLE_Specs_595_595;
    }
    else
    {
      MR_Word TypeCtorInfo_852_852;
      MR_Word CSCSpec_89;
      MR_Word Var_597;
      MR_Word Var_600;
      MR_Word Var_601;
      MR_Word Var_615;
      MR_Word Var_616;

      *CSharp_CompilerType_34 = (MR_Integer) 2;
      TypeCtorInfo_852_852 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_601 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_601, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_601, 1) = ((MR_Box) (CSharp_CompilerTypeStr_87));
      }
      {
        Var_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_600, 0) = ((MR_Box) (Var_601));
        MR_hl_field(MR_mktag(1), Var_600, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])));
      }
      {
        Var_597 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_597, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_597, 1) = ((MR_Box) (Var_600));
      }
      Var_616 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110]));
      Var_615 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_852_852, Var_616, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      CSCSpec_89 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_852_852, Var_597, Var_615);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CSCSpec_89, STATE_VARIABLE_Specs_595_595, &STATE_VARIABLE_Specs_631_631);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 418, &ReuseConstraintStr_90);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 419, &ReuseConstraintArgNum_91);
    succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_90, ReuseConstraintArgNum_91, &ReuseStrategyPrime_92);
    if (succeeded)
    {
      *ReuseStrategy_35 = ReuseStrategyPrime_92;
      STATE_VARIABLE_Specs_663_663 = STATE_VARIABLE_Specs_631_631;
    }
    else
    {
      MR_Word TypeCtorInfo_853_853;
      MR_Word ReuseConstrSpec_93;
      MR_Word Var_634;
      MR_Word Var_637;
      MR_Word Var_638;
      MR_Word Var_649;
      MR_Word Var_650;

      *ReuseStrategy_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TypeCtorInfo_853_853 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_638 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_638, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_638, 1) = ((MR_Box) (ReuseConstraintStr_90));
      }
      {
        Var_637 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_637, 0) = ((MR_Box) (Var_638));
        MR_hl_field(MR_mktag(1), Var_637, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])));
      }
      {
        Var_634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_634, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_634, 1) = ((MR_Box) (Var_637));
      }
      Var_650 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115]));
      Var_649 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_853_853, Var_650, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      ReuseConstrSpec_93 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_853_853, Var_634, Var_649);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ReuseConstrSpec_93, STATE_VARIABLE_Specs_631_631, &STATE_VARIABLE_Specs_663_663);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 680, &FeedbackFile_94);
    succeeded = (strcmp(FeedbackFile_94, (MR_String) "") == 0);
    if (succeeded)
    {
      *MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      STATE_VARIABLE_Specs_668_668 = STATE_VARIABLE_Specs_663_663;
    }
    else
    {
      MR_Word FeedbackReadResult_96;

      mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_94, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &FeedbackReadResult_96);
      if (((MR_tag((MR_Word) FeedbackReadResult_96)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word Error_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), FeedbackReadResult_96, (MR_Integer) 0)));
        MR_String ErrorMessage_99;
        MR_Word Var_667;
        MR_Word Var_669;

        mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_94, Error_98, &ErrorMessage_99);
        {
          Var_669 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_669, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), Var_669, 1) = ((MR_Box) (ErrorMessage_99));
        }
        {
          Var_667 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_667, 0) = ((MR_Box) (Var_669));
          MR_hl_field(MR_mktag(1), Var_667, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Var_667, STATE_VARIABLE_Specs_663_663, &STATE_VARIABLE_Specs_668_668);
        *MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      else
      {
        MR_Word FeedbackInfo_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), FeedbackReadResult_96, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFeedbackInfo_36 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FeedbackInfo_97));
        }
        STATE_VARIABLE_Specs_668_668 = STATE_VARIABLE_Specs_663_663;
      }
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 662, &HostEnvTypeStr_100);
    succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_100, &HostEnvTypePrime_101);
    if (succeeded)
    {
      *HostEnvType_37 = HostEnvTypePrime_101;
      STATE_VARIABLE_Specs_705_705 = STATE_VARIABLE_Specs_668_668;
    }
    else
    {
      MR_Word TypeCtorInfo_854_854;
      MR_Word HostEnvSpec_102;
      MR_Word Var_672;
      MR_Word Var_675;
      MR_Word Var_676;
      MR_Word Var_687;
      MR_Word Var_688;

      *HostEnvType_37 = (MR_Integer) 0;
      TypeCtorInfo_854_854 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_676 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_676, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_676, 1) = ((MR_Box) (HostEnvTypeStr_100));
      }
      {
        Var_675 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_675, 0) = ((MR_Box) (Var_676));
        MR_hl_field(MR_mktag(1), Var_675, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[118])));
      }
      {
        Var_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_672, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_672, 1) = ((MR_Box) (Var_675));
      }
      Var_688 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122]));
      Var_687 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_854_854, Var_688, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      HostEnvSpec_102 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_854_854, Var_672, Var_687);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), HostEnvSpec_102, STATE_VARIABLE_Specs_668_668, &STATE_VARIABLE_Specs_705_705);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 663, &SystemEnvTypeStr_103);
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
      STATE_VARIABLE_Specs_743_743 = STATE_VARIABLE_Specs_705_705;
    }
    else
    {
      MR_Word TypeCtorInfo_855_855;
      MR_Word SystemEnvSpec_105;
      MR_Word Var_707;
      MR_Word Var_710;
      MR_Word Var_711;
      MR_Word Var_725;
      MR_Word Var_726;

      *SystemEnvType_38 = (MR_Integer) 0;
      TypeCtorInfo_855_855 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_711 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_711, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_711, 1) = ((MR_Box) (SystemEnvTypeStr_103));
      }
      {
        Var_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_710, 0) = ((MR_Box) (Var_711));
        MR_hl_field(MR_mktag(1), Var_710, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])));
      }
      {
        Var_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_707, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_707, 1) = ((MR_Box) (Var_710));
      }
      Var_726 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122]));
      Var_725 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_855_855, Var_726, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      SystemEnvSpec_105 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_855_855, Var_707, Var_725);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), SystemEnvSpec_105, STATE_VARIABLE_Specs_705_705, &STATE_VARIABLE_Specs_743_743);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 664, &TargetEnvTypeStr_106);
    succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_106, &TargetEnvTypePrime_107);
    if (succeeded)
    {
      *TargetEnvType_39 = TargetEnvTypePrime_107;
      STATE_VARIABLE_Specs_781_781 = STATE_VARIABLE_Specs_743_743;
    }
    else
    {
      MR_Word TypeCtorInfo_856_856;
      MR_Word TargetEnvTypeSpec_108;
      MR_Word Var_745;
      MR_Word Var_748;
      MR_Word Var_749;
      MR_Word Var_763;
      MR_Word Var_764;

      *TargetEnvType_39 = (MR_Integer) 0;
      TypeCtorInfo_856_856 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_749 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_749, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_749, 1) = ((MR_Box) (TargetEnvTypeStr_106));
      }
      {
        Var_748 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_748, 0) = ((MR_Box) (Var_749));
        MR_hl_field(MR_mktag(1), Var_748, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])));
      }
      {
        Var_745 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_745, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
        MR_hl_field(MR_mktag(1), Var_745, 1) = ((MR_Box) (Var_748));
      }
      Var_764 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122]));
      Var_763 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_856_856, Var_764, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
      TargetEnvTypeSpec_108 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_856_856, Var_745, Var_763);
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), TargetEnvTypeSpec_108, STATE_VARIABLE_Specs_743_743, &STATE_VARIABLE_Specs_781_781);
    }
    succeeded = (*HostEnvType_37 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (*CSharp_CompilerType_34 == (MR_Integer) 0);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[134]), STATE_VARIABLE_Specs_781_781, &STATE_VARIABLE_Specs_797_797);
    }
    else
      STATE_VARIABLE_Specs_797_797 = STATE_VARIABLE_Specs_781_781;
    libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_119, (MR_Integer) 69, &LimitErrorContextsOptionStrs_110);
    libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_110, &BadLimitErrorContextsOptions_111, LimitErrorContextsMap_40);
    if ((BadLimitErrorContextsOptions_111 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_120 = STATE_VARIABLE_Specs_797_797;
    else
    {
      MR_Word Var_858 = ((MR_Word) (MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_111, (MR_Integer) 1)));
      MR_String Var_859 = ((MR_String) (MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_111, (MR_Integer) 0)));

      if ((Var_858 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word LECSpec_113;
        MR_Word Var_822;
        MR_Word Var_823;

        {
          Var_823 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_823, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_823, 1) = ((MR_Box) (Var_859));
        }
        {
          Var_822 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_822, 0) = ((MR_Box) (Var_823));
          MR_hl_field(MR_mktag(1), Var_822, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])));
        }
        {
          LECSpec_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LECSpec_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
          MR_hl_field(MR_mktag(1), LECSpec_113, 1) = ((MR_Box) (Var_822));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), LECSpec_113, STATE_VARIABLE_Specs_797_797, STATE_VARIABLE_Specs_120);
      }
      else
      {
        MR_Word TypeCtorInfo_857_857;
        MR_Word BadPieces_117;
        MR_Word Var_804;
        MR_Word LECSpec_838;

        BadPieces_117 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(BadLimitErrorContextsOptions_111);
        TypeCtorInfo_857_857 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        Var_804 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_857_857, BadPieces_117, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137]));
        LECSpec_838 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_857_857, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[225]), Var_804);
        libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), LECSpec_838, STATE_VARIABLE_Specs_797_797, STATE_VARIABLE_Specs_120);
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
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word AccumulatingValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      AccumulatingValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1)));
      *AccumulatingValue_6 = AccumulatingValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not accumulating");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_accumulating_option\'/3", Var_12);
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
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_String StringValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      StringValuePrime_8 = ((MR_String) (MR_hl_field(MR_mktag(3), OptionValue_7, (MR_Integer) 1)));
      *StringValue_6 = StringValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not a string");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_string_option\'/3", Var_12);
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
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Integer IntValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      IntValuePrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), OptionValue_7, (MR_Integer) 0)));
      *IntValue_6 = IntValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not an int");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_int_option\'/3", Var_12);
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
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word OptionValue_7;
    MR_Box conv0_OptionValue_7;
    MR_Word BoolValuePrime_8;

    mercury__map__lookup_3_p_0(TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
    OptionValue_7 = ((MR_Word) conv0_OptionValue_7);
    succeeded = ((MR_tag((MR_Word) OptionValue_7)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      BoolValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionValue_7, (MR_Integer) 0)));
      *BoolValue_6 = BoolValuePrime_8;
    }
    else
    {
      MR_String OptionStr_9;
      MR_String Var_12;

      OptionStr_9 = mercury__string__string_1_f_0(TypeCtorInfo_14_14, ((MR_Box) (Option_5)));
      Var_12 = mercury__string__f_43_43_2_f_0(OptionStr_9, (MR_String) "is not a bool");
      {
        mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", Var_12);
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
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "detism"))
            case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "lco"))
            case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((MR_nth_code_unit(HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, HeadVar__1_1, (MR_String) "mintrans"))
                      case_num_0 = (MR_Integer) 9;
                    break;
                }
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "mm"))
                case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "most"))
                case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "osv"))
            case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "paths"))
                case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "petdr"))
                case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, HeadVar__1_1, (MR_String) "poly"))
                case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 115:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "statevar"))
            case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, HeadVar__1_1, (MR_String) "trans"))
            case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(HeadVar__1_1, 1)) == (MR_Integer) 97))
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vanessa"))
                  case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, HeadVar__1_1, (MR_String) "vars"))
                  case_num_0 = (MR_Integer) 19;
                break;
            }
          break;
      }
      if ((case_num_0 < (MR_Integer) 0))
        succeeded = MR_FALSE;
      else
      {
        // we found a match; look up the results
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
