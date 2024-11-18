/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2024-11-18
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
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
#include "parse_tree.find_module.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

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
libs__handle_options__IntroducedFrom__func__handle_directory_options__2940__1_2_f_0(
  MR_Word ToGradeSubdir_44,
  MR_String LambdaHeadVar__1_237);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2946__1_1_f_0(
  MR_String LambdaHeadVar__1_243);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2918__1_2_f_0(
  MR_Word ToGradeSubdir_44,
  MR_String LambdaHeadVar__1_225);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2914__1_2_f_0(
  MR_Word ToGradeSubdir_44,
  MR_String LambdaHeadVar__1_219);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2895__1_2_p_0(
  MR_String HeadVar__1_213,
  MR_String HeadVar__2_306);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2877__1_3_f_0(
  MR_String Grade_25,
  MR_String TargetArch_43,
  MR_String LambdaHeadVar__1_201);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2840__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_182);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2830__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_172);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2820__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_160);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2799__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_145);

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
  MR_Word * STATE_VARIABLE_Specs_49,
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
  MR_Word STATE_VARIABLE_OptTuple_0_139,
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
  MR_Word STATE_VARIABLE_Specs_0_140,
  MR_Word * STATE_VARIABLE_Specs_141,
  MR_Word * STATE_VARIABLE_Globals_142);

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
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

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
  MR_Word STATE_VARIABLE_Globals_0_92,
  MR_Word * STATE_VARIABLE_Globals_93);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2953__1_1_f_0(
  MR_String LambdaHeadVar__1_248);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0(
  MR_Word SubdirSetting_8,
  MR_String Grade_9,
  MR_String ExtSubDir_10,
  MR_Word SearchDirsSame_11,
  MR_Word SearchDirsIndep_12,
  MR_Word SearchDirsInstall_13,
  MR_Word * Dirs_14);

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
  MR_Word STATE_VARIABLE_OptionTable_0_120,
  MR_Word * STATE_VARIABLE_OptionTable_121,
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
  MR_Word * STATE_VARIABLE_Specs_122);

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
libs__handle_options__check_color_option_values_6_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_17,
  MR_Word * STATE_VARIABLE_OptionTable_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

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


static /* final */ const MR_Box libs__handle_options_scalar_common_1[305][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[5][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[1][8];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[3][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[3][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[6][3];

static /* final */ const MR_Box libs__handle_options_scalar_common_9[1][9];


struct libs__handle_options__vector_common_type_3_0_s {
  const MR_String libs__handle_options__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct libs__handle_options__vector_common_type_3_0_s libs__handle_options_vector_common_3[21];



static /* final */ const MR_Box libs__handle_options_scalar_common_1[305][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "Use \140mmc --help\' for more information.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "Arguments:\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "Usage: mmc [<options>] <arguments>\n")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "the file.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "Arguments in the form \100file are replaced with the contents of")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "Arguments that do not end in \140.m\' are assumed to be module names.")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "Arguments ending in \140.m\' are assumed to be source file names.")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: only one of the following options"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid argument"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option; must be"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "64"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "32"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be either"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option;"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--gc"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "automatic")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "accurate")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "hgc")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "boehm")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "conservative")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 1 and 100."))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--fact-table-hash-percent-full"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option; must be an integer between 0 and 100."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--inform-incomplete-switch-threshold"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination-norm"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "num-data-elems")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_String) "total")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_String) "simple")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--termination2-norm"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The specified trace level"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--decl-debug"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not compatible with the value of the"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--trace"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_String) "rep")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_String) "decl")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_String) "minimum")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--suppress-trace"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--ssdb-trace"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_String) "deep")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_String) "shallow")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_String) "none")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_String) "default")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--maybe-thread-safe"))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[96])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "yes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) "no")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ")"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--dump-hlds-alias"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(also known as"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[106]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[105])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "D"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) "unknown")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) "msvc_x64")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "msvc_x86")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "clang")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "gcc")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--c-compiler-type"))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[96])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--csharp-compiler-type"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[96])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) "mono")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[111])))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_String) "microsoft")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--structure-reuse-constraint"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_String) "within_n_cells_difference")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_String) "same_cons_id")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--host-env-type"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[19])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_String) "windows")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_String) "msys")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_String) "cygwin")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_String) "posix")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[134])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--system-env-type"))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[96])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--target-env-type"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[96])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--limit-error-contexts"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Invalid arguments"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_String) "")),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_String) "")),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may not be specified as the value of"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for other purposes."))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[151]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "because that extension is reserved"))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[153]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[152])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the extension"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is specified as the value of both"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[160]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--color-scheme"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the default value of the"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "environment variable"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[166]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MERCURY_COLOR_SCHEME"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[167])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the value of the"))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[169])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[163])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the value of the"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--install-method"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option is"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "internal"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the only valid values are"))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[181]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[180])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[184]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[185])))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[188]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[187])))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[189])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[192]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row 194 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[193])))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[195]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[194])))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[196])))
  },
  /* row 198 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[198]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[186]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[199])))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[201]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[200])))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[202])))
  },
  /* row 204 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-ptag-bits"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the only valid values are 2 and 3."))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[206]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[207])))
  },
  /* row 209 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row 214 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row 216 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 217 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[217]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[219]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[218])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[221]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[220])))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[222])))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[224]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[226]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[225])))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[228]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[227])))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[229])))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[231])))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[233]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[235]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[234])))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[230]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[236])))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[190]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[237])))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is C."))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[239]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[241]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[240])))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[243]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[242])))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The only target language that"))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[245]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[244])))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[247]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 249 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--(no-)reclaim-heap-on-failure"))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[249]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[248])))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Use"))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[251]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[250])))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[252])))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-nondet-failure"))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[254]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[253])))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[255])))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-semidet-failure"))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[257]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[256])))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and just one of"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[259]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[258])))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--high-level-code"))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[261]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[260])))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[263]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[262])))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[265]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[267]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[266])))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[269]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[271]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[270])))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[273]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[271]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[274])))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "parallel execution."))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[276]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[271]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[277])))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[279]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Debugging is not available in parallel grades."))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[281]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[283]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[270])))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires a term size profiling grade."))
  },
  /* row 286 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[285]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The --experimental-complexity option"))
  },
  /* row 288 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[287]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[286])))
  },
  /* row 289 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 290 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[289]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 291 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 292 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[291]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[270])))
  },
  /* row 293 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row 294 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 295 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[294])))
  },
  /* row 296 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[295])))
  },
  /* row 297 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 298 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[297]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 299 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2024 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 300 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[299])))
  },
  /* row 301 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 302 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[301]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 303 */
  {
    ((MR_Box) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --errorcheck-only"))
  },
  /* row 304 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[303]))),
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

static /* final */ const MR_Box libs__handle_options_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_subdir_setting_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box libs__handle_options_scalar_common_6[3][6] = {
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

static /* final */ const MR_Box libs__handle_options_scalar_common_7[3][5] = {
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

static /* final */ const MR_Box libs__handle_options_scalar_common_8[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[0])),
    ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_7[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_9[0])),
    ((MR_Box) (libs__handle_options__handle_given_options_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_8[3])),
    ((MR_Box) (&libs__handle_options_scalar_common_8[4]))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_9[1][9] = {
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
#line 3564 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 3564 "handle_options.m"
void 
libs__handle_options__user_init_pred_114_0(void)
#line 3564 "handle_options.m"
{
#line 3564 "handle_options.m"
	libs__handle_options__initialise_mutable_already_printed_usage_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
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
libs__handle_options__IntroducedFrom__func__handle_directory_options__2940__1_2_f_0(
  MR_Word ToGradeSubdir_44,
  MR_String LambdaHeadVar__1_237)
{
  MR_String LambdaHeadVar__2_238;
  MR_String Var_239;
  MR_String Var_240;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_44, (MR_Integer) 1))));
  MR_Box conv1_Var_240;

  conv1_Var_240 = func_0(((MR_Box) (ToGradeSubdir_44)), ((MR_Box) (LambdaHeadVar__1_237)));
  Var_240 = ((MR_String) (conv1_Var_240));
  Var_239 = mercury__dir__f_slash_2_f_0(Var_240, (MR_String) "Mercury");
  LambdaHeadVar__2_238 = mercury__dir__f_slash_2_f_0(Var_239, (MR_String) "mihs");
  return LambdaHeadVar__2_238;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2946__1_1_f_0(
  MR_String LambdaHeadVar__1_243)
{
  MR_String LambdaHeadVar__2_244;
  MR_String Var_245;

  Var_245 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_243, (MR_String) "Mercury");
  LambdaHeadVar__2_244 = mercury__dir__f_slash_2_f_0(Var_245, (MR_String) "mihs");
  return LambdaHeadVar__2_244;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2918__1_2_f_0(
  MR_Word ToGradeSubdir_44,
  MR_String LambdaHeadVar__1_225)
{
  MR_String LambdaHeadVar__2_226;
  MR_String Var_227;
  MR_String Var_228;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_44, (MR_Integer) 1))));
  MR_Box conv1_Var_228;

  conv1_Var_228 = func_0(((MR_Box) (ToGradeSubdir_44)), ((MR_Box) (LambdaHeadVar__1_225)));
  Var_228 = ((MR_String) (conv1_Var_228));
  Var_227 = mercury__dir__f_slash_2_f_0(Var_228, (MR_String) "Mercury");
  LambdaHeadVar__2_226 = mercury__dir__f_slash_2_f_0(Var_227, (MR_String) "inits");
  return LambdaHeadVar__2_226;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2914__1_2_f_0(
  MR_Word ToGradeSubdir_44,
  MR_String LambdaHeadVar__1_219)
{
  MR_String LambdaHeadVar__2_220;
  MR_String Var_221;
  MR_String Var_222;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_44, (MR_Integer) 1))));
  MR_Box conv1_Var_222;

  conv1_Var_222 = func_0(((MR_Box) (ToGradeSubdir_44)), ((MR_Box) (LambdaHeadVar__1_219)));
  Var_222 = ((MR_String) (conv1_Var_222));
  Var_221 = mercury__dir__f_slash_2_f_0(Var_222, (MR_String) "Mercury");
  LambdaHeadVar__2_220 = mercury__dir__f_slash_2_f_0(Var_221, (MR_String) "lib");
  return LambdaHeadVar__2_220;
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2895__1_2_p_0(
  MR_String HeadVar__1_213,
  MR_String HeadVar__2_306)
{
  MR_bool succeeded = (strcmp(HeadVar__1_213, HeadVar__2_306) == 0);

  return succeeded;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2877__1_3_f_0(
  MR_String Grade_25,
  MR_String TargetArch_43,
  MR_String LambdaHeadVar__1_201)
{
  MR_String LambdaHeadVar__2_202;
  MR_String Var_203;
  MR_String Var_204;

  Var_204 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_201, (MR_String) "Mercury");
  Var_203 = mercury__dir__f_slash_2_f_0(Var_204, Grade_25);
  LambdaHeadVar__2_202 = mercury__dir__f_slash_2_f_0(Var_203, TargetArch_43);
  return LambdaHeadVar__2_202;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2840__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_182)
{
  MR_String LambdaHeadVar__2_183;
  MR_String Var_184;

  Var_184 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_182, (MR_String) "modules");
  LambdaHeadVar__2_183 = mercury__dir__f_slash_2_f_0(Var_184, Grade_25);
  return LambdaHeadVar__2_183;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2830__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_172)
{
  MR_String LambdaHeadVar__2_173;
  MR_String Var_174;

  Var_174 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", Grade_25);
  LambdaHeadVar__2_173 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_172, Var_174);
  return LambdaHeadVar__2_173;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2820__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_160)
{
  MR_String LambdaHeadVar__2_161;
  MR_String Var_162;
  MR_String Var_163;

  Var_163 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_160, (MR_String) "lib");
  Var_162 = mercury__dir__f_slash_2_f_0(Var_163, Grade_25);
  LambdaHeadVar__2_161 = mercury__dir__f_slash_2_f_0(Var_162, (MR_String) "inc");
  return LambdaHeadVar__2_161;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2799__1_2_f_0(
  MR_String Grade_25,
  MR_String LambdaHeadVar__1_145)
{
  MR_String LambdaHeadVar__2_146;
  MR_String Var_147;

  Var_147 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_145, (MR_String) "lib");
  LambdaHeadVar__2_146 = mercury__dir__f_slash_2_f_0(Var_147, Grade_25);
  return LambdaHeadVar__2_146;
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
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[300])));
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[5])));
  mercury__io__write_prefixed_lines_5_p_0(ProgressStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[9])));
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
        mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[3])));
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
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[300])));
}

void MR_CALL 
libs__handle_options__generate_default_globals_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word DefaultOptionTable0_7,
  MR_Word * DefaultGlobals_8)
{
  MR_Word DefaultOptionTable_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 734)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[0]))), DefaultOptionTable0_7, &DefaultOptionTable_10);
  libs__handle_options__handle_given_options_9_p_0(ProgressStream_6, DefaultOptionTable_10, (MR_Word) ((MR_Unsigned) 0U), &Var_11, &Var_12, &Var_13, DefaultGlobals_8);
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
  MR_Word * STATE_VARIABLE_Specs_49,
  MR_Word * Globals_16)
{
  MR_bool succeeded;

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
    MR_Word DefaultGlobals_48;
    MR_Word STATE_VARIABLE_Specs_61_61;
    MR_Word STATE_VARIABLE_Specs_82_82;
    MR_Word OptionValue_91;
    MR_Box conv1_OptionValue_91;
    MR_Word BoolValuePrime_92;

    OptOptions_21 = mercury__cord__list_1_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0), OptOptionsCord_14);
    libs__handle_options__check_option_values_23_p_0(OptionTable0_13, &OptionTable_22, &Target_24, &WordSize_25, &GC_Method_26, &TermNorm_27, &Term2Norm_28, &TraceLevel_29, &TraceSuppress_30, &SSTraceLevel_31, &MaybeThreadSafe_32, &C_CompilerType_33, &CSharp_CompilerType_34, &ReuseStrategy_35, &MaybeFeedbackInfo_36, &HostEnvType_37, &SystemEnvType_38, &TargetEnvType_39, &LimitErrorContextsMap_40, &LinkExtMap_41, &STATE_VARIABLE_Specs_61_61);
    libs__optimization_options__process_optimization_options_3_p_0(OptionTable_22, OptOptions_21, &OptTuple_23);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_22, &OpMode_42, &OtherOpModes_43);
    if ((OtherOpModes_43 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_82_82 = STATE_VARIABLE_Specs_61_61;
    else
    {
      MR_Word OpModeStrs_46;
      MR_Word OpModePieces_47;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_72;
      MR_Word Var_73;

      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_63, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[2]));
        MR_hl_field(0, Var_63, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_9_p_0_1));
        MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_63, 3) = ((MR_Box) (OptionTable_22));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (OpMode_42));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) (OtherOpModes_43));
      }
      OpModeStrs_46 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_63, Var_64);
      Var_73 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "and", OpModeStrs_46);
      Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
      OpModePieces_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])), Var_72);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_47, STATE_VARIABLE_Specs_61_61, &STATE_VARIABLE_Specs_82_82);
    }
    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_22, ((MR_Box) ((MR_Integer) 734)), &conv1_OptionValue_91);
    OptionValue_91 = ((MR_Word) (conv1_OptionValue_91));
    succeeded = ((MR_tag((MR_Word) OptionValue_91)) == (MR_Integer) 1);
    if (succeeded)
    {
      BoolValuePrime_92 = ((MR_Unsigned) ((MR_hl_field(1, OptionValue_91, (MR_Integer) 0))) & (MR_Integer) 1);
      DefaultGlobals_48 = BoolValuePrime_92;
    }
    else
    {
      MR_String OptionStr_93;
      MR_String Var_95;

      OptionStr_93 = mercury__string__string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), ((MR_Box) ((MR_Integer) 734)));
      Var_95 = mercury__string__f_43_43_2_f_0(OptionStr_93, (MR_String) " is not a bool");
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.raw_lookup_bool_option\'/3", Var_95);
        return;
      }
    }
    succeeded = (STATE_VARIABLE_Specs_82_82 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (DefaultGlobals_48 == (MR_Integer) 1);
    if (succeeded)
      libs__handle_options__convert_options_to_globals_28_p_0(ProgressStream_10, DefaultOptionTable_11, OptionTable_22, OptTuple_23, OpMode_42, Target_24, WordSize_25, GC_Method_26, TermNorm_27, Term2Norm_28, TraceLevel_29, TraceSuppress_30, SSTraceLevel_31, MaybeThreadSafe_32, C_CompilerType_33, CSharp_CompilerType_34, ReuseStrategy_35, MaybeFeedbackInfo_36, HostEnvType_37, SystemEnvType_38, TargetEnvType_39, LimitErrorContextsMap_40, LinkExtMap_41, STATE_VARIABLE_Specs_82_82, STATE_VARIABLE_Specs_49, Globals_16);
    else
    {
      MR_Word DefaultOptionTable_99;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_102;

      mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 734)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[0]))), DefaultOptionTable_11, &DefaultOptionTable_99);
      libs__handle_options__handle_given_options_9_p_0(ProgressStream_10, DefaultOptionTable_99, (MR_Word) ((MR_Unsigned) 0U), &Var_100, &Var_101, &Var_102, Globals_16);
      *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_82_82;
    }
  }
  else
  {
    MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, MaybeError_12, (MR_Integer) 0))));
    MR_String ErrorMessage_19;
    MR_Word OptionTableSpec_20;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word DefaultOptionTable_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;

    ErrorMessage_19 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), Error_18);
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (ErrorMessage_19));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OptionTableSpec_20, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.convert_option_table_result_to_globals\'/9"));
      MR_hl_field(1, OptionTableSpec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, OptionTableSpec_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, OptionTableSpec_20, 3) = ((MR_Box) (Var_55));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_49 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OptionTableSpec_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 734)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[0]))), DefaultOptionTable_11, &DefaultOptionTable_109);
    libs__handle_options__handle_given_options_9_p_0(ProgressStream_10, DefaultOptionTable_109, (MR_Word) ((MR_Unsigned) 0U), &Var_110, &Var_111, &Var_112, Globals_16);
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
  mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_8[5]), Args0_12, OptionArgs_13, Args_14, &MaybeError_19, &_OptionsSet_50, DefaultOptionTable_11, &OptionTable_20, ((MR_Box) (Var_54)), &conv4_OptOptions_21);
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
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_43_43, (MR_Integer) 173, &Smart_25);
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
      libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_43_43, STATE_VARIABLE_Globals_28);
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
  MR_Word STATE_VARIABLE_OptTuple_0_139,
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
  MR_Word STATE_VARIABLE_Specs_0_140,
  MR_Word * STATE_VARIABLE_Specs_141,
  MR_Word * STATE_VARIABLE_Globals_142)
{
  MR_bool succeeded;
  MR_Word OT_AllowInlining0_56 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
  MR_Word OT_EnableConstStructPoly0_57 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 26)) & (MR_Integer) 1);
  MR_Word OT_EnableConstStructUser0_58 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 25)) & (MR_Integer) 1);
  MR_Word OT_OptCommonStructs0_59 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 24)) & (MR_Integer) 1);
  MR_Word OT_PropConstraints0_60 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 23)) & (MR_Integer) 1);
  MR_Word OT_PropLocalConstraints0_61 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
  MR_Word OT_OptDupCalls0_62 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 21)) & (MR_Integer) 1);
  MR_Word OT_PropConstants0_63 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
  MR_Word OT_ElimExcessAssigns0_64 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 19)) & (MR_Integer) 1);
  MR_Word OT_MergeCodeAfterSwitch0_65 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 18)) & (MR_Integer) 1);
  MR_Word OT_OptLoopInvariants0_66 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
  MR_Word OT_OptSVCell0_67 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 13)) & (MR_Integer) 1);
  MR_Word OT_OptFollowCode0_68 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  MR_Word OT_OptUnusedArgs0_69 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
  MR_Word OT_OptUnusedArgsIntermod0_70 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  MR_Word OT_OptHigherOrder0_71 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  MR_Integer OT_HigherOrderSizeLimit0_72 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 17))));
  MR_Word OT_SpecTypes0_73 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word OT_SpecTypesUserGuided0_74 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word OT_IntroduceAccumulators0_75 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 31)) & (MR_Integer) 1);
  MR_Word OT_OptLCMC0_76 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
  MR_Word OT_Deforest0_77 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
  MR_Word OT_Tuple0_78 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 24)) & (MR_Integer) 1);
  MR_Word OT_Untuple0_79 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
  MR_Word OT_OptMiddleRec0_80 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 7)) & (MR_Integer) 1);
  MR_Word OT_AllowHijacks0_81 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
  MR_Word OT_OptMLDSTailCalls0_82 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
  MR_Word OT_Optimize0_83 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
  MR_Word OT_StdLabels0_84 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 2))) >> 12)) & (MR_Integer) 1);
  MR_Word OT_OptDups0_85 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
  MR_Word OT_OptFrames0_86 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 2))) >> 8)) & (MR_Integer) 1);
  MR_Integer OT_StringBinarySwitchSize0_87 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 32))));
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
  MR_Word STATE_VARIABLE_Specs_178_178;
  MR_Word STATE_VARIABLE_Globals_181_181;
  MR_Word STATE_VARIABLE_Globals_209_209;
  MR_Word STATE_VARIABLE_Specs_211_211;
  MR_Word STATE_VARIABLE_Specs_212_212;
  MR_Word STATE_VARIABLE_Globals_213_213;
  MR_Word STATE_VARIABLE_Specs_214_214;
  MR_Word STATE_VARIABLE_Globals_215_215;
  MR_Word STATE_VARIABLE_Specs_216_216;
  MR_Word STATE_VARIABLE_Globals_217_217;
  MR_Word STATE_VARIABLE_Specs_218_218;
  MR_Word STATE_VARIABLE_Globals_219_219;
  MR_Word STATE_VARIABLE_Specs_220_220;
  MR_Word STATE_VARIABLE_Globals_221_221;
  MR_Word STATE_VARIABLE_Specs_222_222;
  MR_Word STATE_VARIABLE_Globals_223_223;
  MR_Word STATE_VARIABLE_Globals_226_226;
  MR_Word STATE_VARIABLE_Specs_227_227;
  MR_Word STATE_VARIABLE_Globals_228_228;
  MR_Word STATE_VARIABLE_Specs_229_229;
  MR_Word STATE_VARIABLE_Globals_230_230;
  MR_Word STATE_VARIABLE_Globals_231_231;
  MR_Word STATE_VARIABLE_Globals_232_232;
  MR_Word STATE_VARIABLE_Globals_233_233;
  MR_Word STATE_VARIABLE_Globals_235_235;
  MR_Word STATE_VARIABLE_Globals_236_236;
  MR_Word STATE_VARIABLE_Globals_237_237;
  MR_Word STATE_VARIABLE_Globals_239_239;
  MR_Word STATE_VARIABLE_Globals_240_240;
  MR_Word STATE_VARIABLE_Globals_242_242;
  MR_Word STATE_VARIABLE_Specs_243_243;
  MR_Word STATE_VARIABLE_Globals_254_254;
  MR_Word STATE_VARIABLE_OptTuple_285_285;
  MR_Word STATE_VARIABLE_Globals_287_287;
  MR_Word STATE_VARIABLE_OptTuple_288_288;
  MR_Word STATE_VARIABLE_Globals_289_289;
  MR_Integer Var_4469;
  MR_Integer Var_4470;
  MR_Integer Var_4471;
  MR_Integer Var_4472;
  MR_Integer Var_4473;
  MR_Integer Var_4474;
  MR_Integer Var_4475;
  MR_Integer Var_4476;
  MR_Integer Var_4477;
  MR_Integer Var_4478;
  MR_Integer Var_4479;
  MR_Integer Var_4480;
  MR_Integer Var_4481;
  MR_Integer Var_4482;
  MR_Integer Var_4484;
  MR_Integer Var_4485;
  MR_Integer Var_4486;
  MR_Integer Var_4487;
  MR_Integer Var_4488;
  MR_Integer Var_4489;
  MR_Integer Var_4490;
  MR_Integer Var_4491;
  MR_Integer Var_4492;
  MR_Integer Var_4493;
  MR_Integer Var_4494;
  MR_Integer Var_4495;
  MR_Integer Var_4496;
  MR_Integer Var_4497;
  MR_Integer Var_4499;
  MR_Integer Var_4500;
  MR_Integer Var_4501;
  MR_Integer Var_4502;
  MR_Integer Var_4503;
  MR_Integer Var_4504;
  MR_Integer Var_4505;
  MR_String Var_4506;
  MR_Word Var_248;
  MR_Word Var_249;
  MR_Unsigned packed_word_10;
  MR_Unsigned packed_word_11;
  MR_Unsigned packed_word_12;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_31, ((MR_Box) ((MR_Integer) 694)), &InstallMethodStr_88);
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
    STATE_VARIABLE_Specs_178_178 = STATE_VARIABLE_Specs_0_140;
  }
  else
  {
    succeeded = (strcmp(InstallMethodStr_88, (MR_String) "internal") == 0);
    if (succeeded)
    {
      InstallMethod_89 = (MR_Integer) 1;
      STATE_VARIABLE_Specs_178_178 = STATE_VARIABLE_Specs_0_140;
    }
    else
    {
      MR_Word InstallMethodSpec_90;
      MR_Word Var_148;
      MR_Word Var_151;
      MR_Word Var_154;
      MR_Word Var_155;

      {
        Var_155 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_155, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_155, 1) = ((MR_Box) (InstallMethodStr_88));
      }
      {
        Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
        MR_hl_field(1, Var_154, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[183])));
      }
      {
        Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_151, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175])));
        MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
      }
      {
        Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_148, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[174])));
        MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_151));
      }
      {
        InstallMethodSpec_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InstallMethodSpec_90, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[173])));
        MR_hl_field(1, InstallMethodSpec_90, 1) = ((MR_Box) (Var_148));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InstallMethodSpec_90, STATE_VARIABLE_Specs_0_140, &STATE_VARIABLE_Specs_178_178);
      InstallMethod_89 = (MR_Integer) 0;
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_31, ((MR_Box) ((MR_Integer) 695)), &InstallCmd_91);
  succeeded = (strcmp(InstallCmd_91, (MR_String) "") == 0);
  if (succeeded)
    FileInstallCmd_92 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      FileInstallCmd_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileInstallCmd_92, 0) = ((MR_Box) (InstallCmd_91));
    }
  libs__globals__globals_init_26_p_0(DefaultOptionTable_30, OptionTable0_31, STATE_VARIABLE_OptTuple_0_139, OpMode_33, MaybeFeedbackInfo_46, FileInstallCmd_92, TraceSuppress_40, ReuseStrategy_45, LimitErrorContextsMap_50, LinkExtMap_51, C_CompilerType_43, CSharp_CompilerType_44, Target_34, (MR_Integer) 0, WordSize_35, GC_Method_36, TermNorm_37, Term2Norm_38, TraceLevel_39, SSTraceLevel_41, MaybeThreadSafe_42, HostEnvType_47, SystemEnvType_48, TargetEnvType_49, InstallMethod_89, &STATE_VARIABLE_Globals_181_181);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_181_181, (MR_Integer) 738, &Experiment2_93);
  switch (Experiment2_93) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_209_209 = STATE_VARIABLE_Globals_181_181;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_185_185;
        MR_Word STATE_VARIABLE_Globals_189_189;
        MR_Word STATE_VARIABLE_Globals_193_193;
        MR_Word STATE_VARIABLE_Globals_197_197;
        MR_Word STATE_VARIABLE_Globals_201_201;
        MR_Word STATE_VARIABLE_Globals_205_205;

        libs__globals__set_option_4_p_0((MR_Integer) 314, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_181_181, &STATE_VARIABLE_Globals_185_185);
        libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_185_185, &STATE_VARIABLE_Globals_189_189);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_189_189, &STATE_VARIABLE_Globals_193_193);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_193_193, &STATE_VARIABLE_Globals_197_197);
        libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_197_197, &STATE_VARIABLE_Globals_201_201);
        libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_201_201, &STATE_VARIABLE_Globals_205_205);
        libs__globals__set_option_4_p_0((MR_Integer) 322, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_205_205, &STATE_VARIABLE_Globals_209_209);
      }
      break;
  }
  libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_209_209, Target_34, GC_Method_36, STATE_VARIABLE_Specs_178_178, &STATE_VARIABLE_Specs_211_211);
  libs__handle_options__check_for_incompatibilities_4_p_0(STATE_VARIABLE_Globals_209_209, OpMode_33, STATE_VARIABLE_Specs_211_211, &STATE_VARIABLE_Specs_212_212);
  libs__handle_options__handle_implications_of_pregen_target_spf_7_p_0(STATE_VARIABLE_Globals_209_209, &STATE_VARIABLE_Globals_213_213, Target_34, OT_StringBinarySwitchSize0_87, &OT_StringBinarySwitchSize_94, STATE_VARIABLE_Specs_212_212, &STATE_VARIABLE_Specs_214_214);
  libs__handle_options__handle_implications_of_parallel_4_p_0(STATE_VARIABLE_Globals_213_213, &STATE_VARIABLE_Globals_215_215, STATE_VARIABLE_Specs_214_214, &STATE_VARIABLE_Specs_216_216);
  libs__handle_options__handle_gc_options_7_p_0(STATE_VARIABLE_Globals_215_215, &STATE_VARIABLE_Globals_217_217, GC_Method_36, OT_OptFrames0_86, &OT_OptFrames_95, STATE_VARIABLE_Specs_216_216, &STATE_VARIABLE_Specs_218_218);
  libs__handle_options__handle_minimal_model_options_5_p_0(STATE_VARIABLE_Globals_217_217, &STATE_VARIABLE_Globals_219_219, &AllowHijacksMMSC_96, STATE_VARIABLE_Specs_218_218, &STATE_VARIABLE_Specs_220_220);
  TraceEnabled_97 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_39);
  libs__handle_options__handle_debugging_options_9_p_0(Target_34, TraceLevel_39, TraceEnabled_97, SSTraceLevel_41, &AllowSrcChangesDebug_98, STATE_VARIABLE_Globals_219_219, &STATE_VARIABLE_Globals_221_221, STATE_VARIABLE_Specs_220_220, &STATE_VARIABLE_Specs_222_222);
  libs__handle_options__maybe_update_event_set_file_name_4_p_0(STATE_VARIABLE_Globals_221_221, &STATE_VARIABLE_Globals_223_223);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_223_223, (MR_Integer) 266, &ProfileDeep_99);
  libs__handle_options__handle_profiling_options_9_p_0(STATE_VARIABLE_Globals_223_223, &STATE_VARIABLE_Globals_226_226, Target_34, ProfileDeep_99, &AllowSrcChangesProf_100, OT_HigherOrderSizeLimit0_72, &OT_HigherOrderSizeLimit_101, STATE_VARIABLE_Specs_222_222, &STATE_VARIABLE_Specs_227_227);
  libs__handle_options__handle_record_term_sizes_options_5_p_0(STATE_VARIABLE_Globals_226_226, &STATE_VARIABLE_Globals_228_228, &AllowOptLCMCTermSize_102, STATE_VARIABLE_Specs_227_227, &STATE_VARIABLE_Specs_229_229);
  libs__handle_options__handle_stack_layout_options_6_p_0(STATE_VARIABLE_Globals_228_228, &STATE_VARIABLE_Globals_230_230, OT_OptDups0_85, &OT_OptDups_103, OT_StdLabels0_84, &OT_StdLabels_104);
  libs__handle_options__handle_opmode_implications_3_p_0(OpMode_33, STATE_VARIABLE_Globals_230_230, &STATE_VARIABLE_Globals_231_231);
  libs__handle_options__handle_option_to_option_implications_3_p_0(OpMode_33, STATE_VARIABLE_Globals_231_231, &STATE_VARIABLE_Globals_232_232);
  libs__handle_options__maybe_disable_smart_recompilation_6_p_0(ProgressStream_29, OpMode_33, STATE_VARIABLE_Globals_232_232, &STATE_VARIABLE_Globals_233_233);
  libs__handle_options__handle_directory_options_3_p_0(OpMode_33, STATE_VARIABLE_Globals_233_233, &STATE_VARIABLE_Globals_235_235);
  libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(STATE_VARIABLE_Globals_235_235, &STATE_VARIABLE_Globals_236_236);
  libs__handle_options__handle_compiler_developer_options_4_p_0(STATE_VARIABLE_Globals_236_236, &STATE_VARIABLE_Globals_237_237);
  libs__handle_options__handle_compare_specialization_2_p_0(STATE_VARIABLE_Globals_237_237, &STATE_VARIABLE_Globals_239_239);
  libs__handle_options__handle_colors_4_p_0(STATE_VARIABLE_Globals_239_239, &STATE_VARIABLE_Globals_240_240);
  switch (OT_Optimize0_83) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OT_OptMLDSTailCalls_105 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      OT_OptMLDSTailCalls_105 = OT_OptMLDSTailCalls0_82;
      break;
  }
  libs__handle_options__handle_non_tail_rec_warnings_7_p_0(STATE_VARIABLE_OptTuple_0_139, OT_OptMLDSTailCalls_105, OpMode_33, STATE_VARIABLE_Globals_240_240, &STATE_VARIABLE_Globals_242_242, STATE_VARIABLE_Specs_229_229, &STATE_VARIABLE_Specs_243_243);
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
            MR_Word Var_244;

            succeeded = ((MR_tag((MR_Word) OpMode_33)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_244 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_244)) == (MR_Integer) 3);
              if (succeeded)
              {
                Augment_109 = ((MR_Word) ((MR_hl_field(3, Var_244, (MR_Integer) 0))));
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
  OT_InlineBuiltins0_112 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0))) >> 29)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_242_242, (MR_Integer) 341, &BodyTypeInfoLiveness_116);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_242_242, (MR_Integer) 238, &ReorderConj_117);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_242_242, (MR_Integer) 298, &StackSegments_119);
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
      Var_248 = (MR_Integer) 289;
      Var_249 = (MR_Integer) 0;
      succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_242_242, Var_248, Var_249);
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
    MR_Word Var_250;
    MR_Word Var_251;

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
      Var_250 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_250)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_251 = ((MR_Word) ((MR_hl_field(3, Var_250, (MR_Integer) 0))));
        succeeded = (Var_251 == (MR_Word) ((MR_Unsigned) 0U));
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
          MR_Word Var_8135;
          MR_Word Var_8136;

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
            Var_8135 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) Var_8135)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_8136 = ((MR_Word) ((MR_hl_field(3, Var_8135, (MR_Integer) 0))));
              succeeded = (Var_8136 == (MR_Word) ((MR_Unsigned) 0U));
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
            MR_Word Var_8148;
            MR_Word Var_8149;

            succeeded = ((MR_tag((MR_Word) OpMode_33)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_8148 = ((MR_Word) ((MR_hl_field(3, OpMode_33, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_8148)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_8149 = ((MR_Word) ((MR_hl_field(3, Var_8148, (MR_Integer) 0))));
                succeeded = (Var_8149 == (MR_Word) ((MR_Unsigned) 0U));
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
    libs__globals__set_option_4_p_0((MR_Integer) 520, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_242_242, &STATE_VARIABLE_Globals_254_254);
  }
  else
  {
    OT_OptUnusedArgsIntermod_130 = (MR_Integer) 1;
    STATE_VARIABLE_Globals_254_254 = STATE_VARIABLE_Globals_242_242;
  }
  packed_word_10 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 0)));
  packed_word_11 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 1)));
  packed_word_12 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 2)));
  Var_4469 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 3))));
  Var_4470 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 4))));
  Var_4471 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 5))));
  Var_4472 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 6))));
  Var_4473 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 7))));
  Var_4474 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 8))));
  Var_4475 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 9))));
  Var_4476 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 10))));
  Var_4477 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 11))));
  Var_4478 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 12))));
  Var_4479 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 13))));
  Var_4480 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 14))));
  Var_4481 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 15))));
  Var_4482 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 16))));
  Var_4484 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 18))));
  Var_4485 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 19))));
  Var_4486 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 20))));
  Var_4487 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 21))));
  Var_4488 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 22))));
  Var_4489 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 23))));
  Var_4490 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 24))));
  Var_4491 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 25))));
  Var_4492 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 26))));
  Var_4493 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 27))));
  Var_4494 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 28))));
  Var_4495 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 29))));
  Var_4496 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 30))));
  Var_4497 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 31))));
  Var_4499 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 33))));
  Var_4500 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 34))));
  Var_4501 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 35))));
  Var_4502 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 36))));
  Var_4503 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 37))));
  Var_4504 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 38))));
  Var_4505 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 39))));
  Var_4506 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_139, (MR_Integer) 40))));
  {
    STATE_VARIABLE_OptTuple_285_285 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 0) = (MR_Box) ((((packed_word_10 & (~((MR_Unsigned) 2281480315U)))) | (((MR_Unsigned) (OT_SpecTypesUserGuided_123) | (((((MR_Unsigned) (OT_SpecTypes_122) << 1)) | (((((MR_Unsigned) (OT_OptHigherOrder_115) << 3)) | (((((MR_Unsigned) (OT_OptUnusedArgsIntermod_130) << 4)) | (((((MR_Unsigned) (OT_OptUnusedArgs_129) << 5)) | (((((MR_Unsigned) (OT_OptFollowCode_132) << 6)) | (((((MR_Unsigned) (OT_OptSVCell_133) << 13)) | (((((MR_Unsigned) (OT_OptLoopInvariants_134) << 15)) | (((((MR_Unsigned) (OT_MergeCodeAfterSwitch_137) << 18)) | (((((MR_Unsigned) (OT_ElimExcessAssigns_127) << 19)) | (((((MR_Unsigned) (OT_PropConstants_113) << 20)) | (((((MR_Unsigned) (OT_OptDupCalls_114) << 21)) | (((((MR_Unsigned) (OT_PropLocalConstraints_124) << 22)) | (((((MR_Unsigned) (OT_PropConstraints_125) << 23)) | (((((MR_Unsigned) (OT_OptCommonStructs_126) << 24)) | (((((MR_Unsigned) (OT_EnableConstStructUser_111) << 25)) | (((((MR_Unsigned) (OT_EnableConstStructPoly_107) << 26)) | (((MR_Unsigned) (OT_AllowInlining_106) << 31))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 1) = (MR_Box) ((((packed_word_11 & (~((MR_Unsigned) 385876144U)))) | (((((MR_Unsigned) (OT_OptMLDSTailCalls_105) << 4)) | (((((MR_Unsigned) (OT_AllowHijacks_121) << 5)) | (((((MR_Unsigned) (OT_OptMiddleRec_120) << 7)) | (((((MR_Unsigned) (OT_Tuple_136) << 24)) | (((((MR_Unsigned) (OT_Untuple_135) << 25)) | (((((MR_Unsigned) (OT_Deforest_118) << 26)) | (((MR_Unsigned) (OT_OptLCMC_131) << 28))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 2) = (MR_Box) ((((packed_word_12 & (~((MR_Unsigned) 5376U)))) | (((((MR_Unsigned) (OT_OptFrames_95) << 8)) | (((((MR_Unsigned) (OT_OptDups_103) << 10)) | (((MR_Unsigned) (OT_StdLabels_104) << 12))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 3) = ((MR_Box) (Var_4469));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 4) = ((MR_Box) (Var_4470));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 5) = ((MR_Box) (Var_4471));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 6) = ((MR_Box) (Var_4472));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 7) = ((MR_Box) (Var_4473));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 8) = ((MR_Box) (Var_4474));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 9) = ((MR_Box) (Var_4475));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 10) = ((MR_Box) (Var_4476));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 11) = ((MR_Box) (Var_4477));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 12) = ((MR_Box) (Var_4478));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 13) = ((MR_Box) (Var_4479));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 14) = ((MR_Box) (Var_4480));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 15) = ((MR_Box) (Var_4481));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 16) = ((MR_Box) (Var_4482));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 17) = ((MR_Box) (OT_HigherOrderSizeLimit_101));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 18) = ((MR_Box) (Var_4484));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 19) = ((MR_Box) (Var_4485));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 20) = ((MR_Box) (Var_4486));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 21) = ((MR_Box) (Var_4487));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 22) = ((MR_Box) (Var_4488));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 23) = ((MR_Box) (Var_4489));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 24) = ((MR_Box) (Var_4490));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 25) = ((MR_Box) (Var_4491));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 26) = ((MR_Box) (Var_4492));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 27) = ((MR_Box) (Var_4493));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 28) = ((MR_Box) (Var_4494));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 29) = ((MR_Box) (Var_4495));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 30) = ((MR_Box) (Var_4496));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 31) = ((MR_Box) (Var_4497));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 32) = ((MR_Box) (OT_StringBinarySwitchSize_94));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 33) = ((MR_Box) (Var_4499));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 34) = ((MR_Box) (Var_4500));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 35) = ((MR_Box) (Var_4501));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 36) = ((MR_Box) (Var_4502));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 37) = ((MR_Box) (Var_4503));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 38) = ((MR_Box) (Var_4504));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 39) = ((MR_Box) (Var_4505));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_285_285, 40) = ((MR_Box) (Var_4506));
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_254_254, (MR_Integer) 330, &HighLevelCode_138);
  switch (HighLevelCode_138) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__handle_options__postprocess_options_lowlevel_4_p_0(STATE_VARIABLE_Globals_254_254, &STATE_VARIABLE_Globals_287_287, STATE_VARIABLE_OptTuple_285_285, &STATE_VARIABLE_OptTuple_288_288);
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptTuple_288_288 = STATE_VARIABLE_OptTuple_285_285;
        STATE_VARIABLE_Globals_287_287 = STATE_VARIABLE_Globals_254_254;
      }
      break;
  }
  libs__globals__set_opt_tuple_3_p_0(STATE_VARIABLE_OptTuple_288_288, STATE_VARIABLE_Globals_287_287, &STATE_VARIABLE_Globals_289_289);
  libs__compute_grade__postprocess_options_libgrades_4_p_0(STATE_VARIABLE_Globals_289_289, STATE_VARIABLE_Globals_142, STATE_VARIABLE_Specs_243_243, STATE_VARIABLE_Specs_141);
  libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_142);
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
      libs__globals__set_option_4_p_0((MR_Integer) 367, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_16, STATE_VARIABLE_Globals_17);
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
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 310, &UnboxedFloat_12);
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
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 311, &UnboxedInt64s_13);
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
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 326, &NonLocalGotos_14);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 328, &AsmLabels_15);
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
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[302])), STATE_VARIABLE_Specs_0_22, &STATE_VARIABLE_Specs_30_30);
        break;
    }
    switch (OT_OptMLDSTailCalls_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[298])), STATE_VARIABLE_Specs_30_30, &STATE_VARIABLE_Specs_35_35);
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
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[304])), STATE_VARIABLE_Specs_35_35, STATE_VARIABLE_Specs_23);
    else
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_35_35;
  }
  else
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  *STATE_VARIABLE_Globals_21 = STATE_VARIABLE_Globals_0_20;
}

static void MR_CALL 
libs__handle_options__handle_colors_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  MR_Word EnableIsSet_7;
  MR_Word EnableValue_8;
  MR_Word ConfigDefault_9;
  MR_Word UseColor_10;
  MR_Word Var_19;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 93, &EnableIsSet_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 94, &EnableValue_8);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 91, &ConfigDefault_9);
  switch (EnableIsSet_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UseColor_10 = ConfigDefault_9;
      break;
    case (MR_Integer) 1:
      UseColor_10 = EnableValue_8;
      break;
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = (MR_Box) ((MR_Unsigned) (UseColor_10));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 95, Var_19, STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
}

static void MR_CALL 
libs__handle_options__handle_compare_specialization_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_9,
  MR_Word * STATE_VARIABLE_Globals_10)
{
  MR_bool succeeded;
  MR_Integer CompareSpec_4;

  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 381, &CompareSpec_4);
  succeeded = (CompareSpec_4 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word HighLevelCode_5;
    MR_Integer Limit0_6;
    MR_Word ModeConstraints_7;
    MR_Integer Limit_8;
    MR_Word Var_16;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 330, &HighLevelCode_5);
    switch (HighLevelCode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Limit0_6 = (MR_Integer) 13;
        break;
      case (MR_Integer) 1:
        Limit0_6 = (MR_Integer) 14;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 229, &ModeConstraints_7);
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
    libs__globals__set_option_4_p_0((MR_Integer) 381, Var_16, STATE_VARIABLE_Globals_0_9, STATE_VARIABLE_Globals_10);
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

  libs__handle_options__option_implies_5_p_0((MR_Integer) 77, (MR_Integer) 76, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_39, &STATE_VARIABLE_Globals_46_46);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 76, (MR_Integer) 82, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_51_51);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 77, &VeryVerbose_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 86, &Statistics_8);
  succeeded = (VeryVerbose_7 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Statistics_8 == (MR_Integer) 1);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 87, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_51_51, &STATE_VARIABLE_Globals_57_57);
  else
    STATE_VARIABLE_Globals_57_57 = STATE_VARIABLE_Globals_51_51;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 110, (MR_Integer) 108, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_57_57, &STATE_VARIABLE_Globals_62_62);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 111, (MR_Integer) 108, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_62_62, &STATE_VARIABLE_Globals_67_67);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 109, (MR_Integer) 108, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_67_67, &STATE_VARIABLE_Globals_72_72);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 123, &DebugLiveness_9);
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

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 220, &DumpOptions0_11);
    DumpOptions1_12 = mercury__string__f_43_43_2_f_0(DumpOptions0_11, AllDumpOptions_10);
    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (DumpOptions1_12));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 220, Var_79, STATE_VARIABLE_Globals_72_72, &STATE_VARIABLE_Globals_80_80);
  }
  else
    STATE_VARIABLE_Globals_80_80 = STATE_VARIABLE_Globals_72_72;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 111, (MR_Integer) 108, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_80_80, &STATE_VARIABLE_Globals_84_84);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_84_84, (MR_Integer) 112, &DebugModesPredId_13);
  succeeded = (DebugModesPredId_13 > (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 108, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_90_90);
  else
    STATE_VARIABLE_Globals_90_90 = STATE_VARIABLE_Globals_84_84;
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_90_90, (MR_Integer) 236, &DebugUnneededCodePredNames_14);
  if ((DebugUnneededCodePredNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_95_95 = STATE_VARIABLE_Globals_90_90;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 235, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_90_90, &STATE_VARIABLE_Globals_95_95);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_95_95, (MR_Integer) 120, &DebugOptPredIdStrs_17);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_95_95, (MR_Integer) 121, &DebugOptPredNames_18);
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
    libs__globals__set_option_4_p_0((MR_Integer) 118, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_95_95, &STATE_VARIABLE_Globals_101_101);
  else
    STATE_VARIABLE_Globals_101_101 = STATE_VARIABLE_Globals_95_95;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 129, &DebugIntermoduleAnalysis_23);
  switch (DebugIntermoduleAnalysis_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      analysis__operations__set_analysis_debug_stream_3_p_0((MR_Word) ((MR_Unsigned) 0U));
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
        analysis__operations__set_analysis_debug_stream_3_p_0(Var_107);
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 214, &DumpHLDSPredIds_25);
  if ((DumpHLDSPredIds_25 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_117_117 = STATE_VARIABLE_Globals_101_101;
  else
  {
    MR_String DumpOptions2_28;
    MR_String DumpOptions3_29;
    MR_String DumpOptions_30;
    MR_Word Var_116;

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 220, &DumpOptions2_28);
    mercury__string__replace_all_4_p_0(DumpOptions2_28, (MR_String) "M", (MR_String) "", &DumpOptions3_29);
    mercury__string__replace_all_4_p_0(DumpOptions3_29, (MR_String) "T", (MR_String) "", &DumpOptions_30);
    {
      Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_116, 1) = ((MR_Box) (DumpOptions_30));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 220, Var_116, STATE_VARIABLE_Globals_101_101, &STATE_VARIABLE_Globals_117_117);
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 198, (MR_Integer) 197, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_117_117, &STATE_VARIABLE_Globals_121_121);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 213, &DumpHLDSStages_31);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 212, &DumpTraceStages_32);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 368, &ParallelLiveness_33);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 369, &ParallelCodeGen_34);
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
    libs__globals__set_option_4_p_0((MR_Integer) 367, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_121_121, STATE_VARIABLE_Globals_40);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_7, (MR_Integer) 151, &SourceOptionValue_37);
  switch (SourceOptionValue_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_12_12 = STATE_VARIABLE_Globals_0_7;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 616, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[293])), STATE_VARIABLE_Globals_0_7, &STATE_VARIABLE_Globals_12_12);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_12_12, (MR_Integer) 151, &SourceOptionValue_38);
  switch (SourceOptionValue_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_17_17 = STATE_VARIABLE_Globals_12_12;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 618, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[293])), STATE_VARIABLE_Globals_12_12, &STATE_VARIABLE_Globals_17_17);
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_17, (MR_Integer) 701, &LibLinkages0_4);
  if ((LibLinkages0_4 == (MR_Word) ((MR_Unsigned) 0U)))
    libs__globals__set_option_4_p_0((MR_Integer) 701, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[296])), STATE_VARIABLE_Globals_17_17, &STATE_VARIABLE_Globals_22_22);
  else
    STATE_VARIABLE_Globals_22_22 = STATE_VARIABLE_Globals_17_17;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 557, &SourceOptionValue_39);
  switch (SourceOptionValue_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_31_31 = STATE_VARIABLE_Globals_22_22;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 620, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_31_31);
      break;
  }
  succeeded = mercury__io__file__have_symlinks_0_p_0();
  if (succeeded)
    *STATE_VARIABLE_Globals_8 = STATE_VARIABLE_Globals_31_31;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 691, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_31_31, STATE_VARIABLE_Globals_8);
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv9_LambdaHeadVar__2_249;

  conv9_LambdaHeadVar__2_249 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2953__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_249));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv8_LambdaHeadVar__2_238;

  conv8_LambdaHeadVar__2_238 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2940__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_238));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_LambdaHeadVar__2_244;

  conv7_LambdaHeadVar__2_244 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2946__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_244));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_LambdaHeadVar__2_226;

  conv6_LambdaHeadVar__2_226 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2918__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_226));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_LambdaHeadVar__2_220;

  conv5_LambdaHeadVar__2_220 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2914__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_220));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__handle_options__IntroducedFrom__pred__handle_directory_options__2895__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_LambdaHeadVar__2_202;

  conv4_LambdaHeadVar__2_202 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2877__1_3_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_202));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_LambdaHeadVar__2_183;

  conv3_LambdaHeadVar__2_183 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2840__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_183));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_173;

  conv2_LambdaHeadVar__2_173 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2830__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_173));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_161;

  conv1_LambdaHeadVar__2_161 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2820__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_161));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_146;

  conv0_LambdaHeadVar__2_146 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2799__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_146));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__handle_options__handle_directory_options_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_92,
  MR_Word * STATE_VARIABLE_Globals_93)
{
  MR_bool succeeded;
  MR_Word UseGradeSubdirs_6;
  MR_Word UseSubdirs_7;
  MR_Word SubdirSetting_8;
  MR_String MercuryLinkage_13;
  MR_Word DefaultRuntimeLibraryDirs_14;
  MR_Word MaybeStdLibDir_15;
  MR_Word MaybeConfDir_21;
  MR_Word MercuryLibDirs_24;
  MR_String Grade_25;
  MR_Word UseSearchDirsForIntermod_38;
  MR_Word SearchLibFilesDirs_41;
  MR_Word IntermodDirs2_42;
  MR_String TargetArch_43;
  MR_Word ToGradeSubdir_44;
  MR_Word LinkLibDirs_53;
  MR_Word InitDirs_56;
  MR_Word IntermodSame_65;
  MR_Word IntermodIndep_66;
  MR_Word IntermodInstalled_67;
  MR_String ExtDirPlainOpt_70;
  MR_String ExtDirTransOpt_72;
  MR_String ExtDirDate_74;
  MR_String ExtDirStatus_76;
  MR_String ExtDirAnalysis_78;
  MR_String ExtDirImdg_80;
  MR_String ExtDirRequest_82;
  MR_Word IntermodPlainOpt_83;
  MR_Word IntermodTransOpt_84;
  MR_Word IntermodDate_85;
  MR_Word IntermodStatus_86;
  MR_Word IntermodAnalysis_87;
  MR_Word IntermodImdg_88;
  MR_Word IntermodRequest_89;
  MR_Word IntermodSrc_90;
  MR_Word ExtDirsMaps_91;
  MR_Word STATE_VARIABLE_Globals_97_97;
  MR_Word STATE_VARIABLE_Globals_102_102;
  MR_Word STATE_VARIABLE_Globals_107_107;
  MR_Word STATE_VARIABLE_Globals_112_112;
  MR_Word STATE_VARIABLE_Globals_127_127;
  MR_Word STATE_VARIABLE_Globals_139_139;
  MR_Word STATE_VARIABLE_Globals_189_189;
  MR_Word STATE_VARIABLE_Globals_196_196;
  MR_Word STATE_VARIABLE_Globals_216_216;
  MR_Word Var_232;
  MR_Word STATE_VARIABLE_Globals_233_233;
  MR_Word Var_235;
  MR_Word STATE_VARIABLE_Globals_236_236;
  MR_Word STATE_VARIABLE_Globals_263_263;
  MR_Word STATE_VARIABLE_IntermodDirsMap_267_267;
  MR_Word STATE_VARIABLE_IntermodDirsMap_276_276;
  MR_Word STATE_VARIABLE_IntermodDirsMap_278_278;
  MR_Word STATE_VARIABLE_IntermodDirsMap_280_280;
  MR_Word STATE_VARIABLE_IntermodDirsMap_282_282;
  MR_Word STATE_VARIABLE_IntermodDirsMap_284_284;
  MR_Word STATE_VARIABLE_IntermodDirsMap_286_286;
  MR_Word STATE_VARIABLE_IntermodDirsMap_288_288;
  MR_Word Var_289;
  MR_Word STATE_VARIABLE_IntermodDirsMap_291_291;
  MR_Word ToMihsSubdir_57;
  MR_String Var_69;
  MR_String Var_71;
  MR_String Var_73;
  MR_String Var_75;
  MR_String Var_77;
  MR_String Var_79;
  MR_String Var_81;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_92, (MR_Integer) 707, &UseGradeSubdirs_6);
  switch (UseGradeSubdirs_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        if ((OpMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3))
        {
          MR_Word InvokedByMMCMake_10 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_4, (MR_Integer) 1))) & (MR_Integer) 1);

          succeeded = (InvokedByMMCMake_10 == (MR_Integer) 1);
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          UseSubdirs_7 = (MR_Integer) 1;
          libs__globals__set_option_4_p_0((MR_Integer) 706, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_92, &STATE_VARIABLE_Globals_97_97);
          SubdirSetting_8 = (MR_Integer) 1;
        }
        else
        {
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_92, (MR_Integer) 706, &UseSubdirs_7);
          switch (UseSubdirs_7) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SubdirSetting_8 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              SubdirSetting_8 = (MR_Integer) 1;
              break;
          }
          STATE_VARIABLE_Globals_97_97 = STATE_VARIABLE_Globals_0_92;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        UseSubdirs_7 = (MR_Integer) 1;
        libs__globals__set_option_4_p_0((MR_Integer) 706, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_92, &STATE_VARIABLE_Globals_97_97);
        SubdirSetting_8 = (MR_Integer) 2;
      }
      break;
  }
  libs__globals__set_subdir_setting_3_p_0(SubdirSetting_8, STATE_VARIABLE_Globals_97_97, &STATE_VARIABLE_Globals_102_102);
  if ((OpMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3))
  {
    MR_Word OpModeArgs_11 = ((MR_Word) ((MR_hl_field(3, OpMode_4, (MR_Integer) 0))));
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = ((MR_tag((MR_Word) OpModeArgs_11)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_103 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_11, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_103)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_104 = ((MR_Unsigned) ((MR_hl_field(1, Var_103, (MR_Integer) 0))) & (MR_Integer) 3);
        succeeded = (Var_104 == (MR_Integer) 2);
      }
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    STATE_VARIABLE_Globals_107_107 = STATE_VARIABLE_Globals_102_102;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 716, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_102_102, &STATE_VARIABLE_Globals_107_107);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_107_107, (MR_Integer) 618, &MercuryLinkage_13);
  succeeded = (strcmp(MercuryLinkage_13, (MR_String) "static") == 0);
  if (succeeded)
  {
    DefaultRuntimeLibraryDirs_14 = (MR_Integer) 0;
    libs__globals__set_option_4_p_0((MR_Integer) 602, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_107_107, &STATE_VARIABLE_Globals_112_112);
  }
  else
  {
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_107_107, (MR_Integer) 602, &DefaultRuntimeLibraryDirs_14);
    STATE_VARIABLE_Globals_112_112 = STATE_VARIABLE_Globals_107_107;
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_112_112, (MR_Integer) 611, &MaybeStdLibDir_15);
  if ((MaybeStdLibDir_15 == (MR_Word) ((MR_Unsigned) 0U)))
    libs__globals__set_option_4_p_0((MR_Integer) 716, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_112_112, &STATE_VARIABLE_Globals_127_127);
  else
  {
    MR_String StdLibDir_16 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_15, (MR_Integer) 0))));
    MR_Word OptionTable2_17;
    MR_Word OptionTable_18;
    MR_Word LinkLibDirs0_19;
    MR_Word STATE_VARIABLE_Globals_116_116;
    MR_Word Var_119;
    MR_Word STATE_VARIABLE_Globals_120_120;
    MR_Word Var_121;
    MR_String Var_122;

    libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_112_112, &OptionTable2_17);
    libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_16, OptionTable2_17, &OptionTable_18);
    libs__globals__set_options_3_p_0(OptionTable_18, STATE_VARIABLE_Globals_112_112, &STATE_VARIABLE_Globals_116_116);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_116_116, (MR_Integer) 600, &LinkLibDirs0_19);
    Var_122 = mercury__dir__f_slash_2_f_0(StdLibDir_16, (MR_String) "lib");
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (LinkLibDirs0_19));
    }
    {
      Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_119, 1) = ((MR_Box) (Var_121));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 600, Var_119, STATE_VARIABLE_Globals_116_116, &STATE_VARIABLE_Globals_120_120);
    switch (DefaultRuntimeLibraryDirs_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_127_127 = STATE_VARIABLE_Globals_120_120;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath0_20;
          MR_Word Var_126;
          MR_Word Var_128;
          MR_String Var_129;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_120_120, (MR_Integer) 601, &Rpath0_20);
          Var_129 = mercury__dir__f_slash_2_f_0(StdLibDir_16, (MR_String) "lib");
          {
            Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
            MR_hl_field(1, Var_128, 1) = ((MR_Box) (Rpath0_20));
          }
          {
            Var_126 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_126, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_126, 1) = ((MR_Box) (Var_128));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 601, Var_126, STATE_VARIABLE_Globals_120_120, &STATE_VARIABLE_Globals_127_127);
        }
        break;
    }
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_127_127, (MR_Integer) 692, &MaybeConfDir_21);
  if ((MaybeConfDir_21 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_139_139 = STATE_VARIABLE_Globals_127_127;
  else
  {
    MR_String ConfDir_22 = ((MR_String) ((MR_hl_field(1, MaybeConfDir_21, (MR_Integer) 0))));
    MR_Word CIncludeDirs0_23;
    MR_Word Var_138;
    MR_Word Var_140;
    MR_String Var_141;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_127_127, (MR_Integer) 561, &CIncludeDirs0_23);
    Var_141 = mercury__dir__f_slash_2_f_0(ConfDir_22, (MR_String) "conf");
    {
      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
      MR_hl_field(1, Var_140, 1) = ((MR_Box) (CIncludeDirs0_23));
    }
    {
      Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_138, 1) = ((MR_Box) (Var_140));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 561, Var_138, STATE_VARIABLE_Globals_127_127, &STATE_VARIABLE_Globals_139_139);
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_139_139, (MR_Integer) 605, &MercuryLibDirs_24);
  libs__globals__get_grade_dir_2_p_0(STATE_VARIABLE_Globals_139_139, &Grade_25);
  if ((MercuryLibDirs_24 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_189_189 = STATE_VARIABLE_Globals_139_139;
  else
  {
    MR_Word ExtraLinkLibDirs_28;
    MR_Word LinkLibDirs1_30;
    MR_Word ExtraIncludeDirs_32;
    MR_Word CIncludeDirs_33;
    MR_Word ExtraIntermodDirs_34;
    MR_Word IntermodDirs0_35;
    MR_Word ExtraInitDirs_36;
    MR_Word InitDirs1_37;
    MR_Word Var_144;
    MR_Word Var_151;
    MR_Word STATE_VARIABLE_Globals_152_152;
    MR_Word Var_153;
    MR_Word STATE_VARIABLE_Globals_157_157;
    MR_Word Var_159;
    MR_Word Var_168;
    MR_Word STATE_VARIABLE_Globals_169_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_178;
    MR_Word STATE_VARIABLE_Globals_179_179;
    MR_Word Var_180;
    MR_Word Var_181;
    MR_Word Var_188;
    MR_Word Var_190;

    {
      Var_144 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_144, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
      MR_hl_field(0, Var_144, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_1));
      MR_hl_field(0, Var_144, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_144, 3) = ((MR_Box) (Grade_25));
    }
    ExtraLinkLibDirs_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_144, MercuryLibDirs_24);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_139_139, (MR_Integer) 600, &LinkLibDirs1_30);
    Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_30, ExtraLinkLibDirs_28);
    {
      Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_151, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_151, 1) = ((MR_Box) (Var_153));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 600, Var_151, STATE_VARIABLE_Globals_139_139, &STATE_VARIABLE_Globals_152_152);
    switch (DefaultRuntimeLibraryDirs_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_157_157 = STATE_VARIABLE_Globals_152_152;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath_31;
          MR_Word Var_156;
          MR_Word Var_158;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_152_152, (MR_Integer) 601, &Rpath_31);
          Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_31, ExtraLinkLibDirs_28);
          {
            Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_156, 1) = ((MR_Box) (Var_158));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 601, Var_156, STATE_VARIABLE_Globals_152_152, &STATE_VARIABLE_Globals_157_157);
        }
        break;
    }
    {
      Var_159 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_159, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
      MR_hl_field(0, Var_159, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_2));
      MR_hl_field(0, Var_159, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_159, 3) = ((MR_Box) (Grade_25));
    }
    ExtraIncludeDirs_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_159, MercuryLibDirs_24);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_157_157, (MR_Integer) 561, &CIncludeDirs_33);
    Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_32, CIncludeDirs_33);
    {
      Var_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_168, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_168, 1) = ((MR_Box) (Var_170));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 561, Var_168, STATE_VARIABLE_Globals_157_157, &STATE_VARIABLE_Globals_169_169);
    {
      Var_171 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_171, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
      MR_hl_field(0, Var_171, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_3));
      MR_hl_field(0, Var_171, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_171, 3) = ((MR_Box) (Grade_25));
    }
    ExtraIntermodDirs_34 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_171, MercuryLibDirs_24);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_169_169, (MR_Integer) 711, &IntermodDirs0_35);
    Var_180 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_34, IntermodDirs0_35);
    {
      Var_178 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_178, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_178, 1) = ((MR_Box) (Var_180));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 711, Var_178, STATE_VARIABLE_Globals_169_169, &STATE_VARIABLE_Globals_179_179);
    {
      Var_181 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_181, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
      MR_hl_field(0, Var_181, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_4));
      MR_hl_field(0, Var_181, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_181, 3) = ((MR_Box) (Grade_25));
    }
    ExtraInitDirs_36 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_181, MercuryLibDirs_24);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_179_179, (MR_Integer) 613, &InitDirs1_37);
    Var_190 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_37, ExtraInitDirs_36);
    {
      Var_188 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_188, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_188, 1) = ((MR_Box) (Var_190));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 613, Var_188, STATE_VARIABLE_Globals_179_179, &STATE_VARIABLE_Globals_189_189);
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_189_189, (MR_Integer) 712, &UseSearchDirsForIntermod_38);
  switch (UseSearchDirsForIntermod_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_196_196 = STATE_VARIABLE_Globals_189_189;
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntermodDirs1_39;
        MR_Word SearchDirs_40;
        MR_Word Var_195;
        MR_Word Var_197;

        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_189_189, (MR_Integer) 711, &IntermodDirs1_39);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_189_189, (MR_Integer) 710, &SearchDirs_40);
        Var_197 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_39, SearchDirs_40);
        {
          Var_195 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_195, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_195, 1) = ((MR_Box) (Var_197));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 711, Var_195, STATE_VARIABLE_Globals_189_189, &STATE_VARIABLE_Globals_196_196);
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_196_196, (MR_Integer) 607, &SearchLibFilesDirs_41);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_196_196, (MR_Integer) 711, &IntermodDirs2_42);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_196_196, (MR_Integer) 730, &TargetArch_43);
  {
    ToGradeSubdir_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToGradeSubdir_44, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
    MR_hl_field(0, ToGradeSubdir_44, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_5));
    MR_hl_field(0, ToGradeSubdir_44, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, ToGradeSubdir_44, 3) = ((MR_Box) (Grade_25));
    MR_hl_field(0, ToGradeSubdir_44, 4) = ((MR_Box) (TargetArch_43));
  }
  switch (UseGradeSubdirs_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word IntermodDirs3_48;
        MR_Word LinkLibDirs2_49;
        MR_Word InitDirs2_50;
        MR_Word Var_215;

        IntermodDirs3_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_41, IntermodDirs2_42);
        {
          Var_215 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_215, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_215, 1) = ((MR_Box) (IntermodDirs3_48));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 711, Var_215, STATE_VARIABLE_Globals_196_196, &STATE_VARIABLE_Globals_216_216);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_216_216, (MR_Integer) 600, &LinkLibDirs2_49);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_216_216, (MR_Integer) 613, &InitDirs2_50);
        LinkLibDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_41, LinkLibDirs2_49);
        InitDirs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_41, InitDirs2_50);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String GradeSubdir_46;
        MR_Word SearchLibFilesGradeSubdirs_47;
        MR_Word ToGradeLibDir_51;
        MR_Word SearchGradeLibDirs_52;
        MR_Word ToGradeInitDir_54;
        MR_Word SearchGradeInitDirs_55;
        MR_String Var_206;
        MR_Word Var_208;
        MR_Word Var_210;
        MR_Word Var_211;
        MR_Word Var_212;
        MR_String Var_213;
        MR_Word IntermodDirs3_315;
        MR_Word LinkLibDirs2_316;
        MR_Word InitDirs2_317;
        MR_Word Var_318;

        Var_206 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_25);
        GradeSubdir_46 = mercury__dir__f_slash_2_f_0(Var_206, TargetArch_43);
        SearchLibFilesGradeSubdirs_47 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_44, SearchLibFilesDirs_41);
        {
          Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_208, 0) = ((MR_Box) (GradeSubdir_46));
          MR_hl_field(1, Var_208, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_213 = mercury__dir__this_directory_0_f_0();
        {
          Var_212 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_212, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
          MR_hl_field(0, Var_212, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_6));
          MR_hl_field(0, Var_212, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_212, 3) = ((MR_Box) (Var_213));
        }
        Var_211 = mercury__list__negated_filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_212, IntermodDirs2_42);
        Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_47, Var_211);
        IntermodDirs3_315 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_208, Var_210);
        {
          Var_318 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_318, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_318, 1) = ((MR_Box) (IntermodDirs3_315));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 711, Var_318, STATE_VARIABLE_Globals_196_196, &STATE_VARIABLE_Globals_216_216);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_216_216, (MR_Integer) 600, &LinkLibDirs2_316);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_216_216, (MR_Integer) 613, &InitDirs2_317);
        {
          ToGradeLibDir_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeLibDir_51, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
          MR_hl_field(0, ToGradeLibDir_51, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_7));
          MR_hl_field(0, ToGradeLibDir_51, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeLibDir_51, 3) = ((MR_Box) (ToGradeSubdir_44));
        }
        SearchGradeLibDirs_52 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_51, SearchLibFilesDirs_41);
        LinkLibDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_52, LinkLibDirs2_316);
        {
          ToGradeInitDir_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeInitDir_54, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
          MR_hl_field(0, ToGradeInitDir_54, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_8));
          MR_hl_field(0, ToGradeInitDir_54, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeInitDir_54, 3) = ((MR_Box) (ToGradeSubdir_44));
        }
        SearchGradeInitDirs_55 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_54, SearchLibFilesDirs_41);
        InitDirs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_55, InitDirs2_317);
      }
      break;
  }
  {
    Var_232 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_232, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_232, 1) = ((MR_Box) (LinkLibDirs_53));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 600, Var_232, STATE_VARIABLE_Globals_216_216, &STATE_VARIABLE_Globals_233_233);
  {
    Var_235 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_235, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_235, 1) = ((MR_Box) (InitDirs_56));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 613, Var_235, STATE_VARIABLE_Globals_233_233, &STATE_VARIABLE_Globals_236_236);
  switch (UseGradeSubdirs_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        succeeded = (UseSubdirs_7 == (MR_Integer) 1);
        if (succeeded)
        {
          ToMihsSubdir_57 = (MR_Word) (&libs__handle_options_scalar_common_8[0]);
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          ToMihsSubdir_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToMihsSubdir_57, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
          MR_hl_field(0, ToMihsSubdir_57, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_10));
          MR_hl_field(0, ToMihsSubdir_57, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToMihsSubdir_57, 3) = ((MR_Box) (ToGradeSubdir_44));
        }
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word CIncludeDirs1_59;
    MR_String MhsSubdir_60;
    MR_String MihsSubdir_61;
    MR_Word SearchLibMhsSubdirs_62;
    MR_Word SearchLibMihsSubdirs_63;
    MR_Word SubdirCIncludeDirs_64;
    MR_String Var_254;
    MR_String Var_255;
    MR_String Var_256;
    MR_Word Var_257;
    MR_Word Var_258;
    MR_Word Var_259;
    MR_Word Var_260;
    MR_Word Var_262;
    MR_Box MR_CALL (* func_10)(MR_Box, MR_Box);
    MR_Box conv11_MihsSubdir_61;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_236_236, (MR_Integer) 561, &CIncludeDirs1_59);
    Var_254 = mercury__dir__this_directory_0_f_0();
    MhsSubdir_60 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2953__1_1_f_0(Var_254);
    Var_255 = mercury__dir__this_directory_0_f_0();
    func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToMihsSubdir_57, (MR_Integer) 1))));
    conv11_MihsSubdir_61 = func_10(((MR_Box) (ToMihsSubdir_57)), ((MR_Box) (Var_255)));
    MihsSubdir_61 = ((MR_String) (conv11_MihsSubdir_61));
    SearchLibMhsSubdirs_62 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__handle_options_scalar_common_8[1]), SearchLibFilesDirs_41);
    SearchLibMihsSubdirs_63 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_57, SearchLibFilesDirs_41);
    Var_256 = mercury__dir__this_directory_0_f_0();
    Var_260 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_63, CIncludeDirs1_59);
    Var_259 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMhsSubdirs_62, Var_260);
    {
      Var_258 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_258, 0) = ((MR_Box) (MihsSubdir_61));
      MR_hl_field(1, Var_258, 1) = ((MR_Box) (Var_259));
    }
    {
      Var_257 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_257, 0) = ((MR_Box) (MhsSubdir_60));
      MR_hl_field(1, Var_257, 1) = ((MR_Box) (Var_258));
    }
    {
      SubdirCIncludeDirs_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SubdirCIncludeDirs_64, 0) = ((MR_Box) (Var_256));
      MR_hl_field(1, SubdirCIncludeDirs_64, 1) = ((MR_Box) (Var_257));
    }
    {
      Var_262 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_262, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_262, 1) = ((MR_Box) (SubdirCIncludeDirs_64));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 561, Var_262, STATE_VARIABLE_Globals_236_236, &STATE_VARIABLE_Globals_263_263);
  }
  else
    STATE_VARIABLE_Globals_263_263 = STATE_VARIABLE_Globals_236_236;
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_263_263, (MR_Integer) 713, &IntermodSame_65);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_263_263, (MR_Integer) 714, &IntermodIndep_66);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_263_263, (MR_Integer) 715, &IntermodInstalled_67);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_IntermodDirsMap_267_267);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 0, &Var_69, &ExtDirPlainOpt_70);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 1, &Var_71, &ExtDirTransOpt_72);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 10, &Var_73, &ExtDirDate_74);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 11, &Var_75, &ExtDirStatus_76);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 2, &Var_77, &ExtDirAnalysis_78);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 3, &Var_79, &ExtDirImdg_80);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 4, &Var_81, &ExtDirRequest_82);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_8, Grade_25, ExtDirPlainOpt_70, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodPlainOpt_83);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_8, Grade_25, ExtDirTransOpt_72, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodTransOpt_84);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_8, Grade_25, ExtDirDate_74, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodDate_85);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_8, Grade_25, ExtDirStatus_76, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodStatus_86);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_8, Grade_25, ExtDirAnalysis_78, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodAnalysis_87);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_8, Grade_25, ExtDirImdg_80, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodImdg_88);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_8, Grade_25, ExtDirRequest_82, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodRequest_89);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 6)), ((MR_Box) (IntermodPlainOpt_83)), STATE_VARIABLE_IntermodDirsMap_267_267, &STATE_VARIABLE_IntermodDirsMap_276_276);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 7)), ((MR_Box) (IntermodTransOpt_84)), STATE_VARIABLE_IntermodDirsMap_276_276, &STATE_VARIABLE_IntermodDirsMap_278_278);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 8)), ((MR_Box) (IntermodDate_85)), STATE_VARIABLE_IntermodDirsMap_278_278, &STATE_VARIABLE_IntermodDirsMap_280_280);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (IntermodStatus_86)), STATE_VARIABLE_IntermodDirsMap_280_280, &STATE_VARIABLE_IntermodDirsMap_282_282);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 10)), ((MR_Box) (IntermodAnalysis_87)), STATE_VARIABLE_IntermodDirsMap_282_282, &STATE_VARIABLE_IntermodDirsMap_284_284);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 11)), ((MR_Box) (IntermodImdg_88)), STATE_VARIABLE_IntermodDirsMap_284_284, &STATE_VARIABLE_IntermodDirsMap_286_286);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 12)), ((MR_Box) (IntermodRequest_89)), STATE_VARIABLE_IntermodDirsMap_286_286, &STATE_VARIABLE_IntermodDirsMap_288_288);
  Var_289 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodIndep_66, IntermodInstalled_67);
  IntermodSrc_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodSame_65, Var_289);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 13)), ((MR_Box) (IntermodSrc_90)), STATE_VARIABLE_IntermodDirsMap_288_288, &STATE_VARIABLE_IntermodDirsMap_291_291);
  ExtDirsMaps_91 = (MR_Word) (STATE_VARIABLE_IntermodDirsMap_291_291);
  libs__globals__set_ext_dirs_maps_3_p_0(ExtDirsMaps_91, STATE_VARIABLE_Globals_263_263, STATE_VARIABLE_Globals_93);
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2953__1_1_f_0(
  MR_String LambdaHeadVar__1_248)
{
  MR_String LambdaHeadVar__2_249;
  MR_String Var_250;

  Var_250 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_248, (MR_String) "Mercury");
  LambdaHeadVar__2_249 = mercury__dir__f_slash_2_f_0(Var_250, (MR_String) "mhs");
  return LambdaHeadVar__2_249;
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__5_5;

  parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv2_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__5_5));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;

  parse_tree__file_names__make_all_proposed_dir_names_gs_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__5_5;

  parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv0_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0(
  MR_Word SubdirSetting_8,
  MR_String Grade_9,
  MR_String ExtSubDir_10,
  MR_Word SearchDirsSame_11,
  MR_Word SearchDirsIndep_12,
  MR_Word SearchDirsInstall_13,
  MR_Word * Dirs_14)
{
  MR_Word DirsSame_15;
  MR_Word DirsListIndep_16;
  MR_Word DirsInstall_17;
  MR_Word DirsIndep_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gs_7_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (SubdirSetting_8));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (Grade_9));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (ExtSubDir_10));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, SearchDirsSame_11, &DirsSame_15);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gs_7_p_0_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Grade_9));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (ExtSubDir_10));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), Var_20, SearchDirsIndep_12, &DirsListIndep_16);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gs_7_p_0_3));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Grade_9));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (ExtSubDir_10));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, SearchDirsInstall_13, &DirsInstall_17);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsListIndep_16, &DirsIndep_18);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsIndep_18, DirsInstall_17);
  *Dirs_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsSame_15, Var_23);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 173, &Smart_11);
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

        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_0_14, (MR_Integer) 520, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_32;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_22_22);
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
        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_22_22, (MR_Integer) 522, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_51;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_27_27);
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
          libs__globals__set_option_4_p_0((MR_Integer) 173, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_27_27, STATE_VARIABLE_Globals_15);
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
    libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_9, &STATE_VARIABLE_Globals_13_13);
  else
    STATE_VARIABLE_Globals_13_13 = STATE_VARIABLE_Globals_0_9;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 80, (MR_Integer) 79, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_13_13, &STATE_VARIABLE_Globals_18_18);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 128, (MR_Integer) 231, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_18_18, &STATE_VARIABLE_Globals_23_23);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 231, (MR_Integer) 229, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_23_23, &STATE_VARIABLE_Globals_28_28);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 230, (MR_Integer) 229, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_28_28, &STATE_VARIABLE_Globals_33_33);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 257, (MR_Integer) 336, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_38_38);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 266, (MR_Integer) 336, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_38_38, &STATE_VARIABLE_Globals_43_43);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 528, (MR_Integer) 529, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_48_48);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 534, (MR_Integer) 532, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_48_48, &STATE_VARIABLE_Globals_53_53);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 542, (MR_Integer) 541, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_53_53, &STATE_VARIABLE_Globals_58_58);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 549, (MR_Integer) 548, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_58_58, &STATE_VARIABLE_Globals_63_63);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 541, (MR_Integer) 540, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_63_63, &STATE_VARIABLE_Globals_68_68);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 548, (MR_Integer) 547, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_68_68, &STATE_VARIABLE_Globals_73_73);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 541, (MR_Integer) 18, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_73_73, &STATE_VARIABLE_Globals_78_78);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 548, (MR_Integer) 18, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_78_78, &STATE_VARIABLE_Globals_83_83);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 524, (MR_Integer) 520, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_83_83, &STATE_VARIABLE_Globals_88_88);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 524, (MR_Integer) 523, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_88_88, &STATE_VARIABLE_Globals_93_93);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 520, (MR_Integer) 522, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_93_93, &STATE_VARIABLE_Globals_98_98);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 523, (MR_Integer) 522, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_98_98, &STATE_VARIABLE_Globals_103_103);
  libs__globals__set_option_4_p_0((MR_Integer) 522, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_103_103, &STATE_VARIABLE_Globals_107_107);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 173, &Smart0_6);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 73, &Inform0_7);
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

              libs__globals__set_option_4_p_0((MR_Integer) 193, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_25_25);
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
                    libs__globals__set_option_4_p_0((MR_Integer) 174, Var_36, STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_37_37);
                  }
                  break;
                case (MR_Integer) 2:
                  libs__globals__set_option_4_p_0((MR_Integer) 174, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_37_37);
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

                        libs__globals__set_option_4_p_0((MR_Integer) 193, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_44_44);
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

                        libs__globals__set_option_4_p_0((MR_Integer) 524, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_52_52);
                        libs__globals__set_option_4_p_0((MR_Integer) 193, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_52_52, &STATE_VARIABLE_Globals_56_56);
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
    libs__globals__set_option_4_p_0((MR_Integer) 173, Var_67, STATE_VARIABLE_Globals_37_37, &STATE_VARIABLE_Globals_68_68);
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
    libs__globals__set_option_4_p_0((MR_Integer) 73, Var_70, STATE_VARIABLE_Globals_68_68, STATE_VARIABLE_Globals_20);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 336, &SourceOptionValue_40);
  switch (SourceOptionValue_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_20_20 = STATE_VARIABLE_Globals_0_15;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 339, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_20_20);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_20_20, (MR_Integer) 340, &SourceOptionValue_41);
  switch (SourceOptionValue_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_25_25 = STATE_VARIABLE_Globals_20_20;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 339, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_20_20, &STATE_VARIABLE_Globals_25_25);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_25_25, (MR_Integer) 339, &SourceOptionValue_42);
  switch (SourceOptionValue_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_30_30 = STATE_VARIABLE_Globals_25_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 337, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_25_25, &STATE_VARIABLE_Globals_30_30);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_30, (MR_Integer) 338, &SourceOptionValue_43);
  switch (SourceOptionValue_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_30_30;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 337, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_30_30, STATE_VARIABLE_Globals_16);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 339, &ProcIdStackLayout_12);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 338, &AgcStackLayout_13);
  succeeded = (ProcIdStackLayout_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (AgcStackLayout_13 == (MR_Integer) 1);
  if (succeeded)
    *OT_OptDups_9 = (MR_Integer) 1;
  else
    *OT_OptDups_9 = OT_OptDups0_8;
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 337, &BasicStackLayout_14);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 283, &RecordTermSizesAsWords_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 284, &RecordTermSizesAsCells_10);
  succeeded = (RecordTermSizesAsWords_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (RecordTermSizesAsCells_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[290])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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

      libs__globals__set_option_4_p_0((MR_Integer) 268, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_29_29);
      *AllowOptLCMCTermSize_7 = (MR_Integer) 0;
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 330, &HighLevelCode_12);
      libs__globals__set_option_4_p_0((MR_Integer) 316, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_29_29, STATE_VARIABLE_Globals_15);
      switch (HighLevelCode_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
          break;
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[292])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_25, (MR_Integer) 279, &SourceOptionValue_88);
  switch (SourceOptionValue_88) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_33_33 = STATE_VARIABLE_Globals_0_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 270, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_25, &STATE_VARIABLE_Globals_33_33);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_33_33, (MR_Integer) 270, &SourceOptionValue_89);
  switch (SourceOptionValue_89) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_33_33;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 282, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_38_38);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 266, &SourceOptionValue_90);
  switch (SourceOptionValue_90) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_38_38;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 268, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_38_38, &STATE_VARIABLE_Globals_43_43);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_43_43, (MR_Integer) 266, &SourceOptionValue_91);
  switch (SourceOptionValue_91) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_48_48 = STATE_VARIABLE_Globals_43_43;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 339, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_48_48);
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

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_48_48, (MR_Integer) 330, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_11 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_0_28;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[284])), STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_60_60);
        libs__globals__set_option_4_p_0((MR_Integer) 382, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_48_48, &STATE_VARIABLE_Globals_63_63);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_63_63, (MR_Integer) 279, &SourceOptionValue_92);
        switch (SourceOptionValue_92) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Globals_26 = STATE_VARIABLE_Globals_63_63;
            break;
          case (MR_Integer) 1:
            libs__globals__set_option_4_p_0((MR_Integer) 185, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_63_63, STATE_VARIABLE_Globals_26);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 185, &ProfOptimized_19);
        switch (ProfOptimized_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChangesProf_71_71 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChangesProf_71_71 = (MR_Integer) 1;
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 281, &LotsOfHOSpec_20);
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
  libs__globals__lookup_string_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 285, &ExpComp_21);
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
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 283, &RecordTermSizesAsWords_22);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 284, &RecordTermSizesAsCells_23);
    succeeded = (RecordTermSizesAsWords_22 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (RecordTermSizesAsCells_23 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_60_60;
    else
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[288])), STATE_VARIABLE_Specs_60_60, STATE_VARIABLE_Specs_29);
  }
}

static void MR_CALL 
libs__handle_options__maybe_update_event_set_file_name_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  MR_bool succeeded;
  MR_String EventSetFileName0_7;

  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_10, (MR_Integer) 249, &EventSetFileName0_7);
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
      libs__globals__set_option_4_p_0((MR_Integer) 249, Var_18, STATE_VARIABLE_Globals_0_10, STATE_VARIABLE_Globals_11);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_24, (MR_Integer) 258, &SourceOptionValue_94);
  switch (SourceOptionValue_94) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_31_31 = STATE_VARIABLE_Globals_0_24;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 257, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_24, &STATE_VARIABLE_Globals_31_31);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_31_31, (MR_Integer) 257, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_36_36 = STATE_VARIABLE_Globals_31_31;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 183, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_31_31, &STATE_VARIABLE_Globals_36_36);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_36_36, (MR_Integer) 183, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_41_41 = STATE_VARIABLE_Globals_36_36;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 179, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_36_36, &STATE_VARIABLE_Globals_41_41);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_41_41, (MR_Integer) 182, &SourceOptionValue_97);
  switch (SourceOptionValue_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_46_46 = STATE_VARIABLE_Globals_41_41;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 179, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_41_41, &STATE_VARIABLE_Globals_46_46);
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

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 330, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_10 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_26;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[280])), STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_55_55);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 287, &Parallel_19);
        switch (Parallel_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_55_55;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[282])), STATE_VARIABLE_Specs_55_55, STATE_VARIABLE_Specs_27);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 177, &TraceOptimized_21);
        switch (TraceOptimized_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChanges_65_65 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChanges_65_65 = (MR_Integer) 1;
            break;
        }
        libs__globals__set_option_4_p_0((MR_Integer) 340, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_69_69);
        libs__globals__set_option_4_p_0((MR_Integer) 341, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_69_69, &STATE_VARIABLE_Globals_73_73);
        libs__globals__set_option_4_p_0((MR_Integer) 388, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_73_73, &STATE_VARIABLE_Globals_77_77);
        AllowTraceTailRec_22 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_11);
        switch (AllowTraceTailRec_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__globals__set_option_4_p_0((MR_Integer) 186, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_77_77, &STATE_VARIABLE_Globals_81_81);
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
        libs__globals__set_option_4_p_0((MR_Integer) 186, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_81_81);
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
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_81_81, (MR_Integer) 303, &SourceOptionValue_98);
  switch (SourceOptionValue_98) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_25 = STATE_VARIABLE_Globals_81_81;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 305, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_81_81, STATE_VARIABLE_Globals_25);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 290, &UseMinimalModelStackCopy_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 291, &UseMinimalModelOwnStacks_10);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (UseMinimalModelOwnStacks_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[268])), STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_36_36);
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

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 330, &HighLevelCode_13);
        switch (HighLevelCode_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_47_47 = STATE_VARIABLE_Specs_36_36;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[272])), STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_47_47);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 289, &UseTrail_15);
        switch (UseTrail_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_58_58 = STATE_VARIABLE_Specs_47_47;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[275])), STATE_VARIABLE_Specs_47_47, &STATE_VARIABLE_Specs_58_58);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 287, &Parallel_17);
        switch (Parallel_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_58_58;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[278])), STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_24);
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 351, &DisablePneg_19);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 352, &DisableCut_20);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisablePneg_19 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 353, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_21, &STATE_VARIABLE_Globals_74_74);
  else
    STATE_VARIABLE_Globals_74_74 = STATE_VARIABLE_Globals_0_21;
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableCut_20 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 354, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_74_74, STATE_VARIABLE_Globals_22);
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

        libs__globals__set_option_4_p_0((MR_Integer) 338, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_26_26);
        libs__globals__set_option_4_p_0((MR_Integer) 341, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_26_26, &STATE_VARIABLE_Globals_30_30);
        libs__globals__set_option_4_p_0((MR_Integer) 388, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_30_30, &STATE_VARIABLE_Globals_34_34);
        libs__globals__set_option_4_p_0((MR_Integer) 371, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_38_38);
        libs__globals__set_option_4_p_0((MR_Integer) 372, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_38_38, STATE_VARIABLE_Globals_21);
        *OT_OptFrames_11 = (MR_Integer) 1;
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_21, (MR_Integer) 330, &HighLevelCode_13);
        libs__globals__get_target_2_p_0(*STATE_VARIABLE_Globals_21, &Target_14);
        succeeded = (HighLevelCode_13 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (Target_14 != (MR_Integer) 0);
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[246])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
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

              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 330, &HighLevelCode_106);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 371, &SemidetReclaim_17);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 372, &NondetReclaim_18);
              succeeded = (HighLevelCode_106 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (SemidetReclaim_17 != NondetReclaim_18);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[264])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
              else
                *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
              *STATE_VARIABLE_Globals_21 = STATE_VARIABLE_Globals_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Globals_63_63;

              libs__globals__set_option_4_p_0((MR_Integer) 371, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_63_63);
              libs__globals__set_option_4_p_0((MR_Integer) 372, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_63_63, STATE_VARIABLE_Globals_21);
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
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 287, &Parallel_8);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 288, &Threadscope_9);
  succeeded = (GradeSupportsParConj_7 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Threadscope_9 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[223])), STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_36_36);
  else
    STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_17;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 746, &ImplicitParallelism_11);
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
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[232])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
                break;
            }
            libs__globals__set_option_4_p_0((MR_Integer) 746, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_79_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FeedbackFile_12;

            libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 747, &FeedbackFile_12);
            succeeded = (strcmp(FeedbackFile_12, (MR_String) "") == 0);
            if (succeeded)
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[238])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
            else
              *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_36_36;
            STATE_VARIABLE_Globals_79_79 = STATE_VARIABLE_Globals_0_15;
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_79_79, (MR_Integer) 746, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_84_84 = STATE_VARIABLE_Globals_79_79;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 269, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_79_79, &STATE_VARIABLE_Globals_84_84);
      break;
  }
  switch (GradeSupportsParConj_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__set_option_4_p_0((MR_Integer) 748, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_88_88);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Globals_88_88 = STATE_VARIABLE_Globals_84_84;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_88_88, (MR_Integer) 287, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_88_88;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 562, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_88_88, STATE_VARIABLE_Globals_16);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_26, (MR_Integer) 293, &PregeneratedDist_13);
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
        libs__globals__set_option_4_p_0((MR_Integer) 306, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[1])), STATE_VARIABLE_Globals_32_32, &STATE_VARIABLE_Globals_35_35);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[2])), STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_39_39);
        libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_39_39, &STATE_VARIABLE_Globals_43_43);
        libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_47_47);
        libs__globals__set_option_4_p_0((MR_Integer) 294, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
        libs__globals__set_option_4_p_0((MR_Integer) 316, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_51_51, &STATE_VARIABLE_Globals_55_55);
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 294, (MR_Integer) 310, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_55_55, &STATE_VARIABLE_Globals_60_60);
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

        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[204]));
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 306, &NumPtagBits0_15);
        succeeded = (NumPtagBits0_15 == (MR_Integer) -1);
        if (succeeded)
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 309, &NumPtagBits_16);
        else
          NumPtagBits_16 = NumPtagBits0_15;
        {
          Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_67, 0) = ((MR_Box) (NumPtagBits_16));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 306, Var_67, STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_68_68);
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
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[208])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175])));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[205])));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
          }
          {
            NumPtagBitsSpec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NumPtagBitsSpec_17, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[173])));
            MR_hl_field(1, NumPtagBitsSpec_17, 1) = ((MR_Box) (Var_71));
          }
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), NumPtagBitsSpec_17, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_89_89);
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_68_68, (MR_Integer) 330, &HighLevelCode_18);
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

              libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_68_68, &STATE_VARIABLE_Globals_93_93);
              libs__globals__set_option_4_p_0((MR_Integer) 326, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_93_93, &STATE_VARIABLE_Globals_97_97);
              libs__globals__set_option_4_p_0((MR_Integer) 327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_97_97, &STATE_VARIABLE_Globals_101_101);
              libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_101_101, &STATE_VARIABLE_Globals_105_105);
            }
            break;
        }
        succeeded = (NumPtagBits_16 >= (MR_Integer) 2);
        if (succeeded)
          libs__globals__set_option_4_p_0((MR_Integer) 342, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_110_110);
        else
          libs__globals__set_option_4_p_0((MR_Integer) 342, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_110_110);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_110_110, (MR_Integer) 313, &ArgPackBits0_19);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_110_110, (MR_Integer) 307, &BitsPerWord_20);
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
            Var_122 = (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[210]));
            {
              Var_143 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_143, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_143, 1) = ((MR_Box) (BitsPerWord_20));
            }
            {
              Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
              MR_hl_field(1, Var_142, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
            }
            {
              Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[213])));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[212])));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15])));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
            }
            {
              Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_127, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[37])));
              MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[211])));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
            }
            {
              ArgPackBitsSpec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgPackBitsSpec_22, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[209])));
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
        libs__globals__set_option_4_p_0((MR_Integer) 313, Var_153, STATE_VARIABLE_Globals_110_110, &STATE_VARIABLE_Globals_154_154);
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

        libs__globals__set_option_4_p_0((MR_Integer) 306, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_157_157);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_157_157, &STATE_VARIABLE_Globals_160_160);
        libs__globals__set_option_4_p_0((MR_Integer) 286, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[214])), STATE_VARIABLE_Globals_160_160, &STATE_VARIABLE_Globals_163_163);
        libs__globals__set_option_4_p_0((MR_Integer) 372, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_163_163, &STATE_VARIABLE_Globals_167_167);
        libs__globals__set_option_4_p_0((MR_Integer) 371, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_167_167, &STATE_VARIABLE_Globals_171_171);
        libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_171_171, &STATE_VARIABLE_Globals_175_175);
        libs__globals__set_option_4_p_0((MR_Integer) 326, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_175_175, &STATE_VARIABLE_Globals_179_179);
        libs__globals__set_option_4_p_0((MR_Integer) 327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_179_179, &STATE_VARIABLE_Globals_183_183);
        libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_183_183, &STATE_VARIABLE_Globals_187_187);
        libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_187_187, &STATE_VARIABLE_Globals_191_191);
        libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_191_191, &STATE_VARIABLE_Globals_195_195);
        libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_195_195, &STATE_VARIABLE_Globals_199_199);
        libs__globals__set_option_4_p_0((MR_Integer) 332, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_199_199, &STATE_VARIABLE_Globals_203_203);
        libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_203_203, &STATE_VARIABLE_Globals_207_207);
        libs__globals__set_option_4_p_0((MR_Integer) 343, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_207_207, &STATE_VARIABLE_Globals_211_211);
        libs__globals__set_option_4_p_0((MR_Integer) 534, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_211_211, &STATE_VARIABLE_Globals_215_215);
        libs__globals__set_option_4_p_0((MR_Integer) 532, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_215_215, &STATE_VARIABLE_Globals_219_219);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[24]));
        libs__globals__set_option_4_p_0((MR_Integer) 633, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[215])), STATE_VARIABLE_Globals_219_219, &STATE_VARIABLE_Globals_225_225);
        libs__globals__set_option_4_p_0((MR_Integer) 342, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_225_225, &STATE_VARIABLE_Globals_231_231);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_231_231, &STATE_VARIABLE_Globals_235_235);
        libs__globals__set_option_4_p_0((MR_Integer) 316, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_235_235, &STATE_VARIABLE_Globals_239_239);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_239_239, &STATE_VARIABLE_Globals_243_243);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_154_154);
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

        libs__globals__set_option_4_p_0((MR_Integer) 306, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_157_264);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_157_264, &STATE_VARIABLE_Globals_160_266);
        libs__globals__set_option_4_p_0((MR_Integer) 286, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[214])), STATE_VARIABLE_Globals_160_266, &STATE_VARIABLE_Globals_163_269);
        libs__globals__set_option_4_p_0((MR_Integer) 372, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_163_269, &STATE_VARIABLE_Globals_167_272);
        libs__globals__set_option_4_p_0((MR_Integer) 371, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_167_272, &STATE_VARIABLE_Globals_171_275);
        libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_171_275, &STATE_VARIABLE_Globals_175_278);
        libs__globals__set_option_4_p_0((MR_Integer) 326, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_175_278, &STATE_VARIABLE_Globals_179_281);
        libs__globals__set_option_4_p_0((MR_Integer) 327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_179_281, &STATE_VARIABLE_Globals_183_284);
        libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_183_284, &STATE_VARIABLE_Globals_187_287);
        libs__globals__set_option_4_p_0((MR_Integer) 310, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_187_287, &STATE_VARIABLE_Globals_191_290);
        libs__globals__set_option_4_p_0((MR_Integer) 311, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_191_290, &STATE_VARIABLE_Globals_195_293);
        libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_195_293, &STATE_VARIABLE_Globals_199_296);
        libs__globals__set_option_4_p_0((MR_Integer) 332, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_199_296, &STATE_VARIABLE_Globals_203_299);
        libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_203_299, &STATE_VARIABLE_Globals_207_302);
        libs__globals__set_option_4_p_0((MR_Integer) 343, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_207_302, &STATE_VARIABLE_Globals_211_305);
        libs__globals__set_option_4_p_0((MR_Integer) 534, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_211_305, &STATE_VARIABLE_Globals_215_308);
        libs__globals__set_option_4_p_0((MR_Integer) 532, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_215_308, &STATE_VARIABLE_Globals_225_312);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[216]));
        libs__globals__set_option_4_p_0((MR_Integer) 342, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_225_312, &STATE_VARIABLE_Globals_231_315);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_231_315, &STATE_VARIABLE_Globals_235_318);
        libs__globals__set_option_4_p_0((MR_Integer) 316, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_235_318, &STATE_VARIABLE_Globals_239_321);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_239_321, &STATE_VARIABLE_Globals_243_324);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_243_324, &STATE_VARIABLE_Globals_154_154);
        *OT_StringBinarySwitchSize_11 = (MR_Integer) 999999;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 310, (MR_Integer) 329, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_154_154, &STATE_VARIABLE_Globals_252_252);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 330, (MR_Integer) 329, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_252_252, &STATE_VARIABLE_Globals_257_257);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_257_257, (MR_Integer) 335, &CurrentBackendForeignLanguage_23);
  if ((CurrentBackendForeignLanguage_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_261;

    {
      Var_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_261, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_261, 1) = ((MR_Box) (BackendForeignLanguages_14));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 335, Var_261, STATE_VARIABLE_Globals_257_257, STATE_VARIABLE_Globals_27);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 524, &TransOpt_8);
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
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[191])), STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_41_41);
        else
          STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_0_20;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 520, &InterModOpt_12);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 525, &InterModAnalysis_13);
  succeeded = (InterModOpt_12 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (InterModAnalysis_13 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[197])), STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_62_62);
  else
    STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_41_41;
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 145, &MaybeStandaloneInt_15);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 626, &ExtraInitFunctions_16);
  succeeded = (MaybeStandaloneInt_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExtraInitFunctions_16 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[203])), STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_21);
  else
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_62_62;
}

static void MR_CALL 
libs__handle_options__check_option_values_23_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_120,
  MR_Word * STATE_VARIABLE_OptionTable_121,
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
  MR_Word * STATE_VARIABLE_Specs_122)
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
  MR_Word STATE_VARIABLE_Specs_159_159;
  MR_Word STATE_VARIABLE_Specs_193_193;
  MR_Word STATE_VARIABLE_Specs_233_233;
  MR_Word STATE_VARIABLE_Specs_254_254;
  MR_Word STATE_VARIABLE_Specs_275_275;
  MR_Word STATE_VARIABLE_Specs_309_309;
  MR_Word STATE_VARIABLE_Specs_343_343;
  MR_Word STATE_VARIABLE_Specs_365_365;
  MR_Word STATE_VARIABLE_Specs_423_423;
  MR_Word STATE_VARIABLE_Specs_461_461;
  MR_Word STATE_VARIABLE_Specs_496_496;
  MR_Word STATE_VARIABLE_OptionTable_500_500;
  MR_Word STATE_VARIABLE_Specs_527_527;
  MR_String STATE_VARIABLE_DumpOptions_529_529;
  MR_String STATE_VARIABLE_DumpOptions_530_530;
  MR_String STATE_VARIABLE_DumpOptions_533_533;
  MR_String STATE_VARIABLE_DumpOptions_537_537;
  MR_String STATE_VARIABLE_DumpOptions_561_561;
  MR_Word Var_564;
  MR_Word STATE_VARIABLE_OptionTable_565_565;
  MR_Word STATE_VARIABLE_Specs_605_605;
  MR_Word STATE_VARIABLE_Specs_642_642;
  MR_Word STATE_VARIABLE_Specs_675_675;
  MR_Word STATE_VARIABLE_Specs_680_680;
  MR_Word STATE_VARIABLE_Specs_718_718;
  MR_Word STATE_VARIABLE_Specs_757_757;
  MR_Word STATE_VARIABLE_Specs_796_796;
  MR_Word STATE_VARIABLE_Specs_816_816;
  MR_Word STATE_VARIABLE_Specs_838_838;
  MR_Word TargetPrime_46;
  MR_Word GC_MethodPrime_52;
  MR_Integer Var_236;
  MR_Integer Var_257;
  MR_Word TermNormPrime_59;
  MR_Word Term2NormPrime_62;
  MR_Word TraceSuppressPrime_72;
  MR_Word MaybeThreadSafePrime_80;
  MR_Char Var_532;
  MR_Char Var_536;
  MR_Char Var_560;
  MR_Word C_CompilerTypePrime_87;
  MR_Word CSharp_CompilerTypePrime_91;
  MR_Word ReuseStrategyPrime_95;
  MR_Word HostEnvTypePrime_104;
  MR_Word SystemEnvTypePrime_107;
  MR_Word TargetEnvTypePrime_110;

  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 251, &TargetStr_45);
  succeeded = libs__globals__convert_target_2_p_0(TargetStr_45, &TargetPrime_46);
  if (succeeded)
  {
    *Target_25 = TargetPrime_46;
    STATE_VARIABLE_Specs_159_159 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word TargetSpec_47;
    MR_Word Var_127;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_142;
    MR_Word Var_143;

    *Target_25 = (MR_Integer) 0;
    {
      Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_131, 1) = ((MR_Box) (TargetStr_45));
    }
    {
      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
      MR_hl_field(1, Var_130, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[23])));
    }
    {
      Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_127, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
    }
    Var_143 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[26])));
    Var_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_143, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    TargetSpec_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_127, Var_142);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetSpec_47, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_159_159);
  }
  libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 307, &BitsPerWord_48);
  succeeded = (BitsPerWord_48 == (MR_Integer) 32);
  if (succeeded)
  {
    *WordSize_26 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_193_193 = STATE_VARIABLE_Specs_159_159;
  }
  else
  {
    succeeded = (BitsPerWord_48 == (MR_Integer) 64);
    if (succeeded)
    {
      *WordSize_26 = (MR_Integer) 1;
      STATE_VARIABLE_Specs_193_193 = STATE_VARIABLE_Specs_159_159;
    }
    else
    {
      MR_String BitsPerWordStr_49;
      MR_Word WordSizeSpec_50;
      MR_Word Var_163;
      MR_Word Var_164;

      *WordSize_26 = (MR_Integer) 1;
      BitsPerWordStr_49 = mercury__string__int_to_string_1_f_0(BitsPerWord_48);
      {
        Var_164 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_164, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_164, 1) = ((MR_Box) (BitsPerWordStr_49));
      }
      {
        Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_163, 0) = ((MR_Box) (Var_164));
        MR_hl_field(1, Var_163, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[39])));
      }
      {
        WordSizeSpec_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, WordSizeSpec_50, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
        MR_hl_field(1, WordSizeSpec_50, 1) = ((MR_Box) (Var_163));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), WordSizeSpec_50, STATE_VARIABLE_Specs_159_159, &STATE_VARIABLE_Specs_193_193);
    }
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 286, &GC_MethodStr_51);
  succeeded = libs__globals__convert_gc_method_2_p_0(GC_MethodStr_51, &GC_MethodPrime_52);
  if (succeeded)
  {
    *GC_Method_27 = GC_MethodPrime_52;
    STATE_VARIABLE_Specs_233_233 = STATE_VARIABLE_Specs_193_193;
  }
  else
  {
    MR_Word GCMethodSpec_53;
    MR_Word Var_195;
    MR_Word Var_198;
    MR_Word Var_199;
    MR_Word Var_210;
    MR_Word Var_211;

    *GC_Method_27 = (MR_Integer) 1;
    {
      Var_199 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_199, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_199, 1) = ((MR_Box) (GC_MethodStr_51));
    }
    {
      Var_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_198, 0) = ((MR_Box) (Var_199));
      MR_hl_field(1, Var_198, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[42])));
    }
    {
      Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_195, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_195, 1) = ((MR_Box) (Var_198));
    }
    Var_211 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[48])));
    Var_210 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_211, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    GCMethodSpec_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_195, Var_210);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), GCMethodSpec_53, STATE_VARIABLE_Specs_193_193, &STATE_VARIABLE_Specs_233_233);
  }
  libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 384, &FactTablePercentFull_54);
  succeeded = (FactTablePercentFull_54 >= (MR_Integer) 1);
  if (succeeded)
  {
    Var_236 = (MR_Integer) 100;
    succeeded = (FactTablePercentFull_54 <= Var_236);
  }
  if (succeeded)
    STATE_VARIABLE_Specs_254_254 = STATE_VARIABLE_Specs_233_233;
  else
  {
    MR_Word FactTablePercentFullSpec_55;
    MR_Word Var_239;
    MR_Word Var_240;

    {
      Var_240 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_240, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_240, 1) = ((MR_Box) (FactTablePercentFull_54));
    }
    {
      Var_239 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_239, 0) = ((MR_Box) (Var_240));
      MR_hl_field(1, Var_239, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[53])));
    }
    {
      FactTablePercentFullSpec_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FactTablePercentFullSpec_55, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, FactTablePercentFullSpec_55, 1) = ((MR_Box) (Var_239));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), FactTablePercentFullSpec_55, STATE_VARIABLE_Specs_233_233, &STATE_VARIABLE_Specs_254_254);
  }
  libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 56, &IncompleteSwitchThreshold_56);
  succeeded = (IncompleteSwitchThreshold_56 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_257 = (MR_Integer) 100;
    succeeded = (IncompleteSwitchThreshold_56 <= Var_257);
  }
  if (succeeded)
    STATE_VARIABLE_Specs_275_275 = STATE_VARIABLE_Specs_254_254;
  else
  {
    MR_Word IncompleteSwitchThresholdSpec_57;
    MR_Word Var_260;
    MR_Word Var_261;

    {
      Var_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_261, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_261, 1) = ((MR_Box) (IncompleteSwitchThreshold_56));
    }
    {
      Var_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_260, 0) = ((MR_Box) (Var_261));
      MR_hl_field(1, Var_260, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[58])));
    }
    {
      IncompleteSwitchThresholdSpec_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, IncompleteSwitchThresholdSpec_57, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, IncompleteSwitchThresholdSpec_57, 1) = ((MR_Box) (Var_260));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), IncompleteSwitchThresholdSpec_57, STATE_VARIABLE_Specs_254_254, &STATE_VARIABLE_Specs_275_275);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 544, &TermNormStr_58);
  succeeded = libs__globals__convert_termination_norm_2_p_0(TermNormStr_58, &TermNormPrime_59);
  if (succeeded)
  {
    *TermNorm_28 = TermNormPrime_59;
    STATE_VARIABLE_Specs_309_309 = STATE_VARIABLE_Specs_275_275;
  }
  else
  {
    MR_Word TermNormSpec_60;
    MR_Word Var_277;
    MR_Word Var_280;
    MR_Word Var_281;
    MR_Word Var_292;
    MR_Word Var_293;

    *TermNorm_28 = (MR_Integer) 0;
    {
      Var_281 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_281, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_281, 1) = ((MR_Box) (TermNormStr_58));
    }
    {
      Var_280 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_280, 0) = ((MR_Box) (Var_281));
      MR_hl_field(1, Var_280, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[61])));
    }
    {
      Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_277, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_277, 1) = ((MR_Box) (Var_280));
    }
    Var_293 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[64])));
    Var_292 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_293, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    TermNormSpec_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_277, Var_292);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TermNormSpec_60, STATE_VARIABLE_Specs_275_275, &STATE_VARIABLE_Specs_309_309);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 550, &Term2NormStr_61);
  succeeded = libs__globals__convert_termination_norm_2_p_0(Term2NormStr_61, &Term2NormPrime_62);
  if (succeeded)
  {
    *Term2Norm_29 = Term2NormPrime_62;
    STATE_VARIABLE_Specs_343_343 = STATE_VARIABLE_Specs_309_309;
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
      MR_hl_field(1, Var_314, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[67])));
    }
    {
      Var_311 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_311, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_311, 1) = ((MR_Box) (Var_314));
    }
    Var_327 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[64])));
    Var_326 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    Term2NormSpec_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_311, Var_326);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Term2NormSpec_63, STATE_VARIABLE_Specs_309_309, &STATE_VARIABLE_Specs_343_343);
  }
  libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 188, &ForceDisableTracing_64);
  switch (ForceDisableTracing_64) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Trace_65;
        MR_Word ExecTrace_66;
        MR_Word DeclDebug_67;
        MR_Word MaybeTraceLevel_68;

        libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 176, &Trace_65);
        libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 257, &ExecTrace_66);
        libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 258, &DeclDebug_67);
        succeeded = libs__trace_params__convert_trace_level_4_p_0(Trace_65, ExecTrace_66, DeclDebug_67, &MaybeTraceLevel_68);
        if (succeeded)
          if ((MaybeTraceLevel_68 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word InconsistentTraceLevelSpec_69;
            MR_Word Var_350;
            MR_Word Var_351;

            *TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
            {
              Var_351 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_351, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_351, 1) = ((MR_Box) (Trace_65));
            }
            {
              Var_350 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_350, 0) = ((MR_Box) (Var_351));
              MR_hl_field(1, Var_350, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[74])));
            }
            {
              InconsistentTraceLevelSpec_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, InconsistentTraceLevelSpec_69, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[68])));
              MR_hl_field(1, InconsistentTraceLevelSpec_69, 1) = ((MR_Box) (Var_350));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InconsistentTraceLevelSpec_69, STATE_VARIABLE_Specs_343_343, &STATE_VARIABLE_Specs_365_365);
          }
          else
          {
            *TraceLevel_30 = ((MR_Word) ((MR_hl_field(1, MaybeTraceLevel_68, (MR_Integer) 0))));
            STATE_VARIABLE_Specs_365_365 = STATE_VARIABLE_Specs_343_343;
          }
        else
        {
          MR_Word BadTraceLevelSpec_70;
          MR_Word Var_366;
          MR_Word Var_369;
          MR_Word Var_370;
          MR_Word Var_381;
          MR_Word Var_382;

          *TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
          {
            Var_370 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_370, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_370, 1) = ((MR_Box) (Trace_65));
          }
          {
            Var_369 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_369, 0) = ((MR_Box) (Var_370));
            MR_hl_field(1, Var_369, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[77])));
          }
          {
            Var_366 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_366, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
            MR_hl_field(1, Var_366, 1) = ((MR_Box) (Var_369));
          }
          Var_382 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[83])));
          Var_381 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_382, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
          BadTraceLevelSpec_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_366, Var_381);
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), BadTraceLevelSpec_70, STATE_VARIABLE_Specs_343_343, &STATE_VARIABLE_Specs_365_365);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *TraceLevel_30 = libs__trace_params__trace_level_none_0_f_0();
        STATE_VARIABLE_Specs_365_365 = STATE_VARIABLE_Specs_343_343;
      }
      break;
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 187, &SuppressStr_71);
  succeeded = libs__trace_params__convert_trace_suppress_2_p_0(SuppressStr_71, &TraceSuppressPrime_72);
  if (succeeded)
  {
    *TraceSuppress_31 = TraceSuppressPrime_72;
    STATE_VARIABLE_Specs_423_423 = STATE_VARIABLE_Specs_365_365;
  }
  else
  {
    MR_Word TraceSuppressSpec_73;
    MR_Word Var_408;
    MR_Word Var_409;

    *TraceSuppress_31 = libs__trace_params__default_trace_suppress_0_f_0();
    {
      Var_409 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_409, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_409, 1) = ((MR_Box) (SuppressStr_71));
    }
    {
      Var_408 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_408, 0) = ((MR_Box) (Var_409));
      MR_hl_field(1, Var_408, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[86])));
    }
    {
      TraceSuppressSpec_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TraceSuppressSpec_73, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, TraceSuppressSpec_73, 1) = ((MR_Box) (Var_408));
    }
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TraceSuppressSpec_73, STATE_VARIABLE_Specs_365_365, &STATE_VARIABLE_Specs_423_423);
  }
  libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 192, &ForceDisableSSDB_74);
  switch (ForceDisableSSDB_74) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String SSTrace_75;
        MR_Word SSDB_76;
        MR_Word SSTL_77;

        libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 304, &SSTrace_75);
        libs__handle_options__raw_lookup_bool_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 303, &SSDB_76);
        succeeded = libs__globals__convert_ssdb_trace_level_3_p_0(SSTrace_75, SSDB_76, &SSTL_77);
        if (succeeded)
        {
          *SSTraceLevel_32 = SSTL_77;
          STATE_VARIABLE_Specs_461_461 = STATE_VARIABLE_Specs_423_423;
        }
        else
        {
          MR_Word SSDBSpec_78;
          MR_Word Var_427;
          MR_Word Var_430;
          MR_Word Var_431;
          MR_Word Var_442;
          MR_Word Var_443;

          *SSTraceLevel_32 = (MR_Integer) 0;
          {
            Var_431 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_431, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_431, 1) = ((MR_Box) (SSTrace_75));
          }
          {
            Var_430 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_430, 0) = ((MR_Box) (Var_431));
            MR_hl_field(1, Var_430, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[89])));
          }
          {
            Var_427 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_427, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
            MR_hl_field(1, Var_427, 1) = ((MR_Box) (Var_430));
          }
          Var_443 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[93])));
          Var_442 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_443, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
          SSDBSpec_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_427, Var_442);
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SSDBSpec_78, STATE_VARIABLE_Specs_423_423, &STATE_VARIABLE_Specs_461_461);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *SSTraceLevel_32 = (MR_Integer) 0;
        STATE_VARIABLE_Specs_461_461 = STATE_VARIABLE_Specs_423_423;
      }
      break;
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 296, &MaybeThreadSafeStr_79);
  succeeded = libs__globals__convert_maybe_thread_safe_2_p_0(MaybeThreadSafeStr_79, &MaybeThreadSafePrime_80);
  if (succeeded)
  {
    *MaybeThreadSafe_33 = MaybeThreadSafePrime_80;
    STATE_VARIABLE_Specs_496_496 = STATE_VARIABLE_Specs_461_461;
  }
  else
  {
    MR_Word MTSSpec_81;
    MR_Word Var_463;
    MR_Word Var_466;
    MR_Word Var_467;
    MR_Word Var_481;
    MR_Word Var_482;

    *MaybeThreadSafe_33 = (MR_Integer) 0;
    {
      Var_467 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_467, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_467, 1) = ((MR_Box) (MaybeThreadSafeStr_79));
    }
    {
      Var_466 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_466, 0) = ((MR_Box) (Var_467));
      MR_hl_field(1, Var_466, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[99])));
    }
    {
      Var_463 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_463, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_463, 1) = ((MR_Box) (Var_466));
    }
    Var_482 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[101])));
    Var_481 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_482, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    MTSSpec_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_463, Var_481);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), MTSSpec_81, STATE_VARIABLE_Specs_461_461, &STATE_VARIABLE_Specs_496_496);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_120, (MR_Integer) 219, &DumpAlias_82);
  succeeded = (strcmp(DumpAlias_82, (MR_String) "") == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_527_527 = STATE_VARIABLE_Specs_496_496;
    STATE_VARIABLE_OptionTable_500_500 = STATE_VARIABLE_OptionTable_0_120;
  }
  else
  {
    MR_String AliasDumpOptions_83;

    succeeded = libs__handle_options__convert_dump_alias_2_p_0(DumpAlias_82, &AliasDumpOptions_83);
    if (succeeded)
    {
      MR_Word Var_499;

      {
        Var_499 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_499, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_499, 1) = ((MR_Box) (AliasDumpOptions_83));
      }
      mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 220)), ((MR_Box) (Var_499)), STATE_VARIABLE_OptionTable_0_120, &STATE_VARIABLE_OptionTable_500_500);
      STATE_VARIABLE_Specs_527_527 = STATE_VARIABLE_Specs_496_496;
    }
    else
    {
      MR_Word DumpAliasSpec_84;
      MR_Word Var_503;
      MR_Word Var_504;

      {
        Var_504 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_504, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_504, 1) = ((MR_Box) (DumpAlias_82));
      }
      {
        Var_503 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_503, 0) = ((MR_Box) (Var_504));
        MR_hl_field(1, Var_503, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[110])));
      }
      {
        DumpAliasSpec_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DumpAliasSpec_84, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
        MR_hl_field(1, DumpAliasSpec_84, 1) = ((MR_Box) (Var_503));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), DumpAliasSpec_84, STATE_VARIABLE_Specs_496_496, &STATE_VARIABLE_Specs_527_527);
      STATE_VARIABLE_OptionTable_500_500 = STATE_VARIABLE_OptionTable_0_120;
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), STATE_VARIABLE_OptionTable_500_500, ((MR_Box) ((MR_Integer) 220)), &STATE_VARIABLE_DumpOptions_529_529);
  succeeded = (strcmp(STATE_VARIABLE_DumpOptions_529_529, (MR_String) "") == 0);
  if (succeeded)
    STATE_VARIABLE_DumpOptions_530_530 = (MR_String) "x";
  else
    STATE_VARIABLE_DumpOptions_530_530 = STATE_VARIABLE_DumpOptions_529_529;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_530_530, (MR_Char) 121);
  if (succeeded)
  {
    Var_532 = (MR_Char) 97;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_530_530, Var_532);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_533_533 = mercury__string__f_43_43_2_f_0((MR_String) "a", STATE_VARIABLE_DumpOptions_530_530);
  else
    STATE_VARIABLE_DumpOptions_533_533 = STATE_VARIABLE_DumpOptions_530_530;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, (MR_Char) 97);
  if (succeeded)
  {
    Var_536 = (MR_Char) 117;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_533_533, Var_536);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_537_537 = mercury__string__f_43_43_2_f_0((MR_String) "u", STATE_VARIABLE_DumpOptions_533_533);
  else
    STATE_VARIABLE_DumpOptions_537_537 = STATE_VARIABLE_DumpOptions_533_533;
  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 65);
  if (!(succeeded))
  {
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 66);
    if (!(succeeded))
    {
      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 68);
      if (!(succeeded))
      {
        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 71);
        if (!(succeeded))
        {
          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 80);
          if (!(succeeded))
          {
            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 82);
            if (!(succeeded))
            {
              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 83);
              if (!(succeeded))
              {
                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 98);
                if (!(succeeded))
                {
                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 99);
                  if (!(succeeded))
                  {
                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 100);
                    if (!(succeeded))
                    {
                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 102);
                      if (!(succeeded))
                      {
                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 103);
                        if (!(succeeded))
                        {
                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 105);
                          if (!(succeeded))
                          {
                            succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 108);
                            if (!(succeeded))
                            {
                              succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 109);
                              if (!(succeeded))
                              {
                                succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 110);
                                if (!(succeeded))
                                {
                                  succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 112);
                                  if (!(succeeded))
                                  {
                                    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 115);
                                    if (!(succeeded))
                                    {
                                      succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 116);
                                      if (!(succeeded))
                                      {
                                        succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 117);
                                        if (!(succeeded))
                                          succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, (MR_Char) 122);
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
    Var_560 = (MR_Char) 120;
    succeeded = mercury__string__contains_char_2_p_0(STATE_VARIABLE_DumpOptions_537_537, Var_560);
    succeeded = !(succeeded);
  }
  if (succeeded)
    STATE_VARIABLE_DumpOptions_561_561 = mercury__string__f_43_43_2_f_0((MR_String) "x", STATE_VARIABLE_DumpOptions_537_537);
  else
    STATE_VARIABLE_DumpOptions_561_561 = STATE_VARIABLE_DumpOptions_537_537;
  {
    Var_564 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_564, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_564, 1) = ((MR_Box) (STATE_VARIABLE_DumpOptions_561_561));
  }
  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 220)), ((MR_Box) (Var_564)), STATE_VARIABLE_OptionTable_500_500, &STATE_VARIABLE_OptionTable_565_565);
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 582, &C_CompilerTypeStr_86);
  succeeded = libs__globals__convert_c_compiler_type_2_p_0(C_CompilerTypeStr_86, &C_CompilerTypePrime_87);
  if (succeeded)
  {
    *C_CompilerType_34 = C_CompilerTypePrime_87;
    STATE_VARIABLE_Specs_605_605 = STATE_VARIABLE_Specs_527_527;
  }
  else
  {
    MR_Word CCTpec_89;
    MR_Word Var_577;
    MR_Word Var_580;
    MR_Word Var_581;
    MR_Word Var_595;
    MR_Word Var_596;

    *C_CompilerType_34 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_581 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_581, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_581, 1) = ((MR_Box) (C_CompilerTypeStr_86));
    }
    {
      Var_580 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_580, 0) = ((MR_Box) (Var_581));
      MR_hl_field(1, Var_580, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[118])));
    }
    {
      Var_577 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_577, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_577, 1) = ((MR_Box) (Var_580));
    }
    Var_596 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[115])));
    Var_595 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_596, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    CCTpec_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_577, Var_595);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CCTpec_89, STATE_VARIABLE_Specs_527_527, &STATE_VARIABLE_Specs_605_605);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 583, &CSharp_CompilerTypeStr_90);
  succeeded = libs__globals__convert_csharp_compiler_type_2_p_0(CSharp_CompilerTypeStr_90, &CSharp_CompilerTypePrime_91);
  if (succeeded)
  {
    *CSharp_CompilerType_35 = CSharp_CompilerTypePrime_91;
    STATE_VARIABLE_Specs_642_642 = STATE_VARIABLE_Specs_605_605;
  }
  else
  {
    MR_Word CSCSpec_92;
    MR_Word Var_607;
    MR_Word Var_610;
    MR_Word Var_611;
    MR_Word Var_625;
    MR_Word Var_626;

    *CSharp_CompilerType_35 = (MR_Integer) 2;
    {
      Var_611 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_611, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_611, 1) = ((MR_Box) (CSharp_CompilerTypeStr_90));
    }
    {
      Var_610 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_610, 0) = ((MR_Box) (Var_611));
      MR_hl_field(1, Var_610, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[121])));
    }
    {
      Var_607 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_607, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_607, 1) = ((MR_Box) (Var_610));
    }
    Var_626 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[123])));
    Var_625 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_626, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    CSCSpec_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_607, Var_625);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), CSCSpec_92, STATE_VARIABLE_Specs_605_605, &STATE_VARIABLE_Specs_642_642);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 535, &ReuseConstraintStr_93);
  libs__handle_options__raw_lookup_int_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 536, &ReuseConstraintArgNum_94);
  succeeded = libs__globals__convert_reuse_strategy_3_p_0(ReuseConstraintStr_93, ReuseConstraintArgNum_94, &ReuseStrategyPrime_95);
  if (succeeded)
  {
    *ReuseStrategy_36 = ReuseStrategyPrime_95;
    STATE_VARIABLE_Specs_675_675 = STATE_VARIABLE_Specs_642_642;
  }
  else
  {
    MR_Word ReuseConstrSpec_96;
    MR_Word Var_645;
    MR_Word Var_648;
    MR_Word Var_649;
    MR_Word Var_660;
    MR_Word Var_661;

    *ReuseStrategy_36 = (MR_Word) ((MR_Unsigned) 0U);
    {
      Var_649 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_649, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_649, 1) = ((MR_Box) (ReuseConstraintStr_93));
    }
    {
      Var_648 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_648, 0) = ((MR_Box) (Var_649));
      MR_hl_field(1, Var_648, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[126])));
    }
    {
      Var_645 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_645, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_645, 1) = ((MR_Box) (Var_648));
    }
    Var_661 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[128])));
    Var_660 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_661, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    ReuseConstrSpec_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_645, Var_660);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ReuseConstrSpec_96, STATE_VARIABLE_Specs_642_642, &STATE_VARIABLE_Specs_675_675);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 747, &FeedbackFile_97);
  succeeded = (strcmp(FeedbackFile_97, (MR_String) "") == 0);
  if (succeeded)
  {
    *MaybeFeedbackInfo_37 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Specs_680_680 = STATE_VARIABLE_Specs_675_675;
  }
  else
  {
    MR_Word FeedbackReadResult_99;

    mdbcomp__feedback__read_feedback_file_5_p_0(FeedbackFile_97, (MR_Word) ((MR_Unsigned) 0U), &FeedbackReadResult_99);
    if (((MR_tag((MR_Word) FeedbackReadResult_99)) == (MR_Integer) 1))
    {
      MR_Word Error_101 = ((MR_Word) ((MR_hl_field(1, FeedbackReadResult_99, (MR_Integer) 0))));
      MR_String ErrorMessage_102;
      MR_Word Var_679;
      MR_Word Var_681;

      mdbcomp__feedback__feedback_read_error_message_string_3_p_0(FeedbackFile_97, Error_101, &ErrorMessage_102);
      {
        Var_681 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_681, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_681, 1) = ((MR_Box) (ErrorMessage_102));
      }
      {
        Var_679 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_679, 0) = ((MR_Box) (Var_681));
        MR_hl_field(1, Var_679, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), Var_679, STATE_VARIABLE_Specs_675_675, &STATE_VARIABLE_Specs_680_680);
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
      STATE_VARIABLE_Specs_680_680 = STATE_VARIABLE_Specs_675_675;
    }
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 722, &HostEnvTypeStr_103);
  succeeded = libs__globals__convert_env_type_2_p_0(HostEnvTypeStr_103, &HostEnvTypePrime_104);
  if (succeeded)
  {
    *HostEnvType_38 = HostEnvTypePrime_104;
    STATE_VARIABLE_Specs_718_718 = STATE_VARIABLE_Specs_680_680;
  }
  else
  {
    MR_Word HostEnvSpec_105;
    MR_Word Var_684;
    MR_Word Var_687;
    MR_Word Var_688;
    MR_Word Var_699;
    MR_Word Var_700;

    *HostEnvType_38 = (MR_Integer) 0;
    {
      Var_688 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_688, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_688, 1) = ((MR_Box) (HostEnvTypeStr_103));
    }
    {
      Var_687 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_687, 0) = ((MR_Box) (Var_688));
      MR_hl_field(1, Var_687, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[131])));
    }
    {
      Var_684 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_684, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_684, 1) = ((MR_Box) (Var_687));
    }
    Var_700 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[135])));
    Var_699 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_700, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    HostEnvSpec_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_684, Var_699);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), HostEnvSpec_105, STATE_VARIABLE_Specs_680_680, &STATE_VARIABLE_Specs_718_718);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 723, &SystemEnvTypeStr_106);
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
    STATE_VARIABLE_Specs_757_757 = STATE_VARIABLE_Specs_718_718;
  }
  else
  {
    MR_Word SystemEnvSpec_108;
    MR_Word Var_720;
    MR_Word Var_723;
    MR_Word Var_724;
    MR_Word Var_738;
    MR_Word Var_739;

    *SystemEnvType_39 = (MR_Integer) 0;
    {
      Var_724 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_724, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_724, 1) = ((MR_Box) (SystemEnvTypeStr_106));
    }
    {
      Var_723 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_723, 0) = ((MR_Box) (Var_724));
      MR_hl_field(1, Var_723, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[138])));
    }
    {
      Var_720 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_720, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_720, 1) = ((MR_Box) (Var_723));
    }
    Var_739 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[135])));
    Var_738 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_739, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    SystemEnvSpec_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_720, Var_738);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), SystemEnvSpec_108, STATE_VARIABLE_Specs_718_718, &STATE_VARIABLE_Specs_757_757);
  }
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 724, &TargetEnvTypeStr_109);
  succeeded = libs__globals__convert_env_type_2_p_0(TargetEnvTypeStr_109, &TargetEnvTypePrime_110);
  if (succeeded)
  {
    *TargetEnvType_40 = TargetEnvTypePrime_110;
    STATE_VARIABLE_Specs_796_796 = STATE_VARIABLE_Specs_757_757;
  }
  else
  {
    MR_Word TargetEnvTypeSpec_111;
    MR_Word Var_759;
    MR_Word Var_762;
    MR_Word Var_763;
    MR_Word Var_777;
    MR_Word Var_778;

    *TargetEnvType_40 = (MR_Integer) 0;
    {
      Var_763 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_763, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_763, 1) = ((MR_Box) (TargetEnvTypeStr_109));
    }
    {
      Var_762 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_762, 0) = ((MR_Box) (Var_763));
      MR_hl_field(1, Var_762, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[141])));
    }
    {
      Var_759 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_759, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
      MR_hl_field(1, Var_759, 1) = ((MR_Box) (Var_762));
    }
    Var_778 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[135])));
    Var_777 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_778, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
    TargetEnvTypeSpec_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_759, Var_777);
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), TargetEnvTypeSpec_111, STATE_VARIABLE_Specs_757_757, &STATE_VARIABLE_Specs_796_796);
  }
  libs__handle_options__raw_lookup_accumulating_option_3_p_0(STATE_VARIABLE_OptionTable_565_565, (MR_Integer) 90, &LimitErrorContextsOptionStrs_112);
  libs__globals__convert_limit_error_contexts_3_p_0(LimitErrorContextsOptionStrs_112, &BadLimitErrorContextsOptions_113, LimitErrorContextsMap_41);
  if ((BadLimitErrorContextsOptions_113 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_816_816 = STATE_VARIABLE_Specs_796_796;
  else
  {
    MR_Word Var_861 = ((MR_Word) ((MR_hl_field(1, BadLimitErrorContextsOptions_113, (MR_Integer) 1))));
    MR_String Var_862 = ((MR_String) ((MR_hl_field(1, BadLimitErrorContextsOptions_113, (MR_Integer) 0))));

    if ((Var_861 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word LECSpec_115;
      MR_Word Var_801;
      MR_Word Var_802;

      {
        Var_802 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_802, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_802, 1) = ((MR_Box) (Var_862));
      }
      {
        Var_801 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_801, 0) = ((MR_Box) (Var_802));
        MR_hl_field(1, Var_801, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[144])));
      }
      {
        LECSpec_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LECSpec_115, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
        MR_hl_field(1, LECSpec_115, 1) = ((MR_Box) (Var_801));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_115, STATE_VARIABLE_Specs_796_796, &STATE_VARIABLE_Specs_816_816);
    }
    else
    {
      MR_Word BadPieces_119;
      MR_Word Var_823;
      MR_Word LECSpec_842;

      BadPieces_119 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "or", BadLimitErrorContextsOptions_113);
      Var_823 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadPieces_119, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[144])));
      LECSpec_842 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[146])), Var_823);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), LECSpec_842, STATE_VARIABLE_Specs_796_796, &STATE_VARIABLE_Specs_816_816);
    }
  }
  libs__handle_options__check_linked_target_extensions_4_p_0(STATE_VARIABLE_OptionTable_565_565, LinkExtMap_42, STATE_VARIABLE_Specs_816_816, &STATE_VARIABLE_Specs_838_838);
  libs__handle_options__check_color_option_values_6_p_0(STATE_VARIABLE_OptionTable_565_565, STATE_VARIABLE_OptionTable_121, STATE_VARIABLE_Specs_838_838, STATE_VARIABLE_Specs_122);
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
libs__handle_options__check_color_option_values_6_p_0(
  MR_Word STATE_VARIABLE_OptionTable_0_17,
  MR_Word * STATE_VARIABLE_OptionTable_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_bool succeeded;
  MR_String ColorScheme_10;
  MR_String SetBy_11;
  MR_Word MaybeConvertColorSpecs_14;
  MR_Word STATE_VARIABLE_Specs_54_54;
  MR_Word Source_12;

  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_17, (MR_Integer) 99, &ColorScheme_10);
  libs__handle_options__raw_lookup_string_option_3_p_0(STATE_VARIABLE_OptionTable_0_17, (MR_Integer) 98, &SetBy_11);
  if ((strcmp(SetBy_11, (MR_String) "envvar") == 0))
  {
    Source_12 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[171]));
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(SetBy_11, (MR_String) "option") == 0))
  {
    Source_12 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[172]));
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(SetBy_11, (MR_String) "default") == 0))
  {
    Source_12 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[165]));
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    MR_Word ColorSchemeSpecs_13;

    libs__globals__record_color_scheme_in_options_7_p_0(Source_12, ColorScheme_10, &ColorSchemeSpecs_13, STATE_VARIABLE_OptionTable_0_17, STATE_VARIABLE_OptionTable_18);
    STATE_VARIABLE_Specs_54_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ColorSchemeSpecs_13, STATE_VARIABLE_Specs_0_19);
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.handle_options.check_color_option_values\'/6", (MR_String) "unexpected value in color_scheme_set_by option");
      return;
    }
  MaybeConvertColorSpecs_14 = libs__globals__convert_color_spec_options_1_f_0(*STATE_VARIABLE_OptionTable_18);
  if (((MR_tag((MR_Word) MaybeConvertColorSpecs_14)) == (MR_Integer) 0))
  {
    MR_Word ConvertColorSpecs_16 = ((MR_Word) ((MR_hl_field(0, MaybeConvertColorSpecs_14, (MR_Integer) 0))));

    *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ConvertColorSpecs_16, STATE_VARIABLE_Specs_54_54);
  }
  else
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_54_54;
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
  MR_Word STATE_VARIABLE_LinkExtMap_40_40;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word STATE_VARIABLE_LinkExtMap_44_44;
  MR_Word STATE_VARIABLE_Specs_45_45;
  MR_Word STATE_VARIABLE_LinkExtMap_48_48;
  MR_Word STATE_VARIABLE_Specs_49_49;
  MR_Word STATE_VARIABLE_LinkExtMap_52_52;
  MR_Word STATE_VARIABLE_Specs_53_53;
  MR_Word STATE_VARIABLE_LinkExtMap_56_56;
  MR_Word STATE_VARIABLE_Specs_57_57;
  MR_Word STATE_VARIABLE_LinkExtMap_60_60;
  MR_Word STATE_VARIABLE_Specs_61_61;
  MR_Word STATE_VARIABLE_LinkExtMap_64_64;
  MR_Word STATE_VARIABLE_Specs_65_65;
  MR_String NoDotExt_78;

  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), &STATE_VARIABLE_LinkExtMap_22_22);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 580, &ObjExt_8);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 581, &PicObjExt_9);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 633, &ExecExt_10);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 632, &LibExt_11);
  libs__handle_options__raw_lookup_string_option_3_p_0(OptionTable_5, (MR_Integer) 631, &SharedLibExt_12);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), ((MR_Box) ((MR_String) ".install")), ((MR_Box) (&libs__handle_options_scalar_common_1[147])), STATE_VARIABLE_LinkExtMap_22_22, &STATE_VARIABLE_LinkExtMap_30_30);
  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_linked_target_ext_info_0), ((MR_Box) ((MR_String) ".install_gs_gas")), ((MR_Box) (&libs__handle_options_scalar_common_1[148])), STATE_VARIABLE_LinkExtMap_30_30, &STATE_VARIABLE_LinkExtMap_35_35);
  libs__handle_options__record_linked_target_extension_7_p_0(ObjExt_8, (MR_String) "the --object-file-extension option", (MR_Integer) 0, STATE_VARIABLE_LinkExtMap_35_35, &STATE_VARIABLE_LinkExtMap_40_40, STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_41_41);
  succeeded = (strcmp(ObjExt_8, PicObjExt_9) == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_41_41;
    STATE_VARIABLE_LinkExtMap_44_44 = STATE_VARIABLE_LinkExtMap_40_40;
  }
  else
    libs__handle_options__record_linked_target_extension_7_p_0(PicObjExt_9, (MR_String) "the --pic-object-file-extension", (MR_Integer) 1, STATE_VARIABLE_LinkExtMap_40_40, &STATE_VARIABLE_LinkExtMap_44_44, STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_45_45);
  libs__handle_options__record_linked_target_extension_7_p_0(ExecExt_10, (MR_String) "the --executable-file-extension option", (MR_Integer) 4, STATE_VARIABLE_LinkExtMap_44_44, &STATE_VARIABLE_LinkExtMap_48_48, STATE_VARIABLE_Specs_45_45, &STATE_VARIABLE_Specs_49_49);
  libs__handle_options__record_linked_target_extension_7_p_0(LibExt_11, (MR_String) "the --library-extension option", (MR_Integer) 5, STATE_VARIABLE_LinkExtMap_48_48, &STATE_VARIABLE_LinkExtMap_52_52, STATE_VARIABLE_Specs_49_49, &STATE_VARIABLE_Specs_53_53);
  succeeded = (strcmp(LibExt_11, SharedLibExt_12) == 0);
  if (succeeded)
  {
    STATE_VARIABLE_Specs_57_57 = STATE_VARIABLE_Specs_53_53;
    STATE_VARIABLE_LinkExtMap_56_56 = STATE_VARIABLE_LinkExtMap_52_52;
  }
  else
    libs__handle_options__record_linked_target_extension_7_p_0(SharedLibExt_12, (MR_String) "the --shared-library-extension option", (MR_Integer) 6, STATE_VARIABLE_LinkExtMap_52_52, &STATE_VARIABLE_LinkExtMap_56_56, STATE_VARIABLE_Specs_53_53, &STATE_VARIABLE_Specs_57_57);
  AllObjExtA_13 = mercury__string__f_43_43_2_f_0(ObjExt_8, (MR_String) "s");
  libs__handle_options__record_linked_target_extension_7_p_0(AllObjExtA_13, (MR_String) "the build-all version of the --object-file-extension option", (MR_Integer) 2, STATE_VARIABLE_LinkExtMap_56_56, &STATE_VARIABLE_LinkExtMap_60_60, STATE_VARIABLE_Specs_57_57, &STATE_VARIABLE_Specs_61_61);
  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) ".", ObjExt_8, &NoDotExt_78);
  if (succeeded)
  {
    MR_String AllObjExtB_15;
    MR_String Var_83;

    Var_83 = mercury__string__f_43_43_2_f_0(NoDotExt_78, (MR_String) "s");
    AllObjExtB_15 = mercury__string__f_43_43_2_f_0((MR_String) ".all_", Var_83);
    libs__handle_options__record_linked_target_extension_7_p_0(AllObjExtB_15, (MR_String) "the build-all version of the --object-file-extension option", (MR_Integer) 2, STATE_VARIABLE_LinkExtMap_60_60, &STATE_VARIABLE_LinkExtMap_64_64, STATE_VARIABLE_Specs_61_61, &STATE_VARIABLE_Specs_65_65);
  }
  else
  {
    STATE_VARIABLE_LinkExtMap_64_64 = STATE_VARIABLE_LinkExtMap_60_60;
    STATE_VARIABLE_Specs_65_65 = STATE_VARIABLE_Specs_61_61;
  }
  succeeded = (strcmp(ObjExt_8, PicObjExt_9) == 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_65_65;
    *STATE_VARIABLE_LinkExtMap_19 = STATE_VARIABLE_LinkExtMap_64_64;
  }
  else
  {
    MR_String AllPicObjExtA_16;
    MR_Word STATE_VARIABLE_LinkExtMap_68_68;
    MR_Word STATE_VARIABLE_Specs_69_69;
    MR_String NoDotExt_85;

    AllPicObjExtA_16 = mercury__string__f_43_43_2_f_0(PicObjExt_9, (MR_String) "s");
    libs__handle_options__record_linked_target_extension_7_p_0(AllPicObjExtA_16, (MR_String) "the build-all version of the --pic-object-file-extension option", (MR_Integer) 3, STATE_VARIABLE_LinkExtMap_64_64, &STATE_VARIABLE_LinkExtMap_68_68, STATE_VARIABLE_Specs_65_65, &STATE_VARIABLE_Specs_69_69);
    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) ".", PicObjExt_9, &NoDotExt_85);
    if (succeeded)
    {
      MR_String AllPicObjExtB_18;
      MR_String Var_90;

      Var_90 = mercury__string__f_43_43_2_f_0(NoDotExt_85, (MR_String) "s");
      AllPicObjExtB_18 = mercury__string__f_43_43_2_f_0((MR_String) ".all_", Var_90);
      libs__handle_options__record_linked_target_extension_7_p_0(AllPicObjExtB_18, (MR_String) "the build-all version of the --pic-object-file-extension option", (MR_Integer) 3, STATE_VARIABLE_LinkExtMap_68_68, STATE_VARIABLE_LinkExtMap_19, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_21);
    }
    else
    {
      *STATE_VARIABLE_LinkExtMap_19 = STATE_VARIABLE_LinkExtMap_68_68;
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_69_69;
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
    MR_Word OldLinkedTargetKind_17 = ((MR_Unsigned) ((MR_hl_field(0, OldOptionInfo_15, (MR_Integer) 1))) & (MR_Integer) 15);

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
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[156])));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[150])));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[149])));
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
          MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
        }
        {
          Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[159])));
          MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[158])));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
        }
        {
          Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[157])));
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
	libs__handle_options__user_init_pred_114_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__handle_options__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.handle_options.
