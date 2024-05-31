/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2024-05-31
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "edit_seq.mih"
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
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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
libs__handle_options__IntroducedFrom__func__handle_directory_options__2864__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_203);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2870__1_1_f_0(
  MR_String LambdaHeadVar__1_209);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2841__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_190);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2837__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_184);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2819__1_2_p_0(
  MR_String HeadVar__1_178,
  MR_String HeadVar__2_234);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2801__1_3_f_0(
  MR_String GradeString_23,
  MR_String TargetArch_41,
  MR_String LambdaHeadVar__1_166);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2766__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_147);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2756__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_137);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2747__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_125);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2727__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_110);

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0(
  MR_Word HeadVar__1_1,
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

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word DefaultOptionTable_11,
  MR_Word MaybeError_12,
  MR_Word OptionTable0_13,
  MR_Word OptOptionsCord_14,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word * Globals_16);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__convert_options_to_globals_28_p_0(
  MR_Word ProgressStream_29,
  MR_Word DefaultOptionTable_30,
  MR_Word OptionTable0_31,
  MR_Word STATE_VARIABLE_OptTuple_0_142,
  MR_Word OpMode_33,
  MR_Word Target_34,
  MR_Word WordSize_35,
  MR_Word GC_Method_36,
  MR_Word TermNorm_37,
  MR_Word Term2Norm_38,
  MR_Word TraceLevel_39,
  MR_Word TraceSuppress_40,
  MR_Word SSTraceLevel_41,
  MR_Word MaybeThreadSafe_42,
  MR_Word C_CompilerType_43,
  MR_Word CSharp_CompilerType_44,
  MR_Word ReuseStrategy_45,
  MR_Word MaybeFeedbackInfo_46,
  MR_Word HostEnvType_47,
  MR_Word SystemEnvType_48,
  MR_Word TargetEnvType_49,
  MR_Word LimitErrorContextsMap_50,
  MR_Word LinkExtMap_51,
  MR_Word STATE_VARIABLE_Specs_0_143,
  MR_Word * STATE_VARIABLE_Specs_144,
  MR_Word * STATE_VARIABLE_Globals_145);

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
  MR_Word STATE_VARIABLE_Globals_0_20,
  MR_Word * STATE_VARIABLE_Globals_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
libs__handle_options__handle_colors_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_13,
  MR_Word * STATE_VARIABLE_Globals_14);

static void MR_CALL 
libs__handle_options__handle_compare_specialization_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_9,
  MR_Word * STATE_VARIABLE_Globals_10);

static void MR_CALL 
libs__handle_options__handle_compiler_developer_options_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_39,
  MR_Word * STATE_VARIABLE_Globals_40);

static void MR_CALL 
libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8);

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

static MR_Box MR_CALL 
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
libs__handle_options__maybe_disable_smart_recompilation_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word OpMode_8,
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15);

static void MR_CALL 
libs__handle_options__handle_option_to_option_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_9,
  MR_Word * STATE_VARIABLE_Globals_10);

static void MR_CALL 
libs__handle_options__handle_opmode_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word * STATE_VARIABLE_Globals_20);

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
  MR_Word STATE_VARIABLE_Globals_0_25,
  MR_Word * STATE_VARIABLE_Globals_26,
  MR_Word Target_11,
  MR_Word ProfileDeep_12,
  MR_Word * STATE_VARIABLE_AllowSrcChangesProf_27,
  MR_Integer OT_HigherOrderSizeLimit0_14,
  MR_Integer * OT_HigherOrderSizeLimit_15,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

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
  MR_Word * STATE_VARIABLE_AllowSrcChanges_23,
  MR_Word STATE_VARIABLE_Globals_0_24,
  MR_Word * STATE_VARIABLE_Globals_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
libs__handle_options__handle_minimal_model_options_5_p_0(
  MR_Word STATE_VARIABLE_Globals_0_21,
  MR_Word * STATE_VARIABLE_Globals_22,
  MR_Word * AllowHijacksMMSC_7,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
libs__handle_options__handle_gc_options_7_p_0(
  MR_Word STATE_VARIABLE_Globals_0_20,
  MR_Word * STATE_VARIABLE_Globals_21,
  MR_Word GC_Method_9,
  MR_Word OT_OptFrames0_10,
  MR_Word * OT_OptFrames_11,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

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
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
libs__handle_options__check_option_values_23_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_123,
  MR_Word * STATE_VARIABLE_OptionTable_124,
  MR_Word * Target_25,
  MR_Word * WordSize_26,
  MR_Word * GC_Method_27,
  MR_Word * TermNorm_28,
  MR_Word * Term2Norm_29,
  MR_Word * TraceLevel_30,
  MR_Word * TraceSuppress_31,
  MR_Word * SSTraceLevel_32,
  MR_Word * MaybeThreadSafe_33,
  MR_Word * C_CompilerType_34,
  MR_Word * CSharp_CompilerType_35,
  MR_Word * ReuseStrategy_36,
  MR_Word * MaybeFeedbackInfo_37,
  MR_Word * HostEnvType_38,
  MR_Word * SystemEnvType_39,
  MR_Word * TargetEnvType_40,
  MR_Word * LimitErrorContextsMap_41,
  MR_Word * LinkExtMap_42,
  MR_Word * STATE_VARIABLE_Specs_125);

static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * AccumulatingValue_6);

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

static void MR_CALL 
libs__handle_options__check_linked_target_extensions_4_p_0(
  MR_Word OptionTable_5,
  MR_Word * STATE_VARIABLE_LinkExtMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_String * StringValue_6);

static void MR_CALL 
libs__handle_options__record_linked_target_extension_7_p_0(
  MR_String OptionExt_8,
  MR_String OptionName_9,
  MR_Word LinkedTargetKind_10,
  MR_Word STATE_VARIABLE_LinkExtMap_0_20,
  MR_Word * STATE_VARIABLE_LinkExtMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[290][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[5][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[1][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[3][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[5][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][9];


struct libs__handle_options__vector_common_type_3_0_s {
  const MR_String libs__handle_options__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_3_0_s libs__handle_options_vector_common_3[21];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[290][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "Arguments:\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "the file.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "Arguments in the form \100file are replaced with the contents of")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "Arguments that do not end in \140.m\' are assumed to be module names.")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "Arguments ending in \140.m\' are assumed to be source file names.")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: only one of the following options"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[20])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "64"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "32"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[29])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be either"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gc"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "automatic")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "accurate")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "boehm")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "conservative")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--inform-incomplete-switch-threshold"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[54])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[103]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) "msvc_x64")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) "msvc_x86")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[95])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[95])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[110])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[18])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[95])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[95])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_String) "")),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not be specified as the value of"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for other purposes."))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because that extension is reserved"))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[150])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the extension"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is specified as the value of both"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the value of the"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--install-method"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option is"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "internal"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the only valid values are"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[170])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[172])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[178])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[179])))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[181])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[183]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[185])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-ptag-bits"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the only valid values are 2 and 3."))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[191]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[192])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 201 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[202]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[204]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[203])))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[205])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[207])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[209]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[211]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[210])))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[213]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[212])))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[214])))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[216])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[218]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[220]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[219])))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[215]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[221])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[222])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is C."))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[226]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[225])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[227])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The only target language that"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[229])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[232]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--(no-)reclaim-heap-on-failure"))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[234]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[233])))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Use"))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[236]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[235])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[237])))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-nondet-failure"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[238])))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[240])))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-semidet-failure"))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[242]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[241])))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and just one of"))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[244]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[243])))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--high-level-code"))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[246]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[245])))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[248]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[247])))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[250]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[252]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[251])))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[254]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[256]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[255])))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[258]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[256]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[259])))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "parallel execution."))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[261]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[256]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[262])))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[264]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Debugging is not available in parallel grades."))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[266]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[268]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[255])))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires a term size profiling grade."))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[270]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The --experimental-complexity option"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[272]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[271])))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[274]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[276]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[255])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 279 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 280 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[279])))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[280])))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[282]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 284 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2024 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 285 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[284])))
  },
  /* row 286 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[286]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 288 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[288]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_2[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 32)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
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
  /* row   0 */
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

static /* final */ const MR_Box libs__handle_options_scalar_common_6[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_7[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[0])),
    ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_6[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[1])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_7[3]))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_8[1][9] = {
  /* row   0 */
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


static /* final */ const struct libs__handle_options__vector_common_type_3_0_s libs__handle_options_vector_common_3[21] = {
  /* row   0 */   { (MR_String) "abcdfgilmnprstuvzBCDEIMPRSTUYZ" },
  /* row   1 */   { (MR_String) "abcdfgilmnprstuvzBCEMPTZ" },
  /* row   2 */   { (MR_String) "abcdfgilmnprstuvzBCDEMPTY" },
  /* row   3 */   { (MR_String) "bdfgilmnprstuvzP" },
  /* row   4 */   { (MR_String) "dfnprsu" },
  /* row   5 */   { (MR_String) "cdinpGDRS" },
  /* row   6 */   { (MR_String) "divM" },
  /* row   7 */   { (MR_String) "TL" },
  /* row   8 */   { (MR_String) "agiuvzD" },
  /* row   9 */   { (MR_String) "ilv" },
  /* row  10 */   { (MR_String) "bcdglmnstvz" },
  /* row  11 */   { (MR_String) "bdgvP" },
  /* row  12 */   { (MR_String) "bcdfgilmnprstvzP" },
  /* row  13 */   { (MR_String) "bcdglmnpruvP" },
  /* row  14 */   { (MR_String) "cP" },
  /* row  15 */   { (MR_String) "din" },
  /* row  16 */   { (MR_String) "vxX" },
  /* row  17 */   { (MR_String) "gvCP" },
  /* row  18 */   { (MR_String) "bcdglmnstuvz" },
  /* row  19 */   { (MR_String) "ltuCIU" },
  /* row  20 */   { (MR_String) "npBis" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.handle_options.mh"
#line 3404 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 3404 "handle_options.m"
void 
libs__handle_options__user_init_pred_107_0(void)
#line 3404 "handle_options.m"
{
#line 3404 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


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
  { (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__cord__pti_cord_1__plain_libs__optimization_options__type_ctor_info_optimization_option_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0) }
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
  { libs__handle_options__libs__handle_options__enum_name_ordered_maybe_allow_src_changes_0 },
  { libs__handle_options__libs__handle_options__enum_ordinal_ordered_maybe_allow_src_changes_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__handle_options__libs__handle_options__functor_number_map_maybe_allow_src_changes_0,

};

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2864__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_203)
{
  MR_String LambdaHeadVar__2_204;
  MR_String Var_205;
  MR_String Var_206;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_42, (MR_Integer) 1))));
  MR_Box conv1_Var_206;

  conv1_Var_206 = func_0(((MR_Box) (ToGradeSubdir_42)), ((MR_Box) (LambdaHeadVar__1_203)));
  Var_206 = ((MR_String) (conv1_Var_206));
  Var_205 = mercury__dir__f_slash_2_f_0(Var_206, (MR_String) "Mercury");
  LambdaHeadVar__2_204 = mercury__dir__f_slash_2_f_0(Var_205, (MR_String) "mihs");
  return LambdaHeadVar__2_204;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2870__1_1_f_0(
  MR_String LambdaHeadVar__1_209)
{
  MR_String LambdaHeadVar__2_210;
  MR_String Var_211;

  Var_211 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_209, (MR_String) "Mercury");
  LambdaHeadVar__2_210 = mercury__dir__f_slash_2_f_0(Var_211, (MR_String) "mihs");
  return LambdaHeadVar__2_210;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2841__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_190)
{
  MR_String LambdaHeadVar__2_191;
  MR_String Var_192;
  MR_String Var_193;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_42, (MR_Integer) 1))));
  MR_Box conv1_Var_193;

  conv1_Var_193 = func_0(((MR_Box) (ToGradeSubdir_42)), ((MR_Box) (LambdaHeadVar__1_190)));
  Var_193 = ((MR_String) (conv1_Var_193));
  Var_192 = mercury__dir__f_slash_2_f_0(Var_193, (MR_String) "Mercury");
  LambdaHeadVar__2_191 = mercury__dir__f_slash_2_f_0(Var_192, (MR_String) "inits");
  return LambdaHeadVar__2_191;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2837__1_2_f_0(
  MR_Word ToGradeSubdir_42,
  MR_String LambdaHeadVar__1_184)
{
  MR_String LambdaHeadVar__2_185;
  MR_String Var_186;
  MR_String Var_187;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_42, (MR_Integer) 1))));
  MR_Box conv1_Var_187;

  conv1_Var_187 = func_0(((MR_Box) (ToGradeSubdir_42)), ((MR_Box) (LambdaHeadVar__1_184)));
  Var_187 = ((MR_String) (conv1_Var_187));
  Var_186 = mercury__dir__f_slash_2_f_0(Var_187, (MR_String) "Mercury");
  LambdaHeadVar__2_185 = mercury__dir__f_slash_2_f_0(Var_186, (MR_String) "lib");
  return LambdaHeadVar__2_185;
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2819__1_2_p_0(
  MR_String HeadVar__1_178,
  MR_String HeadVar__2_234)
{
  MR_bool succeeded = (strcmp(HeadVar__1_178, HeadVar__2_234) == 0);

  return succeeded;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2801__1_3_f_0(
  MR_String GradeString_23,
  MR_String TargetArch_41,
  MR_String LambdaHeadVar__1_166)
{
  MR_String LambdaHeadVar__2_167;
  MR_String Var_168;
  MR_String Var_169;

  Var_169 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_166, (MR_String) "Mercury");
  Var_168 = mercury__dir__f_slash_2_f_0(Var_169, GradeString_23);
  LambdaHeadVar__2_167 = mercury__dir__f_slash_2_f_0(Var_168, TargetArch_41);
  return LambdaHeadVar__2_167;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2766__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_147)
{
  MR_String LambdaHeadVar__2_148;
  MR_String Var_149;

  Var_149 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_147, (MR_String) "modules");
  LambdaHeadVar__2_148 = mercury__dir__f_slash_2_f_0(Var_149, GradeString_23);
  return LambdaHeadVar__2_148;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2756__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_137)
{
  MR_String LambdaHeadVar__2_138;
  MR_String Var_139;

  Var_139 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", GradeString_23);
  LambdaHeadVar__2_138 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_137, Var_139);
  return LambdaHeadVar__2_138;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2747__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_125)
{
  MR_String LambdaHeadVar__2_126;
  MR_String Var_127;
  MR_String Var_128;

  Var_128 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_125, (MR_String) "lib");
  Var_127 = mercury__dir__f_slash_2_f_0(Var_128, GradeString_23);
  LambdaHeadVar__2_126 = mercury__dir__f_slash_2_f_0(Var_127, (MR_String) "inc");
  return LambdaHeadVar__2_126;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2727__1_2_f_0(
  MR_String GradeString_23,
  MR_String LambdaHeadVar__1_110)
{
  MR_String LambdaHeadVar__2_111;
  MR_String Var_112;

  Var_112 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_110, (MR_String) "lib");
  LambdaHeadVar__2_111 = mercury__dir__f_slash_2_f_0(Var_112, GradeString_23);
  return LambdaHeadVar__2_111;
}

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__handle_options__unsafe_set_already_printed_usage_1_p_0(
  MR_Word X_1)
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

static void MR_CALL 
libs__handle_options__unsafe_get_already_printed_usage_1_p_0(
  MR_Word * X_1)
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

static void MR_CALL 
libs__handle_options__unlock_already_printed_usage_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__handle_options__unlock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__handle_options__lock_already_printed_usage_0_p_0(void)
{
{
#define MR_PROC_LABEL libs__handle_options__lock_already_printed_usage_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
libs__handle_options__pre_initialise_mutable_already_printed_usage_0_p_0(void)
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

static void MR_CALL 
libs__handle_options__initialise_mutable_already_printed_usage_0_p_0(void)
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
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
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
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
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

void MR_CALL 
libs__handle_options__long_usage_3_p_0(
  MR_Word ProgressStream_4)
{
  mercury__io__write_string_4_p_0(ProgressStream_4, (MR_String) "Name: mmc - Melbourne Mercury Compiler\n");
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[285])));
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[4])));
  mercury__io__write_prefixed_lines_5_p_0(ProgressStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[8])));
  mercury__io__write_string_4_p_0(ProgressStream_4, (MR_String) "Options:\n");
  libs__options__options_help_3_p_0(ProgressStream_4);
}

void MR_CALL 
libs__handle_options__short_usage_3_p_0(
  MR_Word ProgressStream_4)
{
  MR_Word AlreadyPrinted_6;

{
#define MR_PROC_LABEL libs__handle_options__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__short_usage_3_p_0

	MR_Word X;

		{
X = libs__handle_options__mutable_variable_already_printed_usage;


		;}
#undef MR_PROC_LABEL
	AlreadyPrinted_6  = X;
}
{
#define MR_PROC_LABEL libs__handle_options__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  switch (AlreadyPrinted_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[2])));
{
#define MR_PROC_LABEL libs__handle_options__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__short_usage_3_p_0

	MR_Word X;

	X = (MR_Integer) 1 ;
		{
libs__handle_options__mutable_variable_already_printed_usage = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL libs__handle_options__short_usage_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__handle_options__mutable_variable_already_printed_usage_lock, "libs__handle_options__mutable_variable_already_printed_usage_lock");
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

void MR_CALL 
libs__handle_options__usage_errors_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word Globals_7,
  MR_Word Specs_8)
{
  MR_String ProgName_10;

  mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &ProgName_10);
  mercury__io__write_string_4_p_0(ProgressStream_6, ProgName_10);
  mercury__io__write_string_4_p_0(ProgressStream_6, (MR_String) ":\n");
  parse_tree__write_error_spec__write_error_specs_5_p_0(ProgressStream_6, Globals_7, Specs_8);
}

void MR_CALL 
libs__handle_options__display_compiler_version_3_p_0(
  MR_Word ProgressStream_4)
{
  MR_bool succeeded;
  MR_String Version_6;
  MR_String Package_7;

  Version_6 = mercury__library__mercury_version_0_f_0();
  mercury__io__write_string_4_p_0(ProgressStream_4, (MR_String) "Mercury Compiler, version ");
  mercury__io__write_string_4_p_0(ProgressStream_4, Version_6);
  Package_7 = mercury__library__package_version_0_f_0();
  succeeded = (strcmp(Package_7, (MR_String) "") == 0);
  if (succeeded)
    mercury__io__nl_3_p_0(ProgressStream_4);
  else
  {
    mercury__io__write_string_4_p_0(ProgressStream_4, (MR_String) " (");
    mercury__io__write_string_4_p_0(ProgressStream_4, Package_7);
    mercury__io__write_string_4_p_0(ProgressStream_4, (MR_String) ")\n");
  }
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[285])));
}

void MR_CALL 
libs__handle_options__generate_default_globals_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word DefaultOptionTable_7,
  MR_Word * DefaultGlobals_8)
{
  MR_Word Var_10;
  MR_Word Var_11;
  MR_Word Var_12;

  libs__handle_options__handle_given_options_9_p_0(ProgressStream_6, DefaultOptionTable_7, (MR_Word) ((MR_Unsigned) 0U), &Var_10, &Var_11, &Var_12, DefaultGlobals_8);
}

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = libs__op_mode__op_mode_to_option_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word DefaultOptionTable_11,
  MR_Word MaybeError_12,
  MR_Word OptionTable0_13,
  MR_Word OptOptionsCord_14,
  MR_Word * STATE_VARIABLE_Specs_50,
  MR_Word * Globals_16)
{
  if ((MaybeError_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OptOptions_21;
    MR_Word OptionTable_22;
    MR_Word OptTuple_23;
    MR_Word Target_24;
    MR_Word WordSize_25;
    MR_Word GC_Method_26;
    MR_Word TermNorm_27;
    MR_Word Term2Norm_28;
    MR_Word TraceLevel_29;
    MR_Word TraceSuppress_30;
    MR_Word SSTraceLevel_31;
    MR_Word MaybeThreadSafe_32;
    MR_Word C_CompilerType_33;
    MR_Word CSharp_CompilerType_34;
    MR_Word ReuseStrategy_35;
    MR_Word MaybeFeedbackInfo_36;
    MR_Word HostEnvType_37;
    MR_Word SystemEnvType_38;
    MR_Word TargetEnvType_39;
    MR_Word LimitErrorContextsMap_40;
    MR_Word LinkExtMap_41;
    MR_Word OpMode_42;
    MR_Word OtherOpModes_43;
    MR_Word STATE_VARIABLE_Specs_62_62;
    MR_Word STATE_VARIABLE_Specs_82_82;

    OptOptions_21 = mercury__cord__list_1_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0), OptOptionsCord_14);
    libs__handle_options__check_option_values_23_p_0(OptionTable0_13, &OptionTable_22, &Target_24, &WordSize_25, &GC_Method_26, &TermNorm_27, &Term2Norm_28, &TraceLevel_29, &TraceSuppress_30, &SSTraceLevel_31, &MaybeThreadSafe_32, &C_CompilerType_33, &CSharp_CompilerType_34, &ReuseStrategy_35, &MaybeFeedbackInfo_36, &HostEnvType_37, &SystemEnvType_38, &TargetEnvType_39, &LimitErrorContextsMap_40, &LinkExtMap_41, &STATE_VARIABLE_Specs_62_62);
    libs__optimization_options__process_optimization_options_3_p_0(OptionTable_22, OptOptions_21, &OptTuple_23);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_22, &OpMode_42, &OtherOpModes_43);
    if ((OtherOpModes_43 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_82_82 = STATE_VARIABLE_Specs_62_62;
    else
    {
      MR_Word OpModeStrs_46;
      MR_Word OpModePieces_47;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_73;
      MR_Word Var_74;

      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_64, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[2]));
        MR_hl_field(0, Var_64, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_9_p_0_1));
        MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_64, 3) = ((MR_Box) (OptionTable_22));
      }
      {
        Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_65, 0) = ((MR_Box) (OpMode_42));
        MR_hl_field(1, Var_65, 1) = ((MR_Box) (OtherOpModes_43));
      }
      OpModeStrs_46 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, Var_65);
      Var_74 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(OpModeStrs_46);
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
      OpModePieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[12])), Var_73);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_47, STATE_VARIABLE_Specs_62_62, &STATE_VARIABLE_Specs_82_82);
    }
    if ((STATE_VARIABLE_Specs_82_82 == (MR_Word) ((MR_Unsigned) 0U)))
      libs__handle_options__convert_options_to_globals_28_p_0(ProgressStream_10, DefaultOptionTable_11, OptionTable_22, OptTuple_23, OpMode_42, Target_24, WordSize_25, GC_Method_26, TermNorm_27, Term2Norm_28, TraceLevel_29, TraceSuppress_30, SSTraceLevel_31, MaybeThreadSafe_32, C_CompilerType_33, CSharp_CompilerType_34, ReuseStrategy_35, MaybeFeedbackInfo_36, HostEnvType_37, SystemEnvType_38, TargetEnvType_39, LimitErrorContextsMap_40, LinkExtMap_41, STATE_VARIABLE_Specs_82_82, STATE_VARIABLE_Specs_50, Globals_16);
    else
    {
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;

      libs__handle_options__handle_given_options_9_p_0(ProgressStream_10, DefaultOptionTable_11, (MR_Word) ((MR_Unsigned) 0U), &Var_90, &Var_91, &Var_92, Globals_16);
      *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_82_82;
    }
  }
  else
  {
    MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, MaybeError_12, (MR_Integer) 0))));
    MR_String ErrorMessage_19;
    MR_Word OptionTableSpec_20;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;

    ErrorMessage_19 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), Error_18);
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (ErrorMessage_19));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OptionTableSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.convert_option_table_result_to_globals\'/9"));
      MR_hl_field(1, OptionTableSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, OptionTableSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, OptionTableSpec_20, 3) = ((MR_Box) (Var_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_50 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OptionTableSpec_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__handle_options__handle_given_options_9_p_0(ProgressStream_10, DefaultOptionTable_11, (MR_Word) ((MR_Unsigned) 0U), &Var_94, &Var_95, &Var_96, Globals_16);
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
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

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
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

void MR_CALL 
libs__handle_options__handle_given_options_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word DefaultOptionTable_11,
  MR_Word Args0_12,
  MR_Word * OptionArgs_13,
  MR_Word * Args_14,
  MR_Word * Specs_15,
  MR_Word * STATE_VARIABLE_Globals_28)
{
  MR_bool succeeded;
  MR_Word MaybeError_19;
  MR_Word OptionTable_20;
  MR_Word OptOptions_21;
  MR_Word STATE_VARIABLE_Globals_43_43;
  MR_Word Var_54;
  MR_Word _OptionsSet_50;
  MR_Box conv4_OptOptions_21;

  Var_54 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
  mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_7[4]), Args0_12, OptionArgs_13, Args_14, &MaybeError_19, &_OptionsSet_50, DefaultOptionTable_11, &OptionTable_20, ((MR_Box) (Var_54)), &conv4_OptOptions_21);
  OptOptions_21 = ((MR_Word) (conv4_OptOptions_21));
  libs__handle_options__convert_option_table_result_to_globals_9_p_0(ProgressStream_10, DefaultOptionTable_11, MaybeError_19, OptionTable_20, OptOptions_21, Specs_15, &STATE_VARIABLE_Globals_43_43);
  if ((*Specs_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OpMode_24;
    MR_Word Smart_25;
    MR_Word OpModeArgs_26;
    MR_Word Var_46;
    MR_Word Var_47;

    libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_43_43, &OpMode_24);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_43_43, (MR_Integer) 164, &Smart_25);
    succeeded = (Smart_25 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OpMode_24)) == (MR_Integer) 3);
      if (succeeded)
      {
        OpModeArgs_26 = ((MR_Word) ((MR_hl_field(3, OpMode_24, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) OpModeArgs_26)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_46 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_26, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_46)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_47 = ((MR_Unsigned) ((MR_hl_field(1, Var_46, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (Var_47 == (MR_Integer) 2);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word WarnSmart_58;

      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
      libs__globals__set_option_4_p_0((MR_Integer) 164, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_43_43, STATE_VARIABLE_Globals_28);
      libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_28, (MR_Integer) 32, &WarnSmart_58);
      switch (WarnSmart_58) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Halt_59;

            mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "Warning: smart recompilation does not yet work with ");
            mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) "linking");
            mercury__io__write_string_4_p_0(ProgressStream_10, (MR_String) ".\n");
            libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_28, (MR_Integer) 3, &Halt_59);
            switch (Halt_59) {
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
      *STATE_VARIABLE_Globals_28 = STATE_VARIABLE_Globals_43_43;
  }
  else
    *STATE_VARIABLE_Globals_28 = STATE_VARIABLE_Globals_43_43;
}

static void MR_CALL 
libs__handle_options__convert_options_to_globals_28_p_0(
  MR_Word ProgressStream_29,
  MR_Word DefaultOptionTable_30,
  MR_Word OptionTable0_31,
  MR_Word STATE_VARIABLE_OptTuple_0_142,
  MR_Word OpMode_33,
  MR_Word Target_34,
  MR_Word WordSize_35,
  MR_Word GC_Method_36,
  MR_Word TermNorm_37,
  MR_Word Term2Norm_38,
  MR_Word TraceLevel_39,
  MR_Word TraceSuppress_40,
  MR_Word SSTraceLevel_41,
  MR_Word MaybeThreadSafe_42,
  MR_Word C_CompilerType_43,
  MR_Word CSharp_CompilerType_44,
  MR_Word ReuseStrategy_45,
  MR_Word MaybeFeedbackInfo_46,
  MR_Word HostEnvType_47,
  MR_Word SystemEnvType_48,
  MR_Word TargetEnvType_49,
  MR_Word LimitErrorContextsMap_50,
  MR_Word LinkExtMap_51,
  MR_Word STATE_VARIABLE_Specs_0_143,
  MR_Word * STATE_VARIABLE_Specs_144,
  MR_Word * STATE_VARIABLE_Globals_145)
{
  MR_bool succeeded;
  MR_Word OT_AllowInlining0_56 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
  MR_Word OT_EnableConstStructPoly0_57 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
  MR_Word OT_EnableConstStructUser0_58 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
  MR_Word OT_OptCommonStructs0_59 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
  MR_Word OT_PropConstraints0_60 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
  MR_Word OT_PropLocalConstraints0_61 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
  MR_Word OT_OptDupCalls0_62 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
  MR_Word OT_PropConstants0_63 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
  MR_Word OT_ElimExcessAssigns0_64 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
  MR_Word OT_MergeCodeAfterSwitch0_65 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
  MR_Word OT_OptLoopInvariants0_66 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
  MR_Word OT_OptSVCell0_67 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
  MR_Word OT_OptFollowCode0_68 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  MR_Word OT_OptUnusedArgs0_69 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
  MR_Word OT_OptUnusedArgsIntermod0_70 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  MR_Word OT_OptHigherOrder0_71 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  MR_Integer OT_HigherOrderSizeLimit0_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 17))));
  MR_Word OT_SpecTypes0_73 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word OT_SpecTypesUserGuided0_74 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word OT_IntroduceAccumulators0_75 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
  MR_Word OT_OptLCMC0_76 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
  MR_Word OT_Deforest0_77 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
  MR_Word OT_Tuple0_78 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
  MR_Word OT_Untuple0_79 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
  MR_Word OT_OptMiddleRec0_80 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
  MR_Word OT_AllowHijacks0_81 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
  MR_Word OT_OptMLDSTailCalls0_82 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
  MR_Word OT_Optimize0_83 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
  MR_Word OT_StdLabels0_84 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
  MR_Word OT_OptDups0_85 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
  MR_Word OT_OptFrames0_86 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
  MR_Integer OT_StringBinarySwitchSize0_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 32))));
  MR_String InstallMethodStr_88;
  MR_Word InstallMethod_89;
  MR_String InstallCmd_91;
  MR_Word FileInstallCmd_92;
  MR_Word Experiment2_93;
  MR_Integer OT_StringBinarySwitchSize_94;
  MR_Word OT_OptFrames_95;
  MR_Word AllowHijacksMMSC_96;
  MR_Word TraceEnabled_97;
  MR_Word AllowSrcChangesDebug_98;
  MR_Word ProfileDeep_99;
  MR_Word AllowSrcChangesProf_100;
  MR_Integer OT_HigherOrderSizeLimit_101;
  MR_Word AllowOptLCMCTermSize_102;
  MR_Word OT_OptDups_103;
  MR_Word OT_StdLabels_104;
  MR_Word OT_OptMLDSTailCalls_105;
  MR_Word OT_AllowInlining_106;
  MR_Word OT_EnableConstStructPoly_107;
  MR_Word OT_EnableConstStructUser_111;
  MR_Word OT_InlineBuiltins0_112;
  MR_Word OT_PropConstants_113;
  MR_Word OT_OptDupCalls_114;
  MR_Word OT_OptHigherOrder_115;
  MR_Word BodyTypeInfoLiveness_116;
  MR_Word ReorderConj_117;
  MR_Word OT_Deforest_118;
  MR_Word StackSegments_119;
  MR_Word OT_OptMiddleRec_120;
  MR_Word OT_AllowHijacks_121;
  MR_Word OT_SpecTypes_122;
  MR_Word OT_SpecTypesUserGuided_123;
  MR_Word OT_PropLocalConstraints_124;
  MR_Word OT_PropConstraints_125;
  MR_Word OT_OptCommonStructs_126;
  MR_Word OT_ElimExcessAssigns_127;
  MR_Word OT_OptUnusedArgs_129;
  MR_Word OT_OptUnusedArgsIntermod_130;
  MR_Word OT_OptLCMC_131;
  MR_Word OT_OptFollowCode_132;
  MR_Word OT_OptSVCell_133;
  MR_Word OT_OptLoopInvariants_134;
  MR_Word OT_Untuple_135;
  MR_Word OT_Tuple_136;
  MR_Word OT_MergeCodeAfterSwitch_137;
  MR_Word HighLevelCode_138;
  MR_Word UseSubdirs_139;
  MR_Word SubdirSetting_140;
  MR_Word STATE_VARIABLE_Specs_181_181;
  MR_Word STATE_VARIABLE_Globals_184_184;
  MR_Word STATE_VARIABLE_Globals_212_212;
  MR_Word STATE_VARIABLE_Specs_214_214;
  MR_Word STATE_VARIABLE_Specs_215_215;
  MR_Word STATE_VARIABLE_Globals_216_216;
  MR_Word STATE_VARIABLE_Specs_217_217;
  MR_Word STATE_VARIABLE_Globals_218_218;
  MR_Word STATE_VARIABLE_Specs_219_219;
  MR_Word STATE_VARIABLE_Globals_220_220;
  MR_Word STATE_VARIABLE_Specs_221_221;
  MR_Word STATE_VARIABLE_Globals_222_222;
  MR_Word STATE_VARIABLE_Specs_223_223;
  MR_Word STATE_VARIABLE_Globals_224_224;
  MR_Word STATE_VARIABLE_Specs_225_225;
  MR_Word STATE_VARIABLE_Globals_226_226;
  MR_Word STATE_VARIABLE_Globals_229_229;
  MR_Word STATE_VARIABLE_Specs_230_230;
  MR_Word STATE_VARIABLE_Globals_231_231;
  MR_Word STATE_VARIABLE_Specs_232_232;
  MR_Word STATE_VARIABLE_Globals_233_233;
  MR_Word STATE_VARIABLE_Globals_234_234;
  MR_Word STATE_VARIABLE_Globals_235_235;
  MR_Word STATE_VARIABLE_Globals_236_236;
  MR_Word STATE_VARIABLE_Globals_238_238;
  MR_Word STATE_VARIABLE_Globals_239_239;
  MR_Word STATE_VARIABLE_Globals_240_240;
  MR_Word STATE_VARIABLE_Globals_242_242;
  MR_Word STATE_VARIABLE_Globals_243_243;
  MR_Word STATE_VARIABLE_Globals_245_245;
  MR_Word STATE_VARIABLE_Specs_246_246;
  MR_Word STATE_VARIABLE_Globals_257_257;
  MR_Word STATE_VARIABLE_OptTuple_288_288;
  MR_Word STATE_VARIABLE_Globals_290_290;
  MR_Word STATE_VARIABLE_OptTuple_291_291;
  MR_Word STATE_VARIABLE_Globals_292_292;
  MR_Word STATE_VARIABLE_Globals_293_293;
  MR_Integer Var_4477;
  MR_Integer Var_4478;
  MR_Integer Var_4479;
  MR_Integer Var_4480;
  MR_Integer Var_4481;
  MR_Integer Var_4482;
  MR_Integer Var_4483;
  MR_Integer Var_4484;
  MR_Integer Var_4485;
  MR_Integer Var_4486;
  MR_Integer Var_4487;
  MR_Integer Var_4488;
  MR_Integer Var_4489;
  MR_Integer Var_4490;
  MR_Integer Var_4492;
  MR_Integer Var_4493;
  MR_Integer Var_4494;
  MR_Integer Var_4495;
  MR_Integer Var_4496;
  MR_Integer Var_4497;
  MR_Integer Var_4498;
  MR_Integer Var_4499;
  MR_Integer Var_4500;
  MR_Integer Var_4501;
  MR_Integer Var_4502;
  MR_Integer Var_4503;
  MR_Integer Var_4504;
  MR_Integer Var_4505;
  MR_Integer Var_4507;
  MR_Integer Var_4508;
  MR_Integer Var_4509;
  MR_Integer Var_4510;
  MR_Integer Var_4511;
  MR_Integer Var_4512;
  MR_Integer Var_4513;
  MR_String Var_4514;
  MR_Word Var_251;
  MR_Word Var_252;
  MR_Unsigned packed_word_10;
  MR_Unsigned packed_word_11;
  MR_Unsigned packed_word_12;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_31, ((MR_Box) ((MR_Integer) 685)), &InstallMethodStr_88);
  if ((strcmp(InstallMethodStr_88, (MR_String) "") == 0))
    succeeded = MR_TRUE;
  else
  if ((strcmp(InstallMethodStr_88, (MR_String) "external") == 0))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    InstallMethod_89 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_181_181 = STATE_VARIABLE_Specs_0_143;
  }
  else
  {
    succeeded = (strcmp(InstallMethodStr_88, (MR_String) "internal") == 0);
    if (succeeded)
    {
      InstallMethod_89 = (MR_Integer) 1;
      STATE_VARIABLE_Specs_181_181 = STATE_VARIABLE_Specs_0_143;
    }
    else
    {
      MR_Word InstallMethodSpec_90;
      MR_Word Var_151;
      MR_Word Var_154;
      MR_Word Var_157;
      MR_Word Var_158;

      {
        Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_158, 1) = ((MR_Box) (InstallMethodStr_88));
      }
      {
        Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
        MR_hl_field(1, Var_157, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[168])));
      }
      {
        Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_154, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[160])));
        MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
      }
      {
        Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_151, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[159])));
        MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
      }
      {
        InstallMethodSpec_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InstallMethodSpec_90, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[158])));
        MR_hl_field(1, InstallMethodSpec_90, 1) = ((MR_Box) (Var_151));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InstallMethodSpec_90, STATE_VARIABLE_Specs_0_143, &STATE_VARIABLE_Specs_181_181);
      InstallMethod_89 = (MR_Integer) 0;
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_31, ((MR_Box) ((MR_Integer) 686)), &InstallCmd_91);
  succeeded = (strcmp(InstallCmd_91, (MR_String) "") == 0);
  if (succeeded)
    FileInstallCmd_92 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      FileInstallCmd_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileInstallCmd_92, 0) = ((MR_Box) (InstallCmd_91));
    }
  libs__globals__globals_init_26_p_0(DefaultOptionTable_30, OptionTable0_31, STATE_VARIABLE_OptTuple_0_142, OpMode_33, Target_34, WordSize_35, GC_Method_36, TermNorm_37, Term2Norm_38, TraceLevel_39, TraceSuppress_40, SSTraceLevel_41, MaybeThreadSafe_42, C_CompilerType_43, CSharp_CompilerType_44, (MR_Integer) 0, ReuseStrategy_45, MaybeFeedbackInfo_46, HostEnvType_47, SystemEnvType_48, TargetEnvType_49, InstallMethod_89, FileInstallCmd_92, LimitErrorContextsMap_50, LinkExtMap_51, &STATE_VARIABLE_Globals_184_184);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_184_184, (MR_Integer) 724, &Experiment2_93);
  switch (Experiment2_93) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_212_212 = STATE_VARIABLE_Globals_184_184;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_188_188;
        MR_Word STATE_VARIABLE_Globals_192_192;
        MR_Word STATE_VARIABLE_Globals_196_196;
        MR_Word STATE_VARIABLE_Globals_200_200;
        MR_Word STATE_VARIABLE_Globals_204_204;
        MR_Word STATE_VARIABLE_Globals_208_208;

        libs__globals__set_option_4_p_0((MR_Integer) 305, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_184_184, &STATE_VARIABLE_Globals_188_188);
        libs__globals__set_option_4_p_0((MR_Integer) 308, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_188_188, &STATE_VARIABLE_Globals_192_192);
        libs__globals__set_option_4_p_0((MR_Integer) 309, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_192_192, &STATE_VARIABLE_Globals_196_196);
        libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_196_196, &STATE_VARIABLE_Globals_200_200);
        libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_200_200, &STATE_VARIABLE_Globals_204_204);
        libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_204_204, &STATE_VARIABLE_Globals_208_208);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_208_208, &STATE_VARIABLE_Globals_212_212);
      }
      break;
  }
  libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_212_212, Target_34, GC_Method_36, STATE_VARIABLE_Specs_181_181, &STATE_VARIABLE_Specs_214_214);
  libs__handle_options__check_for_incompatibilities_4_p_0(STATE_VARIABLE_Globals_212_212, OpMode_33, STATE_VARIABLE_Specs_214_214, &STATE_VARIABLE_Specs_215_215);
  libs__handle_options__handle_implications_of_pregen_target_spf_7_p_0(STATE_VARIABLE_Globals_212_212, &STATE_VARIABLE_Globals_216_216, Target_34, OT_StringBinarySwitchSize0_87, &OT_StringBinarySwitchSize_94, STATE_VARIABLE_Specs_215_215, &STATE_VARIABLE_Specs_217_217);
  libs__handle_options__handle_implications_of_parallel_4_p_0(STATE_VARIABLE_Globals_216_216, &STATE_VARIABLE_Globals_218_218, STATE_VARIABLE_Specs_217_217, &STATE_VARIABLE_Specs_219_219);
  libs__handle_options__handle_gc_options_7_p_0(STATE_VARIABLE_Globals_218_218, &STATE_VARIABLE_Globals_220_220, GC_Method_36, OT_OptFrames0_86, &OT_OptFrames_95, STATE_VARIABLE_Specs_219_219, &STATE_VARIABLE_Specs_221_221);
  libs__handle_options__handle_minimal_model_options_5_p_0(STATE_VARIABLE_Globals_220_220, &STATE_VARIABLE_Globals_222_222, &AllowHijacksMMSC_96, STATE_VARIABLE_Specs_221_221, &STATE_VARIABLE_Specs_223_223);
  TraceEnabled_97 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_39);
  libs__handle_options__handle_debugging_options_9_p_0(Target_34, TraceLevel_39, TraceEnabled_97, SSTraceLevel_41, &AllowSrcChangesDebug_98, STATE_VARIABLE_Globals_222_222, &STATE_VARIABLE_Globals_224_224, STATE_VARIABLE_Specs_223_223, &STATE_VARIABLE_Specs_225_225);
  libs__handle_options__maybe_update_event_set_file_name_4_p_0(STATE_VARIABLE_Globals_224_224, &STATE_VARIABLE_Globals_226_226);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_226_226, (MR_Integer) 257, &ProfileDeep_99);
  libs__handle_options__handle_profiling_options_9_p_0(STATE_VARIABLE_Globals_226_226, &STATE_VARIABLE_Globals_229_229, Target_34, ProfileDeep_99, &AllowSrcChangesProf_100, OT_HigherOrderSizeLimit0_72, &OT_HigherOrderSizeLimit_101, STATE_VARIABLE_Specs_225_225, &STATE_VARIABLE_Specs_230_230);
  libs__handle_options__handle_record_term_sizes_options_5_p_0(STATE_VARIABLE_Globals_229_229, &STATE_VARIABLE_Globals_231_231, &AllowOptLCMCTermSize_102, STATE_VARIABLE_Specs_230_230, &STATE_VARIABLE_Specs_232_232);
  libs__handle_options__handle_stack_layout_options_6_p_0(STATE_VARIABLE_Globals_231_231, &STATE_VARIABLE_Globals_233_233, OT_OptDups0_85, &OT_OptDups_103, OT_StdLabels0_84, &OT_StdLabels_104);
  libs__handle_options__handle_opmode_implications_3_p_0(OpMode_33, STATE_VARIABLE_Globals_233_233, &STATE_VARIABLE_Globals_234_234);
  libs__handle_options__handle_option_to_option_implications_3_p_0(OpMode_33, STATE_VARIABLE_Globals_234_234, &STATE_VARIABLE_Globals_235_235);
  libs__handle_options__maybe_disable_smart_recompilation_6_p_0(ProgressStream_29, OpMode_33, STATE_VARIABLE_Globals_235_235, &STATE_VARIABLE_Globals_236_236);
  libs__handle_options__handle_directory_options_3_p_0(OpMode_33, STATE_VARIABLE_Globals_236_236, &STATE_VARIABLE_Globals_238_238);
  libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(STATE_VARIABLE_Globals_238_238, &STATE_VARIABLE_Globals_239_239);
  libs__handle_options__handle_compiler_developer_options_4_p_0(STATE_VARIABLE_Globals_239_239, &STATE_VARIABLE_Globals_240_240);
  libs__handle_options__handle_compare_specialization_2_p_0(STATE_VARIABLE_Globals_240_240, &STATE_VARIABLE_Globals_242_242);
  libs__handle_options__handle_colors_4_p_0(STATE_VARIABLE_Globals_242_242, &STATE_VARIABLE_Globals_243_243);
  switch (OT_Optimize0_83) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OT_OptMLDSTailCalls_105 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      OT_OptMLDSTailCalls_105 = OT_OptMLDSTailCalls0_82;
      break;
  }
  libs__handle_options__handle_non_tail_rec_warnings_7_p_0(STATE_VARIABLE_OptTuple_0_142, OT_OptMLDSTailCalls_105, OpMode_33, STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_245_245, STATE_VARIABLE_Specs_232_232, &STATE_VARIABLE_Specs_246_246);
  switch (Target_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NeedProcBodies_108;

        OT_EnableConstStructPoly_107 = OT_EnableConstStructPoly0_57;
        NeedProcBodies_108 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(TraceLevel_39, TraceSuppress_40);
        succeeded = (NeedProcBodies_108 == (MR_Integer) 1);
        if (!(succeeded))
        {
          {
            MR_Word Augment_109;
            MR_Word Var_247;

            succeeded = ((MR_tag((MR_Word) OpMode_33)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_247 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_247)) == (MR_Integer) 3);
              if (succeeded)
              {
                Augment_109 = ((MR_Word) ((MR_hl_field(3, Var_247, (MR_Integer) 0))));
                if ((Augment_109 == (MR_Word) ((MR_Unsigned) 0U)))
                  succeeded = MR_TRUE;
                else
                if ((Augment_109 == (MR_Word) ((MR_Unsigned) 4U)))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
            }
          }
          if (!(succeeded))
            succeeded = (OT_EnableConstStructPoly0_57 == (MR_Integer) 1);
        }
        if (succeeded)
          OT_EnableConstStructUser_111 = (MR_Integer) 1;
        else
          OT_EnableConstStructUser_111 = OT_EnableConstStructUser0_58;
      }
      break;
    case (MR_Integer) 1:
      {
        OT_EnableConstStructPoly_107 = (MR_Integer) 1;
        OT_EnableConstStructUser_111 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        OT_EnableConstStructPoly_107 = OT_EnableConstStructPoly0_57;
        OT_EnableConstStructUser_111 = (MR_Integer) 1;
      }
      break;
  }
  OT_InlineBuiltins0_112 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_245_245, (MR_Integer) 332, &BodyTypeInfoLiveness_116);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_245_245, (MR_Integer) 229, &ReorderConj_117);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_245_245, (MR_Integer) 289, &StackSegments_119);
  switch (OT_IntroduceAccumulators0_75) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OT_OptCommonStructs_126 = OT_OptCommonStructs0_59;
      break;
    case (MR_Integer) 0:
      OT_OptCommonStructs_126 = (MR_Integer) 0;
      break;
  }
  succeeded = (TraceEnabled_97 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (GC_Method_36 != (MR_Integer) 5);
    if (succeeded)
    {
      Var_251 = (MR_Integer) 280;
      Var_252 = (MR_Integer) 0;
      succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_245_245, Var_251, Var_252);
      if (succeeded)
        succeeded = (StackSegments_119 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    OT_OptMiddleRec_120 = OT_OptMiddleRec0_80;
    succeeded = (GC_Method_36 != (MR_Integer) 5);
    if (succeeded)
      succeeded = (AllowHijacksMMSC_96 == (MR_Integer) 1);
    if (succeeded)
      OT_AllowHijacks_121 = OT_AllowHijacks0_81;
    else
      OT_AllowHijacks_121 = (MR_Integer) 1;
    succeeded = (OT_IntroduceAccumulators0_75 == (MR_Integer) 0);
    if (succeeded)
      OT_ElimExcessAssigns_127 = (MR_Integer) 0;
    else
      OT_ElimExcessAssigns_127 = OT_ElimExcessAssigns0_64;
    OT_OptFollowCode_132 = OT_OptFollowCode0_68;
  }
  else
  {
    OT_OptMiddleRec_120 = (MR_Integer) 1;
    succeeded = (TraceEnabled_97 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (GC_Method_36 != (MR_Integer) 5);
      if (succeeded)
        succeeded = (AllowHijacksMMSC_96 == (MR_Integer) 1);
    }
    if (succeeded)
      OT_AllowHijacks_121 = OT_AllowHijacks0_81;
    else
      OT_AllowHijacks_121 = (MR_Integer) 1;
    succeeded = (TraceEnabled_97 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OT_IntroduceAccumulators0_75 == (MR_Integer) 0);
    if (succeeded)
      OT_ElimExcessAssigns_127 = (MR_Integer) 0;
    else
      OT_ElimExcessAssigns_127 = OT_ElimExcessAssigns0_64;
    switch (TraceEnabled_97) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        OT_OptFollowCode_132 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        OT_OptFollowCode_132 = OT_OptFollowCode0_68;
        break;
    }
  }
  succeeded = (AllowSrcChangesDebug_98 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (AllowSrcChangesProf_100 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Var_253;
    MR_Word Var_254;

    OT_AllowInlining_106 = OT_AllowInlining0_56;
    OT_OptDupCalls_114 = OT_OptDupCalls0_62;
    OT_OptHigherOrder_115 = OT_OptHigherOrder0_71;
    succeeded = (OT_InlineBuiltins0_112 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (OT_AllowInlining_106 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (ProfileDeep_99 == (MR_Integer) 1);
    }
    if (succeeded)
      OT_PropConstants_113 = OT_PropConstants0_63;
    else
      OT_PropConstants_113 = (MR_Integer) 1;
    succeeded = (ReorderConj_117 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (BodyTypeInfoLiveness_116 == (MR_Integer) 0);
    if (succeeded)
      OT_Deforest_118 = OT_Deforest0_77;
    else
      OT_Deforest_118 = (MR_Integer) 1;
    succeeded = (GC_Method_36 != (MR_Integer) 5);
    if (succeeded)
    {
      OT_SpecTypes_122 = OT_SpecTypes0_73;
      switch (OT_SpecTypes_122) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          OT_SpecTypesUserGuided_123 = OT_SpecTypesUserGuided0_74;
          break;
        case (MR_Integer) 0:
          OT_SpecTypesUserGuided_123 = (MR_Integer) 0;
          break;
      }
    }
    else
    {
      OT_SpecTypes_122 = (MR_Integer) 1;
      OT_SpecTypesUserGuided_123 = (MR_Integer) 1;
    }
    succeeded = (ReorderConj_117 == (MR_Integer) 1);
    if (succeeded)
      OT_PropLocalConstraints_124 = OT_PropLocalConstraints0_61;
    else
      OT_PropLocalConstraints_124 = (MR_Integer) 1;
    succeeded = ((MR_tag((MR_Word) OpMode_33)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_253 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_253)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_254 = ((MR_Word) ((MR_hl_field(3, Var_253, (MR_Integer) 0))));
        succeeded = (Var_254 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      OT_OptUnusedArgs_129 = (MR_Integer) 1;
    else
      OT_OptUnusedArgs_129 = OT_OptUnusedArgs0_69;
    succeeded = (ProfileDeep_99 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (AllowOptLCMCTermSize_102 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (GC_Method_36 != (MR_Integer) 5);
    }
    if (succeeded)
      OT_OptLCMC_131 = OT_OptLCMC0_76;
    else
      OT_OptLCMC_131 = (MR_Integer) 1;
    OT_OptSVCell_133 = OT_OptSVCell0_67;
    OT_OptLoopInvariants_134 = OT_OptLoopInvariants0_66;
    OT_Tuple_136 = OT_Tuple0_78;
    OT_Untuple_135 = OT_Untuple0_79;
    OT_MergeCodeAfterSwitch_137 = OT_MergeCodeAfterSwitch0_65;
  }
  else
  {
    OT_AllowInlining_106 = (MR_Integer) 1;
    succeeded = (OT_InlineBuiltins0_112 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (ProfileDeep_99 == (MR_Integer) 1);
    if (succeeded)
      OT_PropConstants_113 = OT_PropConstants0_63;
    else
      OT_PropConstants_113 = (MR_Integer) 1;
    switch (AllowSrcChangesDebug_98) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_8143;
          MR_Word Var_8144;

          OT_OptDupCalls_114 = OT_OptDupCalls0_62;
          OT_OptHigherOrder_115 = OT_OptHigherOrder0_71;
          succeeded = (AllowSrcChangesDebug_98 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (ReorderConj_117 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (BodyTypeInfoLiveness_116 == (MR_Integer) 0);
          }
          if (succeeded)
            OT_Deforest_118 = OT_Deforest0_77;
          else
            OT_Deforest_118 = (MR_Integer) 1;
          succeeded = (AllowSrcChangesDebug_98 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (GC_Method_36 != (MR_Integer) 5);
          if (succeeded)
          {
            OT_SpecTypes_122 = OT_SpecTypes0_73;
            switch (OT_SpecTypes_122) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                OT_SpecTypesUserGuided_123 = OT_SpecTypesUserGuided0_74;
                break;
              case (MR_Integer) 0:
                OT_SpecTypesUserGuided_123 = (MR_Integer) 0;
                break;
            }
          }
          else
          {
            OT_SpecTypes_122 = (MR_Integer) 1;
            OT_SpecTypesUserGuided_123 = (MR_Integer) 1;
          }
          succeeded = (AllowSrcChangesDebug_98 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (ReorderConj_117 == (MR_Integer) 1);
          if (succeeded)
            OT_PropLocalConstraints_124 = OT_PropLocalConstraints0_61;
          else
            OT_PropLocalConstraints_124 = (MR_Integer) 1;
          succeeded = ((MR_tag((MR_Word) OpMode_33)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_8143 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_8143)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_8144 = ((MR_Word) ((MR_hl_field(3, Var_8143, (MR_Integer) 0))));
              succeeded = (Var_8144 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
            OT_OptUnusedArgs_129 = (MR_Integer) 1;
          else
            OT_OptUnusedArgs_129 = OT_OptUnusedArgs0_69;
          succeeded = (AllowSrcChangesDebug_98 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (ProfileDeep_99 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (AllowOptLCMCTermSize_102 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (GC_Method_36 != (MR_Integer) 5);
            }
          }
          if (succeeded)
          {
            OT_OptLCMC_131 = OT_OptLCMC0_76;
            OT_OptSVCell_133 = OT_OptSVCell0_67;
            OT_OptLoopInvariants_134 = OT_OptLoopInvariants0_66;
            OT_Tuple_136 = OT_Tuple0_78;
            OT_Untuple_135 = OT_Untuple0_79;
            OT_MergeCodeAfterSwitch_137 = OT_MergeCodeAfterSwitch0_65;
          }
          else
          {
            OT_OptLCMC_131 = (MR_Integer) 1;
            OT_OptSVCell_133 = OT_OptSVCell0_67;
            OT_OptLoopInvariants_134 = OT_OptLoopInvariants0_66;
            OT_Tuple_136 = OT_Tuple0_78;
            OT_Untuple_135 = OT_Untuple0_79;
            OT_MergeCodeAfterSwitch_137 = OT_MergeCodeAfterSwitch0_65;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          OT_OptDupCalls_114 = (MR_Integer) 1;
          OT_OptHigherOrder_115 = (MR_Integer) 1;
          OT_Deforest_118 = (MR_Integer) 1;
          OT_SpecTypes_122 = (MR_Integer) 1;
          OT_SpecTypesUserGuided_123 = (MR_Integer) 1;
          OT_PropLocalConstraints_124 = (MR_Integer) 1;
          succeeded = (AllowSrcChangesDebug_98 == (MR_Integer) 0);
          if (!(succeeded))
          {
            MR_Word Var_8156;
            MR_Word Var_8157;

            succeeded = ((MR_tag((MR_Word) OpMode_33)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_8156 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_8156)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_8157 = ((MR_Word) ((MR_hl_field(3, Var_8156, (MR_Integer) 0))));
                succeeded = (Var_8157 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
          if (succeeded)
            OT_OptUnusedArgs_129 = (MR_Integer) 1;
          else
            OT_OptUnusedArgs_129 = OT_OptUnusedArgs0_69;
          OT_OptLCMC_131 = (MR_Integer) 1;
          OT_OptSVCell_133 = (MR_Integer) 1;
          OT_OptLoopInvariants_134 = (MR_Integer) 1;
          OT_Untuple_135 = (MR_Integer) 1;
          OT_Tuple_136 = (MR_Integer) 1;
          OT_MergeCodeAfterSwitch_137 = (MR_Integer) 1;
        }
        break;
    }
  }
  succeeded = (BodyTypeInfoLiveness_116 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (OT_PropLocalConstraints_124 == (MR_Integer) 0);
  if (succeeded)
    OT_PropConstraints_125 = OT_PropConstraints0_60;
  else
    OT_PropConstraints_125 = (MR_Integer) 1;
  succeeded = (OT_OptUnusedArgsIntermod0_70 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (OT_OptUnusedArgs_129 == (MR_Integer) 0);
  if (succeeded)
  {
    OT_OptUnusedArgsIntermod_130 = OT_OptUnusedArgsIntermod0_70;
    libs__globals__set_option_4_p_0((MR_Integer) 511, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_245_245, &STATE_VARIABLE_Globals_257_257);
  }
  else
  {
    OT_OptUnusedArgsIntermod_130 = (MR_Integer) 1;
    STATE_VARIABLE_Globals_257_257 = STATE_VARIABLE_Globals_245_245;
  }
  packed_word_10 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 0)));
  packed_word_11 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 1)));
  packed_word_12 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 2)));
  Var_4477 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 3))));
  Var_4478 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 4))));
  Var_4479 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 5))));
  Var_4480 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 6))));
  Var_4481 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 7))));
  Var_4482 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 8))));
  Var_4483 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 9))));
  Var_4484 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 10))));
  Var_4485 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 11))));
  Var_4486 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 12))));
  Var_4487 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 13))));
  Var_4488 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 14))));
  Var_4489 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 15))));
  Var_4490 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 16))));
  Var_4492 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 18))));
  Var_4493 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 19))));
  Var_4494 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 20))));
  Var_4495 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 21))));
  Var_4496 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 22))));
  Var_4497 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 23))));
  Var_4498 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 24))));
  Var_4499 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 25))));
  Var_4500 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 26))));
  Var_4501 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 27))));
  Var_4502 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 28))));
  Var_4503 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 29))));
  Var_4504 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 30))));
  Var_4505 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 31))));
  Var_4507 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 33))));
  Var_4508 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 34))));
  Var_4509 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 35))));
  Var_4510 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 36))));
  Var_4511 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 37))));
  Var_4512 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 38))));
  Var_4513 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 39))));
  Var_4514 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_142, (MR_Integer) 40))));
  {
    STATE_VARIABLE_OptTuple_288_288 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 0) = (MR_Box) ((((packed_word_10 & (~((MR_Unsigned) 2281480315U)))) | (((MR_Unsigned) (OT_SpecTypesUserGuided_123) | (((((MR_Unsigned) (OT_SpecTypes_122) << 1)) | (((((MR_Unsigned) (OT_OptHigherOrder_115) << 3)) | (((((MR_Unsigned) (OT_OptUnusedArgsIntermod_130) << 4)) | (((((MR_Unsigned) (OT_OptUnusedArgs_129) << 5)) | (((((MR_Unsigned) (OT_OptFollowCode_132) << 6)) | (((((MR_Unsigned) (OT_OptSVCell_133) << 13)) | (((((MR_Unsigned) (OT_OptLoopInvariants_134) << 15)) | (((((MR_Unsigned) (OT_MergeCodeAfterSwitch_137) << 18)) | (((((MR_Unsigned) (OT_ElimExcessAssigns_127) << 19)) | (((((MR_Unsigned) (OT_PropConstants_113) << 20)) | (((((MR_Unsigned) (OT_OptDupCalls_114) << 21)) | (((((MR_Unsigned) (OT_PropLocalConstraints_124) << 22)) | (((((MR_Unsigned) (OT_PropConstraints_125) << 23)) | (((((MR_Unsigned) (OT_OptCommonStructs_126) << 24)) | (((((MR_Unsigned) (OT_EnableConstStructUser_111) << 25)) | (((((MR_Unsigned) (OT_EnableConstStructPoly_107) << 26)) | (((MR_Unsigned) (OT_AllowInlining_106) << 31))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 1) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 385876144U)))) | (((((MR_Unsigned) (OT_OptMLDSTailCalls_105) << 4)) | (((((MR_Unsigned) (OT_AllowHijacks_121) << 5)) | (((((MR_Unsigned) (OT_OptMiddleRec_120) << 7)) | (((((MR_Unsigned) (OT_Tuple_136) << 24)) | (((((MR_Unsigned) (OT_Untuple_135) << 25)) | (((((MR_Unsigned) (OT_Deforest_118) << 26)) | (((MR_Unsigned) (OT_OptLCMC_131) << 28))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 2) = (MR_Box) ((((packed_word_12 & (~((MR_Unsigned) 5376U)))) | (((((MR_Unsigned) (OT_OptFrames_95) << 8)) | (((((MR_Unsigned) (OT_OptDups_103) << 10)) | (((MR_Unsigned) (OT_StdLabels_104) << 12))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 3) = ((MR_Box) (Var_4477));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 4) = ((MR_Box) (Var_4478));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 5) = ((MR_Box) (Var_4479));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 6) = ((MR_Box) (Var_4480));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 7) = ((MR_Box) (Var_4481));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 8) = ((MR_Box) (Var_4482));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 9) = ((MR_Box) (Var_4483));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 10) = ((MR_Box) (Var_4484));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 11) = ((MR_Box) (Var_4485));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 12) = ((MR_Box) (Var_4486));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 13) = ((MR_Box) (Var_4487));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 14) = ((MR_Box) (Var_4488));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 15) = ((MR_Box) (Var_4489));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 16) = ((MR_Box) (Var_4490));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 17) = ((MR_Box) (OT_HigherOrderSizeLimit_101));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 18) = ((MR_Box) (Var_4492));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 19) = ((MR_Box) (Var_4493));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 20) = ((MR_Box) (Var_4494));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 21) = ((MR_Box) (Var_4495));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 22) = ((MR_Box) (Var_4496));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 23) = ((MR_Box) (Var_4497));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 24) = ((MR_Box) (Var_4498));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 25) = ((MR_Box) (Var_4499));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 26) = ((MR_Box) (Var_4500));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 27) = ((MR_Box) (Var_4501));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 28) = ((MR_Box) (Var_4502));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 29) = ((MR_Box) (Var_4503));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 30) = ((MR_Box) (Var_4504));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 31) = ((MR_Box) (Var_4505));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 32) = ((MR_Box) (OT_StringBinarySwitchSize_94));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 33) = ((MR_Box) (Var_4507));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 34) = ((MR_Box) (Var_4508));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 35) = ((MR_Box) (Var_4509));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 36) = ((MR_Box) (Var_4510));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 37) = ((MR_Box) (Var_4511));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 38) = ((MR_Box) (Var_4512));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 39) = ((MR_Box) (Var_4513));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_288_288, 40) = ((MR_Box) (Var_4514));
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_257_257, (MR_Integer) 321, &HighLevelCode_138);
  switch (HighLevelCode_138) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__handle_options__postprocess_options_lowlevel_4_p_0(STATE_VARIABLE_Globals_257_257, &STATE_VARIABLE_Globals_290_290, STATE_VARIABLE_OptTuple_288_288, &STATE_VARIABLE_OptTuple_291_291);
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptTuple_291_291 = STATE_VARIABLE_OptTuple_288_288;
        STATE_VARIABLE_Globals_290_290 = STATE_VARIABLE_Globals_257_257;
      }
      break;
  }
  libs__globals__set_opt_tuple_3_p_0(STATE_VARIABLE_OptTuple_291_291, STATE_VARIABLE_Globals_290_290, &STATE_VARIABLE_Globals_292_292);
  libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_292_292, &STATE_VARIABLE_Globals_293_293, STATE_VARIABLE_Specs_246_246, STATE_VARIABLE_Specs_144);
  libs__globals__globals_init_mutables_3_p_0(STATE_VARIABLE_Globals_293_293);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_293_293, (MR_Integer) 697, &UseSubdirs_139);
  switch (UseSubdirs_139) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SubdirSetting_140 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word UseGradeSubdirs_141;

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_293_293, (MR_Integer) 698, &UseGradeSubdirs_141);
        switch (UseGradeSubdirs_141) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SubdirSetting_140 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            SubdirSetting_140 = (MR_Integer) 2;
            break;
        }
      }
      break;
  }
  libs__globals__set_subdir_setting_3_p_0(SubdirSetting_140, STATE_VARIABLE_Globals_293_293, STATE_VARIABLE_Globals_145);
}

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_OptTuple_0_18,
  MR_Word * STATE_VARIABLE_OptTuple_19)
{
  MR_bool succeeded;
  MR_Word SavedVarsCell_7 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
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
  MR_Word STATE_VARIABLE_OptTuple_34_34;
  MR_Word STATE_VARIABLE_OptTuple_39_39;
  MR_Integer Var_135 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 3))));
  MR_Integer Var_136 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 4))));
  MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 5))));
  MR_Integer Var_138 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 6))));
  MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 7))));
  MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 8))));
  MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 9))));
  MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 10))));
  MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 11))));
  MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 12))));
  MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 13))));
  MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 14))));
  MR_Integer Var_147 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 15))));
  MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 16))));
  MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 17))));
  MR_Integer Var_150 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 18))));
  MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 19))));
  MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 20))));
  MR_Integer Var_153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 21))));
  MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 22))));
  MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 23))));
  MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 24))));
  MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 25))));
  MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 26))));
  MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 27))));
  MR_Integer Var_160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 28))));
  MR_Integer Var_161 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 29))));
  MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 30))));
  MR_Integer Var_163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 31))));
  MR_Integer Var_164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 32))));
  MR_Integer Var_165 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 33))));
  MR_Integer Var_166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 34))));
  MR_Integer Var_167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 35))));
  MR_Integer Var_168 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 36))));
  MR_Integer Var_169 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 37))));
  MR_Integer Var_170 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 38))));
  MR_Integer Var_171 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 39))));
  MR_String Var_172 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 40))));
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
  MR_Integer Var_418;
  MR_Integer Var_419;
  MR_Integer Var_420;
  MR_String Var_421;
  MR_String Var_1919;
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
  MR_Integer Var_1942;
  MR_Integer Var_1943;
  MR_Integer Var_1944;
  MR_Integer Var_1945;
  MR_Integer Var_1946;
  MR_Integer Var_1947;
  MR_Integer Var_1948;
  MR_Integer Var_1949;
  MR_Integer Var_1950;
  MR_Integer Var_1951;
  MR_Integer Var_1952;
  MR_Integer Var_1953;
  MR_Integer Var_1954;
  MR_Integer Var_1955;
  MR_Integer Var_1956;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 0)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 1)));
  MR_Unsigned packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, (MR_Integer) 2)));
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
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 0) = (MR_Box) (packed_word_0);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 1) = (MR_Box) (packed_word_1);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2) = (MR_Box) ((((packed_word_2 & (~((MR_Unsigned) 8192U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 13))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 3) = ((MR_Box) (Var_135));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 4) = ((MR_Box) (Var_136));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 5) = ((MR_Box) (Var_137));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 6) = ((MR_Box) (Var_138));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 7) = ((MR_Box) (Var_139));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 8) = ((MR_Box) (Var_140));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 9) = ((MR_Box) (Var_141));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 10) = ((MR_Box) (Var_142));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 11) = ((MR_Box) (Var_143));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 12) = ((MR_Box) (Var_144));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 13) = ((MR_Box) (Var_145));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 14) = ((MR_Box) (Var_146));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 15) = ((MR_Box) (Var_147));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 16) = ((MR_Box) (Var_148));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 17) = ((MR_Box) (Var_149));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 18) = ((MR_Box) (Var_150));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 19) = ((MR_Box) (Var_151));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 20) = ((MR_Box) (Var_152));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 21) = ((MR_Box) (Var_153));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 22) = ((MR_Box) (Var_154));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 23) = ((MR_Box) (Var_155));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 24) = ((MR_Box) (Var_156));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 25) = ((MR_Box) (Var_157));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 26) = ((MR_Box) (Var_158));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 27) = ((MR_Box) (Var_159));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 28) = ((MR_Box) (Var_160));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 29) = ((MR_Box) (Var_161));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 30) = ((MR_Box) (Var_162));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 31) = ((MR_Box) (Var_163));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 32) = ((MR_Box) (Var_164));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 33) = ((MR_Box) (Var_165));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 34) = ((MR_Box) (Var_166));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 35) = ((MR_Box) (Var_167));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 36) = ((MR_Box) (Var_168));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 37) = ((MR_Box) (Var_169));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 38) = ((MR_Box) (Var_170));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 39) = ((MR_Box) (Var_171));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 40) = ((MR_Box) (Var_172));
      }
      break;
  }
  packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 0)));
  packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 1)));
  packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2)));
  OptFrames_8 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
  Var_384 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 3))));
  Var_385 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 4))));
  Var_386 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 5))));
  Var_387 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 6))));
  Var_388 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 7))));
  Var_389 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 8))));
  Var_390 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 9))));
  Var_391 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 10))));
  Var_392 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 11))));
  Var_393 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 12))));
  Var_394 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 13))));
  Var_395 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 14))));
  Var_396 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 15))));
  Var_397 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 16))));
  Var_398 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 17))));
  Var_399 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 18))));
  Var_400 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 19))));
  Var_401 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 20))));
  Var_402 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 21))));
  Var_403 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 22))));
  Var_404 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 23))));
  Var_405 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 24))));
  Var_406 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 25))));
  Var_407 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 26))));
  Var_408 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 27))));
  Var_409 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 28))));
  Var_410 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 29))));
  Var_411 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 30))));
  Var_412 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 31))));
  Var_413 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 32))));
  Var_414 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 33))));
  Var_415 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 34))));
  Var_416 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 35))));
  Var_417 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 36))));
  Var_418 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 37))));
  Var_419 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 38))));
  Var_420 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 39))));
  Var_421 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, (MR_Integer) 40))));
  switch (OptFrames_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_OptTuple_24_24 = STATE_VARIABLE_OptTuple_20_20;
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_24_24 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 0) = (MR_Box) (packed_word_3);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 1) = (MR_Box) (packed_word_4);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 2) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 133120U)))) | (((((MR_Unsigned) ((MR_Integer) 0) << 11)) | (((MR_Unsigned) ((MR_Integer) 0) << 17))))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 3) = ((MR_Box) (Var_384));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 4) = ((MR_Box) (Var_385));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 5) = ((MR_Box) (Var_386));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 6) = ((MR_Box) (Var_387));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 7) = ((MR_Box) (Var_388));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 8) = ((MR_Box) (Var_389));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 9) = ((MR_Box) (Var_390));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 10) = ((MR_Box) (Var_391));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 11) = ((MR_Box) (Var_392));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 12) = ((MR_Box) (Var_393));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 13) = ((MR_Box) (Var_394));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 14) = ((MR_Box) (Var_395));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 15) = ((MR_Box) (Var_396));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 16) = ((MR_Box) (Var_397));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 17) = ((MR_Box) (Var_398));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 18) = ((MR_Box) (Var_399));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 19) = ((MR_Box) (Var_400));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 20) = ((MR_Box) (Var_401));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 21) = ((MR_Box) (Var_402));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 22) = ((MR_Box) (Var_403));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 23) = ((MR_Box) (Var_404));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 24) = ((MR_Box) (Var_405));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 25) = ((MR_Box) (Var_406));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 26) = ((MR_Box) (Var_407));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 27) = ((MR_Box) (Var_408));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 28) = ((MR_Box) (Var_409));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 29) = ((MR_Box) (Var_410));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 30) = ((MR_Box) (Var_411));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 31) = ((MR_Box) (Var_412));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 32) = ((MR_Box) (Var_413));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 33) = ((MR_Box) (Var_414));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 34) = ((MR_Box) (Var_415));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 35) = ((MR_Box) (Var_416));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 36) = ((MR_Box) (Var_417));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 37) = ((MR_Box) (Var_418));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 38) = ((MR_Box) (Var_419));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 39) = ((MR_Box) (Var_420));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 40) = ((MR_Box) (Var_421));
      }
      break;
  }
  UseLocalVars_10 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 2))) >> 13)) & (MR_Integer) 1);
  OptProcDups_9 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 2))) >> 9)) & (MR_Integer) 1);
  OptRepeat_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 37))));
  switch (OptProcDups_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Globals_17 = STATE_VARIABLE_Globals_0_16;
      break;
    case (MR_Integer) 0:
      libs__globals__set_option_4_p_0((MR_Integer) 358, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_16, STATE_VARIABLE_Globals_17);
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
    MR_Integer Var_1131 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 3))));
    MR_Integer Var_1132 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 4))));
    MR_Integer Var_1133 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 5))));
    MR_Integer Var_1134 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 6))));
    MR_Integer Var_1135 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 7))));
    MR_Integer Var_1136 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 8))));
    MR_Integer Var_1137 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 9))));
    MR_Integer Var_1138 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 10))));
    MR_Integer Var_1139 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 11))));
    MR_Integer Var_1140 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 12))));
    MR_Integer Var_1141 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 13))));
    MR_Integer Var_1142 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 14))));
    MR_Integer Var_1143 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 15))));
    MR_Integer Var_1144 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 16))));
    MR_Integer Var_1145 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 17))));
    MR_Integer Var_1146 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 18))));
    MR_Integer Var_1147 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 19))));
    MR_Integer Var_1148 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 20))));
    MR_Integer Var_1149 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 21))));
    MR_Integer Var_1150 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 22))));
    MR_Integer Var_1151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 23))));
    MR_Integer Var_1152 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 24))));
    MR_Integer Var_1153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 25))));
    MR_Integer Var_1154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 26))));
    MR_Integer Var_1155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 27))));
    MR_Integer Var_1156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 28))));
    MR_Integer Var_1157 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 29))));
    MR_Integer Var_1158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 30))));
    MR_Integer Var_1159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 31))));
    MR_Integer Var_1160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 32))));
    MR_Integer Var_1161 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 33))));
    MR_Integer Var_1162 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 34))));
    MR_Integer Var_1163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 35))));
    MR_Integer Var_1164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 36))));
    MR_Integer Var_1166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 38))));
    MR_Integer Var_1167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 39))));
    MR_String Var_1168 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 40))));
    MR_Unsigned packed_word_9 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 0)));
    MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 1)));
    MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, (MR_Integer) 2)));

    {
      STATE_VARIABLE_OptTuple_31_31 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 0) = (MR_Box) (packed_word_9);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1) = (MR_Box) (packed_word_10);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 2) = (MR_Box) (packed_word_11);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 3) = ((MR_Box) (Var_1131));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 4) = ((MR_Box) (Var_1132));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 5) = ((MR_Box) (Var_1133));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 6) = ((MR_Box) (Var_1134));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 7) = ((MR_Box) (Var_1135));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 8) = ((MR_Box) (Var_1136));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 9) = ((MR_Box) (Var_1137));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 10) = ((MR_Box) (Var_1138));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 11) = ((MR_Box) (Var_1139));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 12) = ((MR_Box) (Var_1140));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 13) = ((MR_Box) (Var_1141));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 14) = ((MR_Box) (Var_1142));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 15) = ((MR_Box) (Var_1143));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 16) = ((MR_Box) (Var_1144));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 17) = ((MR_Box) (Var_1145));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 18) = ((MR_Box) (Var_1146));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 19) = ((MR_Box) (Var_1147));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 20) = ((MR_Box) (Var_1148));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 21) = ((MR_Box) (Var_1149));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 22) = ((MR_Box) (Var_1150));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 23) = ((MR_Box) (Var_1151));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 24) = ((MR_Box) (Var_1152));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 25) = ((MR_Box) (Var_1153));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 26) = ((MR_Box) (Var_1154));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 27) = ((MR_Box) (Var_1155));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 28) = ((MR_Box) (Var_1156));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 29) = ((MR_Box) (Var_1157));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 30) = ((MR_Box) (Var_1158));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 31) = ((MR_Box) (Var_1159));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 32) = ((MR_Box) (Var_1160));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 33) = ((MR_Box) (Var_1161));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 34) = ((MR_Box) (Var_1162));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 35) = ((MR_Box) (Var_1163));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 36) = ((MR_Box) (Var_1164));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 37) = ((MR_Box) (Var_30));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 38) = ((MR_Box) (Var_1166));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 39) = ((MR_Box) (Var_1167));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 40) = ((MR_Box) (Var_1168));
    }
  }
  else
    STATE_VARIABLE_OptTuple_31_31 = STATE_VARIABLE_OptTuple_24_24;
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 301, &UnboxedFloat_12);
  packed_word_12 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 0)));
  packed_word_13 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 1)));
  packed_word_14 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 2)));
  Var_1956 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 3))));
  Var_1955 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 4))));
  Var_1954 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 5))));
  Var_1953 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 6))));
  Var_1952 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 7))));
  Var_1951 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 8))));
  Var_1950 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 9))));
  Var_1949 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 10))));
  Var_1948 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 11))));
  Var_1947 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 12))));
  Var_1946 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 13))));
  Var_1945 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 14))));
  Var_1944 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 15))));
  Var_1943 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 16))));
  Var_1942 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 17))));
  Var_1941 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 18))));
  Var_1940 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 19))));
  Var_1939 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 20))));
  Var_1938 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 21))));
  Var_1937 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 22))));
  Var_1936 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 23))));
  Var_1935 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 24))));
  Var_1934 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 25))));
  Var_1933 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 26))));
  Var_1932 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 27))));
  Var_1931 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 28))));
  Var_1930 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 29))));
  Var_1929 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 30))));
  Var_1928 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 31))));
  Var_1927 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 32))));
  Var_1926 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 33))));
  Var_1925 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 34))));
  Var_1924 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 35))));
  Var_1923 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 36))));
  Var_1922 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 37))));
  Var_1921 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 38))));
  Var_1920 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 39))));
  Var_1919 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, (MR_Integer) 40))));
  switch (UnboxedFloat_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_34_34 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 0) = (MR_Box) (packed_word_12);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1) = (MR_Box) ((((packed_word_13 & (~((MR_Unsigned) 2048U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 11))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 2) = (MR_Box) (packed_word_14);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 3) = ((MR_Box) (Var_1956));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 4) = ((MR_Box) (Var_1955));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 5) = ((MR_Box) (Var_1954));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 6) = ((MR_Box) (Var_1953));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 7) = ((MR_Box) (Var_1952));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 8) = ((MR_Box) (Var_1951));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 9) = ((MR_Box) (Var_1950));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 10) = ((MR_Box) (Var_1949));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 11) = ((MR_Box) (Var_1948));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 12) = ((MR_Box) (Var_1947));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 13) = ((MR_Box) (Var_1946));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 14) = ((MR_Box) (Var_1945));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 15) = ((MR_Box) (Var_1944));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 16) = ((MR_Box) (Var_1943));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 17) = ((MR_Box) (Var_1942));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 18) = ((MR_Box) (Var_1941));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 19) = ((MR_Box) (Var_1940));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 20) = ((MR_Box) (Var_1939));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 21) = ((MR_Box) (Var_1938));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 22) = ((MR_Box) (Var_1937));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 23) = ((MR_Box) (Var_1936));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 24) = ((MR_Box) (Var_1935));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 25) = ((MR_Box) (Var_1934));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 26) = ((MR_Box) (Var_1933));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 27) = ((MR_Box) (Var_1932));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 28) = ((MR_Box) (Var_1931));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 29) = ((MR_Box) (Var_1930));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 30) = ((MR_Box) (Var_1929));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 31) = ((MR_Box) (Var_1928));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 32) = ((MR_Box) (Var_1927));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 33) = ((MR_Box) (Var_1926));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 34) = ((MR_Box) (Var_1925));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 35) = ((MR_Box) (Var_1924));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 36) = ((MR_Box) (Var_1923));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 37) = ((MR_Box) (Var_1922));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 38) = ((MR_Box) (Var_1921));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 39) = ((MR_Box) (Var_1920));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 40) = ((MR_Box) (Var_1919));
      }
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptTuple_34_34 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 0) = (MR_Box) (packed_word_12);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1) = (MR_Box) ((((packed_word_13 & (~((MR_Unsigned) 2048U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 11))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 2) = (MR_Box) (packed_word_14);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 3) = ((MR_Box) (Var_1956));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 4) = ((MR_Box) (Var_1955));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 5) = ((MR_Box) (Var_1954));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 6) = ((MR_Box) (Var_1953));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 7) = ((MR_Box) (Var_1952));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 8) = ((MR_Box) (Var_1951));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 9) = ((MR_Box) (Var_1950));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 10) = ((MR_Box) (Var_1949));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 11) = ((MR_Box) (Var_1948));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 12) = ((MR_Box) (Var_1947));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 13) = ((MR_Box) (Var_1946));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 14) = ((MR_Box) (Var_1945));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 15) = ((MR_Box) (Var_1944));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 16) = ((MR_Box) (Var_1943));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 17) = ((MR_Box) (Var_1942));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 18) = ((MR_Box) (Var_1941));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 19) = ((MR_Box) (Var_1940));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 20) = ((MR_Box) (Var_1939));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 21) = ((MR_Box) (Var_1938));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 22) = ((MR_Box) (Var_1937));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 23) = ((MR_Box) (Var_1936));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 24) = ((MR_Box) (Var_1935));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 25) = ((MR_Box) (Var_1934));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 26) = ((MR_Box) (Var_1933));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 27) = ((MR_Box) (Var_1932));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 28) = ((MR_Box) (Var_1931));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 29) = ((MR_Box) (Var_1930));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 30) = ((MR_Box) (Var_1929));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 31) = ((MR_Box) (Var_1928));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 32) = ((MR_Box) (Var_1927));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 33) = ((MR_Box) (Var_1926));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 34) = ((MR_Box) (Var_1925));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 35) = ((MR_Box) (Var_1924));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 36) = ((MR_Box) (Var_1923));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 37) = ((MR_Box) (Var_1922));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 38) = ((MR_Box) (Var_1921));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 39) = ((MR_Box) (Var_1920));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 40) = ((MR_Box) (Var_1919));
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 302, &UnboxedInt64s_13);
  switch (UnboxedInt64s_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Integer Var_1631 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 3))));
        MR_Integer Var_1632 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 4))));
        MR_Integer Var_1633 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 5))));
        MR_Integer Var_1634 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 6))));
        MR_Integer Var_1635 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 7))));
        MR_Integer Var_1636 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 8))));
        MR_Integer Var_1637 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 9))));
        MR_Integer Var_1638 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 10))));
        MR_Integer Var_1639 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 11))));
        MR_Integer Var_1640 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 12))));
        MR_Integer Var_1641 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 13))));
        MR_Integer Var_1642 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 14))));
        MR_Integer Var_1643 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 15))));
        MR_Integer Var_1644 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 16))));
        MR_Integer Var_1645 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 17))));
        MR_Integer Var_1646 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 18))));
        MR_Integer Var_1647 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 19))));
        MR_Integer Var_1648 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 20))));
        MR_Integer Var_1649 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 21))));
        MR_Integer Var_1650 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 22))));
        MR_Integer Var_1651 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 23))));
        MR_Integer Var_1652 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 24))));
        MR_Integer Var_1653 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 25))));
        MR_Integer Var_1654 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 26))));
        MR_Integer Var_1655 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 27))));
        MR_Integer Var_1656 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 28))));
        MR_Integer Var_1657 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 29))));
        MR_Integer Var_1658 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 30))));
        MR_Integer Var_1659 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 31))));
        MR_Integer Var_1660 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 32))));
        MR_Integer Var_1661 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 33))));
        MR_Integer Var_1662 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 34))));
        MR_Integer Var_1663 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 35))));
        MR_Integer Var_1664 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 36))));
        MR_Integer Var_1665 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 37))));
        MR_Integer Var_1666 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 38))));
        MR_Integer Var_1667 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 39))));
        MR_String Var_1668 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 40))));
        MR_Unsigned packed_word_15 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 0)));
        MR_Unsigned packed_word_16 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 1)));
        MR_Unsigned packed_word_17 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 2)));

        {
          STATE_VARIABLE_OptTuple_39_39 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 0) = (MR_Box) (packed_word_15);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1) = (MR_Box) ((((packed_word_16 & (~((MR_Unsigned) 1024U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 10))));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 2) = (MR_Box) (packed_word_17);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 3) = ((MR_Box) (Var_1631));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 4) = ((MR_Box) (Var_1632));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 5) = ((MR_Box) (Var_1633));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 6) = ((MR_Box) (Var_1634));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 7) = ((MR_Box) (Var_1635));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 8) = ((MR_Box) (Var_1636));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 9) = ((MR_Box) (Var_1637));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 10) = ((MR_Box) (Var_1638));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 11) = ((MR_Box) (Var_1639));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 12) = ((MR_Box) (Var_1640));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 13) = ((MR_Box) (Var_1641));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 14) = ((MR_Box) (Var_1642));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 15) = ((MR_Box) (Var_1643));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 16) = ((MR_Box) (Var_1644));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 17) = ((MR_Box) (Var_1645));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 18) = ((MR_Box) (Var_1646));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 19) = ((MR_Box) (Var_1647));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 20) = ((MR_Box) (Var_1648));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 21) = ((MR_Box) (Var_1649));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 22) = ((MR_Box) (Var_1650));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 23) = ((MR_Box) (Var_1651));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 24) = ((MR_Box) (Var_1652));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 25) = ((MR_Box) (Var_1653));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 26) = ((MR_Box) (Var_1654));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 27) = ((MR_Box) (Var_1655));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 28) = ((MR_Box) (Var_1656));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 29) = ((MR_Box) (Var_1657));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 30) = ((MR_Box) (Var_1658));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 31) = ((MR_Box) (Var_1659));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 32) = ((MR_Box) (Var_1660));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 33) = ((MR_Box) (Var_1661));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 34) = ((MR_Box) (Var_1662));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 35) = ((MR_Box) (Var_1663));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 36) = ((MR_Box) (Var_1664));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 37) = ((MR_Box) (Var_1665));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 38) = ((MR_Box) (Var_1666));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 39) = ((MR_Box) (Var_1667));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 40) = ((MR_Box) (Var_1668));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Var_1506 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 3))));
        MR_Integer Var_1507 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 4))));
        MR_Integer Var_1508 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 5))));
        MR_Integer Var_1509 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 6))));
        MR_Integer Var_1510 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 7))));
        MR_Integer Var_1511 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 8))));
        MR_Integer Var_1512 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 9))));
        MR_Integer Var_1513 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 10))));
        MR_Integer Var_1514 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 11))));
        MR_Integer Var_1515 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 12))));
        MR_Integer Var_1516 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 13))));
        MR_Integer Var_1517 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 14))));
        MR_Integer Var_1518 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 15))));
        MR_Integer Var_1519 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 16))));
        MR_Integer Var_1520 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 17))));
        MR_Integer Var_1521 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 18))));
        MR_Integer Var_1522 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 19))));
        MR_Integer Var_1523 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 20))));
        MR_Integer Var_1524 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 21))));
        MR_Integer Var_1525 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 22))));
        MR_Integer Var_1526 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 23))));
        MR_Integer Var_1527 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 24))));
        MR_Integer Var_1528 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 25))));
        MR_Integer Var_1529 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 26))));
        MR_Integer Var_1530 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 27))));
        MR_Integer Var_1531 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 28))));
        MR_Integer Var_1532 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 29))));
        MR_Integer Var_1533 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 30))));
        MR_Integer Var_1534 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 31))));
        MR_Integer Var_1535 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 32))));
        MR_Integer Var_1536 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 33))));
        MR_Integer Var_1537 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 34))));
        MR_Integer Var_1538 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 35))));
        MR_Integer Var_1539 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 36))));
        MR_Integer Var_1540 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 37))));
        MR_Integer Var_1541 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 38))));
        MR_Integer Var_1542 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 39))));
        MR_String Var_1543 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 40))));
        MR_Unsigned packed_word_18 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 0)));
        MR_Unsigned packed_word_19 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 1)));
        MR_Unsigned packed_word_20 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, (MR_Integer) 2)));

        {
          STATE_VARIABLE_OptTuple_39_39 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 0) = (MR_Box) (packed_word_18);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1) = (MR_Box) ((((packed_word_19 & (~((MR_Unsigned) 1024U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 10))));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 2) = (MR_Box) (packed_word_20);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 3) = ((MR_Box) (Var_1506));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 4) = ((MR_Box) (Var_1507));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 5) = ((MR_Box) (Var_1508));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 6) = ((MR_Box) (Var_1509));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 7) = ((MR_Box) (Var_1510));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 8) = ((MR_Box) (Var_1511));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 9) = ((MR_Box) (Var_1512));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 10) = ((MR_Box) (Var_1513));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 11) = ((MR_Box) (Var_1514));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 12) = ((MR_Box) (Var_1515));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 13) = ((MR_Box) (Var_1516));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 14) = ((MR_Box) (Var_1517));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 15) = ((MR_Box) (Var_1518));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 16) = ((MR_Box) (Var_1519));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 17) = ((MR_Box) (Var_1520));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 18) = ((MR_Box) (Var_1521));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 19) = ((MR_Box) (Var_1522));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 20) = ((MR_Box) (Var_1523));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 21) = ((MR_Box) (Var_1524));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 22) = ((MR_Box) (Var_1525));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 23) = ((MR_Box) (Var_1526));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 24) = ((MR_Box) (Var_1527));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 25) = ((MR_Box) (Var_1528));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 26) = ((MR_Box) (Var_1529));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 27) = ((MR_Box) (Var_1530));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 28) = ((MR_Box) (Var_1531));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 29) = ((MR_Box) (Var_1532));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 30) = ((MR_Box) (Var_1533));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 31) = ((MR_Box) (Var_1534));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 32) = ((MR_Box) (Var_1535));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 33) = ((MR_Box) (Var_1536));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 34) = ((MR_Box) (Var_1537));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 35) = ((MR_Box) (Var_1538));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 36) = ((MR_Box) (Var_1539));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 37) = ((MR_Box) (Var_1540));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 38) = ((MR_Box) (Var_1541));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 39) = ((MR_Box) (Var_1542));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 40) = ((MR_Box) (Var_1543));
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 317, &NonLocalGotos_14);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 319, &AsmLabels_15);
  succeeded = (NonLocalGotos_14 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (AsmLabels_15 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer Var_1756 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 3))));
    MR_Integer Var_1757 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 4))));
    MR_Integer Var_1758 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 5))));
    MR_Integer Var_1759 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 6))));
    MR_Integer Var_1760 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 7))));
    MR_Integer Var_1761 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 8))));
    MR_Integer Var_1762 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 9))));
    MR_Integer Var_1763 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 10))));
    MR_Integer Var_1764 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 11))));
    MR_Integer Var_1765 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 12))));
    MR_Integer Var_1766 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 13))));
    MR_Integer Var_1767 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 14))));
    MR_Integer Var_1768 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 15))));
    MR_Integer Var_1769 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 16))));
    MR_Integer Var_1770 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 17))));
    MR_Integer Var_1771 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 18))));
    MR_Integer Var_1772 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 19))));
    MR_Integer Var_1773 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 20))));
    MR_Integer Var_1774 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 21))));
    MR_Integer Var_1775 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 22))));
    MR_Integer Var_1776 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 23))));
    MR_Integer Var_1777 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 24))));
    MR_Integer Var_1778 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 25))));
    MR_Integer Var_1779 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 26))));
    MR_Integer Var_1780 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 27))));
    MR_Integer Var_1781 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 28))));
    MR_Integer Var_1782 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 29))));
    MR_Integer Var_1783 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 30))));
    MR_Integer Var_1784 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 31))));
    MR_Integer Var_1785 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 32))));
    MR_Integer Var_1786 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 33))));
    MR_Integer Var_1787 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 34))));
    MR_Integer Var_1788 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 35))));
    MR_Integer Var_1789 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 36))));
    MR_Integer Var_1790 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 37))));
    MR_Integer Var_1791 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 38))));
    MR_Integer Var_1792 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 39))));
    MR_String Var_1793 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 40))));
    MR_Unsigned packed_word_21 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 0)));
    MR_Unsigned packed_word_22 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 1)));
    MR_Unsigned packed_word_23 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_OptTuple_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_21);
      MR_hl_field(0, base, 1) = (MR_Box) ((((packed_word_22 & (~((MR_Unsigned) 512U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 9))));
      MR_hl_field(0, base, 2) = (MR_Box) (packed_word_23);
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_1756));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_1757));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_1758));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_1759));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_1760));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_1761));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_1762));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_1763));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_1764));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_1765));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_1766));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_1767));
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_1768));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_1769));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_1770));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_1771));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_1772));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_1773));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_1774));
      MR_hl_field(0, base, 22) = ((MR_Box) (Var_1775));
      MR_hl_field(0, base, 23) = ((MR_Box) (Var_1776));
      MR_hl_field(0, base, 24) = ((MR_Box) (Var_1777));
      MR_hl_field(0, base, 25) = ((MR_Box) (Var_1778));
      MR_hl_field(0, base, 26) = ((MR_Box) (Var_1779));
      MR_hl_field(0, base, 27) = ((MR_Box) (Var_1780));
      MR_hl_field(0, base, 28) = ((MR_Box) (Var_1781));
      MR_hl_field(0, base, 29) = ((MR_Box) (Var_1782));
      MR_hl_field(0, base, 30) = ((MR_Box) (Var_1783));
      MR_hl_field(0, base, 31) = ((MR_Box) (Var_1784));
      MR_hl_field(0, base, 32) = ((MR_Box) (Var_1785));
      MR_hl_field(0, base, 33) = ((MR_Box) (Var_1786));
      MR_hl_field(0, base, 34) = ((MR_Box) (Var_1787));
      MR_hl_field(0, base, 35) = ((MR_Box) (Var_1788));
      MR_hl_field(0, base, 36) = ((MR_Box) (Var_1789));
      MR_hl_field(0, base, 37) = ((MR_Box) (Var_1790));
      MR_hl_field(0, base, 38) = ((MR_Box) (Var_1791));
      MR_hl_field(0, base, 39) = ((MR_Box) (Var_1792));
      MR_hl_field(0, base, 40) = ((MR_Box) (Var_1793));
    }
  }
  else
  {
    MR_Integer Var_1881 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 3))));
    MR_Integer Var_1882 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 4))));
    MR_Integer Var_1883 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 5))));
    MR_Integer Var_1884 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 6))));
    MR_Integer Var_1885 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 7))));
    MR_Integer Var_1886 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 8))));
    MR_Integer Var_1887 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 9))));
    MR_Integer Var_1888 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 10))));
    MR_Integer Var_1889 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 11))));
    MR_Integer Var_1890 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 12))));
    MR_Integer Var_1891 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 13))));
    MR_Integer Var_1892 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 14))));
    MR_Integer Var_1893 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 15))));
    MR_Integer Var_1894 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 16))));
    MR_Integer Var_1895 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 17))));
    MR_Integer Var_1896 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 18))));
    MR_Integer Var_1897 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 19))));
    MR_Integer Var_1898 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 20))));
    MR_Integer Var_1899 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 21))));
    MR_Integer Var_1900 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 22))));
    MR_Integer Var_1901 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 23))));
    MR_Integer Var_1902 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 24))));
    MR_Integer Var_1903 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 25))));
    MR_Integer Var_1904 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 26))));
    MR_Integer Var_1905 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 27))));
    MR_Integer Var_1906 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 28))));
    MR_Integer Var_1907 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 29))));
    MR_Integer Var_1908 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 30))));
    MR_Integer Var_1909 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 31))));
    MR_Integer Var_1910 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 32))));
    MR_Integer Var_1911 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 33))));
    MR_Integer Var_1912 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 34))));
    MR_Integer Var_1913 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 35))));
    MR_Integer Var_1914 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 36))));
    MR_Integer Var_1915 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 37))));
    MR_Integer Var_1916 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 38))));
    MR_Integer Var_1917 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 39))));
    MR_String Var_1918 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 40))));
    MR_Unsigned packed_word_24 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 0)));
    MR_Unsigned packed_word_25 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 1)));
    MR_Unsigned packed_word_26 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, (MR_Integer) 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_OptTuple_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_24);
      MR_hl_field(0, base, 1) = (MR_Box) ((((packed_word_25 & (~((MR_Unsigned) 512U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 9))));
      MR_hl_field(0, base, 2) = (MR_Box) (packed_word_26);
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_1881));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_1882));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_1883));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_1884));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_1885));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_1886));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_1887));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_1888));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_1889));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_1890));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_1891));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_1892));
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_1893));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_1894));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_1895));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_1896));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_1897));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_1898));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_1899));
      MR_hl_field(0, base, 22) = ((MR_Box) (Var_1900));
      MR_hl_field(0, base, 23) = ((MR_Box) (Var_1901));
      MR_hl_field(0, base, 24) = ((MR_Box) (Var_1902));
      MR_hl_field(0, base, 25) = ((MR_Box) (Var_1903));
      MR_hl_field(0, base, 26) = ((MR_Box) (Var_1904));
      MR_hl_field(0, base, 27) = ((MR_Box) (Var_1905));
      MR_hl_field(0, base, 28) = ((MR_Box) (Var_1906));
      MR_hl_field(0, base, 29) = ((MR_Box) (Var_1907));
      MR_hl_field(0, base, 30) = ((MR_Box) (Var_1908));
      MR_hl_field(0, base, 31) = ((MR_Box) (Var_1909));
      MR_hl_field(0, base, 32) = ((MR_Box) (Var_1910));
      MR_hl_field(0, base, 33) = ((MR_Box) (Var_1911));
      MR_hl_field(0, base, 34) = ((MR_Box) (Var_1912));
      MR_hl_field(0, base, 35) = ((MR_Box) (Var_1913));
      MR_hl_field(0, base, 36) = ((MR_Box) (Var_1914));
      MR_hl_field(0, base, 37) = ((MR_Box) (Var_1915));
      MR_hl_field(0, base, 38) = ((MR_Box) (Var_1916));
      MR_hl_field(0, base, 39) = ((MR_Box) (Var_1917));
      MR_hl_field(0, base, 40) = ((MR_Box) (Var_1918));
    }
  }
}

static void MR_CALL 
libs__handle_options__handle_non_tail_rec_warnings_7_p_0(
  MR_Word OptTuple0_8,
  MR_Word OT_OptMLDSTailCalls_9,
  MR_Word OpMode_10,
  MR_Word STATE_VARIABLE_Globals_0_20,
  MR_Word * STATE_VARIABLE_Globals_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word WarnNonTailRecSelf_13;
  MR_Word WarnNonTailRecMutual_14;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 35, &WarnNonTailRecSelf_13);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 36, &WarnNonTailRecMutual_14);
  succeeded = (WarnNonTailRecSelf_13 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (WarnNonTailRecMutual_14 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word OT_PessimizeTailCalls0_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple0_8, (MR_Integer) 2))) >> 15)) & (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Specs_30_30;
    MR_Word STATE_VARIABLE_Specs_35_35;
    MR_Word Var_38;
    MR_Word Var_39;

    switch (OT_PessimizeTailCalls0_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_Specs_30_30 = STATE_VARIABLE_Specs_0_22;
        break;
      case (MR_Integer) 0:
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[287])), STATE_VARIABLE_Specs_0_22, &STATE_VARIABLE_Specs_30_30);
        break;
    }
    switch (OT_OptMLDSTailCalls_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[283])), STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_35_35);
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_35_35 = STATE_VARIABLE_Specs_30_30;
        break;
    }
    succeeded = ((MR_tag((MR_Word) OpMode_10)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_38 = ((MR_Word) ((MR_hl_field(3, OpMode_10, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_39 = ((MR_Word) ((MR_hl_field(3, Var_38, (MR_Integer) 0))));
        succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 20U));
      }
    }
    if (succeeded)
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[289])), STATE_VARIABLE_Specs_35_35, STATE_VARIABLE_Specs_23);
    else
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_35_35;
  }
  else
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  *STATE_VARIABLE_Globals_21 = STATE_VARIABLE_Globals_0_20;
}

static void MR_CALL 
libs__handle_options__handle_colors_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_13,
  MR_Word * STATE_VARIABLE_Globals_14)
{
  MR_Word NoColor_7;
  MR_Word UseColor_9;
  MR_Word Var_23;

  mercury__io__environment__get_environment_var_4_p_0((MR_String) "NO_COLOR", &NoColor_7);
  if ((NoColor_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word EnableIsSet_10;
    MR_Word EnableValue_11;
    MR_Word ConfigDefault_12;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_13, (MR_Integer) 90, &EnableIsSet_10);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_13, (MR_Integer) 91, &EnableValue_11);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_13, (MR_Integer) 88, &ConfigDefault_12);
    switch (EnableIsSet_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UseColor_9 = ConfigDefault_12;
        break;
      case (MR_Integer) 1:
        UseColor_9 = EnableValue_11;
        break;
    }
  }
  else
    UseColor_9 = (MR_Integer) 0;
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = (MR_Box) ((MR_Unsigned) (UseColor_9));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 92, Var_23, STATE_VARIABLE_Globals_0_13, STATE_VARIABLE_Globals_14);
}

static void MR_CALL 
libs__handle_options__handle_compare_specialization_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_9,
  MR_Word * STATE_VARIABLE_Globals_10)
{
  MR_bool succeeded;
  MR_Integer CompareSpec_4;

  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 372, &CompareSpec_4);
  succeeded = (CompareSpec_4 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word HighLevelCode_5;
    MR_Integer Limit0_6;
    MR_Word ModeConstraints_7;
    MR_Integer Limit_8;
    MR_Word Var_16;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 321, &HighLevelCode_5);
    switch (HighLevelCode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Limit0_6 = (MR_Integer) 13;
        break;
      case (MR_Integer) 1:
        Limit0_6 = (MR_Integer) 14;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 220, &ModeConstraints_7);
    switch (ModeConstraints_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Limit_8 = Limit0_6;
        break;
      case (MR_Integer) 1:
        Limit_8 = (MR_Integer) 1;
        break;
    }
    {
      Var_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_16, 0) = ((MR_Box) (Limit_8));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 372, Var_16, STATE_VARIABLE_Globals_0_9, STATE_VARIABLE_Globals_10);
  }
  else
    *STATE_VARIABLE_Globals_10 = STATE_VARIABLE_Globals_0_9;
}

static void MR_CALL 
libs__handle_options__handle_compiler_developer_options_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_39,
  MR_Word * STATE_VARIABLE_Globals_40)
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
  MR_Word DumpHLDSPredIds_25;
  MR_Word DumpHLDSStages_31;
  MR_Word DumpTraceStages_32;
  MR_Word ParallelLiveness_33;
  MR_Word ParallelCodeGen_34;
  MR_Word STATE_VARIABLE_Globals_46_46;
  MR_Word STATE_VARIABLE_Globals_51_51;
  MR_Word STATE_VARIABLE_Globals_57_57;
  MR_Word STATE_VARIABLE_Globals_62_62;
  MR_Word STATE_VARIABLE_Globals_67_67;
  MR_Word STATE_VARIABLE_Globals_72_72;
  MR_Word STATE_VARIABLE_Globals_80_80;
  MR_Word STATE_VARIABLE_Globals_84_84;
  MR_Word STATE_VARIABLE_Globals_90_90;
  MR_Word STATE_VARIABLE_Globals_95_95;
  MR_Word STATE_VARIABLE_Globals_101_101;
  MR_Word STATE_VARIABLE_Globals_117_117;
  MR_Word STATE_VARIABLE_Globals_121_121;
  MR_String AllDumpOptions_10;
  MR_String Var_76;

  libs__handle_options__option_implies_5_p_0((MR_Integer) 74, (MR_Integer) 73, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_39, &STATE_VARIABLE_Globals_46_46);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 73, (MR_Integer) 79, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_51_51);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 74, &VeryVerbose_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 83, &Statistics_8);
  succeeded = (VeryVerbose_7 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Statistics_8 == (MR_Integer) 1);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 84, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_51_51, &STATE_VARIABLE_Globals_57_57);
  else
    STATE_VARIABLE_Globals_57_57 = STATE_VARIABLE_Globals_51_51;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 101, (MR_Integer) 99, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_57_57, &STATE_VARIABLE_Globals_62_62);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 99, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_62_62, &STATE_VARIABLE_Globals_67_67);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 100, (MR_Integer) 99, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_67_67, &STATE_VARIABLE_Globals_72_72);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 114, &DebugLiveness_9);
  succeeded = (DebugLiveness_9 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_76 = (MR_String) "all";
    succeeded = libs__handle_options__convert_dump_alias_2_p_0(Var_76, &AllDumpOptions_10);
  }
  if (succeeded)
  {
    MR_String DumpOptions0_11;
    MR_String DumpOptions1_12;
    MR_Word Var_79;

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 211, &DumpOptions0_11);
    DumpOptions1_12 = mercury__string__f_43_43_2_f_0(DumpOptions0_11, AllDumpOptions_10);
    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (DumpOptions1_12));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 211, Var_79, STATE_VARIABLE_Globals_72_72, &STATE_VARIABLE_Globals_80_80);
  }
  else
    STATE_VARIABLE_Globals_80_80 = STATE_VARIABLE_Globals_72_72;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 102, (MR_Integer) 99, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_80_80, &STATE_VARIABLE_Globals_84_84);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_84_84, (MR_Integer) 103, &DebugModesPredId_13);
  succeeded = (DebugModesPredId_13 > (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 99, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_90_90);
  else
    STATE_VARIABLE_Globals_90_90 = STATE_VARIABLE_Globals_84_84;
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_90_90, (MR_Integer) 227, &DebugUnneededCodePredNames_14);
  if ((DebugUnneededCodePredNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_95_95 = STATE_VARIABLE_Globals_90_90;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 226, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_90_90, &STATE_VARIABLE_Globals_95_95);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_95_95, (MR_Integer) 111, &DebugOptPredIdStrs_17);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_95_95, (MR_Integer) 112, &DebugOptPredNames_18);
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
    libs__globals__set_option_4_p_0((MR_Integer) 109, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_95_95, &STATE_VARIABLE_Globals_101_101);
  else
    STATE_VARIABLE_Globals_101_101 = STATE_VARIABLE_Globals_95_95;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 120, &DebugIntermoduleAnalysis_23);
  switch (DebugIntermoduleAnalysis_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      analysis__set_analysis_debug_3_p_0((MR_Word) ((MR_Unsigned) 0U));
      break;
    case (MR_Integer) 1:
      {
        MR_Word AnalysisDebugStream_24;
        MR_Word Var_107;

        mercury__io__stderr_stream_3_p_0(&AnalysisDebugStream_24);
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (AnalysisDebugStream_24));
        }
        analysis__set_analysis_debug_3_p_0(Var_107);
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 205, &DumpHLDSPredIds_25);
  if ((DumpHLDSPredIds_25 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_117_117 = STATE_VARIABLE_Globals_101_101;
  else
  {
    MR_String DumpOptions2_28;
    MR_String DumpOptions3_29;
    MR_String DumpOptions_30;
    MR_Word Var_116;

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 211, &DumpOptions2_28);
    mercury__string__replace_all_4_p_0(DumpOptions2_28, (MR_String) "M", (MR_String) "", &DumpOptions3_29);
    mercury__string__replace_all_4_p_0(DumpOptions3_29, (MR_String) "T", (MR_String) "", &DumpOptions_30);
    {
      Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_116, 1) = ((MR_Box) (DumpOptions_30));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 211, Var_116, STATE_VARIABLE_Globals_101_101, &STATE_VARIABLE_Globals_117_117);
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 189, (MR_Integer) 188, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_117_117, &STATE_VARIABLE_Globals_121_121);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 204, &DumpHLDSStages_31);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 203, &DumpTraceStages_32);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 359, &ParallelLiveness_33);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 360, &ParallelCodeGen_34);
  succeeded = (DumpHLDSStages_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (DumpTraceStages_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
    {
      succeeded = (Statistics_8 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = (ParallelLiveness_33 == (MR_Integer) 1);
        if (!(succeeded))
          succeeded = (ParallelCodeGen_34 == (MR_Integer) 1);
      }
    }
  }
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 358, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_121_121, STATE_VARIABLE_Globals_40);
  else
    *STATE_VARIABLE_Globals_40 = STATE_VARIABLE_Globals_121_121;
}

static void MR_CALL 
libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8)
{
  MR_bool succeeded;
  MR_Word LibLinkages0_4;
  MR_Word STATE_VARIABLE_Globals_12_12;
  MR_Word STATE_VARIABLE_Globals_17_17;
  MR_Word STATE_VARIABLE_Globals_22_22;
  MR_Word STATE_VARIABLE_Globals_31_31;
  MR_Word SourceOptionValue_37;
  MR_Word SourceOptionValue_38;
  MR_Word SourceOptionValue_39;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_7, (MR_Integer) 142, &SourceOptionValue_37);
  switch (SourceOptionValue_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_12_12 = STATE_VARIABLE_Globals_0_7;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 607, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[278])), STATE_VARIABLE_Globals_0_7, &STATE_VARIABLE_Globals_12_12);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_12_12, (MR_Integer) 142, &SourceOptionValue_38);
  switch (SourceOptionValue_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_17_17 = STATE_VARIABLE_Globals_12_12;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 609, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[278])), STATE_VARIABLE_Globals_12_12, &STATE_VARIABLE_Globals_17_17);
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_17, (MR_Integer) 692, &LibLinkages0_4);
  if ((LibLinkages0_4 == (MR_Word) ((MR_Unsigned) 0U)))
    libs__globals__set_option_4_p_0((MR_Integer) 692, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[281])), STATE_VARIABLE_Globals_17_17, &STATE_VARIABLE_Globals_22_22);
  else
    STATE_VARIABLE_Globals_22_22 = STATE_VARIABLE_Globals_17_17;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 548, &SourceOptionValue_39);
  switch (SourceOptionValue_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_31_31 = STATE_VARIABLE_Globals_22_22;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 611, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_31_31);
      break;
  }
  succeeded = mercury__io__file__have_symlinks_0_p_0();
  if (succeeded)
    *STATE_VARIABLE_Globals_8 = STATE_VARIABLE_Globals_31_31;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 682, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_31_31, STATE_VARIABLE_Globals_8);
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv8_LambdaHeadVar__2_204;

  conv8_LambdaHeadVar__2_204 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2864__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_204));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_LambdaHeadVar__2_210;

  conv7_LambdaHeadVar__2_210 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2870__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_210));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_LambdaHeadVar__2_191;

  conv6_LambdaHeadVar__2_191 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2841__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_191));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_LambdaHeadVar__2_185;

  conv5_LambdaHeadVar__2_185 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2837__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_185));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__handle_options__IntroducedFrom__pred__handle_directory_options__2819__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_LambdaHeadVar__2_167;

  conv4_LambdaHeadVar__2_167 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2801__1_3_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_167));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_LambdaHeadVar__2_148;

  conv3_LambdaHeadVar__2_148 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2766__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_148));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_138;

  conv2_LambdaHeadVar__2_138 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2756__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_138));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_126;

  conv1_LambdaHeadVar__2_126 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2747__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_126));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_111;

  conv0_LambdaHeadVar__2_111 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2727__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_111));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__handle_options__handle_directory_options_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_61,
  MR_Word * STATE_VARIABLE_Globals_62)
{
  MR_bool succeeded;
  MR_Word UseGradeSubdirs_6;
  MR_String MercuryLinkage_11;
  MR_Word DefaultRuntimeLibraryDirs_12;
  MR_Word MaybeStdLibDir_13;
  MR_Word MaybeConfDir_19;
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
  MR_Word STATE_VARIABLE_Globals_66_66;
  MR_Word STATE_VARIABLE_Globals_72_72;
  MR_Word STATE_VARIABLE_Globals_77_77;
  MR_Word STATE_VARIABLE_Globals_92_92;
  MR_Word STATE_VARIABLE_Globals_104_104;
  MR_Word STATE_VARIABLE_Globals_154_154;
  MR_Word STATE_VARIABLE_Globals_161_161;
  MR_Word STATE_VARIABLE_Globals_181_181;
  MR_Word Var_197;
  MR_Word STATE_VARIABLE_Globals_198_198;
  MR_Word Var_200;
  MR_Word STATE_VARIABLE_Globals_201_201;
  MR_Word ToMihsSubdir_56;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_61, (MR_Integer) 698, &UseGradeSubdirs_6);
  if ((OpMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3))
  {
    MR_Word InvokedByMMCMake_8 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_4, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = (InvokedByMMCMake_8 == (MR_Integer) 1);
  }
  else
    succeeded = MR_FALSE;
  if (!(succeeded))
    succeeded = (UseGradeSubdirs_6 == (MR_Integer) 1);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 697, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_61, &STATE_VARIABLE_Globals_66_66);
  else
    STATE_VARIABLE_Globals_66_66 = STATE_VARIABLE_Globals_0_61;
  if ((OpMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3))
  {
    MR_Word OpModeArgs_9 = ((MR_Word) ((MR_hl_field(3, OpMode_4, (MR_Integer) 0))));
    MR_Word Var_68;
    MR_Word Var_69;

    succeeded = ((MR_tag((MR_Word) OpModeArgs_9)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_68 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_9, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_68)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_69 = ((MR_Unsigned) ((MR_hl_field(1, Var_68, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_69 == (MR_Integer) 2);
      }
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    STATE_VARIABLE_Globals_72_72 = STATE_VARIABLE_Globals_66_66;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 703, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_66_66, &STATE_VARIABLE_Globals_72_72);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 609, &MercuryLinkage_11);
  succeeded = (strcmp(MercuryLinkage_11, (MR_String) "static") == 0);
  if (succeeded)
  {
    DefaultRuntimeLibraryDirs_12 = (MR_Integer) 0;
    libs__globals__set_option_4_p_0((MR_Integer) 593, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_72_72, &STATE_VARIABLE_Globals_77_77);
  }
  else
  {
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 593, &DefaultRuntimeLibraryDirs_12);
    STATE_VARIABLE_Globals_77_77 = STATE_VARIABLE_Globals_72_72;
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_77_77, (MR_Integer) 602, &MaybeStdLibDir_13);
  if ((MaybeStdLibDir_13 == (MR_Word) ((MR_Unsigned) 0U)))
    libs__globals__set_option_4_p_0((MR_Integer) 703, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_77_77, &STATE_VARIABLE_Globals_92_92);
  else
  {
    MR_String StdLibDir_14 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_13, (MR_Integer) 0))));
    MR_Word OptionTable2_15;
    MR_Word OptionTable_16;
    MR_Word LinkLibDirs0_17;
    MR_Word STATE_VARIABLE_Globals_81_81;
    MR_Word Var_84;
    MR_Word STATE_VARIABLE_Globals_85_85;
    MR_Word Var_86;
    MR_String Var_87;

    libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_77_77, &OptionTable2_15);
    libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_14, OptionTable2_15, &OptionTable_16);
    libs__globals__set_options_3_p_0(OptionTable_16, STATE_VARIABLE_Globals_77_77, &STATE_VARIABLE_Globals_81_81);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_81_81, (MR_Integer) 591, &LinkLibDirs0_17);
    Var_87 = mercury__dir__f_slash_2_f_0(StdLibDir_14, (MR_String) "lib");
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) (LinkLibDirs0_17));
    }
    {
      Var_84 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_84, 1) = ((MR_Box) (Var_86));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 591, Var_84, STATE_VARIABLE_Globals_81_81, &STATE_VARIABLE_Globals_85_85);
    switch (DefaultRuntimeLibraryDirs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_92_92 = STATE_VARIABLE_Globals_85_85;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath0_18;
          MR_Word Var_91;
          MR_Word Var_93;
          MR_String Var_94;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_85_85, (MR_Integer) 592, &Rpath0_18);
          Var_94 = mercury__dir__f_slash_2_f_0(StdLibDir_14, (MR_String) "lib");
          {
            Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
            MR_hl_field(1, Var_93, 1) = ((MR_Box) (Rpath0_18));
          }
          {
            Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_91, 1) = ((MR_Box) (Var_93));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 592, Var_91, STATE_VARIABLE_Globals_85_85, &STATE_VARIABLE_Globals_92_92);
        }
        break;
    }
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_92_92, (MR_Integer) 683, &MaybeConfDir_19);
  if ((MaybeConfDir_19 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_104_104 = STATE_VARIABLE_Globals_92_92;
  else
  {
    MR_String ConfDir_20 = ((MR_String) ((MR_hl_field(1, MaybeConfDir_19, (MR_Integer) 0))));
    MR_Word CIncludeDirs0_21;
    MR_Word Var_103;
    MR_Word Var_105;
    MR_String Var_106;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_92_92, (MR_Integer) 552, &CIncludeDirs0_21);
    Var_106 = mercury__dir__f_slash_2_f_0(ConfDir_20, (MR_String) "conf");
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) (CIncludeDirs0_21));
    }
    {
      Var_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_103, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_103, 1) = ((MR_Box) (Var_105));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 552, Var_103, STATE_VARIABLE_Globals_92_92, &STATE_VARIABLE_Globals_104_104);
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_104_104, (MR_Integer) 596, &MercuryLibDirs_22);
  libs__compute_grade__grade_directory_component_2_p_0(STATE_VARIABLE_Globals_104_104, &GradeString_23);
  if ((MercuryLibDirs_22 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_154_154 = STATE_VARIABLE_Globals_104_104;
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
    MR_Word Var_109;
    MR_Word Var_116;
    MR_Word STATE_VARIABLE_Globals_117_117;
    MR_Word Var_118;
    MR_Word STATE_VARIABLE_Globals_122_122;
    MR_Word Var_124;
    MR_Word Var_133;
    MR_Word STATE_VARIABLE_Globals_134_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_143;
    MR_Word STATE_VARIABLE_Globals_144_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_153;
    MR_Word Var_155;

    {
      Var_109 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_109, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
      MR_hl_field(0, Var_109, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_1));
      MR_hl_field(0, Var_109, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_109, 3) = ((MR_Box) (GradeString_23));
    }
    ExtraLinkLibDirs_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_109, MercuryLibDirs_22);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_104_104, (MR_Integer) 591, &LinkLibDirs1_28);
    Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_28, ExtraLinkLibDirs_26);
    {
      Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_116, 1) = ((MR_Box) (Var_118));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 591, Var_116, STATE_VARIABLE_Globals_104_104, &STATE_VARIABLE_Globals_117_117);
    switch (DefaultRuntimeLibraryDirs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_122_122 = STATE_VARIABLE_Globals_117_117;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath_29;
          MR_Word Var_121;
          MR_Word Var_123;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_117_117, (MR_Integer) 592, &Rpath_29);
          Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_29, ExtraLinkLibDirs_26);
          {
            Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_121, 1) = ((MR_Box) (Var_123));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 592, Var_121, STATE_VARIABLE_Globals_117_117, &STATE_VARIABLE_Globals_122_122);
        }
        break;
    }
    {
      Var_124 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_124, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
      MR_hl_field(0, Var_124, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_2));
      MR_hl_field(0, Var_124, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_124, 3) = ((MR_Box) (GradeString_23));
    }
    ExtraIncludeDirs_30 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_124, MercuryLibDirs_22);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_122_122, (MR_Integer) 552, &CIncludeDirs_31);
    Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_30, CIncludeDirs_31);
    {
      Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_133, 1) = ((MR_Box) (Var_135));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 552, Var_133, STATE_VARIABLE_Globals_122_122, &STATE_VARIABLE_Globals_134_134);
    {
      Var_136 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_136, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
      MR_hl_field(0, Var_136, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_3));
      MR_hl_field(0, Var_136, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_136, 3) = ((MR_Box) (GradeString_23));
    }
    ExtraIntermodDirs_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_136, MercuryLibDirs_22);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_134_134, (MR_Integer) 701, &IntermodDirs0_33);
    Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_32, IntermodDirs0_33);
    {
      Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_143, 1) = ((MR_Box) (Var_145));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 701, Var_143, STATE_VARIABLE_Globals_134_134, &STATE_VARIABLE_Globals_144_144);
    {
      Var_146 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_146, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
      MR_hl_field(0, Var_146, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_4));
      MR_hl_field(0, Var_146, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_146, 3) = ((MR_Box) (GradeString_23));
    }
    ExtraInitDirs_34 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_146, MercuryLibDirs_22);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_144_144, (MR_Integer) 604, &InitDirs1_35);
    Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_35, ExtraInitDirs_34);
    {
      Var_153 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_153, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_153, 1) = ((MR_Box) (Var_155));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 604, Var_153, STATE_VARIABLE_Globals_144_144, &STATE_VARIABLE_Globals_154_154);
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_154_154, (MR_Integer) 702, &UseSearchDirs_36);
  switch (UseSearchDirs_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_161_161 = STATE_VARIABLE_Globals_154_154;
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntermodDirs1_37;
        MR_Word SearchDirs_38;
        MR_Word Var_160;
        MR_Word Var_162;

        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_154_154, (MR_Integer) 701, &IntermodDirs1_37);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_154_154, (MR_Integer) 700, &SearchDirs_38);
        Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_37, SearchDirs_38);
        {
          Var_160 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_160, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_160, 1) = ((MR_Box) (Var_162));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 701, Var_160, STATE_VARIABLE_Globals_154_154, &STATE_VARIABLE_Globals_161_161);
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_161_161, (MR_Integer) 598, &SearchLibFilesDirs_39);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_161_161, (MR_Integer) 701, &IntermodDirs2_40);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_161_161, (MR_Integer) 717, &TargetArch_41);
  {
    ToGradeSubdir_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToGradeSubdir_42, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
    MR_hl_field(0, ToGradeSubdir_42, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_5));
    MR_hl_field(0, ToGradeSubdir_42, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, ToGradeSubdir_42, 3) = ((MR_Box) (GradeString_23));
    MR_hl_field(0, ToGradeSubdir_42, 4) = ((MR_Box) (TargetArch_41));
  }
  switch (UseGradeSubdirs_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IntermodDirs3_46;
        MR_Word LinkLibDirs2_47;
        MR_Word InitDirs2_48;
        MR_Word Var_180;

        IntermodDirs3_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_39, IntermodDirs2_40);
        {
          Var_180 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_180, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_180, 1) = ((MR_Box) (IntermodDirs3_46));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 701, Var_180, STATE_VARIABLE_Globals_161_161, &STATE_VARIABLE_Globals_181_181);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_181_181, (MR_Integer) 591, &LinkLibDirs2_47);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_181_181, (MR_Integer) 604, &InitDirs2_48);
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
        MR_String Var_171;
        MR_Word Var_173;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_177;
        MR_String Var_178;
        MR_Word IntermodDirs3_240;
        MR_Word LinkLibDirs2_241;
        MR_Word InitDirs2_242;
        MR_Word Var_243;

        Var_171 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", GradeString_23);
        GradeSubdir_44 = mercury__dir__f_slash_2_f_0(Var_171, TargetArch_41);
        SearchLibFilesGradeSubdirs_45 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_42, SearchLibFilesDirs_39);
        {
          Var_173 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_173, 0) = ((MR_Box) (GradeSubdir_44));
          MR_hl_field(1, Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_178 = mercury__dir__this_directory_0_f_0();
        {
          Var_177 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_177, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
          MR_hl_field(0, Var_177, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_6));
          MR_hl_field(0, Var_177, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_177, 3) = ((MR_Box) (Var_178));
        }
        Var_176 = mercury__list__negated_filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_177, IntermodDirs2_40);
        Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_45, Var_176);
        IntermodDirs3_240 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_173, Var_175);
        {
          Var_243 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_243, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_243, 1) = ((MR_Box) (IntermodDirs3_240));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 701, Var_243, STATE_VARIABLE_Globals_161_161, &STATE_VARIABLE_Globals_181_181);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_181_181, (MR_Integer) 591, &LinkLibDirs2_241);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_181_181, (MR_Integer) 604, &InitDirs2_242);
        {
          ToGradeLibDir_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeLibDir_49, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
          MR_hl_field(0, ToGradeLibDir_49, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_7));
          MR_hl_field(0, ToGradeLibDir_49, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeLibDir_49, 3) = ((MR_Box) (ToGradeSubdir_42));
        }
        SearchGradeLibDirs_50 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_49, SearchLibFilesDirs_39);
        LinkLibDirs_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_50, LinkLibDirs2_241);
        {
          ToGradeInitDir_52 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeInitDir_52, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
          MR_hl_field(0, ToGradeInitDir_52, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_8));
          MR_hl_field(0, ToGradeInitDir_52, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeInitDir_52, 3) = ((MR_Box) (ToGradeSubdir_42));
        }
        SearchGradeInitDirs_53 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_52, SearchLibFilesDirs_39);
        InitDirs_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_53, InitDirs2_242);
      }
      break;
  }
  {
    Var_197 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_197, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_197, 1) = ((MR_Box) (LinkLibDirs_51));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 591, Var_197, STATE_VARIABLE_Globals_181_181, &STATE_VARIABLE_Globals_198_198);
  {
    Var_200 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_200, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_200, 1) = ((MR_Box) (InitDirs_54));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 604, Var_200, STATE_VARIABLE_Globals_198_198, &STATE_VARIABLE_Globals_201_201);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_201_201, (MR_Integer) 697, &UseSubdirs_55);
  switch (UseGradeSubdirs_6) {
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
          MR_hl_field(0, ToMihsSubdir_56, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[1]));
          MR_hl_field(0, ToMihsSubdir_56, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_10));
          MR_hl_field(0, ToMihsSubdir_56, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToMihsSubdir_56, 3) = ((MR_Box) (ToGradeSubdir_42));
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
    MR_String Var_215;
    MR_String Var_216;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_220;
    MR_Box MR_CALL (* func_9)(MR_Box, MR_Box);
    MR_Box conv10_MihsSubdir_58;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_201_201, (MR_Integer) 552, &CIncludeDirs1_57);
    Var_215 = mercury__dir__this_directory_0_f_0();
    func_9 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToMihsSubdir_56, (MR_Integer) 1))));
    conv10_MihsSubdir_58 = func_9(((MR_Box) (ToMihsSubdir_56)), ((MR_Box) (Var_215)));
    MihsSubdir_58 = ((MR_String) (conv10_MihsSubdir_58));
    SearchLibMihsSubdirs_59 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_56, SearchLibFilesDirs_39);
    Var_216 = mercury__dir__this_directory_0_f_0();
    Var_218 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_59, CIncludeDirs1_57);
    {
      Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_217, 0) = ((MR_Box) (MihsSubdir_58));
      MR_hl_field(1, Var_217, 1) = ((MR_Box) (Var_218));
    }
    {
      SubdirCIncludeDirs_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SubdirCIncludeDirs_60, 0) = ((MR_Box) (Var_216));
      MR_hl_field(1, SubdirCIncludeDirs_60, 1) = ((MR_Box) (Var_217));
    }
    {
      Var_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_220, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_220, 1) = ((MR_Box) (SubdirCIncludeDirs_60));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 552, Var_220, STATE_VARIABLE_Globals_201_201, STATE_VARIABLE_Globals_62);
  }
  else
    *STATE_VARIABLE_Globals_62 = STATE_VARIABLE_Globals_201_201;
}

static void MR_CALL 
libs__handle_options__maybe_disable_smart_recompilation_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word OpMode_8,
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15)
{
  MR_bool succeeded;
  MR_Word Smart_11;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 164, &Smart_11);
  switch (Smart_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_15 = STATE_VARIABLE_Globals_0_14;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_22_22;
        MR_Word STATE_VARIABLE_Globals_27_27;
        MR_Word OpModeArgs_12;
        MR_Word Var_29;
        MR_Word Var_30;

        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_0_14, (MR_Integer) 511, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_32;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 164, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_22_22);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 32, &WarnSmart_32);
          switch (WarnSmart_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Halt_33;

                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Warning: smart recompilation does not yet work with ");
                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\140--intermodule-optimization\'");
                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ".\n");
                libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 3, &Halt_33);
                switch (Halt_33) {
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
          STATE_VARIABLE_Globals_22_22 = STATE_VARIABLE_Globals_0_14;
        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_22_22, (MR_Integer) 513, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_51;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 164, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_27_27);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_27_27, (MR_Integer) 32, &WarnSmart_51);
          switch (WarnSmart_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Halt_52;

                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Warning: smart recompilation does not yet work with ");
                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\140--use-opt-files\'");
                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ".\n");
                libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_27_27, (MR_Integer) 3, &Halt_52);
                switch (Halt_52) {
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
          STATE_VARIABLE_Globals_27_27 = STATE_VARIABLE_Globals_22_22;
        succeeded = ((MR_tag((MR_Word) OpMode_8)) == (MR_Integer) 3);
        if (succeeded)
        {
          OpModeArgs_12 = ((MR_Word) ((MR_hl_field(3, OpMode_8, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) OpModeArgs_12)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_29 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_12, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_30 = ((MR_Unsigned) ((MR_hl_field(1, Var_29, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (Var_30 == (MR_Integer) 0);
            }
          }
        }
        if (succeeded)
          *STATE_VARIABLE_Globals_15 = STATE_VARIABLE_Globals_27_27;
        else
        {
          MR_Word WarnSmart_70;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 164, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_27_27, STATE_VARIABLE_Globals_15);
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_15, (MR_Integer) 32, &WarnSmart_70);
          switch (WarnSmart_70) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Halt_71;

                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "Warning: smart recompilation does not yet work with ");
                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) "\140--no-target-code-only\'");
                mercury__io__write_string_4_p_0(ProgressStream_7, (MR_String) ".\n");
                libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_15, (MR_Integer) 3, &Halt_71);
                switch (Halt_71) {
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
      break;
  }
}

static void MR_CALL 
libs__handle_options__handle_option_to_option_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_9,
  MR_Word * STATE_VARIABLE_Globals_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3);
  MR_Word UnusedImports_8;
  MR_Word STATE_VARIABLE_Globals_13_13;
  MR_Word STATE_VARIABLE_Globals_18_18;
  MR_Word STATE_VARIABLE_Globals_23_23;
  MR_Word STATE_VARIABLE_Globals_28_28;
  MR_Word STATE_VARIABLE_Globals_33_33;
  MR_Word STATE_VARIABLE_Globals_38_38;
  MR_Word STATE_VARIABLE_Globals_43_43;
  MR_Word STATE_VARIABLE_Globals_48_48;
  MR_Word STATE_VARIABLE_Globals_53_53;
  MR_Word STATE_VARIABLE_Globals_58_58;
  MR_Word STATE_VARIABLE_Globals_63_63;
  MR_Word STATE_VARIABLE_Globals_68_68;
  MR_Word STATE_VARIABLE_Globals_73_73;
  MR_Word STATE_VARIABLE_Globals_78_78;
  MR_Word STATE_VARIABLE_Globals_83_83;
  MR_Word STATE_VARIABLE_Globals_88_88;
  MR_Word STATE_VARIABLE_Globals_93_93;
  MR_Word STATE_VARIABLE_Globals_98_98;
  MR_Word STATE_VARIABLE_Globals_103_103;
  MR_Word STATE_VARIABLE_Globals_107_107;
  MR_Word InvokedByMMCMake_7;

  if (succeeded)
  {
    InvokedByMMCMake_7 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_4, (MR_Integer) 1))) & (MR_Integer) 1);
    succeeded = (InvokedByMMCMake_7 == (MR_Integer) 1);
  }
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 166, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_9, &STATE_VARIABLE_Globals_13_13);
  else
    STATE_VARIABLE_Globals_13_13 = STATE_VARIABLE_Globals_0_9;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 77, (MR_Integer) 76, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_13_13, &STATE_VARIABLE_Globals_18_18);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 119, (MR_Integer) 222, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_18_18, &STATE_VARIABLE_Globals_23_23);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 222, (MR_Integer) 220, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_23_23, &STATE_VARIABLE_Globals_28_28);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 221, (MR_Integer) 220, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_28_28, &STATE_VARIABLE_Globals_33_33);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 248, (MR_Integer) 327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_38_38);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 257, (MR_Integer) 327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_38_38, &STATE_VARIABLE_Globals_43_43);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 519, (MR_Integer) 520, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_48_48);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 525, (MR_Integer) 523, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_48_48, &STATE_VARIABLE_Globals_53_53);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 533, (MR_Integer) 532, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_53_53, &STATE_VARIABLE_Globals_58_58);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 540, (MR_Integer) 539, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_58_58, &STATE_VARIABLE_Globals_63_63);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 532, (MR_Integer) 531, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_63_63, &STATE_VARIABLE_Globals_68_68);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 539, (MR_Integer) 538, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_68_68, &STATE_VARIABLE_Globals_73_73);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 532, (MR_Integer) 18, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_73_73, &STATE_VARIABLE_Globals_78_78);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 539, (MR_Integer) 18, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_78_78, &STATE_VARIABLE_Globals_83_83);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 515, (MR_Integer) 511, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_83_83, &STATE_VARIABLE_Globals_88_88);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 515, (MR_Integer) 514, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_88_88, &STATE_VARIABLE_Globals_93_93);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 511, (MR_Integer) 513, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_93_93, &STATE_VARIABLE_Globals_98_98);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 514, (MR_Integer) 513, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_98_98, &STATE_VARIABLE_Globals_103_103);
  libs__globals__set_option_4_p_0((MR_Integer) 513, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_103_103, &STATE_VARIABLE_Globals_107_107);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_107_107, (MR_Integer) 52, &UnusedImports_8);
  switch (UnusedImports_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_10 = STATE_VARIABLE_Globals_107_107;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 53, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_107_107, STATE_VARIABLE_Globals_10);
      break;
  }
}

static void MR_CALL 
libs__handle_options__handle_opmode_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word * STATE_VARIABLE_Globals_20)
{
  MR_bool succeeded;
  MR_Word Smart0_6;
  MR_Word Inform0_7;
  MR_Word Smart_12;
  MR_Word Inform_13;
  MR_Word STATE_VARIABLE_Globals_37_37;
  MR_Word STATE_VARIABLE_Globals_68_68;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 164, &Smart0_6);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 72, &Inform0_7);
  switch (MR_tag((MR_Word) OpMode_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpMode_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Smart_12 = (MR_Integer) 0;
            Inform_13 = (MR_Integer) 0;
            STATE_VARIABLE_Globals_37_37 = STATE_VARIABLE_Globals_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 31, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_37_37);
            Smart_12 = (MR_Integer) 0;
            Inform_13 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        Smart_12 = (MR_Integer) 0;
        Inform_13 = (MR_Integer) 0;
        STATE_VARIABLE_Globals_37_37 = STATE_VARIABLE_Globals_0_19;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeArgs_8 = ((MR_Word) ((MR_hl_field(3, OpMode_4, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) OpModeArgs_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              Smart_12 = (MR_Integer) 0;
              Inform_13 = (MR_Integer) 0;
              STATE_VARIABLE_Globals_37_37 = STATE_VARIABLE_Globals_0_19;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word OpModeArgsMI_10 = ((MR_Unsigned) ((MR_hl_field(2, OpModeArgs_8, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word HaltAtWarn_11;
              MR_Word STATE_VARIABLE_Globals_25_25;
              MR_Word Var_29;
              MR_Word STATE_VARIABLE_Globals_30_30;
              MR_Word STATE_VARIABLE_Globals_33_33;

              libs__globals__set_option_4_p_0((MR_Integer) 184, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_25_25);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_25_25, (MR_Integer) 4, &HaltAtWarn_11);
              {
                Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_29, 0) = (MR_Box) ((MR_Unsigned) (HaltAtWarn_11));
              }
              libs__globals__set_option_4_p_0((MR_Integer) 3, Var_29, STATE_VARIABLE_Globals_25_25, &STATE_VARIABLE_Globals_30_30);
              libs__globals__set_option_4_p_0((MR_Integer) 53, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_30_30, &STATE_VARIABLE_Globals_33_33);
              switch (OpModeArgsMI_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word Var_36;

                    {
                      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_36, 0) = (MR_Box) ((MR_Unsigned) (Smart0_6));
                    }
                    libs__globals__set_option_4_p_0((MR_Integer) 165, Var_36, STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_37_37);
                  }
                  break;
                case (MR_Integer) 2:
                  libs__globals__set_option_4_p_0((MR_Integer) 165, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_37_37);
                  break;
              }
              Smart_12 = (MR_Integer) 0;
              Inform_13 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word OpModeAugment_14 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_8, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) OpModeAugment_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(OpModeAugment_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word STATE_VARIABLE_Globals_44_44;
                        MR_Word Var_48;
                        MR_Word HaltAtWarn_72;

                        libs__globals__set_option_4_p_0((MR_Integer) 184, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_44_44);
                        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_44_44, (MR_Integer) 5, &HaltAtWarn_72);
                        {
                          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_48, 0) = (MR_Box) ((MR_Unsigned) (HaltAtWarn_72));
                        }
                        libs__globals__set_option_4_p_0((MR_Integer) 3, Var_48, STATE_VARIABLE_Globals_44_44, &STATE_VARIABLE_Globals_37_37);
                        Smart_12 = (MR_Integer) 0;
                        Inform_13 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word STATE_VARIABLE_Globals_52_52;
                        MR_Word STATE_VARIABLE_Globals_56_56;
                        MR_Word Var_60;
                        MR_Word HaltAtWarn_73;

                        libs__globals__set_option_4_p_0((MR_Integer) 515, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_52_52);
                        libs__globals__set_option_4_p_0((MR_Integer) 184, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_52_52, &STATE_VARIABLE_Globals_56_56);
                        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_56_56, (MR_Integer) 5, &HaltAtWarn_73);
                        {
                          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_60, 0) = (MR_Box) ((MR_Unsigned) (HaltAtWarn_73));
                        }
                        libs__globals__set_option_4_p_0((MR_Integer) 3, Var_60, STATE_VARIABLE_Globals_56_56, &STATE_VARIABLE_Globals_37_37);
                        Smart_12 = (MR_Integer) 0;
                        Inform_13 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                      {
                        Smart_12 = (MR_Integer) 0;
                        Inform_13 = (MR_Integer) 0;
                        STATE_VARIABLE_Globals_37_37 = STATE_VARIABLE_Globals_0_19;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        Smart_12 = (MR_Integer) 0;
                        Inform_13 = Inform0_7;
                        STATE_VARIABLE_Globals_37_37 = STATE_VARIABLE_Globals_0_19;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Smart_12 = Smart0_6;
                    Inform_13 = Inform0_7;
                    STATE_VARIABLE_Globals_37_37 = STATE_VARIABLE_Globals_0_19;
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
  }
  succeeded = (Smart_12 == Smart0_6);
  if (succeeded)
    STATE_VARIABLE_Globals_68_68 = STATE_VARIABLE_Globals_37_37;
  else
  {
    MR_Word Var_67;

    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = (MR_Box) ((MR_Unsigned) (Smart_12));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 164, Var_67, STATE_VARIABLE_Globals_37_37, &STATE_VARIABLE_Globals_68_68);
  }
  succeeded = (Inform_13 == Inform0_7);
  if (succeeded)
    *STATE_VARIABLE_Globals_20 = STATE_VARIABLE_Globals_68_68;
  else
  {
    MR_Word Var_70;

    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = (MR_Box) ((MR_Unsigned) (Inform_13));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 72, Var_70, STATE_VARIABLE_Globals_68_68, STATE_VARIABLE_Globals_20);
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
  MR_bool succeeded;
  MR_Word ProcIdStackLayout_12;
  MR_Word AgcStackLayout_13;
  MR_Word BasicStackLayout_14;
  MR_Word STATE_VARIABLE_Globals_20_20;
  MR_Word STATE_VARIABLE_Globals_25_25;
  MR_Word STATE_VARIABLE_Globals_30_30;
  MR_Word SourceOptionValue_40;
  MR_Word SourceOptionValue_41;
  MR_Word SourceOptionValue_42;
  MR_Word SourceOptionValue_43;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 327, &SourceOptionValue_40);
  switch (SourceOptionValue_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_20_20 = STATE_VARIABLE_Globals_0_15;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_20_20);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_20_20, (MR_Integer) 331, &SourceOptionValue_41);
  switch (SourceOptionValue_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_25_25 = STATE_VARIABLE_Globals_20_20;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_20_20, &STATE_VARIABLE_Globals_25_25);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_25_25, (MR_Integer) 330, &SourceOptionValue_42);
  switch (SourceOptionValue_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_30_30 = STATE_VARIABLE_Globals_25_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_25_25, &STATE_VARIABLE_Globals_30_30);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_30, (MR_Integer) 329, &SourceOptionValue_43);
  switch (SourceOptionValue_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_30_30;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_30_30, STATE_VARIABLE_Globals_16);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 330, &ProcIdStackLayout_12);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 329, &AgcStackLayout_13);
  succeeded = (ProcIdStackLayout_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (AgcStackLayout_13 == (MR_Integer) 1);
  if (succeeded)
    *OT_OptDups_9 = (MR_Integer) 1;
  else
    *OT_OptDups_9 = OT_OptDups0_8;
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 328, &BasicStackLayout_14);
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

static void MR_CALL 
libs__handle_options__handle_record_term_sizes_options_5_p_0(
  MR_Word STATE_VARIABLE_Globals_0_14,
  MR_Word * STATE_VARIABLE_Globals_15,
  MR_Word * AllowOptLCMCTermSize_7,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_bool succeeded;
  MR_Word RecordTermSizesAsWords_9;
  MR_Word RecordTermSizesAsCells_10;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 274, &RecordTermSizesAsWords_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 275, &RecordTermSizesAsCells_10);
  succeeded = (RecordTermSizesAsWords_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (RecordTermSizesAsCells_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[275])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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

      libs__globals__set_option_4_p_0((MR_Integer) 259, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_29_29);
      *AllowOptLCMCTermSize_7 = (MR_Integer) 0;
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 321, &HighLevelCode_12);
      libs__globals__set_option_4_p_0((MR_Integer) 307, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_29_29, STATE_VARIABLE_Globals_15);
      switch (HighLevelCode_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
          break;
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[277])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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

static void MR_CALL 
libs__handle_options__handle_profiling_options_9_p_0(
  MR_Word STATE_VARIABLE_Globals_0_25,
  MR_Word * STATE_VARIABLE_Globals_26,
  MR_Word Target_11,
  MR_Word ProfileDeep_12,
  MR_Word * STATE_VARIABLE_AllowSrcChangesProf_27,
  MR_Integer OT_HigherOrderSizeLimit0_14,
  MR_Integer * OT_HigherOrderSizeLimit_15,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  MR_bool succeeded;
  MR_String ExpComp_21;
  MR_Word STATE_VARIABLE_Globals_33_33;
  MR_Word STATE_VARIABLE_Globals_38_38;
  MR_Word STATE_VARIABLE_Globals_43_43;
  MR_Word STATE_VARIABLE_Globals_48_48;
  MR_Word STATE_VARIABLE_Specs_60_60;
  MR_Word STATE_VARIABLE_AllowSrcChangesProf_71_71;
  MR_Word SourceOptionValue_88;
  MR_Word SourceOptionValue_89;
  MR_Word SourceOptionValue_90;
  MR_Word SourceOptionValue_91;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_25, (MR_Integer) 270, &SourceOptionValue_88);
  switch (SourceOptionValue_88) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_33_33 = STATE_VARIABLE_Globals_0_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 261, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_25, &STATE_VARIABLE_Globals_33_33);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_33_33, (MR_Integer) 261, &SourceOptionValue_89);
  switch (SourceOptionValue_89) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_33_33;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 273, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_38_38);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 257, &SourceOptionValue_90);
  switch (SourceOptionValue_90) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_38_38;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 259, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_38_38, &STATE_VARIABLE_Globals_43_43);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_43_43, (MR_Integer) 257, &SourceOptionValue_91);
  switch (SourceOptionValue_91) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_48_48 = STATE_VARIABLE_Globals_43_43;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_48_48);
      break;
  }
  switch (ProfileDeep_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_AllowSrcChangesProf_71_71 = (MR_Integer) 1;
        *OT_HigherOrderSizeLimit_15 = OT_HigherOrderSizeLimit0_14;
        *STATE_VARIABLE_Globals_26 = STATE_VARIABLE_Globals_48_48;
        STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_0_28;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HighLevelCode_17;
        MR_Word ProfOptimized_19;
        MR_Word LotsOfHOSpec_20;
        MR_Word STATE_VARIABLE_Globals_63_63;
        MR_Word SourceOptionValue_92;

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_48_48, (MR_Integer) 321, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_11 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_0_28;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[269])), STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_60_60);
        libs__globals__set_option_4_p_0((MR_Integer) 373, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_48_48, &STATE_VARIABLE_Globals_63_63);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_63_63, (MR_Integer) 270, &SourceOptionValue_92);
        switch (SourceOptionValue_92) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Globals_26 = STATE_VARIABLE_Globals_63_63;
            break;
          case (MR_Integer) 1:
            libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_63_63, STATE_VARIABLE_Globals_26);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 176, &ProfOptimized_19);
        switch (ProfOptimized_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChangesProf_71_71 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChangesProf_71_71 = (MR_Integer) 1;
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 272, &LotsOfHOSpec_20);
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
  libs__globals__lookup_string_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 276, &ExpComp_21);
  succeeded = (strcmp(ExpComp_21, (MR_String) "") == 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_60_60;
    *STATE_VARIABLE_AllowSrcChangesProf_27 = STATE_VARIABLE_AllowSrcChangesProf_71_71;
  }
  else
  {
    MR_Word RecordTermSizesAsWords_22;
    MR_Word RecordTermSizesAsCells_23;

    *STATE_VARIABLE_AllowSrcChangesProf_27 = (MR_Integer) 0;
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 274, &RecordTermSizesAsWords_22);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 275, &RecordTermSizesAsCells_23);
    succeeded = (RecordTermSizesAsWords_22 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (RecordTermSizesAsCells_23 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_60_60;
    else
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[273])), STATE_VARIABLE_Specs_60_60, STATE_VARIABLE_Specs_29);
  }
}

static void MR_CALL 
libs__handle_options__maybe_update_event_set_file_name_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  MR_bool succeeded;
  MR_String EventSetFileName0_7;

  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_10, (MR_Integer) 240, &EventSetFileName0_7);
  succeeded = (strcmp(EventSetFileName0_7, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Word MaybeEventSetFileName_8;

    mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_8);
    if ((MaybeEventSetFileName_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Globals_11 = STATE_VARIABLE_Globals_0_10;
    else
    {
      MR_String EventSetFileName_9 = ((MR_String) ((MR_hl_field(1, MaybeEventSetFileName_8, (MR_Integer) 0))));
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_18, 1) = ((MR_Box) (EventSetFileName_9));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 240, Var_18, STATE_VARIABLE_Globals_0_10, STATE_VARIABLE_Globals_11);
    }
  }
  else
    *STATE_VARIABLE_Globals_11 = STATE_VARIABLE_Globals_0_10;
}

static void MR_CALL 
libs__handle_options__handle_debugging_options_9_p_0(
  MR_Word Target_10,
  MR_Word TraceLevel_11,
  MR_Word TraceEnabled_12,
  MR_Word SSTraceLevel_13,
  MR_Word * STATE_VARIABLE_AllowSrcChanges_23,
  MR_Word STATE_VARIABLE_Globals_0_24,
  MR_Word * STATE_VARIABLE_Globals_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Globals_31_31;
  MR_Word STATE_VARIABLE_Globals_36_36;
  MR_Word STATE_VARIABLE_Globals_41_41;
  MR_Word STATE_VARIABLE_Globals_46_46;
  MR_Word STATE_VARIABLE_AllowSrcChanges_65_65;
  MR_Word STATE_VARIABLE_Globals_81_81;
  MR_Word SourceOptionValue_94;
  MR_Word SourceOptionValue_95;
  MR_Word SourceOptionValue_96;
  MR_Word SourceOptionValue_97;
  MR_Word SourceOptionValue_98;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_24, (MR_Integer) 249, &SourceOptionValue_94);
  switch (SourceOptionValue_94) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_31_31 = STATE_VARIABLE_Globals_0_24;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 248, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_24, &STATE_VARIABLE_Globals_31_31);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_31_31, (MR_Integer) 248, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_36_36 = STATE_VARIABLE_Globals_31_31;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 174, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_31_31, &STATE_VARIABLE_Globals_36_36);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_36_36, (MR_Integer) 174, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_41_41 = STATE_VARIABLE_Globals_36_36;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 170, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_36_36, &STATE_VARIABLE_Globals_41_41);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_41_41, (MR_Integer) 173, &SourceOptionValue_97);
  switch (SourceOptionValue_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_46_46 = STATE_VARIABLE_Globals_41_41;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 170, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_41_41, &STATE_VARIABLE_Globals_46_46);
      break;
  }
  switch (TraceEnabled_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word HighLevelCode_17;
        MR_Word Parallel_19;
        MR_Word TraceOptimized_21;
        MR_Word AllowTraceTailRec_22;
        MR_Word STATE_VARIABLE_Specs_55_55;
        MR_Word STATE_VARIABLE_Globals_69_69;
        MR_Word STATE_VARIABLE_Globals_73_73;
        MR_Word STATE_VARIABLE_Globals_77_77;

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 321, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_10 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_26;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[265])), STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_55_55);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 278, &Parallel_19);
        switch (Parallel_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_55_55;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[267])), STATE_VARIABLE_Specs_55_55, STATE_VARIABLE_Specs_27);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 168, &TraceOptimized_21);
        switch (TraceOptimized_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChanges_65_65 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChanges_65_65 = (MR_Integer) 1;
            break;
        }
        libs__globals__set_option_4_p_0((MR_Integer) 331, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_69_69);
        libs__globals__set_option_4_p_0((MR_Integer) 332, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_69_69, &STATE_VARIABLE_Globals_73_73);
        libs__globals__set_option_4_p_0((MR_Integer) 379, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_73_73, &STATE_VARIABLE_Globals_77_77);
        AllowTraceTailRec_22 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_11);
        switch (AllowTraceTailRec_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__globals__set_option_4_p_0((MR_Integer) 177, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_77_77, &STATE_VARIABLE_Globals_81_81);
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Globals_81_81 = STATE_VARIABLE_Globals_77_77;
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_AllowSrcChanges_65_65 = (MR_Integer) 1;
        libs__globals__set_option_4_p_0((MR_Integer) 177, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_81_81);
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
      }
      break;
  }
  switch (SSTraceLevel_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      *STATE_VARIABLE_AllowSrcChanges_23 = (MR_Integer) 0;
      break;
    case (MR_Integer) 0:
      *STATE_VARIABLE_AllowSrcChanges_23 = STATE_VARIABLE_AllowSrcChanges_65_65;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_81_81, (MR_Integer) 294, &SourceOptionValue_98);
  switch (SourceOptionValue_98) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_25 = STATE_VARIABLE_Globals_81_81;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 296, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_81_81, STATE_VARIABLE_Globals_25);
      break;
  }
}

static void MR_CALL 
libs__handle_options__handle_minimal_model_options_5_p_0(
  MR_Word STATE_VARIABLE_Globals_0_21,
  MR_Word * STATE_VARIABLE_Globals_22,
  MR_Word * AllowHijacksMMSC_7,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;
  MR_Word UseMinimalModelStackCopy_9;
  MR_Word UseMinimalModelOwnStacks_10;
  MR_Word UseMinimalModel_12;
  MR_Word DisablePneg_19;
  MR_Word DisableCut_20;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_Globals_74_74;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 281, &UseMinimalModelStackCopy_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 282, &UseMinimalModelOwnStacks_10);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (UseMinimalModelOwnStacks_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[253])), STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_36_36);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_9, UseMinimalModelOwnStacks_10, &UseMinimalModel_12);
    *AllowHijacksMMSC_7 = (MR_Integer) 0;
  }
  else
  {
    STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_23;
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_9, UseMinimalModelOwnStacks_10, &UseMinimalModel_12);
    switch (UseMinimalModelStackCopy_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AllowHijacksMMSC_7 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        *AllowHijacksMMSC_7 = (MR_Integer) 0;
        break;
    }
  }
  switch (UseMinimalModel_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_36_36;
      break;
    case (MR_Integer) 1:
      {
        MR_Word HighLevelCode_13;
        MR_Word UseTrail_15;
        MR_Word Parallel_17;
        MR_Word STATE_VARIABLE_Specs_47_47;
        MR_Word STATE_VARIABLE_Specs_58_58;

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 321, &HighLevelCode_13);
        switch (HighLevelCode_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_47_47 = STATE_VARIABLE_Specs_36_36;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[257])), STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_47_47);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 280, &UseTrail_15);
        switch (UseTrail_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_58_58 = STATE_VARIABLE_Specs_47_47;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[260])), STATE_VARIABLE_Specs_47_47, &STATE_VARIABLE_Specs_58_58);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 278, &Parallel_17);
        switch (Parallel_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_58_58;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[263])), STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_24);
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 342, &DisablePneg_19);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 343, &DisableCut_20);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisablePneg_19 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 344, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_21, &STATE_VARIABLE_Globals_74_74);
  else
    STATE_VARIABLE_Globals_74_74 = STATE_VARIABLE_Globals_0_21;
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableCut_20 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_74_74, STATE_VARIABLE_Globals_22);
  else
    *STATE_VARIABLE_Globals_22 = STATE_VARIABLE_Globals_74_74;
}

static void MR_CALL 
libs__handle_options__handle_gc_options_7_p_0(
  MR_Word STATE_VARIABLE_Globals_0_20,
  MR_Word * STATE_VARIABLE_Globals_21,
  MR_Word GC_Method_9,
  MR_Word OT_OptFrames0_10,
  MR_Word * OT_OptFrames_11,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;

  switch (GC_Method_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
      {
        MR_Word HighLevelCode_13;
        MR_Word Target_14;
        MR_Word STATE_VARIABLE_Globals_26_26;
        MR_Word STATE_VARIABLE_Globals_30_30;
        MR_Word STATE_VARIABLE_Globals_34_34;
        MR_Word STATE_VARIABLE_Globals_38_38;

        libs__globals__set_option_4_p_0((MR_Integer) 329, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_26_26);
        libs__globals__set_option_4_p_0((MR_Integer) 332, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_26_26, &STATE_VARIABLE_Globals_30_30);
        libs__globals__set_option_4_p_0((MR_Integer) 379, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_30_30, &STATE_VARIABLE_Globals_34_34);
        libs__globals__set_option_4_p_0((MR_Integer) 362, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_38_38);
        libs__globals__set_option_4_p_0((MR_Integer) 363, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_38_38, STATE_VARIABLE_Globals_21);
        *OT_OptFrames_11 = (MR_Integer) 1;
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_21, (MR_Integer) 321, &HighLevelCode_13);
        libs__globals__get_target_2_p_0(*STATE_VARIABLE_Globals_21, &Target_14);
        succeeded = (HighLevelCode_13 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (Target_14 != (MR_Integer) 0);
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[231])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
        else
          *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
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
            {
              MR_Word SemidetReclaim_17;
              MR_Word NondetReclaim_18;
              MR_Word HighLevelCode_106;

              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 321, &HighLevelCode_106);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 362, &SemidetReclaim_17);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 363, &NondetReclaim_18);
              succeeded = (HighLevelCode_106 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (SemidetReclaim_17 != NondetReclaim_18);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[249])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
              else
                *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
              *STATE_VARIABLE_Globals_21 = STATE_VARIABLE_Globals_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Globals_63_63;

              libs__globals__set_option_4_p_0((MR_Integer) 362, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_63_63);
              libs__globals__set_option_4_p_0((MR_Integer) 363, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_63_63, STATE_VARIABLE_Globals_21);
              *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
libs__handle_options__handle_implications_of_parallel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_15,
  MR_Word * STATE_VARIABLE_Globals_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;
  MR_Word GradeSupportsParConj_7;
  MR_Word Parallel_8;
  MR_Word Threadscope_9;
  MR_Word ImplicitParallelism_11;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_Globals_79_79;
  MR_Word STATE_VARIABLE_Globals_84_84;
  MR_Word STATE_VARIABLE_Globals_88_88;
  MR_Word SourceOptionValue_95;
  MR_Word SourceOptionValue_96;

  libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_0_15, &GradeSupportsParConj_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 278, &Parallel_8);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 279, &Threadscope_9);
  succeeded = (GradeSupportsParConj_7 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Threadscope_9 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[208])), STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_36_36);
  else
    STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_17;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 732, &ImplicitParallelism_11);
  switch (ImplicitParallelism_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Globals_79_79 = STATE_VARIABLE_Globals_0_15;
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
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[217])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
                break;
            }
            libs__globals__set_option_4_p_0((MR_Integer) 732, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_79_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FeedbackFile_12;

            libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 733, &FeedbackFile_12);
            succeeded = (strcmp(FeedbackFile_12, (MR_String) "") == 0);
            if (succeeded)
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[223])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
            else
              *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_36_36;
            STATE_VARIABLE_Globals_79_79 = STATE_VARIABLE_Globals_0_15;
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_79_79, (MR_Integer) 732, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_84_84 = STATE_VARIABLE_Globals_79_79;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 260, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_79_79, &STATE_VARIABLE_Globals_84_84);
      break;
  }
  switch (GradeSupportsParConj_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__set_option_4_p_0((MR_Integer) 734, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_88_88);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Globals_88_88 = STATE_VARIABLE_Globals_84_84;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_88_88, (MR_Integer) 278, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_88_88;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 553, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_88_88, STATE_VARIABLE_Globals_16);
      break;
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
  MR_bool succeeded;
  MR_Word PregeneratedDist_13;
  MR_Word BackendForeignLanguages_14;
  MR_Word CurrentBackendForeignLanguage_23;
  MR_Word STATE_VARIABLE_Globals_55_55;
  MR_Word STATE_VARIABLE_Globals_60_60;
  MR_Word STATE_VARIABLE_Globals_154_154;
  MR_Word STATE_VARIABLE_Globals_252_252;
  MR_Word STATE_VARIABLE_Globals_257_257;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_26, (MR_Integer) 284, &PregeneratedDist_13);
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
        MR_Word STATE_VARIABLE_Globals_43_43;
        MR_Word STATE_VARIABLE_Globals_47_47;
        MR_Word STATE_VARIABLE_Globals_51_51;

        libs__globals__set_word_size_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_0_26, &STATE_VARIABLE_Globals_32_32);
        libs__globals__set_option_4_p_0((MR_Integer) 297, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[1])), STATE_VARIABLE_Globals_32_32, &STATE_VARIABLE_Globals_35_35);
        libs__globals__set_option_4_p_0((MR_Integer) 304, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[2])), STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_39_39);
        libs__globals__set_option_4_p_0((MR_Integer) 301, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_39_39, &STATE_VARIABLE_Globals_43_43);
        libs__globals__set_option_4_p_0((MR_Integer) 302, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_47_47);
        libs__globals__set_option_4_p_0((MR_Integer) 285, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
        libs__globals__set_option_4_p_0((MR_Integer) 307, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_51_51, &STATE_VARIABLE_Globals_55_55);
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 285, (MR_Integer) 301, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_55_55, &STATE_VARIABLE_Globals_60_60);
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
        MR_Word Var_67;
        MR_Word STATE_VARIABLE_Globals_68_68;
        MR_Word STATE_VARIABLE_Specs_89_89;
        MR_Word STATE_VARIABLE_Globals_105_105;
        MR_Word STATE_VARIABLE_Globals_110_110;
        MR_Word Var_153;

        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[189]));
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 297, &NumPtagBits0_15);
        succeeded = (NumPtagBits0_15 == (MR_Integer) -1);
        if (succeeded)
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 300, &NumPtagBits_16);
        else
          NumPtagBits_16 = NumPtagBits0_15;
        {
          Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_67, 0) = ((MR_Box) (NumPtagBits_16));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 297, Var_67, STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_68_68);
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
          STATE_VARIABLE_Specs_89_89 = STATE_VARIABLE_Specs_0_28;
        else
        {
          MR_Word NumPtagBitsSpec_17;
          MR_Word Var_71;
          MR_Word Var_74;
          MR_Word Var_77;
          MR_Word Var_78;

          {
            Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, Var_78, 1) = ((MR_Box) (NumPtagBits_16));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[193])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[160])));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[190])));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
          }
          {
            NumPtagBitsSpec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NumPtagBitsSpec_17, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[158])));
            MR_hl_field(1, NumPtagBitsSpec_17, 1) = ((MR_Box) (Var_71));
          }
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), NumPtagBitsSpec_17, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_89_89);
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_68_68, (MR_Integer) 321, &HighLevelCode_18);
        switch (HighLevelCode_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Globals_105_105 = STATE_VARIABLE_Globals_68_68;
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Globals_93_93;
              MR_Word STATE_VARIABLE_Globals_97_97;
              MR_Word STATE_VARIABLE_Globals_101_101;

              libs__globals__set_option_4_p_0((MR_Integer) 325, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_68_68, &STATE_VARIABLE_Globals_93_93);
              libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_93_93, &STATE_VARIABLE_Globals_97_97);
              libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_97_97, &STATE_VARIABLE_Globals_101_101);
              libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_101_101, &STATE_VARIABLE_Globals_105_105);
            }
            break;
        }
        succeeded = (NumPtagBits_16 >= (MR_Integer) 2);
        if (succeeded)
          libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_110_110);
        else
          libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_110_110);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_110_110, (MR_Integer) 304, &ArgPackBits0_19);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_110_110, (MR_Integer) 298, &BitsPerWord_20);
        succeeded = (ArgPackBits0_19 < (MR_Integer) 0);
        if (succeeded)
        {
          ArgPackBits_21 = BitsPerWord_20;
          *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_89_89;
        }
        else
        {
          succeeded = (ArgPackBits0_19 > BitsPerWord_20);
          if (succeeded)
          {
            MR_Word ArgPackBitsSpec_22;
            MR_Word Var_121;
            MR_Word Var_122;
            MR_Word Var_124;
            MR_Word Var_127;
            MR_Word Var_130;
            MR_Word Var_133;
            MR_Word Var_136;
            MR_Word Var_139;
            MR_Word Var_142;
            MR_Word Var_143;

            ArgPackBits_21 = BitsPerWord_20;
            Var_122 = (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[195]));
            {
              Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_143, 1) = ((MR_Box) (BitsPerWord_20));
            }
            {
              Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
              MR_hl_field(1, Var_142, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
            }
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[198])));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[197])));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[14])));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
            }
            {
              Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_127, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[36])));
              MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[196])));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
            }
            {
              ArgPackBitsSpec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgPackBitsSpec_22, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[194])));
              MR_hl_field(1, ArgPackBitsSpec_22, 1) = ((MR_Box) (Var_121));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_22, STATE_VARIABLE_Specs_89_89, STATE_VARIABLE_Specs_29);
          }
          else
          {
            ArgPackBits_21 = ArgPackBits0_19;
            *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_89_89;
          }
        }
        {
          Var_153 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_153, 0) = ((MR_Box) (ArgPackBits_21));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 304, Var_153, STATE_VARIABLE_Globals_110_110, &STATE_VARIABLE_Globals_154_154);
        *OT_StringBinarySwitchSize_11 = OT_StringBinarySwitchSize0_10;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_157_157;
        MR_Word STATE_VARIABLE_Globals_160_160;
        MR_Word STATE_VARIABLE_Globals_163_163;
        MR_Word STATE_VARIABLE_Globals_167_167;
        MR_Word STATE_VARIABLE_Globals_171_171;
        MR_Word STATE_VARIABLE_Globals_175_175;
        MR_Word STATE_VARIABLE_Globals_179_179;
        MR_Word STATE_VARIABLE_Globals_183_183;
        MR_Word STATE_VARIABLE_Globals_187_187;
        MR_Word STATE_VARIABLE_Globals_191_191;
        MR_Word STATE_VARIABLE_Globals_195_195;
        MR_Word STATE_VARIABLE_Globals_199_199;
        MR_Word STATE_VARIABLE_Globals_203_203;
        MR_Word STATE_VARIABLE_Globals_207_207;
        MR_Word STATE_VARIABLE_Globals_211_211;
        MR_Word STATE_VARIABLE_Globals_215_215;
        MR_Word STATE_VARIABLE_Globals_219_219;
        MR_Word STATE_VARIABLE_Globals_225_225;
        MR_Word STATE_VARIABLE_Globals_231_231;
        MR_Word STATE_VARIABLE_Globals_235_235;
        MR_Word STATE_VARIABLE_Globals_239_239;
        MR_Word STATE_VARIABLE_Globals_243_243;

        libs__globals__set_option_4_p_0((MR_Integer) 297, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_157_157);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_157_157, &STATE_VARIABLE_Globals_160_160);
        libs__globals__set_option_4_p_0((MR_Integer) 277, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[199])), STATE_VARIABLE_Globals_160_160, &STATE_VARIABLE_Globals_163_163);
        libs__globals__set_option_4_p_0((MR_Integer) 363, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_163_163, &STATE_VARIABLE_Globals_167_167);
        libs__globals__set_option_4_p_0((MR_Integer) 362, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_167_167, &STATE_VARIABLE_Globals_171_171);
        libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_171_171, &STATE_VARIABLE_Globals_175_175);
        libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_175_175, &STATE_VARIABLE_Globals_179_179);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_179_179, &STATE_VARIABLE_Globals_183_183);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_183_183, &STATE_VARIABLE_Globals_187_187);
        libs__globals__set_option_4_p_0((MR_Integer) 301, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_187_187, &STATE_VARIABLE_Globals_191_191);
        libs__globals__set_option_4_p_0((MR_Integer) 302, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_191_191, &STATE_VARIABLE_Globals_195_195);
        libs__globals__set_option_4_p_0((MR_Integer) 324, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_195_195, &STATE_VARIABLE_Globals_199_199);
        libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_199_199, &STATE_VARIABLE_Globals_203_203);
        libs__globals__set_option_4_p_0((MR_Integer) 303, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_203_203, &STATE_VARIABLE_Globals_207_207);
        libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_207_207, &STATE_VARIABLE_Globals_211_211);
        libs__globals__set_option_4_p_0((MR_Integer) 525, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_211_211, &STATE_VARIABLE_Globals_215_215);
        libs__globals__set_option_4_p_0((MR_Integer) 523, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_215_215, &STATE_VARIABLE_Globals_219_219);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[23]));
        libs__globals__set_option_4_p_0((MR_Integer) 624, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[200])), STATE_VARIABLE_Globals_219_219, &STATE_VARIABLE_Globals_225_225);
        libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_225_225, &STATE_VARIABLE_Globals_231_231);
        libs__globals__set_option_4_p_0((MR_Integer) 304, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_231_231, &STATE_VARIABLE_Globals_235_235);
        libs__globals__set_option_4_p_0((MR_Integer) 307, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_235_235, &STATE_VARIABLE_Globals_239_239);
        libs__globals__set_option_4_p_0((MR_Integer) 309, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_239_239, &STATE_VARIABLE_Globals_243_243);
        libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_154_154);
        *OT_StringBinarySwitchSize_11 = (MR_Integer) 999999;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_Globals_157_264;
        MR_Word STATE_VARIABLE_Globals_160_266;
        MR_Word STATE_VARIABLE_Globals_163_269;
        MR_Word STATE_VARIABLE_Globals_167_272;
        MR_Word STATE_VARIABLE_Globals_171_275;
        MR_Word STATE_VARIABLE_Globals_175_278;
        MR_Word STATE_VARIABLE_Globals_179_281;
        MR_Word STATE_VARIABLE_Globals_183_284;
        MR_Word STATE_VARIABLE_Globals_187_287;
        MR_Word STATE_VARIABLE_Globals_191_290;
        MR_Word STATE_VARIABLE_Globals_195_293;
        MR_Word STATE_VARIABLE_Globals_199_296;
        MR_Word STATE_VARIABLE_Globals_203_299;
        MR_Word STATE_VARIABLE_Globals_207_302;
        MR_Word STATE_VARIABLE_Globals_211_305;
        MR_Word STATE_VARIABLE_Globals_215_308;
        MR_Word STATE_VARIABLE_Globals_225_312;
        MR_Word STATE_VARIABLE_Globals_231_315;
        MR_Word STATE_VARIABLE_Globals_235_318;
        MR_Word STATE_VARIABLE_Globals_239_321;
        MR_Word STATE_VARIABLE_Globals_243_324;

        libs__globals__set_option_4_p_0((MR_Integer) 297, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_157_264);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_157_264, &STATE_VARIABLE_Globals_160_266);
        libs__globals__set_option_4_p_0((MR_Integer) 277, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[199])), STATE_VARIABLE_Globals_160_266, &STATE_VARIABLE_Globals_163_269);
        libs__globals__set_option_4_p_0((MR_Integer) 363, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_163_269, &STATE_VARIABLE_Globals_167_272);
        libs__globals__set_option_4_p_0((MR_Integer) 362, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_167_272, &STATE_VARIABLE_Globals_171_275);
        libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_171_275, &STATE_VARIABLE_Globals_175_278);
        libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_175_278, &STATE_VARIABLE_Globals_179_281);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_179_281, &STATE_VARIABLE_Globals_183_284);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_183_284, &STATE_VARIABLE_Globals_187_287);
        libs__globals__set_option_4_p_0((MR_Integer) 301, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_187_287, &STATE_VARIABLE_Globals_191_290);
        libs__globals__set_option_4_p_0((MR_Integer) 302, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_191_290, &STATE_VARIABLE_Globals_195_293);
        libs__globals__set_option_4_p_0((MR_Integer) 324, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_195_293, &STATE_VARIABLE_Globals_199_296);
        libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_199_296, &STATE_VARIABLE_Globals_203_299);
        libs__globals__set_option_4_p_0((MR_Integer) 303, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_203_299, &STATE_VARIABLE_Globals_207_302);
        libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_207_302, &STATE_VARIABLE_Globals_211_305);
        libs__globals__set_option_4_p_0((MR_Integer) 525, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_211_305, &STATE_VARIABLE_Globals_215_308);
        libs__globals__set_option_4_p_0((MR_Integer) 523, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_215_308, &STATE_VARIABLE_Globals_225_312);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[201]));
        libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_225_312, &STATE_VARIABLE_Globals_231_315);
        libs__globals__set_option_4_p_0((MR_Integer) 304, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_231_315, &STATE_VARIABLE_Globals_235_318);
        libs__globals__set_option_4_p_0((MR_Integer) 307, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_235_318, &STATE_VARIABLE_Globals_239_321);
        libs__globals__set_option_4_p_0((MR_Integer) 309, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_239_321, &STATE_VARIABLE_Globals_243_324);
        libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_243_324, &STATE_VARIABLE_Globals_154_154);
        *OT_StringBinarySwitchSize_11 = (MR_Integer) 999999;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 301, (MR_Integer) 320, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_154_154, &STATE_VARIABLE_Globals_252_252);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 321, (MR_Integer) 320, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_252_252, &STATE_VARIABLE_Globals_257_257);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_257_257, (MR_Integer) 326, &CurrentBackendForeignLanguage_23);
  if ((CurrentBackendForeignLanguage_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_261;

    {
      Var_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_261, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_261, 1) = ((MR_Box) (BackendForeignLanguages_14));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 326, Var_261, STATE_VARIABLE_Globals_257_257, STATE_VARIABLE_Globals_27);
  }
  else
    *STATE_VARIABLE_Globals_27 = STATE_VARIABLE_Globals_257_257;
}

static void MR_CALL 
libs__handle_options__option_implies_5_p_0(
  MR_Word SourceOption_6,
  MR_Word ImpliedOption_7,
  MR_Word ImpliedOptionValue_8,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
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

static void MR_CALL 
libs__handle_options__check_for_incompatibilities_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_Word TransOpt_8;
  MR_Word InterModOpt_12;
  MR_Word InterModAnalysis_13;
  MR_Word MaybeStandaloneInt_15;
  MR_Word ExtraInitFunctions_16;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word STATE_VARIABLE_Specs_62_62;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 515, &TransOpt_8);
  switch (TransOpt_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_0_20;
      break;
    case (MR_Integer) 1:
      {
        if ((OpMode_6 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3))
        {
          MR_Word InvokedByMMCMake_10 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_6, (MR_Integer) 1))) & (MR_Integer) 1);

          succeeded = (InvokedByMMCMake_10 == (MR_Integer) 1);
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[176])), STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_41_41);
        else
          STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_0_20;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 511, &InterModOpt_12);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 516, &InterModAnalysis_13);
  succeeded = (InterModOpt_12 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (InterModAnalysis_13 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[182])), STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_62_62);
  else
    STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_41_41;
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 136, &MaybeStandaloneInt_15);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 617, &ExtraInitFunctions_16);
  succeeded = (MaybeStandaloneInt_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExtraInitFunctions_16 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[188])), STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_21);
  else
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_62_62;
}

static void MR_CALL 
libs__handle_options__check_option_values_23_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_123,
  MR_Word * STATE_VARIABLE_OptionTable_124,
  MR_Word * Target_25,
  MR_Word * WordSize_26,
  MR_Word * GC_Method_27,
  MR_Word * TermNorm_28,
  MR_Word * Term2Norm_29,
  MR_Word * TraceLevel_30,
  MR_Word * TraceSuppress_31,
  MR_Word * SSTraceLevel_32,
  MR_Word * MaybeThreadSafe_33,
  MR_Word * C_CompilerType_34,
  MR_Word * CSharp_CompilerType_35,
  MR_Word * ReuseStrategy_36,
  MR_Word * MaybeFeedbackInfo_37,
  MR_Word * HostEnvType_38,
  MR_Word * SystemEnvType_39,
  MR_Word * TargetEnvType_40,
  MR_Word * LimitErrorContextsMap_41,
  MR_Word * LinkExtMap_42,
  MR_Word * STATE_VARIABLE_Specs_125)
{
  MR_bool succeeded;
  MR_String TargetStr_45;
  MR_Integer BitsPerWord_48;
  MR_String GC_MethodStr_51;
  MR_Integer FactTablePercentFull_54;
  MR_Integer IncompleteSwitchThreshold_56;
  MR_String TermNormStr_58;
  MR_String Term2NormStr_61;
  MR_Word ForceDisableTracing_64;
  MR_String SuppressStr_71;
  MR_Word ForceDisableSSDB_74;
  MR_String MaybeThreadSafeStr_79;
  MR_String DumpAlias_82;
  MR_String C_CompilerTypeStr_86;
  MR_String CSharp_CompilerTypeStr_90;
  MR_String ReuseConstraintStr_93;
  MR_Integer ReuseConstraintArgNum_94;
  MR_String FeedbackFile_97;
  MR_String HostEnvTypeStr_103;
  MR_String SystemEnvTypeStr_106;
  MR_String TargetEnvTypeStr_109;
  MR_Word LimitErrorContextsOptionStrs_112;
  MR_Word BadLimitErrorContextsOptions_113;
  MR_Word MaybeColorSpecs_120;
  MR_Word STATE_VARIABLE_Specs_161_161;
  MR_Word STATE_VARIABLE_Specs_195_195;
  MR_Word STATE_VARIABLE_Specs_234_234;
  MR_Word STATE_VARIABLE_Specs_255_255;
  MR_Word STATE_VARIABLE_Specs_276_276;
  MR_Word STATE_VARIABLE_Specs_309_309;
  MR_Word STATE_VARIABLE_Specs_342_342;
  MR_Word STATE_VARIABLE_Specs_364_364;
  MR_Word STATE_VARIABLE_Specs_421_421;
  MR_Word STATE_VARIABLE_Specs_458_458;
  MR_Word STATE_VARIABLE_Specs_492_492;
  MR_Word STATE_VARIABLE_OptionTable_496_496;
  MR_Word STATE_VARIABLE_Specs_523_523;
  MR_String STATE_VARIABLE_DumpOptions_525_525;
  MR_String STATE_VARIABLE_DumpOptions_526_526;
  MR_String STATE_VARIABLE_DumpOptions_529_529;
  MR_String STATE_VARIABLE_DumpOptions_533_533;
  MR_String STATE_VARIABLE_DumpOptions_557_557;
  MR_Word Var_560;
  MR_Word STATE_VARIABLE_Specs_600_600;
  MR_Word STATE_VARIABLE_Specs_636_636;
  MR_Word STATE_VARIABLE_Specs_668_668;
  MR_Word STATE_VARIABLE_Specs_673_673;
  MR_Word STATE_VARIABLE_Specs_710_710;
  MR_Word STATE_VARIABLE_Specs_748_748;
  MR_Word STATE_VARIABLE_Specs_786_786;
  MR_Word STATE_VARIABLE_Specs_806_806;
  MR_Word STATE_VARIABLE_Specs_827_827;
  MR_Word TargetPrime_46;
  MR_Word GC_MethodPrime_52;
  MR_Integer Var_237;
  MR_Integer Var_258;
  MR_Word TermNormPrime_59;
  MR_Word Term2NormPrime_62;
  MR_Word TraceSuppressPrime_72;
  MR_Word MaybeThreadSafePrime_80;
  MR_Char Var_528;
  MR_Char Var_532;
  MR_Char Var_556;
  MR_Word C_CompilerTypePrime_87;
  MR_Word CSharp_CompilerTypePrime_91;
  MR_Word ReuseStrategyPrime_95;
  MR_Word HostEnvTypePrime_104;
  MR_Word SystemEnvTypePrime_107;
  MR_Word TargetEnvTypePrime_110;

  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 242, &TargetStr_45);
  succeeded = libs__globals__convert_target_2_p_0(TargetStr_45, &TargetPrime_46);
  if (succeeded)
  {
    *Target_25 = TargetPrime_46;
    STATE_VARIABLE_Specs_161_161 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word TargetSpec_47;
    MR_Word Var_130;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_145;
    MR_Word Var_146;

    *Target_25 = (MR_Integer) 0;
    {
      Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_134, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_134, 1) = ((MR_Box) (TargetStr_45));
    }
    {
      Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_133, 0) = ((MR_Box) (Var_134));
      MR_hl_field(1, Var_133, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[22])));
    }
    {
      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
    }
    Var_146 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[25])));
    Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_146, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    TargetSpec_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_130, Var_145);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_47, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_161_161);
  }
  libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 298, &BitsPerWord_48);
  succeeded = (BitsPerWord_48 == (MR_Integer) 32);
  if (succeeded)
  {
    *WordSize_26 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_195_195 = STATE_VARIABLE_Specs_161_161;
  }
  else
  {
    succeeded = (BitsPerWord_48 == (MR_Integer) 64);
    if (succeeded)
    {
      *WordSize_26 = (MR_Integer) 1;
      STATE_VARIABLE_Specs_195_195 = STATE_VARIABLE_Specs_161_161;
    }
    else
    {
      MR_String BitsPerWordStr_49;
      MR_Word WordSizeSpec_50;
      MR_Word Var_165;
      MR_Word Var_166;

      *WordSize_26 = (MR_Integer) 1;
      BitsPerWordStr_49 = mercury__string__int_to_string_1_f_0(BitsPerWord_48);
      {
        Var_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_166, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_166, 1) = ((MR_Box) (BitsPerWordStr_49));
      }
      {
        Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
        MR_hl_field(1, Var_165, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[38])));
      }
      {
        WordSizeSpec_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, WordSizeSpec_50, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
        MR_hl_field(1, WordSizeSpec_50, 1) = ((MR_Box) (Var_165));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), WordSizeSpec_50, STATE_VARIABLE_Specs_161_161, &STATE_VARIABLE_Specs_195_195);
    }
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 277, &GC_MethodStr_51);
  succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_51, &GC_MethodPrime_52);
  if (succeeded)
  {
    *GC_Method_27 = GC_MethodPrime_52;
    STATE_VARIABLE_Specs_234_234 = STATE_VARIABLE_Specs_195_195;
  }
  else
  {
    MR_Word GCMethodSpec_53;
    MR_Word Var_197;
    MR_Word Var_200;
    MR_Word Var_201;
    MR_Word Var_212;
    MR_Word Var_213;

    *GC_Method_27 = (MR_Integer) 1;
    {
      Var_201 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_201, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_201, 1) = ((MR_Box) (GC_MethodStr_51));
    }
    {
      Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_200, 0) = ((MR_Box) (Var_201));
      MR_hl_field(1, Var_200, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[41])));
    }
    {
      Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_197, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_200));
    }
    Var_213 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[47])));
    Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_213, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    GCMethodSpec_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_197, Var_212);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_53, STATE_VARIABLE_Specs_195_195, &STATE_VARIABLE_Specs_234_234);
  }
  libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 375, &FactTablePercentFull_54);
  succeeded = (FactTablePercentFull_54 >= (MR_Integer) 1);
  if (succeeded)
  {
    Var_237 = (MR_Integer) 100;
    succeeded = (FactTablePercentFull_54 <= Var_237);
  }
  if (succeeded)
    STATE_VARIABLE_Specs_255_255 = STATE_VARIABLE_Specs_234_234;
  else
  {
    MR_Word FactTablePercentFullSpec_55;
    MR_Word Var_240;
    MR_Word Var_241;

    {
      Var_241 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_241, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_241, 1) = ((MR_Box) (FactTablePercentFull_54));
    }
    {
      Var_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_240, 0) = ((MR_Box) (Var_241));
      MR_hl_field(1, Var_240, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[52])));
    }
    {
      FactTablePercentFullSpec_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FactTablePercentFullSpec_55, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, FactTablePercentFullSpec_55, 1) = ((MR_Box) (Var_240));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), FactTablePercentFullSpec_55, STATE_VARIABLE_Specs_234_234, &STATE_VARIABLE_Specs_255_255);
  }
  libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 56, &IncompleteSwitchThreshold_56);
  succeeded = (IncompleteSwitchThreshold_56 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_258 = (MR_Integer) 100;
    succeeded = (IncompleteSwitchThreshold_56 <= Var_258);
  }
  if (succeeded)
    STATE_VARIABLE_Specs_276_276 = STATE_VARIABLE_Specs_255_255;
  else
  {
    MR_Word IncompleteSwitchThresholdSpec_57;
    MR_Word Var_261;
    MR_Word Var_262;

    {
      Var_262 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_262, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_262, 1) = ((MR_Box) (IncompleteSwitchThreshold_56));
    }
    {
      Var_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_261, 0) = ((MR_Box) (Var_262));
      MR_hl_field(1, Var_261, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[57])));
    }
    {
      IncompleteSwitchThresholdSpec_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IncompleteSwitchThresholdSpec_57, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, IncompleteSwitchThresholdSpec_57, 1) = ((MR_Box) (Var_261));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_57, STATE_VARIABLE_Specs_255_255, &STATE_VARIABLE_Specs_276_276);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 535, &TermNormStr_58);
  succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_58, &TermNormPrime_59);
  if (succeeded)
  {
    *TermNorm_28 = TermNormPrime_59;
    STATE_VARIABLE_Specs_309_309 = STATE_VARIABLE_Specs_276_276;
  }
  else
  {
    MR_Word TermNormSpec_60;
    MR_Word Var_278;
    MR_Word Var_281;
    MR_Word Var_282;
    MR_Word Var_293;
    MR_Word Var_294;

    *TermNorm_28 = (MR_Integer) 0;
    {
      Var_282 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_282, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_282, 1) = ((MR_Box) (TermNormStr_58));
    }
    {
      Var_281 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_281, 0) = ((MR_Box) (Var_282));
      MR_hl_field(1, Var_281, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[60])));
    }
    {
      Var_278 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_278, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_278, 1) = ((MR_Box) (Var_281));
    }
    Var_294 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[63])));
    Var_293 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_294, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    TermNormSpec_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_278, Var_293);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_60, STATE_VARIABLE_Specs_276_276, &STATE_VARIABLE_Specs_309_309);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 541, &Term2NormStr_61);
  succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_61, &Term2NormPrime_62);
  if (succeeded)
  {
    *Term2Norm_29 = Term2NormPrime_62;
    STATE_VARIABLE_Specs_342_342 = STATE_VARIABLE_Specs_309_309;
  }
  else
  {
    MR_Word Term2NormSpec_63;
    MR_Word Var_311;
    MR_Word Var_314;
    MR_Word Var_315;
    MR_Word Var_326;
    MR_Word Var_327;

    *Term2Norm_29 = (MR_Integer) 0;
    {
      Var_315 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_315, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_315, 1) = ((MR_Box) (TermNormStr_58));
    }
    {
      Var_314 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_314, 0) = ((MR_Box) (Var_315));
      MR_hl_field(1, Var_314, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[66])));
    }
    {
      Var_311 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_311, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_311, 1) = ((MR_Box) (Var_314));
    }
    Var_327 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[63])));
    Var_326 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    Term2NormSpec_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_311, Var_326);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Term2NormSpec_63, STATE_VARIABLE_Specs_309_309, &STATE_VARIABLE_Specs_342_342);
  }
  libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 179, &ForceDisableTracing_64);
  switch (ForceDisableTracing_64) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Trace_65;
        MR_Word ExecTrace_66;
        MR_Word DeclDebug_67;
        MR_Word MaybeTraceLevel_68;

        libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 167, &Trace_65);
        libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 248, &ExecTrace_66);
        libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 249, &DeclDebug_67);
        succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_65, ExecTrace_66, DeclDebug_67, &MaybeTraceLevel_68);
        if (succeeded)
          if ((MaybeTraceLevel_68 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word InconsistentTraceLevelSpec_69;
            MR_Word Var_349;
            MR_Word Var_350;

            *TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
            {
              Var_350 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_350, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_350, 1) = ((MR_Box) (Trace_65));
            }
            {
              Var_349 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_349, 0) = ((MR_Box) (Var_350));
              MR_hl_field(1, Var_349, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[73])));
            }
            {
              InconsistentTraceLevelSpec_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InconsistentTraceLevelSpec_69, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[67])));
              MR_hl_field(1, InconsistentTraceLevelSpec_69, 1) = ((MR_Box) (Var_349));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InconsistentTraceLevelSpec_69, STATE_VARIABLE_Specs_342_342, &STATE_VARIABLE_Specs_364_364);
          }
          else
          {
            *TraceLevel_30 = ((MR_Word) ((MR_hl_field(1, MaybeTraceLevel_68, (MR_Integer) 0))));
            STATE_VARIABLE_Specs_364_364 = STATE_VARIABLE_Specs_342_342;
          }
        else
        {
          MR_Word BadTraceLevelSpec_70;
          MR_Word Var_365;
          MR_Word Var_368;
          MR_Word Var_369;
          MR_Word Var_380;
          MR_Word Var_381;

          *TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
          {
            Var_369 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_369, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_369, 1) = ((MR_Box) (Trace_65));
          }
          {
            Var_368 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_368, 0) = ((MR_Box) (Var_369));
            MR_hl_field(1, Var_368, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[76])));
          }
          {
            Var_365 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_365, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
            MR_hl_field(1, Var_365, 1) = ((MR_Box) (Var_368));
          }
          Var_381 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[82])));
          Var_380 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_381, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
          BadTraceLevelSpec_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_365, Var_380);
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BadTraceLevelSpec_70, STATE_VARIABLE_Specs_342_342, &STATE_VARIABLE_Specs_364_364);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
        STATE_VARIABLE_Specs_364_364 = STATE_VARIABLE_Specs_342_342;
      }
      break;
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 178, &SuppressStr_71);
  succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_71, &TraceSuppressPrime_72);
  if (succeeded)
  {
    *TraceSuppress_31 = TraceSuppressPrime_72;
    STATE_VARIABLE_Specs_421_421 = STATE_VARIABLE_Specs_364_364;
  }
  else
  {
    MR_Word TraceSuppressSpec_73;
    MR_Word Var_406;
    MR_Word Var_407;

    *TraceSuppress_31 = libs__trace_params__default_trace_suppress_0_f_0();
    {
      Var_407 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_407, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_407, 1) = ((MR_Box) (SuppressStr_71));
    }
    {
      Var_406 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_406, 0) = ((MR_Box) (Var_407));
      MR_hl_field(1, Var_406, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[85])));
    }
    {
      TraceSuppressSpec_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TraceSuppressSpec_73, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, TraceSuppressSpec_73, 1) = ((MR_Box) (Var_406));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TraceSuppressSpec_73, STATE_VARIABLE_Specs_364_364, &STATE_VARIABLE_Specs_421_421);
  }
  libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 183, &ForceDisableSSDB_74);
  switch (ForceDisableSSDB_74) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String SSTrace_75;
        MR_Word SSDB_76;
        MR_Word SSTL_77;

        libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 295, &SSTrace_75);
        libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 294, &SSDB_76);
        succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_75, SSDB_76, &SSTL_77);
        if (succeeded)
        {
          *SSTraceLevel_32 = SSTL_77;
          STATE_VARIABLE_Specs_458_458 = STATE_VARIABLE_Specs_421_421;
        }
        else
        {
          MR_Word SSDBSpec_78;
          MR_Word Var_425;
          MR_Word Var_428;
          MR_Word Var_429;
          MR_Word Var_440;
          MR_Word Var_441;

          *SSTraceLevel_32 = (MR_Integer) 0;
          {
            Var_429 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_429, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_429, 1) = ((MR_Box) (SSTrace_75));
          }
          {
            Var_428 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_428, 0) = ((MR_Box) (Var_429));
            MR_hl_field(1, Var_428, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[88])));
          }
          {
            Var_425 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_425, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
            MR_hl_field(1, Var_425, 1) = ((MR_Box) (Var_428));
          }
          Var_441 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[92])));
          Var_440 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_441, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
          SSDBSpec_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_425, Var_440);
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SSDBSpec_78, STATE_VARIABLE_Specs_421_421, &STATE_VARIABLE_Specs_458_458);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *SSTraceLevel_32 = (MR_Integer) 0;
        STATE_VARIABLE_Specs_458_458 = STATE_VARIABLE_Specs_421_421;
      }
      break;
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 287, &MaybeThreadSafeStr_79);
  succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_79, &MaybeThreadSafePrime_80);
  if (succeeded)
  {
    *MaybeThreadSafe_33 = MaybeThreadSafePrime_80;
    STATE_VARIABLE_Specs_492_492 = STATE_VARIABLE_Specs_458_458;
  }
  else
  {
    MR_Word MTSSpec_81;
    MR_Word Var_460;
    MR_Word Var_463;
    MR_Word Var_464;
    MR_Word Var_478;
    MR_Word Var_479;

    *MaybeThreadSafe_33 = (MR_Integer) 0;
    {
      Var_464 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_464, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_464, 1) = ((MR_Box) (MaybeThreadSafeStr_79));
    }
    {
      Var_463 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_463, 0) = ((MR_Box) (Var_464));
      MR_hl_field(1, Var_463, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[98])));
    }
    {
      Var_460 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_460, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_460, 1) = ((MR_Box) (Var_463));
    }
    Var_479 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[100])));
    Var_478 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_479, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    MTSSpec_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_460, Var_478);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MTSSpec_81, STATE_VARIABLE_Specs_458_458, &STATE_VARIABLE_Specs_492_492);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_123, (MR_Integer) 210, &DumpAlias_82);
  succeeded = (strcmp(DumpAlias_82, (MR_String) "") == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_523_523 = STATE_VARIABLE_Specs_492_492;
    STATE_VARIABLE_OptionTable_496_496 = STATE_VARIABLE_OptionTable_0_123;
  }
  else
  {
    MR_String AliasDumpOptions_83;

    succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_82, &AliasDumpOptions_83);
    if (succeeded)
    {
      MR_Word Var_495;

      {
        Var_495 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_495, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_495, 1) = ((MR_Box) (AliasDumpOptions_83));
      }
      mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 211)), ((MR_Box) (Var_495)), STATE_VARIABLE_OptionTable_0_123, &STATE_VARIABLE_OptionTable_496_496);
      STATE_VARIABLE_Specs_523_523 = STATE_VARIABLE_Specs_492_492;
    }
    else
    {
      MR_Word DumpAliasSpec_84;
      MR_Word Var_499;
      MR_Word Var_500;

      {
        Var_500 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_500, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_500, 1) = ((MR_Box) (DumpAlias_82));
      }
      {
        Var_499 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_499, 0) = ((MR_Box) (Var_500));
        MR_hl_field(1, Var_499, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[109])));
      }
      {
        DumpAliasSpec_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DumpAliasSpec_84, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
        MR_hl_field(1, DumpAliasSpec_84, 1) = ((MR_Box) (Var_499));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_84, STATE_VARIABLE_Specs_492_492, &STATE_VARIABLE_Specs_523_523);
      STATE_VARIABLE_OptionTable_496_496 = STATE_VARIABLE_OptionTable_0_123;
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_496_496, ((MR_Box) ((MR_Integer) 211)), &STATE_VARIABLE_DumpOptions_525_525);
  succeeded = (strcmp(STATE_VARIABLE_DumpOptions_525_525, (MR_String) "") == 0);
  if (succeeded)
    STATE_VARIABLE_DumpOptions_526_526 = (MR_String) "x";
  else
    STATE_VARIABLE_DumpOptions_526_526 = STATE_VARIABLE_DumpOptions_525_525;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_526_526, (MR_Char) 121);
  if (succeeded)
  {
    Var_528 = (MR_Char) 97;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_526_526, Var_528);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_529_529 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_526_526);
  else
    STATE_VARIABLE_DumpOptions_529_529 = STATE_VARIABLE_DumpOptions_526_526;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, (MR_Char) 97);
  if (succeeded)
  {
    Var_532 = (MR_Char) 117;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_529_529, Var_532);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_533_533 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_529_529);
  else
    STATE_VARIABLE_DumpOptions_533_533 = STATE_VARIABLE_DumpOptions_529_529;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 65);
  if (!(succeeded))
  {
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 66);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 68);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 71);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 80);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 82);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 83);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 98);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 99);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 100);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 102);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 103);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 105);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 108);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 109);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 110);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 112);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 115);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 116);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 117);
                                        if (!(succeeded))
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 122);
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
    Var_556 = (MR_Char) 120;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, Var_556);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_557_557 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_533_533);
  else
    STATE_VARIABLE_DumpOptions_557_557 = STATE_VARIABLE_DumpOptions_533_533;
  {
    Var_560 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_560, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_560, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_557_557));
  }
  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 211)), ((MR_Box) (Var_560)), STATE_VARIABLE_OptionTable_496_496, STATE_VARIABLE_OptionTable_124);
  libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 573, &C_CompilerTypeStr_86);
  succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_86, &C_CompilerTypePrime_87);
  if (succeeded)
  {
    *C_CompilerType_34 = C_CompilerTypePrime_87;
    STATE_VARIABLE_Specs_600_600 = STATE_VARIABLE_Specs_523_523;
  }
  else
  {
    MR_Word CCTpec_89;
    MR_Word Var_573;
    MR_Word Var_576;
    MR_Word Var_577;
    MR_Word Var_591;
    MR_Word Var_592;

    *C_CompilerType_34 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_577 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_577, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_577, 1) = ((MR_Box) (C_CompilerTypeStr_86));
    }
    {
      Var_576 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_576, 0) = ((MR_Box) (Var_577));
      MR_hl_field(1, Var_576, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[117])));
    }
    {
      Var_573 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_573, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_573, 1) = ((MR_Box) (Var_576));
    }
    Var_592 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[114])));
    Var_591 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_592, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    CCTpec_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_573, Var_591);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_89, STATE_VARIABLE_Specs_523_523, &STATE_VARIABLE_Specs_600_600);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 574, &CSharp_CompilerTypeStr_90);
  succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_90, &CSharp_CompilerTypePrime_91);
  if (succeeded)
  {
    *CSharp_CompilerType_35 = CSharp_CompilerTypePrime_91;
    STATE_VARIABLE_Specs_636_636 = STATE_VARIABLE_Specs_600_600;
  }
  else
  {
    MR_Word CSCSpec_92;
    MR_Word Var_602;
    MR_Word Var_605;
    MR_Word Var_606;
    MR_Word Var_620;
    MR_Word Var_621;

    *CSharp_CompilerType_35 = (MR_Integer) 2;
    {
      Var_606 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_606, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_606, 1) = ((MR_Box) (CSharp_CompilerTypeStr_90));
    }
    {
      Var_605 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_605, 0) = ((MR_Box) (Var_606));
      MR_hl_field(1, Var_605, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[120])));
    }
    {
      Var_602 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_602, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_602, 1) = ((MR_Box) (Var_605));
    }
    Var_621 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[122])));
    Var_620 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_621, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    CSCSpec_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_602, Var_620);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_92, STATE_VARIABLE_Specs_600_600, &STATE_VARIABLE_Specs_636_636);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 526, &ReuseConstraintStr_93);
  libs__handle_options__raw_lookup_int_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 527, &ReuseConstraintArgNum_94);
  succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_93, ReuseConstraintArgNum_94, &ReuseStrategyPrime_95);
  if (succeeded)
  {
    *ReuseStrategy_36 = ReuseStrategyPrime_95;
    STATE_VARIABLE_Specs_668_668 = STATE_VARIABLE_Specs_636_636;
  }
  else
  {
    MR_Word ReuseConstrSpec_96;
    MR_Word Var_639;
    MR_Word Var_642;
    MR_Word Var_643;
    MR_Word Var_654;
    MR_Word Var_655;

    *ReuseStrategy_36 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_643 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_643, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_643, 1) = ((MR_Box) (ReuseConstraintStr_93));
    }
    {
      Var_642 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_642, 0) = ((MR_Box) (Var_643));
      MR_hl_field(1, Var_642, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[125])));
    }
    {
      Var_639 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_639, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_639, 1) = ((MR_Box) (Var_642));
    }
    Var_655 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[127])));
    Var_654 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_655, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    ReuseConstrSpec_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_639, Var_654);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_96, STATE_VARIABLE_Specs_636_636, &STATE_VARIABLE_Specs_668_668);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 733, &FeedbackFile_97);
  succeeded = (strcmp(FeedbackFile_97, (MR_String) "") == 0);
  if (succeeded)
  {
    *MaybeFeedbackInfo_37 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_673_673 = STATE_VARIABLE_Specs_668_668;
  }
  else
  {
    MR_Word FeedbackReadResult_99;

    mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_97, (MR_Word) ((MR_Unsigned) 0U), &FeedbackReadResult_99);
    if (((MR_tag((MR_Word) FeedbackReadResult_99)) == (MR_Integer) 1))
    {
      MR_Word Error_101 = ((MR_Word) ((MR_hl_field(1, FeedbackReadResult_99, (MR_Integer) 0))));
      MR_String ErrorMessage_102;
      MR_Word Var_672;
      MR_Word Var_674;

      mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_97, Error_101, &ErrorMessage_102);
      {
        Var_674 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_674, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_674, 1) = ((MR_Box) (ErrorMessage_102));
      }
      {
        Var_672 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_672, 0) = ((MR_Box) (Var_674));
        MR_hl_field(1, Var_672, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_672, STATE_VARIABLE_Specs_668_668, &STATE_VARIABLE_Specs_673_673);
      *MaybeFeedbackInfo_37 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word FeedbackInfo_100 = ((MR_Word) ((MR_hl_field(0, FeedbackReadResult_99, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFeedbackInfo_37 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FeedbackInfo_100));
      }
      STATE_VARIABLE_Specs_673_673 = STATE_VARIABLE_Specs_668_668;
    }
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 709, &HostEnvTypeStr_103);
  succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_103, &HostEnvTypePrime_104);
  if (succeeded)
  {
    *HostEnvType_38 = HostEnvTypePrime_104;
    STATE_VARIABLE_Specs_710_710 = STATE_VARIABLE_Specs_673_673;
  }
  else
  {
    MR_Word HostEnvSpec_105;
    MR_Word Var_677;
    MR_Word Var_680;
    MR_Word Var_681;
    MR_Word Var_692;
    MR_Word Var_693;

    *HostEnvType_38 = (MR_Integer) 0;
    {
      Var_681 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_681, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_681, 1) = ((MR_Box) (HostEnvTypeStr_103));
    }
    {
      Var_680 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_680, 0) = ((MR_Box) (Var_681));
      MR_hl_field(1, Var_680, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[130])));
    }
    {
      Var_677 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_677, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_677, 1) = ((MR_Box) (Var_680));
    }
    Var_693 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[134])));
    Var_692 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_693, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    HostEnvSpec_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_677, Var_692);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_105, STATE_VARIABLE_Specs_673_673, &STATE_VARIABLE_Specs_710_710);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 710, &SystemEnvTypeStr_106);
  succeeded = (strcmp(SystemEnvTypeStr_106, (MR_String) "") == 0);
  if (succeeded)
  {
    SystemEnvTypePrime_107 = *HostEnvType_38;
    succeeded = MR_TRUE;
  }
  else
    succeeded = libs__globals__convert_env_type_2_p_0(SystemEnvTypeStr_106, &SystemEnvTypePrime_107);
  if (succeeded)
  {
    *SystemEnvType_39 = SystemEnvTypePrime_107;
    STATE_VARIABLE_Specs_748_748 = STATE_VARIABLE_Specs_710_710;
  }
  else
  {
    MR_Word SystemEnvSpec_108;
    MR_Word Var_712;
    MR_Word Var_715;
    MR_Word Var_716;
    MR_Word Var_730;
    MR_Word Var_731;

    *SystemEnvType_39 = (MR_Integer) 0;
    {
      Var_716 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_716, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_716, 1) = ((MR_Box) (SystemEnvTypeStr_106));
    }
    {
      Var_715 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_715, 0) = ((MR_Box) (Var_716));
      MR_hl_field(1, Var_715, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[137])));
    }
    {
      Var_712 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_712, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_712, 1) = ((MR_Box) (Var_715));
    }
    Var_731 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[134])));
    Var_730 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_731, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    SystemEnvSpec_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_712, Var_730);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_108, STATE_VARIABLE_Specs_710_710, &STATE_VARIABLE_Specs_748_748);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 711, &TargetEnvTypeStr_109);
  succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_109, &TargetEnvTypePrime_110);
  if (succeeded)
  {
    *TargetEnvType_40 = TargetEnvTypePrime_110;
    STATE_VARIABLE_Specs_786_786 = STATE_VARIABLE_Specs_748_748;
  }
  else
  {
    MR_Word TargetEnvTypeSpec_111;
    MR_Word Var_750;
    MR_Word Var_753;
    MR_Word Var_754;
    MR_Word Var_768;
    MR_Word Var_769;

    *TargetEnvType_40 = (MR_Integer) 0;
    {
      Var_754 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_754, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_754, 1) = ((MR_Box) (TargetEnvTypeStr_109));
    }
    {
      Var_753 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_753, 0) = ((MR_Box) (Var_754));
      MR_hl_field(1, Var_753, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[140])));
    }
    {
      Var_750 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_750, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
      MR_hl_field(1, Var_750, 1) = ((MR_Box) (Var_753));
    }
    Var_769 = parse_tree__error_spec__list_to_quoted_pieces_or_1_f_0((MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[134])));
    Var_768 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_769, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
    TargetEnvTypeSpec_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_750, Var_768);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetEnvTypeSpec_111, STATE_VARIABLE_Specs_748_748, &STATE_VARIABLE_Specs_786_786);
  }
  libs__handle_options__raw_lookup_accumulating_option_3_p_0(*STATE_VARIABLE_OptionTable_124, (MR_Integer) 87, &LimitErrorContextsOptionStrs_112);
  libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_112, &BadLimitErrorContextsOptions_113, LimitErrorContextsMap_41);
  if ((BadLimitErrorContextsOptions_113 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_806_806 = STATE_VARIABLE_Specs_786_786;
  else
  {
    MR_Word Var_849 = ((MR_Word) ((MR_hl_field(1, BadLimitErrorContextsOptions_113, (MR_Integer) 1))));
    MR_String Var_850 = ((MR_String) ((MR_hl_field(1, BadLimitErrorContextsOptions_113, (MR_Integer) 0))));

    if ((Var_849 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LECSpec_115;
      MR_Word Var_791;
      MR_Word Var_792;

      {
        Var_792 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_792, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_792, 1) = ((MR_Box) (Var_850));
      }
      {
        Var_791 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_791, 0) = ((MR_Box) (Var_792));
        MR_hl_field(1, Var_791, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[143])));
      }
      {
        LECSpec_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LECSpec_115, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[16])));
        MR_hl_field(1, LECSpec_115, 1) = ((MR_Box) (Var_791));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_115, STATE_VARIABLE_Specs_786_786, &STATE_VARIABLE_Specs_806_806);
    }
    else
    {
      MR_Word BadPieces_119;
      MR_Word Var_812;
      MR_Word LECSpec_829;

      BadPieces_119 = parse_tree__error_spec__list_to_quoted_pieces_1_f_0(BadLimitErrorContextsOptions_113);
      Var_812 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadPieces_119, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[143])));
      LECSpec_829 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[145])), Var_812);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_829, STATE_VARIABLE_Specs_786_786, &STATE_VARIABLE_Specs_806_806);
    }
  }
  libs__handle_options__check_linked_target_extensions_4_p_0(*STATE_VARIABLE_OptionTable_124, LinkExtMap_42, STATE_VARIABLE_Specs_806_806, &STATE_VARIABLE_Specs_827_827);
  MaybeColorSpecs_120 = libs__globals__convert_color_spec_options_1_f_0(*STATE_VARIABLE_OptionTable_124);
  if (((MR_tag((MR_Word) MaybeColorSpecs_120)) == (MR_Integer) 0))
  {
    MR_Word ColorSpecs_122 = ((MR_Word) ((MR_hl_field(0, MaybeColorSpecs_120, (MR_Integer) 0))));

    *STATE_VARIABLE_Specs_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ColorSpecs_122, STATE_VARIABLE_Specs_827_827);
  }
  else
    *STATE_VARIABLE_Specs_125 = STATE_VARIABLE_Specs_827_827;
}

static void MR_CALL 
libs__handle_options__raw_lookup_accumulating_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * AccumulatingValue_6)
{
  MR_bool succeeded;
  MR_Word OptionValue_7;
  MR_Box conv0_OptionValue_7;
  MR_Word AccumulatingValuePrime_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
  OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
  succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
  if (succeeded)
  {
    AccumulatingValuePrime_8 = ((MR_Word) ((MR_hl_field(3, OptionValue_7, (MR_Integer) 1))));
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

static void MR_CALL 
libs__handle_options__raw_lookup_int_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Integer * IntValue_6)
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
    IntValuePrime_8 = ((MR_Integer) ((MR_hl_field(2, OptionValue_7, (MR_Integer) 0))));
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

static void MR_CALL 
libs__handle_options__raw_lookup_bool_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_Word * BoolValue_6)
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
    BoolValuePrime_8 = ((MR_Unsigned) ((MR_hl_field(1, OptionValue_7, (MR_Integer) 0))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
libs__handle_options__convert_dump_alias_2_p_0(
  MR_String HeadVar__1_1,
  MR_String * HeadVar__2_2)
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
        if (MR_offset_strn_eq(1, 2, HeadVar__1_1, (MR_String) "all"))
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
            switch (MR_nth_code_unit(HeadVar__1_1, 2)) {
              case (MR_Integer) 110:
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
        switch (MR_nth_code_unit(HeadVar__1_1, 1)) {
          case (MR_Integer) 97:
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
        break;
    }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      *HeadVar__2_2 = ((&libs__handle_options_vector_common_3[0 + case_num_0]))->libs__handle_options__vector_common_type_3_0__vct_3_f_0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
libs__handle_options__check_linked_target_extensions_4_p_0(
  MR_Word OptionTable_5,
  MR_Word * STATE_VARIABLE_LinkExtMap_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_String ObjExt_8;
  MR_String PicObjExt_9;
  MR_String ExecExt_10;
  MR_String LibExt_11;
  MR_String SharedLibExt_12;
  MR_String AllObjExtA_13;
  MR_Word STATE_VARIABLE_LinkExtMap_22_22;
  MR_Word STATE_VARIABLE_LinkExtMap_30_30;
  MR_Word STATE_VARIABLE_LinkExtMap_35_35;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_LinkExtMap_39_39;
  MR_Word STATE_VARIABLE_Specs_40_40;
  MR_Word STATE_VARIABLE_LinkExtMap_43_43;
  MR_Word STATE_VARIABLE_Specs_44_44;
  MR_Word STATE_VARIABLE_LinkExtMap_47_47;
  MR_Word STATE_VARIABLE_Specs_48_48;
  MR_Word STATE_VARIABLE_LinkExtMap_51_51;
  MR_Word STATE_VARIABLE_Specs_52_52;
  MR_Word STATE_VARIABLE_LinkExtMap_55_55;
  MR_Word STATE_VARIABLE_Specs_56_56;
  MR_Word STATE_VARIABLE_LinkExtMap_59_59;
  MR_Word STATE_VARIABLE_Specs_60_60;
  MR_String NoDotExt_73;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), &STATE_VARIABLE_LinkExtMap_22_22);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 571, &ObjExt_8);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 572, &PicObjExt_9);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 624, &ExecExt_10);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 623, &LibExt_11);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 622, &SharedLibExt_12);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), ((MR_Box) ((MR_String) ".install")), ((MR_Box) (&libs__handle_options_scalar_common_1[146])), STATE_VARIABLE_LinkExtMap_22_22, &STATE_VARIABLE_LinkExtMap_30_30);
  libs__handle_options__record_linked_target_extension_7_p_0(ObjExt_8, (MR_String) "the --object-file-extension option", (MR_Integer) 0, STATE_VARIABLE_LinkExtMap_30_30, &STATE_VARIABLE_LinkExtMap_35_35, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_36_36);
  succeeded = (strcmp(ObjExt_8, PicObjExt_9) == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_40_40 = STATE_VARIABLE_Specs_36_36;
    STATE_VARIABLE_LinkExtMap_39_39 = STATE_VARIABLE_LinkExtMap_35_35;
  }
  else
    libs__handle_options__record_linked_target_extension_7_p_0(PicObjExt_9, (MR_String) "the --pic-object-file-extension", (MR_Integer) 1, STATE_VARIABLE_LinkExtMap_35_35, &STATE_VARIABLE_LinkExtMap_39_39, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_40_40);
  libs__handle_options__record_linked_target_extension_7_p_0(ExecExt_10, (MR_String) "the --executable-file-extension option", (MR_Integer) 4, STATE_VARIABLE_LinkExtMap_39_39, &STATE_VARIABLE_LinkExtMap_43_43, STATE_VARIABLE_Specs_40_40, &STATE_VARIABLE_Specs_44_44);
  libs__handle_options__record_linked_target_extension_7_p_0(LibExt_11, (MR_String) "the --library-extension option", (MR_Integer) 5, STATE_VARIABLE_LinkExtMap_43_43, &STATE_VARIABLE_LinkExtMap_47_47, STATE_VARIABLE_Specs_44_44, &STATE_VARIABLE_Specs_48_48);
  succeeded = (strcmp(LibExt_11, SharedLibExt_12) == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_52_52 = STATE_VARIABLE_Specs_48_48;
    STATE_VARIABLE_LinkExtMap_51_51 = STATE_VARIABLE_LinkExtMap_47_47;
  }
  else
    libs__handle_options__record_linked_target_extension_7_p_0(SharedLibExt_12, (MR_String) "the --shared-library-extension option", (MR_Integer) 6, STATE_VARIABLE_LinkExtMap_47_47, &STATE_VARIABLE_LinkExtMap_51_51, STATE_VARIABLE_Specs_48_48, &STATE_VARIABLE_Specs_52_52);
  AllObjExtA_13 = mercury__string__f_43_43_2_f_0(ObjExt_8, (MR_String) "s");
  libs__handle_options__record_linked_target_extension_7_p_0(AllObjExtA_13, (MR_String) "the build-all version of the --object-file-extension option", (MR_Integer) 2, STATE_VARIABLE_LinkExtMap_51_51, &STATE_VARIABLE_LinkExtMap_55_55, STATE_VARIABLE_Specs_52_52, &STATE_VARIABLE_Specs_56_56);
  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) ".", ObjExt_8, &NoDotExt_73);
  if (succeeded)
  {
    MR_String AllObjExtB_15;
    MR_String Var_78;

    Var_78 = mercury__string__f_43_43_2_f_0(NoDotExt_73, (MR_String) "s");
    AllObjExtB_15 = mercury__string__f_43_43_2_f_0((MR_String) ".all_", Var_78);
    libs__handle_options__record_linked_target_extension_7_p_0(AllObjExtB_15, (MR_String) "the build-all version of the --object-file-extension option", (MR_Integer) 2, STATE_VARIABLE_LinkExtMap_55_55, &STATE_VARIABLE_LinkExtMap_59_59, STATE_VARIABLE_Specs_56_56, &STATE_VARIABLE_Specs_60_60);
  }
  else
  {
    STATE_VARIABLE_LinkExtMap_59_59 = STATE_VARIABLE_LinkExtMap_55_55;
    STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_56_56;
  }
  succeeded = (strcmp(ObjExt_8, PicObjExt_9) == 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_60_60;
    *STATE_VARIABLE_LinkExtMap_19 = STATE_VARIABLE_LinkExtMap_59_59;
  }
  else
  {
    MR_String AllPicObjExtA_16;
    MR_Word STATE_VARIABLE_LinkExtMap_63_63;
    MR_Word STATE_VARIABLE_Specs_64_64;
    MR_String NoDotExt_80;

    AllPicObjExtA_16 = mercury__string__f_43_43_2_f_0(PicObjExt_9, (MR_String) "s");
    libs__handle_options__record_linked_target_extension_7_p_0(AllPicObjExtA_16, (MR_String) "the build-all version of the --pic-object-file-extension option", (MR_Integer) 3, STATE_VARIABLE_LinkExtMap_59_59, &STATE_VARIABLE_LinkExtMap_63_63, STATE_VARIABLE_Specs_60_60, &STATE_VARIABLE_Specs_64_64);
    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) ".", PicObjExt_9, &NoDotExt_80);
    if (succeeded)
    {
      MR_String AllPicObjExtB_18;
      MR_String Var_85;

      Var_85 = mercury__string__f_43_43_2_f_0(NoDotExt_80, (MR_String) "s");
      AllPicObjExtB_18 = mercury__string__f_43_43_2_f_0((MR_String) ".all_", Var_85);
      libs__handle_options__record_linked_target_extension_7_p_0(AllPicObjExtB_18, (MR_String) "the build-all version of the --pic-object-file-extension option", (MR_Integer) 3, STATE_VARIABLE_LinkExtMap_63_63, STATE_VARIABLE_LinkExtMap_19, STATE_VARIABLE_Specs_64_64, STATE_VARIABLE_Specs_21);
    }
    else
    {
      *STATE_VARIABLE_LinkExtMap_19 = STATE_VARIABLE_LinkExtMap_63_63;
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_64_64;
    }
  }
}

static void MR_CALL 
libs__handle_options__raw_lookup_string_option_3_p_0(
  MR_Word OptionTable_4,
  MR_Word Option_5,
  MR_String * StringValue_6)
{
  MR_bool succeeded;
  MR_Word OptionValue_7;
  MR_Box conv0_OptionValue_7;
  MR_String StringValuePrime_8;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) (Option_5)), &conv0_OptionValue_7);
  OptionValue_7 = ((MR_Word) (conv0_OptionValue_7));
  succeeded = ((((MR_tag((MR_Word) OptionValue_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, OptionValue_7, (MR_Integer) 0)))) == (MR_Integer) 0)));
  if (succeeded)
  {
    StringValuePrime_8 = ((MR_String) ((MR_hl_field(3, OptionValue_7, (MR_Integer) 1))));
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

static void MR_CALL 
libs__handle_options__record_linked_target_extension_7_p_0(
  MR_String OptionExt_8,
  MR_String OptionName_9,
  MR_Word LinkedTargetKind_10,
  MR_Word STATE_VARIABLE_LinkExtMap_0_20,
  MR_Word * STATE_VARIABLE_LinkExtMap_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word OptionInfo_13;
  MR_Word MaybeOldOptionInfo_14;

  {
    OptionInfo_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OptionInfo_13, 0) = ((MR_Box) (OptionName_9));
    MR_hl_field(0, OptionInfo_13, 1) = (MR_Box) ((MR_Unsigned) (LinkedTargetKind_10));
  }
  mercury__map__search_insert_5_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), ((MR_Box) (OptionExt_8)), ((MR_Box) (OptionInfo_13)), &MaybeOldOptionInfo_14, STATE_VARIABLE_LinkExtMap_0_20, STATE_VARIABLE_LinkExtMap_21);
  if ((MaybeOldOptionInfo_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  else
  {
    MR_Word OldOptionInfo_15 = ((MR_Word) ((MR_hl_field(1, MaybeOldOptionInfo_14, (MR_Integer) 0))));
    MR_String OldOptionName_16 = ((MR_String) ((MR_hl_field(0, OldOptionInfo_15, (MR_Integer) 0))));
    MR_Word OldLinkedTargetKind_17 = ((MR_Unsigned) ((MR_hl_field(0, OldOptionInfo_15, (MR_Integer) 1))) & (MR_Integer) 7);

    switch (LinkedTargetKind_10) {
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
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
    else
    {
      MR_Word Pieces_18;
      MR_Word Spec_19;

      succeeded = (OldLinkedTargetKind_17 == (MR_Integer) 7);
      if (succeeded)
      {
        MR_Word Var_27;
        MR_Word Var_28;
        MR_Word Var_29;
        MR_Word Var_32;
        MR_Word Var_33;

        {
          Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_28, 1) = ((MR_Box) (OptionExt_8));
        }
        {
          Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_33, 1) = ((MR_Box) (OptionName_9));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[154])));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[148])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[147])));
          MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_27));
        }
      }
      else
      {
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;

        {
          Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_49, 1) = ((MR_Box) (OptionExt_8));
        }
        {
          Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_54, 1) = ((MR_Box) (OldOptionName_16));
        }
        {
          Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_59, 1) = ((MR_Box) (OptionName_9));
        }
        {
          Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[15])));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[157])));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[156])));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[155])));
          MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_48));
        }
      }
      {
        Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.record_linked_target_extension\'/7"));
        MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Pieces_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
      }
    }
  }
}

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__handle_options____Unify____maybe_allow_src_changes_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__handle_options____Compare____maybe_allow_src_changes_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	libs__handle_options__user_init_pred_107_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__handle_options__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.handle_options.
