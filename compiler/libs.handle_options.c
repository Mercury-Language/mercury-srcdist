/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2021-05-30
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

static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_0;

static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_1;

static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_ordinal_ordered_maybe_allow_src_changes_0[2];

static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_name_ordered_maybe_allow_src_changes_0[2];

static const MR_Integer libs__handle_options__libs__handle_options__functor_number_map_maybe_allow_src_changes_0[2];

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2490__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_224);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2496__1_1_f_0(
  MR_String LambdaHeadVar__1_219);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2468__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_206);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2464__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_200);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2446__2_2_p_0(
  MR_Word HeadVar__1_193,
  MR_String HeadVar__2_250);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2446__1_2_p_0(
  MR_String HeadVar__1_194,
  MR_String HeadVar__2_252);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2428__1_3_f_0(
  MR_String GradeString_23,
  MR_String TargetArch_41,
  MR_String LambdaHeadVar__1_181);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2393__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_162);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2383__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_152);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2374__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_140);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2354__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_125);

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

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
  MR_Word * STATE_VARIABLE_Specs_47,
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

static void MR_CALL 
libs__handle_options__convert_options_to_globals_25_p_0(
  MR_Word OptionTable0_26,
  MR_Word STATE_VARIABLE_OptTuple_0_122,
  MR_Word OpMode_28,
  MR_Word Target_29,
  MR_Word WordSize_30,
  MR_Word GC_Method_31,
  MR_Word TermNorm_32,
  MR_Word Term2Norm_33,
  MR_Word TraceLevel_34,
  MR_Word TraceSuppress_35,
  MR_Word SSTraceLevel_36,
  MR_Word MaybeThreadSafe_37,
  MR_Word C_CompilerType_38,
  MR_Word CSharp_CompilerType_39,
  MR_Word ReuseStrategy_40,
  MR_Word MaybeFeedbackInfo_41,
  MR_Word HostEnvType_42,
  MR_Word SystemEnvType_43,
  MR_Word TargetEnvType_44,
  MR_Word LimitErrorContextsMap_45,
  MR_Word STATE_VARIABLE_Specs_0_123,
  MR_Word * STATE_VARIABLE_Specs_124,
  MR_Word * STATE_VARIABLE_Globals_125);

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_OptTuple_0_18,
  MR_Word * STATE_VARIABLE_OptTuple_19);

static void MR_CALL 
libs__handle_options__handle_non_tail_rec_warnings_7_p_0(
  MR_Word OptTuple0_8,
  MR_Word OT_OptMLDSTailCalls_9,
  MR_Word OpMode_10,
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word * STATE_VARIABLE_Globals_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
libs__handle_options__handle_compare_specialization_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7);

static void MR_CALL 
libs__handle_options__handle_compiler_developer_options_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_38,
  MR_Word * STATE_VARIABLE_Globals_39);

static void MR_CALL 
libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__handle_directory_options_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_61,
  MR_Word * STATE_VARIABLE_Globals_62);

static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_5_p_0(
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11);

static void MR_CALL 
libs__handle_options__disable_smart_recompilation_5_p_0(
  MR_String OptionDescr_6,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__handle_option_to_option_implications_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_4,
  MR_Word * STATE_VARIABLE_Globals_5);

static void MR_CALL 
libs__handle_options__handle_opmode_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15);

static void MR_CALL 
libs__handle_options__handle_stack_layout_options_6_p_0(
  MR_Word STATE_VARIABLE_Globals_0_15,
  MR_Word * STATE_VARIABLE_Globals_16,
  MR_Word OT_OptDups0_8,
  MR_Word * OT_OptDups_9,
  MR_Word OT_StdLabels0_10,
  MR_Word * OT_StdLabels_11);

static void MR_CALL 
libs__handle_options__handle_record_term_sizes_options_5_p_0(
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15,
  MR_Word * AllowOptLCMCTermSize_7,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
libs__handle_options__handle_profiling_options_9_p_0(
  MR_Word STATE_VARIABLE_Globals_0_22,
  MR_Word * STATE_VARIABLE_Globals_23,
  MR_Word Target_11,
  MR_Word ProfileDeep_12,
  MR_Word * STATE_VARIABLE_AllowSrcChangesProf_24,
  MR_Integer OT_HigherOrderSizeLimit0_14,
  MR_Integer * OT_HigherOrderSizeLimit_15,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
libs__handle_options__maybe_update_event_set_file_name_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11);

static void MR_CALL 
libs__handle_options__handle_debugging_options_9_p_0(
  MR_Word Target_10,
  MR_Word TraceLevel_11,
  MR_Word TraceEnabled_12,
  MR_Word SSTraceLevel_13,
  MR_Word * STATE_VARIABLE_AllowSrcChanges_21,
  MR_Word STATE_VARIABLE_Globals_0_22,
  MR_Word * STATE_VARIABLE_Globals_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
libs__handle_options__handle_minimal_model_options_5_p_0(
  MR_Word STATE_VARIABLE_Globals_0_17,
  MR_Word * STATE_VARIABLE_Globals_18,
  MR_Word * AllowHijacksMMSC_7,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
libs__handle_options__handle_gc_options_7_p_0(
  MR_Word STATE_VARIABLE_Globals_0_17,
  MR_Word * STATE_VARIABLE_Globals_18,
  MR_Word GC_Method_9,
  MR_Word OT_OptFrames0_10,
  MR_Word * OT_OptFrames_11,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
libs__handle_options__handle_implications_of_parallel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_15,
  MR_Word * STATE_VARIABLE_Globals_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
libs__handle_options__handle_implications_of_pregen_target_spf_7_p_0(
  MR_Word STATE_VARIABLE_Globals_0_26,
  MR_Word * STATE_VARIABLE_Globals_27,
  MR_Word Target_9,
  MR_Integer OT_StringBinarySwitchSize0_10,
  MR_Integer * OT_StringBinarySwitchSize_11,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__check_for_incompatibilities_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_18,
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_117,
  MR_Word * STATE_VARIABLE_OptionTable_118,
  MR_Word * Target_24,
  MR_Word * WordSize_25,
  MR_Word * GC_Method_26,
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

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[235][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[7][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[1][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[5][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[11][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][9];


/* sealed */ struct libs__handle_options__vector_common_type_2_0_s {
  const MR_String libs__handle_options__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_2_0_s libs__handle_options_vector_common_2[21];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[235][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2021 The Mercury team\n")),
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
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) ((MR_String) "64"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "32"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be either"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gc"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "automatic")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "accurate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "boehm")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "conservative")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--inform-incomplete-switch-threshold"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--trace"))
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
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[76])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 83 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 90 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
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
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 97 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "msvc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[108])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[14])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[90])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[143])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[152]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[64])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but the only valid values are 2 and 3."))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[170])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[172])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[176])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[178]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[179])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[181])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--put-nondet-env-on-heap"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[185])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[187])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[191])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[194]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[195])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[196]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[199])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[201]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[203]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[195])))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[205]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[10])))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[207]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[195])))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 210 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[209])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[210])))
  },
  /* row 212 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row 213 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row 214 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[214]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the value of the"))
  },
  /* row 218 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-ptag-bits"))
  },
  /* row 219 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option is"))
  },
  /* row 220 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 221 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 222 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 223 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row 224 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 225 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 226 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 227 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 228 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 229 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 230 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 231 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 232 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[232]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 234 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 32))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
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

static /* final */ const MR_Box libs__handle_options_scalar_common_7[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[3])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[1])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[3]))
  },
  /* row 5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[4])),
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
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__separate_option_args_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[6])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[7])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[8]))
  },
  /* row 10 */
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
#line 2954 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 2954 "handle_options.m"
void 
libs__handle_options__user_init_pred_99_0(void)
#line 2954 "handle_options.m"
{
#line 2954 "handle_options.m"
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

static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_0 = {
  (MR_String) "do_not_allow_src_changes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_1 = {
  (MR_String) "allow_src_changes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_ordinal_ordered_maybe_allow_src_changes_0[2] = {
  &libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_0,
  &libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_1
};

static const MR_EnumFunctorDescPtr libs__handle_options__libs__handle_options__enum_name_ordered_maybe_allow_src_changes_0[2] = {
  &libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_1,
  &libs__handle_options__libs__handle_options__enum_functor_desc_maybe_allow_src_changes_0_0
};

static const MR_Integer libs__handle_options__libs__handle_options__functor_number_map_maybe_allow_src_changes_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__handle_options__libs__handle_options__type_ctor_info_maybe_allow_src_changes_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__handle_options____Unify____maybe_allow_src_changes_0_0_10001)),
  ((MR_Box) (libs__handle_options____Compare____maybe_allow_src_changes_0_0_10001)),
  (MR_String) "libs.handle_options",
  (MR_String) "maybe_allow_src_changes",
  {     libs__handle_options__libs__handle_options__enum_name_ordered_maybe_allow_src_changes_0 },
  {     libs__handle_options__libs__handle_options__enum_ordinal_ordered_maybe_allow_src_changes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__handle_options__libs__handle_options__functor_number_map_maybe_allow_src_changes_0,

};

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2490__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_224)
{
  {
    MR_String LambdaHeadVar__2_225;
    MR_String Var_226;
    MR_String Var_227;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_42, (MR_Integer) 1))));
    MR_Box conv1_Var_227;

    conv1_Var_227 = func_0(((MR_Box) (ToGradeSubdir_42)), ((MR_Box) (LambdaHeadVar__1_224)));
    Var_227 = ((MR_String) (conv1_Var_227));
    Var_226 = mercury__dir__f_slash_2_f_0(Var_227, (MR_String) "Mercury");
    LambdaHeadVar__2_225 = mercury__dir__f_slash_2_f_0(Var_226, (MR_String) "mihs");
    return LambdaHeadVar__2_225;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2496__1_1_f_0(
  MR_String LambdaHeadVar__1_219)
{
  {
    MR_String LambdaHeadVar__2_220;
    MR_String Var_221;

    Var_221 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_219, (MR_String) "Mercury");
    LambdaHeadVar__2_220 = mercury__dir__f_slash_2_f_0(Var_221, (MR_String) "mihs");
    return LambdaHeadVar__2_220;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2468__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_206)
{
  {
    MR_String LambdaHeadVar__2_207;
    MR_String Var_208;
    MR_String Var_209;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_42, (MR_Integer) 1))));
    MR_Box conv1_Var_209;

    conv1_Var_209 = func_0(((MR_Box) (ToGradeSubdir_42)), ((MR_Box) (LambdaHeadVar__1_206)));
    Var_209 = ((MR_String) (conv1_Var_209));
    Var_208 = mercury__dir__f_slash_2_f_0(Var_209, (MR_String) "Mercury");
    LambdaHeadVar__2_207 = mercury__dir__f_slash_2_f_0(Var_208, (MR_String) "inits");
    return LambdaHeadVar__2_207;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2464__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_200)
{
  {
    MR_String LambdaHeadVar__2_201;
    MR_String Var_202;
    MR_String Var_203;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToGradeSubdir_42, (MR_Integer) 1))));
    MR_Box conv1_Var_203;

    conv1_Var_203 = func_0(((MR_Box) (ToGradeSubdir_42)), ((MR_Box) (LambdaHeadVar__1_200)));
    Var_203 = ((MR_String) (conv1_Var_203));
    Var_202 = mercury__dir__f_slash_2_f_0(Var_203, (MR_String) "Mercury");
    LambdaHeadVar__2_201 = mercury__dir__f_slash_2_f_0(Var_202, (MR_String) "lib");
    return LambdaHeadVar__2_201;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2446__2_2_p_0(
  MR_Word HeadVar__1_193,
  MR_String HeadVar__2_250)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), HeadVar__1_193, ((MR_Box) (HeadVar__2_250)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2446__1_2_p_0(
  MR_String HeadVar__1_194,
  MR_String HeadVar__2_252)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_194, HeadVar__2_252) == 0);

    return succeeded;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2428__1_3_f_0(
  MR_String GradeString_23,
  MR_String TargetArch_41,
  MR_String LambdaHeadVar__1_181)
{
  {
    MR_String LambdaHeadVar__2_182;
    MR_String Var_183;
    MR_String Var_184;

    Var_184 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_181, (MR_String) "Mercury");
    Var_183 = mercury__dir__f_slash_2_f_0(Var_184, GradeString_23);
    LambdaHeadVar__2_182 = mercury__dir__f_slash_2_f_0(Var_183, TargetArch_41);
    return LambdaHeadVar__2_182;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2393__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_162)
{
  {
    MR_String LambdaHeadVar__2_163;
    MR_String Var_164;

    Var_164 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_162, (MR_String) "modules");
    LambdaHeadVar__2_163 = mercury__dir__f_slash_2_f_0(Var_164, GradeString_23);
    return LambdaHeadVar__2_163;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2383__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_152)
{
  {
    MR_String LambdaHeadVar__2_153;
    MR_String Var_154;

    Var_154 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_23);
    LambdaHeadVar__2_153 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_152, Var_154);
    return LambdaHeadVar__2_153;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2374__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_140)
{
  {
    MR_String LambdaHeadVar__2_141;
    MR_String Var_142;
    MR_String Var_143;

    Var_143 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_140, (MR_String) "lib");
    Var_142 = mercury__dir__f_slash_2_f_0(Var_143, GradeString_23);
    LambdaHeadVar__2_141 = mercury__dir__f_slash_2_f_0(Var_142, (MR_String) "inc");
    return LambdaHeadVar__2_141;
  }
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2354__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_125)
{
  {
    MR_String LambdaHeadVar__2_126;
    MR_String Var_127;

    Var_127 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_125, (MR_String) "lib");
    LambdaHeadVar__2_126 = mercury__dir__f_slash_2_f_0(Var_127, GradeString_23);
    return LambdaHeadVar__2_126;
  }
}

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0(
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
libs__handle_options____Unify____maybe_allow_src_changes_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
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
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[234])));
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
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "           Copyright (C) 2013-2021 ", (MR_String) "The Mercury team\n");
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

    mercury__getopt__init_option_table_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_7[10]), &OptionTable0_26);
    Var_32 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
    mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_7[9]), RawArgs_6, OptionArgs_7, NonOptionArgs_8, &Var_10, &_OptionsSet_27, OptionTable0_26, &Var_11, ((MR_Box) (Var_32)), &conv6_Var_12);
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
  MR_Word * STATE_VARIABLE_Specs_47,
  MR_Word * Globals_12)
{
  if ((MaybeError_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OptOptions_19;
    MR_Word OptionTable_20;
    MR_Word OptTuple_21;
    MR_Word Target_22;
    MR_Word WordSize_23;
    MR_Word GC_Method_24;
    MR_Word TermNorm_25;
    MR_Word Term2Norm_26;
    MR_Word TraceLevel_27;
    MR_Word TraceSuppress_28;
    MR_Word SSTraceLevel_29;
    MR_Word MaybeThreadSafe_30;
    MR_Word C_CompilerType_31;
    MR_Word CSharp_CompilerType_32;
    MR_Word ReuseStrategy_33;
    MR_Word MaybeFeedbackInfo_34;
    MR_Word HostEnvType_35;
    MR_Word SystemEnvType_36;
    MR_Word TargetEnvType_37;
    MR_Word LimitErrorContextsMap_38;
    MR_Word OpMode_39;
    MR_Word OtherOpModes_40;
    MR_Word STATE_VARIABLE_Specs_50_50;
    MR_Word STATE_VARIABLE_Specs_70_70;

    OptOptions_19 = mercury__cord__list_1_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0), OptOptionsCord_10);
    libs__handle_options__check_option_values_22_p_0(OptionTable0_9, &OptionTable_20, &Target_22, &WordSize_23, &GC_Method_24, &TermNorm_25, &Term2Norm_26, &TraceLevel_27, &TraceSuppress_28, &SSTraceLevel_29, &MaybeThreadSafe_30, &C_CompilerType_31, &CSharp_CompilerType_32, &ReuseStrategy_33, &MaybeFeedbackInfo_34, &HostEnvType_35, &SystemEnvType_36, &TargetEnvType_37, &LimitErrorContextsMap_38, &STATE_VARIABLE_Specs_50_50);
    libs__optimization_options__process_optimization_options_3_p_0(OptionTable_20, OptOptions_19, &OptTuple_21);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_20, &OpMode_39, &OtherOpModes_40);
    if ((OtherOpModes_40 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_70_70 = STATE_VARIABLE_Specs_50_50;
    else
    {
      MR_Word OpModeStrs_43;
      MR_Word OpModePieces_44;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_61;
      MR_Word Var_62;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_52, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_52, 3) = ((MR_Box) (OptionTable_20));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (OpMode_39));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (OtherOpModes_40));
      }
      OpModeStrs_43 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_52, Var_53);
      Var_62 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(OpModeStrs_43);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_62, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      OpModePieces_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[9])), Var_61);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_44, STATE_VARIABLE_Specs_50_50, &STATE_VARIABLE_Specs_70_70);
    }
    if ((STATE_VARIABLE_Specs_70_70 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__handle_options__convert_options_to_globals_25_p_0(OptionTable_20, OptTuple_21, OpMode_39, Target_22, WordSize_23, GC_Method_24, TermNorm_25, Term2Norm_26, TraceLevel_27, TraceSuppress_28, SSTraceLevel_29, MaybeThreadSafe_30, C_CompilerType_31, CSharp_CompilerType_32, ReuseStrategy_33, MaybeFeedbackInfo_34, HostEnvType_35, SystemEnvType_36, TargetEnvType_37, LimitErrorContextsMap_38, STATE_VARIABLE_Specs_70_70, STATE_VARIABLE_Specs_47, Globals_12);
    else
    {
      libs__handle_options__generate_default_globals_3_p_0(Globals_12);
      *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_70_70;
    }
  }
  else
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_8, (MR_Integer) 0))));
    MR_String ErrorMessage_15;
    MR_Word OptionTablePieces_16;
    MR_Word OptionTableMsg_17;
    MR_Word OptionTableSpec_18;
    MR_Word Var_74;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_85;

    ErrorMessage_15 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), Error_14);
    {
      Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (ErrorMessage_15));
    }
    {
      OptionTablePieces_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OptionTablePieces_16, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), OptionTablePieces_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (OptionTablePieces_16));
    }
    {
      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableMsg_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), OptionTableMsg_17, 3) = ((MR_Box) (Var_79));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (OptionTableMsg_17));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.convert_option_table_result_to_globals\'/7"));
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), OptionTableSpec_18, 3) = ((MR_Box) (Var_85));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_47 = base;
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

    mercury__getopt__init_option_table_2_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_7[5]), &OptionTable0_59);
    Var_65 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
    mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_7[4]), Args0_8, OptionArgs_9, Args_10, &MaybeError_15, &_OptionsSet_60, OptionTable0_59, &OptionTable_16, ((MR_Box) (Var_65)), &conv6_OptOptions_17);
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
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_40_40, (MR_Integer) 140, &Smart_21);
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

static void MR_CALL 
libs__handle_options__convert_options_to_globals_25_p_0(
  MR_Word OptionTable0_26,
  MR_Word STATE_VARIABLE_OptTuple_0_122,
  MR_Word OpMode_28,
  MR_Word Target_29,
  MR_Word WordSize_30,
  MR_Word GC_Method_31,
  MR_Word TermNorm_32,
  MR_Word Term2Norm_33,
  MR_Word TraceLevel_34,
  MR_Word TraceSuppress_35,
  MR_Word SSTraceLevel_36,
  MR_Word MaybeThreadSafe_37,
  MR_Word C_CompilerType_38,
  MR_Word CSharp_CompilerType_39,
  MR_Word ReuseStrategy_40,
  MR_Word MaybeFeedbackInfo_41,
  MR_Word HostEnvType_42,
  MR_Word SystemEnvType_43,
  MR_Word TargetEnvType_44,
  MR_Word LimitErrorContextsMap_45,
  MR_Word STATE_VARIABLE_Specs_0_123,
  MR_Word * STATE_VARIABLE_Specs_124,
  MR_Word * STATE_VARIABLE_Globals_125)
{
  {
    MR_bool succeeded;
    MR_Word OT_AllowInlining0_50 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
    MR_Word OT_OptCommonStructs0_51 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
    MR_Word OT_PropConstraints0_52 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
    MR_Word OT_PropLocalConstraints0_53 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
    MR_Word OT_OptDupCalls0_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
    MR_Word OT_PropConstants0_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
    MR_Word OT_ElimExcessAssigns0_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
    MR_Word OT_OptTestAfterSwitch0_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
    MR_Word OT_OptLoopInvariants0_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 17)) & (MR_Integer) 1);
    MR_Word OT_OptSVCell0_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
    MR_Word OT_OptFollowCode0_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    MR_Word OT_OptUnusedArgs0_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
    MR_Word OT_OptUnusedArgsIntermod0_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    MR_Word OT_OptHigherOrder0_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    MR_Integer OT_HigherOrderSizeLimit0_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 17))));
    MR_Word OT_SpecTypes0_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    MR_Word OT_SpecTypesUserGuided0_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word OT_IntroduceAccumulators0_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word OT_OptLCMC0_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1))) >> 30)) & (MR_Integer) 1);
    MR_Word OT_Deforest0_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
    MR_Word OT_Tuple0_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
    MR_Word OT_Untuple0_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
    MR_Word OT_OptMiddleRec0_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1))) >> 9)) & (MR_Integer) 1);
    MR_Word OT_AllowHijacks0_73 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
    MR_Word OT_OptMLDSTailCalls0_74 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1))) >> 6)) & (MR_Integer) 1);
    MR_Word OT_Optimize0_75 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
    MR_Word OT_StdLabels0_76 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
    MR_Word OT_OptDups0_77 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 2))) >> 11)) & (MR_Integer) 1);
    MR_Word OT_OptFrames0_78 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
    MR_Integer OT_StringBinarySwitchSize0_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 32))));
    MR_String InstallCmd_80;
    MR_Word FileInstallCmd_81;
    MR_Integer OT_StringBinarySwitchSize_83;
    MR_Word OT_OptFrames_84;
    MR_Word AllowHijacksMMSC_85;
    MR_Word TraceEnabled_86;
    MR_Word AllowSrcChangesDebug_87;
    MR_Word ProfileDeep_88;
    MR_Word AllowSrcChangesProf_89;
    MR_Integer OT_HigherOrderSizeLimit_90;
    MR_Word AllowOptLCMCTermSize_91;
    MR_Word OT_OptDups_92;
    MR_Word OT_StdLabels_93;
    MR_Word OT_OptMLDSTailCalls_94;
    MR_Word OT_AllowInlining_95;
    MR_Word OT_InlineBuiltins0_96;
    MR_Word OT_PropConstants_97;
    MR_Word OT_OptDupCalls_98;
    MR_Word OT_OptHigherOrder_99;
    MR_Word BodyTypeInfoLiveness_100;
    MR_Word ReorderConj_101;
    MR_Word OT_Deforest_102;
    MR_Word StackSegments_103;
    MR_Word OT_OptMiddleRec_104;
    MR_Word OT_AllowHijacks_105;
    MR_Word OT_SpecTypes_106;
    MR_Word OT_SpecTypesUserGuided_107;
    MR_Word OT_PropLocalConstraints_108;
    MR_Word OT_PropConstraints_109;
    MR_Word OT_OptCommonStructs_110;
    MR_Word OT_ElimExcessAssigns_111;
    MR_Word OT_OptUnusedArgs_112;
    MR_Word OT_OptUnusedArgsIntermod_113;
    MR_Word OT_OptLCMC_114;
    MR_Word OT_OptFollowCode_115;
    MR_Word OT_OptSVCell_116;
    MR_Word OT_OptLoopInvariants_117;
    MR_Word OT_Untuple_118;
    MR_Word OT_Tuple_119;
    MR_Word OT_OptTestAfterSwitch_120;
    MR_Word HighLevelCode_121;
    MR_Word STATE_VARIABLE_Globals_130_130;
    MR_Word STATE_VARIABLE_Specs_131_131;
    MR_Word STATE_VARIABLE_Specs_132_132;
    MR_Word STATE_VARIABLE_Globals_133_133;
    MR_Word STATE_VARIABLE_Specs_134_134;
    MR_Word STATE_VARIABLE_Globals_135_135;
    MR_Word STATE_VARIABLE_Specs_136_136;
    MR_Word STATE_VARIABLE_Globals_137_137;
    MR_Word STATE_VARIABLE_Specs_138_138;
    MR_Word STATE_VARIABLE_Globals_139_139;
    MR_Word STATE_VARIABLE_Specs_140_140;
    MR_Word STATE_VARIABLE_Globals_141_141;
    MR_Word STATE_VARIABLE_Specs_142_142;
    MR_Word STATE_VARIABLE_Globals_143_143;
    MR_Word STATE_VARIABLE_Globals_146_146;
    MR_Word STATE_VARIABLE_Specs_147_147;
    MR_Word STATE_VARIABLE_Globals_148_148;
    MR_Word STATE_VARIABLE_Specs_149_149;
    MR_Word STATE_VARIABLE_Globals_150_150;
    MR_Word STATE_VARIABLE_Globals_151_151;
    MR_Word STATE_VARIABLE_Globals_152_152;
    MR_Word STATE_VARIABLE_Globals_153_153;
    MR_Word STATE_VARIABLE_Globals_155_155;
    MR_Word STATE_VARIABLE_Globals_156_156;
    MR_Word STATE_VARIABLE_Globals_157_157;
    MR_Word STATE_VARIABLE_Globals_159_159;
    MR_Word STATE_VARIABLE_Globals_160_160;
    MR_Word STATE_VARIABLE_Specs_161_161;
    MR_Word STATE_VARIABLE_Globals_171_171;
    MR_Word STATE_VARIABLE_OptTuple_200_200;
    MR_Word STATE_VARIABLE_Globals_202_202;
    MR_Word STATE_VARIABLE_OptTuple_203_203;
    MR_Word STATE_VARIABLE_Globals_204_204;
    MR_Integer Var_4107;
    MR_Integer Var_4108;
    MR_Integer Var_4109;
    MR_Integer Var_4110;
    MR_Integer Var_4111;
    MR_Integer Var_4112;
    MR_Integer Var_4113;
    MR_Integer Var_4114;
    MR_Integer Var_4115;
    MR_Integer Var_4116;
    MR_Integer Var_4117;
    MR_Integer Var_4118;
    MR_Integer Var_4119;
    MR_Integer Var_4120;
    MR_Integer Var_4122;
    MR_Integer Var_4123;
    MR_Integer Var_4124;
    MR_Integer Var_4125;
    MR_Integer Var_4126;
    MR_Integer Var_4127;
    MR_Integer Var_4128;
    MR_Integer Var_4129;
    MR_Integer Var_4130;
    MR_Integer Var_4131;
    MR_Integer Var_4132;
    MR_Integer Var_4133;
    MR_Integer Var_4134;
    MR_Integer Var_4135;
    MR_Integer Var_4137;
    MR_Integer Var_4138;
    MR_Integer Var_4139;
    MR_Integer Var_4140;
    MR_Integer Var_4141;
    MR_Integer Var_4142;
    MR_Integer Var_4143;
    MR_String Var_4144;
    MR_Word Var_165;
    MR_Word Var_166;
    MR_Unsigned packed_word_6;
    MR_Unsigned packed_word_7;
    MR_Unsigned packed_word_8;

    mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_26, ((MR_Box) ((MR_Integer) 667)), &InstallCmd_80);
    succeeded = (strcmp(InstallCmd_80, (MR_String) "") == 0);
    if (succeeded)
      FileInstallCmd_81 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String InstallCmdDirOption_82;

      mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_26, ((MR_Box) ((MR_Integer) 668)), &InstallCmdDirOption_82);
      {
        FileInstallCmd_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FileInstallCmd_81, 0) = ((MR_Box) (InstallCmd_80));
        MR_hl_field(MR_mktag(1), FileInstallCmd_81, 1) = ((MR_Box) (InstallCmdDirOption_82));
      }
    }
    libs__globals__globals_init_22_p_0(OptionTable0_26, STATE_VARIABLE_OptTuple_0_122, OpMode_28, Target_29, WordSize_30, GC_Method_31, TermNorm_32, Term2Norm_33, TraceLevel_34, TraceSuppress_35, SSTraceLevel_36, MaybeThreadSafe_37, C_CompilerType_38, CSharp_CompilerType_39, ReuseStrategy_40, MaybeFeedbackInfo_41, HostEnvType_42, SystemEnvType_43, TargetEnvType_44, FileInstallCmd_81, LimitErrorContextsMap_45, &STATE_VARIABLE_Globals_130_130);
    libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_130_130, Target_29, GC_Method_31, STATE_VARIABLE_Specs_0_123, &STATE_VARIABLE_Specs_131_131);
    libs__handle_options__check_for_incompatibilities_4_p_0(STATE_VARIABLE_Globals_130_130, OpMode_28, STATE_VARIABLE_Specs_131_131, &STATE_VARIABLE_Specs_132_132);
    libs__handle_options__handle_implications_of_pregen_target_spf_7_p_0(STATE_VARIABLE_Globals_130_130, &STATE_VARIABLE_Globals_133_133, Target_29, OT_StringBinarySwitchSize0_79, &OT_StringBinarySwitchSize_83, STATE_VARIABLE_Specs_132_132, &STATE_VARIABLE_Specs_134_134);
    libs__handle_options__handle_implications_of_parallel_4_p_0(STATE_VARIABLE_Globals_133_133, &STATE_VARIABLE_Globals_135_135, STATE_VARIABLE_Specs_134_134, &STATE_VARIABLE_Specs_136_136);
    libs__handle_options__handle_gc_options_7_p_0(STATE_VARIABLE_Globals_135_135, &STATE_VARIABLE_Globals_137_137, GC_Method_31, OT_OptFrames0_78, &OT_OptFrames_84, STATE_VARIABLE_Specs_136_136, &STATE_VARIABLE_Specs_138_138);
    libs__handle_options__handle_minimal_model_options_5_p_0(STATE_VARIABLE_Globals_137_137, &STATE_VARIABLE_Globals_139_139, &AllowHijacksMMSC_85, STATE_VARIABLE_Specs_138_138, &STATE_VARIABLE_Specs_140_140);
    TraceEnabled_86 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_34);
    libs__handle_options__handle_debugging_options_9_p_0(Target_29, TraceLevel_34, TraceEnabled_86, SSTraceLevel_36, &AllowSrcChangesDebug_87, STATE_VARIABLE_Globals_139_139, &STATE_VARIABLE_Globals_141_141, STATE_VARIABLE_Specs_140_140, &STATE_VARIABLE_Specs_142_142);
    libs__handle_options__maybe_update_event_set_file_name_4_p_0(STATE_VARIABLE_Globals_141_141, &STATE_VARIABLE_Globals_143_143);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_143_143, (MR_Integer) 231, &ProfileDeep_88);
    libs__handle_options__handle_profiling_options_9_p_0(STATE_VARIABLE_Globals_143_143, &STATE_VARIABLE_Globals_146_146, Target_29, ProfileDeep_88, &AllowSrcChangesProf_89, OT_HigherOrderSizeLimit0_64, &OT_HigherOrderSizeLimit_90, STATE_VARIABLE_Specs_142_142, &STATE_VARIABLE_Specs_147_147);
    libs__handle_options__handle_record_term_sizes_options_5_p_0(STATE_VARIABLE_Globals_146_146, &STATE_VARIABLE_Globals_148_148, &AllowOptLCMCTermSize_91, STATE_VARIABLE_Specs_147_147, &STATE_VARIABLE_Specs_149_149);
    libs__handle_options__handle_stack_layout_options_6_p_0(STATE_VARIABLE_Globals_148_148, &STATE_VARIABLE_Globals_150_150, OT_OptDups0_77, &OT_OptDups_92, OT_StdLabels0_76, &OT_StdLabels_93);
    libs__handle_options__handle_opmode_implications_3_p_0(OpMode_28, STATE_VARIABLE_Globals_150_150, &STATE_VARIABLE_Globals_151_151);
    libs__handle_options__handle_option_to_option_implications_2_p_0(STATE_VARIABLE_Globals_151_151, &STATE_VARIABLE_Globals_152_152);
    libs__handle_options__maybe_disable_smart_recompilation_5_p_0(OpMode_28, STATE_VARIABLE_Globals_152_152, &STATE_VARIABLE_Globals_153_153);
    libs__handle_options__handle_directory_options_3_p_0(OpMode_28, STATE_VARIABLE_Globals_153_153, &STATE_VARIABLE_Globals_155_155);
    libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(STATE_VARIABLE_Globals_155_155, &STATE_VARIABLE_Globals_156_156);
    libs__handle_options__handle_compiler_developer_options_4_p_0(STATE_VARIABLE_Globals_156_156, &STATE_VARIABLE_Globals_157_157);
    libs__handle_options__handle_compare_specialization_2_p_0(STATE_VARIABLE_Globals_157_157, &STATE_VARIABLE_Globals_159_159);
    switch (OT_Optimize0_75) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        OT_OptMLDSTailCalls_94 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        OT_OptMLDSTailCalls_94 = OT_OptMLDSTailCalls0_74;
        break;
    }
    libs__handle_options__handle_non_tail_rec_warnings_7_p_0(STATE_VARIABLE_OptTuple_0_122, OT_OptMLDSTailCalls_94, OpMode_28, STATE_VARIABLE_Globals_159_159, &STATE_VARIABLE_Globals_160_160, STATE_VARIABLE_Specs_149_149, &STATE_VARIABLE_Specs_161_161);
    OT_InlineBuiltins0_96 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_160_160, (MR_Integer) 307, &BodyTypeInfoLiveness_100);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_160_160, (MR_Integer) 201, &ReorderConj_101);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_160_160, (MR_Integer) 264, &StackSegments_103);
    switch (OT_IntroduceAccumulators0_67) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        OT_OptCommonStructs_110 = OT_OptCommonStructs0_51;
        break;
      case (MR_Integer) 0:
        OT_OptCommonStructs_110 = (MR_Integer) 0;
        break;
    }
    succeeded = (TraceEnabled_86 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (GC_Method_31 != (MR_Integer) 5);
      if (succeeded)
      {
        Var_165 = (MR_Integer) 254;
        Var_166 = (MR_Integer) 0;
        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_160_160, Var_165, Var_166);
        if (succeeded)
          succeeded = (StackSegments_103 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      OT_OptMiddleRec_104 = OT_OptMiddleRec0_72;
      succeeded = (GC_Method_31 != (MR_Integer) 5);
      if (succeeded)
        succeeded = (AllowHijacksMMSC_85 == (MR_Integer) 1);
      if (succeeded)
        OT_AllowHijacks_105 = OT_AllowHijacks0_73;
      else
        OT_AllowHijacks_105 = (MR_Integer) 1;
      succeeded = (OT_IntroduceAccumulators0_67 == (MR_Integer) 0);
      if (succeeded)
        OT_ElimExcessAssigns_111 = (MR_Integer) 0;
      else
        OT_ElimExcessAssigns_111 = OT_ElimExcessAssigns0_56;
      OT_OptFollowCode_115 = OT_OptFollowCode0_60;
    }
    else
    {
      OT_OptMiddleRec_104 = (MR_Integer) 1;
      succeeded = (TraceEnabled_86 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (GC_Method_31 != (MR_Integer) 5);
        if (succeeded)
          succeeded = (AllowHijacksMMSC_85 == (MR_Integer) 1);
      }
      if (succeeded)
        OT_AllowHijacks_105 = OT_AllowHijacks0_73;
      else
        OT_AllowHijacks_105 = (MR_Integer) 1;
      succeeded = (TraceEnabled_86 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (OT_IntroduceAccumulators0_67 == (MR_Integer) 0);
      if (succeeded)
        OT_ElimExcessAssigns_111 = (MR_Integer) 0;
      else
        OT_ElimExcessAssigns_111 = OT_ElimExcessAssigns0_56;
      switch (TraceEnabled_86) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          OT_OptFollowCode_115 = (MR_Integer) 0;
          break;
        case (MR_Integer) 0:
          OT_OptFollowCode_115 = OT_OptFollowCode0_60;
          break;
      }
    }
    succeeded = (AllowSrcChangesDebug_87 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (AllowSrcChangesProf_89 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Var_167;
      MR_Word Var_168;

      OT_AllowInlining_95 = OT_AllowInlining0_50;
      OT_OptDupCalls_98 = OT_OptDupCalls0_54;
      OT_OptHigherOrder_99 = OT_OptHigherOrder0_63;
      succeeded = (OT_InlineBuiltins0_96 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (OT_AllowInlining_95 == (MR_Integer) 0);
        if (!(succeeded))
          succeeded = (ProfileDeep_88 == (MR_Integer) 1);
      }
      if (succeeded)
        OT_PropConstants_97 = OT_PropConstants0_55;
      else
        OT_PropConstants_97 = (MR_Integer) 1;
      succeeded = (ReorderConj_101 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (BodyTypeInfoLiveness_100 == (MR_Integer) 0);
      if (succeeded)
        OT_Deforest_102 = OT_Deforest0_69;
      else
        OT_Deforest_102 = (MR_Integer) 1;
      succeeded = (GC_Method_31 != (MR_Integer) 5);
      if (succeeded)
      {
        OT_SpecTypes_106 = OT_SpecTypes0_65;
        switch (OT_SpecTypes_106) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            OT_SpecTypesUserGuided_107 = OT_SpecTypesUserGuided0_66;
            break;
          case (MR_Integer) 0:
            OT_SpecTypesUserGuided_107 = (MR_Integer) 0;
            break;
        }
      }
      else
      {
        OT_SpecTypes_106 = (MR_Integer) 1;
        OT_SpecTypesUserGuided_107 = (MR_Integer) 1;
      }
      succeeded = (ReorderConj_101 == (MR_Integer) 1);
      if (succeeded)
        OT_PropLocalConstraints_108 = OT_PropLocalConstraints0_53;
      else
        OT_PropLocalConstraints_108 = (MR_Integer) 1;
      succeeded = ((MR_tag((MR_Word) OpMode_28)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_28, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_167)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_168 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_167, (MR_Integer) 0))));
          succeeded = (Var_168 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
      if (succeeded)
        OT_OptUnusedArgs_112 = (MR_Integer) 1;
      else
        OT_OptUnusedArgs_112 = OT_OptUnusedArgs0_61;
      succeeded = (ProfileDeep_88 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (AllowOptLCMCTermSize_91 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (GC_Method_31 != (MR_Integer) 5);
      }
      if (succeeded)
        OT_OptLCMC_114 = OT_OptLCMC0_68;
      else
        OT_OptLCMC_114 = (MR_Integer) 1;
      OT_OptSVCell_116 = OT_OptSVCell0_59;
      OT_OptLoopInvariants_117 = OT_OptLoopInvariants0_58;
      OT_Tuple_119 = OT_Tuple0_70;
      OT_Untuple_118 = OT_Untuple0_71;
      OT_OptTestAfterSwitch_120 = OT_OptTestAfterSwitch0_57;
    }
    else
    {
      OT_AllowInlining_95 = (MR_Integer) 1;
      succeeded = (OT_InlineBuiltins0_96 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (ProfileDeep_88 == (MR_Integer) 1);
      if (succeeded)
        OT_PropConstants_97 = OT_PropConstants0_55;
      else
        OT_PropConstants_97 = (MR_Integer) 1;
      switch (AllowSrcChangesDebug_87) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_7494;
            MR_Word Var_7495;

            OT_OptDupCalls_98 = OT_OptDupCalls0_54;
            OT_OptHigherOrder_99 = OT_OptHigherOrder0_63;
            succeeded = (AllowSrcChangesDebug_87 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (ReorderConj_101 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (BodyTypeInfoLiveness_100 == (MR_Integer) 0);
            }
            if (succeeded)
              OT_Deforest_102 = OT_Deforest0_69;
            else
              OT_Deforest_102 = (MR_Integer) 1;
            succeeded = (AllowSrcChangesDebug_87 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (GC_Method_31 != (MR_Integer) 5);
            if (succeeded)
            {
              OT_SpecTypes_106 = OT_SpecTypes0_65;
              switch (OT_SpecTypes_106) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  OT_SpecTypesUserGuided_107 = OT_SpecTypesUserGuided0_66;
                  break;
                case (MR_Integer) 0:
                  OT_SpecTypesUserGuided_107 = (MR_Integer) 0;
                  break;
              }
            }
            else
            {
              OT_SpecTypes_106 = (MR_Integer) 1;
              OT_SpecTypesUserGuided_107 = (MR_Integer) 1;
            }
            succeeded = (AllowSrcChangesDebug_87 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (ReorderConj_101 == (MR_Integer) 1);
            if (succeeded)
              OT_PropLocalConstraints_108 = OT_PropLocalConstraints0_53;
            else
              OT_PropLocalConstraints_108 = (MR_Integer) 1;
            succeeded = ((MR_tag((MR_Word) OpMode_28)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_7494 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_28, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_7494)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_7495 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_7494, (MR_Integer) 0))));
                succeeded = (Var_7495 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
            if (succeeded)
              OT_OptUnusedArgs_112 = (MR_Integer) 1;
            else
              OT_OptUnusedArgs_112 = OT_OptUnusedArgs0_61;
            succeeded = (AllowSrcChangesDebug_87 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = (ProfileDeep_88 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (AllowOptLCMCTermSize_91 == (MR_Integer) 1);
                if (succeeded)
                  succeeded = (GC_Method_31 != (MR_Integer) 5);
              }
            }
            if (succeeded)
            {
              OT_OptLCMC_114 = OT_OptLCMC0_68;
              OT_OptSVCell_116 = OT_OptSVCell0_59;
              OT_OptLoopInvariants_117 = OT_OptLoopInvariants0_58;
              OT_Tuple_119 = OT_Tuple0_70;
              OT_Untuple_118 = OT_Untuple0_71;
              OT_OptTestAfterSwitch_120 = OT_OptTestAfterSwitch0_57;
            }
            else
            {
              OT_OptLCMC_114 = (MR_Integer) 1;
              OT_OptSVCell_116 = OT_OptSVCell0_59;
              OT_OptLoopInvariants_117 = OT_OptLoopInvariants0_58;
              OT_Tuple_119 = OT_Tuple0_70;
              OT_Untuple_118 = OT_Untuple0_71;
              OT_OptTestAfterSwitch_120 = OT_OptTestAfterSwitch0_57;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            OT_OptDupCalls_98 = (MR_Integer) 1;
            OT_OptHigherOrder_99 = (MR_Integer) 1;
            OT_Deforest_102 = (MR_Integer) 1;
            OT_SpecTypes_106 = (MR_Integer) 1;
            OT_SpecTypesUserGuided_107 = (MR_Integer) 1;
            OT_PropLocalConstraints_108 = (MR_Integer) 1;
            succeeded = (AllowSrcChangesDebug_87 == (MR_Integer) 0);
            if (!(succeeded))
            {
              MR_Word Var_7502;
              MR_Word Var_7503;

              succeeded = ((MR_tag((MR_Word) OpMode_28)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_7502 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_28, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_7502)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_7503 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_7502, (MR_Integer) 0))));
                  succeeded = (Var_7503 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
            if (succeeded)
              OT_OptUnusedArgs_112 = (MR_Integer) 1;
            else
              OT_OptUnusedArgs_112 = OT_OptUnusedArgs0_61;
            OT_OptLCMC_114 = (MR_Integer) 1;
            OT_OptSVCell_116 = (MR_Integer) 1;
            OT_OptLoopInvariants_117 = (MR_Integer) 1;
            OT_Untuple_118 = (MR_Integer) 1;
            OT_Tuple_119 = (MR_Integer) 1;
            OT_OptTestAfterSwitch_120 = (MR_Integer) 1;
          }
          break;
      }
    }
    succeeded = (BodyTypeInfoLiveness_100 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (OT_PropLocalConstraints_108 == (MR_Integer) 0);
    if (succeeded)
      OT_PropConstraints_109 = OT_PropConstraints0_52;
    else
      OT_PropConstraints_109 = (MR_Integer) 1;
    succeeded = (OT_OptUnusedArgsIntermod0_62 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (OT_OptUnusedArgs_112 == (MR_Integer) 0);
    if (succeeded)
    {
      OT_OptUnusedArgsIntermod_113 = OT_OptUnusedArgsIntermod0_62;
      libs__globals__set_option_4_p_0((MR_Integer) 486, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_160_160, &STATE_VARIABLE_Globals_171_171);
    }
    else
    {
      OT_OptUnusedArgsIntermod_113 = (MR_Integer) 1;
      STATE_VARIABLE_Globals_171_171 = STATE_VARIABLE_Globals_160_160;
    }
    packed_word_6 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 0)));
    packed_word_7 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 1)));
    packed_word_8 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 2)));
    Var_4107 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 3))));
    Var_4108 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 4))));
    Var_4109 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 5))));
    Var_4110 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 6))));
    Var_4111 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 7))));
    Var_4112 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 8))));
    Var_4113 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 9))));
    Var_4114 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 10))));
    Var_4115 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 11))));
    Var_4116 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 12))));
    Var_4117 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 13))));
    Var_4118 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 14))));
    Var_4119 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 15))));
    Var_4120 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 16))));
    Var_4122 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 18))));
    Var_4123 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 19))));
    Var_4124 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 20))));
    Var_4125 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 21))));
    Var_4126 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 22))));
    Var_4127 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 23))));
    Var_4128 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 24))));
    Var_4129 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 25))));
    Var_4130 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 26))));
    Var_4131 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 27))));
    Var_4132 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 28))));
    Var_4133 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 29))));
    Var_4134 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 30))));
    Var_4135 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 31))));
    Var_4137 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 33))));
    Var_4138 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 34))));
    Var_4139 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 35))));
    Var_4140 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 36))));
    Var_4141 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 37))));
    Var_4142 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 38))));
    Var_4143 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 39))));
    Var_4144 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_0_122, (MR_Integer) 40))));
    {
      STATE_VARIABLE_OptTuple_200_200 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 0) = (MR_Box) ((((packed_word_6 & (~((MR_Unsigned) 2214232556U)))) | (((((MR_Unsigned) (OT_SpecTypesUserGuided_107) << 2)) | (((((MR_Unsigned) (OT_SpecTypes_106) << 3)) | (((((MR_Unsigned) (OT_OptHigherOrder_99) << 5)) | (((((MR_Unsigned) (OT_OptUnusedArgsIntermod_113) << 6)) | (((((MR_Unsigned) (OT_OptUnusedArgs_112) << 7)) | (((((MR_Unsigned) (OT_OptFollowCode_115) << 8)) | (((((MR_Unsigned) (OT_OptSVCell_116) << 15)) | (((((MR_Unsigned) (OT_OptLoopInvariants_117) << 17)) | (((((MR_Unsigned) (OT_OptTestAfterSwitch_120) << 19)) | (((((MR_Unsigned) (OT_ElimExcessAssigns_111) << 20)) | (((((MR_Unsigned) (OT_PropConstants_97) << 21)) | (((((MR_Unsigned) (OT_OptDupCalls_98) << 22)) | (((((MR_Unsigned) (OT_PropLocalConstraints_108) << 23)) | (((((MR_Unsigned) (OT_PropConstraints_109) << 24)) | (((((MR_Unsigned) (OT_OptCommonStructs_110) << 25)) | (((MR_Unsigned) (OT_AllowInlining_95) << 31))))))))))))))))))))))))))))))))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 1) = (MR_Box) ((((packed_word_7 & (~((MR_Unsigned) 1543504576U)))) | (((((MR_Unsigned) (OT_OptMLDSTailCalls_94) << 6)) | (((((MR_Unsigned) (OT_AllowHijacks_105) << 7)) | (((((MR_Unsigned) (OT_OptMiddleRec_104) << 9)) | (((((MR_Unsigned) (OT_Tuple_119) << 26)) | (((((MR_Unsigned) (OT_Untuple_118) << 27)) | (((((MR_Unsigned) (OT_Deforest_102) << 28)) | (((MR_Unsigned) (OT_OptLCMC_114) << 30))))))))))))))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 2) = (MR_Box) ((((packed_word_8 & (~((MR_Unsigned) 10752U)))) | (((((MR_Unsigned) (OT_OptFrames_84) << 9)) | (((((MR_Unsigned) (OT_OptDups_92) << 11)) | (((MR_Unsigned) (OT_StdLabels_93) << 13))))))));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 3) = ((MR_Box) (Var_4107));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 4) = ((MR_Box) (Var_4108));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 5) = ((MR_Box) (Var_4109));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 6) = ((MR_Box) (Var_4110));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 7) = ((MR_Box) (Var_4111));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 8) = ((MR_Box) (Var_4112));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 9) = ((MR_Box) (Var_4113));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 10) = ((MR_Box) (Var_4114));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 11) = ((MR_Box) (Var_4115));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 12) = ((MR_Box) (Var_4116));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 13) = ((MR_Box) (Var_4117));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 14) = ((MR_Box) (Var_4118));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 15) = ((MR_Box) (Var_4119));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 16) = ((MR_Box) (Var_4120));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 17) = ((MR_Box) (OT_HigherOrderSizeLimit_90));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 18) = ((MR_Box) (Var_4122));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 19) = ((MR_Box) (Var_4123));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 20) = ((MR_Box) (Var_4124));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 21) = ((MR_Box) (Var_4125));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 22) = ((MR_Box) (Var_4126));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 23) = ((MR_Box) (Var_4127));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 24) = ((MR_Box) (Var_4128));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 25) = ((MR_Box) (Var_4129));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 26) = ((MR_Box) (Var_4130));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 27) = ((MR_Box) (Var_4131));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 28) = ((MR_Box) (Var_4132));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 29) = ((MR_Box) (Var_4133));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 30) = ((MR_Box) (Var_4134));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 31) = ((MR_Box) (Var_4135));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 32) = ((MR_Box) (OT_StringBinarySwitchSize_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 33) = ((MR_Box) (Var_4137));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 34) = ((MR_Box) (Var_4138));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 35) = ((MR_Box) (Var_4139));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 36) = ((MR_Box) (Var_4140));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 37) = ((MR_Box) (Var_4141));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 38) = ((MR_Box) (Var_4142));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 39) = ((MR_Box) (Var_4143));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_200_200, 40) = ((MR_Box) (Var_4144));
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_171_171, (MR_Integer) 296, &HighLevelCode_121);
    switch (HighLevelCode_121) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__handle_options__postprocess_options_lowlevel_4_p_0(STATE_VARIABLE_Globals_171_171, &STATE_VARIABLE_Globals_202_202, STATE_VARIABLE_OptTuple_200_200, &STATE_VARIABLE_OptTuple_203_203);
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_OptTuple_203_203 = STATE_VARIABLE_OptTuple_200_200;
          STATE_VARIABLE_Globals_202_202 = STATE_VARIABLE_Globals_171_171;
        }
        break;
    }
    libs__globals__set_opt_tuple_3_p_0(STATE_VARIABLE_OptTuple_203_203, STATE_VARIABLE_Globals_202_202, &STATE_VARIABLE_Globals_204_204);
    libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_204_204, STATE_VARIABLE_Globals_125, STATE_VARIABLE_Specs_161_161, STATE_VARIABLE_Specs_124);
    libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_125);
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
    MR_Unsigned packed_word_3;
    MR_Unsigned packed_word_4;
    MR_Unsigned packed_word_5;
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
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0)));
    packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1)));
    packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2)));
    OptFrames_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
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
          STATE_VARIABLE_OptTuple_24_24 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 0) = (MR_Box) (packed_word_3);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 1) = (MR_Box) (packed_word_4);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 2) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 266240U)))) | (((((MR_Unsigned) ((MR_Integer) 0) << 12)) | (((MR_Unsigned) ((MR_Integer) 0) << 18))))));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 3) = ((MR_Box) (Var_381));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 4) = ((MR_Box) (Var_382));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 5) = ((MR_Box) (Var_383));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 6) = ((MR_Box) (Var_384));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 7) = ((MR_Box) (Var_385));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 8) = ((MR_Box) (Var_386));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 9) = ((MR_Box) (Var_387));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 10) = ((MR_Box) (Var_388));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 11) = ((MR_Box) (Var_389));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 12) = ((MR_Box) (Var_390));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 13) = ((MR_Box) (Var_391));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 14) = ((MR_Box) (Var_392));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 15) = ((MR_Box) (Var_393));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 16) = ((MR_Box) (Var_394));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 17) = ((MR_Box) (Var_395));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 18) = ((MR_Box) (Var_396));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 19) = ((MR_Box) (Var_397));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 20) = ((MR_Box) (Var_398));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 21) = ((MR_Box) (Var_399));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 22) = ((MR_Box) (Var_400));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 23) = ((MR_Box) (Var_401));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 24) = ((MR_Box) (Var_402));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 25) = ((MR_Box) (Var_403));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 26) = ((MR_Box) (Var_404));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 27) = ((MR_Box) (Var_405));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 28) = ((MR_Box) (Var_406));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 29) = ((MR_Box) (Var_407));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 30) = ((MR_Box) (Var_408));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 31) = ((MR_Box) (Var_409));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 32) = ((MR_Box) (Var_410));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 33) = ((MR_Box) (Var_411));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 34) = ((MR_Box) (Var_412));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 35) = ((MR_Box) (Var_413));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 36) = ((MR_Box) (Var_414));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 37) = ((MR_Box) (Var_415));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 38) = ((MR_Box) (Var_416));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 39) = ((MR_Box) (Var_417));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_24_24, 40) = ((MR_Box) (Var_418));
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
        libs__globals__set_option_4_p_0((MR_Integer) 335, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_0_16, STATE_VARIABLE_Globals_17);
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
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 37) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 38) = ((MR_Box) (Var_1157));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 39) = ((MR_Box) (Var_1158));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_OptTuple_31_31, 40) = ((MR_Box) (Var_1159));
      }
    }
    else
      STATE_VARIABLE_OptTuple_31_31 = STATE_VARIABLE_OptTuple_24_24;
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 276, &UnboxedFloat_12);
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
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 277, &UnboxedInt64s_13);
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
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 292, &NonLocalGotos_14);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 294, &AsmLabels_15);
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
libs__handle_options__handle_non_tail_rec_warnings_7_p_0(
  MR_Word OptTuple0_8,
  MR_Word OT_OptMLDSTailCalls_9,
  MR_Word OpMode_10,
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word * STATE_VARIABLE_Globals_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_bool succeeded;
    MR_Word WarnNonTailRecSelf_13;
    MR_Word WarnNonTailRecMutual_14;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 34, &WarnNonTailRecSelf_13);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 35, &WarnNonTailRecMutual_14);
    succeeded = (WarnNonTailRecSelf_13 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnNonTailRecMutual_14 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word OT_PessimizeTailCalls0_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple0_8, (MR_Integer) 2))) >> 16)) & (MR_Integer) 1);
      MR_Word STATE_VARIABLE_Specs_29_29;
      MR_Word STATE_VARIABLE_Specs_34_34;
      MR_Word Var_37;
      MR_Word Var_38;

      switch (OT_PessimizeTailCalls0_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          STATE_VARIABLE_Specs_29_29 = STATE_VARIABLE_Specs_0_21;
          break;
        case (MR_Integer) 0:
          {
            MR_String PessimizeWords_16;
            MR_Word Var_28;
            MR_Word Var_30;

            PessimizeWords_16 = mercury__string__f_43_43_2_f_0((MR_String) "--warn-non-tail-recursion is incompatible", (MR_String) " with --pessimize-tailcalls");
            {
              Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (PessimizeWords_16));
            }
            {
              Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_30));
              MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_28, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_29_29);
          }
          break;
      }
      switch (OT_OptMLDSTailCalls_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[233])), STATE_VARIABLE_Specs_29_29, &STATE_VARIABLE_Specs_34_34);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_Specs_34_34 = STATE_VARIABLE_Specs_29_29;
          break;
      }
      succeeded = ((MR_tag((MR_Word) OpMode_10)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_10, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_37)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_37, (MR_Integer) 0))));
          succeeded = (Var_38 == (MR_Word) ((MR_Unsigned) 20U));
        }
      }
      if (succeeded)
      {
        MR_String ECOWords_18;
        MR_Word Var_42;
        MR_Word Var_44;

        ECOWords_18 = mercury__string__f_43_43_2_f_0((MR_String) "--warn-non-tail-recursion is incompatible", (MR_String) " with --errorcheck-only");
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (ECOWords_18));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_42, STATE_VARIABLE_Specs_34_34, STATE_VARIABLE_Specs_22);
      }
      else
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_34_34;
    }
    else
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
    *STATE_VARIABLE_Globals_20 = STATE_VARIABLE_Globals_0_19;
  }
}

static void MR_CALL 
libs__handle_options__handle_compare_specialization_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_bool succeeded;
    MR_Integer CompareSpec_4;

    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_0_6, (MR_Integer) 349, &CompareSpec_4);
    succeeded = (CompareSpec_4 < (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word HighLevelCode_5;

      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_6, (MR_Integer) 296, &HighLevelCode_5);
      switch (HighLevelCode_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[5])), STATE_VARIABLE_Globals_0_6, STATE_VARIABLE_Globals_7);
          break;
        case (MR_Integer) 1:
          libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[6])), STATE_VARIABLE_Globals_0_6, STATE_VARIABLE_Globals_7);
          break;
      }
    }
    else
      *STATE_VARIABLE_Globals_7 = STATE_VARIABLE_Globals_0_6;
  }
}

static void MR_CALL 
libs__handle_options__handle_compiler_developer_options_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_38,
  MR_Word * STATE_VARIABLE_Globals_39)
{
  {
    MR_bool succeeded;
    MR_Word VeryVerbose_7;
    MR_Word Statistics_8;
    MR_Integer DebugLiveness_9;
    MR_Integer DebugModesPredId_13;
    MR_Word DebugUnneededCodePredNames_14;
    MR_Word DebugOptPredIdStrs_17;
    MR_Word DebugOptPredNames_18;
    MR_Word DebugIntermoduleAnalysis_23;
    MR_Word DumpHLDSPredIds_24;
    MR_Word DumpHLDSStages_30;
    MR_Word DumpTraceStages_31;
    MR_Word ParallelLiveness_32;
    MR_Word ParallelCodeGen_33;
    MR_Word Var_44 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]));
    MR_Word STATE_VARIABLE_Globals_45_45;
    MR_Word STATE_VARIABLE_Globals_50_50;
    MR_Word STATE_VARIABLE_Globals_56_56;
    MR_Word STATE_VARIABLE_Globals_61_61;
    MR_Word STATE_VARIABLE_Globals_66_66;
    MR_Word STATE_VARIABLE_Globals_71_71;
    MR_Word STATE_VARIABLE_Globals_79_79;
    MR_Word STATE_VARIABLE_Globals_83_83;
    MR_Word STATE_VARIABLE_Globals_89_89;
    MR_Word STATE_VARIABLE_Globals_94_94;
    MR_Word STATE_VARIABLE_Globals_100_100;
    MR_Word STATE_VARIABLE_Globals_112_112;
    MR_Word STATE_VARIABLE_Globals_116_116;
    MR_String AllDumpOptions_10;
    MR_String Var_75;

    libs__handle_options__option_implies_5_p_0((MR_Integer) 66, (MR_Integer) 65, Var_44, STATE_VARIABLE_Globals_0_38, &STATE_VARIABLE_Globals_45_45);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 65, (MR_Integer) 71, Var_44, STATE_VARIABLE_Globals_45_45, &STATE_VARIABLE_Globals_50_50);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_50_50, (MR_Integer) 66, &VeryVerbose_7);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_50_50, (MR_Integer) 75, &Statistics_8);
    succeeded = (VeryVerbose_7 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Statistics_8 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Var_55;

      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = (MR_Box) ((MR_Unsigned) (Statistics_8));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 76, Var_55, STATE_VARIABLE_Globals_50_50, &STATE_VARIABLE_Globals_56_56);
    }
    else
      STATE_VARIABLE_Globals_56_56 = STATE_VARIABLE_Globals_50_50;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 80, Var_44, STATE_VARIABLE_Globals_56_56, &STATE_VARIABLE_Globals_61_61);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_44, STATE_VARIABLE_Globals_61_61, &STATE_VARIABLE_Globals_66_66);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 81, (MR_Integer) 80, Var_44, STATE_VARIABLE_Globals_66_66, &STATE_VARIABLE_Globals_71_71);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_71_71, (MR_Integer) 93, &DebugLiveness_9);
    succeeded = (DebugLiveness_9 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_75 = (MR_String) "all";
      succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_75, &AllDumpOptions_10);
    }
    if (succeeded)
    {
      MR_String DumpOptions0_11;
      MR_String DumpOptions1_12;
      MR_Word Var_78;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_71_71, (MR_Integer) 184, &DumpOptions0_11);
      DumpOptions1_12 = mercury__string__f_43_43_2_f_0(DumpOptions0_11, AllDumpOptions_10);
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (DumpOptions1_12));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 184, Var_78, STATE_VARIABLE_Globals_71_71, &STATE_VARIABLE_Globals_79_79);
    }
    else
      STATE_VARIABLE_Globals_79_79 = STATE_VARIABLE_Globals_71_71;
    libs__handle_options__option_implies_5_p_0((MR_Integer) 83, (MR_Integer) 80, Var_44, STATE_VARIABLE_Globals_79_79, &STATE_VARIABLE_Globals_83_83);
    libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_83_83, (MR_Integer) 84, &DebugModesPredId_13);
    succeeded = (DebugModesPredId_13 > (MR_Integer) 0);
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 80, Var_44, STATE_VARIABLE_Globals_83_83, &STATE_VARIABLE_Globals_89_89);
    else
      STATE_VARIABLE_Globals_89_89 = STATE_VARIABLE_Globals_83_83;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_89_89, (MR_Integer) 199, &DebugUnneededCodePredNames_14);
    if ((DebugUnneededCodePredNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_94_94 = STATE_VARIABLE_Globals_89_89;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 198, Var_44, STATE_VARIABLE_Globals_89_89, &STATE_VARIABLE_Globals_94_94);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_94_94, (MR_Integer) 90, &DebugOptPredIdStrs_17);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_94_94, (MR_Integer) 91, &DebugOptPredNames_18);
    succeeded = (DebugOptPredIdStrs_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DebugOptPredNames_18 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 88, Var_44, STATE_VARIABLE_Globals_94_94, &STATE_VARIABLE_Globals_100_100);
    else
      STATE_VARIABLE_Globals_100_100 = STATE_VARIABLE_Globals_94_94;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_100_100, (MR_Integer) 99, &DebugIntermoduleAnalysis_23);
    analysis__enable_debug_messages_3_p_0(DebugIntermoduleAnalysis_23);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_100_100, (MR_Integer) 178, &DumpHLDSPredIds_24);
    if ((DumpHLDSPredIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_112_112 = STATE_VARIABLE_Globals_100_100;
    else
    {
      MR_String DumpOptions2_27;
      MR_String DumpOptions3_28;
      MR_String DumpOptions_29;
      MR_Word Var_111;

      libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_100_100, (MR_Integer) 184, &DumpOptions2_27);
      mercury__string__replace_all_4_p_0(DumpOptions2_27, (MR_String) "M", (MR_String) "", &DumpOptions3_28);
      mercury__string__replace_all_4_p_0(DumpOptions3_28, (MR_String) "T", (MR_String) "", &DumpOptions_29);
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_111, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_111, 1) = ((MR_Box) (DumpOptions_29));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 184, Var_111, STATE_VARIABLE_Globals_100_100, &STATE_VARIABLE_Globals_112_112);
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 166, (MR_Integer) 165, Var_44, STATE_VARIABLE_Globals_112_112, &STATE_VARIABLE_Globals_116_116);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_116_116, (MR_Integer) 177, &DumpHLDSStages_30);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_116_116, (MR_Integer) 176, &DumpTraceStages_31);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_116_116, (MR_Integer) 336, &ParallelLiveness_32);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_116_116, (MR_Integer) 337, &ParallelCodeGen_33);
    succeeded = (DumpHLDSStages_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (DumpTraceStages_31 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        succeeded = (Statistics_8 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (ParallelLiveness_32 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (ParallelCodeGen_33 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 335, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_116_116, STATE_VARIABLE_Globals_39);
    else
      *STATE_VARIABLE_Globals_39 = STATE_VARIABLE_Globals_116_116;
  }
}

static void MR_CALL 
libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8)
{
  {
    MR_bool succeeded;
    MR_Word LibLinkages0_4;
    MR_Word Var_11 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[231]));
    MR_Word STATE_VARIABLE_Globals_12_12;
    MR_Word STATE_VARIABLE_Globals_17_17;
    MR_Word STATE_VARIABLE_Globals_22_22;
    MR_Word Var_30;
    MR_Word STATE_VARIABLE_Globals_31_31;
    MR_Word SourceOptionValue_43;
    MR_Word SourceOptionValue_51;
    MR_Word SourceOptionValue_59;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_7, (MR_Integer) 120, &SourceOptionValue_43);
    switch (SourceOptionValue_43) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_12_12 = STATE_VARIABLE_Globals_0_7;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 589, Var_11, STATE_VARIABLE_Globals_0_7, &STATE_VARIABLE_Globals_12_12);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_12_12, (MR_Integer) 120, &SourceOptionValue_51);
    switch (SourceOptionValue_51) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_17_17 = STATE_VARIABLE_Globals_12_12;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 591, Var_11, STATE_VARIABLE_Globals_12_12, &STATE_VARIABLE_Globals_17_17);
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_17, (MR_Integer) 673, &LibLinkages0_4);
    if ((LibLinkages0_4 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 673, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[211])), STATE_VARIABLE_Globals_17_17, &STATE_VARIABLE_Globals_22_22);
    else
      STATE_VARIABLE_Globals_22_22 = STATE_VARIABLE_Globals_17_17;
    Var_30 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 523, &SourceOptionValue_59);
    switch (SourceOptionValue_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_31_31 = STATE_VARIABLE_Globals_22_22;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 593, Var_30, STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_31_31);
        break;
    }
    succeeded = mercury__io__have_symlinks_0_p_0();
    if (succeeded)
      *STATE_VARIABLE_Globals_8 = STATE_VARIABLE_Globals_31_31;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 664, Var_30, STATE_VARIABLE_Globals_31_31, STATE_VARIABLE_Globals_8);
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv8_LambdaHeadVar__2_225;

    conv8_LambdaHeadVar__2_225 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2490__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_225));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv7_LambdaHeadVar__2_220;

    conv7_LambdaHeadVar__2_220 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2496__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_220));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv6_LambdaHeadVar__2_207;

    conv6_LambdaHeadVar__2_207 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2468__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_207));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv5_LambdaHeadVar__2_201;

    conv5_LambdaHeadVar__2_201 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2464__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_201));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__handle_directory_options__2446__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = libs__handle_options__IntroducedFrom__pred__handle_directory_options__2446__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv4_LambdaHeadVar__2_182;

    conv4_LambdaHeadVar__2_182 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2428__1_3_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_182));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_LambdaHeadVar__2_163;

    conv3_LambdaHeadVar__2_163 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2393__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_163));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_153;

    conv2_LambdaHeadVar__2_153 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2383__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_153));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_LambdaHeadVar__2_141;

    conv1_LambdaHeadVar__2_141 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2374__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_141));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_LambdaHeadVar__2_126;

    conv0_LambdaHeadVar__2_126 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2354__1_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_126));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
libs__handle_options__handle_directory_options_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_61,
  MR_Word * STATE_VARIABLE_Globals_62)
{
  {
    MR_bool succeeded;
    MR_Word InvokedByMMCMake_6;
    MR_Word UseGradeSubdirs_7;
    MR_String MercuryLinkage_9;
    MR_Word DefaultRuntimeLibraryDirs_10;
    MR_Word MaybeStdLibDir_11;
    MR_Word MaybeConfDir_17;
    MR_Word ConfigFile_20;
    MR_Word MercuryLibDirs_22;
    MR_String GradeString_23;
    MR_Word UseSearchDirs_36;
    MR_Word SearchLibFilesDirs_39;
    MR_Word IntermodDirs2_40;
    MR_String TargetArch_41;
    MR_Word ToGradeSubdir_42;
    MR_Word LinkLibDirs_51;
    MR_Word InitDirs_54;
    MR_Word UseSubdirs_55;
    MR_Word STATE_VARIABLE_Globals_67_67;
    MR_Word STATE_VARIABLE_Globals_73_73;
    MR_Word STATE_VARIABLE_Globals_78_78;
    MR_Word STATE_VARIABLE_Globals_97_97;
    MR_Word STATE_VARIABLE_Globals_105_105;
    MR_Word STATE_VARIABLE_Globals_117_117;
    MR_Word STATE_VARIABLE_Globals_169_169;
    MR_Word STATE_VARIABLE_Globals_176_176;
    MR_Word STATE_VARIABLE_Globals_197_197;
    MR_Word Var_213;
    MR_Word STATE_VARIABLE_Globals_214_214;
    MR_Word Var_216;
    MR_Word STATE_VARIABLE_Globals_217_217;
    MR_String Var_110;
    MR_Word ToMihsSubdir_56;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_61, (MR_Integer) 660, &InvokedByMMCMake_6);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_61, (MR_Integer) 679, &UseGradeSubdirs_7);
    succeeded = (OpMode_4 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
    {
      succeeded = (InvokedByMMCMake_6 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (UseGradeSubdirs_7 == (MR_Integer) 1);
    }
    if (succeeded)
      libs__globals__set_option_4_p_0((MR_Integer) 678, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_0_61, &STATE_VARIABLE_Globals_67_67);
    else
      STATE_VARIABLE_Globals_67_67 = STATE_VARIABLE_Globals_0_61;
    if ((OpMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3))
    {
      MR_Word OpModeArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_4, (MR_Integer) 0))));
      MR_Word Var_69;
      MR_Word Var_70;

      succeeded = ((MR_tag((MR_Word) OpModeArgs_8)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_8, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_70 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0))) & (MR_Integer) 3);
          succeeded = (Var_70 == (MR_Integer) 2);
        }
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      STATE_VARIABLE_Globals_73_73 = STATE_VARIABLE_Globals_67_67;
    else
      libs__globals__set_option_4_p_0((MR_Integer) 683, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_67_67, &STATE_VARIABLE_Globals_73_73);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_73_73, (MR_Integer) 591, &MercuryLinkage_9);
    succeeded = (strcmp(MercuryLinkage_9, (MR_String) "static") == 0);
    if (succeeded)
    {
      DefaultRuntimeLibraryDirs_10 = (MR_Integer) 0;
      libs__globals__set_option_4_p_0((MR_Integer) 575, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_73_73, &STATE_VARIABLE_Globals_78_78);
    }
    else
    {
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_73_73, (MR_Integer) 575, &DefaultRuntimeLibraryDirs_10);
      STATE_VARIABLE_Globals_78_78 = STATE_VARIABLE_Globals_73_73;
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_78_78, (MR_Integer) 584, &MaybeStdLibDir_11);
    if ((MaybeStdLibDir_11 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__globals__set_option_4_p_0((MR_Integer) 683, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_78_78, &STATE_VARIABLE_Globals_97_97);
    else
    {
      MR_String StdLibDir_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeStdLibDir_11, (MR_Integer) 0))));
      MR_Word OptionTable2_13;
      MR_Word OptionTable_14;
      MR_Word LinkLibDirs0_15;
      MR_Word STATE_VARIABLE_Globals_86_86;
      MR_Word Var_89;
      MR_Word STATE_VARIABLE_Globals_90_90;
      MR_Word Var_91;
      MR_String Var_92;

      libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_78_78, &OptionTable2_13);
      libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_12, OptionTable2_13, &OptionTable_14);
      libs__globals__set_options_3_p_0(OptionTable_14, STATE_VARIABLE_Globals_78_78, &STATE_VARIABLE_Globals_86_86);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_86_86, (MR_Integer) 573, &LinkLibDirs0_15);
      Var_92 = mercury__dir__f_slash_2_f_0(StdLibDir_12, (MR_String) "lib");
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (LinkLibDirs0_15));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (Var_91));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 573, Var_89, STATE_VARIABLE_Globals_86_86, &STATE_VARIABLE_Globals_90_90);
      switch (DefaultRuntimeLibraryDirs_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_97_97 = STATE_VARIABLE_Globals_90_90;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath0_16;
            MR_Word Var_96;
            MR_Word Var_98;
            MR_String Var_99;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_90_90, (MR_Integer) 574, &Rpath0_16);
            Var_99 = mercury__dir__f_slash_2_f_0(StdLibDir_12, (MR_String) "lib");
            {
              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (Var_99));
              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Rpath0_16));
            }
            {
              Var_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_96, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_96, 1) = ((MR_Box) (Var_98));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 574, Var_96, STATE_VARIABLE_Globals_90_90, &STATE_VARIABLE_Globals_97_97);
          }
          break;
      }
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_97_97, (MR_Integer) 665, &MaybeConfDir_17);
    if ((MaybeConfDir_17 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_105_105 = STATE_VARIABLE_Globals_97_97;
    else
    {
      MR_String ConfDir_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_17, (MR_Integer) 0))));
      MR_Word CIncludeDirs0_19;
      MR_Word Var_104;
      MR_Word Var_106;
      MR_String Var_107;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_97_97, (MR_Integer) 527, &CIncludeDirs0_19);
      Var_107 = mercury__dir__f_slash_2_f_0(ConfDir_18, (MR_String) "conf");
      {
        Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Var_107));
        MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) (CIncludeDirs0_19));
      }
      {
        Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) (Var_106));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 527, Var_104, STATE_VARIABLE_Globals_97_97, &STATE_VARIABLE_Globals_105_105);
    }
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_105_105, (MR_Integer) 676, &ConfigFile_20);
    succeeded = (ConfigFile_20 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_110 = ((MR_String) ((MR_hl_field(MR_mktag(1), ConfigFile_20, (MR_Integer) 0))));
      succeeded = (strcmp(Var_110, (MR_String) "") == 0);
    }
    if (succeeded)
      if ((MaybeConfDir_17 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__globals__set_option_4_p_0((MR_Integer) 676, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[230])), STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_117_117);
      else
      {
        MR_String ConfDir1_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeConfDir_17, (MR_Integer) 0))));
        MR_Word Var_116;
        MR_Word Var_118;
        MR_String Var_119;
        MR_String Var_120;

        Var_120 = mercury__dir__f_slash_2_f_0(ConfDir1_21, (MR_String) "conf");
        Var_119 = mercury__dir__f_slash_2_f_0(Var_120, (MR_String) "Mercury.config");
        {
          Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Var_119));
        }
        {
          Var_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_116, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_116, 1) = ((MR_Box) (Var_118));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 676, Var_116, STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_117_117);
      }
    else
      STATE_VARIABLE_Globals_117_117 = STATE_VARIABLE_Globals_105_105;
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_117_117, (MR_Integer) 578, &MercuryLibDirs_22);
    libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_117_117, &GradeString_23);
    if ((MercuryLibDirs_22 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Globals_169_169 = STATE_VARIABLE_Globals_117_117;
    else
    {
      MR_Word ExtraLinkLibDirs_26;
      MR_Word LinkLibDirs1_28;
      MR_Word ExtraIncludeDirs_30;
      MR_Word CIncludeDirs_31;
      MR_Word ExtraIntermodDirs_32;
      MR_Word IntermodDirs0_33;
      MR_Word ExtraInitDirs_34;
      MR_Word InitDirs1_35;
      MR_Word Var_124;
      MR_Word Var_131;
      MR_Word STATE_VARIABLE_Globals_132_132;
      MR_Word Var_133;
      MR_Word STATE_VARIABLE_Globals_137_137;
      MR_Word Var_139;
      MR_Word Var_148;
      MR_Word STATE_VARIABLE_Globals_149_149;
      MR_Word Var_150;
      MR_Word Var_151;
      MR_Word Var_158;
      MR_Word STATE_VARIABLE_Globals_159_159;
      MR_Word Var_160;
      MR_Word Var_161;
      MR_Word Var_168;
      MR_Word Var_170;

      {
        Var_124 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_124, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_124, 3) = ((MR_Box) (GradeString_23));
      }
      ExtraLinkLibDirs_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_124, MercuryLibDirs_22);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_117_117, (MR_Integer) 573, &LinkLibDirs1_28);
      Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_28, ExtraLinkLibDirs_26);
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_131, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_131, 1) = ((MR_Box) (Var_133));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 573, Var_131, STATE_VARIABLE_Globals_117_117, &STATE_VARIABLE_Globals_132_132);
      switch (DefaultRuntimeLibraryDirs_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_Globals_137_137 = STATE_VARIABLE_Globals_132_132;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rpath_29;
            MR_Word Var_136;
            MR_Word Var_138;

            libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_132_132, (MR_Integer) 574, &Rpath_29);
            Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_29, ExtraLinkLibDirs_26);
            {
              Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (Var_138));
            }
            libs__globals__set_option_4_p_0((MR_Integer) 574, Var_136, STATE_VARIABLE_Globals_132_132, &STATE_VARIABLE_Globals_137_137);
          }
          break;
      }
      {
        Var_139 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_2));
        MR_hl_field(MR_mktag(0), Var_139, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_139, 3) = ((MR_Box) (GradeString_23));
      }
      ExtraIncludeDirs_30 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_139, MercuryLibDirs_22);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_137_137, (MR_Integer) 527, &CIncludeDirs_31);
      Var_150 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_30, CIncludeDirs_31);
      {
        Var_148 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_148, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_148, 1) = ((MR_Box) (Var_150));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 527, Var_148, STATE_VARIABLE_Globals_137_137, &STATE_VARIABLE_Globals_149_149);
      {
        Var_151 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_151, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_151, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_3));
        MR_hl_field(MR_mktag(0), Var_151, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_151, 3) = ((MR_Box) (GradeString_23));
      }
      ExtraIntermodDirs_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_151, MercuryLibDirs_22);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_149_149, (MR_Integer) 681, &IntermodDirs0_33);
      Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_32, IntermodDirs0_33);
      {
        Var_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_158, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_158, 1) = ((MR_Box) (Var_160));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 681, Var_158, STATE_VARIABLE_Globals_149_149, &STATE_VARIABLE_Globals_159_159);
      {
        Var_161 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_161, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_161, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_4));
        MR_hl_field(MR_mktag(0), Var_161, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_161, 3) = ((MR_Box) (GradeString_23));
      }
      ExtraInitDirs_34 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_161, MercuryLibDirs_22);
      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_159_159, (MR_Integer) 586, &InitDirs1_35);
      Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_35, ExtraInitDirs_34);
      {
        Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_168, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_168, 1) = ((MR_Box) (Var_170));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 586, Var_168, STATE_VARIABLE_Globals_159_159, &STATE_VARIABLE_Globals_169_169);
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_169_169, (MR_Integer) 682, &UseSearchDirs_36);
    switch (UseSearchDirs_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_176_176 = STATE_VARIABLE_Globals_169_169;
        break;
      case (MR_Integer) 1:
        {
          MR_Word IntermodDirs1_37;
          MR_Word SearchDirs_38;
          MR_Word Var_175;
          MR_Word Var_177;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_169_169, (MR_Integer) 681, &IntermodDirs1_37);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_169_169, (MR_Integer) 680, &SearchDirs_38);
          Var_177 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_37, SearchDirs_38);
          {
            Var_175 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_175, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_175, 1) = ((MR_Box) (Var_177));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 681, Var_175, STATE_VARIABLE_Globals_169_169, &STATE_VARIABLE_Globals_176_176);
        }
        break;
    }
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_176_176, (MR_Integer) 580, &SearchLibFilesDirs_39);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_176_176, (MR_Integer) 681, &IntermodDirs2_40);
    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_176_176, (MR_Integer) 697, &TargetArch_41);
    {
      ToGradeSubdir_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ToGradeSubdir_42, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_42, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_5));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_42, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_42, 3) = ((MR_Box) (GradeString_23));
      MR_hl_field(MR_mktag(0), ToGradeSubdir_42, 4) = ((MR_Box) (TargetArch_41));
    }
    switch (UseGradeSubdirs_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IntermodDirs3_46;
          MR_Word LinkLibDirs2_47;
          MR_Word InitDirs2_48;
          MR_Word Var_196;

          IntermodDirs3_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_39, IntermodDirs2_40);
          {
            Var_196 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_196, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_196, 1) = ((MR_Box) (IntermodDirs3_46));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 681, Var_196, STATE_VARIABLE_Globals_176_176, &STATE_VARIABLE_Globals_197_197);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_197_197, (MR_Integer) 573, &LinkLibDirs2_47);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_197_197, (MR_Integer) 586, &InitDirs2_48);
          LinkLibDirs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_39, LinkLibDirs2_47);
          InitDirs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_39, InitDirs2_48);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String GradeSubdir_44;
          MR_Word SearchLibFilesGradeSubdirs_45;
          MR_Word ToGradeLibDir_49;
          MR_Word SearchGradeLibDirs_50;
          MR_Word ToGradeInitDir_52;
          MR_Word SearchGradeInitDirs_53;
          MR_String Var_186;
          MR_Word Var_188;
          MR_Word Var_190;
          MR_Word Var_191;
          MR_Word Var_192;
          MR_Word Var_193;
          MR_String Var_194;
          MR_Word IntermodDirs3_258;
          MR_Word LinkLibDirs2_259;
          MR_Word InitDirs2_260;
          MR_Word Var_261;

          Var_186 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_23);
          GradeSubdir_44 = mercury__dir__f_slash_2_f_0(Var_186, TargetArch_41);
          SearchLibFilesGradeSubdirs_45 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_42, SearchLibFilesDirs_39);
          {
            Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_188, 0) = ((MR_Box) (GradeSubdir_44));
            MR_hl_field(MR_mktag(1), Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_194 = mercury__dir__this_directory_0_f_0();
          {
            Var_193 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_193, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), Var_193, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_6));
            MR_hl_field(MR_mktag(0), Var_193, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_193, 3) = ((MR_Box) (Var_194));
          }
          {
            Var_192 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_192, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_192, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_7));
            MR_hl_field(MR_mktag(0), Var_192, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_192, 3) = ((MR_Box) (Var_193));
          }
          Var_191 = mercury__list__filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_192, IntermodDirs2_40);
          Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_45, Var_191);
          IntermodDirs3_258 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_188, Var_190);
          {
            Var_261 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_261, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Var_261, 1) = ((MR_Box) (IntermodDirs3_258));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 681, Var_261, STATE_VARIABLE_Globals_176_176, &STATE_VARIABLE_Globals_197_197);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_197_197, (MR_Integer) 573, &LinkLibDirs2_259);
          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_197_197, (MR_Integer) 586, &InitDirs2_260);
          {
            ToGradeLibDir_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeLibDir_49, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_49, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_8));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_49, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeLibDir_49, 3) = ((MR_Box) (ToGradeSubdir_42));
          }
          SearchGradeLibDirs_50 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_49, SearchLibFilesDirs_39);
          LinkLibDirs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_50, LinkLibDirs2_259);
          {
            ToGradeInitDir_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToGradeInitDir_52, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_52, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_9));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_52, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToGradeInitDir_52, 3) = ((MR_Box) (ToGradeSubdir_42));
          }
          SearchGradeInitDirs_53 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_52, SearchLibFilesDirs_39);
          InitDirs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_53, InitDirs2_260);
        }
        break;
    }
    {
      Var_213 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_213, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_213, 1) = ((MR_Box) (LinkLibDirs_51));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 573, Var_213, STATE_VARIABLE_Globals_197_197, &STATE_VARIABLE_Globals_214_214);
    {
      Var_216 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_216, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(MR_mktag(3), Var_216, 1) = ((MR_Box) (InitDirs_54));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 586, Var_216, STATE_VARIABLE_Globals_214_214, &STATE_VARIABLE_Globals_217_217);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_217_217, (MR_Integer) 678, &UseSubdirs_55);
    switch (UseGradeSubdirs_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (UseSubdirs_55 == (MR_Integer) 1);
          if (succeeded)
          {
            ToMihsSubdir_56 = (MR_Word) (&libs__handle_options_scalar_common_7[0]);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ToMihsSubdir_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ToMihsSubdir_56, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_56, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_11));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_56, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ToMihsSubdir_56, 3) = ((MR_Box) (ToGradeSubdir_42));
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    if (succeeded)
    {
      MR_Word CIncludeDirs1_57;
      MR_String MihsSubdir_58;
      MR_Word SearchLibMihsSubdirs_59;
      MR_Word SubdirCIncludeDirs_60;
      MR_String Var_231;
      MR_String Var_232;
      MR_Word Var_233;
      MR_Word Var_234;
      MR_Word Var_236;
      MR_Box MR_CALL (* func_9)(MR_Box, MR_Box);
      MR_Box conv10_MihsSubdir_58;

      libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_217_217, (MR_Integer) 527, &CIncludeDirs1_57);
      Var_231 = mercury__dir__this_directory_0_f_0();
      func_9 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), ToMihsSubdir_56, (MR_Integer) 1))));
      conv10_MihsSubdir_58 = func_9(((MR_Box) (ToMihsSubdir_56)), ((MR_Box) (Var_231)));
      MihsSubdir_58 = ((MR_String) (conv10_MihsSubdir_58));
      SearchLibMihsSubdirs_59 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_56, SearchLibFilesDirs_39);
      Var_232 = mercury__dir__this_directory_0_f_0();
      Var_234 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_59, CIncludeDirs1_57);
      {
        Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (MihsSubdir_58));
        MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (Var_234));
      }
      {
        SubdirCIncludeDirs_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_60, 0) = ((MR_Box) (Var_232));
        MR_hl_field(MR_mktag(1), SubdirCIncludeDirs_60, 1) = ((MR_Box) (Var_233));
      }
      {
        Var_236 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_236, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_236, 1) = ((MR_Box) (SubdirCIncludeDirs_60));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 527, Var_236, STATE_VARIABLE_Globals_217_217, STATE_VARIABLE_Globals_62);
    }
    else
      *STATE_VARIABLE_Globals_62 = STATE_VARIABLE_Globals_217_217;
  }
}

static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_5_p_0(
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  {
    MR_bool succeeded;
    MR_Word Smart_9;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_10, (MR_Integer) 140, &Smart_9);
    switch (Smart_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Globals_11 = STATE_VARIABLE_Globals_0_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_18_18;
          MR_Word STATE_VARIABLE_Globals_23_23;
          MR_Word Var_25;
          MR_Word Var_26;
          MR_Word Var_27;

          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_0_10, (MR_Integer) 486, (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word WarnSmart_38;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__set_option_4_p_0((MR_Integer) 140, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_10, &STATE_VARIABLE_Globals_18_18);
            libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_18_18, (MR_Integer) 31, &WarnSmart_38);
            switch (WarnSmart_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Halt_39;
                  MR_String Var_47;

                  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: smart recompilation ", (MR_String) "does not yet work with ");
                  mercury__io__write_string_3_p_0(Var_47);
                  mercury__io__write_string_3_p_0((MR_String) "\140--intermodule-optimization\'");
                  mercury__io__write_string_3_p_0((MR_String) ".\n");
                  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_18_18, (MR_Integer) 3, &Halt_39);
                  switch (Halt_39) {
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
          else
            STATE_VARIABLE_Globals_18_18 = STATE_VARIABLE_Globals_0_10;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_18_18, (MR_Integer) 488, (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word WarnSmart_64;

            libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
            libs__globals__set_option_4_p_0((MR_Integer) 140, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_18_18, &STATE_VARIABLE_Globals_23_23);
            libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_23_23, (MR_Integer) 31, &WarnSmart_64);
            switch (WarnSmart_64) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Halt_65;
                  MR_String Var_73;

                  Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: smart recompilation ", (MR_String) "does not yet work with ");
                  mercury__io__write_string_3_p_0(Var_73);
                  mercury__io__write_string_3_p_0((MR_String) "\140--use-opt-files\'");
                  mercury__io__write_string_3_p_0((MR_String) ".\n");
                  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_23_23, (MR_Integer) 3, &Halt_65);
                  switch (Halt_65) {
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
          else
            STATE_VARIABLE_Globals_23_23 = STATE_VARIABLE_Globals_18_18;
          succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_6, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_25, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_26)) == (MR_Integer) 1);
              if (succeeded)
              {
                Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_27 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Globals_11 = STATE_VARIABLE_Globals_23_23;
          else
            libs__handle_options__disable_smart_recompilation_5_p_0((MR_String) "\140--no-target-code-only\'", STATE_VARIABLE_Globals_23_23, STATE_VARIABLE_Globals_11);
        }
        break;
    }
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
    libs__globals__set_option_4_p_0((MR_Integer) 140, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
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
libs__handle_options__handle_option_to_option_implications_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_4,
  MR_Word * STATE_VARIABLE_Globals_5)
{
  {
    MR_Word Var_8 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
    MR_Word STATE_VARIABLE_Globals_9_9;
    MR_Word Var_13;
    MR_Word STATE_VARIABLE_Globals_14_14;
    MR_Word STATE_VARIABLE_Globals_19_19;
    MR_Word STATE_VARIABLE_Globals_24_24;
    MR_Word STATE_VARIABLE_Globals_29_29;
    MR_Word STATE_VARIABLE_Globals_34_34;
    MR_Word STATE_VARIABLE_Globals_39_39;
    MR_Word STATE_VARIABLE_Globals_44_44;
    MR_Word STATE_VARIABLE_Globals_49_49;
    MR_Word STATE_VARIABLE_Globals_54_54;
    MR_Word STATE_VARIABLE_Globals_59_59;
    MR_Word STATE_VARIABLE_Globals_64_64;
    MR_Word STATE_VARIABLE_Globals_69_69;
    MR_Word STATE_VARIABLE_Globals_74_74;
    MR_Word STATE_VARIABLE_Globals_79_79;
    MR_Word STATE_VARIABLE_Globals_84_84;
    MR_Word STATE_VARIABLE_Globals_89_89;
    MR_Word STATE_VARIABLE_Globals_94_94;
    MR_Word STATE_VARIABLE_Globals_99_99;
    MR_Word STATE_VARIABLE_Globals_104_104;

    libs__handle_options__option_implies_5_p_0((MR_Integer) 660, (MR_Integer) 142, Var_8, STATE_VARIABLE_Globals_0_4, &STATE_VARIABLE_Globals_9_9);
    Var_13 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 69, (MR_Integer) 68, Var_13, STATE_VARIABLE_Globals_9_9, &STATE_VARIABLE_Globals_14_14);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 98, (MR_Integer) 194, Var_13, STATE_VARIABLE_Globals_14_14, &STATE_VARIABLE_Globals_19_19);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 194, (MR_Integer) 192, Var_13, STATE_VARIABLE_Globals_19_19, &STATE_VARIABLE_Globals_24_24);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 193, (MR_Integer) 192, Var_13, STATE_VARIABLE_Globals_24_24, &STATE_VARIABLE_Globals_29_29);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 302, Var_13, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 302, Var_13, STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_39_39);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 255, (MR_Integer) 254, Var_13, STATE_VARIABLE_Globals_39_39, &STATE_VARIABLE_Globals_44_44);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 494, (MR_Integer) 495, Var_13, STATE_VARIABLE_Globals_44_44, &STATE_VARIABLE_Globals_49_49);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 500, (MR_Integer) 498, Var_13, STATE_VARIABLE_Globals_49_49, &STATE_VARIABLE_Globals_54_54);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 508, (MR_Integer) 507, Var_13, STATE_VARIABLE_Globals_54_54, &STATE_VARIABLE_Globals_59_59);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 515, (MR_Integer) 514, Var_13, STATE_VARIABLE_Globals_59_59, &STATE_VARIABLE_Globals_64_64);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 507, (MR_Integer) 506, Var_13, STATE_VARIABLE_Globals_64_64, &STATE_VARIABLE_Globals_69_69);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 514, (MR_Integer) 513, Var_13, STATE_VARIABLE_Globals_69_69, &STATE_VARIABLE_Globals_74_74);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 507, (MR_Integer) 17, Var_13, STATE_VARIABLE_Globals_74_74, &STATE_VARIABLE_Globals_79_79);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 514, (MR_Integer) 17, Var_13, STATE_VARIABLE_Globals_79_79, &STATE_VARIABLE_Globals_84_84);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 490, (MR_Integer) 486, Var_13, STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_89_89);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 490, (MR_Integer) 489, Var_8, STATE_VARIABLE_Globals_89_89, &STATE_VARIABLE_Globals_94_94);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 486, (MR_Integer) 488, Var_8, STATE_VARIABLE_Globals_94_94, &STATE_VARIABLE_Globals_99_99);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 489, (MR_Integer) 488, Var_13, STATE_VARIABLE_Globals_99_99, &STATE_VARIABLE_Globals_104_104);
    libs__globals__set_option_4_p_0((MR_Integer) 488, Var_8, STATE_VARIABLE_Globals_104_104, STATE_VARIABLE_Globals_5);
  }
}

static void MR_CALL 
libs__handle_options__handle_opmode_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15)
{
  {
    MR_Word Smart0_6;
    MR_Word Smart_9;
    MR_Word STATE_VARIABLE_Globals_43_43;
    MR_Word Var_45;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 140, &Smart0_6);
    switch (MR_tag((MR_Word) OpMode_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OpMode_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              Smart_9 = (MR_Integer) 0;
              STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_0_14;
            }
            break;
          case (MR_Integer) 1:
            {
              libs__globals__set_option_4_p_0((MR_Integer) 30, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_43_43);
              Smart_9 = (MR_Integer) 0;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          Smart_9 = (MR_Integer) 0;
          STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_0_14;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word OpModeArgs_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_4, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) OpModeArgs_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                Smart_9 = (MR_Integer) 0;
                STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_0_14;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word OpModeArgsMI_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OpModeArgs_7, (MR_Integer) 0))) & (MR_Integer) 3);
                MR_Word Var_34 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
                MR_Word STATE_VARIABLE_Globals_35_35;

                libs__globals__set_option_4_p_0((MR_Integer) 161, Var_34, STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_35_35);
                switch (OpModeArgsMI_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_42;

                      {
                        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_42, 0) = (MR_Box) ((MR_Unsigned) (Smart0_6));
                      }
                      libs__globals__set_option_4_p_0((MR_Integer) 141, Var_42, STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_43_43);
                    }
                    break;
                  case (MR_Integer) 2:
                    libs__globals__set_option_4_p_0((MR_Integer) 141, Var_34, STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_43_43);
                    break;
                }
                Smart_9 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word OpModeAugment_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_7, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) OpModeAugment_10)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(OpModeAugment_10)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          libs__globals__set_option_4_p_0((MR_Integer) 161, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_43_43);
                          Smart_9 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word STATE_VARIABLE_Globals_23_23;

                          libs__globals__set_option_4_p_0((MR_Integer) 490, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_23_23);
                          libs__globals__set_option_4_p_0((MR_Integer) 161, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_23_23, &STATE_VARIABLE_Globals_43_43);
                          Smart_9 = (MR_Integer) 0;
                        }
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                        {
                          Smart_9 = (MR_Integer) 0;
                          STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_0_14;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      Smart_9 = Smart0_6;
                      STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_0_14;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = (MR_Box) ((MR_Unsigned) (Smart_9));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 140, Var_45, STATE_VARIABLE_Globals_43_43, STATE_VARIABLE_Globals_15);
  }
}

static void MR_CALL 
libs__handle_options__handle_stack_layout_options_6_p_0(
  MR_Word STATE_VARIABLE_Globals_0_15,
  MR_Word * STATE_VARIABLE_Globals_16,
  MR_Word OT_OptDups0_8,
  MR_Word * OT_OptDups_9,
  MR_Word OT_StdLabels0_10,
  MR_Word * OT_StdLabels_11)
{
  {
    MR_bool succeeded;
    MR_Word ProcIdStackLayout_12;
    MR_Word AgcStackLayout_13;
    MR_Word BasicStackLayout_14;
    MR_Word Var_19 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]));
    MR_Word STATE_VARIABLE_Globals_20_20;
    MR_Word STATE_VARIABLE_Globals_25_25;
    MR_Word STATE_VARIABLE_Globals_30_30;
    MR_Word SourceOptionValue_46;
    MR_Word SourceOptionValue_54;
    MR_Word SourceOptionValue_62;
    MR_Word SourceOptionValue_70;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 302, &SourceOptionValue_46);
    switch (SourceOptionValue_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_20_20 = STATE_VARIABLE_Globals_0_15;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 305, Var_19, STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_20_20);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_20_20, (MR_Integer) 306, &SourceOptionValue_54);
    switch (SourceOptionValue_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_25_25 = STATE_VARIABLE_Globals_20_20;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 305, Var_19, STATE_VARIABLE_Globals_20_20, &STATE_VARIABLE_Globals_25_25);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_25_25, (MR_Integer) 305, &SourceOptionValue_62);
    switch (SourceOptionValue_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_30_30 = STATE_VARIABLE_Globals_25_25;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 303, Var_19, STATE_VARIABLE_Globals_25_25, &STATE_VARIABLE_Globals_30_30);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_30, (MR_Integer) 304, &SourceOptionValue_70);
    switch (SourceOptionValue_70) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_30_30;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 303, Var_19, STATE_VARIABLE_Globals_30_30, STATE_VARIABLE_Globals_16);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 305, &ProcIdStackLayout_12);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 304, &AgcStackLayout_13);
    succeeded = (ProcIdStackLayout_12 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (AgcStackLayout_13 == (MR_Integer) 1);
    if (succeeded)
      *OT_OptDups_9 = (MR_Integer) 1;
    else
      *OT_OptDups_9 = OT_OptDups0_8;
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 303, &BasicStackLayout_14);
    switch (BasicStackLayout_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *OT_StdLabels_11 = OT_StdLabels0_10;
        break;
      case (MR_Integer) 1:
        *OT_StdLabels_11 = (MR_Integer) 1;
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__handle_record_term_sizes_options_5_p_0(
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15,
  MR_Word * AllowOptLCMCTermSize_7,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    MR_bool succeeded;
    MR_Word RecordTermSizesAsWords_9;
    MR_Word RecordTermSizesAsCells_10;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 248, &RecordTermSizesAsWords_9);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 249, &RecordTermSizesAsCells_10);
    succeeded = (RecordTermSizesAsWords_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (RecordTermSizesAsCells_10 == (MR_Integer) 1);
    if (succeeded)
    {
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[206])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
      *AllowOptLCMCTermSize_7 = (MR_Integer) 1;
      *STATE_VARIABLE_Globals_15 = STATE_VARIABLE_Globals_0_14;
    }
    else
    {
      succeeded = (RecordTermSizesAsWords_9 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (RecordTermSizesAsCells_10 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word HighLevelCode_12;
        MR_Word STATE_VARIABLE_Globals_29_29;

        libs__globals__set_option_4_p_0((MR_Integer) 233, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_29_29);
        *AllowOptLCMCTermSize_7 = (MR_Integer) 0;
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 296, &HighLevelCode_12);
        libs__globals__set_option_4_p_0((MR_Integer) 282, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_29_29, STATE_VARIABLE_Globals_15);
        switch (HighLevelCode_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
            break;
        }
      }
      else
      {
        *AllowOptLCMCTermSize_7 = (MR_Integer) 1;
        *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
        *STATE_VARIABLE_Globals_15 = STATE_VARIABLE_Globals_0_14;
      }
    }
  }
}

static void MR_CALL 
libs__handle_options__handle_profiling_options_9_p_0(
  MR_Word STATE_VARIABLE_Globals_0_22,
  MR_Word * STATE_VARIABLE_Globals_23,
  MR_Word Target_11,
  MR_Word ProfileDeep_12,
  MR_Word * STATE_VARIABLE_AllowSrcChangesProf_24,
  MR_Integer OT_HigherOrderSizeLimit0_14,
  MR_Integer * OT_HigherOrderSizeLimit_15,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_String ExpComp_21;
    MR_Word Var_29 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]));
    MR_Word STATE_VARIABLE_Globals_30_30;
    MR_Word STATE_VARIABLE_Globals_35_35;
    MR_Word STATE_VARIABLE_Globals_40_40;
    MR_Word STATE_VARIABLE_Globals_45_45;
    MR_Word STATE_VARIABLE_AllowSrcChangesProf_70_70;
    MR_Word SourceOptionValue_80;
    MR_Word SourceOptionValue_88;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_22, (MR_Integer) 244, &SourceOptionValue_80);
    switch (SourceOptionValue_80) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_30_30 = STATE_VARIABLE_Globals_0_22;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 235, Var_29, STATE_VARIABLE_Globals_0_22, &STATE_VARIABLE_Globals_30_30);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_30, (MR_Integer) 235, &SourceOptionValue_88);
    switch (SourceOptionValue_88) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_35_35 = STATE_VARIABLE_Globals_30_30;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 247, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_30_30, &STATE_VARIABLE_Globals_35_35);
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 233, Var_29, STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_40_40);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 305, Var_29, STATE_VARIABLE_Globals_40_40, &STATE_VARIABLE_Globals_45_45);
    switch (ProfileDeep_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_AllowSrcChangesProf_70_70 = (MR_Integer) 1;
          *OT_HigherOrderSizeLimit_15 = OT_HigherOrderSizeLimit0_14;
          *STATE_VARIABLE_Globals_23 = STATE_VARIABLE_Globals_45_45;
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HighLevelCode_17;
          MR_Word ProfOptimized_19;
          MR_Word LotsOfHOSpec_20;
          MR_Word STATE_VARIABLE_Globals_61_61;

          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_45_45, (MR_Integer) 296, &HighLevelCode_17);
          succeeded = (HighLevelCode_17 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_11 == (MR_Integer) 0);
          if (succeeded)
            *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
          else
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[204])), STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
          libs__globals__set_option_4_p_0((MR_Integer) 350, Var_29, STATE_VARIABLE_Globals_45_45, &STATE_VARIABLE_Globals_61_61);
          libs__handle_options__option_implies_5_p_0((MR_Integer) 244, (MR_Integer) 152, Var_29, STATE_VARIABLE_Globals_61_61, STATE_VARIABLE_Globals_23);
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_23, (MR_Integer) 152, &ProfOptimized_19);
          switch (ProfOptimized_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_AllowSrcChangesProf_70_70 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_AllowSrcChangesProf_70_70 = (MR_Integer) 1;
              break;
          }
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_23, (MR_Integer) 246, &LotsOfHOSpec_20);
          switch (LotsOfHOSpec_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *OT_HigherOrderSizeLimit_15 = OT_HigherOrderSizeLimit0_14;
              break;
            case (MR_Integer) 1:
              *OT_HigherOrderSizeLimit_15 = (MR_Integer) 999999;
              break;
          }
        }
        break;
    }
    libs__globals__lookup_string_option_3_p_0(*STATE_VARIABLE_Globals_23, (MR_Integer) 250, &ExpComp_21);
    succeeded = (strcmp(ExpComp_21, (MR_String) "") == 0);
    if (succeeded)
      *STATE_VARIABLE_AllowSrcChangesProf_24 = STATE_VARIABLE_AllowSrcChangesProf_70_70;
    else
      *STATE_VARIABLE_AllowSrcChangesProf_24 = (MR_Integer) 0;
  }
}

static void MR_CALL 
libs__handle_options__maybe_update_event_set_file_name_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  {
    MR_bool succeeded;
    MR_String EventSetFileName0_7;

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_10, (MR_Integer) 212, &EventSetFileName0_7);
    succeeded = (strcmp(EventSetFileName0_7, (MR_String) "") == 0);
    if (succeeded)
    {
      MR_Word MaybeEventSetFileName_8;

      mercury__io__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_8);
      if ((MaybeEventSetFileName_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Globals_11 = STATE_VARIABLE_Globals_0_10;
      else
      {
        MR_String EventSetFileName_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeEventSetFileName_8, (MR_Integer) 0))));
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (EventSetFileName_9));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 212, Var_18, STATE_VARIABLE_Globals_0_10, STATE_VARIABLE_Globals_11);
      }
    }
    else
      *STATE_VARIABLE_Globals_11 = STATE_VARIABLE_Globals_0_10;
  }
}

static void MR_CALL 
libs__handle_options__handle_debugging_options_9_p_0(
  MR_Word Target_10,
  MR_Word TraceLevel_11,
  MR_Word TraceEnabled_12,
  MR_Word SSTraceLevel_13,
  MR_Word * STATE_VARIABLE_AllowSrcChanges_21,
  MR_Word STATE_VARIABLE_Globals_0_22,
  MR_Word * STATE_VARIABLE_Globals_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded;
    MR_Word Var_28 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]));
    MR_Word STATE_VARIABLE_Globals_29_29;
    MR_Word STATE_VARIABLE_Globals_34_34;
    MR_Word STATE_VARIABLE_Globals_39_39;
    MR_Word STATE_VARIABLE_Globals_44_44;
    MR_Word STATE_VARIABLE_AllowSrcChanges_61_61;
    MR_Word STATE_VARIABLE_Globals_76_76;
    MR_Word SourceOptionValue_90;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_22, (MR_Integer) 223, &SourceOptionValue_90);
    switch (SourceOptionValue_90) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_0_22;
        break;
      case (MR_Integer) 1:
        libs__globals__set_option_4_p_0((MR_Integer) 222, Var_28, STATE_VARIABLE_Globals_0_22, &STATE_VARIABLE_Globals_29_29);
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 150, Var_28, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 150, (MR_Integer) 146, Var_28, STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_39_39);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 149, (MR_Integer) 146, Var_28, STATE_VARIABLE_Globals_39_39, &STATE_VARIABLE_Globals_44_44);
    switch (TraceEnabled_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word HighLevelCode_17;
          MR_Word TraceOptimized_19;
          MR_Word AllowTraceTailRec_20;
          MR_Word STATE_VARIABLE_Globals_64_64;
          MR_Word STATE_VARIABLE_Globals_68_68;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_Globals_72_72;

          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_44_44, (MR_Integer) 296, &HighLevelCode_17);
          succeeded = (HighLevelCode_17 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Target_10 == (MR_Integer) 0);
          if (succeeded)
            *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
          else
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[202])), STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_44_44, (MR_Integer) 144, &TraceOptimized_19);
          switch (TraceOptimized_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_AllowSrcChanges_61_61 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_AllowSrcChanges_61_61 = (MR_Integer) 1;
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 306, Var_28, STATE_VARIABLE_Globals_44_44, &STATE_VARIABLE_Globals_64_64);
          libs__globals__set_option_4_p_0((MR_Integer) 307, Var_28, STATE_VARIABLE_Globals_64_64, &STATE_VARIABLE_Globals_68_68);
          Var_71 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 356, Var_71, STATE_VARIABLE_Globals_68_68, &STATE_VARIABLE_Globals_72_72);
          AllowTraceTailRec_20 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_11);
          switch (AllowTraceTailRec_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              libs__globals__set_option_4_p_0((MR_Integer) 153, Var_71, STATE_VARIABLE_Globals_72_72, &STATE_VARIABLE_Globals_76_76);
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Globals_76_76 = STATE_VARIABLE_Globals_72_72;
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_AllowSrcChanges_61_61 = (MR_Integer) 1;
          libs__globals__set_option_4_p_0((MR_Integer) 153, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_44_44, &STATE_VARIABLE_Globals_76_76);
          *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
        }
        break;
    }
    switch (SSTraceLevel_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        *STATE_VARIABLE_AllowSrcChanges_21 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_AllowSrcChanges_21 = STATE_VARIABLE_AllowSrcChanges_61_61;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 269, (MR_Integer) 271, Var_28, STATE_VARIABLE_Globals_76_76, STATE_VARIABLE_Globals_23);
  }
}

static void MR_CALL 
libs__handle_options__handle_minimal_model_options_5_p_0(
  MR_Word STATE_VARIABLE_Globals_0_17,
  MR_Word * STATE_VARIABLE_Globals_18,
  MR_Word * AllowHijacksMMSC_7,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;
    MR_Word UseMinimalModelStackCopy_9;
    MR_Word UseMinimalModelOwnStacks_10;
    MR_Word UseMinimalModel_11;
    MR_Word DisablePneg_15;
    MR_Word DisableCut_16;
    MR_Word STATE_VARIABLE_Globals_61_61;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_17, (MR_Integer) 256, &UseMinimalModelStackCopy_9);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_17, (MR_Integer) 257, &UseMinimalModelOwnStacks_10);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_9, UseMinimalModelOwnStacks_10, &UseMinimalModel_11);
    succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (UseMinimalModelOwnStacks_10 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[193])), STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
    else
    {
      MR_Word Var_33;
      MR_Word Var_34;

      succeeded = (UseMinimalModel_11 == (MR_Integer) 1);
      if (succeeded)
      {
        Var_33 = (MR_Integer) 296;
        Var_34 = (MR_Integer) 1;
        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_0_17, Var_33, Var_34);
      }
      if (succeeded)
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[197])), STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
      else
      {
        MR_Word Var_45;
        MR_Word Var_46;

        succeeded = (UseMinimalModel_11 == (MR_Integer) 1);
        if (succeeded)
        {
          Var_45 = (MR_Integer) 254;
          Var_46 = (MR_Integer) 1;
          succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_0_17, Var_45, Var_46);
        }
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[200])), STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
        else
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      }
    }
    switch (UseMinimalModelStackCopy_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AllowHijacksMMSC_7 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        *AllowHijacksMMSC_7 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_17, (MR_Integer) 318, &DisablePneg_15);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_17, (MR_Integer) 319, &DisableCut_16);
    succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisablePneg_15 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_60;

      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = (MR_Box) ((MR_Unsigned) (UseMinimalModelStackCopy_9));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 320, Var_60, STATE_VARIABLE_Globals_0_17, &STATE_VARIABLE_Globals_61_61);
    }
    else
      STATE_VARIABLE_Globals_61_61 = STATE_VARIABLE_Globals_0_17;
    succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DisableCut_16 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_64;

      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = (MR_Box) ((MR_Unsigned) (UseMinimalModelStackCopy_9));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 321, Var_64, STATE_VARIABLE_Globals_61_61, STATE_VARIABLE_Globals_18);
    }
    else
      *STATE_VARIABLE_Globals_18 = STATE_VARIABLE_Globals_61_61;
  }
}

static void MR_CALL 
libs__handle_options__handle_gc_options_7_p_0(
  MR_Word STATE_VARIABLE_Globals_0_17,
  MR_Word * STATE_VARIABLE_Globals_18,
  MR_Word GC_Method_9,
  MR_Word OT_OptFrames0_10,
  MR_Word * OT_OptFrames_11,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;

    switch (GC_Method_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          MR_Word HighLevelCode_13;
          MR_Word PutNondetEnvOnHeap_14;
          MR_Word Var_30 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]));
          MR_Word STATE_VARIABLE_Globals_31_31;
          MR_Word STATE_VARIABLE_Globals_35_35;
          MR_Word Var_38;
          MR_Word STATE_VARIABLE_Globals_39_39;
          MR_Word STATE_VARIABLE_Globals_43_43;

          libs__globals__set_option_4_p_0((MR_Integer) 304, Var_30, STATE_VARIABLE_Globals_0_17, &STATE_VARIABLE_Globals_31_31);
          libs__globals__set_option_4_p_0((MR_Integer) 307, Var_30, STATE_VARIABLE_Globals_31_31, &STATE_VARIABLE_Globals_35_35);
          Var_38 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 356, Var_38, STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_39_39);
          libs__globals__set_option_4_p_0((MR_Integer) 339, Var_38, STATE_VARIABLE_Globals_39_39, &STATE_VARIABLE_Globals_43_43);
          libs__globals__set_option_4_p_0((MR_Integer) 340, Var_38, STATE_VARIABLE_Globals_43_43, STATE_VARIABLE_Globals_18);
          *OT_OptFrames_11 = (MR_Integer) 1;
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_18, (MR_Integer) 296, &HighLevelCode_13);
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_18, (MR_Integer) 300, &PutNondetEnvOnHeap_14);
          succeeded = (HighLevelCode_13 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (PutNondetEnvOnHeap_14 == (MR_Integer) 1);
          if (succeeded)
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[189])), STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
          else
            *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 4:
      case (MR_Integer) 1:
        {
          MR_Word GCIsConservative_16;

          *OT_OptFrames_11 = OT_OptFrames0_10;
          GCIsConservative_16 = libs__globals__gc_is_conservative_1_f_0(GC_Method_9);
          switch (GCIsConservative_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Globals_18 = STATE_VARIABLE_Globals_0_17;
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_22 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
                MR_Word STATE_VARIABLE_Globals_23_23;

                libs__globals__set_option_4_p_0((MR_Integer) 339, Var_22, STATE_VARIABLE_Globals_0_17, &STATE_VARIABLE_Globals_23_23);
                libs__globals__set_option_4_p_0((MR_Integer) 340, Var_22, STATE_VARIABLE_Globals_23_23, STATE_VARIABLE_Globals_18);
              }
              break;
          }
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
    }
  }
}

static void MR_CALL 
libs__handle_options__handle_implications_of_parallel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_15,
  MR_Word * STATE_VARIABLE_Globals_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_bool succeeded;
    MR_Word GradeSupportsParConj_7;
    MR_Word Parallel_8;
    MR_Word Threadscope_9;
    MR_Word ImplicitParallelism_11;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word STATE_VARIABLE_Globals_59_59;
    MR_Word STATE_VARIABLE_Globals_84_84;
    MR_Word STATE_VARIABLE_Globals_88_88;

    libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_0_15, &GradeSupportsParConj_7);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 252, &Parallel_8);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 253, &Threadscope_9);
    succeeded = (GradeSupportsParConj_7 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Threadscope_9 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[168])), STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_36_36);
    else
      STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_17;
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 711, &ImplicitParallelism_11);
    switch (ImplicitParallelism_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_Globals_59_59 = STATE_VARIABLE_Globals_0_15;
          *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_36_36;
        }
        break;
      case (MR_Integer) 1:
        switch (GradeSupportsParConj_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              switch (Parallel_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_36_36;
                  break;
                case (MR_Integer) 1:
                  libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[177])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
                  break;
              }
              libs__globals__set_option_4_p_0((MR_Integer) 711, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_59_59);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String FeedbackFile_12;

              libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 712, &FeedbackFile_12);
              succeeded = (strcmp(FeedbackFile_12, (MR_String) "") == 0);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[183])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
              else
                *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_36_36;
              STATE_VARIABLE_Globals_59_59 = STATE_VARIABLE_Globals_0_15;
            }
            break;
        }
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 711, (MR_Integer) 234, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3])), STATE_VARIABLE_Globals_59_59, &STATE_VARIABLE_Globals_84_84);
    switch (GradeSupportsParConj_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__set_option_4_p_0((MR_Integer) 713, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_88_88);
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Globals_88_88 = STATE_VARIABLE_Globals_84_84;
        break;
    }
    libs__handle_options__option_implies_5_p_0((MR_Integer) 252, (MR_Integer) 528, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_88_88, STATE_VARIABLE_Globals_16);
  }
}

static void MR_CALL 
libs__handle_options__handle_implications_of_pregen_target_spf_7_p_0(
  MR_Word STATE_VARIABLE_Globals_0_26,
  MR_Word * STATE_VARIABLE_Globals_27,
  MR_Word Target_9,
  MR_Integer OT_StringBinarySwitchSize0_10,
  MR_Integer * OT_StringBinarySwitchSize_11,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word PregeneratedDist_13;
    MR_Word BackendForeignLanguages_14;
    MR_Word CurrentBackendForeignLanguage_23;
    MR_Word STATE_VARIABLE_Globals_55_55;
    MR_Word Var_59;
    MR_Word STATE_VARIABLE_Globals_60_60;
    MR_Word STATE_VARIABLE_Globals_252_252;
    MR_Word Var_255;
    MR_Word STATE_VARIABLE_Globals_256_256;
    MR_Word STATE_VARIABLE_Globals_261_261;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_26, (MR_Integer) 259, &PregeneratedDist_13);
    switch (PregeneratedDist_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_55_55 = STATE_VARIABLE_Globals_0_26;
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_Globals_32_32;
          MR_Word STATE_VARIABLE_Globals_35_35;
          MR_Word STATE_VARIABLE_Globals_39_39;
          MR_Word Var_42;
          MR_Word STATE_VARIABLE_Globals_43_43;
          MR_Word STATE_VARIABLE_Globals_47_47;
          MR_Word STATE_VARIABLE_Globals_51_51;

          libs__globals__set_word_size_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_0_26, &STATE_VARIABLE_Globals_32_32);
          libs__globals__set_option_4_p_0((MR_Integer) 272, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[0])), STATE_VARIABLE_Globals_32_32, &STATE_VARIABLE_Globals_35_35);
          libs__globals__set_option_4_p_0((MR_Integer) 279, (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[1])), STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_39_39);
          Var_42 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 276, Var_42, STATE_VARIABLE_Globals_39_39, &STATE_VARIABLE_Globals_43_43);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_42, STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_47_47);
          libs__globals__set_option_4_p_0((MR_Integer) 260, Var_42, STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
          libs__globals__set_option_4_p_0((MR_Integer) 282, Var_42, STATE_VARIABLE_Globals_51_51, &STATE_VARIABLE_Globals_55_55);
        }
        break;
    }
    Var_59 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[3]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 260, (MR_Integer) 276, Var_59, STATE_VARIABLE_Globals_55_55, &STATE_VARIABLE_Globals_60_60);
    switch (Target_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer NumPtagBits0_15;
          MR_Integer NumPtagBits_16;
          MR_Word HighLevelCode_18;
          MR_Integer ArgPackBits0_19;
          MR_Integer BitsPerWord_20;
          MR_Integer ArgPackBits_21;
          MR_Word Var_165;
          MR_Word STATE_VARIABLE_Globals_166_166;
          MR_Word STATE_VARIABLE_Specs_187_187;
          MR_Word STATE_VARIABLE_Globals_203_203;
          MR_Word STATE_VARIABLE_Globals_208_208;
          MR_Word Var_251;

          BackendForeignLanguages_14 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[216]));
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 272, &NumPtagBits0_15);
          succeeded = (NumPtagBits0_15 == (MR_Integer) -1);
          if (succeeded)
            libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 275, &NumPtagBits_16);
          else
            NumPtagBits_16 = NumPtagBits0_15;
          {
            Var_165 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_165, 0) = ((MR_Box) (NumPtagBits_16));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 272, Var_165, STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_166_166);
          switch (NumPtagBits_16) {
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
            STATE_VARIABLE_Specs_187_187 = STATE_VARIABLE_Specs_0_28;
          else
          {
            MR_Word NumPtagBitsSpec_17;
            MR_Word Var_169;
            MR_Word Var_172;
            MR_Word Var_175;
            MR_Word Var_176;

            {
              Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_176, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), Var_176, 1) = ((MR_Box) (NumPtagBits_16));
            }
            {
              Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (Var_176));
              MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[161])));
            }
            {
              Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[219])));
              MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_175));
            }
            {
              Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_169, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[218])));
              MR_hl_field(MR_mktag(1), Var_169, 1) = ((MR_Box) (Var_172));
            }
            {
              NumPtagBitsSpec_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NumPtagBitsSpec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[217])));
              MR_hl_field(MR_mktag(1), NumPtagBitsSpec_17, 1) = ((MR_Box) (Var_169));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), NumPtagBitsSpec_17, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_187_187);
          }
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_166_166, (MR_Integer) 296, &HighLevelCode_18);
          switch (HighLevelCode_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Globals_203_203 = STATE_VARIABLE_Globals_166_166;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Globals_191_191;
                MR_Word Var_194;
                MR_Word STATE_VARIABLE_Globals_195_195;
                MR_Word STATE_VARIABLE_Globals_199_199;

                libs__globals__set_option_4_p_0((MR_Integer) 299, Var_59, STATE_VARIABLE_Globals_166_166, &STATE_VARIABLE_Globals_191_191);
                Var_194 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
                libs__globals__set_option_4_p_0((MR_Integer) 292, Var_194, STATE_VARIABLE_Globals_191_191, &STATE_VARIABLE_Globals_195_195);
                libs__globals__set_option_4_p_0((MR_Integer) 293, Var_194, STATE_VARIABLE_Globals_195_195, &STATE_VARIABLE_Globals_199_199);
                libs__globals__set_option_4_p_0((MR_Integer) 294, Var_194, STATE_VARIABLE_Globals_199_199, &STATE_VARIABLE_Globals_203_203);
              }
              break;
          }
          succeeded = (NumPtagBits_16 >= (MR_Integer) 2);
          if (succeeded)
            libs__globals__set_option_4_p_0((MR_Integer) 308, Var_59, STATE_VARIABLE_Globals_203_203, &STATE_VARIABLE_Globals_208_208);
          else
            libs__globals__set_option_4_p_0((MR_Integer) 308, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2])), STATE_VARIABLE_Globals_203_203, &STATE_VARIABLE_Globals_208_208);
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_208_208, (MR_Integer) 279, &ArgPackBits0_19);
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_208_208, (MR_Integer) 273, &BitsPerWord_20);
          succeeded = (ArgPackBits0_19 < (MR_Integer) 0);
          if (succeeded)
          {
            ArgPackBits_21 = BitsPerWord_20;
            *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_187_187;
          }
          else
          {
            succeeded = (ArgPackBits0_19 > BitsPerWord_20);
            if (succeeded)
            {
              MR_Word ArgPackBitsSpec_22;
              MR_Word Var_219;
              MR_Word Var_220;
              MR_Word Var_222;
              MR_Word Var_225;
              MR_Word Var_228;
              MR_Word Var_231;
              MR_Word Var_234;
              MR_Word Var_237;
              MR_Word Var_240;
              MR_Word Var_241;

              ArgPackBits_21 = BitsPerWord_20;
              Var_220 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[221]));
              {
                Var_241 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_241, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_241, 1) = ((MR_Box) (BitsPerWord_20));
              }
              {
                Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_240, 0) = ((MR_Box) (Var_241));
                MR_hl_field(MR_mktag(1), Var_240, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
              }
              {
                Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[226])));
                MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) (Var_240));
              }
              {
                Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (Var_220));
                MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) (Var_237));
              }
              {
                Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_231, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[225])));
                MR_hl_field(MR_mktag(1), Var_231, 1) = ((MR_Box) (Var_234));
              }
              {
                Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[224])));
                MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) (Var_231));
              }
              {
                Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_225, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[223])));
                MR_hl_field(MR_mktag(1), Var_225, 1) = ((MR_Box) (Var_228));
              }
              {
                Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[222])));
                MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) (Var_225));
              }
              {
                Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (Var_220));
                MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_222));
              }
              {
                ArgPackBitsSpec_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[220])));
                MR_hl_field(MR_mktag(1), ArgPackBitsSpec_22, 1) = ((MR_Box) (Var_219));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_22, STATE_VARIABLE_Specs_187_187, STATE_VARIABLE_Specs_29);
            }
            else
            {
              ArgPackBits_21 = ArgPackBits0_19;
              *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_187_187;
            }
          }
          {
            Var_251 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_251, 0) = ((MR_Box) (ArgPackBits_21));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 279, Var_251, STATE_VARIABLE_Globals_208_208, &STATE_VARIABLE_Globals_252_252);
          *OT_StringBinarySwitchSize_11 = OT_StringBinarySwitchSize0_10;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Var_63 = (MR_Word) (MR_mkword(MR_mktag(2), &libs__handle_options_scalar_common_3[4]));
          MR_Word STATE_VARIABLE_Globals_64_64;
          MR_Word STATE_VARIABLE_Globals_67_67;
          MR_Word STATE_VARIABLE_Globals_70_70;
          MR_Word Var_73;
          MR_Word STATE_VARIABLE_Globals_74_74;
          MR_Word STATE_VARIABLE_Globals_78_78;
          MR_Word STATE_VARIABLE_Globals_82_82;
          MR_Word STATE_VARIABLE_Globals_86_86;
          MR_Word STATE_VARIABLE_Globals_90_90;
          MR_Word STATE_VARIABLE_Globals_94_94;
          MR_Word STATE_VARIABLE_Globals_98_98;
          MR_Word STATE_VARIABLE_Globals_102_102;
          MR_Word STATE_VARIABLE_Globals_106_106;
          MR_Word STATE_VARIABLE_Globals_110_110;
          MR_Word STATE_VARIABLE_Globals_114_114;
          MR_Word STATE_VARIABLE_Globals_118_118;
          MR_Word STATE_VARIABLE_Globals_122_122;
          MR_Word STATE_VARIABLE_Globals_126_126;
          MR_Word STATE_VARIABLE_Globals_130_130;
          MR_Word STATE_VARIABLE_Globals_138_138;
          MR_Word STATE_VARIABLE_Globals_142_142;
          MR_Word STATE_VARIABLE_Globals_146_146;
          MR_Word STATE_VARIABLE_Globals_150_150;
          MR_Word STATE_VARIABLE_Globals_154_154;

          libs__globals__set_option_4_p_0((MR_Integer) 272, Var_63, STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_64_64);
          libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_64_64, &STATE_VARIABLE_Globals_67_67);
          libs__globals__set_option_4_p_0((MR_Integer) 251, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[227])), STATE_VARIABLE_Globals_67_67, &STATE_VARIABLE_Globals_70_70);
          Var_73 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
          libs__globals__set_option_4_p_0((MR_Integer) 340, Var_73, STATE_VARIABLE_Globals_70_70, &STATE_VARIABLE_Globals_74_74);
          libs__globals__set_option_4_p_0((MR_Integer) 339, Var_73, STATE_VARIABLE_Globals_74_74, &STATE_VARIABLE_Globals_78_78);
          libs__globals__set_option_4_p_0((MR_Integer) 296, Var_59, STATE_VARIABLE_Globals_78_78, &STATE_VARIABLE_Globals_82_82);
          libs__globals__set_option_4_p_0((MR_Integer) 292, Var_73, STATE_VARIABLE_Globals_82_82, &STATE_VARIABLE_Globals_86_86);
          libs__globals__set_option_4_p_0((MR_Integer) 293, Var_73, STATE_VARIABLE_Globals_86_86, &STATE_VARIABLE_Globals_90_90);
          libs__globals__set_option_4_p_0((MR_Integer) 294, Var_73, STATE_VARIABLE_Globals_90_90, &STATE_VARIABLE_Globals_94_94);
          libs__globals__set_option_4_p_0((MR_Integer) 276, Var_59, STATE_VARIABLE_Globals_94_94, &STATE_VARIABLE_Globals_98_98);
          libs__globals__set_option_4_p_0((MR_Integer) 277, Var_59, STATE_VARIABLE_Globals_98_98, &STATE_VARIABLE_Globals_102_102);
          libs__globals__set_option_4_p_0((MR_Integer) 298, Var_59, STATE_VARIABLE_Globals_102_102, &STATE_VARIABLE_Globals_106_106);
          libs__globals__set_option_4_p_0((MR_Integer) 297, Var_59, STATE_VARIABLE_Globals_106_106, &STATE_VARIABLE_Globals_110_110);
          libs__globals__set_option_4_p_0((MR_Integer) 278, Var_73, STATE_VARIABLE_Globals_110_110, &STATE_VARIABLE_Globals_114_114);
          libs__globals__set_option_4_p_0((MR_Integer) 300, Var_59, STATE_VARIABLE_Globals_114_114, &STATE_VARIABLE_Globals_118_118);
          libs__globals__set_option_4_p_0((MR_Integer) 309, Var_59, STATE_VARIABLE_Globals_118_118, &STATE_VARIABLE_Globals_122_122);
          libs__globals__set_option_4_p_0((MR_Integer) 500, Var_73, STATE_VARIABLE_Globals_122_122, &STATE_VARIABLE_Globals_126_126);
          libs__globals__set_option_4_p_0((MR_Integer) 498, Var_73, STATE_VARIABLE_Globals_126_126, &STATE_VARIABLE_Globals_130_130);
          switch (Target_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                BackendForeignLanguages_14 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[19]));
                libs__globals__set_option_4_p_0((MR_Integer) 606, (MR_Word) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[228])), STATE_VARIABLE_Globals_130_130, &STATE_VARIABLE_Globals_138_138);
              }
              break;
            case (MR_Integer) 2:
              {
                BackendForeignLanguages_14 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[229]));
                STATE_VARIABLE_Globals_138_138 = STATE_VARIABLE_Globals_130_130;
              }
              break;
          }
          libs__globals__set_option_4_p_0((MR_Integer) 308, Var_73, STATE_VARIABLE_Globals_138_138, &STATE_VARIABLE_Globals_142_142);
          libs__globals__set_option_4_p_0((MR_Integer) 279, Var_63, STATE_VARIABLE_Globals_142_142, &STATE_VARIABLE_Globals_146_146);
          libs__globals__set_option_4_p_0((MR_Integer) 282, Var_73, STATE_VARIABLE_Globals_146_146, &STATE_VARIABLE_Globals_150_150);
          libs__globals__set_option_4_p_0((MR_Integer) 284, Var_73, STATE_VARIABLE_Globals_150_150, &STATE_VARIABLE_Globals_154_154);
          libs__globals__set_option_4_p_0((MR_Integer) 285, Var_73, STATE_VARIABLE_Globals_154_154, &STATE_VARIABLE_Globals_252_252);
          *OT_StringBinarySwitchSize_11 = (MR_Integer) 999999;
          *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
        }
        break;
    }
    Var_255 = (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_3[2]));
    libs__handle_options__option_implies_5_p_0((MR_Integer) 276, (MR_Integer) 295, Var_255, STATE_VARIABLE_Globals_252_252, &STATE_VARIABLE_Globals_256_256);
    libs__handle_options__option_implies_5_p_0((MR_Integer) 296, (MR_Integer) 295, Var_255, STATE_VARIABLE_Globals_256_256, &STATE_VARIABLE_Globals_261_261);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_261_261, (MR_Integer) 301, &CurrentBackendForeignLanguage_23);
    if ((CurrentBackendForeignLanguage_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_265;

      {
        Var_265 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_265, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(MR_mktag(3), Var_265, 1) = ((MR_Box) (BackendForeignLanguages_14));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 301, Var_265, STATE_VARIABLE_Globals_261_261, STATE_VARIABLE_Globals_27);
    }
    else
      *STATE_VARIABLE_Globals_27 = STATE_VARIABLE_Globals_261_261;
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
libs__handle_options__check_for_incompatibilities_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_18,
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;
    MR_Word TransOpt_8;
    MR_Word InvokedByMMCMake_9;
    MR_Word InterModOpt_11;
    MR_Word InterModAnalysis_12;
    MR_Word MaybeStandaloneInt_14;
    MR_Word ExtraInitFunctions_15;
    MR_Word STATE_VARIABLE_Specs_41_41;
    MR_Word STATE_VARIABLE_Specs_62_62;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 490, &TransOpt_8);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 660, &InvokedByMMCMake_9);
    switch (TransOpt_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_0_19;
        break;
      case (MR_Integer) 1:
        {
          succeeded = (InvokedByMMCMake_9 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = (OpMode_6 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[145])), STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_41_41);
          else
            STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_0_19;
        }
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 486, &InterModOpt_11);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 491, &InterModAnalysis_12);
    succeeded = (InterModOpt_11 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (InterModAnalysis_12 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[151])), STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_62_62);
    else
      STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_41_41;
    libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 114, &MaybeStandaloneInt_14);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 599, &ExtraInitFunctions_15);
    succeeded = (MaybeStandaloneInt_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      succeeded = (ExtraInitFunctions_15 == (MR_Integer) 1);
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[157])), STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_20);
    else
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_62_62;
  }
}

static void MR_CALL 
libs__handle_options__check_option_values_22_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_117,
  MR_Word * STATE_VARIABLE_OptionTable_118,
  MR_Word * Target_24,
  MR_Word * WordSize_25,
  MR_Word * GC_Method_26,
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
    MR_Integer BitsPerWord_46;
    MR_String GC_MethodStr_49;
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
    MR_Word STATE_VARIABLE_Specs_155_155;
    MR_Word STATE_VARIABLE_Specs_189_189;
    MR_Word STATE_VARIABLE_Specs_228_228;
    MR_Word STATE_VARIABLE_Specs_249_249;
    MR_Word STATE_VARIABLE_Specs_270_270;
    MR_Word STATE_VARIABLE_Specs_303_303;
    MR_Word STATE_VARIABLE_Specs_336_336;
    MR_Word STATE_VARIABLE_Specs_358_358;
    MR_Word STATE_VARIABLE_Specs_415_415;
    MR_Word STATE_VARIABLE_Specs_452_452;
    MR_Word STATE_VARIABLE_Specs_486_486;
    MR_Word STATE_VARIABLE_OptionTable_490_490;
    MR_Word STATE_VARIABLE_Specs_517_517;
    MR_String STATE_VARIABLE_DumpOptions_519_519;
    MR_String STATE_VARIABLE_DumpOptions_520_520;
    MR_String STATE_VARIABLE_DumpOptions_523_523;
    MR_String STATE_VARIABLE_DumpOptions_527_527;
    MR_String STATE_VARIABLE_DumpOptions_551_551;
    MR_Word Var_554;
    MR_Word STATE_VARIABLE_Specs_593_593;
    MR_Word STATE_VARIABLE_Specs_629_629;
    MR_Word STATE_VARIABLE_Specs_661_661;
    MR_Word STATE_VARIABLE_Specs_666_666;
    MR_Word STATE_VARIABLE_Specs_703_703;
    MR_Word STATE_VARIABLE_Specs_741_741;
    MR_Word STATE_VARIABLE_Specs_779_779;
    MR_Word TargetPrime_44;
    MR_Word GC_MethodPrime_50;
    MR_Integer Var_231;
    MR_Integer Var_252;
    MR_Word TermNormPrime_57;
    MR_Word Term2NormPrime_60;
    MR_Word TraceSuppressPrime_70;
    MR_Word MaybeThreadSafePrime_78;
    MR_Char Var_522;
    MR_Char Var_526;
    MR_Char Var_550;
    MR_Word C_CompilerTypePrime_85;
    MR_Word CSharp_CompilerTypePrime_88;
    MR_Word ReuseStrategyPrime_92;
    MR_Word HostEnvTypePrime_101;
    MR_Word SystemEnvTypePrime_104;
    MR_Word TargetEnvTypePrime_107;

    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 214, &TargetStr_43);
    succeeded = libs__globals__convert_target_2_p_0(TargetStr_43, &TargetPrime_44);
    if (succeeded)
    {
      *Target_24 = TargetPrime_44;
      STATE_VARIABLE_Specs_155_155 = (MR_Word) ((MR_Unsigned) 0U);
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
        MR_hl_field(MR_mktag(1), Var_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[18])));
      }
      {
        Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_127));
      }
      Var_140 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[21])));
      Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_140, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      TargetSpec_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_124, Var_139);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_45, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_155_155);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 273, &BitsPerWord_46);
    succeeded = (BitsPerWord_46 == (MR_Integer) 32);
    if (succeeded)
    {
      *WordSize_25 = (MR_Integer) 0;
      STATE_VARIABLE_Specs_189_189 = STATE_VARIABLE_Specs_155_155;
    }
    else
    {
      succeeded = (BitsPerWord_46 == (MR_Integer) 64);
      if (succeeded)
      {
        *WordSize_25 = (MR_Integer) 1;
        STATE_VARIABLE_Specs_189_189 = STATE_VARIABLE_Specs_155_155;
      }
      else
      {
        MR_String BitsPerWordStr_47;
        MR_Word WordSizeSpec_48;
        MR_Word Var_159;
        MR_Word Var_160;

        *WordSize_25 = (MR_Integer) 1;
        BitsPerWordStr_47 = mercury__string__int_to_string_1_f_0(BitsPerWord_46);
        {
          Var_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_160, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_160, 1) = ((MR_Box) (BitsPerWordStr_47));
        }
        {
          Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
          MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[34])));
        }
        {
          WordSizeSpec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), WordSizeSpec_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), WordSizeSpec_48, 1) = ((MR_Box) (Var_159));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), WordSizeSpec_48, STATE_VARIABLE_Specs_155_155, &STATE_VARIABLE_Specs_189_189);
      }
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 251, &GC_MethodStr_49);
    succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_49, &GC_MethodPrime_50);
    if (succeeded)
    {
      *GC_Method_26 = GC_MethodPrime_50;
      STATE_VARIABLE_Specs_228_228 = STATE_VARIABLE_Specs_189_189;
    }
    else
    {
      MR_Word GCMethodSpec_51;
      MR_Word Var_191;
      MR_Word Var_194;
      MR_Word Var_195;
      MR_Word Var_206;
      MR_Word Var_207;

      *GC_Method_26 = (MR_Integer) 1;
      {
        Var_195 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_195, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_195, 1) = ((MR_Box) (GC_MethodStr_49));
      }
      {
        Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) (Var_195));
        MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[37])));
      }
      {
        Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_194));
      }
      Var_207 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[43])));
      Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_207, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      GCMethodSpec_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_191, Var_206);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_51, STATE_VARIABLE_Specs_189_189, &STATE_VARIABLE_Specs_228_228);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 352, &FactTablePercentFull_52);
    succeeded = (FactTablePercentFull_52 >= (MR_Integer) 1);
    if (succeeded)
    {
      Var_231 = (MR_Integer) 100;
      succeeded = (FactTablePercentFull_52 <= Var_231);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_249_249 = STATE_VARIABLE_Specs_228_228;
    else
    {
      MR_Word FactTablePercentFullSpec_53;
      MR_Word Var_234;
      MR_Word Var_235;

      {
        Var_235 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_235, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_235, 1) = ((MR_Box) (FactTablePercentFull_52));
      }
      {
        Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (Var_235));
        MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[48])));
      }
      {
        FactTablePercentFullSpec_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), FactTablePercentFullSpec_53, 1) = ((MR_Box) (Var_234));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), FactTablePercentFullSpec_53, STATE_VARIABLE_Specs_228_228, &STATE_VARIABLE_Specs_249_249);
    }
    libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 54, &IncompleteSwitchThreshold_54);
    succeeded = (IncompleteSwitchThreshold_54 >= (MR_Integer) 0);
    if (succeeded)
    {
      Var_252 = (MR_Integer) 100;
      succeeded = (IncompleteSwitchThreshold_54 <= Var_252);
    }
    if (succeeded)
      STATE_VARIABLE_Specs_270_270 = STATE_VARIABLE_Specs_249_249;
    else
    {
      MR_Word IncompleteSwitchThresholdSpec_55;
      MR_Word Var_255;
      MR_Word Var_256;

      {
        Var_256 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_256, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_256, 1) = ((MR_Box) (IncompleteSwitchThreshold_54));
      }
      {
        Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (Var_256));
        MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[53])));
      }
      {
        IncompleteSwitchThresholdSpec_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), IncompleteSwitchThresholdSpec_55, 1) = ((MR_Box) (Var_255));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_55, STATE_VARIABLE_Specs_249_249, &STATE_VARIABLE_Specs_270_270);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 510, &TermNormStr_56);
    succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_56, &TermNormPrime_57);
    if (succeeded)
    {
      *TermNorm_27 = TermNormPrime_57;
      STATE_VARIABLE_Specs_303_303 = STATE_VARIABLE_Specs_270_270;
    }
    else
    {
      MR_Word TermNormSpec_58;
      MR_Word Var_272;
      MR_Word Var_275;
      MR_Word Var_276;
      MR_Word Var_287;
      MR_Word Var_288;

      *TermNorm_27 = (MR_Integer) 0;
      {
        Var_276 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_276, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_276, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_275, 0) = ((MR_Box) (Var_276));
        MR_hl_field(MR_mktag(1), Var_275, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[56])));
      }
      {
        Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_272, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_272, 1) = ((MR_Box) (Var_275));
      }
      Var_288 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])));
      Var_287 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_288, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      TermNormSpec_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_272, Var_287);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_58, STATE_VARIABLE_Specs_270_270, &STATE_VARIABLE_Specs_303_303);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 516, &Term2NormStr_59);
    succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_59, &Term2NormPrime_60);
    if (succeeded)
    {
      *Term2Norm_28 = Term2NormPrime_60;
      STATE_VARIABLE_Specs_336_336 = STATE_VARIABLE_Specs_303_303;
    }
    else
    {
      MR_Word Term2NormSpec_61;
      MR_Word Var_305;
      MR_Word Var_308;
      MR_Word Var_309;
      MR_Word Var_320;
      MR_Word Var_321;

      *Term2Norm_28 = (MR_Integer) 0;
      {
        Var_309 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_309, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_309, 1) = ((MR_Box) (TermNormStr_56));
      }
      {
        Var_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_308, 0) = ((MR_Box) (Var_309));
        MR_hl_field(MR_mktag(1), Var_308, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[62])));
      }
      {
        Var_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_305, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_305, 1) = ((MR_Box) (Var_308));
      }
      Var_321 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[59])));
      Var_320 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_321, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      Term2NormSpec_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_305, Var_320);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Term2NormSpec_61, STATE_VARIABLE_Specs_303_303, &STATE_VARIABLE_Specs_336_336);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 155, &ForceDisableTracing_62);
    switch (ForceDisableTracing_62) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Trace_63;
          MR_Word ExecTrace_64;
          MR_Word DeclDebug_65;
          MR_Word MaybeTraceLevel_66;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 143, &Trace_63);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 222, &ExecTrace_64);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 223, &DeclDebug_65);
          succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_63, ExecTrace_64, DeclDebug_65, &MaybeTraceLevel_66);
          if (succeeded)
            if ((MaybeTraceLevel_66 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word InconsistentTraceLevelSpec_67;
              MR_Word Var_343;
              MR_Word Var_344;

              *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
              {
                Var_344 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_344, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), Var_344, 1) = ((MR_Box) (Trace_63));
              }
              {
                Var_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_343, 0) = ((MR_Box) (Var_344));
                MR_hl_field(MR_mktag(1), Var_343, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[68])));
              }
              {
                InconsistentTraceLevelSpec_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[213])));
                MR_hl_field(MR_mktag(1), InconsistentTraceLevelSpec_67, 1) = ((MR_Box) (Var_343));
              }
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InconsistentTraceLevelSpec_67, STATE_VARIABLE_Specs_336_336, &STATE_VARIABLE_Specs_358_358);
            }
            else
            {
              *TraceLevel_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTraceLevel_66, (MR_Integer) 0))));
              STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_336_336;
            }
          else
          {
            MR_Word BadTraceLevelSpec_68;
            MR_Word Var_359;
            MR_Word Var_362;
            MR_Word Var_363;
            MR_Word Var_374;
            MR_Word Var_375;

            *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
            {
              Var_363 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_363, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_363, 1) = ((MR_Box) (Trace_63));
            }
            {
              Var_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_362, 0) = ((MR_Box) (Var_363));
              MR_hl_field(MR_mktag(1), Var_362, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[71])));
            }
            {
              Var_359 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_359, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
              MR_hl_field(MR_mktag(1), Var_359, 1) = ((MR_Box) (Var_362));
            }
            Var_375 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[77])));
            Var_374 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_375, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
            BadTraceLevelSpec_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_359, Var_374);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BadTraceLevelSpec_68, STATE_VARIABLE_Specs_336_336, &STATE_VARIABLE_Specs_358_358);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *TraceLevel_29 = libs__trace_params__trace_level_none_0_f_0();
          STATE_VARIABLE_Specs_358_358 = STATE_VARIABLE_Specs_336_336;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 154, &SuppressStr_69);
    succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_69, &TraceSuppressPrime_70);
    if (succeeded)
    {
      *TraceSuppress_30 = TraceSuppressPrime_70;
      STATE_VARIABLE_Specs_415_415 = STATE_VARIABLE_Specs_358_358;
    }
    else
    {
      MR_Word TraceSuppressSpec_71;
      MR_Word Var_400;
      MR_Word Var_401;

      *TraceSuppress_30 = libs__trace_params__default_trace_suppress_0_f_0();
      {
        Var_401 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_401, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_401, 1) = ((MR_Box) (SuppressStr_69));
      }
      {
        Var_400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_400, 0) = ((MR_Box) (Var_401));
        MR_hl_field(MR_mktag(1), Var_400, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[80])));
      }
      {
        TraceSuppressSpec_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), TraceSuppressSpec_71, 1) = ((MR_Box) (Var_400));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TraceSuppressSpec_71, STATE_VARIABLE_Specs_358_358, &STATE_VARIABLE_Specs_415_415);
    }
    libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 159, &ForceDisableSSDB_72);
    switch (ForceDisableSSDB_72) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String SSTrace_73;
          MR_Word SSDB_74;
          MR_Word SSTL_75;

          libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 270, &SSTrace_73);
          libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 269, &SSDB_74);
          succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_73, SSDB_74, &SSTL_75);
          if (succeeded)
          {
            *SSTraceLevel_31 = SSTL_75;
            STATE_VARIABLE_Specs_452_452 = STATE_VARIABLE_Specs_415_415;
          }
          else
          {
            MR_Word SSDBSpec_76;
            MR_Word Var_419;
            MR_Word Var_422;
            MR_Word Var_423;
            MR_Word Var_434;
            MR_Word Var_435;

            *SSTraceLevel_31 = (MR_Integer) 0;
            {
              Var_423 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_423, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_423, 1) = ((MR_Box) (SSTrace_73));
            }
            {
              Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_422, 0) = ((MR_Box) (Var_423));
              MR_hl_field(MR_mktag(1), Var_422, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[83])));
            }
            {
              Var_419 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_419, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
              MR_hl_field(MR_mktag(1), Var_419, 1) = ((MR_Box) (Var_422));
            }
            Var_435 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[87])));
            Var_434 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_435, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
            SSDBSpec_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_419, Var_434);
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SSDBSpec_76, STATE_VARIABLE_Specs_415_415, &STATE_VARIABLE_Specs_452_452);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *SSTraceLevel_31 = (MR_Integer) 0;
          STATE_VARIABLE_Specs_452_452 = STATE_VARIABLE_Specs_415_415;
        }
        break;
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 262, &MaybeThreadSafeStr_77);
    succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_77, &MaybeThreadSafePrime_78);
    if (succeeded)
    {
      *MaybeThreadSafe_32 = MaybeThreadSafePrime_78;
      STATE_VARIABLE_Specs_486_486 = STATE_VARIABLE_Specs_452_452;
    }
    else
    {
      MR_Word MTSSpec_79;
      MR_Word Var_454;
      MR_Word Var_457;
      MR_Word Var_458;
      MR_Word Var_472;
      MR_Word Var_473;

      *MaybeThreadSafe_32 = (MR_Integer) 0;
      {
        Var_458 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_458, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_458, 1) = ((MR_Box) (MaybeThreadSafeStr_77));
      }
      {
        Var_457 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_457, 0) = ((MR_Box) (Var_458));
        MR_hl_field(MR_mktag(1), Var_457, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[93])));
      }
      {
        Var_454 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_454, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_454, 1) = ((MR_Box) (Var_457));
      }
      Var_473 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[95])));
      Var_472 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_473, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      MTSSpec_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_454, Var_472);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MTSSpec_79, STATE_VARIABLE_Specs_452_452, &STATE_VARIABLE_Specs_486_486);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_117, (MR_Integer) 183, &DumpAlias_80);
    succeeded = (strcmp(DumpAlias_80, (MR_String) "") == 0);
    if (succeeded)
    {
      STATE_VARIABLE_Specs_517_517 = STATE_VARIABLE_Specs_486_486;
      STATE_VARIABLE_OptionTable_490_490 = STATE_VARIABLE_OptionTable_0_117;
    }
    else
    {
      MR_String AliasDumpOptions_81;

      succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_80, &AliasDumpOptions_81);
      if (succeeded)
      {
        MR_Word Var_489;

        {
          Var_489 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_489, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_489, 1) = ((MR_Box) (AliasDumpOptions_81));
        }
        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 184)), ((MR_Box) (Var_489)), STATE_VARIABLE_OptionTable_0_117, &STATE_VARIABLE_OptionTable_490_490);
        STATE_VARIABLE_Specs_517_517 = STATE_VARIABLE_Specs_486_486;
      }
      else
      {
        MR_Word DumpAliasSpec_82;
        MR_Word Var_493;
        MR_Word Var_494;

        {
          Var_494 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_494, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_494, 1) = ((MR_Box) (DumpAlias_80));
        }
        {
          Var_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_493, 0) = ((MR_Box) (Var_494));
          MR_hl_field(MR_mktag(1), Var_493, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[104])));
        }
        {
          DumpAliasSpec_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), DumpAliasSpec_82, 1) = ((MR_Box) (Var_493));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_82, STATE_VARIABLE_Specs_486_486, &STATE_VARIABLE_Specs_517_517);
        STATE_VARIABLE_OptionTable_490_490 = STATE_VARIABLE_OptionTable_0_117;
      }
    }
    mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_490_490, ((MR_Box) ((MR_Integer) 184)), &STATE_VARIABLE_DumpOptions_519_519);
    succeeded = (strcmp(STATE_VARIABLE_DumpOptions_519_519, (MR_String) "") == 0);
    if (succeeded)
      STATE_VARIABLE_DumpOptions_520_520 = (MR_String) "x";
    else
      STATE_VARIABLE_DumpOptions_520_520 = STATE_VARIABLE_DumpOptions_519_519;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_520_520, (MR_Char) 121);
    if (succeeded)
    {
      Var_522 = (MR_Char) 97;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_520_520, Var_522);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_523_523 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_520_520);
    else
      STATE_VARIABLE_DumpOptions_523_523 = STATE_VARIABLE_DumpOptions_520_520;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_523_523, (MR_Char) 97);
    if (succeeded)
    {
      Var_526 = (MR_Char) 117;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_523_523, Var_526);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_527_527 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_523_523);
    else
      STATE_VARIABLE_DumpOptions_527_527 = STATE_VARIABLE_DumpOptions_523_523;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 65);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 66);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 68);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 71);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 80);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 82);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 83);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 98);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 99);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 100);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 102);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 103);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 105);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 108);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 109);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 110);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 112);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 115);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 116);
                                        if (!(succeeded))
                                        {
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 117);
                                          if (!(succeeded))
                                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, (MR_Char) 122);
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
      Var_550 = (MR_Char) 120;
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_527_527, Var_550);
      succeeded = !(succeeded);
    }
    if (succeeded)
      STATE_VARIABLE_DumpOptions_551_551 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_527_527);
    else
      STATE_VARIABLE_DumpOptions_551_551 = STATE_VARIABLE_DumpOptions_527_527;
    {
      Var_554 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_554, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_554, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_551_551));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 184)), ((MR_Box) (Var_554)), STATE_VARIABLE_OptionTable_490_490, STATE_VARIABLE_OptionTable_118);
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 548, &C_CompilerTypeStr_84);
    succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_84, &C_CompilerTypePrime_85);
    if (succeeded)
    {
      *C_CompilerType_33 = C_CompilerTypePrime_85;
      STATE_VARIABLE_Specs_593_593 = STATE_VARIABLE_Specs_517_517;
    }
    else
    {
      MR_Word CCTpec_86;
      MR_Word Var_557;
      MR_Word Var_560;
      MR_Word Var_561;
      MR_Word Var_575;
      MR_Word Var_576;

      *C_CompilerType_33 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_561, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_561, 1) = ((MR_Box) (C_CompilerTypeStr_84));
      }
      {
        Var_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_560, 0) = ((MR_Box) (Var_561));
        MR_hl_field(MR_mktag(1), Var_560, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[107])));
      }
      {
        Var_557 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_557, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_557, 1) = ((MR_Box) (Var_560));
      }
      Var_576 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[111])));
      Var_575 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_576, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      CCTpec_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_557, Var_575);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_86, STATE_VARIABLE_Specs_517_517, &STATE_VARIABLE_Specs_593_593);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 549, &CSharp_CompilerTypeStr_87);
    succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_87, &CSharp_CompilerTypePrime_88);
    if (succeeded)
    {
      *CSharp_CompilerType_34 = CSharp_CompilerTypePrime_88;
      STATE_VARIABLE_Specs_629_629 = STATE_VARIABLE_Specs_593_593;
    }
    else
    {
      MR_Word CSCSpec_89;
      MR_Word Var_595;
      MR_Word Var_598;
      MR_Word Var_599;
      MR_Word Var_613;
      MR_Word Var_614;

      *CSharp_CompilerType_34 = (MR_Integer) 2;
      {
        Var_599 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_599, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_599, 1) = ((MR_Box) (CSharp_CompilerTypeStr_87));
      }
      {
        Var_598 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_598, 0) = ((MR_Box) (Var_599));
        MR_hl_field(MR_mktag(1), Var_598, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[114])));
      }
      {
        Var_595 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_595, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_595, 1) = ((MR_Box) (Var_598));
      }
      Var_614 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[116])));
      Var_613 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_614, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      CSCSpec_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_595, Var_613);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_89, STATE_VARIABLE_Specs_593_593, &STATE_VARIABLE_Specs_629_629);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 501, &ReuseConstraintStr_90);
    libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 502, &ReuseConstraintArgNum_91);
    succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_90, ReuseConstraintArgNum_91, &ReuseStrategyPrime_92);
    if (succeeded)
    {
      *ReuseStrategy_35 = ReuseStrategyPrime_92;
      STATE_VARIABLE_Specs_661_661 = STATE_VARIABLE_Specs_629_629;
    }
    else
    {
      MR_Word ReuseConstrSpec_93;
      MR_Word Var_632;
      MR_Word Var_635;
      MR_Word Var_636;
      MR_Word Var_647;
      MR_Word Var_648;

      *ReuseStrategy_35 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_636 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_636, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_636, 1) = ((MR_Box) (ReuseConstraintStr_90));
      }
      {
        Var_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_635, 0) = ((MR_Box) (Var_636));
        MR_hl_field(MR_mktag(1), Var_635, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[119])));
      }
      {
        Var_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_632, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_632, 1) = ((MR_Box) (Var_635));
      }
      Var_648 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[121])));
      Var_647 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_648, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      ReuseConstrSpec_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_632, Var_647);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_93, STATE_VARIABLE_Specs_629_629, &STATE_VARIABLE_Specs_661_661);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 712, &FeedbackFile_94);
    succeeded = (strcmp(FeedbackFile_94, (MR_String) "") == 0);
    if (succeeded)
    {
      *MaybeFeedbackInfo_36 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Specs_666_666 = STATE_VARIABLE_Specs_661_661;
    }
    else
    {
      MR_Word FeedbackReadResult_96;

      mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_94, (MR_Word) ((MR_Unsigned) 0U), &FeedbackReadResult_96);
      if (((MR_tag((MR_Word) FeedbackReadResult_96)) == (MR_Integer) 1))
      {
        MR_Word Error_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FeedbackReadResult_96, (MR_Integer) 0))));
        MR_String ErrorMessage_99;
        MR_Word Var_665;
        MR_Word Var_667;

        mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_94, Error_98, &ErrorMessage_99);
        {
          Var_667 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_667, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_667, 1) = ((MR_Box) (ErrorMessage_99));
        }
        {
          Var_665 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_665, 0) = ((MR_Box) (Var_667));
          MR_hl_field(MR_mktag(1), Var_665, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_665, STATE_VARIABLE_Specs_661_661, &STATE_VARIABLE_Specs_666_666);
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
        STATE_VARIABLE_Specs_666_666 = STATE_VARIABLE_Specs_661_661;
      }
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 689, &HostEnvTypeStr_100);
    succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_100, &HostEnvTypePrime_101);
    if (succeeded)
    {
      *HostEnvType_37 = HostEnvTypePrime_101;
      STATE_VARIABLE_Specs_703_703 = STATE_VARIABLE_Specs_666_666;
    }
    else
    {
      MR_Word HostEnvSpec_102;
      MR_Word Var_670;
      MR_Word Var_673;
      MR_Word Var_674;
      MR_Word Var_685;
      MR_Word Var_686;

      *HostEnvType_37 = (MR_Integer) 0;
      {
        Var_674 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_674, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_674, 1) = ((MR_Box) (HostEnvTypeStr_100));
      }
      {
        Var_673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_673, 0) = ((MR_Box) (Var_674));
        MR_hl_field(MR_mktag(1), Var_673, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[124])));
      }
      {
        Var_670 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_670, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_670, 1) = ((MR_Box) (Var_673));
      }
      Var_686 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])));
      Var_685 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_686, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      HostEnvSpec_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_670, Var_685);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_102, STATE_VARIABLE_Specs_666_666, &STATE_VARIABLE_Specs_703_703);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 690, &SystemEnvTypeStr_103);
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
      STATE_VARIABLE_Specs_741_741 = STATE_VARIABLE_Specs_703_703;
    }
    else
    {
      MR_Word SystemEnvSpec_105;
      MR_Word Var_705;
      MR_Word Var_708;
      MR_Word Var_709;
      MR_Word Var_723;
      MR_Word Var_724;

      *SystemEnvType_38 = (MR_Integer) 0;
      {
        Var_709 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_709, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_709, 1) = ((MR_Box) (SystemEnvTypeStr_103));
      }
      {
        Var_708 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_708, 0) = ((MR_Box) (Var_709));
        MR_hl_field(MR_mktag(1), Var_708, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[131])));
      }
      {
        Var_705 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_705, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_705, 1) = ((MR_Box) (Var_708));
      }
      Var_724 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])));
      Var_723 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_724, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      SystemEnvSpec_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_705, Var_723);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_105, STATE_VARIABLE_Specs_703_703, &STATE_VARIABLE_Specs_741_741);
    }
    libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 691, &TargetEnvTypeStr_106);
    succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_106, &TargetEnvTypePrime_107);
    if (succeeded)
    {
      *TargetEnvType_39 = TargetEnvTypePrime_107;
      STATE_VARIABLE_Specs_779_779 = STATE_VARIABLE_Specs_741_741;
    }
    else
    {
      MR_Word TargetEnvTypeSpec_108;
      MR_Word Var_743;
      MR_Word Var_746;
      MR_Word Var_747;
      MR_Word Var_761;
      MR_Word Var_762;

      *TargetEnvType_39 = (MR_Integer) 0;
      {
        Var_747 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_747, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_747, 1) = ((MR_Box) (TargetEnvTypeStr_106));
      }
      {
        Var_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_746, 0) = ((MR_Box) (Var_747));
        MR_hl_field(MR_mktag(1), Var_746, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[134])));
      }
      {
        Var_743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_743, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
        MR_hl_field(MR_mktag(1), Var_743, 1) = ((MR_Box) (Var_746));
      }
      Var_762 = parse_tree__error_util__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[128])));
      Var_761 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_762, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[12])));
      TargetEnvTypeSpec_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_743, Var_761);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetEnvTypeSpec_108, STATE_VARIABLE_Specs_741_741, &STATE_VARIABLE_Specs_779_779);
    }
    libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_118, (MR_Integer) 78, &LimitErrorContextsOptionStrs_109);
    libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_109, &BadLimitErrorContextsOptions_110, LimitErrorContextsMap_40);
    if ((BadLimitErrorContextsOptions_110 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_119 = STATE_VARIABLE_Specs_779_779;
    else
    {
      MR_Word Var_839 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_110, (MR_Integer) 1))));
      MR_String Var_840 = ((MR_String) ((MR_hl_field(MR_mktag(1), BadLimitErrorContextsOptions_110, (MR_Integer) 0))));

      if ((Var_839 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word LECSpec_112;
        MR_Word Var_804;
        MR_Word Var_805;

        {
          Var_805 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_805, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_805, 1) = ((MR_Box) (Var_840));
        }
        {
          Var_804 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_804, 0) = ((MR_Box) (Var_805));
          MR_hl_field(MR_mktag(1), Var_804, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])));
        }
        {
          LECSpec_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LECSpec_112, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &libs__handle_options_scalar_common_1[212])));
          MR_hl_field(MR_mktag(1), LECSpec_112, 1) = ((MR_Box) (Var_804));
        }
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_112, STATE_VARIABLE_Specs_779_779, STATE_VARIABLE_Specs_119);
      }
      else
      {
        MR_Word BadPieces_116;
        MR_Word Var_786;
        MR_Word LECSpec_820;

        BadPieces_116 = parse_tree__error_util__list_to_quoted_pieces_1_f_0(BadLimitErrorContextsOptions_110);
        Var_786 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), BadPieces_116, (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[137])));
        LECSpec_820 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &libs__handle_options_scalar_common_1[215])), Var_786);
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_820, STATE_VARIABLE_Specs_779_779, STATE_VARIABLE_Specs_119);
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

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__handle_options____Unify____maybe_allow_src_changes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__handle_options____Compare____maybe_allow_src_changes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__handle_options__init(void)
{
}

void mercury__libs__handle_options__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__handle_options__libs__handle_options__type_ctor_info_maybe_allow_src_changes_0);
}

void mercury__libs__handle_options__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__libs__handle_options__required_init(void)
{
	libs__handle_options__user_init_pred_99_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__handle_options__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.handle_options.
