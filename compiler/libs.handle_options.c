/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module libs.handle_options. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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


static const MR_FA_PseudoTypeInfo_Struct2 libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0;

static const MR_VA_PseudoTypeInfo_Struct1 libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2113__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1558);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2111__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1552);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1547);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1542);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2089__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1529);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2085__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1523);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2067__2_2_p_0(
  MR_Word libs__handle_options__HeadVar__1_1516,
  MR_String libs__handle_options__HeadVar__2_1664);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2067__1_2_p_0(
  MR_String libs__handle_options__HeadVar__1_1517,
  MR_String libs__handle_options__HeadVar__2_1666);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2049__1_3_f_0(
  MR_String libs__handle_options__TargetArch_147,
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1504);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2013__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1485);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2003__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1475);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1990__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1458);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1975__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1443);

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word libs__handle_options__X_1);

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * libs__handle_options__X_1);

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void);

static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_Word * libs__handle_options__AccumulatingValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_String * libs__handle_options__StringValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_Integer * libs__handle_options__IntValue_6);

static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_Word * libs__handle_options__BoolValue_6);

static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
  MR_String libs__handle_options__HeadVar__1_1,
  MR_String * libs__handle_options__HeadVar__2_2);

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String libs__handle_options__OptionDescr_6,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__option_neg_implies_5_p_0(
  MR_Word libs__handle_options__SourceOption_6,
  MR_Word libs__handle_options__ImpliedOption_7,
  MR_Word libs__handle_options__ImpliedOptionValue_8,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word libs__handle_options__SourceOption_6,
  MR_Word libs__handle_options__ImpliedOption_7,
  MR_Word libs__handle_options__ImpliedOptionValue_8,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
  MR_Word libs__handle_options__OptionTable0_25,
  MR_Word libs__handle_options__OpMode_26,
  MR_Word libs__handle_options__Target_27,
  MR_Word libs__handle_options__GC_Method_28,
  MR_Word libs__handle_options__TagsMethod0_29,
  MR_Word libs__handle_options__TermNorm_30,
  MR_Word libs__handle_options__Term2Norm_31,
  MR_Word libs__handle_options__TraceLevel_32,
  MR_Word libs__handle_options__TraceSuppress_33,
  MR_Word libs__handle_options__SSTraceLevel_34,
  MR_Word libs__handle_options__MaybeThreadSafe_35,
  MR_Word libs__handle_options__C_CompilerType_36,
  MR_Word libs__handle_options__CSharp_CompilerType_37,
  MR_Word libs__handle_options__ReuseStrategy_38,
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
  MR_Word libs__handle_options__HostEnvType_40,
  MR_Word libs__handle_options__SystemEnvType_41,
  MR_Word libs__handle_options__TargetEnvType_42,
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_214,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_215,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_216);

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_116,
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_117,
  MR_Word * libs__handle_options__Target_24,
  MR_Word * libs__handle_options__GC_Method_25,
  MR_Word * libs__handle_options__TagsMethod_26,
  MR_Word * libs__handle_options__TermNorm_27,
  MR_Word * libs__handle_options__Term2Norm_28,
  MR_Word * libs__handle_options__TraceLevel_29,
  MR_Word * libs__handle_options__TraceSuppress_30,
  MR_Word * libs__handle_options__SSTraceLevel_31,
  MR_Word * libs__handle_options__MaybeThreadSafe_32,
  MR_Word * libs__handle_options__C_CompilerType_33,
  MR_Word * libs__handle_options__CSharp_CompilerType_34,
  MR_Word * libs__handle_options__ReuseStrategy_35,
  MR_Word * libs__handle_options__MaybeFeedbackInfo_36,
  MR_Word * libs__handle_options__HostEnvType_37,
  MR_Word * libs__handle_options__SystemEnvType_38,
  MR_Word * libs__handle_options__TargetEnvType_39,
  MR_Word * libs__handle_options__LimitErrorContextsMap_40,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_118);

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
  MR_Word libs__handle_options__MaybeOptionTable0_6,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_41,
  MR_Word * libs__handle_options__Globals_8);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box libs__handle_options__wrapper_arg_2,
  MR_Box libs__handle_options__wrapper_arg_3,
  MR_Box * libs__handle_options__wrapper_arg_4);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  void * libs__handle_options__env_ptr_arg);

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  MR_Box libs__handle_options__closure_arg,
  MR_Box * libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2,
  MR_Cont libs__handle_options__cont,
  void * libs__handle_options__cont_env_ptr);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box libs__handle_options__wrapper_arg_2,
  MR_Box libs__handle_options__wrapper_arg_3,
  MR_Box * libs__handle_options__wrapper_arg_4);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  void * libs__handle_options__env_ptr_arg);

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  MR_Box libs__handle_options__closure_arg,
  MR_Box * libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2,
  MR_Cont libs__handle_options__cont,
  void * libs__handle_options__cont_env_ptr);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[242][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[6][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[11][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[9][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[2][6];


/* sealed */ struct libs__handle_options__vector_common_type_8_0_s {
  const MR_String libs__handle_options__vector_common_type_8_0__vct_8_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_8_0_s libs__handle_options_vector_common_8[20];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[242][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2016 The Mercury team\n")),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[86])))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[13])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--host-env-type"))
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
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type microsoft"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--host-env-type posix"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which disables tags."))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[134])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits 0"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Using"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[138])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is either unspecified or invalid."))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--num-tag-bits"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the value of the"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[151])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[156]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[169])))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[171])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[172])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[177])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[179])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[183])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[187]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[188])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[189])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[193]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[197]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[198])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[199]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[202])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[198])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[208]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[198])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[210]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[213])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[233]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[237]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 239 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 240 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 241 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_2[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__handle_options____vpti_pred_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[1])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[2])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[3])),
    ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_2[4])),
    ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_special_data_0)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__handle_options__getopt_io__pti_maybe_option_table_1__plain_libs__options__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_3[0])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[1])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_3[4])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[5])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[6])),
    ((MR_Box) (&libs__handle_options_scalar_common_3[7]))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_6[9][1] = {
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
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 999999))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 14))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[2][6] = {
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
};


static /* final */ const struct libs__handle_options__vector_common_type_8_0_s libs__handle_options_vector_common_8[20] = {
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
#line 2422 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2422 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2422 "handle_options.m"
{
#line 2422 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


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

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2113__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1558)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1559;
    MR_String libs__handle_options__V_1560_1560;
    MR_String libs__handle_options__V_1561_1561;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1561_1561;

    {
      libs__handle_options__conv1_V_1561_1561 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_180), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1558)));
    }
    libs__handle_options__V_1561_1561 = ((MR_String) libs__handle_options__conv1_V_1561_1561);
    {
      libs__handle_options__V_1560_1560 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1561_1561, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1559 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1560_1560, (MR_String) "hrls");
    }
    return libs__handle_options__LambdaHeadVar__2_1559;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2111__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1552)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1553;
    MR_String libs__handle_options__V_1554_1554;
    MR_String libs__handle_options__V_1555_1555;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1555_1555;

    {
      libs__handle_options__conv1_V_1555_1555 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_180), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1552)));
    }
    libs__handle_options__V_1555_1555 = ((MR_String) libs__handle_options__conv1_V_1555_1555);
    {
      libs__handle_options__V_1554_1554 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1555_1555, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1553 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1554_1554, (MR_String) "mihs");
    }
    return libs__handle_options__LambdaHeadVar__2_1553;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1547)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1548;
    MR_String libs__handle_options__V_1549_1549;

    {
      libs__handle_options__V_1549_1549 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1547, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1548 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1549_1549, (MR_String) "hrls");
    }
    return libs__handle_options__LambdaHeadVar__2_1548;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1542)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1543;
    MR_String libs__handle_options__V_1544_1544;

    {
      libs__handle_options__V_1544_1544 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1542, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1543 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1544_1544, (MR_String) "mihs");
    }
    return libs__handle_options__LambdaHeadVar__2_1543;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2089__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1529)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1530;
    MR_String libs__handle_options__V_1531_1531;
    MR_String libs__handle_options__V_1532_1532;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1532_1532;

    {
      libs__handle_options__conv1_V_1532_1532 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_180), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1529)));
    }
    libs__handle_options__V_1532_1532 = ((MR_String) libs__handle_options__conv1_V_1532_1532);
    {
      libs__handle_options__V_1531_1531 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1532_1532, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1530 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1531_1531, (MR_String) "inits");
    }
    return libs__handle_options__LambdaHeadVar__2_1530;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2085__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_180,
  MR_String libs__handle_options__LambdaHeadVar__1_1523)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1524;
    MR_String libs__handle_options__V_1525_1525;
    MR_String libs__handle_options__V_1526_1526;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1526_1526;

    {
      libs__handle_options__conv1_V_1526_1526 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_180), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1523)));
    }
    libs__handle_options__V_1526_1526 = ((MR_String) libs__handle_options__conv1_V_1526_1526);
    {
      libs__handle_options__V_1525_1525 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1526_1526, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1524 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1525_1525, (MR_String) "lib");
    }
    return libs__handle_options__LambdaHeadVar__2_1524;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2067__2_2_p_0(
  MR_Word libs__handle_options__HeadVar__1_1516,
  MR_String libs__handle_options__HeadVar__2_1664)
{
  {
    MR_bool libs__handle_options__succeeded;

    {
      libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1516, ((MR_Box) (libs__handle_options__HeadVar__2_1664)));
    }
    return libs__handle_options__succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2067__1_2_p_0(
  MR_String libs__handle_options__HeadVar__1_1517,
  MR_String libs__handle_options__HeadVar__2_1666)
{
  {
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1517, libs__handle_options__HeadVar__2_1666) == 0);

    return libs__handle_options__succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2049__1_3_f_0(
  MR_String libs__handle_options__TargetArch_147,
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1504)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1505;
    MR_String libs__handle_options__V_1506_1506;
    MR_String libs__handle_options__V_1507_1507;

    {
      libs__handle_options__V_1507_1507 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1504, (MR_String) "Mercury");
    }
    {
      libs__handle_options__V_1506_1506 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1507_1507, libs__handle_options__GradeString_160);
    }
    {
      libs__handle_options__LambdaHeadVar__2_1505 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1506_1506, libs__handle_options__TargetArch_147);
    }
    return libs__handle_options__LambdaHeadVar__2_1505;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2013__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1485)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1486;
    MR_String libs__handle_options__V_1487_1487;

    {
      libs__handle_options__V_1487_1487 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1485, (MR_String) "modules");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1486 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1487_1487, libs__handle_options__GradeString_160);
    }
    return libs__handle_options__LambdaHeadVar__2_1486;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2003__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1475)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1476;
    MR_String libs__handle_options__V_1477_1477;

    {
      libs__handle_options__V_1477_1477 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_160);
    }
    {
      libs__handle_options__LambdaHeadVar__2_1476 = mercury__dir__make_path_name_2_f_0(libs__handle_options__LambdaHeadVar__1_1475, libs__handle_options__V_1477_1477);
    }
    return libs__handle_options__LambdaHeadVar__2_1476;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1990__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1458)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1459;
    MR_String libs__handle_options__V_1460_1460;
    MR_String libs__handle_options__V_1461_1461;

    {
      libs__handle_options__V_1461_1461 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1458, (MR_String) "lib");
    }
    {
      libs__handle_options__V_1460_1460 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1461_1461, libs__handle_options__GradeString_160);
    }
    {
      libs__handle_options__LambdaHeadVar__2_1459 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1460_1460, (MR_String) "inc");
    }
    return libs__handle_options__LambdaHeadVar__2_1459;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1975__1_2_f_0(
  MR_String libs__handle_options__GradeString_160,
  MR_String libs__handle_options__LambdaHeadVar__1_1443)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1444;
    MR_String libs__handle_options__V_1445_1445;

    {
      libs__handle_options__V_1445_1445 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1443, (MR_String) "lib");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1444 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1445_1445, libs__handle_options__GradeString_160);
    }
    return libs__handle_options__LambdaHeadVar__2_1444;
  }
}

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word libs__handle_options__X_1)
{
  {
    MR_bool libs__handle_options__succeeded;

{
#define MR_PROC_LABEL libs__handle_options__unsafe_set_already_printed_usage_1_p_0

	MR_Word X;

	X =  libs__handle_options__X_1 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * libs__handle_options__X_1)
{
  {
    MR_bool libs__handle_options__succeeded;

{
#define MR_PROC_LABEL libs__handle_options__unsafe_get_already_printed_usage_1_p_0

	MR_Word X;

		{
X = libs__handle_options__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	 *libs__handle_options__X_1  = X;
}
  }
}

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
{
  {
    MR_bool libs__handle_options__succeeded;

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
    MR_bool libs__handle_options__succeeded;

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
    MR_bool libs__handle_options__succeeded;

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
    MR_bool libs__handle_options__succeeded;

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
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_Word * libs__handle_options__AccumulatingValue_6)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word libs__handle_options__OptionValue_7;
    MR_Box libs__handle_options__conv0_OptionValue_7;
    MR_Word libs__handle_options__AccumulatingValuePrime_8;

    {
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__AccumulatingValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 1)));
        *libs__handle_options__AccumulatingValue_6 = libs__handle_options__AccumulatingValuePrime_8;
      }
    else
      {
        MR_String libs__handle_options__OptionStr_9;
        MR_String libs__handle_options__V_12_12;

        {
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
        {
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not accumulating");
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_accumulating_option\'/3", libs__handle_options__V_12_12);
          return;
        }
      }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_String * libs__handle_options__StringValue_6)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word libs__handle_options__OptionValue_7;
    MR_Box libs__handle_options__conv0_OptionValue_7;
    MR_String libs__handle_options__StringValuePrime_8;

    {
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__StringValuePrime_8 = ((MR_String) (MR_hl_field(MR_mktag(3), libs__handle_options__OptionValue_7, (MR_Integer) 1)));
        *libs__handle_options__StringValue_6 = libs__handle_options__StringValuePrime_8;
      }
    else
      {
        MR_String libs__handle_options__OptionStr_9;
        MR_String libs__handle_options__V_12_12;

        {
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
        {
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not a string");
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_string_option\'/3", libs__handle_options__V_12_12);
          return;
        }
      }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_Integer * libs__handle_options__IntValue_6)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word libs__handle_options__OptionValue_7;
    MR_Box libs__handle_options__conv0_OptionValue_7;
    MR_Integer libs__handle_options__IntValuePrime_8;

    {
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 2)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__IntValuePrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), libs__handle_options__OptionValue_7, (MR_Integer) 0)));
        *libs__handle_options__IntValue_6 = libs__handle_options__IntValuePrime_8;
      }
    else
      {
        MR_String libs__handle_options__OptionStr_9;
        MR_String libs__handle_options__V_12_12;

        {
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
        {
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not an int");
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_int_option\'/3", libs__handle_options__V_12_12);
          return;
        }
      }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
  MR_Word libs__handle_options__OptionTable_4,
  MR_Word libs__handle_options__Option_5,
  MR_Word * libs__handle_options__BoolValue_6)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__TypeCtorInfo_14_14 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_Word libs__handle_options__OptionValue_7;
    MR_Box libs__handle_options__conv0_OptionValue_7;
    MR_Word libs__handle_options__BoolValuePrime_8;

    {
      mercury__map__lookup_3_p_0(libs__handle_options__TypeCtorInfo_14_14, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__handle_options__OptionTable_4, ((MR_Box) (libs__handle_options__Option_5)), &libs__handle_options__conv0_OptionValue_7);
    }
    libs__handle_options__OptionValue_7 = ((MR_Word) libs__handle_options__conv0_OptionValue_7);
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OptionValue_7)) == (MR_mktag((MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__BoolValuePrime_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OptionValue_7, (MR_Integer) 0)));
        *libs__handle_options__BoolValue_6 = libs__handle_options__BoolValuePrime_8;
      }
    else
      {
        MR_String libs__handle_options__OptionStr_9;
        MR_String libs__handle_options__V_12_12;

        {
          libs__handle_options__OptionStr_9 = mercury__string__string_1_f_0(libs__handle_options__TypeCtorInfo_14_14, ((MR_Box) (libs__handle_options__Option_5)));
        }
        {
          libs__handle_options__V_12_12 = mercury__string__f_43_43_2_f_0(libs__handle_options__OptionStr_9, (MR_String) "is not a bool");
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.handle_options", (MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", libs__handle_options__V_12_12);
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
  MR_String libs__handle_options__HeadVar__1_1,
  MR_String * libs__handle_options__HeadVar__2_2)
{
  {
    MR_bool libs__handle_options__succeeded;

    {
      MR_Integer libs__handle_options__case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 0)) {
        case (MR_Integer) 65:
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "ALL"))
            libs__handle_options__case_num_0 = (MR_Integer) 0;
          break;
        case (MR_Integer) 97:
          if (((((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 108)) && (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 108))))
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
              case (MR_Integer) 0:
                libs__handle_options__case_num_0 = (MR_Integer) 1;
                break;
              case (MR_Integer) 68:
                if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "allD"))
                  libs__handle_options__case_num_0 = (MR_Integer) 2;
                break;
            }
          break;
        case (MR_Integer) 99:
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
            case (MR_Integer) 109:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "cmp"))
                libs__handle_options__case_num_0 = (MR_Integer) 3;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "codegen"))
                libs__handle_options__case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "ctgc"))
                libs__handle_options__case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 100:
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "detism"))
            libs__handle_options__case_num_0 = (MR_Integer) 6;
          break;
        case (MR_Integer) 108:
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "lco"))
            libs__handle_options__case_num_0 = (MR_Integer) 7;
          break;
        case (MR_Integer) 109:
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
            case (MR_Integer) 105:
              if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) == (MR_Integer) 110))
                switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 3)) {
                  case (MR_Integer) 0:
                    libs__handle_options__case_num_0 = (MR_Integer) 8;
                    break;
                  case (MR_Integer) 116:
                    if (MR_offset_streq(4, libs__handle_options__HeadVar__1_1, (MR_String) "mintrans"))
                      libs__handle_options__case_num_0 = (MR_Integer) 9;
                    break;
                }
              break;
            case (MR_Integer) 109:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "mm"))
                libs__handle_options__case_num_0 = (MR_Integer) 10;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "most"))
                libs__handle_options__case_num_0 = (MR_Integer) 11;
              break;
          }
          break;
        case (MR_Integer) 111:
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "osv"))
            libs__handle_options__case_num_0 = (MR_Integer) 12;
          break;
        case (MR_Integer) 112:
          switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) {
            case (MR_Integer) 97:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "paths"))
                libs__handle_options__case_num_0 = (MR_Integer) 13;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "petdr"))
                libs__handle_options__case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, libs__handle_options__HeadVar__1_1, (MR_String) "poly"))
                libs__handle_options__case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 115:
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "statevar"))
            libs__handle_options__case_num_0 = (MR_Integer) 16;
          break;
        case (MR_Integer) 116:
          if (MR_offset_streq(1, libs__handle_options__HeadVar__1_1, (MR_String) "trans"))
            libs__handle_options__case_num_0 = (MR_Integer) 17;
          break;
        case (MR_Integer) 118:
          if (((MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 1)) == (MR_Integer) 97))
            switch (MR_nth_code_unit(libs__handle_options__HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vanessa"))
                  libs__handle_options__case_num_0 = (MR_Integer) 18;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(3, libs__handle_options__HeadVar__1_1, (MR_String) "vars"))
                  libs__handle_options__case_num_0 = (MR_Integer) 19;
                break;
            }
          break;
      }
      if ((libs__handle_options__case_num_0 < (MR_Integer) 0))
        libs__handle_options__succeeded = MR_FALSE;
      else
        {
          /* we found a match; look up the results */
          *libs__handle_options__HeadVar__2_2 = ((&libs__handle_options_vector_common_8[0 + libs__handle_options__case_num_0]))->libs__handle_options__vector_common_type_8_0__vct_8_f_0;
          libs__handle_options__succeeded = MR_TRUE;
        }
    }
    return libs__handle_options__succeeded;
  }
}

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String libs__handle_options__OptionDescr_6,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__WarnSmart_9;

    {
      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 117, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 24, &libs__handle_options__WarnSmart_9);
    }
    switch (libs__handle_options__WarnSmart_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__Halt_10;

          {
            mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
          }
          {
            mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_6);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) ".\n");
          }
          {
            libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_12, (MR_Integer) 2, &libs__handle_options__Halt_10);
          }
          switch (libs__handle_options__Halt_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
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
  MR_Word libs__handle_options__SourceOption_6,
  MR_Word libs__handle_options__ImpliedOption_7,
  MR_Word libs__handle_options__ImpliedOptionValue_8,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__SourceOptionValue_10;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
    switch (libs__handle_options__SourceOptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
        }
        break;
      case (MR_Integer) 1:
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word libs__handle_options__SourceOption_6,
  MR_Word libs__handle_options__ImpliedOption_7,
  MR_Word libs__handle_options__ImpliedOptionValue_8,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_11,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_12)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__SourceOptionValue_10;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__SourceOption_6, &libs__handle_options__SourceOptionValue_10);
    }
    switch (libs__handle_options__SourceOptionValue_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *libs__handle_options__STATE_VARIABLE_Globals_12 = libs__handle_options__STATE_VARIABLE_Globals_0_11;
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0(libs__handle_options__ImpliedOption_7, libs__handle_options__ImpliedOptionValue_8, libs__handle_options__STATE_VARIABLE_Globals_0_11, libs__handle_options__STATE_VARIABLE_Globals_12);
        }
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_2_p_0(
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_12,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_13)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__OptFrames_4;
    MR_Word libs__handle_options__OptLocalVars_5;
    MR_Integer libs__handle_options__OptRepeat_6;
    MR_Word libs__handle_options__UnboxedFloat_7;
    MR_Word libs__handle_options__StaticGroundFloats_8;
    MR_Word libs__handle_options__NonLocalGotos_9;
    MR_Word libs__handle_options__AsmLabels_10;
    MR_Word libs__handle_options__StaticCodeAddrs_11;
    MR_Word libs__handle_options__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]);
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_17_17;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_22_22;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_27_27;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_32_32;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_40_40;
    MR_Word libs__handle_options__V_44_44;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_45_45;
    MR_Word libs__handle_options__V_49_49;
    MR_Word libs__handle_options__SourceOptionValue_57;
    MR_Word libs__handle_options__SourceOptionValue_65;
    MR_Word libs__handle_options__SourceOptionValue_73;
    MR_Word libs__handle_options__SourceOptionValue_81;
    MR_Integer libs__handle_options__V_37_37;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_12, (MR_Integer) 366, &libs__handle_options__SourceOptionValue_57);
    }
    switch (libs__handle_options__SourceOptionValue_57) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_17_17 = libs__handle_options__STATE_VARIABLE_Globals_0_12;
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 464, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_0_12, &libs__handle_options__STATE_VARIABLE_Globals_17_17);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_17_17, (MR_Integer) 470, &libs__handle_options__SourceOptionValue_65);
    }
    switch (libs__handle_options__SourceOptionValue_65) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_22_22 = libs__handle_options__STATE_VARIABLE_Globals_17_17;
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 467, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_17_17, &libs__handle_options__STATE_VARIABLE_Globals_22_22);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_22_22, (MR_Integer) 470, &libs__handle_options__SourceOptionValue_73);
    }
    switch (libs__handle_options__SourceOptionValue_73) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_27_27 = libs__handle_options__STATE_VARIABLE_Globals_22_22;
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 460, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_22_22, &libs__handle_options__STATE_VARIABLE_Globals_27_27);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_27_27, (MR_Integer) 469, &libs__handle_options__SourceOptionValue_81);
    }
    switch (libs__handle_options__SourceOptionValue_81) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_32_32 = libs__handle_options__STATE_VARIABLE_Globals_27_27;
        break;
      case (MR_Integer) 1:
        {
          libs__globals__set_option_4_p_0((MR_Integer) 298, libs__handle_options__V_16_16, libs__handle_options__STATE_VARIABLE_Globals_27_27, &libs__handle_options__STATE_VARIABLE_Globals_32_32);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 470, &libs__handle_options__OptFrames_4);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 464, &libs__handle_options__OptLocalVars_5);
    }
    {
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_32_32, (MR_Integer) 473, &libs__handle_options__OptRepeat_6);
    }
    libs__handle_options__succeeded = (libs__handle_options__OptFrames_4 == (MR_Integer) 1);
    if (!(libs__handle_options__succeeded))
      libs__handle_options__succeeded = (libs__handle_options__OptLocalVars_5 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_37_37 = (MR_Integer) 1;
        libs__handle_options__succeeded = (libs__handle_options__OptRepeat_6 < libs__handle_options__V_37_37);
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 473, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[8]), libs__handle_options__STATE_VARIABLE_Globals_32_32, &libs__handle_options__STATE_VARIABLE_Globals_40_40);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_40_40 = libs__handle_options__STATE_VARIABLE_Globals_32_32;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_40_40, (MR_Integer) 243, &libs__handle_options__UnboxedFloat_7);
    }
    switch (libs__handle_options__UnboxedFloat_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        libs__handle_options__StaticGroundFloats_8 = (MR_Integer) 1;
        break;
    }
    {
      libs__handle_options__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_44_44, 0) = ((MR_Box) (libs__handle_options__StaticGroundFloats_8));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 445, libs__handle_options__V_44_44, libs__handle_options__STATE_VARIABLE_Globals_40_40, &libs__handle_options__STATE_VARIABLE_Globals_45_45);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 249, &libs__handle_options__NonLocalGotos_9);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_45_45, (MR_Integer) 251, &libs__handle_options__AsmLabels_10);
    }
    libs__handle_options__succeeded = (libs__handle_options__NonLocalGotos_9 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__AsmLabels_10 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 0;
    else
      libs__handle_options__StaticCodeAddrs_11 = (MR_Integer) 1;
    {
      libs__handle_options__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_49_49, 0) = ((MR_Box) (libs__handle_options__StaticCodeAddrs_11));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 446, libs__handle_options__V_49_49, libs__handle_options__STATE_VARIABLE_Globals_45_45, libs__handle_options__STATE_VARIABLE_Globals_13);
    }
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_13(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv10_LambdaHeadVar__2_1559;

    {
      libs__handle_options__conv10_LambdaHeadVar__2_1559 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2113__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_LambdaHeadVar__2_1559));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_12(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv9_LambdaHeadVar__2_1553;

    {
      libs__handle_options__conv9_LambdaHeadVar__2_1553 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2111__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_LambdaHeadVar__2_1553));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_11(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv8_LambdaHeadVar__2_1548;

    {
      libs__handle_options__conv8_LambdaHeadVar__2_1548 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2120__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_LambdaHeadVar__2_1548));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_10(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv7_LambdaHeadVar__2_1543;

    {
      libs__handle_options__conv7_LambdaHeadVar__2_1543 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2119__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_LambdaHeadVar__2_1543));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_9(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv6_LambdaHeadVar__2_1530;

    {
      libs__handle_options__conv6_LambdaHeadVar__2_1530 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2089__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_LambdaHeadVar__2_1530));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_8(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv5_LambdaHeadVar__2_1524;

    {
      libs__handle_options__conv5_LambdaHeadVar__2_1524 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2085__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_LambdaHeadVar__2_1524));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_7(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

    {
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2067__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    return libs__handle_options__succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_6(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

    {
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2067__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    return libs__handle_options__succeeded;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_5(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv4_LambdaHeadVar__2_1505;

    {
      libs__handle_options__conv4_LambdaHeadVar__2_1505 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2049__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_LambdaHeadVar__2_1505));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_4(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv3_LambdaHeadVar__2_1486;

    {
      libs__handle_options__conv3_LambdaHeadVar__2_1486 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2013__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_LambdaHeadVar__2_1486));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_3(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv2_LambdaHeadVar__2_1476;

    {
      libs__handle_options__conv2_LambdaHeadVar__2_1476 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2003__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_LambdaHeadVar__2_1476));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_2(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv1_LambdaHeadVar__2_1459;

    {
      libs__handle_options__conv1_LambdaHeadVar__2_1459 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1990__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_LambdaHeadVar__2_1459));
    return libs__handle_options__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv0_LambdaHeadVar__2_1444;

    {
      libs__handle_options__conv0_LambdaHeadVar__2_1444 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1975__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_LambdaHeadVar__2_1444));
    return libs__handle_options__wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_options_to_globals_24_p_0(
  MR_Word libs__handle_options__OptionTable0_25,
  MR_Word libs__handle_options__OpMode_26,
  MR_Word libs__handle_options__Target_27,
  MR_Word libs__handle_options__GC_Method_28,
  MR_Word libs__handle_options__TagsMethod0_29,
  MR_Word libs__handle_options__TermNorm_30,
  MR_Word libs__handle_options__Term2Norm_31,
  MR_Word libs__handle_options__TraceLevel_32,
  MR_Word libs__handle_options__TraceSuppress_33,
  MR_Word libs__handle_options__SSTraceLevel_34,
  MR_Word libs__handle_options__MaybeThreadSafe_35,
  MR_Word libs__handle_options__C_CompilerType_36,
  MR_Word libs__handle_options__CSharp_CompilerType_37,
  MR_Word libs__handle_options__ReuseStrategy_38,
  MR_Word libs__handle_options__MaybeFeedbackInfo_39,
  MR_Word libs__handle_options__HostEnvType_40,
  MR_Word libs__handle_options__SystemEnvType_41,
  MR_Word libs__handle_options__TargetEnvType_42,
  MR_Word libs__handle_options__LimitErrorContextsMap_43,
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_214,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_215,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_216)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__TypeCtorInfo_1660_1660 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    MR_String libs__handle_options__InstallCmd_47;
    MR_Word libs__handle_options__FileInstallCmd_48;
    MR_String libs__handle_options__EventSetFileName0_50;
    MR_Word libs__handle_options__GCIsConservative_53;
    MR_Word libs__handle_options__PregeneratedDist_54;
    MR_Integer libs__handle_options__NumTagBits0_55;
    MR_Integer libs__handle_options__NumTagBits1_56;
    MR_Integer libs__handle_options__NumTagBits_57;
    MR_Word libs__handle_options__TagsMethod_59;
    MR_Word libs__handle_options__GradeSupportsParConj_60;
    MR_Word libs__handle_options__Parallel_61;
    MR_Word libs__handle_options__Threadscope_62;
    MR_Word libs__handle_options__ImplicitParallelism_64;
    MR_Word libs__handle_options__LibLinkages0_68;
    MR_Word libs__handle_options__InvokedByMMCMake_71;
    MR_Word libs__handle_options__TransOpt_74;
    MR_Word libs__handle_options__InterModOpt_77;
    MR_Word libs__handle_options__InterModAnalysis_78;
    MR_Word libs__handle_options__MaybeStandaloneInt_80;
    MR_Word libs__handle_options__ExtraInitFunctions_81;
    MR_Word libs__handle_options__Smart_85;
    MR_Word libs__handle_options__VeryVerbose_86;
    MR_Word libs__handle_options__Statistics_87;
    MR_Integer libs__handle_options__DebugLiveness_88;
    MR_Integer libs__handle_options__DebugModesPredId_92;
    MR_Word libs__handle_options__DebugUnneededCodePredNames_93;
    MR_Word libs__handle_options__DebugOptPredIdStrs_96;
    MR_Word libs__handle_options__DebugOptPredNames_97;
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_102;
    MR_Word libs__handle_options__DumpHLDSPredIds_103;
    MR_Word libs__handle_options__UseTrail_109;
    MR_Word libs__handle_options__HighLevelCode_110;
    MR_Word libs__handle_options__UseMinimalModelStackCopy_111;
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_112;
    MR_Word libs__handle_options__UseMinimalModel_113;
    MR_Word libs__handle_options__ProfOptimized_121;
    MR_String libs__handle_options__ExpComp_122;
    MR_Word libs__handle_options__TraceOptimized_123;
    MR_Word libs__handle_options__TraceLevelIsNone_124;
    MR_Word libs__handle_options__ProfileDeep_126;
    MR_Word libs__handle_options__RecordTermSizesAsWords_130;
    MR_Word libs__handle_options__RecordTermSizesAsCells_131;
    MR_Word libs__handle_options__PutNondetEnvOnHeap_135;
    MR_Word libs__handle_options__DisablePneg_137;
    MR_Word libs__handle_options__DisableCut_138;
    MR_Word libs__handle_options__DumpHLDSStages_139;
    MR_Word libs__handle_options__DumpTraceStages_140;
    MR_Word libs__handle_options__ParallelLiveness_141;
    MR_Word libs__handle_options__ParallelCodeGen_142;
    MR_String libs__handle_options__TargetArch_147;
    MR_Word libs__handle_options__MaybeStdLibDir_148;
    MR_Word libs__handle_options__MaybeConfDir_154;
    MR_Word libs__handle_options__ConfigFile_157;
    MR_Word libs__handle_options__MercuryLibDirs_159;
    MR_String libs__handle_options__GradeString_160;
    MR_Word libs__handle_options__UseSearchDirs_174;
    MR_Word libs__handle_options__UseGradeSubdirs_177;
    MR_Word libs__handle_options__SearchLibFilesDirs_178;
    MR_Word libs__handle_options__IntermodDirs2_179;
    MR_Word libs__handle_options__ToGradeSubdir_180;
    MR_Word libs__handle_options__LinkLibDirs_189;
    MR_Word libs__handle_options__InitDirs_192;
    MR_Word libs__handle_options__UseSubdirs_193;
    MR_Word libs__handle_options__WarnNonTailRec_203;
    MR_Word libs__handle_options__BackendForeignLanguages_209;
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_210;
    MR_Integer libs__handle_options__CompareSpec_213;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_221_221;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_222_222;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_228_228;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_235_235;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_256_256;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_287_287;
    MR_Word libs__handle_options__V_289_289;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_290_290;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_291_291;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_309_309;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_332_332;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_353_353;
    MR_Word libs__handle_options__V_356_356;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_357_357;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_361_361;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_490_490;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_495_495;
    MR_Word libs__handle_options__V_499_499;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_500_500;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_505_505;
    MR_Word libs__handle_options__V_509_509;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_510_510;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_515_515;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_520_520;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_525_525;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_530_530;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_535_535;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_544_544;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_549_549;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_553_553;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_574_574;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_595_595;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_598_598;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_620_620;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_624_624;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_629_629;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_634_634;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_639_639;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_644_644;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_649_649;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_654_654;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_660_660;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_665_665;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_670_670;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_675_675;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_680_680;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_684_684;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_689_689;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_694_694;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_700_700;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_711_711;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_716_716;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_722_722;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_739_739;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_744_744;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_749_749;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_754_754;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_760_760;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_765_765;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_770_770;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_775_775;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_783_783;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_787_787;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_793_793;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_798_798;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_804_804;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_816_816;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_820_820;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_825_825;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_830_830;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_835_835;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_850_850;
    MR_Word libs__handle_options__V_873_873;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_874_874;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_919_919;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_922_922;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_926_926;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_931_931;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_936_936;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_940_940;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_944_944;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_949_949;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_954_954;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_959_959;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_964_964;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_970_970;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_975_975;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_980_980;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_985_985;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_990_990;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_995_995;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1000_1000;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1005_1005;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1010_1010;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1015_1015;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1020_1020;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1025_1025;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1030_1030;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1123_1123;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1128_1128;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1140_1140;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1151_1151;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1161_1161;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1168_1168;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1187_1187;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1191_1191;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1196_1196;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1201_1201;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1206_1206;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1211_1211;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1216_1216;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1221_1221;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1270_1270;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1288_1288;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1292_1292;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1297_1297;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1302_1302;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1307_1307;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1312_1312;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1317_1317;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1322_1322;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1327_1327;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1332_1332;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1337_1337;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1343_1343;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1347_1347;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1360_1360;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1365_1365;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1370_1370;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1375_1375;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1380_1380;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1385_1385;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1391_1391;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1396_1396;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1400_1400;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1415_1415;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1423_1423;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1435_1435;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1492_1492;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1499_1499;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1520_1520;
    MR_Word libs__handle_options__V_1536_1536;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1537_1537;
    MR_Word libs__handle_options__V_1539_1539;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1540_1540;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1576_1576;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1580_1580;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1603_1603;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1614_1614;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1625_1625;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1634_1634;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1639_1639;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1645_1645;
    MR_Word libs__handle_options__V_73_73;
    MR_String libs__handle_options__V_82_82;
    MR_Word libs__handle_options__V_656_656;
    MR_Word libs__handle_options__V_657_657;
    MR_Word libs__handle_options__V_696_696;
    MR_Word libs__handle_options__V_697_697;
    MR_Word libs__handle_options__V_84_84;
    MR_Word libs__handle_options__V_1672_1672;
    MR_Word libs__handle_options__V_713_713;
    MR_Word libs__handle_options__V_718_718;
    MR_Word libs__handle_options__V_719_719;
    MR_String libs__handle_options__AllDumpOptions_89;
    MR_String libs__handle_options__V_779_779;
    MR_Word libs__handle_options__V_1387_1387;
    MR_Word libs__handle_options__V_1388_1388;
    MR_String libs__handle_options__V_1428_1428;
    MR_Word libs__handle_options__ToMihsSubdir_194;
    MR_Word libs__handle_options__ToHrlsSubdir_195;
    MR_Integer libs__handle_options__V_1636_1636;

    {
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 623)), &libs__handle_options__InstallCmd_47);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_47, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String libs__handle_options__InstallCmdDirOption_49;

        {
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1660_1660, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 624)), &libs__handle_options__InstallCmdDirOption_49);
        }
        {
          libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 0) = ((MR_Box) (libs__handle_options__InstallCmd_47));
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_49));
        }
      }
    {
      libs__globals__globals_init_21_p_0(libs__handle_options__OptionTable0_25, libs__handle_options__OpMode_26, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__TagsMethod0_29, libs__handle_options__TermNorm_30, libs__handle_options__Term2Norm_31, libs__handle_options__TraceLevel_32, libs__handle_options__TraceSuppress_33, libs__handle_options__SSTraceLevel_34, libs__handle_options__MaybeThreadSafe_35, libs__handle_options__C_CompilerType_36, libs__handle_options__CSharp_CompilerType_37, libs__handle_options__ReuseStrategy_38, libs__handle_options__MaybeFeedbackInfo_39, libs__handle_options__HostEnvType_40, libs__handle_options__SystemEnvType_41, libs__handle_options__TargetEnvType_42, libs__handle_options__FileInstallCmd_48, libs__handle_options__LimitErrorContextsMap_43, &libs__handle_options__STATE_VARIABLE_Globals_221_221);
    }
    {
      libs__compute_grade__check_grade_component_compatibility_5_p_0(libs__handle_options__STATE_VARIABLE_Globals_221_221, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__STATE_VARIABLE_Specs_0_214, &libs__handle_options__STATE_VARIABLE_Specs_222_222);
    }
    {
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_221_221, (MR_Integer) 176, &libs__handle_options__EventSetFileName0_50);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_50, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      {
        MR_Word libs__handle_options__MaybeEventSetFileName_51;

        {
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_51);
        }
        if ((libs__handle_options__MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          libs__handle_options__STATE_VARIABLE_Globals_228_228 = libs__handle_options__STATE_VARIABLE_Globals_221_221;
        else
          {
            MR_String libs__handle_options__EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_51, (MR_Integer) 0)));
            MR_Word libs__handle_options__V_227_227;

            {
              libs__handle_options__V_227_227 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_227_227, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_227_227, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_52));
            }
            {
              libs__globals__set_option_4_p_0((MR_Integer) 176, libs__handle_options__V_227_227, libs__handle_options__STATE_VARIABLE_Globals_221_221, &libs__handle_options__STATE_VARIABLE_Globals_228_228);
            }
          }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_228_228 = libs__handle_options__STATE_VARIABLE_Globals_221_221;
    {
      libs__handle_options__GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_28);
    }
    switch (libs__handle_options__GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_235_235 = libs__handle_options__STATE_VARIABLE_Globals_228_228;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_231_231;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_230_230, libs__handle_options__STATE_VARIABLE_Globals_228_228, &libs__handle_options__STATE_VARIABLE_Globals_231_231);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_230_230, libs__handle_options__STATE_VARIABLE_Globals_231_231, &libs__handle_options__STATE_VARIABLE_Globals_235_235);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_235_235, (MR_Integer) 223, &libs__handle_options__PregeneratedDist_54);
    }
    switch (libs__handle_options__PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_256_256 = libs__handle_options__STATE_VARIABLE_Globals_235_235;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_240_240;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_244_244;
          MR_Word libs__handle_options__V_247_247;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_248_248;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_252_252;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[1]), libs__handle_options__STATE_VARIABLE_Globals_235_235, &libs__handle_options__STATE_VARIABLE_Globals_240_240);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 246, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[2]), libs__handle_options__STATE_VARIABLE_Globals_240_240, &libs__handle_options__STATE_VARIABLE_Globals_244_244);
          }
          libs__handle_options__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_247_247, libs__handle_options__STATE_VARIABLE_Globals_244_244, &libs__handle_options__STATE_VARIABLE_Globals_248_248);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 224, libs__handle_options__V_247_247, libs__handle_options__STATE_VARIABLE_Globals_248_248, &libs__handle_options__STATE_VARIABLE_Globals_252_252);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_247_247, libs__handle_options__STATE_VARIABLE_Globals_252_252, &libs__handle_options__STATE_VARIABLE_Globals_256_256);
          }
        }
        break;
    }
    switch (libs__handle_options__TagsMethod0_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          {
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_256_256, (MR_Integer) 237, &libs__handle_options__NumTagBits0_55);
          }
        }
        break;
      case (MR_Integer) 0:
        libs__handle_options__NumTagBits0_55 = (MR_Integer) 0;
        break;
    }
    libs__handle_options__succeeded = (libs__handle_options__TagsMethod0_29 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__NumTagBits0_55 == (MR_Integer) -1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_256_256, (MR_Integer) 242, &libs__handle_options__NumTagBits1_56);
        }
      }
    else
      libs__handle_options__NumTagBits1_56 = libs__handle_options__NumTagBits0_55;
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_56 < (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__NumTagBits_57 = (MR_Integer) 0;
        {
          libs__compiler_util__add_warning_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[147]), libs__handle_options__STATE_VARIABLE_Specs_222_222, &libs__handle_options__STATE_VARIABLE_Specs_287_287);
        }
      }
    else
      {
        libs__handle_options__NumTagBits_57 = libs__handle_options__NumTagBits1_56;
        libs__handle_options__STATE_VARIABLE_Specs_287_287 = libs__handle_options__STATE_VARIABLE_Specs_222_222;
      }
    {
      libs__handle_options__V_289_289 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), libs__handle_options__V_289_289, 0) = ((MR_Box) (libs__handle_options__NumTagBits_57));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 237, libs__handle_options__V_289_289, libs__handle_options__STATE_VARIABLE_Globals_256_256, &libs__handle_options__STATE_VARIABLE_Globals_290_290);
    }
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__TagsMethod_59 = (MR_Integer) 0;
        {
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_59, libs__handle_options__STATE_VARIABLE_Globals_290_290, &libs__handle_options__STATE_VARIABLE_Globals_291_291);
        }
      }
    else
      {
        libs__handle_options__TagsMethod_59 = libs__handle_options__TagsMethod0_29;
        libs__handle_options__STATE_VARIABLE_Globals_291_291 = libs__handle_options__STATE_VARIABLE_Globals_290_290;
      }
    {
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_291_291, &libs__handle_options__GradeSupportsParConj_60);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_291_291, (MR_Integer) 216, &libs__handle_options__Parallel_61);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_291_291, (MR_Integer) 217, &libs__handle_options__Threadscope_62);
    }
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_60 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_62 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[155]), libs__handle_options__STATE_VARIABLE_Specs_287_287, &libs__handle_options__STATE_VARIABLE_Specs_309_309);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_309_309 = libs__handle_options__STATE_VARIABLE_Specs_287_287;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_291_291, (MR_Integer) 662, &libs__handle_options__ImplicitParallelism_64);
    }
    switch (libs__handle_options__ImplicitParallelism_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__STATE_VARIABLE_Specs_353_353 = libs__handle_options__STATE_VARIABLE_Specs_309_309;
          libs__handle_options__STATE_VARIABLE_Globals_332_332 = libs__handle_options__STATE_VARIABLE_Globals_291_291;
        }
        break;
      case (MR_Integer) 1:
        switch (libs__handle_options__GradeSupportsParConj_60) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (libs__handle_options__Parallel_61) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  libs__handle_options__STATE_VARIABLE_Specs_353_353 = libs__handle_options__STATE_VARIABLE_Specs_309_309;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[164]), libs__handle_options__STATE_VARIABLE_Specs_309_309, &libs__handle_options__STATE_VARIABLE_Specs_353_353);
                    }
                  }
                  break;
              }
              {
                libs__globals__set_option_4_p_0((MR_Integer) 662, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_291_291, &libs__handle_options__STATE_VARIABLE_Globals_332_332);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String libs__handle_options__FeedbackFile_65;

              {
                libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_291_291, (MR_Integer) 663, &libs__handle_options__FeedbackFile_65);
              }
              libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_65, (MR_String) "") == 0);
              if (libs__handle_options__succeeded)
                {
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[170]), libs__handle_options__STATE_VARIABLE_Specs_309_309, &libs__handle_options__STATE_VARIABLE_Specs_353_353);
                  }
                }
              else
                libs__handle_options__STATE_VARIABLE_Specs_353_353 = libs__handle_options__STATE_VARIABLE_Specs_309_309;
              libs__handle_options__STATE_VARIABLE_Globals_332_332 = libs__handle_options__STATE_VARIABLE_Globals_291_291;
            }
            break;
        }
        break;
    }
    libs__handle_options__V_356_356 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 662, (MR_Integer) 198, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_332_332, &libs__handle_options__STATE_VARIABLE_Globals_357_357);
    }
    switch (libs__handle_options__GradeSupportsParConj_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 664, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_357_357, &libs__handle_options__STATE_VARIABLE_Globals_361_361);
          }
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_361_361 = libs__handle_options__STATE_VARIABLE_Globals_357_357;
        break;
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 259, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_361_361, &libs__handle_options__STATE_VARIABLE_Globals_490_490);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_431_431;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_434_434;
          MR_Word libs__handle_options__V_437_437;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_438_438;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_442_442;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_446_446;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_450_450;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_454_454;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_458_458;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_462_462;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_466_466;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_470_470;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_474_474;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_478_478;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_482_482;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_486_486;

          {
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_361_361, &libs__handle_options__STATE_VARIABLE_Globals_431_431);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 215, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222]), libs__handle_options__STATE_VARIABLE_Globals_431_431, &libs__handle_options__STATE_VARIABLE_Globals_434_434);
          }
          libs__handle_options__V_437_437 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_437_437, libs__handle_options__STATE_VARIABLE_Globals_434_434, &libs__handle_options__STATE_VARIABLE_Globals_438_438);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_437_437, libs__handle_options__STATE_VARIABLE_Globals_438_438, &libs__handle_options__STATE_VARIABLE_Globals_442_442);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_442_442, &libs__handle_options__STATE_VARIABLE_Globals_446_446);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_446_446, &libs__handle_options__STATE_VARIABLE_Globals_450_450);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_450_450, &libs__handle_options__STATE_VARIABLE_Globals_454_454);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_437_437, libs__handle_options__STATE_VARIABLE_Globals_454_454, &libs__handle_options__STATE_VARIABLE_Globals_458_458);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_458_458, &libs__handle_options__STATE_VARIABLE_Globals_462_462);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 257, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_462_462, &libs__handle_options__STATE_VARIABLE_Globals_466_466);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]), libs__handle_options__STATE_VARIABLE_Globals_466_466, &libs__handle_options__STATE_VARIABLE_Globals_470_470);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_437_437, libs__handle_options__STATE_VARIABLE_Globals_470_470, &libs__handle_options__STATE_VARIABLE_Globals_474_474);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 260, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_474_474, &libs__handle_options__STATE_VARIABLE_Globals_478_478);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_478_478, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 639, libs__handle_options__V_437_437, libs__handle_options__STATE_VARIABLE_Globals_482_482, &libs__handle_options__STATE_VARIABLE_Globals_486_486);
          }
          switch (libs__handle_options__Target_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 564, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223]), libs__handle_options__STATE_VARIABLE_Globals_486_486, &libs__handle_options__STATE_VARIABLE_Globals_490_490);
                }
              }
              break;
            case (MR_Integer) 2:
              libs__handle_options__STATE_VARIABLE_Globals_490_490 = libs__handle_options__STATE_VARIABLE_Globals_486_486;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_369_369;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_372_372;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_376_376;
          MR_Word libs__handle_options__V_379_379;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_380_380;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_384_384;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_388_388;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_392_392;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_396_396;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_400_400;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_404_404;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_408_408;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_412_412;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_416_416;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_420_420;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_424_424;

          {
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_361_361, &libs__handle_options__STATE_VARIABLE_Globals_369_369);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 215, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222]), libs__handle_options__STATE_VARIABLE_Globals_369_369, &libs__handle_options__STATE_VARIABLE_Globals_372_372);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_372_372, &libs__handle_options__STATE_VARIABLE_Globals_376_376);
          }
          libs__handle_options__V_379_379 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_376_376, &libs__handle_options__STATE_VARIABLE_Globals_380_380);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_380_380, &libs__handle_options__STATE_VARIABLE_Globals_384_384);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 272, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_384_384, &libs__handle_options__STATE_VARIABLE_Globals_388_388);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_388_388, &libs__handle_options__STATE_VARIABLE_Globals_392_392);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 270, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_392_392, &libs__handle_options__STATE_VARIABLE_Globals_396_396);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_396_396, &libs__handle_options__STATE_VARIABLE_Globals_400_400);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 639, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_400_400, &libs__handle_options__STATE_VARIABLE_Globals_404_404);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_404_404, &libs__handle_options__STATE_VARIABLE_Globals_408_408);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 249, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_408_408, &libs__handle_options__STATE_VARIABLE_Globals_412_412);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_412_412, &libs__handle_options__STATE_VARIABLE_Globals_416_416);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_416_416, &libs__handle_options__STATE_VARIABLE_Globals_420_420);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_420_420, &libs__handle_options__STATE_VARIABLE_Globals_424_424);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_379_379, libs__handle_options__STATE_VARIABLE_Globals_424_424, &libs__handle_options__STATE_VARIABLE_Globals_490_490);
          }
        }
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 219, (MR_Integer) 218, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_490_490, &libs__handle_options__STATE_VARIABLE_Globals_495_495);
    }
    libs__handle_options__V_499_499 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 547, libs__handle_options__V_499_499, libs__handle_options__STATE_VARIABLE_Globals_495_495, &libs__handle_options__STATE_VARIABLE_Globals_500_500);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 549, libs__handle_options__V_499_499, libs__handle_options__STATE_VARIABLE_Globals_500_500, &libs__handle_options__STATE_VARIABLE_Globals_505_505);
    }
    libs__handle_options__V_509_509 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 249, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_505_505, &libs__handle_options__STATE_VARIABLE_Globals_510_510);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 250, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_510_510, &libs__handle_options__STATE_VARIABLE_Globals_515_515);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 251, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_515_515, &libs__handle_options__STATE_VARIABLE_Globals_520_520);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 256, (MR_Integer) 316, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_520_520, &libs__handle_options__STATE_VARIABLE_Globals_525_525);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 457, (MR_Integer) 451, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_525_525, &libs__handle_options__STATE_VARIABLE_Globals_530_530);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_530_530, (MR_Integer) 629, &libs__handle_options__LibLinkages0_68);
    }
    if ((libs__handle_options__LibLinkages0_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 629, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[173]), libs__handle_options__STATE_VARIABLE_Globals_530_530, &libs__handle_options__STATE_VARIABLE_Globals_535_535);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_535_535 = libs__handle_options__STATE_VARIABLE_Globals_530_530;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_535_535, (MR_Integer) 616, &libs__handle_options__InvokedByMMCMake_71);
    }
    {
      MR_Word libs__handle_options__V_72_72;

      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 1)));
      if (libs__handle_options__succeeded)
        libs__handle_options__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OpMode_26, (MR_Integer) 0)));
    }
    if (!(libs__handle_options__succeeded))
      libs__handle_options__succeeded = (libs__handle_options__InvokedByMMCMake_71 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 634, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_535_535, &libs__handle_options__STATE_VARIABLE_Globals_544_544);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_544_544 = libs__handle_options__STATE_VARIABLE_Globals_535_535;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 616, (MR_Integer) 119, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_544_544, &libs__handle_options__STATE_VARIABLE_Globals_549_549);
    }
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OpMode_26, (MR_Integer) 0)));
        libs__handle_options__STATE_VARIABLE_Globals_553_553 = libs__handle_options__STATE_VARIABLE_Globals_549_549;
      }
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 639, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_549_549, &libs__handle_options__STATE_VARIABLE_Globals_553_553);
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_553_553, (MR_Integer) 326, &libs__handle_options__TransOpt_74);
    }
    switch (libs__handle_options__TransOpt_74) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Specs_574_574 = libs__handle_options__STATE_VARIABLE_Specs_353_353;
        break;
      case (MR_Integer) 1:
        {
          libs__handle_options__succeeded = (libs__handle_options__InvokedByMMCMake_71 == (MR_Integer) 1);
          if (!(libs__handle_options__succeeded))
            {
              MR_Word libs__handle_options__V_75_75;

              libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 1)));
              if (libs__handle_options__succeeded)
                libs__handle_options__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OpMode_26, (MR_Integer) 0)));
            }
          if (libs__handle_options__succeeded)
            {
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180]), libs__handle_options__STATE_VARIABLE_Specs_353_353, &libs__handle_options__STATE_VARIABLE_Specs_574_574);
              }
            }
          else
            libs__handle_options__STATE_VARIABLE_Specs_574_574 = libs__handle_options__STATE_VARIABLE_Specs_353_353;
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_553_553, (MR_Integer) 322, &libs__handle_options__InterModOpt_77);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_553_553, (MR_Integer) 327, &libs__handle_options__InterModAnalysis_78);
    }
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_77 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_78 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[186]), libs__handle_options__STATE_VARIABLE_Specs_574_574, &libs__handle_options__STATE_VARIABLE_Specs_595_595);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_595_595 = libs__handle_options__STATE_VARIABLE_Specs_574_574;
    {
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Globals_598_598 = libs__handle_options__STATE_VARIABLE_Globals_553_553;
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 620, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_553_553, &libs__handle_options__STATE_VARIABLE_Globals_598_598);
        }
      }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_598_598, (MR_Integer) 96, &libs__handle_options__MaybeStandaloneInt_80);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_598_598, (MR_Integer) 557, &libs__handle_options__ExtraInitFunctions_81);
    }
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_80)) == (MR_mktag((MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_80, (MR_Integer) 0)));
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_81 == (MR_Integer) 1);
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[192]), libs__handle_options__STATE_VARIABLE_Specs_595_595, &libs__handle_options__STATE_VARIABLE_Specs_620_620);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_620_620 = libs__handle_options__STATE_VARIABLE_Specs_595_595;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 404, (MR_Integer) 402, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_598_598, &libs__handle_options__STATE_VARIABLE_Globals_624_624);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 412, (MR_Integer) 411, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_624_624, &libs__handle_options__STATE_VARIABLE_Globals_629_629);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 411, (MR_Integer) 410, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_629_629, &libs__handle_options__STATE_VARIABLE_Globals_634_634);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 411, (MR_Integer) 14, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_634_634, &libs__handle_options__STATE_VARIABLE_Globals_639_639);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 419, (MR_Integer) 418, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_639_639, &libs__handle_options__STATE_VARIABLE_Globals_644_644);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 417, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_644_644, &libs__handle_options__STATE_VARIABLE_Globals_649_649);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 14, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_649_649, &libs__handle_options__STATE_VARIABLE_Globals_654_654);
    }
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_656_656 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_656_656)) == (MR_mktag((MR_Integer) 1)));
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__V_657_657 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_656_656, (MR_Integer) 0)));
            libs__handle_options__succeeded = (libs__handle_options__V_657_657 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 326, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_654_654, &libs__handle_options__STATE_VARIABLE_Globals_660_660);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_660_660 = libs__handle_options__STATE_VARIABLE_Globals_654_654;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 326, (MR_Integer) 322, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_660_660, &libs__handle_options__STATE_VARIABLE_Globals_665_665);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 324, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_665_665, &libs__handle_options__STATE_VARIABLE_Globals_670_670);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 322, (MR_Integer) 324, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_670_670, &libs__handle_options__STATE_VARIABLE_Globals_675_675);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 326, (MR_Integer) 325, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_675_675, &libs__handle_options__STATE_VARIABLE_Globals_680_680);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 324, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_680_680, &libs__handle_options__STATE_VARIABLE_Globals_684_684);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 117, (MR_Integer) 118, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_684_684, &libs__handle_options__STATE_VARIABLE_Globals_689_689);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 51, (MR_Integer) 50, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_689_689, &libs__handle_options__STATE_VARIABLE_Globals_694_694);
    }
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_696_696 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_696_696)) == (MR_mktag((MR_Integer) 1)));
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__V_697_697 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_696_696, (MR_Integer) 0)));
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_697_697)) == (MR_mktag((MR_Integer) 1)));
            if (libs__handle_options__succeeded)
              libs__handle_options__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_697_697, (MR_Integer) 0)));
          }
      }
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Globals_700_700 = libs__handle_options__STATE_VARIABLE_Globals_694_694;
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 117, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_694_694, &libs__handle_options__STATE_VARIABLE_Globals_700_700);
        }
      }
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_1672_1672 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
        switch (MR_tag((MR_Word) libs__handle_options__V_1672_1672)) {
          default:
            libs__handle_options__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            switch (MR_unmkbody(libs__handle_options__V_1672_1672)) {
              default:
                libs__handle_options__succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                libs__handle_options__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 3:
                libs__handle_options__succeeded = MR_TRUE;
                break;
              case (MR_Integer) 4:
                libs__handle_options__succeeded = MR_TRUE;
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word libs__handle_options__V_1673_1673 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_1672_1672, (MR_Integer) 0)));

              if ((libs__handle_options__V_1673_1673 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                libs__handle_options__succeeded = MR_TRUE;
              else
              if ((libs__handle_options__V_1673_1673 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                libs__handle_options__succeeded = MR_TRUE;
              else
                libs__handle_options__succeeded = MR_FALSE;
            }
            break;
        }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 139, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_700_700, &libs__handle_options__STATE_VARIABLE_Globals_711_711);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_711_711 = libs__handle_options__STATE_VARIABLE_Globals_700_700;
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_713_713 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
        libs__handle_options__succeeded = (libs__handle_options__V_713_713 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 118, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_711_711, &libs__handle_options__STATE_VARIABLE_Globals_716_716);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_716_716 = libs__handle_options__STATE_VARIABLE_Globals_711_711;
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_718_718 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_718_718)) == (MR_mktag((MR_Integer) 1)));
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__V_719_719 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_718_718, (MR_Integer) 0)));
            libs__handle_options__succeeded = (libs__handle_options__V_719_719 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 322, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_716_716, &libs__handle_options__STATE_VARIABLE_Globals_722_722);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_722_722 = libs__handle_options__STATE_VARIABLE_Globals_716_716;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_722_722, (MR_Integer) 117, &libs__handle_options__Smart_85);
    }
    switch (libs__handle_options__Smart_85) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_739_739 = libs__handle_options__STATE_VARIABLE_Globals_722_722;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_728_728;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_733_733;
          MR_Word libs__handle_options__V_735_735;
          MR_Word libs__handle_options__V_736_736;
          MR_Word libs__handle_options__V_737_737;

          {
            libs__handle_options__succeeded = libs__globals__lookup_bool_option_3_p_1(libs__handle_options__STATE_VARIABLE_Globals_722_722, (MR_Integer) 322, (MR_Integer) 1);
          }
          if (libs__handle_options__succeeded)
            {
              {
                libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_722_722, &libs__handle_options__STATE_VARIABLE_Globals_728_728);
              }
            }
          else
            libs__handle_options__STATE_VARIABLE_Globals_728_728 = libs__handle_options__STATE_VARIABLE_Globals_722_722;
          {
            libs__handle_options__succeeded = libs__globals__lookup_bool_option_3_p_1(libs__handle_options__STATE_VARIABLE_Globals_728_728, (MR_Integer) 324, (MR_Integer) 1);
          }
          if (libs__handle_options__succeeded)
            {
              {
                libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_728_728, &libs__handle_options__STATE_VARIABLE_Globals_733_733);
              }
            }
          else
            libs__handle_options__STATE_VARIABLE_Globals_733_733 = libs__handle_options__STATE_VARIABLE_Globals_728_728;
          libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__V_735_735 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
              libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_735_735)) == (MR_mktag((MR_Integer) 1)));
              if (libs__handle_options__succeeded)
                {
                  libs__handle_options__V_736_736 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_735_735, (MR_Integer) 0)));
                  libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_736_736)) == (MR_mktag((MR_Integer) 1)));
                  if (libs__handle_options__succeeded)
                    {
                      libs__handle_options__V_737_737 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_736_736, (MR_Integer) 0)));
                      libs__handle_options__succeeded = (libs__handle_options__V_737_737 == (MR_Integer) 0);
                    }
                }
            }
          if (libs__handle_options__succeeded)
            libs__handle_options__STATE_VARIABLE_Globals_739_739 = libs__handle_options__STATE_VARIABLE_Globals_733_733;
          else
            {
              {
                libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_733_733, &libs__handle_options__STATE_VARIABLE_Globals_739_739);
              }
            }
        }
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 635, (MR_Integer) 634, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_739_739, &libs__handle_options__STATE_VARIABLE_Globals_744_744);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 48, (MR_Integer) 47, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_744_744, &libs__handle_options__STATE_VARIABLE_Globals_749_749);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 47, (MR_Integer) 53, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_749_749, &libs__handle_options__STATE_VARIABLE_Globals_754_754);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_754_754, (MR_Integer) 48, &libs__handle_options__VeryVerbose_86);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_754_754, (MR_Integer) 57, &libs__handle_options__Statistics_87);
    }
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_86 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__Statistics_87 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 58, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_754_754, &libs__handle_options__STATE_VARIABLE_Globals_760_760);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_760_760 = libs__handle_options__STATE_VARIABLE_Globals_754_754;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 64, (MR_Integer) 62, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_760_760, &libs__handle_options__STATE_VARIABLE_Globals_765_765);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 62, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_765_765, &libs__handle_options__STATE_VARIABLE_Globals_770_770);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 62, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_770_770, &libs__handle_options__STATE_VARIABLE_Globals_775_775);
    }
    {
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_775_775, (MR_Integer) 75, &libs__handle_options__DebugLiveness_88);
    }
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_88 >= (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_779_779 = (MR_String) "all";
        {
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_779_779, &libs__handle_options__AllDumpOptions_89);
        }
      }
    if (libs__handle_options__succeeded)
      {
        MR_String libs__handle_options__DumpOptions0_90;
        MR_String libs__handle_options__DumpOptions1_91;
        MR_Word libs__handle_options__V_782_782;

        {
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_775_775, (MR_Integer) 154, &libs__handle_options__DumpOptions0_90);
        }
        {
          libs__handle_options__DumpOptions1_91 = mercury__string__f_43_43_2_f_0(libs__handle_options__DumpOptions0_90, libs__handle_options__AllDumpOptions_89);
        }
        {
          libs__handle_options__V_782_782 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_782_782, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_782_782, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_91));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 154, libs__handle_options__V_782_782, libs__handle_options__STATE_VARIABLE_Globals_775_775, &libs__handle_options__STATE_VARIABLE_Globals_783_783);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_783_783 = libs__handle_options__STATE_VARIABLE_Globals_775_775;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 62, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_783_783, &libs__handle_options__STATE_VARIABLE_Globals_787_787);
    }
    {
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_787_787, (MR_Integer) 66, &libs__handle_options__DebugModesPredId_92);
    }
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_92 > (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 62, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_787_787, &libs__handle_options__STATE_VARIABLE_Globals_793_793);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_793_793 = libs__handle_options__STATE_VARIABLE_Globals_787_787;
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_793_793, (MR_Integer) 354, &libs__handle_options__DebugUnneededCodePredNames_93);
    }
    if ((libs__handle_options__DebugUnneededCodePredNames_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_798_798 = libs__handle_options__STATE_VARIABLE_Globals_793_793;
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 353, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_793_793, &libs__handle_options__STATE_VARIABLE_Globals_798_798);
        }
      }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_798_798, (MR_Integer) 72, &libs__handle_options__DebugOptPredIdStrs_96);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_798_798, (MR_Integer) 73, &libs__handle_options__DebugOptPredNames_97);
    }
    {
      MR_String libs__handle_options__V_98_98;
      MR_Word libs__handle_options__V_99_99;

      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_96)) == (MR_mktag((MR_Integer) 1)));
      if (libs__handle_options__succeeded)
        {
          libs__handle_options__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_96, (MR_Integer) 0)));
          libs__handle_options__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_96, (MR_Integer) 1)));
        }
    }
    if (!(libs__handle_options__succeeded))
      {
        MR_String libs__handle_options__V_100_100;
        MR_Word libs__handle_options__V_101_101;

        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_97)) == (MR_mktag((MR_Integer) 1)));
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_97, (MR_Integer) 0)));
            libs__handle_options__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_97, (MR_Integer) 1)));
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 70, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_798_798, &libs__handle_options__STATE_VARIABLE_Globals_804_804);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_804_804 = libs__handle_options__STATE_VARIABLE_Globals_798_798;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_804_804, (MR_Integer) 81, &libs__handle_options__DebugIntermoduleAnalysis_102);
    }
    {
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_102);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_804_804, (MR_Integer) 150, &libs__handle_options__DumpHLDSPredIds_103);
    }
    if ((libs__handle_options__DumpHLDSPredIds_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_816_816 = libs__handle_options__STATE_VARIABLE_Globals_804_804;
    else
      {
        MR_String libs__handle_options__DumpOptions2_106;
        MR_String libs__handle_options__DumpOptions3_107;
        MR_String libs__handle_options__DumpOptions_108;
        MR_Word libs__handle_options__V_815_815;

        {
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_804_804, (MR_Integer) 154, &libs__handle_options__DumpOptions2_106);
        }
        {
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_106, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_107);
        }
        {
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_107, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_108);
        }
        {
          libs__handle_options__V_815_815 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_815_815, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_815_815, 1) = ((MR_Box) (libs__handle_options__DumpOptions_108));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 154, libs__handle_options__V_815_815, libs__handle_options__STATE_VARIABLE_Globals_804_804, &libs__handle_options__STATE_VARIABLE_Globals_816_816);
        }
      }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 80, (MR_Integer) 162, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_816_816, &libs__handle_options__STATE_VARIABLE_Globals_820_820);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 162, (MR_Integer) 160, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_820_820, &libs__handle_options__STATE_VARIABLE_Globals_825_825);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 161, (MR_Integer) 160, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_825_825, &libs__handle_options__STATE_VARIABLE_Globals_830_830);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 143, (MR_Integer) 142, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_830_830, &libs__handle_options__STATE_VARIABLE_Globals_835_835);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_835_835, (MR_Integer) 218, &libs__handle_options__UseTrail_109);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_835_835, (MR_Integer) 254, &libs__handle_options__HighLevelCode_110);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_835_835, (MR_Integer) 220, &libs__handle_options__UseMinimalModelStackCopy_111);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_835_835, (MR_Integer) 221, &libs__handle_options__UseMinimalModelOwnStacks_112);
    }
    {
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_111, libs__handle_options__UseMinimalModelOwnStacks_112, &libs__handle_options__UseMinimalModel_113);
    }
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_111 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_112 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[196]), libs__handle_options__STATE_VARIABLE_Specs_620_620, &libs__handle_options__STATE_VARIABLE_Specs_850_850);
        }
      }
    else
      {
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_113 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_110 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          {
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[200]), libs__handle_options__STATE_VARIABLE_Specs_620_620, &libs__handle_options__STATE_VARIABLE_Specs_850_850);
            }
          }
        else
          {
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_113 == (MR_Integer) 1);
            if (libs__handle_options__succeeded)
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_109 == (MR_Integer) 1);
            if (libs__handle_options__succeeded)
              {
                {
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203]), libs__handle_options__STATE_VARIABLE_Specs_620_620, &libs__handle_options__STATE_VARIABLE_Specs_850_850);
                }
              }
            else
              libs__handle_options__STATE_VARIABLE_Specs_850_850 = libs__handle_options__STATE_VARIABLE_Specs_620_620;
          }
      }
    libs__handle_options__V_873_873 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 246, libs__handle_options__V_873_873, libs__handle_options__STATE_VARIABLE_Globals_835_835, &libs__handle_options__STATE_VARIABLE_Globals_874_874);
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer libs__handle_options__ArgPackBits0_117;
          MR_Integer libs__handle_options__BitsPerWord_118;
          MR_Integer libs__handle_options__ArgPackBits_119;
          MR_Word libs__handle_options__V_921_921;

          {
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_874_874, (MR_Integer) 246, &libs__handle_options__ArgPackBits0_117);
          }
          {
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_874_874, (MR_Integer) 240, &libs__handle_options__BitsPerWord_118);
          }
          libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_117 < (MR_Integer) 0);
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__ArgPackBits_119 = libs__handle_options__BitsPerWord_118;
              libs__handle_options__STATE_VARIABLE_Specs_919_919 = libs__handle_options__STATE_VARIABLE_Specs_850_850;
            }
          else
            {
              libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_117 > libs__handle_options__BitsPerWord_118);
              if (libs__handle_options__succeeded)
                {
                  MR_Word libs__handle_options__ArgPackBitsSpec_120;
                  MR_Word libs__handle_options__V_889_889;
                  MR_Word libs__handle_options__V_890_890;
                  MR_Word libs__handle_options__V_892_892;
                  MR_Word libs__handle_options__V_895_895;
                  MR_Word libs__handle_options__V_898_898;
                  MR_Word libs__handle_options__V_901_901;
                  MR_Word libs__handle_options__V_904_904;
                  MR_Word libs__handle_options__V_907_907;
                  MR_Word libs__handle_options__V_910_910;
                  MR_Word libs__handle_options__V_911_911;

                  libs__handle_options__ArgPackBits_119 = libs__handle_options__BitsPerWord_118;
                  libs__handle_options__V_890_890 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226]);
                  {
                    libs__handle_options__V_911_911 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_911_911, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_911_911, 1) = ((MR_Box) (libs__handle_options__BitsPerWord_118));
                  }
                  {
                    libs__handle_options__V_910_910 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_910_910, 0) = ((MR_Box) (libs__handle_options__V_911_911));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_910_910, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
                  }
                  {
                    libs__handle_options__V_907_907 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_907_907, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_907_907, 1) = ((MR_Box) (libs__handle_options__V_910_910));
                  }
                  {
                    libs__handle_options__V_904_904 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_904_904, 0) = ((MR_Box) (libs__handle_options__V_890_890));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_904_904, 1) = ((MR_Box) (libs__handle_options__V_907_907));
                  }
                  {
                    libs__handle_options__V_901_901 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_901_901, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_901_901, 1) = ((MR_Box) (libs__handle_options__V_904_904));
                  }
                  {
                    libs__handle_options__V_898_898 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_898_898, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_898_898, 1) = ((MR_Box) (libs__handle_options__V_901_901));
                  }
                  {
                    libs__handle_options__V_895_895 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_895_895, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_895_895, 1) = ((MR_Box) (libs__handle_options__V_898_898));
                  }
                  {
                    libs__handle_options__V_892_892 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_892_892, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_892_892, 1) = ((MR_Box) (libs__handle_options__V_895_895));
                  }
                  {
                    libs__handle_options__V_889_889 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_889_889, 0) = ((MR_Box) (libs__handle_options__V_890_890));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_889_889, 1) = ((MR_Box) (libs__handle_options__V_892_892));
                  }
                  {
                    libs__handle_options__ArgPackBitsSpec_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_120, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[225])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_120, 1) = ((MR_Box) (libs__handle_options__V_889_889));
                  }
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__ArgPackBitsSpec_120, libs__handle_options__STATE_VARIABLE_Specs_850_850, &libs__handle_options__STATE_VARIABLE_Specs_919_919);
                  }
                }
              else
                {
                  libs__handle_options__ArgPackBits_119 = libs__handle_options__ArgPackBits0_117;
                  libs__handle_options__STATE_VARIABLE_Specs_919_919 = libs__handle_options__STATE_VARIABLE_Specs_850_850;
                }
            }
          {
            libs__handle_options__V_921_921 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), libs__handle_options__V_921_921, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_119));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_921_921, libs__handle_options__STATE_VARIABLE_Globals_874_874, &libs__handle_options__STATE_VARIABLE_Globals_922_922);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_878_878;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_873_873, libs__handle_options__STATE_VARIABLE_Globals_874_874, &libs__handle_options__STATE_VARIABLE_Globals_878_878);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_878_878, &libs__handle_options__STATE_VARIABLE_Globals_922_922);
          }
          libs__handle_options__STATE_VARIABLE_Specs_919_919 = libs__handle_options__STATE_VARIABLE_Specs_850_850;
        }
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 224, (MR_Integer) 243, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_922_922, &libs__handle_options__STATE_VARIABLE_Globals_926_926);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 253, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_926_926, &libs__handle_options__STATE_VARIABLE_Globals_931_931);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 243, (MR_Integer) 253, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_931_931, &libs__handle_options__STATE_VARIABLE_Globals_936_936);
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_940_940 = libs__handle_options__STATE_VARIABLE_Globals_936_936;
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_940_940 = libs__handle_options__STATE_VARIABLE_Globals_936_936;
        break;
      case (MR_Integer) 3:
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 294, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_936_936, &libs__handle_options__STATE_VARIABLE_Globals_940_940);
          }
        }
        break;
      case (MR_Integer) 2:
        libs__handle_options__STATE_VARIABLE_Globals_940_940 = libs__handle_options__STATE_VARIABLE_Globals_936_936;
        break;
    }
    switch (libs__handle_options__Target_27) {
      default:
        libs__handle_options__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        libs__handle_options__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        libs__handle_options__succeeded = MR_TRUE;
        break;
    }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 433, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_940_940, &libs__handle_options__STATE_VARIABLE_Globals_944_944);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_944_944 = libs__handle_options__STATE_VARIABLE_Globals_940_940;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 481, (MR_Integer) 551, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_944_944, &libs__handle_options__STATE_VARIABLE_Globals_949_949);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 199, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_949_949, &libs__handle_options__STATE_VARIABLE_Globals_954_954);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 199, (MR_Integer) 211, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_954_954, &libs__handle_options__STATE_VARIABLE_Globals_959_959);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 130, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_959_959, &libs__handle_options__STATE_VARIABLE_Globals_964_964);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_964_964, (MR_Integer) 130, &libs__handle_options__ProfOptimized_121);
    }
    switch (libs__handle_options__ProfOptimized_121) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 330, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_964_964, &libs__handle_options__STATE_VARIABLE_Globals_970_970);
          }
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_970_970 = libs__handle_options__STATE_VARIABLE_Globals_964_964;
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 197, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_970_970, &libs__handle_options__STATE_VARIABLE_Globals_975_975);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 212, (MR_Integer) 197, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_975_975, &libs__handle_options__STATE_VARIABLE_Globals_980_980);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 197, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_980_980, &libs__handle_options__STATE_VARIABLE_Globals_985_985);
    }
    {
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_985_985, (MR_Integer) 214, &libs__handle_options__ExpComp_122);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_122, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Globals_990_990 = libs__handle_options__STATE_VARIABLE_Globals_985_985;
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 330, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_985_985, &libs__handle_options__STATE_VARIABLE_Globals_990_990);
        }
      }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 187, (MR_Integer) 186, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_990_990, &libs__handle_options__STATE_VARIABLE_Globals_995_995);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 233, (MR_Integer) 235, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_995_995, &libs__handle_options__STATE_VARIABLE_Globals_1000_1000);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 186, (MR_Integer) 262, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1000_1000, &libs__handle_options__STATE_VARIABLE_Globals_1005_1005);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 262, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1005_1005, &libs__handle_options__STATE_VARIABLE_Globals_1010_1010);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 313, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1010_1010, &libs__handle_options__STATE_VARIABLE_Globals_1015_1015);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 186, (MR_Integer) 128, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1015_1015, &libs__handle_options__STATE_VARIABLE_Globals_1020_1020);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 128, (MR_Integer) 124, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1020_1020, &libs__handle_options__STATE_VARIABLE_Globals_1025_1025);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 127, (MR_Integer) 124, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1025_1025, &libs__handle_options__STATE_VARIABLE_Globals_1030_1030);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1030_1030, (MR_Integer) 122, &libs__handle_options__TraceOptimized_123);
    }
    {
      libs__handle_options__TraceLevelIsNone_124 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
    }
    switch (libs__handle_options__TraceLevelIsNone_124) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word libs__handle_options__TraceTailRec_125;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1091_1091;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1095_1095;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1099_1099;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1103_1103;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1107_1107;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1111_1111;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1115_1115;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1119_1119;

          switch (libs__handle_options__TraceOptimized_123) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1039_1039;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1043_1043;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1047_1047;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1051_1051;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1055_1055;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1059_1059;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1063_1063;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1067_1067;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1071_1071;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1075_1075;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1079_1079;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1083_1083;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1087_1087;

                {
                  libs__globals__set_option_4_p_0((MR_Integer) 330, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1030_1030, &libs__handle_options__STATE_VARIABLE_Globals_1039_1039);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 346, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1039_1039, &libs__handle_options__STATE_VARIABLE_Globals_1043_1043);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 348, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1043_1043, &libs__handle_options__STATE_VARIABLE_Globals_1047_1047);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1047_1047, &libs__handle_options__STATE_VARIABLE_Globals_1051_1051);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 356, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1051_1051, &libs__handle_options__STATE_VARIABLE_Globals_1055_1055);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 384, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1055_1055, &libs__handle_options__STATE_VARIABLE_Globals_1059_1059);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 344, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1059_1059, &libs__handle_options__STATE_VARIABLE_Globals_1063_1063);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 345, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1063_1063, &libs__handle_options__STATE_VARIABLE_Globals_1067_1067);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 361, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1067_1067, &libs__handle_options__STATE_VARIABLE_Globals_1071_1071);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1071_1071, &libs__handle_options__STATE_VARIABLE_Globals_1075_1075);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1075_1075, &libs__handle_options__STATE_VARIABLE_Globals_1079_1079);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 380, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1079_1079, &libs__handle_options__STATE_VARIABLE_Globals_1083_1083);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 393, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1083_1083, &libs__handle_options__STATE_VARIABLE_Globals_1087_1087);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 394, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1087_1087, &libs__handle_options__STATE_VARIABLE_Globals_1091_1091);
                }
              }
              break;
            case (MR_Integer) 1:
              libs__handle_options__STATE_VARIABLE_Globals_1091_1091 = libs__handle_options__STATE_VARIABLE_Globals_1030_1030;
              break;
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1091_1091, &libs__handle_options__STATE_VARIABLE_Globals_1095_1095);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1095_1095, &libs__handle_options__STATE_VARIABLE_Globals_1099_1099);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 382, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1099_1099, &libs__handle_options__STATE_VARIABLE_Globals_1103_1103);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1103_1103, &libs__handle_options__STATE_VARIABLE_Globals_1107_1107);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1107_1107, &libs__handle_options__STATE_VARIABLE_Globals_1111_1111);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1111_1111, &libs__handle_options__STATE_VARIABLE_Globals_1115_1115);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 318, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1115_1115, &libs__handle_options__STATE_VARIABLE_Globals_1119_1119);
          }
          {
            libs__handle_options__TraceTailRec_125 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_32);
          }
          switch (libs__handle_options__TraceTailRec_125) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 131, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1119_1119, &libs__handle_options__STATE_VARIABLE_Globals_1123_1123);
                }
              }
              break;
            case (MR_Integer) 1:
              libs__handle_options__STATE_VARIABLE_Globals_1123_1123 = libs__handle_options__STATE_VARIABLE_Globals_1119_1119;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 131, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1030_1030, &libs__handle_options__STATE_VARIABLE_Globals_1123_1123);
          }
        }
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 265, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1123_1123, &libs__handle_options__STATE_VARIABLE_Globals_1128_1128);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1128_1128, (MR_Integer) 195, &libs__handle_options__ProfileDeep_126);
    }
    switch (libs__handle_options__ProfileDeep_126) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__STATE_VARIABLE_Specs_1140_1140 = libs__handle_options__STATE_VARIABLE_Specs_919_919;
          libs__handle_options__STATE_VARIABLE_Globals_1151_1151 = libs__handle_options__STATE_VARIABLE_Globals_1128_1128;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__LotsOfHOSpec_128;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1143_1143;

          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_110 == (MR_Integer) 0);
          if (libs__handle_options__succeeded)
            libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
          if (libs__handle_options__succeeded)
            libs__handle_options__STATE_VARIABLE_Specs_1140_1140 = libs__handle_options__STATE_VARIABLE_Specs_919_919;
          else
            {
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[205]), libs__handle_options__STATE_VARIABLE_Specs_919_919, &libs__handle_options__STATE_VARIABLE_Specs_1140_1140);
              }
            }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1128_1128, &libs__handle_options__STATE_VARIABLE_Globals_1143_1143);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1143_1143, (MR_Integer) 210, &libs__handle_options__LotsOfHOSpec_128);
          }
          switch (libs__handle_options__LotsOfHOSpec_128) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__handle_options__STATE_VARIABLE_Globals_1151_1151 = libs__handle_options__STATE_VARIABLE_Globals_1143_1143;
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1148_1148;

                {
                  libs__globals__set_option_4_p_0((MR_Integer) 348, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1143_1143, &libs__handle_options__STATE_VARIABLE_Globals_1148_1148);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_1148_1148, &libs__handle_options__STATE_VARIABLE_Globals_1151_1151);
                }
              }
              break;
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1151_1151, (MR_Integer) 212, &libs__handle_options__RecordTermSizesAsWords_130);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1151_1151, (MR_Integer) 213, &libs__handle_options__RecordTermSizesAsCells_131);
    }
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_130 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_131 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[207]), libs__handle_options__STATE_VARIABLE_Specs_1140_1140, &libs__handle_options__STATE_VARIABLE_Specs_1161_1161);
        }
        libs__handle_options__STATE_VARIABLE_Globals_1168_1168 = libs__handle_options__STATE_VARIABLE_Globals_1151_1151;
      }
    else
      {
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_130 == (MR_Integer) 1);
        if (!(libs__handle_options__succeeded))
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_131 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          {
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1164_1164;

            {
              libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1151_1151, &libs__handle_options__STATE_VARIABLE_Globals_1164_1164);
            }
            {
              libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1164_1164, &libs__handle_options__STATE_VARIABLE_Globals_1168_1168);
            }
            switch (libs__handle_options__HighLevelCode_110) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                libs__handle_options__STATE_VARIABLE_Specs_1161_1161 = libs__handle_options__STATE_VARIABLE_Specs_1140_1140;
                break;
              case (MR_Integer) 1:
                {
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[209]), libs__handle_options__STATE_VARIABLE_Specs_1140_1140, &libs__handle_options__STATE_VARIABLE_Specs_1161_1161);
                  }
                }
                break;
            }
          }
        else
          {
            libs__handle_options__STATE_VARIABLE_Globals_1168_1168 = libs__handle_options__STATE_VARIABLE_Globals_1151_1151;
            libs__handle_options__STATE_VARIABLE_Specs_1161_1161 = libs__handle_options__STATE_VARIABLE_Specs_1140_1140;
          }
      }
    {
      MR_Word libs__handle_options__V_1180_1180;

      {
        libs__handle_options__V_1180_1180 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
      }
      libs__handle_options__succeeded = (libs__handle_options__V_1180_1180 == (MR_Integer) 1);
    }
    if (!(libs__handle_options__succeeded))
      {
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_110 == (MR_Integer) 0);
        if (libs__handle_options__succeeded)
          libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
      }
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Specs_1187_1187 = libs__handle_options__STATE_VARIABLE_Specs_1161_1161;
    else
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[211]), libs__handle_options__STATE_VARIABLE_Specs_1161_1161, &libs__handle_options__STATE_VARIABLE_Specs_1187_1187);
        }
      }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 487, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1168_1168, &libs__handle_options__STATE_VARIABLE_Globals_1191_1191);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 333, (MR_Integer) 362, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1191_1191, &libs__handle_options__STATE_VARIABLE_Globals_1196_1196);
    }
    switch (libs__handle_options__ProfileDeep_126) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 330, (MR_Integer) 362, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1196_1196, &libs__handle_options__STATE_VARIABLE_Globals_1201_1201);
          }
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1201_1201 = libs__handle_options__STATE_VARIABLE_Globals_1196_1196;
        break;
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 165, (MR_Integer) 384, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1201_1201, &libs__handle_options__STATE_VARIABLE_Globals_1206_1206);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 165, (MR_Integer) 344, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1206_1206, &libs__handle_options__STATE_VARIABLE_Globals_1211_1211);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 165, (MR_Integer) 345, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1211_1211, &libs__handle_options__STATE_VARIABLE_Globals_1216_1216);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 265, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1216_1216, &libs__handle_options__STATE_VARIABLE_Globals_1221_1221);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 265, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1221_1221, &libs__handle_options__STATE_VARIABLE_Globals_1226_1226);
    }
    switch (libs__handle_options__GC_Method_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1230_1230;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1234_1234;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1238_1238;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1242_1242;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1246_1246;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1250_1250;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1254_1254;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1258_1258;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1262_1262;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1266_1266;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1226_1226, &libs__handle_options__STATE_VARIABLE_Globals_1230_1230);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1230_1230, &libs__handle_options__STATE_VARIABLE_Globals_1234_1234);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1234_1234, &libs__handle_options__STATE_VARIABLE_Globals_1238_1238);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 470, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1238_1238, &libs__handle_options__STATE_VARIABLE_Globals_1242_1242);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 318, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1242_1242, &libs__handle_options__STATE_VARIABLE_Globals_1246_1246);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1246_1246, &libs__handle_options__STATE_VARIABLE_Globals_1250_1250);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1250_1250, &libs__handle_options__STATE_VARIABLE_Globals_1254_1254);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1254_1254, &libs__handle_options__STATE_VARIABLE_Globals_1258_1258);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1258_1258, &libs__handle_options__STATE_VARIABLE_Globals_1262_1262);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1262_1262, &libs__handle_options__STATE_VARIABLE_Globals_1266_1266);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 356, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1266_1266, &libs__handle_options__STATE_VARIABLE_Globals_1270_1270);
          }
        }
        break;
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_1270_1270 = libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
        break;
      case (MR_Integer) 2:
        libs__handle_options__STATE_VARIABLE_Globals_1270_1270 = libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
        break;
      case (MR_Integer) 3:
        libs__handle_options__STATE_VARIABLE_Globals_1270_1270 = libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
        break;
      case (MR_Integer) 4:
        libs__handle_options__STATE_VARIABLE_Globals_1270_1270 = libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1270_1270 = libs__handle_options__STATE_VARIABLE_Globals_1226_1226;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1270_1270, (MR_Integer) 260, &libs__handle_options__PutNondetEnvOnHeap_135);
    }
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_110 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_28 == (MR_Integer) 5);
        if (libs__handle_options__succeeded)
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_135 == (MR_Integer) 1);
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216]), libs__handle_options__STATE_VARIABLE_Specs_1187_1187, &libs__handle_options__STATE_VARIABLE_Specs_1288_1288);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_1288_1288 = libs__handle_options__STATE_VARIABLE_Specs_1187_1187;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 263, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1270_1270, &libs__handle_options__STATE_VARIABLE_Globals_1292_1292);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 263, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1292_1292, &libs__handle_options__STATE_VARIABLE_Globals_1297_1297);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 468, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1297_1297, &libs__handle_options__STATE_VARIABLE_Globals_1302_1302);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 468, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1302_1302, &libs__handle_options__STATE_VARIABLE_Globals_1307_1307);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 466, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1307_1307, &libs__handle_options__STATE_VARIABLE_Globals_1312_1312);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 384, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1312_1312, &libs__handle_options__STATE_VARIABLE_Globals_1317_1317);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 344, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1317_1317, &libs__handle_options__STATE_VARIABLE_Globals_1322_1322);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 218, (MR_Integer) 448, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1322_1322, &libs__handle_options__STATE_VARIABLE_Globals_1327_1327);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 228, (MR_Integer) 448, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1327_1327, &libs__handle_options__STATE_VARIABLE_Globals_1332_1332);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 220, (MR_Integer) 450, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1332_1332, &libs__handle_options__STATE_VARIABLE_Globals_1337_1337);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1337_1337, (MR_Integer) 280, &libs__handle_options__DisablePneg_137);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1337_1337, (MR_Integer) 281, &libs__handle_options__DisableCut_138);
    }
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_111 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_137 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 282, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1337_1337, &libs__handle_options__STATE_VARIABLE_Globals_1343_1343);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1343_1343 = libs__handle_options__STATE_VARIABLE_Globals_1337_1337;
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_111 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_138 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 283, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1343_1343, &libs__handle_options__STATE_VARIABLE_Globals_1347_1347);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1347_1347 = libs__handle_options__STATE_VARIABLE_Globals_1343_1343;
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1347_1347, (MR_Integer) 149, &libs__handle_options__DumpHLDSStages_139);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1347_1347, (MR_Integer) 148, &libs__handle_options__DumpTraceStages_140);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1347_1347, (MR_Integer) 299, &libs__handle_options__ParallelLiveness_141);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1347_1347, (MR_Integer) 300, &libs__handle_options__ParallelCodeGen_142);
    }
    {
      MR_String libs__handle_options__V_143_143;
      MR_Word libs__handle_options__V_144_144;

      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_139)) == (MR_mktag((MR_Integer) 1)));
      if (libs__handle_options__succeeded)
        {
          libs__handle_options__V_143_143 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_139, (MR_Integer) 0)));
          libs__handle_options__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_139, (MR_Integer) 1)));
        }
    }
    if (!(libs__handle_options__succeeded))
      {
        {
          MR_String libs__handle_options__V_145_145;
          MR_Word libs__handle_options__V_146_146;

          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_140)) == (MR_mktag((MR_Integer) 1)));
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_140, (MR_Integer) 0)));
              libs__handle_options__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_140, (MR_Integer) 1)));
            }
        }
        if (!(libs__handle_options__succeeded))
          {
            libs__handle_options__succeeded = (libs__handle_options__Statistics_87 == (MR_Integer) 1);
            if (!(libs__handle_options__succeeded))
              {
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_141 == (MR_Integer) 1);
                if (!(libs__handle_options__succeeded))
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_142 == (MR_Integer) 1);
              }
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 298, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1347_1347, &libs__handle_options__STATE_VARIABLE_Globals_1355_1355);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1347_1347;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 355, (MR_Integer) 356, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1355_1355, &libs__handle_options__STATE_VARIABLE_Globals_1360_1360);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 344, (MR_Integer) 345, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1360_1360, &libs__handle_options__STATE_VARIABLE_Globals_1365_1365);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 347, (MR_Integer) 322, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1365_1365, &libs__handle_options__STATE_VARIABLE_Globals_1370_1370);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 347, (MR_Integer) 346, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1370_1370, &libs__handle_options__STATE_VARIABLE_Globals_1375_1375);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 357, (MR_Integer) 363, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1375_1375, &libs__handle_options__STATE_VARIABLE_Globals_1380_1380);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 357, (MR_Integer) 342, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1380_1380, &libs__handle_options__STATE_VARIABLE_Globals_1385_1385);
    }
    libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_1387_1387 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_1387_1387)) == (MR_mktag((MR_Integer) 1)));
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__V_1388_1388 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_1387_1387, (MR_Integer) 0)));
            libs__handle_options__succeeded = (libs__handle_options__V_1388_1388 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 346, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1385_1385, &libs__handle_options__STATE_VARIABLE_Globals_1391_1391);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1391_1391 = libs__handle_options__STATE_VARIABLE_Globals_1385_1385;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 389, (MR_Integer) 390, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1391_1391, &libs__handle_options__STATE_VARIABLE_Globals_1396_1396);
    }
    libs__handle_options__succeeded = (libs__handle_options__OpMode_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 23, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1396_1396, &libs__handle_options__STATE_VARIABLE_Globals_1400_1400);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1400_1400 = libs__handle_options__STATE_VARIABLE_Globals_1396_1396;
    {
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1400_1400, (MR_Integer) 653, &libs__handle_options__TargetArch_147);
    }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1400_1400, (MR_Integer) 542, &libs__handle_options__MaybeStdLibDir_148);
    }
    if ((libs__handle_options__MaybeStdLibDir_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_1415_1415 = libs__handle_options__STATE_VARIABLE_Globals_1400_1400;
    else
      {
        MR_String libs__handle_options__StdLibDir_149 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_148, (MR_Integer) 0)));
        MR_Word libs__handle_options__OptionTable2_150;
        MR_Word libs__handle_options__OptionTable_151;
        MR_Word libs__handle_options__LinkLibDirs0_152;
        MR_Word libs__handle_options__Rpath0_153;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1404_1404;
        MR_Word libs__handle_options__V_1407_1407;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1408_1408;
        MR_Word libs__handle_options__V_1409_1409;
        MR_String libs__handle_options__V_1410_1410;
        MR_Word libs__handle_options__V_1414_1414;
        MR_Word libs__handle_options__V_1416_1416;
        MR_String libs__handle_options__V_1417_1417;

        {
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1400_1400, &libs__handle_options__OptionTable2_150);
        }
        {
          libs__options__option_table_add_mercury_library_directory_3_p_0(libs__handle_options__StdLibDir_149, libs__handle_options__OptionTable2_150, &libs__handle_options__OptionTable_151);
        }
        {
          libs__globals__set_options_3_p_0(libs__handle_options__OptionTable_151, libs__handle_options__STATE_VARIABLE_Globals_1400_1400, &libs__handle_options__STATE_VARIABLE_Globals_1404_1404);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1404_1404, (MR_Integer) 532, &libs__handle_options__LinkLibDirs0_152);
        }
        {
          libs__handle_options__V_1410_1410 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_149, (MR_String) "lib");
        }
        {
          libs__handle_options__V_1409_1409 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1409_1409, 0) = ((MR_Box) (libs__handle_options__V_1410_1410));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1409_1409, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_152));
        }
        {
          libs__handle_options__V_1407_1407 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1407_1407, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1407_1407, 1) = ((MR_Box) (libs__handle_options__V_1409_1409));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1407_1407, libs__handle_options__STATE_VARIABLE_Globals_1404_1404, &libs__handle_options__STATE_VARIABLE_Globals_1408_1408);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1408_1408, (MR_Integer) 533, &libs__handle_options__Rpath0_153);
        }
        {
          libs__handle_options__V_1417_1417 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_149, (MR_String) "lib");
        }
        {
          libs__handle_options__V_1416_1416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1416_1416, 0) = ((MR_Box) (libs__handle_options__V_1417_1417));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1416_1416, 1) = ((MR_Box) (libs__handle_options__Rpath0_153));
        }
        {
          libs__handle_options__V_1414_1414 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1414_1414, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1414_1414, 1) = ((MR_Box) (libs__handle_options__V_1416_1416));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 533, libs__handle_options__V_1414_1414, libs__handle_options__STATE_VARIABLE_Globals_1408_1408, &libs__handle_options__STATE_VARIABLE_Globals_1415_1415);
        }
      }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1415_1415, (MR_Integer) 621, &libs__handle_options__MaybeConfDir_154);
    }
    if ((libs__handle_options__MaybeConfDir_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_1423_1423 = libs__handle_options__STATE_VARIABLE_Globals_1415_1415;
    else
      {
        MR_String libs__handle_options__ConfDir_155 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_154, (MR_Integer) 0)));
        MR_Word libs__handle_options__CIncludeDirs0_156;
        MR_Word libs__handle_options__V_1422_1422;
        MR_Word libs__handle_options__V_1424_1424;
        MR_String libs__handle_options__V_1425_1425;

        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1415_1415, (MR_Integer) 485, &libs__handle_options__CIncludeDirs0_156);
        }
        {
          libs__handle_options__V_1425_1425 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_155, (MR_String) "conf");
        }
        {
          libs__handle_options__V_1424_1424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1424_1424, 0) = ((MR_Box) (libs__handle_options__V_1425_1425));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1424_1424, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_156));
        }
        {
          libs__handle_options__V_1422_1422 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1422_1422, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1422_1422, 1) = ((MR_Box) (libs__handle_options__V_1424_1424));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 485, libs__handle_options__V_1422_1422, libs__handle_options__STATE_VARIABLE_Globals_1415_1415, &libs__handle_options__STATE_VARIABLE_Globals_1423_1423);
        }
      }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1423_1423, (MR_Integer) 632, &libs__handle_options__ConfigFile_157);
    }
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_157)) == (MR_mktag((MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_1428_1428 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_157, (MR_Integer) 0)));
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1428_1428, (MR_String) "") == 0);
      }
    if (libs__handle_options__succeeded)
      if ((libs__handle_options__MaybeConfDir_154 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 632, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232]), libs__handle_options__STATE_VARIABLE_Globals_1423_1423, &libs__handle_options__STATE_VARIABLE_Globals_1435_1435);
          }
        }
      else
        {
          MR_String libs__handle_options__ConfDir1_158 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_154, (MR_Integer) 0)));
          MR_Word libs__handle_options__V_1434_1434;
          MR_Word libs__handle_options__V_1436_1436;
          MR_String libs__handle_options__V_1437_1437;
          MR_String libs__handle_options__V_1438_1438;

          {
            libs__handle_options__V_1438_1438 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_158, (MR_String) "conf");
          }
          {
            libs__handle_options__V_1437_1437 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1438_1438, (MR_String) "Mercury.config");
          }
          {
            libs__handle_options__V_1436_1436 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1436_1436, 0) = ((MR_Box) (libs__handle_options__V_1437_1437));
          }
          {
            libs__handle_options__V_1434_1434 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1434_1434, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1434_1434, 1) = ((MR_Box) (libs__handle_options__V_1436_1436));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 632, libs__handle_options__V_1434_1434, libs__handle_options__STATE_VARIABLE_Globals_1423_1423, &libs__handle_options__STATE_VARIABLE_Globals_1435_1435);
          }
        }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1435_1435 = libs__handle_options__STATE_VARIABLE_Globals_1423_1423;
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1435_1435, (MR_Integer) 536, &libs__handle_options__MercuryLibDirs_159);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1435_1435, &libs__handle_options__GradeString_160);
    }
    if ((libs__handle_options__MercuryLibDirs_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_1492_1492 = libs__handle_options__STATE_VARIABLE_Globals_1435_1435;
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_1661_1661 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word libs__handle_options__ExtraLinkLibDirs_163;
        MR_Word libs__handle_options__LinkLibDirs1_165;
        MR_Word libs__handle_options__Rpath_166;
        MR_Word libs__handle_options__ExtraIncludeDirs_167;
        MR_Word libs__handle_options__CIncludeDirs_168;
        MR_Word libs__handle_options__ErlangIncludeDirs_169;
        MR_Word libs__handle_options__ExtraIntermodDirs_170;
        MR_Word libs__handle_options__IntermodDirs0_171;
        MR_Word libs__handle_options__ExtraInitDirs_172;
        MR_Word libs__handle_options__InitDirs1_173;
        MR_Word libs__handle_options__V_1442_1442;
        MR_Word libs__handle_options__V_1449_1449;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1450_1450;
        MR_Word libs__handle_options__V_1451_1451;
        MR_Word libs__handle_options__V_1454_1454;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1455_1455;
        MR_Word libs__handle_options__V_1456_1456;
        MR_Word libs__handle_options__V_1457_1457;
        MR_Word libs__handle_options__V_1466_1466;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1467_1467;
        MR_Word libs__handle_options__V_1468_1468;
        MR_Word libs__handle_options__V_1471_1471;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1472_1472;
        MR_Word libs__handle_options__V_1473_1473;
        MR_Word libs__handle_options__V_1474_1474;
        MR_Word libs__handle_options__V_1481_1481;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1482_1482;
        MR_Word libs__handle_options__V_1483_1483;
        MR_Word libs__handle_options__V_1484_1484;
        MR_Word libs__handle_options__V_1491_1491;
        MR_Word libs__handle_options__V_1493_1493;

        {
          libs__handle_options__V_1442_1442 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1442_1442, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1442_1442, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1442_1442, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1442_1442, 3) = ((MR_Box) (libs__handle_options__GradeString_160));
        }
        {
          libs__handle_options__ExtraLinkLibDirs_163 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__V_1442_1442, libs__handle_options__MercuryLibDirs_159);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1435_1435, (MR_Integer) 532, &libs__handle_options__LinkLibDirs1_165);
        }
        {
          libs__handle_options__V_1451_1451 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__LinkLibDirs1_165, libs__handle_options__ExtraLinkLibDirs_163);
        }
        {
          libs__handle_options__V_1449_1449 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1449_1449, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1449_1449, 1) = ((MR_Box) (libs__handle_options__V_1451_1451));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1449_1449, libs__handle_options__STATE_VARIABLE_Globals_1435_1435, &libs__handle_options__STATE_VARIABLE_Globals_1450_1450);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1450_1450, (MR_Integer) 533, &libs__handle_options__Rpath_166);
        }
        {
          libs__handle_options__V_1456_1456 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__Rpath_166, libs__handle_options__ExtraLinkLibDirs_163);
        }
        {
          libs__handle_options__V_1454_1454 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1454_1454, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1454_1454, 1) = ((MR_Box) (libs__handle_options__V_1456_1456));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 533, libs__handle_options__V_1454_1454, libs__handle_options__STATE_VARIABLE_Globals_1450_1450, &libs__handle_options__STATE_VARIABLE_Globals_1455_1455);
        }
        {
          libs__handle_options__V_1457_1457 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1457_1457, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1457_1457, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1457_1457, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1457_1457, 3) = ((MR_Box) (libs__handle_options__GradeString_160));
        }
        {
          libs__handle_options__ExtraIncludeDirs_167 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__V_1457_1457, libs__handle_options__MercuryLibDirs_159);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1455_1455, (MR_Integer) 485, &libs__handle_options__CIncludeDirs_168);
        }
        {
          libs__handle_options__V_1468_1468 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__ExtraIncludeDirs_167, libs__handle_options__CIncludeDirs_168);
        }
        {
          libs__handle_options__V_1466_1466 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1466_1466, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1466_1466, 1) = ((MR_Box) (libs__handle_options__V_1468_1468));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 485, libs__handle_options__V_1466_1466, libs__handle_options__STATE_VARIABLE_Globals_1455_1455, &libs__handle_options__STATE_VARIABLE_Globals_1467_1467);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1467_1467, (MR_Integer) 523, &libs__handle_options__ErlangIncludeDirs_169);
        }
        {
          libs__handle_options__V_1473_1473 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__ExtraIncludeDirs_167, libs__handle_options__ErlangIncludeDirs_169);
        }
        {
          libs__handle_options__V_1471_1471 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1471_1471, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1471_1471, 1) = ((MR_Box) (libs__handle_options__V_1473_1473));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 523, libs__handle_options__V_1471_1471, libs__handle_options__STATE_VARIABLE_Globals_1467_1467, &libs__handle_options__STATE_VARIABLE_Globals_1472_1472);
        }
        {
          libs__handle_options__V_1474_1474 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1474_1474, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1474_1474, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1474_1474, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1474_1474, 3) = ((MR_Box) (libs__handle_options__GradeString_160));
        }
        {
          libs__handle_options__ExtraIntermodDirs_170 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__V_1474_1474, libs__handle_options__MercuryLibDirs_159);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1472_1472, (MR_Integer) 637, &libs__handle_options__IntermodDirs0_171);
        }
        {
          libs__handle_options__V_1483_1483 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__ExtraIntermodDirs_170, libs__handle_options__IntermodDirs0_171);
        }
        {
          libs__handle_options__V_1481_1481 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1481_1481, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1481_1481, 1) = ((MR_Box) (libs__handle_options__V_1483_1483));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_1481_1481, libs__handle_options__STATE_VARIABLE_Globals_1472_1472, &libs__handle_options__STATE_VARIABLE_Globals_1482_1482);
        }
        {
          libs__handle_options__V_1484_1484 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1484_1484, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1484_1484, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1484_1484, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1484_1484, 3) = ((MR_Box) (libs__handle_options__GradeString_160));
        }
        {
          libs__handle_options__ExtraInitDirs_172 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__V_1484_1484, libs__handle_options__MercuryLibDirs_159);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1482_1482, (MR_Integer) 544, &libs__handle_options__InitDirs1_173);
        }
        {
          libs__handle_options__V_1493_1493 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1661_1661, libs__handle_options__InitDirs1_173, libs__handle_options__ExtraInitDirs_172);
        }
        {
          libs__handle_options__V_1491_1491 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1491_1491, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1491_1491, 1) = ((MR_Box) (libs__handle_options__V_1493_1493));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 544, libs__handle_options__V_1491_1491, libs__handle_options__STATE_VARIABLE_Globals_1482_1482, &libs__handle_options__STATE_VARIABLE_Globals_1492_1492);
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1492_1492, (MR_Integer) 638, &libs__handle_options__UseSearchDirs_174);
    }
    switch (libs__handle_options__UseSearchDirs_174) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_1499_1499 = libs__handle_options__STATE_VARIABLE_Globals_1492_1492;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__IntermodDirs1_175;
          MR_Word libs__handle_options__SearchDirs_176;
          MR_Word libs__handle_options__V_1498_1498;
          MR_Word libs__handle_options__V_1500_1500;

          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1492_1492, (MR_Integer) 637, &libs__handle_options__IntermodDirs1_175);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1492_1492, (MR_Integer) 636, &libs__handle_options__SearchDirs_176);
          }
          {
            libs__handle_options__V_1500_1500 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_175, libs__handle_options__SearchDirs_176);
          }
          {
            libs__handle_options__V_1498_1498 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1498_1498, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1498_1498, 1) = ((MR_Box) (libs__handle_options__V_1500_1500));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_1498_1498, libs__handle_options__STATE_VARIABLE_Globals_1492_1492, &libs__handle_options__STATE_VARIABLE_Globals_1499_1499);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1499_1499, (MR_Integer) 635, &libs__handle_options__UseGradeSubdirs_177);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1499_1499, (MR_Integer) 538, &libs__handle_options__SearchLibFilesDirs_178);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1499_1499, (MR_Integer) 637, &libs__handle_options__IntermodDirs2_179);
    }
    {
      libs__handle_options__ToGradeSubdir_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, 3) = ((MR_Box) (libs__handle_options__TargetArch_147));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_180, 4) = ((MR_Box) (libs__handle_options__GradeString_160));
    }
    switch (libs__handle_options__UseGradeSubdirs_177) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word libs__handle_options__TypeCtorInfo_1670_1670;
          MR_Word libs__handle_options__IntermodDirs3_184;
          MR_Word libs__handle_options__LinkLibDirs2_185;
          MR_Word libs__handle_options__InitDirs2_186;
          MR_Word libs__handle_options__V_1519_1519;

          {
            libs__handle_options__IntermodDirs3_184 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_178, libs__handle_options__IntermodDirs2_179);
          }
          {
            libs__handle_options__V_1519_1519 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1519_1519, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1519_1519, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_184));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_1519_1519, libs__handle_options__STATE_VARIABLE_Globals_1499_1499, &libs__handle_options__STATE_VARIABLE_Globals_1520_1520);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1520_1520, (MR_Integer) 532, &libs__handle_options__LinkLibDirs2_185);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1520_1520, (MR_Integer) 544, &libs__handle_options__InitDirs2_186);
          }
          libs__handle_options__TypeCtorInfo_1670_1670 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            libs__handle_options__LinkLibDirs_189 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1670_1670, libs__handle_options__SearchLibFilesDirs_178, libs__handle_options__LinkLibDirs2_185);
          }
          {
            libs__handle_options__InitDirs_192 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1670_1670, libs__handle_options__SearchLibFilesDirs_178, libs__handle_options__InitDirs2_186);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__TypeCtorInfo_1663_1663;
          MR_Word libs__handle_options__TypeCtorInfo_1669_1669;
          MR_String libs__handle_options__GradeSubdir_182;
          MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_183;
          MR_Word libs__handle_options__ToGradeLibDir_187;
          MR_Word libs__handle_options__SearchGradeLibDirs_188;
          MR_Word libs__handle_options__ToGradeInitDir_190;
          MR_Word libs__handle_options__SearchGradeInitDirs_191;
          MR_String libs__handle_options__V_1509_1509;
          MR_Word libs__handle_options__V_1511_1511;
          MR_Word libs__handle_options__V_1513_1513;
          MR_Word libs__handle_options__V_1514_1514;
          MR_Word libs__handle_options__V_1515_1515;
          MR_Word libs__handle_options__V_1516_1516;
          MR_String libs__handle_options__V_1517_1517;
          MR_Word libs__handle_options__IntermodDirs3_12270;
          MR_Word libs__handle_options__LinkLibDirs2_12271;
          MR_Word libs__handle_options__InitDirs2_12272;
          MR_Word libs__handle_options__V_12273_12273;

          {
            libs__handle_options__V_1509_1509 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_160);
          }
          {
            libs__handle_options__GradeSubdir_182 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1509_1509, libs__handle_options__TargetArch_147);
          }
          libs__handle_options__TypeCtorInfo_1663_1663 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            libs__handle_options__SearchLibFilesGradeSubdirs_183 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1663_1663, libs__handle_options__TypeCtorInfo_1663_1663, libs__handle_options__ToGradeSubdir_180, libs__handle_options__SearchLibFilesDirs_178);
          }
          {
            libs__handle_options__V_1511_1511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1511_1511, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_182));
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1511_1511, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            libs__handle_options__V_1517_1517 = mercury__dir__this_directory_0_f_0();
          }
          {
            libs__handle_options__V_1516_1516 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1516_1516, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[4]));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1516_1516, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1516_1516, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1516_1516, 3) = ((MR_Box) (libs__handle_options__V_1517_1517));
          }
          {
            libs__handle_options__V_1515_1515 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1515_1515, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[5]));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1515_1515, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1515_1515, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1515_1515, 3) = ((MR_Box) (libs__handle_options__V_1516_1516));
          }
          {
            libs__handle_options__V_1514_1514 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1663_1663, libs__handle_options__V_1515_1515, libs__handle_options__IntermodDirs2_179);
          }
          {
            libs__handle_options__V_1513_1513 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1663_1663, libs__handle_options__SearchLibFilesGradeSubdirs_183, libs__handle_options__V_1514_1514);
          }
          {
            libs__handle_options__IntermodDirs3_12270 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1663_1663, libs__handle_options__V_1511_1511, libs__handle_options__V_1513_1513);
          }
          {
            libs__handle_options__V_12273_12273 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_12273_12273, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_12273_12273, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_12270));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_12273_12273, libs__handle_options__STATE_VARIABLE_Globals_1499_1499, &libs__handle_options__STATE_VARIABLE_Globals_1520_1520);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1520_1520, (MR_Integer) 532, &libs__handle_options__LinkLibDirs2_12271);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1520_1520, (MR_Integer) 544, &libs__handle_options__InitDirs2_12272);
          }
          {
            libs__handle_options__ToGradeLibDir_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_187, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_187, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_187, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_187, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_180));
          }
          libs__handle_options__TypeCtorInfo_1669_1669 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            libs__handle_options__SearchGradeLibDirs_188 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__ToGradeLibDir_187, libs__handle_options__SearchLibFilesDirs_178);
          }
          {
            libs__handle_options__LinkLibDirs_189 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__SearchGradeLibDirs_188, libs__handle_options__LinkLibDirs2_12271);
          }
          {
            libs__handle_options__ToGradeInitDir_190 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_190, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_190, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_190, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_190, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_180));
          }
          {
            libs__handle_options__SearchGradeInitDirs_191 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__ToGradeInitDir_190, libs__handle_options__SearchLibFilesDirs_178);
          }
          {
            libs__handle_options__InitDirs_192 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1669_1669, libs__handle_options__SearchGradeInitDirs_191, libs__handle_options__InitDirs2_12272);
          }
        }
        break;
    }
    {
      libs__handle_options__V_1536_1536 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1536_1536, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1536_1536, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_189));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1536_1536, libs__handle_options__STATE_VARIABLE_Globals_1520_1520, &libs__handle_options__STATE_VARIABLE_Globals_1537_1537);
    }
    {
      libs__handle_options__V_1539_1539 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1539_1539, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1539_1539, 1) = ((MR_Box) (libs__handle_options__InitDirs_192));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 544, libs__handle_options__V_1539_1539, libs__handle_options__STATE_VARIABLE_Globals_1537_1537, &libs__handle_options__STATE_VARIABLE_Globals_1540_1540);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1540_1540, (MR_Integer) 634, &libs__handle_options__UseSubdirs_193);
    }
    switch (libs__handle_options__UseGradeSubdirs_177) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_193 == (MR_Integer) 1);
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__ToMihsSubdir_194 = (MR_Word) &libs__handle_options_scalar_common_3[9];
              libs__handle_options__ToHrlsSubdir_195 = (MR_Word) &libs__handle_options_scalar_common_3[10];
              libs__handle_options__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__handle_options__ToMihsSubdir_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_194, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_194, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_194, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_194, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_180));
          }
          {
            libs__handle_options__ToHrlsSubdir_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_195, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_195, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_195, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_195, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_180));
          }
          libs__handle_options__succeeded = MR_TRUE;
        }
        break;
    }
    if (libs__handle_options__succeeded)
      {
        MR_Word libs__handle_options__TypeCtorInfo_1671_1671;
        MR_Word libs__handle_options__CIncludeDirs1_196;
        MR_String libs__handle_options__MihsSubdir_197;
        MR_Word libs__handle_options__SearchLibMihsSubdirs_198;
        MR_Word libs__handle_options__SubdirCIncludeDirs_199;
        MR_Word libs__handle_options__ErlangIncludeDirs1_200;
        MR_String libs__handle_options__HrlsSubdir_201;
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_202;
        MR_String libs__handle_options__V_1565_1565;
        MR_String libs__handle_options__V_1566_1566;
        MR_Word libs__handle_options__V_1567_1567;
        MR_Word libs__handle_options__V_1568_1568;
        MR_Word libs__handle_options__V_1570_1570;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1571_1571;
        MR_String libs__handle_options__V_1573_1573;
        MR_Word libs__handle_options__V_1575_1575;
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
        MR_Box libs__handle_options__conv12_MihsSubdir_197;
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
        MR_Box libs__handle_options__conv14_HrlsSubdir_201;

        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1540_1540, (MR_Integer) 485, &libs__handle_options__CIncludeDirs1_196);
        }
        {
          libs__handle_options__V_1565_1565 = mercury__dir__this_directory_0_f_0();
        }
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_194, (MR_Integer) 1)));
        {
          libs__handle_options__conv12_MihsSubdir_197 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_194), ((MR_Box) (libs__handle_options__V_1565_1565)));
        }
        libs__handle_options__MihsSubdir_197 = ((MR_String) libs__handle_options__conv12_MihsSubdir_197);
        libs__handle_options__TypeCtorInfo_1671_1671 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          libs__handle_options__SearchLibMihsSubdirs_198 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1671_1671, libs__handle_options__TypeCtorInfo_1671_1671, libs__handle_options__ToMihsSubdir_194, libs__handle_options__SearchLibFilesDirs_178);
        }
        {
          libs__handle_options__V_1566_1566 = mercury__dir__this_directory_0_f_0();
        }
        {
          libs__handle_options__V_1568_1568 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1671_1671, libs__handle_options__SearchLibMihsSubdirs_198, libs__handle_options__CIncludeDirs1_196);
        }
        {
          libs__handle_options__V_1567_1567 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1567_1567, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_197));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1567_1567, 1) = ((MR_Box) (libs__handle_options__V_1568_1568));
        }
        {
          libs__handle_options__SubdirCIncludeDirs_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_199, 0) = ((MR_Box) (libs__handle_options__V_1566_1566));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_199, 1) = ((MR_Box) (libs__handle_options__V_1567_1567));
        }
        {
          libs__handle_options__V_1570_1570 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1570_1570, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1570_1570, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_199));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 485, libs__handle_options__V_1570_1570, libs__handle_options__STATE_VARIABLE_Globals_1540_1540, &libs__handle_options__STATE_VARIABLE_Globals_1571_1571);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1571_1571, (MR_Integer) 523, &libs__handle_options__ErlangIncludeDirs1_200);
        }
        {
          libs__handle_options__V_1573_1573 = mercury__dir__this_directory_0_f_0();
        }
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_195, (MR_Integer) 1)));
        {
          libs__handle_options__conv14_HrlsSubdir_201 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_195), ((MR_Box) (libs__handle_options__V_1573_1573)));
        }
        libs__handle_options__HrlsSubdir_201 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_201);
        {
          libs__handle_options__SubdirErlangIncludeDirs_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_202, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_201));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_202, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_200));
        }
        {
          libs__handle_options__V_1575_1575 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1575_1575, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1575_1575, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_202));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 523, libs__handle_options__V_1575_1575, libs__handle_options__STATE_VARIABLE_Globals_1571_1571, &libs__handle_options__STATE_VARIABLE_Globals_1576_1576);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1576_1576 = libs__handle_options__STATE_VARIABLE_Globals_1540_1540;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 324, (MR_Integer) 13, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1576_1576, &libs__handle_options__STATE_VARIABLE_Globals_1580_1580);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1580_1580, (MR_Integer) 26, &libs__handle_options__WarnNonTailRec_203);
    }
    switch (libs__handle_options__WarnNonTailRec_203) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Specs_1603_1603 = libs__handle_options__STATE_VARIABLE_Specs_1288_1288;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__PessimizeTailCalls_204;
          MR_Word libs__handle_options__OptimizeTailCalls_205;
          MR_Word libs__handle_options__STATE_VARIABLE_Specs_1589_1589;
          MR_Word libs__handle_options__STATE_VARIABLE_Specs_1594_1594;
          MR_Word libs__handle_options__V_1597_1597;
          MR_Word libs__handle_options__V_1598_1598;

          {
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1580_1580, (MR_Integer) 462, &libs__handle_options__PessimizeTailCalls_204);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1580_1580, (MR_Integer) 451, &libs__handle_options__OptimizeTailCalls_205);
          }
          switch (libs__handle_options__PessimizeTailCalls_204) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__handle_options__STATE_VARIABLE_Specs_1589_1589 = libs__handle_options__STATE_VARIABLE_Specs_1288_1288;
              break;
            case (MR_Integer) 1:
              {
                {
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[234]), libs__handle_options__STATE_VARIABLE_Specs_1288_1288, &libs__handle_options__STATE_VARIABLE_Specs_1589_1589);
                }
              }
              break;
          }
          switch (libs__handle_options__OptimizeTailCalls_205) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[236]), libs__handle_options__STATE_VARIABLE_Specs_1589_1589, &libs__handle_options__STATE_VARIABLE_Specs_1594_1594);
                }
              }
              break;
            case (MR_Integer) 1:
              libs__handle_options__STATE_VARIABLE_Specs_1594_1594 = libs__handle_options__STATE_VARIABLE_Specs_1589_1589;
              break;
          }
          libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_26)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__V_1597_1597 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_26, (MR_Integer) 1)));
              libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_1597_1597)) == (MR_mktag((MR_Integer) 1)));
              if (libs__handle_options__succeeded)
                {
                  libs__handle_options__V_1598_1598 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_1597_1597, (MR_Integer) 0)));
                  libs__handle_options__succeeded = (libs__handle_options__V_1598_1598 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                }
            }
          if (libs__handle_options__succeeded)
            {
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[238]), libs__handle_options__STATE_VARIABLE_Specs_1594_1594, &libs__handle_options__STATE_VARIABLE_Specs_1603_1603);
              }
            }
          else
            libs__handle_options__STATE_VARIABLE_Specs_1603_1603 = libs__handle_options__STATE_VARIABLE_Specs_1594_1594;
        }
        break;
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__BackendForeignLanguages_209 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[239]);
          libs__handle_options__STATE_VARIABLE_Globals_1614_1614 = libs__handle_options__STATE_VARIABLE_Globals_1580_1580;
        }
        break;
      case (MR_Integer) 1:
        {
          libs__handle_options__BackendForeignLanguages_209 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[240]);
          libs__handle_options__STATE_VARIABLE_Globals_1614_1614 = libs__handle_options__STATE_VARIABLE_Globals_1580_1580;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1610_1610;

          libs__handle_options__BackendForeignLanguages_209 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1580_1580, &libs__handle_options__STATE_VARIABLE_Globals_1610_1610);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 294, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1610_1610, &libs__handle_options__STATE_VARIABLE_Globals_1614_1614);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          libs__handle_options__BackendForeignLanguages_209 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[241]);
          libs__handle_options__STATE_VARIABLE_Globals_1614_1614 = libs__handle_options__STATE_VARIABLE_Globals_1580_1580;
        }
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1614_1614, (MR_Integer) 261, &libs__handle_options__CurrentBackendForeignLanguage_210);
    }
    if ((libs__handle_options__CurrentBackendForeignLanguage_210 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word libs__handle_options__V_1624_1624;

        {
          libs__handle_options__V_1624_1624 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1624_1624, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1624_1624, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_209));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_1624_1624, libs__handle_options__STATE_VARIABLE_Globals_1614_1614, &libs__handle_options__STATE_VARIABLE_Globals_1625_1625);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1625_1625 = libs__handle_options__STATE_VARIABLE_Globals_1614_1614;
    {
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1625_1625, (MR_Integer) 312, &libs__handle_options__CompareSpec_213);
    }
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_213 < (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      switch (libs__handle_options__HighLevelCode_110) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[6]), libs__handle_options__STATE_VARIABLE_Globals_1625_1625, &libs__handle_options__STATE_VARIABLE_Globals_1634_1634);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[7]), libs__handle_options__STATE_VARIABLE_Globals_1625_1625, &libs__handle_options__STATE_VARIABLE_Globals_1634_1634);
            }
          }
          break;
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1634_1634 = libs__handle_options__STATE_VARIABLE_Globals_1625_1625;
    libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        switch (libs__handle_options__TagsMethod_59) {
          default:
            libs__handle_options__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            libs__handle_options__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            libs__handle_options__succeeded = MR_TRUE;
            break;
        }
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__V_1636_1636 = (MR_Integer) 2;
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 >= libs__handle_options__V_1636_1636);
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_356_356, libs__handle_options__STATE_VARIABLE_Globals_1634_1634, &libs__handle_options__STATE_VARIABLE_Globals_1639_1639);
        }
      }
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_509_509, libs__handle_options__STATE_VARIABLE_Globals_1634_1634, &libs__handle_options__STATE_VARIABLE_Globals_1639_1639);
        }
      }
    switch (libs__handle_options__HighLevelCode_110) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1639_1639, &libs__handle_options__STATE_VARIABLE_Globals_1645_1645);
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1645_1645 = libs__handle_options__STATE_VARIABLE_Globals_1639_1639;
        break;
    }
    {
      libs__compute_grade__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1645_1645, libs__handle_options__STATE_VARIABLE_Globals_216, libs__handle_options__STATE_VARIABLE_Specs_1603_1603, libs__handle_options__STATE_VARIABLE_Specs_215);
    }
    {
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_216);
    }
  }
}

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_0_116,
  MR_Word * libs__handle_options__STATE_VARIABLE_OptionTable_117,
  MR_Word * libs__handle_options__Target_24,
  MR_Word * libs__handle_options__GC_Method_25,
  MR_Word * libs__handle_options__TagsMethod_26,
  MR_Word * libs__handle_options__TermNorm_27,
  MR_Word * libs__handle_options__Term2Norm_28,
  MR_Word * libs__handle_options__TraceLevel_29,
  MR_Word * libs__handle_options__TraceSuppress_30,
  MR_Word * libs__handle_options__SSTraceLevel_31,
  MR_Word * libs__handle_options__MaybeThreadSafe_32,
  MR_Word * libs__handle_options__C_CompilerType_33,
  MR_Word * libs__handle_options__CSharp_CompilerType_34,
  MR_Word * libs__handle_options__ReuseStrategy_35,
  MR_Word * libs__handle_options__MaybeFeedbackInfo_36,
  MR_Word * libs__handle_options__HostEnvType_37,
  MR_Word * libs__handle_options__SystemEnvType_38,
  MR_Word * libs__handle_options__TargetEnvType_39,
  MR_Word * libs__handle_options__LimitErrorContextsMap_40,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_118)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__TypeCtorInfo_826_826;
    MR_String libs__handle_options__TargetStr_43;
    MR_String libs__handle_options__GC_MethodStr_46;
    MR_String libs__handle_options__TagsMethodStr_49;
    MR_Integer libs__handle_options__FactTablePercentFull_52;
    MR_String libs__handle_options__TermNormStr_54;
    MR_String libs__handle_options__Term2NormStr_57;
    MR_Word libs__handle_options__ForceDisableTracing_60;
    MR_String libs__handle_options__SuppressStr_67;
    MR_Word libs__handle_options__ForceDisableSSDB_70;
    MR_String libs__handle_options__MaybeThreadSafeStr_75;
    MR_String libs__handle_options__DumpAlias_78;
    MR_String libs__handle_options__C_CompilerTypeStr_82;
    MR_String libs__handle_options__CSharp_CompilerTypeStr_85;
    MR_String libs__handle_options__ReuseConstraintStr_88;
    MR_Integer libs__handle_options__ReuseConstraintArgNum_89;
    MR_String libs__handle_options__FeedbackFile_92;
    MR_String libs__handle_options__HostEnvTypeStr_98;
    MR_String libs__handle_options__SystemEnvTypeStr_101;
    MR_String libs__handle_options__TargetEnvTypeStr_104;
    MR_Word libs__handle_options__LimitErrorContextsOptionStrs_108;
    MR_Word libs__handle_options__BadLimitErrorContextsOptions_109;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_121_121 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_156_156;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_195_195;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_228_228;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_249_249;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_282_282;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_315_315;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_337_337;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_394_394;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_431_431;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_465_465;
    MR_Word libs__handle_options__STATE_VARIABLE_OptionTable_469_469;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_496_496;
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_498_498;
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_499_499;
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_502_502;
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_506_506;
    MR_String libs__handle_options__STATE_VARIABLE_DumpOptions_530_530;
    MR_Word libs__handle_options__V_533_533;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_572_572;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_608_608;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_640_640;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_645_645;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_682_682;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_720_720;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_758_758;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_774_774;
    MR_Word libs__handle_options__TargetPrime_44;
    MR_Word libs__handle_options__GC_MethodPrime_47;
    MR_Word libs__handle_options__TagsMethodPrime_50;
    MR_Integer libs__handle_options__V_231_231;
    MR_Word libs__handle_options__TermNormPrime_55;
    MR_Word libs__handle_options__Term2NormPrime_58;
    MR_Word libs__handle_options__TraceSuppressPrime_68;
    MR_Word libs__handle_options__MaybeThreadSafePrime_76;
    MR_Char libs__handle_options__V_501_501;
    MR_Char libs__handle_options__V_505_505;
    MR_Char libs__handle_options__V_529_529;
    MR_Word libs__handle_options__C_CompilerTypePrime_83;
    MR_Word libs__handle_options__CSharp_CompilerTypePrime_86;
    MR_Word libs__handle_options__ReuseStrategyPrime_90;
    MR_Word libs__handle_options__HostEnvTypePrime_99;
    MR_Word libs__handle_options__SystemEnvTypePrime_102;
    MR_Word libs__handle_options__TargetEnvTypePrime_105;

    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 178, &libs__handle_options__TargetStr_43);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_target_2_p_0(libs__handle_options__TargetStr_43, &libs__handle_options__TargetPrime_44);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__Target_24 = libs__handle_options__TargetPrime_44;
        libs__handle_options__STATE_VARIABLE_Specs_156_156 = libs__handle_options__STATE_VARIABLE_Specs_121_121;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_816_816;
        MR_Word libs__handle_options__TargetSpec_45;
        MR_Word libs__handle_options__V_123_123;
        MR_Word libs__handle_options__V_126_126;
        MR_Word libs__handle_options__V_127_127;
        MR_Word libs__handle_options__V_138_138;
        MR_Word libs__handle_options__V_139_139;

        *libs__handle_options__Target_24 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_816_816 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_127_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_127_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_127_127, 1) = ((MR_Box) (libs__handle_options__TargetStr_43));
        }
        {
          libs__handle_options__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_126_126, 0) = ((MR_Box) (libs__handle_options__V_127_127));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[17])));
        }
        {
          libs__handle_options__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_123_123, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_123_123, 1) = ((MR_Box) (libs__handle_options__V_126_126));
        }
        {
          libs__handle_options__V_139_139 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21]));
        }
        {
          libs__handle_options__V_138_138 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_816_816, libs__handle_options__V_139_139, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__TargetSpec_45 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_816_816, libs__handle_options__V_123_123, libs__handle_options__V_138_138);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TargetSpec_45, libs__handle_options__STATE_VARIABLE_Specs_121_121, &libs__handle_options__STATE_VARIABLE_Specs_156_156);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 215, &libs__handle_options__GC_MethodStr_46);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_gc_method_2_p_0(libs__handle_options__GC_MethodStr_46, &libs__handle_options__GC_MethodPrime_47);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__GC_Method_25 = libs__handle_options__GC_MethodPrime_47;
        libs__handle_options__STATE_VARIABLE_Specs_195_195 = libs__handle_options__STATE_VARIABLE_Specs_156_156;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_817_817;
        MR_Word libs__handle_options__GCMethodSpec_48;
        MR_Word libs__handle_options__V_158_158;
        MR_Word libs__handle_options__V_161_161;
        MR_Word libs__handle_options__V_162_162;
        MR_Word libs__handle_options__V_173_173;
        MR_Word libs__handle_options__V_174_174;

        *libs__handle_options__GC_Method_25 = (MR_Integer) 1;
        libs__handle_options__TypeCtorInfo_817_817 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_162_162, 1) = ((MR_Box) (libs__handle_options__GC_MethodStr_46));
        }
        {
          libs__handle_options__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_161_161, 0) = ((MR_Box) (libs__handle_options__V_162_162));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[24])));
        }
        {
          libs__handle_options__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_158_158, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_158_158, 1) = ((MR_Box) (libs__handle_options__V_161_161));
        }
        {
          libs__handle_options__V_174_174 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[30]));
        }
        {
          libs__handle_options__V_173_173 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_817_817, libs__handle_options__V_174_174, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__GCMethodSpec_48 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_817_817, libs__handle_options__V_158_158, libs__handle_options__V_173_173);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__GCMethodSpec_48, libs__handle_options__STATE_VARIABLE_Specs_156_156, &libs__handle_options__STATE_VARIABLE_Specs_195_195);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 236, &libs__handle_options__TagsMethodStr_49);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_tags_method_2_p_0(libs__handle_options__TagsMethodStr_49, &libs__handle_options__TagsMethodPrime_50);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__TagsMethod_26 = libs__handle_options__TagsMethodPrime_50;
        libs__handle_options__STATE_VARIABLE_Specs_228_228 = libs__handle_options__STATE_VARIABLE_Specs_195_195;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_818_818;
        MR_Word libs__handle_options__TagsMethodSpec_51;
        MR_Word libs__handle_options__V_197_197;
        MR_Word libs__handle_options__V_200_200;
        MR_Word libs__handle_options__V_201_201;
        MR_Word libs__handle_options__V_212_212;
        MR_Word libs__handle_options__V_213_213;

        *libs__handle_options__TagsMethod_26 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_818_818 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_201_201 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_201_201, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_201_201, 1) = ((MR_Box) (libs__handle_options__TagsMethodStr_49));
        }
        {
          libs__handle_options__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_200_200, 0) = ((MR_Box) (libs__handle_options__V_201_201));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_200_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])));
        }
        {
          libs__handle_options__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_197_197, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_197_197, 1) = ((MR_Box) (libs__handle_options__V_200_200));
        }
        {
          libs__handle_options__V_213_213 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36]));
        }
        {
          libs__handle_options__V_212_212 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_818_818, libs__handle_options__V_213_213, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__TagsMethodSpec_51 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_818_818, libs__handle_options__V_197_197, libs__handle_options__V_212_212);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TagsMethodSpec_51, libs__handle_options__STATE_VARIABLE_Specs_195_195, &libs__handle_options__STATE_VARIABLE_Specs_228_228);
        }
      }
    {
      libs__handle_options__raw_lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 315, &libs__handle_options__FactTablePercentFull_52);
    }
    libs__handle_options__succeeded = (libs__handle_options__FactTablePercentFull_52 >= (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_231_231 = (MR_Integer) 100;
        libs__handle_options__succeeded = (libs__handle_options__FactTablePercentFull_52 <= libs__handle_options__V_231_231);
      }
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Specs_249_249 = libs__handle_options__STATE_VARIABLE_Specs_228_228;
    else
      {
        MR_Word libs__handle_options__FactTablePercentFullSpec_53;
        MR_Word libs__handle_options__V_234_234;
        MR_Word libs__handle_options__V_235_235;

        {
          libs__handle_options__V_235_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_235_235, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_235_235, 1) = ((MR_Box) (libs__handle_options__FactTablePercentFull_52));
        }
        {
          libs__handle_options__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_234_234, 0) = ((MR_Box) (libs__handle_options__V_235_235));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])));
        }
        {
          libs__handle_options__FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__FactTablePercentFullSpec_53, 1) = ((MR_Box) (libs__handle_options__V_234_234));
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__FactTablePercentFullSpec_53, libs__handle_options__STATE_VARIABLE_Specs_228_228, &libs__handle_options__STATE_VARIABLE_Specs_249_249);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 414, &libs__handle_options__TermNormStr_54);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__TermNormStr_54, &libs__handle_options__TermNormPrime_55);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__TermNorm_27 = libs__handle_options__TermNormPrime_55;
        libs__handle_options__STATE_VARIABLE_Specs_282_282 = libs__handle_options__STATE_VARIABLE_Specs_249_249;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_819_819;
        MR_Word libs__handle_options__TermNormSpec_56;
        MR_Word libs__handle_options__V_251_251;
        MR_Word libs__handle_options__V_254_254;
        MR_Word libs__handle_options__V_255_255;
        MR_Word libs__handle_options__V_266_266;
        MR_Word libs__handle_options__V_267_267;

        *libs__handle_options__TermNorm_27 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_819_819 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_255_255 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_255_255, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_255_255, 1) = ((MR_Box) (libs__handle_options__TermNormStr_54));
        }
        {
          libs__handle_options__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_254_254, 0) = ((MR_Box) (libs__handle_options__V_255_255));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_254_254, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[44])));
        }
        {
          libs__handle_options__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_251_251, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_251_251, 1) = ((MR_Box) (libs__handle_options__V_254_254));
        }
        {
          libs__handle_options__V_267_267 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47]));
        }
        {
          libs__handle_options__V_266_266 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_819_819, libs__handle_options__V_267_267, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__TermNormSpec_56 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_819_819, libs__handle_options__V_251_251, libs__handle_options__V_266_266);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TermNormSpec_56, libs__handle_options__STATE_VARIABLE_Specs_249_249, &libs__handle_options__STATE_VARIABLE_Specs_282_282);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 420, &libs__handle_options__Term2NormStr_57);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_termination_norm_2_p_0(libs__handle_options__Term2NormStr_57, &libs__handle_options__Term2NormPrime_58);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__Term2Norm_28 = libs__handle_options__Term2NormPrime_58;
        libs__handle_options__STATE_VARIABLE_Specs_315_315 = libs__handle_options__STATE_VARIABLE_Specs_282_282;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_820_820;
        MR_Word libs__handle_options__Term2NormSpec_59;
        MR_Word libs__handle_options__V_284_284;
        MR_Word libs__handle_options__V_287_287;
        MR_Word libs__handle_options__V_288_288;
        MR_Word libs__handle_options__V_299_299;
        MR_Word libs__handle_options__V_300_300;

        *libs__handle_options__Term2Norm_28 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_820_820 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_288_288 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_288_288, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_288_288, 1) = ((MR_Box) (libs__handle_options__TermNormStr_54));
        }
        {
          libs__handle_options__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_287_287, 0) = ((MR_Box) (libs__handle_options__V_288_288));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_287_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[50])));
        }
        {
          libs__handle_options__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_284_284, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_284_284, 1) = ((MR_Box) (libs__handle_options__V_287_287));
        }
        {
          libs__handle_options__V_300_300 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47]));
        }
        {
          libs__handle_options__V_299_299 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_820_820, libs__handle_options__V_300_300, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__Term2NormSpec_59 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_820_820, libs__handle_options__V_284_284, libs__handle_options__V_299_299);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__Term2NormSpec_59, libs__handle_options__STATE_VARIABLE_Specs_282_282, &libs__handle_options__STATE_VARIABLE_Specs_315_315);
        }
      }
    {
      libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 133, &libs__handle_options__ForceDisableTracing_60);
    }
    switch (libs__handle_options__ForceDisableTracing_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String libs__handle_options__Trace_61;
          MR_Word libs__handle_options__ExecTrace_62;
          MR_Word libs__handle_options__DeclDebug_63;
          MR_Word libs__handle_options__MaybeTraceLevel_64;

          {
            libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 121, &libs__handle_options__Trace_61);
          }
          {
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 186, &libs__handle_options__ExecTrace_62);
          }
          {
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 187, &libs__handle_options__DeclDebug_63);
          }
          {
            libs__handle_options__succeeded = libs__trace_params__convert_trace_level_4_p_0(libs__handle_options__Trace_61, libs__handle_options__ExecTrace_62, libs__handle_options__DeclDebug_63, &libs__handle_options__MaybeTraceLevel_64);
          }
          if (libs__handle_options__succeeded)
            if ((libs__handle_options__MaybeTraceLevel_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word libs__handle_options__InconsistentTraceLevelSpec_65;
                MR_Word libs__handle_options__V_322_322;
                MR_Word libs__handle_options__V_323_323;

                {
                  *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
                }
                {
                  libs__handle_options__V_323_323 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), libs__handle_options__V_323_323, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), libs__handle_options__V_323_323, 1) = ((MR_Box) (libs__handle_options__Trace_61));
                }
                {
                  libs__handle_options__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_322_322, 0) = ((MR_Box) (libs__handle_options__V_323_323));
                  MR_hl_field(MR_mktag(1), libs__handle_options__V_322_322, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[56])));
                }
                {
                  libs__handle_options__InconsistentTraceLevelSpec_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), libs__handle_options__InconsistentTraceLevelSpec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[219])));
                  MR_hl_field(MR_mktag(1), libs__handle_options__InconsistentTraceLevelSpec_65, 1) = ((MR_Box) (libs__handle_options__V_322_322));
                }
                {
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__InconsistentTraceLevelSpec_65, libs__handle_options__STATE_VARIABLE_Specs_315_315, &libs__handle_options__STATE_VARIABLE_Specs_337_337);
                }
              }
            else
              {
                *libs__handle_options__TraceLevel_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeTraceLevel_64, (MR_Integer) 0)));
                libs__handle_options__STATE_VARIABLE_Specs_337_337 = libs__handle_options__STATE_VARIABLE_Specs_315_315;
              }
          else
            {
              MR_Word libs__handle_options__TypeCtorInfo_821_821;
              MR_Word libs__handle_options__BadTraceLevelSpec_66;
              MR_Word libs__handle_options__V_338_338;
              MR_Word libs__handle_options__V_341_341;
              MR_Word libs__handle_options__V_342_342;
              MR_Word libs__handle_options__V_353_353;
              MR_Word libs__handle_options__V_354_354;

              {
                *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              }
              libs__handle_options__TypeCtorInfo_821_821 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                libs__handle_options__V_342_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__handle_options__V_342_342, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), libs__handle_options__V_342_342, 1) = ((MR_Box) (libs__handle_options__Trace_61));
              }
              {
                libs__handle_options__V_341_341 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_341_341, 0) = ((MR_Box) (libs__handle_options__V_342_342));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_341_341, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])));
              }
              {
                libs__handle_options__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_338_338, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_338_338, 1) = ((MR_Box) (libs__handle_options__V_341_341));
              }
              {
                libs__handle_options__V_354_354 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[65]));
              }
              {
                libs__handle_options__V_353_353 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_821_821, libs__handle_options__V_354_354, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
              }
              {
                libs__handle_options__BadTraceLevelSpec_66 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_821_821, libs__handle_options__V_338_338, libs__handle_options__V_353_353);
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__BadTraceLevelSpec_66, libs__handle_options__STATE_VARIABLE_Specs_315_315, &libs__handle_options__STATE_VARIABLE_Specs_337_337);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            *libs__handle_options__TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          }
          libs__handle_options__STATE_VARIABLE_Specs_337_337 = libs__handle_options__STATE_VARIABLE_Specs_315_315;
        }
        break;
    }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 132, &libs__handle_options__SuppressStr_67);
    }
    {
      libs__handle_options__succeeded = libs__trace_params__convert_trace_suppress_2_p_0(libs__handle_options__SuppressStr_67, &libs__handle_options__TraceSuppressPrime_68);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__TraceSuppress_30 = libs__handle_options__TraceSuppressPrime_68;
        libs__handle_options__STATE_VARIABLE_Specs_394_394 = libs__handle_options__STATE_VARIABLE_Specs_337_337;
      }
    else
      {
        MR_Word libs__handle_options__TraceSuppressSpec_69;
        MR_Word libs__handle_options__V_379_379;
        MR_Word libs__handle_options__V_380_380;

        {
          *libs__handle_options__TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
        }
        {
          libs__handle_options__V_380_380 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_380_380, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_380_380, 1) = ((MR_Box) (libs__handle_options__SuppressStr_67));
        }
        {
          libs__handle_options__V_379_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_379_379, 0) = ((MR_Box) (libs__handle_options__V_380_380));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_379_379, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[68])));
        }
        {
          libs__handle_options__TraceSuppressSpec_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__TraceSuppressSpec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__TraceSuppressSpec_69, 1) = ((MR_Box) (libs__handle_options__V_379_379));
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TraceSuppressSpec_69, libs__handle_options__STATE_VARIABLE_Specs_337_337, &libs__handle_options__STATE_VARIABLE_Specs_394_394);
        }
      }
    {
      libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 137, &libs__handle_options__ForceDisableSSDB_70);
    }
    switch (libs__handle_options__ForceDisableSSDB_70) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String libs__handle_options__SSTrace_71;
          MR_Word libs__handle_options__SSDB_72;
          MR_Word libs__handle_options__SSTL_73;

          {
            libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 234, &libs__handle_options__SSTrace_71);
          }
          {
            libs__handle_options__raw_lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 233, &libs__handle_options__SSDB_72);
          }
          {
            libs__handle_options__succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(libs__handle_options__SSTrace_71, libs__handle_options__SSDB_72, &libs__handle_options__SSTL_73);
          }
          if (libs__handle_options__succeeded)
            {
              *libs__handle_options__SSTraceLevel_31 = libs__handle_options__SSTL_73;
              libs__handle_options__STATE_VARIABLE_Specs_431_431 = libs__handle_options__STATE_VARIABLE_Specs_394_394;
            }
          else
            {
              MR_Word libs__handle_options__TypeCtorInfo_822_822;
              MR_Word libs__handle_options__SSDBSpec_74;
              MR_Word libs__handle_options__V_398_398;
              MR_Word libs__handle_options__V_401_401;
              MR_Word libs__handle_options__V_402_402;
              MR_Word libs__handle_options__V_413_413;
              MR_Word libs__handle_options__V_414_414;

              *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
              libs__handle_options__TypeCtorInfo_822_822 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
              {
                libs__handle_options__V_402_402 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), libs__handle_options__V_402_402, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), libs__handle_options__V_402_402, 1) = ((MR_Box) (libs__handle_options__SSTrace_71));
              }
              {
                libs__handle_options__V_401_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_401_401, 0) = ((MR_Box) (libs__handle_options__V_402_402));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_401_401, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[71])));
              }
              {
                libs__handle_options__V_398_398 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_398_398, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
                MR_hl_field(MR_mktag(1), libs__handle_options__V_398_398, 1) = ((MR_Box) (libs__handle_options__V_401_401));
              }
              {
                libs__handle_options__V_414_414 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[75]));
              }
              {
                libs__handle_options__V_413_413 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_822_822, libs__handle_options__V_414_414, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
              }
              {
                libs__handle_options__SSDBSpec_74 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_822_822, libs__handle_options__V_398_398, libs__handle_options__V_413_413);
              }
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__SSDBSpec_74, libs__handle_options__STATE_VARIABLE_Specs_394_394, &libs__handle_options__STATE_VARIABLE_Specs_431_431);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          *libs__handle_options__SSTraceLevel_31 = (MR_Integer) 0;
          libs__handle_options__STATE_VARIABLE_Specs_431_431 = libs__handle_options__STATE_VARIABLE_Specs_394_394;
        }
        break;
    }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 226, &libs__handle_options__MaybeThreadSafeStr_75);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(libs__handle_options__MaybeThreadSafeStr_75, &libs__handle_options__MaybeThreadSafePrime_76);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__MaybeThreadSafe_32 = libs__handle_options__MaybeThreadSafePrime_76;
        libs__handle_options__STATE_VARIABLE_Specs_465_465 = libs__handle_options__STATE_VARIABLE_Specs_431_431;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_823_823;
        MR_Word libs__handle_options__MTSSpec_77;
        MR_Word libs__handle_options__V_433_433;
        MR_Word libs__handle_options__V_436_436;
        MR_Word libs__handle_options__V_437_437;
        MR_Word libs__handle_options__V_451_451;
        MR_Word libs__handle_options__V_452_452;

        *libs__handle_options__MaybeThreadSafe_32 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_823_823 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_437_437 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_437_437, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_437_437, 1) = ((MR_Box) (libs__handle_options__MaybeThreadSafeStr_75));
        }
        {
          libs__handle_options__V_436_436 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_436_436, 0) = ((MR_Box) (libs__handle_options__V_437_437));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_436_436, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])));
        }
        {
          libs__handle_options__V_433_433 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_433_433, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_433_433, 1) = ((MR_Box) (libs__handle_options__V_436_436));
        }
        {
          libs__handle_options__V_452_452 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84]));
        }
        {
          libs__handle_options__V_451_451 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_823_823, libs__handle_options__V_452_452, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__MTSSpec_77 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_823_823, libs__handle_options__V_433_433, libs__handle_options__V_451_451);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__MTSSpec_77, libs__handle_options__STATE_VARIABLE_Specs_431_431, &libs__handle_options__STATE_VARIABLE_Specs_465_465);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_OptionTable_0_116, (MR_Integer) 153, &libs__handle_options__DumpAlias_78);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__DumpAlias_78, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__STATE_VARIABLE_Specs_496_496 = libs__handle_options__STATE_VARIABLE_Specs_465_465;
        libs__handle_options__STATE_VARIABLE_OptionTable_469_469 = libs__handle_options__STATE_VARIABLE_OptionTable_0_116;
      }
    else
      {
        MR_String libs__handle_options__AliasDumpOptions_79;

        {
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__DumpAlias_78, &libs__handle_options__AliasDumpOptions_79);
        }
        if (libs__handle_options__succeeded)
          {
            MR_Word libs__handle_options__V_468_468;

            {
              libs__handle_options__V_468_468 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_468_468, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_468_468, 1) = ((MR_Box) (libs__handle_options__AliasDumpOptions_79));
            }
            {
              mercury__map__set_4_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 154)), ((MR_Box) (libs__handle_options__V_468_468)), libs__handle_options__STATE_VARIABLE_OptionTable_0_116, &libs__handle_options__STATE_VARIABLE_OptionTable_469_469);
            }
            libs__handle_options__STATE_VARIABLE_Specs_496_496 = libs__handle_options__STATE_VARIABLE_Specs_465_465;
          }
        else
          {
            MR_Word libs__handle_options__DumpAliasSpec_80;
            MR_Word libs__handle_options__V_472_472;
            MR_Word libs__handle_options__V_473_473;

            {
              libs__handle_options__V_473_473 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_473_473, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_473_473, 1) = ((MR_Box) (libs__handle_options__DumpAlias_78));
            }
            {
              libs__handle_options__V_472_472 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_472_472, 0) = ((MR_Box) (libs__handle_options__V_473_473));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_472_472, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])));
            }
            {
              libs__handle_options__DumpAliasSpec_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__handle_options__DumpAliasSpec_80, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
              MR_hl_field(MR_mktag(1), libs__handle_options__DumpAliasSpec_80, 1) = ((MR_Box) (libs__handle_options__V_472_472));
            }
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__DumpAliasSpec_80, libs__handle_options__STATE_VARIABLE_Specs_465_465, &libs__handle_options__STATE_VARIABLE_Specs_496_496);
            }
            libs__handle_options__STATE_VARIABLE_OptionTable_469_469 = libs__handle_options__STATE_VARIABLE_OptionTable_0_116;
          }
      }
    libs__handle_options__TypeCtorInfo_826_826 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
    {
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_826_826, libs__handle_options__STATE_VARIABLE_OptionTable_469_469, ((MR_Box) ((MR_Integer) 154)), &libs__handle_options__STATE_VARIABLE_DumpOptions_498_498);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__STATE_VARIABLE_DumpOptions_498_498, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_DumpOptions_499_499 = (MR_String) "x";
    else
      libs__handle_options__STATE_VARIABLE_DumpOptions_499_499 = libs__handle_options__STATE_VARIABLE_DumpOptions_498_498;
    {
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_499_499, (MR_Char) 121);
    }
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_501_501 = (MR_Char) 97;
        {
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_499_499, libs__handle_options__V_501_501);
        }
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__handle_options__STATE_VARIABLE_DumpOptions_502_502 = mercury__string__f_43_43_2_f_0((MR_String) "a", libs__handle_options__STATE_VARIABLE_DumpOptions_499_499);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_DumpOptions_502_502 = libs__handle_options__STATE_VARIABLE_DumpOptions_499_499;
    {
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_502_502, (MR_Char) 97);
    }
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_505_505 = (MR_Char) 117;
        {
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_502_502, libs__handle_options__V_505_505);
        }
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__handle_options__STATE_VARIABLE_DumpOptions_506_506 = mercury__string__f_43_43_2_f_0((MR_String) "u", libs__handle_options__STATE_VARIABLE_DumpOptions_502_502);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_DumpOptions_506_506 = libs__handle_options__STATE_VARIABLE_DumpOptions_502_502;
    {
      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 65);
    }
    if (!(libs__handle_options__succeeded))
      {
        {
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 66);
        }
        if (!(libs__handle_options__succeeded))
          {
            {
              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 68);
            }
            if (!(libs__handle_options__succeeded))
              {
                {
                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 71);
                }
                if (!(libs__handle_options__succeeded))
                  {
                    {
                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 80);
                    }
                    if (!(libs__handle_options__succeeded))
                      {
                        {
                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 82);
                        }
                        if (!(libs__handle_options__succeeded))
                          {
                            {
                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 83);
                            }
                            if (!(libs__handle_options__succeeded))
                              {
                                {
                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 98);
                                }
                                if (!(libs__handle_options__succeeded))
                                  {
                                    {
                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 99);
                                    }
                                    if (!(libs__handle_options__succeeded))
                                      {
                                        {
                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 100);
                                        }
                                        if (!(libs__handle_options__succeeded))
                                          {
                                            {
                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 102);
                                            }
                                            if (!(libs__handle_options__succeeded))
                                              {
                                                {
                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 103);
                                                }
                                                if (!(libs__handle_options__succeeded))
                                                  {
                                                    {
                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 105);
                                                    }
                                                    if (!(libs__handle_options__succeeded))
                                                      {
                                                        {
                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 108);
                                                        }
                                                        if (!(libs__handle_options__succeeded))
                                                          {
                                                            {
                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 109);
                                                            }
                                                            if (!(libs__handle_options__succeeded))
                                                              {
                                                                {
                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 110);
                                                                }
                                                                if (!(libs__handle_options__succeeded))
                                                                  {
                                                                    {
                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 112);
                                                                    }
                                                                    if (!(libs__handle_options__succeeded))
                                                                      {
                                                                        {
                                                                          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 115);
                                                                        }
                                                                        if (!(libs__handle_options__succeeded))
                                                                          {
                                                                            {
                                                                              libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 116);
                                                                            }
                                                                            if (!(libs__handle_options__succeeded))
                                                                              {
                                                                                {
                                                                                  libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 117);
                                                                                }
                                                                                if (!(libs__handle_options__succeeded))
                                                                                  {
                                                                                    {
                                                                                      libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, (MR_Char) 122);
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
      }
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_529_529 = (MR_Char) 120;
        {
          libs__handle_options__succeeded = mercury__string__contains_char_2_p_0(libs__handle_options__STATE_VARIABLE_DumpOptions_506_506, libs__handle_options__V_529_529);
        }
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__handle_options__STATE_VARIABLE_DumpOptions_530_530 = mercury__string__f_43_43_2_f_0((MR_String) "x", libs__handle_options__STATE_VARIABLE_DumpOptions_506_506);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_DumpOptions_530_530 = libs__handle_options__STATE_VARIABLE_DumpOptions_506_506;
    {
      libs__handle_options__V_533_533 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_533_533, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_533_533, 1) = ((MR_Box) (libs__handle_options__STATE_VARIABLE_DumpOptions_530_530));
    }
    {
      mercury__map__set_4_p_0(libs__handle_options__TypeCtorInfo_826_826, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 154)), ((MR_Box) (libs__handle_options__V_533_533)), libs__handle_options__STATE_VARIABLE_OptionTable_469_469, libs__handle_options__STATE_VARIABLE_OptionTable_117);
    }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 507, &libs__handle_options__C_CompilerTypeStr_82);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_c_compiler_type_2_p_0(libs__handle_options__C_CompilerTypeStr_82, &libs__handle_options__C_CompilerTypePrime_83);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__C_CompilerType_33 = libs__handle_options__C_CompilerTypePrime_83;
        libs__handle_options__STATE_VARIABLE_Specs_572_572 = libs__handle_options__STATE_VARIABLE_Specs_496_496;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_828_828;
        MR_Word libs__handle_options__CCTpec_84;
        MR_Word libs__handle_options__V_536_536;
        MR_Word libs__handle_options__V_539_539;
        MR_Word libs__handle_options__V_540_540;
        MR_Word libs__handle_options__V_554_554;
        MR_Word libs__handle_options__V_555_555;

        *libs__handle_options__C_CompilerType_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__handle_options__TypeCtorInfo_828_828 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_540_540 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_540_540, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_540_540, 1) = ((MR_Box) (libs__handle_options__C_CompilerTypeStr_82));
        }
        {
          libs__handle_options__V_539_539 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_539_539, 0) = ((MR_Box) (libs__handle_options__V_540_540));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_539_539, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[96])));
        }
        {
          libs__handle_options__V_536_536 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_536_536, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_536_536, 1) = ((MR_Box) (libs__handle_options__V_539_539));
        }
        {
          libs__handle_options__V_555_555 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[100]));
        }
        {
          libs__handle_options__V_554_554 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_828_828, libs__handle_options__V_555_555, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__CCTpec_84 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_828_828, libs__handle_options__V_536_536, libs__handle_options__V_554_554);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__CCTpec_84, libs__handle_options__STATE_VARIABLE_Specs_496_496, &libs__handle_options__STATE_VARIABLE_Specs_572_572);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 508, &libs__handle_options__CSharp_CompilerTypeStr_85);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(libs__handle_options__CSharp_CompilerTypeStr_85, &libs__handle_options__CSharp_CompilerTypePrime_86);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__CSharp_CompilerType_34 = libs__handle_options__CSharp_CompilerTypePrime_86;
        libs__handle_options__STATE_VARIABLE_Specs_608_608 = libs__handle_options__STATE_VARIABLE_Specs_572_572;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_829_829;
        MR_Word libs__handle_options__CSCSpec_87;
        MR_Word libs__handle_options__V_574_574;
        MR_Word libs__handle_options__V_577_577;
        MR_Word libs__handle_options__V_578_578;
        MR_Word libs__handle_options__V_592_592;
        MR_Word libs__handle_options__V_593_593;

        *libs__handle_options__CSharp_CompilerType_34 = (MR_Integer) 2;
        libs__handle_options__TypeCtorInfo_829_829 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_578_578 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_578_578, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_578_578, 1) = ((MR_Box) (libs__handle_options__CSharp_CompilerTypeStr_85));
        }
        {
          libs__handle_options__V_577_577 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_577_577, 0) = ((MR_Box) (libs__handle_options__V_578_578));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_577_577, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[103])));
        }
        {
          libs__handle_options__V_574_574 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_574_574, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_574_574, 1) = ((MR_Box) (libs__handle_options__V_577_577));
        }
        {
          libs__handle_options__V_593_593 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[105]));
        }
        {
          libs__handle_options__V_592_592 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_829_829, libs__handle_options__V_593_593, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__CSCSpec_87 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_829_829, libs__handle_options__V_574_574, libs__handle_options__V_592_592);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__CSCSpec_87, libs__handle_options__STATE_VARIABLE_Specs_572_572, &libs__handle_options__STATE_VARIABLE_Specs_608_608);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 405, &libs__handle_options__ReuseConstraintStr_88);
    }
    {
      libs__handle_options__raw_lookup_int_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 406, &libs__handle_options__ReuseConstraintArgNum_89);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_reuse_strategy_3_p_0(libs__handle_options__ReuseConstraintStr_88, libs__handle_options__ReuseConstraintArgNum_89, &libs__handle_options__ReuseStrategyPrime_90);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__ReuseStrategy_35 = libs__handle_options__ReuseStrategyPrime_90;
        libs__handle_options__STATE_VARIABLE_Specs_640_640 = libs__handle_options__STATE_VARIABLE_Specs_608_608;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_830_830;
        MR_Word libs__handle_options__ReuseConstrSpec_91;
        MR_Word libs__handle_options__V_611_611;
        MR_Word libs__handle_options__V_614_614;
        MR_Word libs__handle_options__V_615_615;
        MR_Word libs__handle_options__V_626_626;
        MR_Word libs__handle_options__V_627_627;

        *libs__handle_options__ReuseStrategy_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__handle_options__TypeCtorInfo_830_830 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_615_615 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_615_615, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_615_615, 1) = ((MR_Box) (libs__handle_options__ReuseConstraintStr_88));
        }
        {
          libs__handle_options__V_614_614 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_614_614, 0) = ((MR_Box) (libs__handle_options__V_615_615));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_614_614, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])));
        }
        {
          libs__handle_options__V_611_611 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_611_611, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_611_611, 1) = ((MR_Box) (libs__handle_options__V_614_614));
        }
        {
          libs__handle_options__V_627_627 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110]));
        }
        {
          libs__handle_options__V_626_626 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_830_830, libs__handle_options__V_627_627, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__ReuseConstrSpec_91 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_830_830, libs__handle_options__V_611_611, libs__handle_options__V_626_626);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__ReuseConstrSpec_91, libs__handle_options__STATE_VARIABLE_Specs_608_608, &libs__handle_options__STATE_VARIABLE_Specs_640_640);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 663, &libs__handle_options__FeedbackFile_92);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_92, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        libs__handle_options__STATE_VARIABLE_Specs_645_645 = libs__handle_options__STATE_VARIABLE_Specs_640_640;
      }
    else
      {
        MR_Word libs__handle_options__FeedbackReadResult_94;

        {
          mdbcomp__feedback__read_feedback_file_5_p_0(libs__handle_options__FeedbackFile_92, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__FeedbackReadResult_94);
        }
        if (((MR_tag((MR_Word) libs__handle_options__FeedbackReadResult_94)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word libs__handle_options__Error_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__FeedbackReadResult_94, (MR_Integer) 0)));
            MR_String libs__handle_options__ErrorMessage_97;
            MR_Word libs__handle_options__V_644_644;
            MR_Word libs__handle_options__V_646_646;

            {
              mdbcomp__feedback__feedback_read_error_message_string_3_p_0(libs__handle_options__FeedbackFile_92, libs__handle_options__Error_96, &libs__handle_options__ErrorMessage_97);
            }
            {
              libs__handle_options__V_646_646 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_646_646, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_646_646, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_97));
            }
            {
              libs__handle_options__V_644_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_644_644, 0) = ((MR_Box) (libs__handle_options__V_646_646));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_644_644, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__V_644_644, libs__handle_options__STATE_VARIABLE_Specs_640_640, &libs__handle_options__STATE_VARIABLE_Specs_645_645);
            }
            *libs__handle_options__MaybeFeedbackInfo_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Word libs__handle_options__FeedbackInfo_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__FeedbackReadResult_94, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *libs__handle_options__MaybeFeedbackInfo_36 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__FeedbackInfo_95));
            }
            libs__handle_options__STATE_VARIABLE_Specs_645_645 = libs__handle_options__STATE_VARIABLE_Specs_640_640;
          }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 645, &libs__handle_options__HostEnvTypeStr_98);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__HostEnvTypeStr_98, &libs__handle_options__HostEnvTypePrime_99);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__HostEnvType_37 = libs__handle_options__HostEnvTypePrime_99;
        libs__handle_options__STATE_VARIABLE_Specs_682_682 = libs__handle_options__STATE_VARIABLE_Specs_645_645;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_831_831;
        MR_Word libs__handle_options__HostEnvSpec_100;
        MR_Word libs__handle_options__V_649_649;
        MR_Word libs__handle_options__V_652_652;
        MR_Word libs__handle_options__V_653_653;
        MR_Word libs__handle_options__V_664_664;
        MR_Word libs__handle_options__V_665_665;

        *libs__handle_options__HostEnvType_37 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_831_831 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_653_653 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_653_653, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_653_653, 1) = ((MR_Box) (libs__handle_options__HostEnvTypeStr_98));
        }
        {
          libs__handle_options__V_652_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_652_652, 0) = ((MR_Box) (libs__handle_options__V_653_653));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_652_652, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])));
        }
        {
          libs__handle_options__V_649_649 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_649_649, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_649_649, 1) = ((MR_Box) (libs__handle_options__V_652_652));
        }
        {
          libs__handle_options__V_665_665 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117]));
        }
        {
          libs__handle_options__V_664_664 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_831_831, libs__handle_options__V_665_665, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__HostEnvSpec_100 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_831_831, libs__handle_options__V_649_649, libs__handle_options__V_664_664);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__HostEnvSpec_100, libs__handle_options__STATE_VARIABLE_Specs_645_645, &libs__handle_options__STATE_VARIABLE_Specs_682_682);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 646, &libs__handle_options__SystemEnvTypeStr_101);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__SystemEnvTypeStr_101, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__SystemEnvTypePrime_102 = *libs__handle_options__HostEnvType_37;
        libs__handle_options__succeeded = MR_TRUE;
      }
    else
      {
        libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__SystemEnvTypeStr_101, &libs__handle_options__SystemEnvTypePrime_102);
      }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__SystemEnvType_38 = libs__handle_options__SystemEnvTypePrime_102;
        libs__handle_options__STATE_VARIABLE_Specs_720_720 = libs__handle_options__STATE_VARIABLE_Specs_682_682;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_832_832;
        MR_Word libs__handle_options__SystemEnvSpec_103;
        MR_Word libs__handle_options__V_684_684;
        MR_Word libs__handle_options__V_687_687;
        MR_Word libs__handle_options__V_688_688;
        MR_Word libs__handle_options__V_702_702;
        MR_Word libs__handle_options__V_703_703;

        *libs__handle_options__SystemEnvType_38 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_832_832 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_688_688 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_688_688, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_688_688, 1) = ((MR_Box) (libs__handle_options__SystemEnvTypeStr_101));
        }
        {
          libs__handle_options__V_687_687 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_687_687, 0) = ((MR_Box) (libs__handle_options__V_688_688));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_687_687, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[120])));
        }
        {
          libs__handle_options__V_684_684 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_684_684, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_684_684, 1) = ((MR_Box) (libs__handle_options__V_687_687));
        }
        {
          libs__handle_options__V_703_703 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117]));
        }
        {
          libs__handle_options__V_702_702 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_832_832, libs__handle_options__V_703_703, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__SystemEnvSpec_103 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_832_832, libs__handle_options__V_684_684, libs__handle_options__V_702_702);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__SystemEnvSpec_103, libs__handle_options__STATE_VARIABLE_Specs_682_682, &libs__handle_options__STATE_VARIABLE_Specs_720_720);
        }
      }
    {
      libs__handle_options__raw_lookup_string_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 647, &libs__handle_options__TargetEnvTypeStr_104);
    }
    {
      libs__handle_options__succeeded = libs__globals__convert_env_type_2_p_0(libs__handle_options__TargetEnvTypeStr_104, &libs__handle_options__TargetEnvTypePrime_105);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__TargetEnvType_39 = libs__handle_options__TargetEnvTypePrime_105;
        libs__handle_options__STATE_VARIABLE_Specs_758_758 = libs__handle_options__STATE_VARIABLE_Specs_720_720;
      }
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_833_833;
        MR_Word libs__handle_options__TargetEnvTypeSpec_106;
        MR_Word libs__handle_options__V_722_722;
        MR_Word libs__handle_options__V_725_725;
        MR_Word libs__handle_options__V_726_726;
        MR_Word libs__handle_options__V_740_740;
        MR_Word libs__handle_options__V_741_741;

        *libs__handle_options__TargetEnvType_39 = (MR_Integer) 0;
        libs__handle_options__TypeCtorInfo_833_833 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        {
          libs__handle_options__V_726_726 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_726_726, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_726_726, 1) = ((MR_Box) (libs__handle_options__TargetEnvTypeStr_104));
        }
        {
          libs__handle_options__V_725_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_725_725, 0) = ((MR_Box) (libs__handle_options__V_726_726));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_725_725, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[123])));
        }
        {
          libs__handle_options__V_722_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_722_722, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_722_722, 1) = ((MR_Box) (libs__handle_options__V_725_725));
        }
        {
          libs__handle_options__V_741_741 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[117]));
        }
        {
          libs__handle_options__V_740_740 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_833_833, libs__handle_options__V_741_741, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
        }
        {
          libs__handle_options__TargetEnvTypeSpec_106 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_833_833, libs__handle_options__V_722_722, libs__handle_options__V_740_740);
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__TargetEnvTypeSpec_106, libs__handle_options__STATE_VARIABLE_Specs_720_720, &libs__handle_options__STATE_VARIABLE_Specs_758_758);
        }
      }
    libs__handle_options__succeeded = (*libs__handle_options__HostEnvType_37 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (*libs__handle_options__CSharp_CompilerType_34 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[129]), libs__handle_options__STATE_VARIABLE_Specs_758_758, &libs__handle_options__STATE_VARIABLE_Specs_774_774);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_774_774 = libs__handle_options__STATE_VARIABLE_Specs_758_758;
    {
      libs__handle_options__raw_lookup_accumulating_option_3_p_0(*libs__handle_options__STATE_VARIABLE_OptionTable_117, (MR_Integer) 60, &libs__handle_options__LimitErrorContextsOptionStrs_108);
    }
    {
      libs__globals__convert_limit_error_contexts_3_p_0(libs__handle_options__LimitErrorContextsOptionStrs_108, &libs__handle_options__BadLimitErrorContextsOptions_109, libs__handle_options__LimitErrorContextsMap_40);
    }
    if ((libs__handle_options__BadLimitErrorContextsOptions_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *libs__handle_options__STATE_VARIABLE_Specs_118 = libs__handle_options__STATE_VARIABLE_Specs_774_774;
    else
      {
        MR_Word libs__handle_options__V_835_835 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_109, (MR_Integer) 1)));
        MR_String libs__handle_options__V_836_836 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__BadLimitErrorContextsOptions_109, (MR_Integer) 0)));

        if ((libs__handle_options__V_835_835 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word libs__handle_options__LECSpec_111;
            MR_Word libs__handle_options__V_799_799;
            MR_Word libs__handle_options__V_800_800;

            {
              libs__handle_options__V_800_800 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_800_800, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_800_800, 1) = ((MR_Box) (libs__handle_options__V_836_836));
            }
            {
              libs__handle_options__V_799_799 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_799_799, 0) = ((MR_Box) (libs__handle_options__V_800_800));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_799_799, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[132])));
            }
            {
              libs__handle_options__LECSpec_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__handle_options__LECSpec_111, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
              MR_hl_field(MR_mktag(1), libs__handle_options__LECSpec_111, 1) = ((MR_Box) (libs__handle_options__V_799_799));
            }
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__LECSpec_111, libs__handle_options__STATE_VARIABLE_Specs_774_774, libs__handle_options__STATE_VARIABLE_Specs_118);
            }
          }
        else
          {
            MR_Word libs__handle_options__TypeCtorInfo_834_834;
            MR_Word libs__handle_options__BadPieces_115;
            MR_Word libs__handle_options__V_781_781;
            MR_Word libs__handle_options__LECSpec_815;

            {
              libs__handle_options__BadPieces_115 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(libs__handle_options__BadLimitErrorContextsOptions_109);
            }
            libs__handle_options__TypeCtorInfo_834_834 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              libs__handle_options__V_781_781 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_834_834, libs__handle_options__BadPieces_115, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[132]));
            }
            {
              libs__handle_options__LECSpec_815 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_834_834, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[221]), libs__handle_options__V_781_781);
            }
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__LECSpec_815, libs__handle_options__STATE_VARIABLE_Specs_774_774, libs__handle_options__STATE_VARIABLE_Specs_118);
            }
          }
      }
  }
}

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1)
{
  {
    MR_Box libs__handle_options__wrapper_arg_2;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_String libs__handle_options__conv0_HeadVar__2_2;

    {
      libs__handle_options__conv0_HeadVar__2_2 = libs__op_mode__op_mode_to_option_string_1_f_0(((MR_Word) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
    return libs__handle_options__wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_5_p_0(
  MR_Word libs__handle_options__MaybeOptionTable0_6,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_41,
  MR_Word * libs__handle_options__Globals_8)
{
  {
    MR_bool libs__handle_options__succeeded;

    if (((MR_tag((MR_Word) libs__handle_options__MaybeOptionTable0_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String libs__handle_options__ErrorMessage_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeOptionTable0_6, (MR_Integer) 0)));
        MR_Word libs__handle_options__OptionTablePieces_11;
        MR_Word libs__handle_options__OptionTableMsg_12;
        MR_Word libs__handle_options__OptionTableSpec_13;
        MR_Word libs__handle_options__V_68_68;
        MR_Word libs__handle_options__V_73_73;
        MR_Word libs__handle_options__V_74_74;
        MR_Word libs__handle_options__V_78_78;
        MR_Word libs__handle_options__V_92_92;
        MR_Word libs__handle_options__V_93_93;
        MR_Word libs__handle_options__V_94_94;

        {
          libs__handle_options__V_68_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_68_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_68_68, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_10));
        }
        {
          libs__handle_options__OptionTablePieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTablePieces_11, 0) = ((MR_Box) (libs__handle_options__V_68_68));
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTablePieces_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__handle_options__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_74_74, 0) = ((MR_Box) (libs__handle_options__OptionTablePieces_11));
        }
        {
          libs__handle_options__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_73_73, 0) = ((MR_Box) (libs__handle_options__V_74_74));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__handle_options__OptionTableMsg_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), libs__handle_options__OptionTableMsg_12, 3) = ((MR_Box) (libs__handle_options__V_73_73));
        }
        {
          libs__handle_options__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_78_78, 0) = ((MR_Box) (libs__handle_options__OptionTableMsg_12));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__handle_options__OptionTableSpec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__OptionTableSpec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), libs__handle_options__OptionTableSpec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), libs__handle_options__OptionTableSpec_13, 2) = ((MR_Box) (libs__handle_options__V_78_78));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *libs__handle_options__STATE_VARIABLE_Specs_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__handle_options__OptionTableSpec_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_92_92, &libs__handle_options__V_93_93, &libs__handle_options__V_94_94, libs__handle_options__Globals_8);
        }
      }
    else
      {
        MR_Word libs__handle_options__OptionTable0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__MaybeOptionTable0_6, (MR_Integer) 0)));
        MR_Word libs__handle_options__OptionTable_15;
        MR_Word libs__handle_options__Target_16;
        MR_Word libs__handle_options__GC_Method_17;
        MR_Word libs__handle_options__TagsMethod_18;
        MR_Word libs__handle_options__TermNorm_19;
        MR_Word libs__handle_options__Term2Norm_20;
        MR_Word libs__handle_options__TraceLevel_21;
        MR_Word libs__handle_options__TraceSuppress_22;
        MR_Word libs__handle_options__SSTraceLevel_23;
        MR_Word libs__handle_options__MaybeThreadSafe_24;
        MR_Word libs__handle_options__C_CompilerType_25;
        MR_Word libs__handle_options__CSharp_CompilerType_26;
        MR_Word libs__handle_options__ReuseStrategy_27;
        MR_Word libs__handle_options__MaybeFeedbackInfo_28;
        MR_Word libs__handle_options__HostEnvType_29;
        MR_Word libs__handle_options__SystemEnvType_30;
        MR_Word libs__handle_options__TargetEnvType_31;
        MR_Word libs__handle_options__LimitErrorContextsMap_32;
        MR_Word libs__handle_options__OpMode_33;
        MR_Word libs__handle_options__OtherOpModes_34;
        MR_Word libs__handle_options__STATE_VARIABLE_Specs_44_44;
        MR_Word libs__handle_options__STATE_VARIABLE_Specs_64_64;

        {
          libs__handle_options__check_option_values_22_p_0(libs__handle_options__OptionTable0_14, &libs__handle_options__OptionTable_15, &libs__handle_options__Target_16, &libs__handle_options__GC_Method_17, &libs__handle_options__TagsMethod_18, &libs__handle_options__TermNorm_19, &libs__handle_options__Term2Norm_20, &libs__handle_options__TraceLevel_21, &libs__handle_options__TraceSuppress_22, &libs__handle_options__SSTraceLevel_23, &libs__handle_options__MaybeThreadSafe_24, &libs__handle_options__C_CompilerType_25, &libs__handle_options__CSharp_CompilerType_26, &libs__handle_options__ReuseStrategy_27, &libs__handle_options__MaybeFeedbackInfo_28, &libs__handle_options__HostEnvType_29, &libs__handle_options__SystemEnvType_30, &libs__handle_options__TargetEnvType_31, &libs__handle_options__LimitErrorContextsMap_32, &libs__handle_options__STATE_VARIABLE_Specs_44_44);
        }
        {
          libs__op_mode__decide_op_mode_3_p_0(libs__handle_options__OptionTable_15, &libs__handle_options__OpMode_33, &libs__handle_options__OtherOpModes_34);
        }
        if ((libs__handle_options__OtherOpModes_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          libs__handle_options__STATE_VARIABLE_Specs_64_64 = libs__handle_options__STATE_VARIABLE_Specs_44_44;
        else
          {
            MR_Word libs__handle_options__TypeCtorInfo_87_87;
            MR_Word libs__handle_options__OpModeStrs_37;
            MR_Word libs__handle_options__OpModePieces_38;
            MR_Word libs__handle_options__V_47_47;
            MR_Word libs__handle_options__V_55_55;
            MR_Word libs__handle_options__V_56_56;

            {
              libs__handle_options__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_47_47, 0) = ((MR_Box) (libs__handle_options__OpMode_33));
              MR_hl_field(MR_mktag(1), libs__handle_options__V_47_47, 1) = ((MR_Box) (libs__handle_options__OtherOpModes_34));
            }
            {
              libs__handle_options__OpModeStrs_37 = mercury__list__map_2_f_0((MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &libs__handle_options_scalar_common_3[8], libs__handle_options__V_47_47);
            }
            libs__handle_options__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
            {
              libs__handle_options__V_56_56 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(libs__handle_options__OpModeStrs_37);
            }
            {
              libs__handle_options__V_55_55 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_87_87, libs__handle_options__V_56_56, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11]));
            }
            {
              libs__handle_options__OpModePieces_38 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_87_87, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[8]), libs__handle_options__V_55_55);
            }
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__OpModePieces_38, libs__handle_options__STATE_VARIABLE_Specs_44_44, &libs__handle_options__STATE_VARIABLE_Specs_64_64);
            }
          }
        if ((libs__handle_options__STATE_VARIABLE_Specs_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            libs__handle_options__convert_options_to_globals_24_p_0(libs__handle_options__OptionTable_15, libs__handle_options__OpMode_33, libs__handle_options__Target_16, libs__handle_options__GC_Method_17, libs__handle_options__TagsMethod_18, libs__handle_options__TermNorm_19, libs__handle_options__Term2Norm_20, libs__handle_options__TraceLevel_21, libs__handle_options__TraceSuppress_22, libs__handle_options__SSTraceLevel_23, libs__handle_options__MaybeThreadSafe_24, libs__handle_options__C_CompilerType_25, libs__handle_options__CSharp_CompilerType_26, libs__handle_options__ReuseStrategy_27, libs__handle_options__MaybeFeedbackInfo_28, libs__handle_options__HostEnvType_29, libs__handle_options__SystemEnvType_30, libs__handle_options__TargetEnvType_31, libs__handle_options__LimitErrorContextsMap_32, libs__handle_options__STATE_VARIABLE_Specs_64_64, libs__handle_options__STATE_VARIABLE_Specs_41, libs__handle_options__Globals_8);
          }
        else
          {
            {
              libs__handle_options__generate_default_globals_3_p_0(libs__handle_options__Globals_8);
            }
            *libs__handle_options__STATE_VARIABLE_Specs_41 = libs__handle_options__STATE_VARIABLE_Specs_64_64;
          }
      }
  }
}

void MR_CALL 
libs__handle_options__long_usage_2_p_0(void)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__Version_4;
    MR_String libs__handle_options__Fullarch_5;
    MR_Word libs__handle_options__V_8_8;
    MR_Word libs__handle_options__V_11_11;
    MR_Word libs__handle_options__V_12_12;
    MR_Word libs__handle_options__V_14_14;

    {
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
    {
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[217])));
    }
    {
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
    }
    {
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
    }
    {
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Name: mmc -- Melbourne Mercury Compiler, version "));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
    }
    {
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Copyright: Copyright (C) 1993-2012 The University of Melbourne\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2016 The Mercury team\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Usage: mmc [<options>] <arguments>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Arguments:\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tArguments ending in \140.m\' are assumed to be source file names.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tArguments that do not end in \140.m\' are assumed to be module names.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\tArguments in the form \100file are replaced with the contents of the file.\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "Options:\n");
    }
    {
      libs__options__options_help_2_p_0();
    }
  }
}

void MR_CALL 
libs__handle_options__usage_2_p_0(void)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__AlreadyPrinted_4;

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
	 libs__handle_options__AlreadyPrinted_4  = X;
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
    switch (libs__handle_options__AlreadyPrinted_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__handle_options__display_compiler_version_2_p_0();
          }
          {
            mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[4]));
          }
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
  MR_Word libs__handle_options__Globals_5,
  MR_Word libs__handle_options__Specs_6)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__ProgName_8;
    MR_Integer libs__handle_options___NumWarnings_9;
    MR_Integer libs__handle_options___NumErrors_10;

    {
      mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &libs__handle_options__ProgName_8);
    }
    {
      mercury__io__write_string_3_p_0(libs__handle_options__ProgName_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ":");
    }
    {
      mercury__io__nl_2_p_0();
    }
    {
      parse_tree__error_util__write_error_specs_8_p_0(libs__handle_options__Specs_6, libs__handle_options__Globals_5, (MR_Integer) 0, &libs__handle_options___NumWarnings_9, (MR_Integer) 0, &libs__handle_options___NumErrors_10);
    }
  }
}

void MR_CALL 
libs__handle_options__display_compiler_version_2_p_0(void)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__Version_4;
    MR_String libs__handle_options__Fullarch_5;
    MR_Word libs__handle_options__V_8_8;
    MR_Word libs__handle_options__V_11_11;
    MR_Word libs__handle_options__V_12_12;
    MR_Word libs__handle_options__V_14_14;

    {
      mercury__library__version_2_p_0(&libs__handle_options__Version_4, &libs__handle_options__Fullarch_5);
    }
    {
      libs__handle_options__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 0) = ((MR_Box) (libs__handle_options__Fullarch_5));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[2])));
    }
    {
      libs__handle_options__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_12_12, 1) = ((MR_Box) (libs__handle_options__V_14_14));
    }
    {
      libs__handle_options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 0) = ((MR_Box) (libs__handle_options__Version_4));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_11_11, 1) = ((MR_Box) (libs__handle_options__V_12_12));
    }
    {
      libs__handle_options__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 0) = ((MR_Box) ((MR_String) "Mercury Compiler, version "));
      MR_hl_field(MR_mktag(1), libs__handle_options__V_8_8, 1) = ((MR_Box) (libs__handle_options__V_11_11));
    }
    {
      mercury__io__write_strings_3_p_0(libs__handle_options__V_8_8);
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_5(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box libs__handle_options__wrapper_arg_2,
  MR_Box libs__handle_options__wrapper_arg_3,
  MR_Box * libs__handle_options__wrapper_arg_4)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

    {
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
        libs__handle_options__succeeded = MR_TRUE;
      }
    return libs__handle_options__succeeded;
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_3(
  void * libs__handle_options__env_ptr_arg)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1));
    *((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
libs__handle_options__separate_option_args_5_p_0_4(
  MR_Box libs__handle_options__closure_arg,
  MR_Box * libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2,
  MR_Cont libs__handle_options__cont,
  void * libs__handle_options__cont_env_ptr)
{
  {
    struct libs__handle_options__separate_option_args_5_p_0_4_env_0_s libs__handle_options__env;

    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont = libs__handle_options__cont;
    (libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
    {
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

      {
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__separate_option_args_5_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__separate_option_args_5_p_0_3, &libs__handle_options__env);
      }
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_2(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

    {
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
        libs__handle_options__succeeded = MR_TRUE;
      }
    return libs__handle_options__succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__separate_option_args_5_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

    {
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
        libs__handle_options__succeeded = MR_TRUE;
      }
    return libs__handle_options__succeeded;
  }
}

void MR_CALL 
libs__handle_options__separate_option_args_5_p_0(
  MR_Word libs__handle_options__Args0_6,
  MR_Word * libs__handle_options__OptionArgs_7,
  MR_Word * libs__handle_options__Args_8)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__V_10_10;

    {
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_5[1]), libs__handle_options__Args0_6, libs__handle_options__OptionArgs_7, libs__handle_options__Args_8, &libs__handle_options__V_10_10);
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_5(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box libs__handle_options__wrapper_arg_2,
  MR_Box libs__handle_options__wrapper_arg_3,
  MR_Box * libs__handle_options__wrapper_arg_4)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_Word libs__handle_options__conv4_HeadVar__4_4;

    {
      libs__handle_options__succeeded = libs__options__special_handler_4_p_0(((MR_Word) libs__handle_options__wrapper_arg_1), ((MR_Word) libs__handle_options__wrapper_arg_2), ((MR_Word) libs__handle_options__wrapper_arg_3), &libs__handle_options__conv4_HeadVar__4_4);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__wrapper_arg_4 = ((MR_Box) (libs__handle_options__conv4_HeadVar__4_4));
        libs__handle_options__succeeded = MR_TRUE;
      }
    return libs__handle_options__succeeded;
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_3(
  void * libs__handle_options__env_ptr_arg)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s * libs__handle_options__env_ptr = (struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s *) libs__handle_options__env_ptr_arg;

    *((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1));
    *((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont)((libs__handle_options__env_ptr)->libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
libs__handle_options__handle_given_options_7_p_0_4(
  MR_Box libs__handle_options__closure_arg,
  MR_Box * libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2,
  MR_Cont libs__handle_options__cont,
  void * libs__handle_options__cont_env_ptr)
{
  {
    struct libs__handle_options__handle_given_options_7_p_0_4_env_0_s libs__handle_options__env;

    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_1 = libs__handle_options__wrapper_arg_1;
    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__wrapper_arg_2 = libs__handle_options__wrapper_arg_2;
    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont = libs__handle_options__cont;
    (libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__cont_env_ptr = libs__handle_options__cont_env_ptr;
    {
      MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;

      {
        libs__options__option_defaults_2_p_0(&(libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv3_HeadVar__1_1, &(libs__handle_options__env).libs__handle_options__handle_given_options_7_p_0_4_env_0__conv2_HeadVar__2_2, libs__handle_options__handle_given_options_7_p_0_3, &libs__handle_options__env);
      }
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_2(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_Word libs__handle_options__conv1_HeadVar__2_2;

    {
      libs__handle_options__succeeded = libs__options__long_option_2_p_0(((MR_String) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv1_HeadVar__2_2);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_HeadVar__2_2));
        libs__handle_options__succeeded = MR_TRUE;
      }
    return libs__handle_options__succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_7_p_0_1(
  MR_Box libs__handle_options__closure_arg,
  MR_Box libs__handle_options__wrapper_arg_1,
  MR_Box * libs__handle_options__wrapper_arg_2)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Box libs__handle_options__closure = libs__handle_options__closure_arg;
    MR_Word libs__handle_options__conv0_HeadVar__2_2;

    {
      libs__handle_options__succeeded = libs__options__short_option_2_p_0(((MR_Char) (MR_Word) libs__handle_options__wrapper_arg_1), &libs__handle_options__conv0_HeadVar__2_2);
    }
    if (libs__handle_options__succeeded)
      {
        *libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_HeadVar__2_2));
        libs__handle_options__succeeded = MR_TRUE;
      }
    return libs__handle_options__succeeded;
  }
}

void MR_CALL 
libs__handle_options__handle_given_options_7_p_0(
  MR_Word libs__handle_options__Args0_8,
  MR_Word * libs__handle_options__OptionArgs_9,
  MR_Word * libs__handle_options__Args_10,
  MR_Word * libs__handle_options__Specs_11,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_20)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__Result_15;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_38_38;

    {
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_5[0]), libs__handle_options__Args0_8, libs__handle_options__OptionArgs_9, libs__handle_options__Args_10, &libs__handle_options__Result_15);
    }
    {
      libs__handle_options__convert_option_table_result_to_globals_5_p_0(libs__handle_options__Result_15, libs__handle_options__Specs_11, &libs__handle_options__STATE_VARIABLE_Globals_38_38);
    }
    if ((*libs__handle_options__Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word libs__handle_options__OpMode_18;
        MR_Word libs__handle_options__Smart_19;
        MR_Word libs__handle_options__V_41_41;
        MR_Word libs__handle_options__V_42_42;
        MR_Word libs__handle_options__V_43_43;

        {
          libs__globals__get_op_mode_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_38_38, &libs__handle_options__OpMode_18);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_38_38, (MR_Integer) 117, &libs__handle_options__Smart_19);
        }
        libs__handle_options__succeeded = (libs__handle_options__Smart_19 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__succeeded = ((((MR_tag((MR_Word) libs__handle_options__OpMode_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (libs__handle_options__succeeded)
              {
                libs__handle_options__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_18, (MR_Integer) 1)));
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_41_41)) == (MR_mktag((MR_Integer) 1)));
                if (libs__handle_options__succeeded)
                  {
                    libs__handle_options__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_41_41, (MR_Integer) 0)));
                    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__V_42_42)) == (MR_mktag((MR_Integer) 1)));
                    if (libs__handle_options__succeeded)
                      {
                        libs__handle_options__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__V_42_42, (MR_Integer) 0)));
                        libs__handle_options__succeeded = (libs__handle_options__V_43_43 == (MR_Integer) 2);
                      }
                  }
              }
          }
        if (libs__handle_options__succeeded)
          {
            {
              libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", libs__handle_options__STATE_VARIABLE_Globals_38_38, libs__handle_options__STATE_VARIABLE_Globals_20);
            }
          }
        else
          *libs__handle_options__STATE_VARIABLE_Globals_20 = libs__handle_options__STATE_VARIABLE_Globals_38_38;
      }
    else
      *libs__handle_options__STATE_VARIABLE_Globals_20 = libs__handle_options__STATE_VARIABLE_Globals_38_38;
  }
}

void MR_CALL 
libs__handle_options__generate_default_globals_3_p_0(
  MR_Word * libs__handle_options__DefaultGlobals_4)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__V_6_6;
    MR_Word libs__handle_options__V_7_7;
    MR_Word libs__handle_options__V_8_8;

    {
      libs__handle_options__handle_given_options_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &libs__handle_options__V_6_6, &libs__handle_options__V_7_7, &libs__handle_options__V_8_8, libs__handle_options__DefaultGlobals_4);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.handle_options. */
