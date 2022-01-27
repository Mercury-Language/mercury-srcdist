/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version DEV
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2103__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1653);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1647);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2110__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1642);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1637);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2079__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1624);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2075__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1618);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2057__2_2_p_0(
  MR_Word libs__handle_options__HeadVar__1_1611,
  MR_String libs__handle_options__HeadVar__2_1755);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2057__1_2_p_0(
  MR_String libs__handle_options__HeadVar__1_1612,
  MR_String libs__handle_options__HeadVar__2_1757);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2039__1_3_f_0(
  MR_String libs__handle_options__TargetArch_145,
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1599);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2003__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1580);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1993__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1570);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1553);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1965__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1538);

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
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
  MR_Word libs__handle_options__Smart_9,
  MR_Word libs__handle_options__ConflictingOption_10,
  MR_Word libs__handle_options__ValueToDisableSmart_11,
  MR_String libs__handle_options__OptionDescr_12,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17);

static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
  MR_Word libs__handle_options__SourceOption_8,
  MR_Word libs__handle_options__RequiredOption_9,
  MR_Word libs__handle_options__RequiredOptionValue_10,
  MR_String libs__handle_options__ErrorMessage_11,
  MR_Word libs__handle_options__Globals_12,
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_16,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_17);

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
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_206,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_207,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_208);

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


static /* final */ const MR_Box libs__handle_options_scalar_common_1[236][2];

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



static /* final */ const MR_Box libs__handle_options_scalar_common_1[236][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2015 The Mercury team\n")),
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
    ((MR_Box) ((MR_String) "--decl_debug"))
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
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 234 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 235 */
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
#line 2434 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif

#line 2434 "handle_options.m"
void 
libs__handle_options__user_init_pred_0(void)
#line 2434 "handle_options.m"
{
#line 2434 "handle_options.m"
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
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2103__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1653)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1654;
    MR_String libs__handle_options__V_1655_1655;
    MR_String libs__handle_options__V_1656_1656;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1656_1656;

    {
      libs__handle_options__conv1_V_1656_1656 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1653)));
    }
    libs__handle_options__V_1656_1656 = ((MR_String) libs__handle_options__conv1_V_1656_1656);
    {
      libs__handle_options__V_1655_1655 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1656_1656, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1654 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1655_1655, (MR_String) "hrls");
    }
    return libs__handle_options__LambdaHeadVar__2_1654;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1647)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1648;
    MR_String libs__handle_options__V_1649_1649;
    MR_String libs__handle_options__V_1650_1650;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1650_1650;

    {
      libs__handle_options__conv1_V_1650_1650 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1647)));
    }
    libs__handle_options__V_1650_1650 = ((MR_String) libs__handle_options__conv1_V_1650_1650);
    {
      libs__handle_options__V_1649_1649 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1650_1650, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1648 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1649_1649, (MR_String) "mihs");
    }
    return libs__handle_options__LambdaHeadVar__2_1648;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2110__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1642)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1643;
    MR_String libs__handle_options__V_1644_1644;

    {
      libs__handle_options__V_1644_1644 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1642, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1643 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1644_1644, (MR_String) "hrls");
    }
    return libs__handle_options__LambdaHeadVar__2_1643;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_1_f_0(
  MR_String libs__handle_options__LambdaHeadVar__1_1637)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1638;
    MR_String libs__handle_options__V_1639_1639;

    {
      libs__handle_options__V_1639_1639 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1637, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1638 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1639_1639, (MR_String) "mihs");
    }
    return libs__handle_options__LambdaHeadVar__2_1638;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2079__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1624)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1625;
    MR_String libs__handle_options__V_1626_1626;
    MR_String libs__handle_options__V_1627_1627;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1627_1627;

    {
      libs__handle_options__conv1_V_1627_1627 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1624)));
    }
    libs__handle_options__V_1627_1627 = ((MR_String) libs__handle_options__conv1_V_1627_1627);
    {
      libs__handle_options__V_1626_1626 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1627_1627, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1625 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1626_1626, (MR_String) "inits");
    }
    return libs__handle_options__LambdaHeadVar__2_1625;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2075__1_2_f_0(
  MR_Word libs__handle_options__ToGradeSubdir_178,
  MR_String libs__handle_options__LambdaHeadVar__1_1618)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1619;
    MR_String libs__handle_options__V_1620_1620;
    MR_String libs__handle_options__V_1621_1621;
    MR_Box MR_CALL (* libs__handle_options__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, (MR_Integer) 1)));
    MR_Box libs__handle_options__conv1_V_1621_1621;

    {
      libs__handle_options__conv1_V_1621_1621 = libs__handle_options__func_0(((MR_Box) libs__handle_options__ToGradeSubdir_178), ((MR_Box) (libs__handle_options__LambdaHeadVar__1_1618)));
    }
    libs__handle_options__V_1621_1621 = ((MR_String) libs__handle_options__conv1_V_1621_1621);
    {
      libs__handle_options__V_1620_1620 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1621_1621, (MR_String) "Mercury");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1619 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1620_1620, (MR_String) "lib");
    }
    return libs__handle_options__LambdaHeadVar__2_1619;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2057__2_2_p_0(
  MR_Word libs__handle_options__HeadVar__1_1611,
  MR_String libs__handle_options__HeadVar__2_1755)
{
  {
    MR_bool libs__handle_options__succeeded;

    {
      libs__handle_options__succeeded = mercury__std_util__isnt_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__HeadVar__1_1611, ((MR_Box) (libs__handle_options__HeadVar__2_1755)));
    }
    return libs__handle_options__succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2057__1_2_p_0(
  MR_String libs__handle_options__HeadVar__1_1612,
  MR_String libs__handle_options__HeadVar__2_1757)
{
  {
    MR_bool libs__handle_options__succeeded = (strcmp(libs__handle_options__HeadVar__1_1612, libs__handle_options__HeadVar__2_1757) == 0);

    return libs__handle_options__succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2039__1_3_f_0(
  MR_String libs__handle_options__TargetArch_145,
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1599)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1600;
    MR_String libs__handle_options__V_1601_1601;
    MR_String libs__handle_options__V_1602_1602;

    {
      libs__handle_options__V_1602_1602 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1599, (MR_String) "Mercury");
    }
    {
      libs__handle_options__V_1601_1601 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1602_1602, libs__handle_options__GradeString_158);
    }
    {
      libs__handle_options__LambdaHeadVar__2_1600 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1601_1601, libs__handle_options__TargetArch_145);
    }
    return libs__handle_options__LambdaHeadVar__2_1600;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2003__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1580)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1581;
    MR_String libs__handle_options__V_1582_1582;

    {
      libs__handle_options__V_1582_1582 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1580, (MR_String) "modules");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1581 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1582_1582, libs__handle_options__GradeString_158);
    }
    return libs__handle_options__LambdaHeadVar__2_1581;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1993__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1570)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1571;
    MR_String libs__handle_options__V_1572_1572;

    {
      libs__handle_options__V_1572_1572 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", libs__handle_options__GradeString_158);
    }
    {
      libs__handle_options__LambdaHeadVar__2_1571 = mercury__dir__make_path_name_2_f_0(libs__handle_options__LambdaHeadVar__1_1570, libs__handle_options__V_1572_1572);
    }
    return libs__handle_options__LambdaHeadVar__2_1571;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1553)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1554;
    MR_String libs__handle_options__V_1555_1555;
    MR_String libs__handle_options__V_1556_1556;

    {
      libs__handle_options__V_1556_1556 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1553, (MR_String) "lib");
    }
    {
      libs__handle_options__V_1555_1555 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1556_1556, libs__handle_options__GradeString_158);
    }
    {
      libs__handle_options__LambdaHeadVar__2_1554 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1555_1555, (MR_String) "inc");
    }
    return libs__handle_options__LambdaHeadVar__2_1554;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1965__1_2_f_0(
  MR_String libs__handle_options__GradeString_158,
  MR_String libs__handle_options__LambdaHeadVar__1_1538)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_String libs__handle_options__LambdaHeadVar__2_1539;
    MR_String libs__handle_options__V_1540_1540;

    {
      libs__handle_options__V_1540_1540 = mercury__dir__f_slash_2_f_0(libs__handle_options__LambdaHeadVar__1_1538, (MR_String) "lib");
    }
    {
      libs__handle_options__LambdaHeadVar__2_1539 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1540_1540, libs__handle_options__GradeString_158);
    }
    return libs__handle_options__LambdaHeadVar__2_1539;
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
libs__handle_options__maybe_disable_smart_recompilation_8_p_0(
  MR_Word libs__handle_options__Smart_9,
  MR_Word libs__handle_options__ConflictingOption_10,
  MR_Word libs__handle_options__ValueToDisableSmart_11,
  MR_String libs__handle_options__OptionDescr_12,
  MR_Word libs__handle_options__STATE_VARIABLE_Globals_0_16,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_17)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__Value_15;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__ConflictingOption_10, &libs__handle_options__Value_15);
    }
    libs__handle_options__succeeded = (libs__handle_options__Smart_9 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__Value_15 == libs__handle_options__ValueToDisableSmart_11);
    if (libs__handle_options__succeeded)
      {
        MR_Word libs__handle_options__WarnSmart_29;

        {
          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 117, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_0_16, libs__handle_options__STATE_VARIABLE_Globals_17);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 24, &libs__handle_options__WarnSmart_29);
        }
        switch (libs__handle_options__WarnSmart_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word libs__handle_options__Halt_30;

              {
                mercury__io__write_string_3_p_0((MR_String) "Warning: smart recompilation does not yet work with ");
              }
              {
                mercury__io__write_string_3_p_0(libs__handle_options__OptionDescr_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ".\n");
              }
              {
                libs__globals__lookup_bool_option_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_17, (MR_Integer) 2, &libs__handle_options__Halt_30);
              }
              switch (libs__handle_options__Halt_30) {
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
    else
      *libs__handle_options__STATE_VARIABLE_Globals_17 = libs__handle_options__STATE_VARIABLE_Globals_0_16;
  }
}

static void MR_CALL 
libs__handle_options__option_requires_7_p_0(
  MR_Word libs__handle_options__SourceOption_8,
  MR_Word libs__handle_options__RequiredOption_9,
  MR_Word libs__handle_options__RequiredOptionValue_10,
  MR_String libs__handle_options__ErrorMessage_11,
  MR_Word libs__handle_options__Globals_12,
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_16,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__SourceOptionValue_14;
    MR_Word libs__handle_options__OptionValue_15;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__SourceOption_8, &libs__handle_options__SourceOptionValue_14);
    }
    {
      libs__globals__lookup_option_3_p_0(libs__handle_options__Globals_12, libs__handle_options__RequiredOption_9, &libs__handle_options__OptionValue_15);
    }
    libs__handle_options__succeeded = (libs__handle_options__SourceOptionValue_14 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__handle_options__succeeded = mercury__getopt_io____Unify____option_data_0_0(libs__handle_options__OptionValue_15, libs__handle_options__RequiredOptionValue_10);
        }
        libs__handle_options__succeeded = !(libs__handle_options__succeeded);
      }
    if (libs__handle_options__succeeded)
      {
        MR_Word libs__handle_options__V_19_19;
        MR_Word libs__handle_options__V_21_21;

        {
          libs__handle_options__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_21_21, 1) = ((MR_Box) (libs__handle_options__ErrorMessage_11));
        }
        {
          libs__handle_options__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_19_19, 0) = ((MR_Box) (libs__handle_options__V_21_21));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__V_19_19, libs__handle_options__STATE_VARIABLE_Specs_0_16, libs__handle_options__STATE_VARIABLE_Specs_17);
        }
      }
    else
      *libs__handle_options__STATE_VARIABLE_Specs_17 = libs__handle_options__STATE_VARIABLE_Specs_0_16;
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
    MR_String libs__handle_options__conv10_LambdaHeadVar__2_1654;

    {
      libs__handle_options__conv10_LambdaHeadVar__2_1654 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2103__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv10_LambdaHeadVar__2_1654));
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
    MR_String libs__handle_options__conv9_LambdaHeadVar__2_1648;

    {
      libs__handle_options__conv9_LambdaHeadVar__2_1648 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2101__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv9_LambdaHeadVar__2_1648));
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
    MR_String libs__handle_options__conv8_LambdaHeadVar__2_1643;

    {
      libs__handle_options__conv8_LambdaHeadVar__2_1643 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2110__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv8_LambdaHeadVar__2_1643));
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
    MR_String libs__handle_options__conv7_LambdaHeadVar__2_1638;

    {
      libs__handle_options__conv7_LambdaHeadVar__2_1638 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2109__1_1_f_0(((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv7_LambdaHeadVar__2_1638));
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
    MR_String libs__handle_options__conv6_LambdaHeadVar__2_1625;

    {
      libs__handle_options__conv6_LambdaHeadVar__2_1625 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2079__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv6_LambdaHeadVar__2_1625));
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
    MR_String libs__handle_options__conv5_LambdaHeadVar__2_1619;

    {
      libs__handle_options__conv5_LambdaHeadVar__2_1619 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2075__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv5_LambdaHeadVar__2_1619));
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
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2057__2_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
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
      libs__handle_options__succeeded = libs__handle_options__IntroducedFrom__pred__convert_options_to_globals__2057__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
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
    MR_String libs__handle_options__conv4_LambdaHeadVar__2_1600;

    {
      libs__handle_options__conv4_LambdaHeadVar__2_1600 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2039__1_3_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 4))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv4_LambdaHeadVar__2_1600));
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
    MR_String libs__handle_options__conv3_LambdaHeadVar__2_1581;

    {
      libs__handle_options__conv3_LambdaHeadVar__2_1581 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__2003__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv3_LambdaHeadVar__2_1581));
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
    MR_String libs__handle_options__conv2_LambdaHeadVar__2_1571;

    {
      libs__handle_options__conv2_LambdaHeadVar__2_1571 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1993__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv2_LambdaHeadVar__2_1571));
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
    MR_String libs__handle_options__conv1_LambdaHeadVar__2_1554;

    {
      libs__handle_options__conv1_LambdaHeadVar__2_1554 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1980__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv1_LambdaHeadVar__2_1554));
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
    MR_String libs__handle_options__conv0_LambdaHeadVar__2_1539;

    {
      libs__handle_options__conv0_LambdaHeadVar__2_1539 = libs__handle_options__IntroducedFrom__func__convert_options_to_globals__1965__1_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), libs__handle_options__closure, (MR_Integer) 3))), ((MR_String) libs__handle_options__wrapper_arg_1));
    }
    libs__handle_options__wrapper_arg_2 = ((MR_Box) (libs__handle_options__conv0_LambdaHeadVar__2_1539));
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
  MR_Word libs__handle_options__STATE_VARIABLE_Specs_0_206,
  MR_Word * libs__handle_options__STATE_VARIABLE_Specs_207,
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_208)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__TypeCtorInfo_1751_1751 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
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
    MR_Word libs__handle_options__TransOpt_71;
    MR_Word libs__handle_options__InterModOpt_76;
    MR_Word libs__handle_options__InterModAnalysis_77;
    MR_Word libs__handle_options__MaybeStandaloneInt_79;
    MR_Word libs__handle_options__ExtraInitFunctions_80;
    MR_Word libs__handle_options__Smart_83;
    MR_Word libs__handle_options__VeryVerbose_84;
    MR_Word libs__handle_options__Statistics_85;
    MR_Integer libs__handle_options__DebugLiveness_86;
    MR_Integer libs__handle_options__DebugModesPredId_90;
    MR_Word libs__handle_options__DebugUnneededCodePredNames_91;
    MR_Word libs__handle_options__DebugOptPredIdStrs_94;
    MR_Word libs__handle_options__DebugOptPredNames_95;
    MR_Word libs__handle_options__DebugIntermoduleAnalysis_100;
    MR_Word libs__handle_options__DumpHLDSPredIds_101;
    MR_Word libs__handle_options__UseTrail_107;
    MR_Word libs__handle_options__HighLevelCode_108;
    MR_Word libs__handle_options__UseMinimalModelStackCopy_109;
    MR_Word libs__handle_options__UseMinimalModelOwnStacks_110;
    MR_Word libs__handle_options__UseMinimalModel_111;
    MR_Word libs__handle_options__ProfOptimized_119;
    MR_String libs__handle_options__ExpComp_120;
    MR_Word libs__handle_options__TraceOptimized_121;
    MR_Word libs__handle_options__TraceLevelIsNone_122;
    MR_Word libs__handle_options__ProfileDeep_124;
    MR_Word libs__handle_options__RecordTermSizesAsWords_128;
    MR_Word libs__handle_options__RecordTermSizesAsCells_129;
    MR_Word libs__handle_options__PutNondetEnvOnHeap_133;
    MR_Word libs__handle_options__DisablePneg_135;
    MR_Word libs__handle_options__DisableCut_136;
    MR_Word libs__handle_options__DumpHLDSStages_137;
    MR_Word libs__handle_options__DumpTraceStages_138;
    MR_Word libs__handle_options__ParallelLiveness_139;
    MR_Word libs__handle_options__ParallelCodeGen_140;
    MR_String libs__handle_options__TargetArch_145;
    MR_Word libs__handle_options__MaybeStdLibDir_146;
    MR_Word libs__handle_options__MaybeConfDir_152;
    MR_Word libs__handle_options__ConfigFile_155;
    MR_Word libs__handle_options__MercuryLibDirs_157;
    MR_String libs__handle_options__GradeString_158;
    MR_Word libs__handle_options__UseSearchDirs_172;
    MR_Word libs__handle_options__UseGradeSubdirs_175;
    MR_Word libs__handle_options__SearchLibFilesDirs_176;
    MR_Word libs__handle_options__IntermodDirs2_177;
    MR_Word libs__handle_options__ToGradeSubdir_178;
    MR_Word libs__handle_options__LinkLibDirs_187;
    MR_Word libs__handle_options__InitDirs_190;
    MR_Word libs__handle_options__UseSubdirs_191;
    MR_Word libs__handle_options__BackendForeignLanguages_201;
    MR_Word libs__handle_options__CurrentBackendForeignLanguage_202;
    MR_Integer libs__handle_options__CompareSpec_205;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_213_213;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_214_214;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_220_220;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_227_227;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_248_248;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_279_279;
    MR_Word libs__handle_options__V_281_281;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_282_282;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_283_283;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_301_301;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_324_324;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_345_345;
    MR_Word libs__handle_options__V_348_348;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_349_349;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_353_353;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_482_482;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_487_487;
    MR_Word libs__handle_options__V_491_491;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_492_492;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_497_497;
    MR_Word libs__handle_options__V_501_501;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_502_502;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_507_507;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_512_512;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_517_517;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_522_522;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_527_527;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_532_532;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_541_541;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_546_546;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_551_551;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_556_556;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_561_561;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_584_584;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_605_605;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_608_608;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_630_630;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_634_634;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_639_639;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_644_644;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_649_649;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_654_654;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_659_659;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_664_664;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_669_669;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_674_674;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_679_679;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_684_684;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_689_689;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_693_693;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_698_698;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_703_703;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_708_708;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_713_713;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_718_718;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_723_723;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_728_728;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_733_733;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_738_738;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_743_743;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_748_748;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_753_753;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_758_758;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_763_763;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_768_768;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_773_773;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_778_778;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_783_783;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_788_788;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_793_793;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_798_798;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_803_803;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_808_808;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_814_814;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_819_819;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_824_824;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_829_829;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_834_834;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_839_839;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_845_845;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_850_850;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_855_855;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_860_860;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_868_868;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_872_872;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_878_878;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_883_883;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_889_889;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_901_901;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_905_905;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_910_910;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_915_915;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_920_920;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_935_935;
    MR_Word libs__handle_options__V_958_958;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_959_959;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1004_1004;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1007_1007;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1011_1011;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1016_1016;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1025_1025;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1029_1029;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1034_1034;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1039_1039;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1044_1044;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1049_1049;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1055_1055;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1060_1060;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1065_1065;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1070_1070;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1075_1075;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1080_1080;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1085_1085;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1090_1090;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1095_1095;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1100_1100;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1105_1105;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1110_1110;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1115_1115;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1208_1208;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1213_1213;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1225_1225;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1236_1236;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1246_1246;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1253_1253;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1272_1272;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1276_1276;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1281_1281;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1286_1286;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1291_1291;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1296_1296;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1301_1301;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1306_1306;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1355_1355;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1377_1377;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1382_1382;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1387_1387;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1392_1392;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1397_1397;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1402_1402;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1407_1407;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1412_1412;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1417_1417;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1422_1422;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1428_1428;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1432_1432;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1440_1440;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1445_1445;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1450_1450;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1455_1455;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1460_1460;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1465_1465;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1470_1470;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1475_1475;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1480_1480;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1485_1485;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1490_1490;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1495_1495;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1510_1510;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1518_1518;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1530_1530;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1587_1587;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1594_1594;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1615_1615;
    MR_Word libs__handle_options__V_1631_1631;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1632_1632;
    MR_Word libs__handle_options__V_1634_1634;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1635_1635;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1671_1671;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1687_1687;
    MR_Word libs__handle_options__STATE_VARIABLE_Specs_1695_1695;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1705_1705;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1716_1716;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1725_1725;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1730_1730;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_1736_1736;
    MR_String libs__handle_options__V_81_81;
    MR_String libs__handle_options__AllDumpOptions_87;
    MR_String libs__handle_options__V_864_864;
    MR_String libs__handle_options__V_1523_1523;
    MR_Word libs__handle_options__ToMihsSubdir_192;
    MR_Word libs__handle_options__ToHrlsSubdir_193;
    MR_Integer libs__handle_options__V_1727_1727;

    {
      mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1751_1751, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 623)), &libs__handle_options__InstallCmd_47);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__InstallCmd_47, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String libs__handle_options__InstallCmdDirOption_49;

        {
          mercury__getopt_io__lookup_string_option_3_p_0(libs__handle_options__TypeCtorInfo_1751_1751, libs__handle_options__OptionTable0_25, ((MR_Box) ((MR_Integer) 624)), &libs__handle_options__InstallCmdDirOption_49);
        }
        {
          libs__handle_options__FileInstallCmd_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 0) = ((MR_Box) (libs__handle_options__InstallCmd_47));
          MR_hl_field(MR_mktag(1), libs__handle_options__FileInstallCmd_48, 1) = ((MR_Box) (libs__handle_options__InstallCmdDirOption_49));
        }
      }
    {
      libs__globals__globals_init_21_p_0(libs__handle_options__OptionTable0_25, libs__handle_options__OpMode_26, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__TagsMethod0_29, libs__handle_options__TermNorm_30, libs__handle_options__Term2Norm_31, libs__handle_options__TraceLevel_32, libs__handle_options__TraceSuppress_33, libs__handle_options__SSTraceLevel_34, libs__handle_options__MaybeThreadSafe_35, libs__handle_options__C_CompilerType_36, libs__handle_options__CSharp_CompilerType_37, libs__handle_options__ReuseStrategy_38, libs__handle_options__MaybeFeedbackInfo_39, libs__handle_options__HostEnvType_40, libs__handle_options__SystemEnvType_41, libs__handle_options__TargetEnvType_42, libs__handle_options__FileInstallCmd_48, libs__handle_options__LimitErrorContextsMap_43, &libs__handle_options__STATE_VARIABLE_Globals_213_213);
    }
    {
      libs__compute_grade__check_grade_component_compatibility_5_p_0(libs__handle_options__STATE_VARIABLE_Globals_213_213, libs__handle_options__Target_27, libs__handle_options__GC_Method_28, libs__handle_options__STATE_VARIABLE_Specs_0_206, &libs__handle_options__STATE_VARIABLE_Specs_214_214);
    }
    {
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_213_213, (MR_Integer) 176, &libs__handle_options__EventSetFileName0_50);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__EventSetFileName0_50, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      {
        MR_Word libs__handle_options__MaybeEventSetFileName_51;

        {
          mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &libs__handle_options__MaybeEventSetFileName_51);
        }
        if ((libs__handle_options__MaybeEventSetFileName_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          libs__handle_options__STATE_VARIABLE_Globals_220_220 = libs__handle_options__STATE_VARIABLE_Globals_213_213;
        else
          {
            MR_String libs__handle_options__EventSetFileName_52 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeEventSetFileName_51, (MR_Integer) 0)));
            MR_Word libs__handle_options__V_219_219;

            {
              libs__handle_options__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), libs__handle_options__V_219_219, 1) = ((MR_Box) (libs__handle_options__EventSetFileName_52));
            }
            {
              libs__globals__set_option_4_p_0((MR_Integer) 176, libs__handle_options__V_219_219, libs__handle_options__STATE_VARIABLE_Globals_213_213, &libs__handle_options__STATE_VARIABLE_Globals_220_220);
            }
          }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_220_220 = libs__handle_options__STATE_VARIABLE_Globals_213_213;
    {
      libs__handle_options__GCIsConservative_53 = libs__globals__gc_is_conservative_1_f_0(libs__handle_options__GC_Method_28);
    }
    switch (libs__handle_options__GCIsConservative_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_227_227 = libs__handle_options__STATE_VARIABLE_Globals_220_220;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_223_223;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_220_220, &libs__handle_options__STATE_VARIABLE_Globals_223_223);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_222_222, libs__handle_options__STATE_VARIABLE_Globals_223_223, &libs__handle_options__STATE_VARIABLE_Globals_227_227);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_227_227, (MR_Integer) 223, &libs__handle_options__PregeneratedDist_54);
    }
    switch (libs__handle_options__PregeneratedDist_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_248_248 = libs__handle_options__STATE_VARIABLE_Globals_227_227;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_232_232;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_236_236;
          MR_Word libs__handle_options__V_239_239;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_240_240;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_244_244;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[1]), libs__handle_options__STATE_VARIABLE_Globals_227_227, &libs__handle_options__STATE_VARIABLE_Globals_232_232);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 246, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[2]), libs__handle_options__STATE_VARIABLE_Globals_232_232, &libs__handle_options__STATE_VARIABLE_Globals_236_236);
          }
          libs__handle_options__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_236_236, &libs__handle_options__STATE_VARIABLE_Globals_240_240);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 224, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_240_240, &libs__handle_options__STATE_VARIABLE_Globals_244_244);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_239_239, libs__handle_options__STATE_VARIABLE_Globals_244_244, &libs__handle_options__STATE_VARIABLE_Globals_248_248);
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
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_248_248, (MR_Integer) 237, &libs__handle_options__NumTagBits0_55);
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
          libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_248_248, (MR_Integer) 242, &libs__handle_options__NumTagBits1_56);
        }
      }
    else
      libs__handle_options__NumTagBits1_56 = libs__handle_options__NumTagBits0_55;
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits1_56 < (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__NumTagBits_57 = (MR_Integer) 0;
        {
          libs__compiler_util__add_warning_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[147]), libs__handle_options__STATE_VARIABLE_Specs_214_214, &libs__handle_options__STATE_VARIABLE_Specs_279_279);
        }
      }
    else
      {
        libs__handle_options__NumTagBits_57 = libs__handle_options__NumTagBits1_56;
        libs__handle_options__STATE_VARIABLE_Specs_279_279 = libs__handle_options__STATE_VARIABLE_Specs_214_214;
      }
    {
      libs__handle_options__V_281_281 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), libs__handle_options__V_281_281, 0) = ((MR_Box) (libs__handle_options__NumTagBits_57));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 237, libs__handle_options__V_281_281, libs__handle_options__STATE_VARIABLE_Globals_248_248, &libs__handle_options__STATE_VARIABLE_Globals_282_282);
    }
    libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__TagsMethod_59 = (MR_Integer) 0;
        {
          libs__globals__set_tags_method_3_p_0(libs__handle_options__TagsMethod_59, libs__handle_options__STATE_VARIABLE_Globals_282_282, &libs__handle_options__STATE_VARIABLE_Globals_283_283);
        }
      }
    else
      {
        libs__handle_options__TagsMethod_59 = libs__handle_options__TagsMethod0_29;
        libs__handle_options__STATE_VARIABLE_Globals_283_283 = libs__handle_options__STATE_VARIABLE_Globals_282_282;
      }
    {
      libs__globals__current_grade_supports_par_conj_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, &libs__handle_options__GradeSupportsParConj_60);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 216, &libs__handle_options__Parallel_61);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 217, &libs__handle_options__Threadscope_62);
    }
    libs__handle_options__succeeded = (libs__handle_options__GradeSupportsParConj_60 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__Threadscope_62 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[155]), libs__handle_options__STATE_VARIABLE_Specs_279_279, &libs__handle_options__STATE_VARIABLE_Specs_301_301);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_301_301 = libs__handle_options__STATE_VARIABLE_Specs_279_279;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 662, &libs__handle_options__ImplicitParallelism_64);
    }
    switch (libs__handle_options__ImplicitParallelism_64) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__STATE_VARIABLE_Specs_345_345 = libs__handle_options__STATE_VARIABLE_Specs_301_301;
          libs__handle_options__STATE_VARIABLE_Globals_324_324 = libs__handle_options__STATE_VARIABLE_Globals_283_283;
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
                  libs__handle_options__STATE_VARIABLE_Specs_345_345 = libs__handle_options__STATE_VARIABLE_Specs_301_301;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[164]), libs__handle_options__STATE_VARIABLE_Specs_301_301, &libs__handle_options__STATE_VARIABLE_Specs_345_345);
                    }
                  }
                  break;
              }
              {
                libs__globals__set_option_4_p_0((MR_Integer) 662, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_283_283, &libs__handle_options__STATE_VARIABLE_Globals_324_324);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String libs__handle_options__FeedbackFile_65;

              {
                libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_283_283, (MR_Integer) 663, &libs__handle_options__FeedbackFile_65);
              }
              libs__handle_options__succeeded = (strcmp(libs__handle_options__FeedbackFile_65, (MR_String) "") == 0);
              if (libs__handle_options__succeeded)
                {
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[170]), libs__handle_options__STATE_VARIABLE_Specs_301_301, &libs__handle_options__STATE_VARIABLE_Specs_345_345);
                  }
                }
              else
                libs__handle_options__STATE_VARIABLE_Specs_345_345 = libs__handle_options__STATE_VARIABLE_Specs_301_301;
              libs__handle_options__STATE_VARIABLE_Globals_324_324 = libs__handle_options__STATE_VARIABLE_Globals_283_283;
            }
            break;
        }
        break;
    }
    libs__handle_options__V_348_348 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 662, (MR_Integer) 198, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_324_324, &libs__handle_options__STATE_VARIABLE_Globals_349_349);
    }
    switch (libs__handle_options__GradeSupportsParConj_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 664, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]), libs__handle_options__STATE_VARIABLE_Globals_349_349, &libs__handle_options__STATE_VARIABLE_Globals_353_353);
          }
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_353_353 = libs__handle_options__STATE_VARIABLE_Globals_349_349;
        break;
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 259, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_423_423;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_426_426;
          MR_Word libs__handle_options__V_429_429;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_430_430;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_434_434;
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

          {
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_423_423);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 215, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222]), libs__handle_options__STATE_VARIABLE_Globals_423_423, &libs__handle_options__STATE_VARIABLE_Globals_426_426);
          }
          libs__handle_options__V_429_429 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_429_429, libs__handle_options__STATE_VARIABLE_Globals_426_426, &libs__handle_options__STATE_VARIABLE_Globals_430_430);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_429_429, libs__handle_options__STATE_VARIABLE_Globals_430_430, &libs__handle_options__STATE_VARIABLE_Globals_434_434);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_434_434, &libs__handle_options__STATE_VARIABLE_Globals_438_438);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_438_438, &libs__handle_options__STATE_VARIABLE_Globals_442_442);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_442_442, &libs__handle_options__STATE_VARIABLE_Globals_446_446);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 256, libs__handle_options__V_429_429, libs__handle_options__STATE_VARIABLE_Globals_446_446, &libs__handle_options__STATE_VARIABLE_Globals_450_450);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 258, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_450_450, &libs__handle_options__STATE_VARIABLE_Globals_454_454);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 257, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_454_454, &libs__handle_options__STATE_VARIABLE_Globals_458_458);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]), libs__handle_options__STATE_VARIABLE_Globals_458_458, &libs__handle_options__STATE_VARIABLE_Globals_462_462);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 245, libs__handle_options__V_429_429, libs__handle_options__STATE_VARIABLE_Globals_462_462, &libs__handle_options__STATE_VARIABLE_Globals_466_466);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 260, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_466_466, &libs__handle_options__STATE_VARIABLE_Globals_470_470);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 269, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_470_470, &libs__handle_options__STATE_VARIABLE_Globals_474_474);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 639, libs__handle_options__V_429_429, libs__handle_options__STATE_VARIABLE_Globals_474_474, &libs__handle_options__STATE_VARIABLE_Globals_478_478);
          }
          switch (libs__handle_options__Target_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 564, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223]), libs__handle_options__STATE_VARIABLE_Globals_478_478, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
                }
              }
              break;
            case (MR_Integer) 2:
              libs__handle_options__STATE_VARIABLE_Globals_482_482 = libs__handle_options__STATE_VARIABLE_Globals_478_478;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_361_361;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_364_364;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_368_368;
          MR_Word libs__handle_options__V_371_371;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_372_372;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_376_376;
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

          {
            libs__globals__set_gc_method_3_p_0((MR_Integer) 0, libs__handle_options__STATE_VARIABLE_Globals_353_353, &libs__handle_options__STATE_VARIABLE_Globals_361_361);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 215, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222]), libs__handle_options__STATE_VARIABLE_Globals_361_361, &libs__handle_options__STATE_VARIABLE_Globals_364_364);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 243, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_364_364, &libs__handle_options__STATE_VARIABLE_Globals_368_368);
          }
          libs__handle_options__V_371_371 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_368_368, &libs__handle_options__STATE_VARIABLE_Globals_372_372);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_372_372, &libs__handle_options__STATE_VARIABLE_Globals_376_376);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 272, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_376_376, &libs__handle_options__STATE_VARIABLE_Globals_380_380);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_380_380, &libs__handle_options__STATE_VARIABLE_Globals_384_384);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 270, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_384_384, &libs__handle_options__STATE_VARIABLE_Globals_388_388);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 271, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_388_388, &libs__handle_options__STATE_VARIABLE_Globals_392_392);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 639, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_392_392, &libs__handle_options__STATE_VARIABLE_Globals_396_396);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 451, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_396_396, &libs__handle_options__STATE_VARIABLE_Globals_400_400);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 249, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_400_400, &libs__handle_options__STATE_VARIABLE_Globals_404_404);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 250, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_404_404, &libs__handle_options__STATE_VARIABLE_Globals_408_408);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 251, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_408_408, &libs__handle_options__STATE_VARIABLE_Globals_412_412);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 254, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_412_412, &libs__handle_options__STATE_VARIABLE_Globals_416_416);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 255, libs__handle_options__V_371_371, libs__handle_options__STATE_VARIABLE_Globals_416_416, &libs__handle_options__STATE_VARIABLE_Globals_482_482);
          }
        }
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 219, (MR_Integer) 218, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_482_482, &libs__handle_options__STATE_VARIABLE_Globals_487_487);
    }
    libs__handle_options__V_491_491 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 547, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_487_487, &libs__handle_options__STATE_VARIABLE_Globals_492_492);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 549, libs__handle_options__V_491_491, libs__handle_options__STATE_VARIABLE_Globals_492_492, &libs__handle_options__STATE_VARIABLE_Globals_497_497);
    }
    libs__handle_options__V_501_501 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[0]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 249, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_497_497, &libs__handle_options__STATE_VARIABLE_Globals_502_502);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 250, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_502_502, &libs__handle_options__STATE_VARIABLE_Globals_507_507);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 251, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_507_507, &libs__handle_options__STATE_VARIABLE_Globals_512_512);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 256, (MR_Integer) 316, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_512_512, &libs__handle_options__STATE_VARIABLE_Globals_517_517);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 457, (MR_Integer) 451, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_517_517, &libs__handle_options__STATE_VARIABLE_Globals_522_522);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 613, (MR_Integer) 611, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_522_522, &libs__handle_options__STATE_VARIABLE_Globals_527_527);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_527_527, (MR_Integer) 629, &libs__handle_options__LibLinkages0_68);
    }
    if ((libs__handle_options__LibLinkages0_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 629, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[173]), libs__handle_options__STATE_VARIABLE_Globals_527_527, &libs__handle_options__STATE_VARIABLE_Globals_532_532);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_532_532 = libs__handle_options__STATE_VARIABLE_Globals_527_527;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 611, (MR_Integer) 634, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_532_532, &libs__handle_options__STATE_VARIABLE_Globals_541_541);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 616, (MR_Integer) 634, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_541_541, &libs__handle_options__STATE_VARIABLE_Globals_546_546);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 616, (MR_Integer) 611, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_546_546, &libs__handle_options__STATE_VARIABLE_Globals_551_551);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 616, (MR_Integer) 119, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_551_551, &libs__handle_options__STATE_VARIABLE_Globals_556_556);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 611, (MR_Integer) 639, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_556_556, &libs__handle_options__STATE_VARIABLE_Globals_561_561);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 326, &libs__handle_options__TransOpt_71);
    }
    switch (libs__handle_options__TransOpt_71) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Specs_584_584 = libs__handle_options__STATE_VARIABLE_Specs_345_345;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__UsingMMCMake_72;
          MR_Word libs__handle_options__InvokedByMMCMake_73;
          MR_Word libs__handle_options__UsingOrInvokedByMMCMake_74;

          {
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 611, &libs__handle_options__UsingMMCMake_72);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 616, &libs__handle_options__InvokedByMMCMake_73);
          }
          {
            libs__handle_options__UsingOrInvokedByMMCMake_74 = mercury__bool__or_2_f_0(libs__handle_options__UsingMMCMake_72, libs__handle_options__InvokedByMMCMake_73);
          }
          switch (libs__handle_options__UsingOrInvokedByMMCMake_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__handle_options__STATE_VARIABLE_Specs_584_584 = libs__handle_options__STATE_VARIABLE_Specs_345_345;
              break;
            case (MR_Integer) 1:
              {
                {
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[180]), libs__handle_options__STATE_VARIABLE_Specs_345_345, &libs__handle_options__STATE_VARIABLE_Specs_584_584);
                }
              }
              break;
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 322, &libs__handle_options__InterModOpt_76);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_561_561, (MR_Integer) 327, &libs__handle_options__InterModAnalysis_77);
    }
    libs__handle_options__succeeded = (libs__handle_options__InterModOpt_76 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__InterModAnalysis_77 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[186]), libs__handle_options__STATE_VARIABLE_Specs_584_584, &libs__handle_options__STATE_VARIABLE_Specs_605_605);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_605_605 = libs__handle_options__STATE_VARIABLE_Specs_584_584;
    {
      libs__handle_options__succeeded = mercury__io__have_symlinks_0_p_0();
    }
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Globals_608_608 = libs__handle_options__STATE_VARIABLE_Globals_561_561;
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 620, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_561_561, &libs__handle_options__STATE_VARIABLE_Globals_608_608);
        }
      }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_608_608, (MR_Integer) 96, &libs__handle_options__MaybeStandaloneInt_79);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_608_608, (MR_Integer) 557, &libs__handle_options__ExtraInitFunctions_80);
    }
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__MaybeStandaloneInt_79)) == (MR_mktag((MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStandaloneInt_79, (MR_Integer) 0)));
        libs__handle_options__succeeded = (libs__handle_options__ExtraInitFunctions_80 == (MR_Integer) 1);
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[192]), libs__handle_options__STATE_VARIABLE_Specs_605_605, &libs__handle_options__STATE_VARIABLE_Specs_630_630);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Specs_630_630 = libs__handle_options__STATE_VARIABLE_Specs_605_605;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 404, (MR_Integer) 402, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_608_608, &libs__handle_options__STATE_VARIABLE_Globals_634_634);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 412, (MR_Integer) 411, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_634_634, &libs__handle_options__STATE_VARIABLE_Globals_639_639);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 411, (MR_Integer) 410, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_639_639, &libs__handle_options__STATE_VARIABLE_Globals_644_644);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 411, (MR_Integer) 14, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_644_644, &libs__handle_options__STATE_VARIABLE_Globals_649_649);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 419, (MR_Integer) 418, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_649_649, &libs__handle_options__STATE_VARIABLE_Globals_654_654);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 417, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_654_654, &libs__handle_options__STATE_VARIABLE_Globals_659_659);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 418, (MR_Integer) 14, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_659_659, &libs__handle_options__STATE_VARIABLE_Globals_664_664);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 326, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_664_664, &libs__handle_options__STATE_VARIABLE_Globals_669_669);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 326, (MR_Integer) 322, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_669_669, &libs__handle_options__STATE_VARIABLE_Globals_674_674);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 325, (MR_Integer) 324, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_674_674, &libs__handle_options__STATE_VARIABLE_Globals_679_679);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 322, (MR_Integer) 324, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_679_679, &libs__handle_options__STATE_VARIABLE_Globals_684_684);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 326, (MR_Integer) 325, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_684_684, &libs__handle_options__STATE_VARIABLE_Globals_689_689);
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 324, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_689_689, &libs__handle_options__STATE_VARIABLE_Globals_693_693);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 117, (MR_Integer) 118, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_693_693, &libs__handle_options__STATE_VARIABLE_Globals_698_698);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 51, (MR_Integer) 50, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_698_698, &libs__handle_options__STATE_VARIABLE_Globals_703_703);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_703_703, &libs__handle_options__STATE_VARIABLE_Globals_708_708);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 94, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_708_708, &libs__handle_options__STATE_VARIABLE_Globals_713_713);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 93, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_713_713, &libs__handle_options__STATE_VARIABLE_Globals_718_718);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 97, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_718_718, &libs__handle_options__STATE_VARIABLE_Globals_723_723);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_723_723, &libs__handle_options__STATE_VARIABLE_Globals_728_728);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_728_728, &libs__handle_options__STATE_VARIABLE_Globals_733_733);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_733_733, &libs__handle_options__STATE_VARIABLE_Globals_738_738);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_738_738, &libs__handle_options__STATE_VARIABLE_Globals_743_743);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 103, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_743_743, &libs__handle_options__STATE_VARIABLE_Globals_748_748);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_748_748, &libs__handle_options__STATE_VARIABLE_Globals_753_753);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_753_753, &libs__handle_options__STATE_VARIABLE_Globals_758_758);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 90, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_758_758, &libs__handle_options__STATE_VARIABLE_Globals_763_763);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 99, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_763_763, &libs__handle_options__STATE_VARIABLE_Globals_768_768);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 117, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_768_768, &libs__handle_options__STATE_VARIABLE_Globals_773_773);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 87, (MR_Integer) 139, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_773_773, &libs__handle_options__STATE_VARIABLE_Globals_778_778);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 86, (MR_Integer) 139, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_778_778, &libs__handle_options__STATE_VARIABLE_Globals_783_783);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 139, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_783_783, &libs__handle_options__STATE_VARIABLE_Globals_788_788);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 139, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_788_788, &libs__handle_options__STATE_VARIABLE_Globals_793_793);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 89, (MR_Integer) 139, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_793_793, &libs__handle_options__STATE_VARIABLE_Globals_798_798);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 118, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_798_798, &libs__handle_options__STATE_VARIABLE_Globals_803_803);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 91, (MR_Integer) 322, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_803_803, &libs__handle_options__STATE_VARIABLE_Globals_808_808);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_808_808, (MR_Integer) 117, &libs__handle_options__Smart_83);
    }
    {
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 322, (MR_Integer) 1, (MR_String) "\140--intermodule-optimization\'", libs__handle_options__STATE_VARIABLE_Globals_808_808, &libs__handle_options__STATE_VARIABLE_Globals_814_814);
    }
    {
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 324, (MR_Integer) 1, (MR_String) "\140--use-opt-files\'", libs__handle_options__STATE_VARIABLE_Globals_814_814, &libs__handle_options__STATE_VARIABLE_Globals_819_819);
    }
    {
      libs__handle_options__maybe_disable_smart_recompilation_8_p_0(libs__handle_options__Smart_83, (MR_Integer) 100, (MR_Integer) 0, (MR_String) "\140--no-target-code-only\'", libs__handle_options__STATE_VARIABLE_Globals_819_819, &libs__handle_options__STATE_VARIABLE_Globals_824_824);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 635, (MR_Integer) 634, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_824_824, &libs__handle_options__STATE_VARIABLE_Globals_829_829);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 48, (MR_Integer) 47, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_829_829, &libs__handle_options__STATE_VARIABLE_Globals_834_834);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 47, (MR_Integer) 53, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_834_834, &libs__handle_options__STATE_VARIABLE_Globals_839_839);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 48, &libs__handle_options__VeryVerbose_84);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_839_839, (MR_Integer) 57, &libs__handle_options__Statistics_85);
    }
    libs__handle_options__succeeded = (libs__handle_options__VeryVerbose_84 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__Statistics_85 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 58, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_839_839, &libs__handle_options__STATE_VARIABLE_Globals_845_845);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_845_845 = libs__handle_options__STATE_VARIABLE_Globals_839_839;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 64, (MR_Integer) 62, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_845_845, &libs__handle_options__STATE_VARIABLE_Globals_850_850);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 62, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_850_850, &libs__handle_options__STATE_VARIABLE_Globals_855_855);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 63, (MR_Integer) 62, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_855_855, &libs__handle_options__STATE_VARIABLE_Globals_860_860);
    }
    {
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_860_860, (MR_Integer) 75, &libs__handle_options__DebugLiveness_86);
    }
    libs__handle_options__succeeded = (libs__handle_options__DebugLiveness_86 >= (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_864_864 = (MR_String) "all";
        {
          libs__handle_options__succeeded = libs__handle_options__convert_dump_alias_2_p_0(libs__handle_options__V_864_864, &libs__handle_options__AllDumpOptions_87);
        }
      }
    if (libs__handle_options__succeeded)
      {
        MR_String libs__handle_options__DumpOptions0_88;
        MR_String libs__handle_options__DumpOptions1_89;
        MR_Word libs__handle_options__V_867_867;

        {
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_860_860, (MR_Integer) 154, &libs__handle_options__DumpOptions0_88);
        }
        {
          libs__handle_options__DumpOptions1_89 = mercury__string__f_43_43_2_f_0(libs__handle_options__DumpOptions0_88, libs__handle_options__AllDumpOptions_87);
        }
        {
          libs__handle_options__V_867_867 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_867_867, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_867_867, 1) = ((MR_Box) (libs__handle_options__DumpOptions1_89));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 154, libs__handle_options__V_867_867, libs__handle_options__STATE_VARIABLE_Globals_860_860, &libs__handle_options__STATE_VARIABLE_Globals_868_868);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_868_868 = libs__handle_options__STATE_VARIABLE_Globals_860_860;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 62, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_868_868, &libs__handle_options__STATE_VARIABLE_Globals_872_872);
    }
    {
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_872_872, (MR_Integer) 66, &libs__handle_options__DebugModesPredId_90);
    }
    libs__handle_options__succeeded = (libs__handle_options__DebugModesPredId_90 > (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 62, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_872_872, &libs__handle_options__STATE_VARIABLE_Globals_878_878);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_878_878 = libs__handle_options__STATE_VARIABLE_Globals_872_872;
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_878_878, (MR_Integer) 354, &libs__handle_options__DebugUnneededCodePredNames_91);
    }
    if ((libs__handle_options__DebugUnneededCodePredNames_91 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_883_883 = libs__handle_options__STATE_VARIABLE_Globals_878_878;
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 353, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_878_878, &libs__handle_options__STATE_VARIABLE_Globals_883_883);
        }
      }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 72, &libs__handle_options__DebugOptPredIdStrs_94);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_883_883, (MR_Integer) 73, &libs__handle_options__DebugOptPredNames_95);
    }
    {
      MR_String libs__handle_options__V_96_96;
      MR_Word libs__handle_options__V_97_97;

      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredIdStrs_94)) == (MR_mktag((MR_Integer) 1)));
      if (libs__handle_options__succeeded)
        {
          libs__handle_options__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_94, (MR_Integer) 0)));
          libs__handle_options__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredIdStrs_94, (MR_Integer) 1)));
        }
    }
    if (!(libs__handle_options__succeeded))
      {
        MR_String libs__handle_options__V_98_98;
        MR_Word libs__handle_options__V_99_99;

        libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DebugOptPredNames_95)) == (MR_mktag((MR_Integer) 1)));
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_95, (MR_Integer) 0)));
            libs__handle_options__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DebugOptPredNames_95, (MR_Integer) 1)));
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 70, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_883_883, &libs__handle_options__STATE_VARIABLE_Globals_889_889);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_889_889 = libs__handle_options__STATE_VARIABLE_Globals_883_883;
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_889_889, (MR_Integer) 81, &libs__handle_options__DebugIntermoduleAnalysis_100);
    }
    {
      analysis__enable_debug_messages_3_p_0(libs__handle_options__DebugIntermoduleAnalysis_100);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_889_889, (MR_Integer) 150, &libs__handle_options__DumpHLDSPredIds_101);
    }
    if ((libs__handle_options__DumpHLDSPredIds_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_901_901 = libs__handle_options__STATE_VARIABLE_Globals_889_889;
    else
      {
        MR_String libs__handle_options__DumpOptions2_104;
        MR_String libs__handle_options__DumpOptions3_105;
        MR_String libs__handle_options__DumpOptions_106;
        MR_Word libs__handle_options__V_900_900;

        {
          libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_889_889, (MR_Integer) 154, &libs__handle_options__DumpOptions2_104);
        }
        {
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions2_104, (MR_String) "M", (MR_String) "", &libs__handle_options__DumpOptions3_105);
        }
        {
          mercury__string__replace_all_4_p_0(libs__handle_options__DumpOptions3_105, (MR_String) "T", (MR_String) "", &libs__handle_options__DumpOptions_106);
        }
        {
          libs__handle_options__V_900_900 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_900_900, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_900_900, 1) = ((MR_Box) (libs__handle_options__DumpOptions_106));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 154, libs__handle_options__V_900_900, libs__handle_options__STATE_VARIABLE_Globals_889_889, &libs__handle_options__STATE_VARIABLE_Globals_901_901);
        }
      }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 80, (MR_Integer) 162, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_901_901, &libs__handle_options__STATE_VARIABLE_Globals_905_905);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 162, (MR_Integer) 160, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_905_905, &libs__handle_options__STATE_VARIABLE_Globals_910_910);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 161, (MR_Integer) 160, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_910_910, &libs__handle_options__STATE_VARIABLE_Globals_915_915);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 143, (MR_Integer) 142, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_915_915, &libs__handle_options__STATE_VARIABLE_Globals_920_920);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 218, &libs__handle_options__UseTrail_107);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 254, &libs__handle_options__HighLevelCode_108);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 220, &libs__handle_options__UseMinimalModelStackCopy_109);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_920_920, (MR_Integer) 221, &libs__handle_options__UseMinimalModelOwnStacks_110);
    }
    {
      mercury__bool__or_3_p_0(libs__handle_options__UseMinimalModelStackCopy_109, libs__handle_options__UseMinimalModelOwnStacks_110, &libs__handle_options__UseMinimalModel_111);
    }
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelOwnStacks_110 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[196]), libs__handle_options__STATE_VARIABLE_Specs_630_630, &libs__handle_options__STATE_VARIABLE_Specs_935_935);
        }
      }
    else
      {
        libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_111 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          {
            {
              libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[200]), libs__handle_options__STATE_VARIABLE_Specs_630_630, &libs__handle_options__STATE_VARIABLE_Specs_935_935);
            }
          }
        else
          {
            libs__handle_options__succeeded = (libs__handle_options__UseMinimalModel_111 == (MR_Integer) 1);
            if (libs__handle_options__succeeded)
              libs__handle_options__succeeded = (libs__handle_options__UseTrail_107 == (MR_Integer) 1);
            if (libs__handle_options__succeeded)
              {
                {
                  libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[203]), libs__handle_options__STATE_VARIABLE_Specs_630_630, &libs__handle_options__STATE_VARIABLE_Specs_935_935);
                }
              }
            else
              libs__handle_options__STATE_VARIABLE_Specs_935_935 = libs__handle_options__STATE_VARIABLE_Specs_630_630;
          }
      }
    libs__handle_options__V_958_958 = (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[4]);
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 246, libs__handle_options__V_958_958, libs__handle_options__STATE_VARIABLE_Globals_920_920, &libs__handle_options__STATE_VARIABLE_Globals_959_959);
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer libs__handle_options__ArgPackBits0_115;
          MR_Integer libs__handle_options__BitsPerWord_116;
          MR_Integer libs__handle_options__ArgPackBits_117;
          MR_Word libs__handle_options__V_1006_1006;

          {
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_959_959, (MR_Integer) 246, &libs__handle_options__ArgPackBits0_115);
          }
          {
            libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_959_959, (MR_Integer) 240, &libs__handle_options__BitsPerWord_116);
          }
          libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_115 < (MR_Integer) 0);
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__ArgPackBits_117 = libs__handle_options__BitsPerWord_116;
              libs__handle_options__STATE_VARIABLE_Specs_1004_1004 = libs__handle_options__STATE_VARIABLE_Specs_935_935;
            }
          else
            {
              libs__handle_options__succeeded = (libs__handle_options__ArgPackBits0_115 > libs__handle_options__BitsPerWord_116);
              if (libs__handle_options__succeeded)
                {
                  MR_Word libs__handle_options__ArgPackBitsSpec_118;
                  MR_Word libs__handle_options__V_974_974;
                  MR_Word libs__handle_options__V_975_975;
                  MR_Word libs__handle_options__V_977_977;
                  MR_Word libs__handle_options__V_980_980;
                  MR_Word libs__handle_options__V_983_983;
                  MR_Word libs__handle_options__V_986_986;
                  MR_Word libs__handle_options__V_989_989;
                  MR_Word libs__handle_options__V_992_992;
                  MR_Word libs__handle_options__V_995_995;
                  MR_Word libs__handle_options__V_996_996;

                  libs__handle_options__ArgPackBits_117 = libs__handle_options__BitsPerWord_116;
                  libs__handle_options__V_975_975 = (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226]);
                  {
                    libs__handle_options__V_996_996 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_996_996, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), libs__handle_options__V_996_996, 1) = ((MR_Box) (libs__handle_options__BitsPerWord_116));
                  }
                  {
                    libs__handle_options__V_995_995 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_995_995, 0) = ((MR_Box) (libs__handle_options__V_996_996));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_995_995, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[11])));
                  }
                  {
                    libs__handle_options__V_992_992 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_992_992, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_992_992, 1) = ((MR_Box) (libs__handle_options__V_995_995));
                  }
                  {
                    libs__handle_options__V_989_989 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_989_989, 0) = ((MR_Box) (libs__handle_options__V_975_975));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_989_989, 1) = ((MR_Box) (libs__handle_options__V_992_992));
                  }
                  {
                    libs__handle_options__V_986_986 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_986_986, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_986_986, 1) = ((MR_Box) (libs__handle_options__V_989_989));
                  }
                  {
                    libs__handle_options__V_983_983 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_983_983, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[229])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_983_983, 1) = ((MR_Box) (libs__handle_options__V_986_986));
                  }
                  {
                    libs__handle_options__V_980_980 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_980_980, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_980_980, 1) = ((MR_Box) (libs__handle_options__V_983_983));
                  }
                  {
                    libs__handle_options__V_977_977 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_977_977, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_977_977, 1) = ((MR_Box) (libs__handle_options__V_980_980));
                  }
                  {
                    libs__handle_options__V_974_974 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_974_974, 0) = ((MR_Box) (libs__handle_options__V_975_975));
                    MR_hl_field(MR_mktag(1), libs__handle_options__V_974_974, 1) = ((MR_Box) (libs__handle_options__V_977_977));
                  }
                  {
                    libs__handle_options__ArgPackBitsSpec_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[225])));
                    MR_hl_field(MR_mktag(1), libs__handle_options__ArgPackBitsSpec_118, 1) = ((MR_Box) (libs__handle_options__V_974_974));
                  }
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), libs__handle_options__ArgPackBitsSpec_118, libs__handle_options__STATE_VARIABLE_Specs_935_935, &libs__handle_options__STATE_VARIABLE_Specs_1004_1004);
                  }
                }
              else
                {
                  libs__handle_options__ArgPackBits_117 = libs__handle_options__ArgPackBits0_115;
                  libs__handle_options__STATE_VARIABLE_Specs_1004_1004 = libs__handle_options__STATE_VARIABLE_Specs_935_935;
                }
            }
          {
            libs__handle_options__V_1006_1006 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), libs__handle_options__V_1006_1006, 0) = ((MR_Box) (libs__handle_options__ArgPackBits_117));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_1006_1006, libs__handle_options__STATE_VARIABLE_Globals_959_959, &libs__handle_options__STATE_VARIABLE_Globals_1007_1007);
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_963_963;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 246, libs__handle_options__V_958_958, libs__handle_options__STATE_VARIABLE_Globals_959_959, &libs__handle_options__STATE_VARIABLE_Globals_963_963);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_963_963, &libs__handle_options__STATE_VARIABLE_Globals_1007_1007);
          }
          libs__handle_options__STATE_VARIABLE_Specs_1004_1004 = libs__handle_options__STATE_VARIABLE_Specs_935_935;
        }
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 224, (MR_Integer) 243, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1007_1007, &libs__handle_options__STATE_VARIABLE_Globals_1011_1011);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 254, (MR_Integer) 253, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1011_1011, &libs__handle_options__STATE_VARIABLE_Globals_1016_1016);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 243, (MR_Integer) 253, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1016_1016, &libs__handle_options__STATE_VARIABLE_Globals_1021_1021);
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_1025_1025 = libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1025_1025 = libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
        break;
      case (MR_Integer) 3:
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 294, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1021_1021, &libs__handle_options__STATE_VARIABLE_Globals_1025_1025);
          }
        }
        break;
      case (MR_Integer) 2:
        libs__handle_options__STATE_VARIABLE_Globals_1025_1025 = libs__handle_options__STATE_VARIABLE_Globals_1021_1021;
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
          libs__globals__set_option_4_p_0((MR_Integer) 433, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_1025_1025, &libs__handle_options__STATE_VARIABLE_Globals_1029_1029);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1029_1029 = libs__handle_options__STATE_VARIABLE_Globals_1025_1025;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 481, (MR_Integer) 551, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1029_1029, &libs__handle_options__STATE_VARIABLE_Globals_1034_1034);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 199, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1034_1034, &libs__handle_options__STATE_VARIABLE_Globals_1039_1039);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 199, (MR_Integer) 211, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1039_1039, &libs__handle_options__STATE_VARIABLE_Globals_1044_1044);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 208, (MR_Integer) 130, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1044_1044, &libs__handle_options__STATE_VARIABLE_Globals_1049_1049);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1049_1049, (MR_Integer) 130, &libs__handle_options__ProfOptimized_119);
    }
    switch (libs__handle_options__ProfOptimized_119) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 330, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1049_1049, &libs__handle_options__STATE_VARIABLE_Globals_1055_1055);
          }
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1055_1055 = libs__handle_options__STATE_VARIABLE_Globals_1049_1049;
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 197, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1055_1055, &libs__handle_options__STATE_VARIABLE_Globals_1060_1060);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 212, (MR_Integer) 197, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1060_1060, &libs__handle_options__STATE_VARIABLE_Globals_1065_1065);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 213, (MR_Integer) 197, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1065_1065, &libs__handle_options__STATE_VARIABLE_Globals_1070_1070);
    }
    {
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1070_1070, (MR_Integer) 214, &libs__handle_options__ExpComp_120);
    }
    libs__handle_options__succeeded = (strcmp(libs__handle_options__ExpComp_120, (MR_String) "") == 0);
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Globals_1075_1075 = libs__handle_options__STATE_VARIABLE_Globals_1070_1070;
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 330, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1070_1070, &libs__handle_options__STATE_VARIABLE_Globals_1075_1075);
        }
      }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 187, (MR_Integer) 186, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1075_1075, &libs__handle_options__STATE_VARIABLE_Globals_1080_1080);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 233, (MR_Integer) 235, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1080_1080, &libs__handle_options__STATE_VARIABLE_Globals_1085_1085);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 186, (MR_Integer) 262, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1085_1085, &libs__handle_options__STATE_VARIABLE_Globals_1090_1090);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 262, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1090_1090, &libs__handle_options__STATE_VARIABLE_Globals_1095_1095);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 313, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1095_1095, &libs__handle_options__STATE_VARIABLE_Globals_1100_1100);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 186, (MR_Integer) 128, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1100_1100, &libs__handle_options__STATE_VARIABLE_Globals_1105_1105);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 128, (MR_Integer) 124, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1105_1105, &libs__handle_options__STATE_VARIABLE_Globals_1110_1110);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 127, (MR_Integer) 124, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1110_1110, &libs__handle_options__STATE_VARIABLE_Globals_1115_1115);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1115_1115, (MR_Integer) 122, &libs__handle_options__TraceOptimized_121);
    }
    {
      libs__handle_options__TraceLevelIsNone_122 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
    }
    switch (libs__handle_options__TraceLevelIsNone_122) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word libs__handle_options__TraceTailRec_123;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1176_1176;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1180_1180;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1184_1184;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1188_1188;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1192_1192;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1196_1196;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1200_1200;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1204_1204;

          switch (libs__handle_options__TraceOptimized_121) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1124_1124;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1128_1128;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1132_1132;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1136_1136;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1140_1140;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1144_1144;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1148_1148;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1152_1152;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1156_1156;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1160_1160;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1164_1164;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1168_1168;
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1172_1172;

                {
                  libs__globals__set_option_4_p_0((MR_Integer) 330, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1115_1115, &libs__handle_options__STATE_VARIABLE_Globals_1124_1124);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 346, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1124_1124, &libs__handle_options__STATE_VARIABLE_Globals_1128_1128);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 348, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1128_1128, &libs__handle_options__STATE_VARIABLE_Globals_1132_1132);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1132_1132, &libs__handle_options__STATE_VARIABLE_Globals_1136_1136);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 356, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1136_1136, &libs__handle_options__STATE_VARIABLE_Globals_1140_1140);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 384, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1140_1140, &libs__handle_options__STATE_VARIABLE_Globals_1144_1144);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 344, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1144_1144, &libs__handle_options__STATE_VARIABLE_Globals_1148_1148);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 345, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1148_1148, &libs__handle_options__STATE_VARIABLE_Globals_1152_1152);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 361, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1152_1152, &libs__handle_options__STATE_VARIABLE_Globals_1156_1156);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1156_1156, &libs__handle_options__STATE_VARIABLE_Globals_1160_1160);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 366, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1160_1160, &libs__handle_options__STATE_VARIABLE_Globals_1164_1164);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 380, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1164_1164, &libs__handle_options__STATE_VARIABLE_Globals_1168_1168);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 393, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1168_1168, &libs__handle_options__STATE_VARIABLE_Globals_1172_1172);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 394, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1172_1172, &libs__handle_options__STATE_VARIABLE_Globals_1176_1176);
                }
              }
              break;
            case (MR_Integer) 1:
              libs__handle_options__STATE_VARIABLE_Globals_1176_1176 = libs__handle_options__STATE_VARIABLE_Globals_1115_1115;
              break;
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1176_1176, &libs__handle_options__STATE_VARIABLE_Globals_1180_1180);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 363, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1180_1180, &libs__handle_options__STATE_VARIABLE_Globals_1184_1184);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 382, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1184_1184, &libs__handle_options__STATE_VARIABLE_Globals_1188_1188);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1188_1188, &libs__handle_options__STATE_VARIABLE_Globals_1192_1192);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 266, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1192_1192, &libs__handle_options__STATE_VARIABLE_Globals_1196_1196);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1196_1196, &libs__handle_options__STATE_VARIABLE_Globals_1200_1200);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 318, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1200_1200, &libs__handle_options__STATE_VARIABLE_Globals_1204_1204);
          }
          {
            libs__handle_options__TraceTailRec_123 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(libs__handle_options__TraceLevel_32);
          }
          switch (libs__handle_options__TraceTailRec_123) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 131, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1204_1204, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
                }
              }
              break;
            case (MR_Integer) 1:
              libs__handle_options__STATE_VARIABLE_Globals_1208_1208 = libs__handle_options__STATE_VARIABLE_Globals_1204_1204;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 131, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1115_1115, &libs__handle_options__STATE_VARIABLE_Globals_1208_1208);
          }
        }
        break;
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 195, (MR_Integer) 265, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1208_1208, &libs__handle_options__STATE_VARIABLE_Globals_1213_1213);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1213_1213, (MR_Integer) 195, &libs__handle_options__ProfileDeep_124);
    }
    switch (libs__handle_options__ProfileDeep_124) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__STATE_VARIABLE_Specs_1225_1225 = libs__handle_options__STATE_VARIABLE_Specs_1004_1004;
          libs__handle_options__STATE_VARIABLE_Globals_1236_1236 = libs__handle_options__STATE_VARIABLE_Globals_1213_1213;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__LotsOfHOSpec_126;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1228_1228;

          libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 0);
          if (libs__handle_options__succeeded)
            libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
          if (libs__handle_options__succeeded)
            libs__handle_options__STATE_VARIABLE_Specs_1225_1225 = libs__handle_options__STATE_VARIABLE_Specs_1004_1004;
          else
            {
              {
                libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[205]), libs__handle_options__STATE_VARIABLE_Specs_1004_1004, &libs__handle_options__STATE_VARIABLE_Specs_1225_1225);
              }
            }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1213_1213, &libs__handle_options__STATE_VARIABLE_Globals_1228_1228);
          }
          {
            libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1228_1228, (MR_Integer) 210, &libs__handle_options__LotsOfHOSpec_126);
          }
          switch (libs__handle_options__LotsOfHOSpec_126) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__handle_options__STATE_VARIABLE_Globals_1236_1236 = libs__handle_options__STATE_VARIABLE_Globals_1228_1228;
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__handle_options__STATE_VARIABLE_Globals_1233_1233;

                {
                  libs__globals__set_option_4_p_0((MR_Integer) 348, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1228_1228, &libs__handle_options__STATE_VARIABLE_Globals_1233_1233);
                }
                {
                  libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[5]), libs__handle_options__STATE_VARIABLE_Globals_1233_1233, &libs__handle_options__STATE_VARIABLE_Globals_1236_1236);
                }
              }
              break;
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1236_1236, (MR_Integer) 212, &libs__handle_options__RecordTermSizesAsWords_128);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1236_1236, (MR_Integer) 213, &libs__handle_options__RecordTermSizesAsCells_129);
    }
    libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_128 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_129 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[207]), libs__handle_options__STATE_VARIABLE_Specs_1225_1225, &libs__handle_options__STATE_VARIABLE_Specs_1246_1246);
        }
        libs__handle_options__STATE_VARIABLE_Globals_1253_1253 = libs__handle_options__STATE_VARIABLE_Globals_1236_1236;
      }
    else
      {
        libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsWords_128 == (MR_Integer) 1);
        if (!(libs__handle_options__succeeded))
          libs__handle_options__succeeded = (libs__handle_options__RecordTermSizesAsCells_129 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          {
            MR_Word libs__handle_options__STATE_VARIABLE_Globals_1249_1249;

            {
              libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1236_1236, &libs__handle_options__STATE_VARIABLE_Globals_1249_1249);
            }
            {
              libs__globals__set_option_4_p_0((MR_Integer) 247, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1249_1249, &libs__handle_options__STATE_VARIABLE_Globals_1253_1253);
            }
            switch (libs__handle_options__HighLevelCode_108) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                libs__handle_options__STATE_VARIABLE_Specs_1246_1246 = libs__handle_options__STATE_VARIABLE_Specs_1225_1225;
                break;
              case (MR_Integer) 1:
                {
                  {
                    libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[209]), libs__handle_options__STATE_VARIABLE_Specs_1225_1225, &libs__handle_options__STATE_VARIABLE_Specs_1246_1246);
                  }
                }
                break;
            }
          }
        else
          {
            libs__handle_options__STATE_VARIABLE_Globals_1253_1253 = libs__handle_options__STATE_VARIABLE_Globals_1236_1236;
            libs__handle_options__STATE_VARIABLE_Specs_1246_1246 = libs__handle_options__STATE_VARIABLE_Specs_1225_1225;
          }
      }
    {
      MR_Word libs__handle_options__V_1265_1265;

      {
        libs__handle_options__V_1265_1265 = libs__trace_params__given_trace_level_is_none_1_f_0(libs__handle_options__TraceLevel_32);
      }
      libs__handle_options__succeeded = (libs__handle_options__V_1265_1265 == (MR_Integer) 1);
    }
    if (!(libs__handle_options__succeeded))
      {
        libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 0);
        if (libs__handle_options__succeeded)
          libs__handle_options__succeeded = (libs__handle_options__Target_27 == (MR_Integer) 0);
      }
    if (libs__handle_options__succeeded)
      libs__handle_options__STATE_VARIABLE_Specs_1272_1272 = libs__handle_options__STATE_VARIABLE_Specs_1246_1246;
    else
      {
        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[211]), libs__handle_options__STATE_VARIABLE_Specs_1246_1246, &libs__handle_options__STATE_VARIABLE_Specs_1272_1272);
        }
      }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 216, (MR_Integer) 487, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1253_1253, &libs__handle_options__STATE_VARIABLE_Globals_1276_1276);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 333, (MR_Integer) 362, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1276_1276, &libs__handle_options__STATE_VARIABLE_Globals_1281_1281);
    }
    switch (libs__handle_options__ProfileDeep_124) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 330, (MR_Integer) 362, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1281_1281, &libs__handle_options__STATE_VARIABLE_Globals_1286_1286);
          }
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1286_1286 = libs__handle_options__STATE_VARIABLE_Globals_1281_1281;
        break;
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 165, (MR_Integer) 384, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1286_1286, &libs__handle_options__STATE_VARIABLE_Globals_1291_1291);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 165, (MR_Integer) 344, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1291_1291, &libs__handle_options__STATE_VARIABLE_Globals_1296_1296);
    }
    {
      libs__handle_options__option_neg_implies_5_p_0((MR_Integer) 165, (MR_Integer) 345, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1296_1296, &libs__handle_options__STATE_VARIABLE_Globals_1301_1301);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 262, (MR_Integer) 265, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1301_1301, &libs__handle_options__STATE_VARIABLE_Globals_1306_1306);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 265, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1306_1306, &libs__handle_options__STATE_VARIABLE_Globals_1311_1311);
    }
    switch (libs__handle_options__GC_Method_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1315_1315;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1319_1319;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1323_1323;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1327_1327;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1331_1331;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1335_1335;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1339_1339;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1343_1343;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1347_1347;
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1351_1351;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 264, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1311_1311, &libs__handle_options__STATE_VARIABLE_Globals_1315_1315);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 267, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1315_1315, &libs__handle_options__STATE_VARIABLE_Globals_1319_1319);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 450, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1319_1319, &libs__handle_options__STATE_VARIABLE_Globals_1323_1323);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 470, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1323_1323, &libs__handle_options__STATE_VARIABLE_Globals_1327_1327);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 318, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1327_1327, &libs__handle_options__STATE_VARIABLE_Globals_1331_1331);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 448, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1331_1331, &libs__handle_options__STATE_VARIABLE_Globals_1335_1335);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 302, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1335_1335, &libs__handle_options__STATE_VARIABLE_Globals_1339_1339);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 303, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1339_1339, &libs__handle_options__STATE_VARIABLE_Globals_1343_1343);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1343_1343, &libs__handle_options__STATE_VARIABLE_Globals_1347_1347);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 355, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1347_1347, &libs__handle_options__STATE_VARIABLE_Globals_1351_1351);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 356, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1351_1351, &libs__handle_options__STATE_VARIABLE_Globals_1355_1355);
          }
        }
        break;
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
        break;
      case (MR_Integer) 2:
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
        break;
      case (MR_Integer) 3:
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
        break;
      case (MR_Integer) 4:
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1355_1355 = libs__handle_options__STATE_VARIABLE_Globals_1311_1311;
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1355_1355, (MR_Integer) 260, &libs__handle_options__PutNondetEnvOnHeap_133);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 263, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1355_1355, &libs__handle_options__STATE_VARIABLE_Globals_1377_1377);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 263, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1377_1377, &libs__handle_options__STATE_VARIABLE_Globals_1382_1382);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 265, (MR_Integer) 468, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1382_1382, &libs__handle_options__STATE_VARIABLE_Globals_1387_1387);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 468, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1387_1387, &libs__handle_options__STATE_VARIABLE_Globals_1392_1392);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 263, (MR_Integer) 466, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1392_1392, &libs__handle_options__STATE_VARIABLE_Globals_1397_1397);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 384, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1397_1397, &libs__handle_options__STATE_VARIABLE_Globals_1402_1402);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 267, (MR_Integer) 344, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1402_1402, &libs__handle_options__STATE_VARIABLE_Globals_1407_1407);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 218, (MR_Integer) 448, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1407_1407, &libs__handle_options__STATE_VARIABLE_Globals_1412_1412);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 228, (MR_Integer) 448, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1412_1412, &libs__handle_options__STATE_VARIABLE_Globals_1417_1417);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 220, (MR_Integer) 450, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1417_1417, &libs__handle_options__STATE_VARIABLE_Globals_1422_1422);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1422_1422, (MR_Integer) 280, &libs__handle_options__DisablePneg_135);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1422_1422, (MR_Integer) 281, &libs__handle_options__DisableCut_136);
    }
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__DisablePneg_135 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 282, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1422_1422, &libs__handle_options__STATE_VARIABLE_Globals_1428_1428);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1428_1428 = libs__handle_options__STATE_VARIABLE_Globals_1422_1422;
    libs__handle_options__succeeded = (libs__handle_options__UseMinimalModelStackCopy_109 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      libs__handle_options__succeeded = (libs__handle_options__DisableCut_136 == (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 283, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_6[3]), libs__handle_options__STATE_VARIABLE_Globals_1428_1428, &libs__handle_options__STATE_VARIABLE_Globals_1432_1432);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1432_1432 = libs__handle_options__STATE_VARIABLE_Globals_1428_1428;
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 149, &libs__handle_options__DumpHLDSStages_137);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 148, &libs__handle_options__DumpTraceStages_138);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 299, &libs__handle_options__ParallelLiveness_139);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1432_1432, (MR_Integer) 300, &libs__handle_options__ParallelCodeGen_140);
    }
    {
      MR_String libs__handle_options__V_141_141;
      MR_Word libs__handle_options__V_142_142;

      libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpHLDSStages_137)) == (MR_mktag((MR_Integer) 1)));
      if (libs__handle_options__succeeded)
        {
          libs__handle_options__V_141_141 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_137, (MR_Integer) 0)));
          libs__handle_options__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpHLDSStages_137, (MR_Integer) 1)));
        }
    }
    if (!(libs__handle_options__succeeded))
      {
        {
          MR_String libs__handle_options__V_143_143;
          MR_Word libs__handle_options__V_144_144;

          libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__DumpTraceStages_138)) == (MR_mktag((MR_Integer) 1)));
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__V_143_143 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_138, (MR_Integer) 0)));
              libs__handle_options__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__DumpTraceStages_138, (MR_Integer) 1)));
            }
        }
        if (!(libs__handle_options__succeeded))
          {
            libs__handle_options__succeeded = (libs__handle_options__Statistics_85 == (MR_Integer) 1);
            if (!(libs__handle_options__succeeded))
              {
                libs__handle_options__succeeded = (libs__handle_options__ParallelLiveness_139 == (MR_Integer) 1);
                if (!(libs__handle_options__succeeded))
                  libs__handle_options__succeeded = (libs__handle_options__ParallelCodeGen_140 == (MR_Integer) 1);
              }
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 298, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1432_1432, &libs__handle_options__STATE_VARIABLE_Globals_1440_1440);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1440_1440 = libs__handle_options__STATE_VARIABLE_Globals_1432_1432;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 355, (MR_Integer) 356, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1440_1440, &libs__handle_options__STATE_VARIABLE_Globals_1445_1445);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 344, (MR_Integer) 345, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1445_1445, &libs__handle_options__STATE_VARIABLE_Globals_1450_1450);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 347, (MR_Integer) 322, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1450_1450, &libs__handle_options__STATE_VARIABLE_Globals_1455_1455);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 347, (MR_Integer) 346, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1455_1455, &libs__handle_options__STATE_VARIABLE_Globals_1460_1460);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 357, (MR_Integer) 363, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1460_1460, &libs__handle_options__STATE_VARIABLE_Globals_1465_1465);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 357, (MR_Integer) 342, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1465_1465, &libs__handle_options__STATE_VARIABLE_Globals_1470_1470);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 88, (MR_Integer) 346, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1470_1470, &libs__handle_options__STATE_VARIABLE_Globals_1475_1475);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 389, (MR_Integer) 390, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1475_1475, &libs__handle_options__STATE_VARIABLE_Globals_1480_1480);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 95, (MR_Integer) 94, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1480_1480, &libs__handle_options__STATE_VARIABLE_Globals_1485_1485);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 147, (MR_Integer) 94, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1485_1485, &libs__handle_options__STATE_VARIABLE_Globals_1490_1490);
    }
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 92, (MR_Integer) 23, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1490_1490, &libs__handle_options__STATE_VARIABLE_Globals_1495_1495);
    }
    {
      libs__globals__lookup_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1495_1495, (MR_Integer) 653, &libs__handle_options__TargetArch_145);
    }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1495_1495, (MR_Integer) 542, &libs__handle_options__MaybeStdLibDir_146);
    }
    if ((libs__handle_options__MaybeStdLibDir_146 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_1510_1510 = libs__handle_options__STATE_VARIABLE_Globals_1495_1495;
    else
      {
        MR_String libs__handle_options__StdLibDir_147 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeStdLibDir_146, (MR_Integer) 0)));
        MR_Word libs__handle_options__OptionTable2_148;
        MR_Word libs__handle_options__OptionTable_149;
        MR_Word libs__handle_options__LinkLibDirs0_150;
        MR_Word libs__handle_options__Rpath0_151;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1499_1499;
        MR_Word libs__handle_options__V_1502_1502;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1503_1503;
        MR_Word libs__handle_options__V_1504_1504;
        MR_String libs__handle_options__V_1505_1505;
        MR_Word libs__handle_options__V_1509_1509;
        MR_Word libs__handle_options__V_1511_1511;
        MR_String libs__handle_options__V_1512_1512;

        {
          libs__globals__get_options_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1495_1495, &libs__handle_options__OptionTable2_148);
        }
        {
          libs__options__option_table_add_mercury_library_directory_3_p_0(libs__handle_options__StdLibDir_147, libs__handle_options__OptionTable2_148, &libs__handle_options__OptionTable_149);
        }
        {
          libs__globals__set_options_3_p_0(libs__handle_options__OptionTable_149, libs__handle_options__STATE_VARIABLE_Globals_1495_1495, &libs__handle_options__STATE_VARIABLE_Globals_1499_1499);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1499_1499, (MR_Integer) 532, &libs__handle_options__LinkLibDirs0_150);
        }
        {
          libs__handle_options__V_1505_1505 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_147, (MR_String) "lib");
        }
        {
          libs__handle_options__V_1504_1504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1504_1504, 0) = ((MR_Box) (libs__handle_options__V_1505_1505));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1504_1504, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs0_150));
        }
        {
          libs__handle_options__V_1502_1502 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1502_1502, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1502_1502, 1) = ((MR_Box) (libs__handle_options__V_1504_1504));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1502_1502, libs__handle_options__STATE_VARIABLE_Globals_1499_1499, &libs__handle_options__STATE_VARIABLE_Globals_1503_1503);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1503_1503, (MR_Integer) 533, &libs__handle_options__Rpath0_151);
        }
        {
          libs__handle_options__V_1512_1512 = mercury__dir__f_slash_2_f_0(libs__handle_options__StdLibDir_147, (MR_String) "lib");
        }
        {
          libs__handle_options__V_1511_1511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1511_1511, 0) = ((MR_Box) (libs__handle_options__V_1512_1512));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1511_1511, 1) = ((MR_Box) (libs__handle_options__Rpath0_151));
        }
        {
          libs__handle_options__V_1509_1509 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1509_1509, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1509_1509, 1) = ((MR_Box) (libs__handle_options__V_1511_1511));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 533, libs__handle_options__V_1509_1509, libs__handle_options__STATE_VARIABLE_Globals_1503_1503, &libs__handle_options__STATE_VARIABLE_Globals_1510_1510);
        }
      }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 621, &libs__handle_options__MaybeConfDir_152);
    }
    if ((libs__handle_options__MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_1518_1518 = libs__handle_options__STATE_VARIABLE_Globals_1510_1510;
    else
      {
        MR_String libs__handle_options__ConfDir_153 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_152, (MR_Integer) 0)));
        MR_Word libs__handle_options__CIncludeDirs0_154;
        MR_Word libs__handle_options__V_1517_1517;
        MR_Word libs__handle_options__V_1519_1519;
        MR_String libs__handle_options__V_1520_1520;

        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1510_1510, (MR_Integer) 485, &libs__handle_options__CIncludeDirs0_154);
        }
        {
          libs__handle_options__V_1520_1520 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir_153, (MR_String) "conf");
        }
        {
          libs__handle_options__V_1519_1519 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1519_1519, 0) = ((MR_Box) (libs__handle_options__V_1520_1520));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1519_1519, 1) = ((MR_Box) (libs__handle_options__CIncludeDirs0_154));
        }
        {
          libs__handle_options__V_1517_1517 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1517_1517, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1517_1517, 1) = ((MR_Box) (libs__handle_options__V_1519_1519));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 485, libs__handle_options__V_1517_1517, libs__handle_options__STATE_VARIABLE_Globals_1510_1510, &libs__handle_options__STATE_VARIABLE_Globals_1518_1518);
        }
      }
    {
      libs__globals__lookup_maybe_string_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1518_1518, (MR_Integer) 632, &libs__handle_options__ConfigFile_155);
    }
    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__ConfigFile_155)) == (MR_mktag((MR_Integer) 1)));
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__V_1523_1523 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__ConfigFile_155, (MR_Integer) 0)));
        libs__handle_options__succeeded = (strcmp(libs__handle_options__V_1523_1523, (MR_String) "") == 0);
      }
    if (libs__handle_options__succeeded)
      if ((libs__handle_options__MaybeConfDir_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            libs__globals__set_option_4_p_0((MR_Integer) 632, (MR_Word) MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232]), libs__handle_options__STATE_VARIABLE_Globals_1518_1518, &libs__handle_options__STATE_VARIABLE_Globals_1530_1530);
          }
        }
      else
        {
          MR_String libs__handle_options__ConfDir1_156 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__handle_options__MaybeConfDir_152, (MR_Integer) 0)));
          MR_Word libs__handle_options__V_1529_1529;
          MR_Word libs__handle_options__V_1531_1531;
          MR_String libs__handle_options__V_1532_1532;
          MR_String libs__handle_options__V_1533_1533;

          {
            libs__handle_options__V_1533_1533 = mercury__dir__f_slash_2_f_0(libs__handle_options__ConfDir1_156, (MR_String) "conf");
          }
          {
            libs__handle_options__V_1532_1532 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1533_1533, (MR_String) "Mercury.config");
          }
          {
            libs__handle_options__V_1531_1531 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1531_1531, 0) = ((MR_Box) (libs__handle_options__V_1532_1532));
          }
          {
            libs__handle_options__V_1529_1529 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1529_1529, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1529_1529, 1) = ((MR_Box) (libs__handle_options__V_1531_1531));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 632, libs__handle_options__V_1529_1529, libs__handle_options__STATE_VARIABLE_Globals_1518_1518, &libs__handle_options__STATE_VARIABLE_Globals_1530_1530);
          }
        }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1530_1530 = libs__handle_options__STATE_VARIABLE_Globals_1518_1518;
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1530_1530, (MR_Integer) 536, &libs__handle_options__MercuryLibDirs_157);
    }
    {
      libs__compute_grade__grade_directory_component_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1530_1530, &libs__handle_options__GradeString_158);
    }
    if ((libs__handle_options__MercuryLibDirs_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__handle_options__STATE_VARIABLE_Globals_1587_1587 = libs__handle_options__STATE_VARIABLE_Globals_1530_1530;
    else
      {
        MR_Word libs__handle_options__TypeCtorInfo_1752_1752 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        MR_Word libs__handle_options__ExtraLinkLibDirs_161;
        MR_Word libs__handle_options__LinkLibDirs1_163;
        MR_Word libs__handle_options__Rpath_164;
        MR_Word libs__handle_options__ExtraIncludeDirs_165;
        MR_Word libs__handle_options__CIncludeDirs_166;
        MR_Word libs__handle_options__ErlangIncludeDirs_167;
        MR_Word libs__handle_options__ExtraIntermodDirs_168;
        MR_Word libs__handle_options__IntermodDirs0_169;
        MR_Word libs__handle_options__ExtraInitDirs_170;
        MR_Word libs__handle_options__InitDirs1_171;
        MR_Word libs__handle_options__V_1537_1537;
        MR_Word libs__handle_options__V_1544_1544;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1545_1545;
        MR_Word libs__handle_options__V_1546_1546;
        MR_Word libs__handle_options__V_1549_1549;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1550_1550;
        MR_Word libs__handle_options__V_1551_1551;
        MR_Word libs__handle_options__V_1552_1552;
        MR_Word libs__handle_options__V_1561_1561;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1562_1562;
        MR_Word libs__handle_options__V_1563_1563;
        MR_Word libs__handle_options__V_1566_1566;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1567_1567;
        MR_Word libs__handle_options__V_1568_1568;
        MR_Word libs__handle_options__V_1569_1569;
        MR_Word libs__handle_options__V_1576_1576;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1577_1577;
        MR_Word libs__handle_options__V_1578_1578;
        MR_Word libs__handle_options__V_1579_1579;
        MR_Word libs__handle_options__V_1586_1586;
        MR_Word libs__handle_options__V_1588_1588;

        {
          libs__handle_options__V_1537_1537 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1537_1537, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
        }
        {
          libs__handle_options__ExtraLinkLibDirs_161 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__V_1537_1537, libs__handle_options__MercuryLibDirs_157);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1530_1530, (MR_Integer) 532, &libs__handle_options__LinkLibDirs1_163);
        }
        {
          libs__handle_options__V_1546_1546 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__LinkLibDirs1_163, libs__handle_options__ExtraLinkLibDirs_161);
        }
        {
          libs__handle_options__V_1544_1544 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1544_1544, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1544_1544, 1) = ((MR_Box) (libs__handle_options__V_1546_1546));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1544_1544, libs__handle_options__STATE_VARIABLE_Globals_1530_1530, &libs__handle_options__STATE_VARIABLE_Globals_1545_1545);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1545_1545, (MR_Integer) 533, &libs__handle_options__Rpath_164);
        }
        {
          libs__handle_options__V_1551_1551 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__Rpath_164, libs__handle_options__ExtraLinkLibDirs_161);
        }
        {
          libs__handle_options__V_1549_1549 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1549_1549, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1549_1549, 1) = ((MR_Box) (libs__handle_options__V_1551_1551));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 533, libs__handle_options__V_1549_1549, libs__handle_options__STATE_VARIABLE_Globals_1545_1545, &libs__handle_options__STATE_VARIABLE_Globals_1550_1550);
        }
        {
          libs__handle_options__V_1552_1552 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_2));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1552_1552, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
        }
        {
          libs__handle_options__ExtraIncludeDirs_165 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__V_1552_1552, libs__handle_options__MercuryLibDirs_157);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1550_1550, (MR_Integer) 485, &libs__handle_options__CIncludeDirs_166);
        }
        {
          libs__handle_options__V_1563_1563 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__ExtraIncludeDirs_165, libs__handle_options__CIncludeDirs_166);
        }
        {
          libs__handle_options__V_1561_1561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1561_1561, 1) = ((MR_Box) (libs__handle_options__V_1563_1563));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 485, libs__handle_options__V_1561_1561, libs__handle_options__STATE_VARIABLE_Globals_1550_1550, &libs__handle_options__STATE_VARIABLE_Globals_1562_1562);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1562_1562, (MR_Integer) 523, &libs__handle_options__ErlangIncludeDirs_167);
        }
        {
          libs__handle_options__V_1568_1568 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__ExtraIncludeDirs_165, libs__handle_options__ErlangIncludeDirs_167);
        }
        {
          libs__handle_options__V_1566_1566 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1566_1566, 1) = ((MR_Box) (libs__handle_options__V_1568_1568));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 523, libs__handle_options__V_1566_1566, libs__handle_options__STATE_VARIABLE_Globals_1562_1562, &libs__handle_options__STATE_VARIABLE_Globals_1567_1567);
        }
        {
          libs__handle_options__V_1569_1569 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_3));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1569_1569, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
        }
        {
          libs__handle_options__ExtraIntermodDirs_168 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__V_1569_1569, libs__handle_options__MercuryLibDirs_157);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1567_1567, (MR_Integer) 637, &libs__handle_options__IntermodDirs0_169);
        }
        {
          libs__handle_options__V_1578_1578 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__ExtraIntermodDirs_168, libs__handle_options__IntermodDirs0_169);
        }
        {
          libs__handle_options__V_1576_1576 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1576_1576, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1576_1576, 1) = ((MR_Box) (libs__handle_options__V_1578_1578));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_1576_1576, libs__handle_options__STATE_VARIABLE_Globals_1567_1567, &libs__handle_options__STATE_VARIABLE_Globals_1577_1577);
        }
        {
          libs__handle_options__V_1579_1579 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_4));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), libs__handle_options__V_1579_1579, 3) = ((MR_Box) (libs__handle_options__GradeString_158));
        }
        {
          libs__handle_options__ExtraInitDirs_170 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__V_1579_1579, libs__handle_options__MercuryLibDirs_157);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1577_1577, (MR_Integer) 544, &libs__handle_options__InitDirs1_171);
        }
        {
          libs__handle_options__V_1588_1588 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1752_1752, libs__handle_options__InitDirs1_171, libs__handle_options__ExtraInitDirs_170);
        }
        {
          libs__handle_options__V_1586_1586 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1586_1586, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1586_1586, 1) = ((MR_Box) (libs__handle_options__V_1588_1588));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 544, libs__handle_options__V_1586_1586, libs__handle_options__STATE_VARIABLE_Globals_1577_1577, &libs__handle_options__STATE_VARIABLE_Globals_1587_1587);
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1587_1587, (MR_Integer) 638, &libs__handle_options__UseSearchDirs_172);
    }
    switch (libs__handle_options__UseSearchDirs_172) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__STATE_VARIABLE_Globals_1594_1594 = libs__handle_options__STATE_VARIABLE_Globals_1587_1587;
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__IntermodDirs1_173;
          MR_Word libs__handle_options__SearchDirs_174;
          MR_Word libs__handle_options__V_1593_1593;
          MR_Word libs__handle_options__V_1595_1595;

          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1587_1587, (MR_Integer) 637, &libs__handle_options__IntermodDirs1_173);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1587_1587, (MR_Integer) 636, &libs__handle_options__SearchDirs_174);
          }
          {
            libs__handle_options__V_1595_1595 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__IntermodDirs1_173, libs__handle_options__SearchDirs_174);
          }
          {
            libs__handle_options__V_1593_1593 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1593_1593, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1593_1593, 1) = ((MR_Box) (libs__handle_options__V_1595_1595));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_1593_1593, libs__handle_options__STATE_VARIABLE_Globals_1587_1587, &libs__handle_options__STATE_VARIABLE_Globals_1594_1594);
          }
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1594_1594, (MR_Integer) 635, &libs__handle_options__UseGradeSubdirs_175);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1594_1594, (MR_Integer) 538, &libs__handle_options__SearchLibFilesDirs_176);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1594_1594, (MR_Integer) 637, &libs__handle_options__IntermodDirs2_177);
    }
    {
      libs__handle_options__ToGradeSubdir_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_5));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 3) = ((MR_Box) (libs__handle_options__TargetArch_145));
      MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeSubdir_178, 4) = ((MR_Box) (libs__handle_options__GradeString_158));
    }
    switch (libs__handle_options__UseGradeSubdirs_175) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word libs__handle_options__TypeCtorInfo_1761_1761;
          MR_Word libs__handle_options__IntermodDirs3_182;
          MR_Word libs__handle_options__LinkLibDirs2_183;
          MR_Word libs__handle_options__InitDirs2_184;
          MR_Word libs__handle_options__V_1614_1614;

          {
            libs__handle_options__IntermodDirs3_182 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__IntermodDirs2_177);
          }
          {
            libs__handle_options__V_1614_1614 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1614_1614, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_1614_1614, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_182));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_1614_1614, libs__handle_options__STATE_VARIABLE_Globals_1594_1594, &libs__handle_options__STATE_VARIABLE_Globals_1615_1615);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 532, &libs__handle_options__LinkLibDirs2_183);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 544, &libs__handle_options__InitDirs2_184);
          }
          libs__handle_options__TypeCtorInfo_1761_1761 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            libs__handle_options__LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1761_1761, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__LinkLibDirs2_183);
          }
          {
            libs__handle_options__InitDirs_190 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1761_1761, libs__handle_options__SearchLibFilesDirs_176, libs__handle_options__InitDirs2_184);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__handle_options__TypeCtorInfo_1754_1754;
          MR_Word libs__handle_options__TypeCtorInfo_1760_1760;
          MR_String libs__handle_options__GradeSubdir_180;
          MR_Word libs__handle_options__SearchLibFilesGradeSubdirs_181;
          MR_Word libs__handle_options__ToGradeLibDir_185;
          MR_Word libs__handle_options__SearchGradeLibDirs_186;
          MR_Word libs__handle_options__ToGradeInitDir_188;
          MR_Word libs__handle_options__SearchGradeInitDirs_189;
          MR_String libs__handle_options__V_1604_1604;
          MR_Word libs__handle_options__V_1606_1606;
          MR_Word libs__handle_options__V_1608_1608;
          MR_Word libs__handle_options__V_1609_1609;
          MR_Word libs__handle_options__V_1610_1610;
          MR_Word libs__handle_options__V_1611_1611;
          MR_String libs__handle_options__V_1612_1612;
          MR_Word libs__handle_options__IntermodDirs3_6301;
          MR_Word libs__handle_options__LinkLibDirs2_6302;
          MR_Word libs__handle_options__InitDirs2_6303;
          MR_Word libs__handle_options__V_6304_6304;

          {
            libs__handle_options__V_1604_1604 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", libs__handle_options__GradeString_158);
          }
          {
            libs__handle_options__GradeSubdir_180 = mercury__dir__f_slash_2_f_0(libs__handle_options__V_1604_1604, libs__handle_options__TargetArch_145);
          }
          libs__handle_options__TypeCtorInfo_1754_1754 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            libs__handle_options__SearchLibFilesGradeSubdirs_181 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__ToGradeSubdir_178, libs__handle_options__SearchLibFilesDirs_176);
          }
          {
            libs__handle_options__V_1606_1606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1606_1606, 0) = ((MR_Box) (libs__handle_options__GradeSubdir_180));
            MR_hl_field(MR_mktag(1), libs__handle_options__V_1606_1606, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            libs__handle_options__V_1612_1612 = mercury__dir__this_directory_0_f_0();
          }
          {
            libs__handle_options__V_1611_1611 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[4]));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_6));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1611_1611, 3) = ((MR_Box) (libs__handle_options__V_1612_1612));
          }
          {
            libs__handle_options__V_1610_1610 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 0) = ((MR_Box) (&libs__handle_options_scalar_common_2[5]));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_7));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__V_1610_1610, 3) = ((MR_Box) (libs__handle_options__V_1611_1611));
          }
          {
            libs__handle_options__V_1609_1609 = mercury__list__filter_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__V_1610_1610, libs__handle_options__IntermodDirs2_177);
          }
          {
            libs__handle_options__V_1608_1608 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__SearchLibFilesGradeSubdirs_181, libs__handle_options__V_1609_1609);
          }
          {
            libs__handle_options__IntermodDirs3_6301 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1754_1754, libs__handle_options__V_1606_1606, libs__handle_options__V_1608_1608);
          }
          {
            libs__handle_options__V_6304_6304 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6304_6304, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), libs__handle_options__V_6304_6304, 1) = ((MR_Box) (libs__handle_options__IntermodDirs3_6301));
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 637, libs__handle_options__V_6304_6304, libs__handle_options__STATE_VARIABLE_Globals_1594_1594, &libs__handle_options__STATE_VARIABLE_Globals_1615_1615);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 532, &libs__handle_options__LinkLibDirs2_6302);
          }
          {
            libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1615_1615, (MR_Integer) 544, &libs__handle_options__InitDirs2_6303);
          }
          {
            libs__handle_options__ToGradeLibDir_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_8));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeLibDir_185, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
          }
          libs__handle_options__TypeCtorInfo_1760_1760 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            libs__handle_options__SearchGradeLibDirs_186 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1760_1760, libs__handle_options__TypeCtorInfo_1760_1760, libs__handle_options__ToGradeLibDir_185, libs__handle_options__SearchLibFilesDirs_176);
          }
          {
            libs__handle_options__LinkLibDirs_187 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1760_1760, libs__handle_options__SearchGradeLibDirs_186, libs__handle_options__LinkLibDirs2_6302);
          }
          {
            libs__handle_options__ToGradeInitDir_188 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_9));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToGradeInitDir_188, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
          }
          {
            libs__handle_options__SearchGradeInitDirs_189 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1760_1760, libs__handle_options__TypeCtorInfo_1760_1760, libs__handle_options__ToGradeInitDir_188, libs__handle_options__SearchLibFilesDirs_176);
          }
          {
            libs__handle_options__InitDirs_190 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1760_1760, libs__handle_options__SearchGradeInitDirs_189, libs__handle_options__InitDirs2_6303);
          }
        }
        break;
    }
    {
      libs__handle_options__V_1631_1631 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1631_1631, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1631_1631, 1) = ((MR_Box) (libs__handle_options__LinkLibDirs_187));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 532, libs__handle_options__V_1631_1631, libs__handle_options__STATE_VARIABLE_Globals_1615_1615, &libs__handle_options__STATE_VARIABLE_Globals_1632_1632);
    }
    {
      libs__handle_options__V_1634_1634 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1634_1634, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), libs__handle_options__V_1634_1634, 1) = ((MR_Box) (libs__handle_options__InitDirs_190));
    }
    {
      libs__globals__set_option_4_p_0((MR_Integer) 544, libs__handle_options__V_1634_1634, libs__handle_options__STATE_VARIABLE_Globals_1632_1632, &libs__handle_options__STATE_VARIABLE_Globals_1635_1635);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1635_1635, (MR_Integer) 634, &libs__handle_options__UseSubdirs_191);
    }
    switch (libs__handle_options__UseGradeSubdirs_175) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__succeeded = (libs__handle_options__UseSubdirs_191 == (MR_Integer) 1);
          if (libs__handle_options__succeeded)
            {
              libs__handle_options__ToMihsSubdir_192 = (MR_Word) &libs__handle_options_scalar_common_3[9];
              libs__handle_options__ToHrlsSubdir_193 = (MR_Word) &libs__handle_options_scalar_common_3[10];
              libs__handle_options__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__handle_options__ToMihsSubdir_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_12));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
          }
          {
            libs__handle_options__ToHrlsSubdir_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 1) = ((MR_Box) (libs__handle_options__convert_options_to_globals_24_p_0_13));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, 3) = ((MR_Box) (libs__handle_options__ToGradeSubdir_178));
          }
          libs__handle_options__succeeded = MR_TRUE;
        }
        break;
    }
    if (libs__handle_options__succeeded)
      {
        MR_Word libs__handle_options__TypeCtorInfo_1762_1762;
        MR_Word libs__handle_options__CIncludeDirs1_194;
        MR_String libs__handle_options__MihsSubdir_195;
        MR_Word libs__handle_options__SearchLibMihsSubdirs_196;
        MR_Word libs__handle_options__SubdirCIncludeDirs_197;
        MR_Word libs__handle_options__ErlangIncludeDirs1_198;
        MR_String libs__handle_options__HrlsSubdir_199;
        MR_Word libs__handle_options__SubdirErlangIncludeDirs_200;
        MR_String libs__handle_options__V_1660_1660;
        MR_String libs__handle_options__V_1661_1661;
        MR_Word libs__handle_options__V_1662_1662;
        MR_Word libs__handle_options__V_1663_1663;
        MR_Word libs__handle_options__V_1665_1665;
        MR_Word libs__handle_options__STATE_VARIABLE_Globals_1666_1666;
        MR_String libs__handle_options__V_1668_1668;
        MR_Word libs__handle_options__V_1670_1670;
        MR_Box MR_CALL (* libs__handle_options__func_11)(MR_Box, MR_Box);
        MR_Box libs__handle_options__conv12_MihsSubdir_195;
        MR_Box MR_CALL (* libs__handle_options__func_13)(MR_Box, MR_Box);
        MR_Box libs__handle_options__conv14_HrlsSubdir_199;

        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1635_1635, (MR_Integer) 485, &libs__handle_options__CIncludeDirs1_194);
        }
        {
          libs__handle_options__V_1660_1660 = mercury__dir__this_directory_0_f_0();
        }
        libs__handle_options__func_11 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToMihsSubdir_192, (MR_Integer) 1)));
        {
          libs__handle_options__conv12_MihsSubdir_195 = libs__handle_options__func_11(((MR_Box) libs__handle_options__ToMihsSubdir_192), ((MR_Box) (libs__handle_options__V_1660_1660)));
        }
        libs__handle_options__MihsSubdir_195 = ((MR_String) libs__handle_options__conv12_MihsSubdir_195);
        libs__handle_options__TypeCtorInfo_1762_1762 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        {
          libs__handle_options__SearchLibMihsSubdirs_196 = mercury__list__map_2_f_0(libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__ToMihsSubdir_192, libs__handle_options__SearchLibFilesDirs_176);
        }
        {
          libs__handle_options__V_1661_1661 = mercury__dir__this_directory_0_f_0();
        }
        {
          libs__handle_options__V_1663_1663 = mercury__list__f_43_43_2_f_0(libs__handle_options__TypeCtorInfo_1762_1762, libs__handle_options__SearchLibMihsSubdirs_196, libs__handle_options__CIncludeDirs1_194);
        }
        {
          libs__handle_options__V_1662_1662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1662_1662, 0) = ((MR_Box) (libs__handle_options__MihsSubdir_195));
          MR_hl_field(MR_mktag(1), libs__handle_options__V_1662_1662, 1) = ((MR_Box) (libs__handle_options__V_1663_1663));
        }
        {
          libs__handle_options__SubdirCIncludeDirs_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_197, 0) = ((MR_Box) (libs__handle_options__V_1661_1661));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirCIncludeDirs_197, 1) = ((MR_Box) (libs__handle_options__V_1662_1662));
        }
        {
          libs__handle_options__V_1665_1665 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1665_1665, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1665_1665, 1) = ((MR_Box) (libs__handle_options__SubdirCIncludeDirs_197));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 485, libs__handle_options__V_1665_1665, libs__handle_options__STATE_VARIABLE_Globals_1635_1635, &libs__handle_options__STATE_VARIABLE_Globals_1666_1666);
        }
        {
          libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1666_1666, (MR_Integer) 523, &libs__handle_options__ErlangIncludeDirs1_198);
        }
        {
          libs__handle_options__V_1668_1668 = mercury__dir__this_directory_0_f_0();
        }
        libs__handle_options__func_13 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), libs__handle_options__ToHrlsSubdir_193, (MR_Integer) 1)));
        {
          libs__handle_options__conv14_HrlsSubdir_199 = libs__handle_options__func_13(((MR_Box) libs__handle_options__ToHrlsSubdir_193), ((MR_Box) (libs__handle_options__V_1668_1668)));
        }
        libs__handle_options__HrlsSubdir_199 = ((MR_String) libs__handle_options__conv14_HrlsSubdir_199);
        {
          libs__handle_options__SubdirErlangIncludeDirs_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_200, 0) = ((MR_Box) (libs__handle_options__HrlsSubdir_199));
          MR_hl_field(MR_mktag(1), libs__handle_options__SubdirErlangIncludeDirs_200, 1) = ((MR_Box) (libs__handle_options__ErlangIncludeDirs1_198));
        }
        {
          libs__handle_options__V_1670_1670 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1670_1670, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1670_1670, 1) = ((MR_Box) (libs__handle_options__SubdirErlangIncludeDirs_200));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 523, libs__handle_options__V_1670_1670, libs__handle_options__STATE_VARIABLE_Globals_1666_1666, &libs__handle_options__STATE_VARIABLE_Globals_1671_1671);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1671_1671 = libs__handle_options__STATE_VARIABLE_Globals_1635_1635;
    {
      libs__handle_options__option_implies_5_p_0((MR_Integer) 324, (MR_Integer) 13, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1671_1671, &libs__handle_options__STATE_VARIABLE_Globals_1675_1675);
    }
    libs__handle_options__succeeded = (libs__handle_options__HighLevelCode_108 == (MR_Integer) 1);
    if (libs__handle_options__succeeded)
      {
        libs__handle_options__succeeded = (libs__handle_options__GC_Method_28 == (MR_Integer) 5);
        if (libs__handle_options__succeeded)
          libs__handle_options__succeeded = (libs__handle_options__PutNondetEnvOnHeap_133 == (MR_Integer) 1);
      }
    if (libs__handle_options__succeeded)
      {
        MR_Word libs__handle_options__STATE_VARIABLE_Specs_1373_1373;

        {
          libs__compiler_util__add_error_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216]), libs__handle_options__STATE_VARIABLE_Specs_1272_1272, &libs__handle_options__STATE_VARIABLE_Specs_1373_1373);
        }
        {
          libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 451, libs__handle_options__V_348_348, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1373_1373, &libs__handle_options__STATE_VARIABLE_Specs_1687_1687);
        }
      }
    else
      switch (libs__handle_options__HighLevelCode_108) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 462, libs__handle_options__V_501_501, (MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1272_1272, &libs__handle_options__STATE_VARIABLE_Specs_1687_1687);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 451, libs__handle_options__V_348_348, (MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1272_1272, &libs__handle_options__STATE_VARIABLE_Specs_1687_1687);
            }
          }
          break;
      }
    {
      libs__handle_options__option_requires_7_p_0((MR_Integer) 26, (MR_Integer) 99, libs__handle_options__V_501_501, (MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only", libs__handle_options__STATE_VARIABLE_Globals_1675_1675, libs__handle_options__STATE_VARIABLE_Specs_1687_1687, &libs__handle_options__STATE_VARIABLE_Specs_1695_1695);
    }
    switch (libs__handle_options__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[233]);
          libs__handle_options__STATE_VARIABLE_Globals_1705_1705 = libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
        }
        break;
      case (MR_Integer) 1:
        {
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[234]);
          libs__handle_options__STATE_VARIABLE_Globals_1705_1705 = libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word libs__handle_options__STATE_VARIABLE_Globals_1701_1701;

          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18]);
          {
            libs__globals__set_option_4_p_0((MR_Integer) 360, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1675_1675, &libs__handle_options__STATE_VARIABLE_Globals_1701_1701);
          }
          {
            libs__globals__set_option_4_p_0((MR_Integer) 294, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1701_1701, &libs__handle_options__STATE_VARIABLE_Globals_1705_1705);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          libs__handle_options__BackendForeignLanguages_201 = (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[235]);
          libs__handle_options__STATE_VARIABLE_Globals_1705_1705 = libs__handle_options__STATE_VARIABLE_Globals_1675_1675;
        }
        break;
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1705_1705, (MR_Integer) 261, &libs__handle_options__CurrentBackendForeignLanguage_202);
    }
    if ((libs__handle_options__CurrentBackendForeignLanguage_202 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word libs__handle_options__V_1715_1715;

        {
          libs__handle_options__V_1715_1715 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1715_1715, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), libs__handle_options__V_1715_1715, 1) = ((MR_Box) (libs__handle_options__BackendForeignLanguages_201));
        }
        {
          libs__globals__set_option_4_p_0((MR_Integer) 261, libs__handle_options__V_1715_1715, libs__handle_options__STATE_VARIABLE_Globals_1705_1705, &libs__handle_options__STATE_VARIABLE_Globals_1716_1716);
        }
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1716_1716 = libs__handle_options__STATE_VARIABLE_Globals_1705_1705;
    {
      libs__globals__lookup_int_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_1716_1716, (MR_Integer) 312, &libs__handle_options__CompareSpec_205);
    }
    libs__handle_options__succeeded = (libs__handle_options__CompareSpec_205 < (MR_Integer) 0);
    if (libs__handle_options__succeeded)
      switch (libs__handle_options__HighLevelCode_108) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            {
              libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[6]), libs__handle_options__STATE_VARIABLE_Globals_1716_1716, &libs__handle_options__STATE_VARIABLE_Globals_1725_1725);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            {
              libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_6[7]), libs__handle_options__STATE_VARIABLE_Globals_1716_1716, &libs__handle_options__STATE_VARIABLE_Globals_1725_1725);
            }
          }
          break;
      }
    else
      libs__handle_options__STATE_VARIABLE_Globals_1725_1725 = libs__handle_options__STATE_VARIABLE_Globals_1716_1716;
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
            libs__handle_options__V_1727_1727 = (MR_Integer) 2;
            libs__handle_options__succeeded = (libs__handle_options__NumTagBits_57 >= libs__handle_options__V_1727_1727);
          }
      }
    if (libs__handle_options__succeeded)
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_348_348, libs__handle_options__STATE_VARIABLE_Globals_1725_1725, &libs__handle_options__STATE_VARIABLE_Globals_1730_1730);
        }
      }
    else
      {
        {
          libs__globals__set_option_4_p_0((MR_Integer) 268, libs__handle_options__V_501_501, libs__handle_options__STATE_VARIABLE_Globals_1725_1725, &libs__handle_options__STATE_VARIABLE_Globals_1730_1730);
        }
      }
    switch (libs__handle_options__HighLevelCode_108) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__handle_options__postprocess_options_lowlevel_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_1730_1730, &libs__handle_options__STATE_VARIABLE_Globals_1736_1736);
        }
        break;
      case (MR_Integer) 1:
        libs__handle_options__STATE_VARIABLE_Globals_1736_1736 = libs__handle_options__STATE_VARIABLE_Globals_1730_1730;
        break;
    }
    {
      libs__compute_grade__postprocess_options_libgrades_4_p_0(libs__handle_options__STATE_VARIABLE_Globals_1736_1736, libs__handle_options__STATE_VARIABLE_Globals_208, libs__handle_options__STATE_VARIABLE_Specs_1695_1695, libs__handle_options__STATE_VARIABLE_Specs_207);
    }
    {
      libs__globals__globals_init_mutables_3_p_0(*libs__handle_options__STATE_VARIABLE_Globals_208);
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
                  MR_hl_field(MR_mktag(3), libs__handle_options__V_323_323, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
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
      mercury__io__write_string_3_p_0((MR_String) "           Copyright (C) 2013-2015 The Mercury team\n");
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
  MR_Word * libs__handle_options__STATE_VARIABLE_Globals_23)
{
  {
    MR_bool libs__handle_options__succeeded;
    MR_Word libs__handle_options__Result_15;
    MR_Word libs__handle_options__STATE_VARIABLE_Globals_41_41;

    {
      mercury__getopt_io__process_options_7_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_5[0]), libs__handle_options__Args0_8, libs__handle_options__OptionArgs_9, libs__handle_options__Args_10, &libs__handle_options__Result_15);
    }
    {
      libs__handle_options__convert_option_table_result_to_globals_5_p_0(libs__handle_options__Result_15, libs__handle_options__Specs_11, &libs__handle_options__STATE_VARIABLE_Globals_41_41);
    }
    if ((*libs__handle_options__Specs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word libs__handle_options__OpMode_18;
        MR_Word libs__handle_options__Smart_19;
        MR_Word libs__handle_options__OpModeArgs_20;
        MR_Word libs__handle_options__OpModeAugment_21;
        MR_Word libs__handle_options__OpModeCG_22;

        {
          libs__globals__get_op_mode_2_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, &libs__handle_options__OpMode_18);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(libs__handle_options__STATE_VARIABLE_Globals_41_41, (MR_Integer) 117, &libs__handle_options__Smart_19);
        }
        libs__handle_options__succeeded = (libs__handle_options__Smart_19 == (MR_Integer) 1);
        if (libs__handle_options__succeeded)
          {
            libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpMode_18)) == (MR_mktag((MR_Integer) 3)));
            if (libs__handle_options__succeeded)
              {
                libs__handle_options__OpModeArgs_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__handle_options__OpMode_18, (MR_Integer) 0)));
                libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpModeArgs_20)) == (MR_mktag((MR_Integer) 1)));
                if (libs__handle_options__succeeded)
                  {
                    libs__handle_options__OpModeAugment_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OpModeArgs_20, (MR_Integer) 0)));
                    libs__handle_options__succeeded = ((MR_tag((MR_Word) libs__handle_options__OpModeAugment_21)) == (MR_mktag((MR_Integer) 1)));
                    if (libs__handle_options__succeeded)
                      {
                        libs__handle_options__OpModeCG_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__handle_options__OpModeAugment_21, (MR_Integer) 0)));
                        libs__handle_options__succeeded = (libs__handle_options__OpModeCG_22 == (MR_Integer) 2);
                      }
                  }
              }
          }
        if (libs__handle_options__succeeded)
          {
            {
              libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "linking", libs__handle_options__STATE_VARIABLE_Globals_41_41, libs__handle_options__STATE_VARIABLE_Globals_23);
            }
          }
        else
          *libs__handle_options__STATE_VARIABLE_Globals_23 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
      }
    else
      *libs__handle_options__STATE_VARIABLE_Globals_23 = libs__handle_options__STATE_VARIABLE_Globals_41_41;
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
