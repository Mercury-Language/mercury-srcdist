/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2025-06-13
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
#include "libs.check_libgrades.mih"
#include "libs.check_options.mih"
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
libs__handle_options__IntroducedFrom__func__handle_directory_options__2520__1_1_f_0(
  MR_String LambdaHeadVar__1_285);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2516__1_2_f_0(
  MR_Word ToGradeSubdir_40,
  MR_String LambdaHeadVar__1_279);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2491__1_2_f_0(
  MR_Word ToGradeSubdir_40,
  MR_String LambdaHeadVar__1_267);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2487__1_2_f_0(
  MR_Word ToGradeSubdir_40,
  MR_String LambdaHeadVar__1_261);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2466__1_2_p_0(
  MR_String HeadVar__1_255,
  MR_String HeadVar__2_407);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2447__1_3_f_0(
  MR_String Grade_21,
  MR_String TargetArch_39,
  MR_String LambdaHeadVar__1_243);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2410__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_224);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2400__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_214);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2390__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_202);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2369__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_187);

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
libs__handle_options__convert_option_table_result_to_globals_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word DefaultOptionTable_13,
  MR_Word MaybeStdLibGrades_14,
  MR_Word MaybeError_15,
  MR_Word OptionTable0_16,
  MR_Word OptOptionsCord_17,
  MR_Word MaybeEnvOptFileMerStdLibDir_18,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word * Globals_20);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__convert_options_to_globals_30_p_0(
  MR_Word ProgressStream_31,
  MR_Word DefaultOptionTable_32,
  MR_Word OptionTable0_33,
  MR_Word MaybeStdLibGrades_34,
  MR_Word MaybeEnvOptFileMerStdLibDir_35,
  MR_Word STATE_VARIABLE_OptTuple_0_140,
  MR_Word OpMode_37,
  MR_Word Target_38,
  MR_Word WordSize_39,
  MR_Word GC_Method_40,
  MR_Word TermNorm_41,
  MR_Word Term2Norm_42,
  MR_Word TraceLevel_43,
  MR_Word TraceSuppress_44,
  MR_Word SSTraceLevel_45,
  MR_Word MaybeThreadSafe_46,
  MR_Word C_CompilerType_47,
  MR_Word CSharp_CompilerType_48,
  MR_Word ReuseStrategy_49,
  MR_Word MaybeFeedbackInfo_50,
  MR_Word HostEnvType_51,
  MR_Word SystemEnvType_52,
  MR_Word TargetEnvType_53,
  MR_Word LimitErrorContextsMap_54,
  MR_Word LinkExtMap_55,
  MR_Word STATE_VARIABLE_Specs_0_141,
  MR_Word * STATE_VARIABLE_Specs_142,
  MR_Word * STATE_VARIABLE_Globals_143);

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_OptTuple_0_18,
  MR_Word * STATE_VARIABLE_OptTuple_19);

static void MR_CALL 
libs__handle_options__handle_const_struct_8_p_0(
  MR_Word Target_9,
  MR_Word OpMode_10,
  MR_Word TraceLevel_11,
  MR_Word TraceSuppress_12,
  MR_Word OT_EnableConstStructPoly0_13,
  MR_Word * OT_EnableConstStructPoly_14,
  MR_Word OT_EnableConstStructUser0_15,
  MR_Word * OT_EnableConstStructUser_16);

static void MR_CALL 
libs__handle_options__handle_non_tail_rec_warnings_5_p_0(
  MR_Word Globals_6,
  MR_Word OptTuple0_7,
  MR_Word OT_OptMLDSTailCalls_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
libs__handle_options__handle_colors_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_8,
  MR_Word * STATE_VARIABLE_Globals_9);

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
  MR_Word STATE_VARIABLE_Globals_0_142,
  MR_Word * STATE_VARIABLE_Globals_143);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(
  MR_String LambdaHeadVar__1_290);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0(
  MR_Word SubdirSetting_7,
  MR_String ExtSubDir_8,
  MR_Word SearchDirsSame_9,
  MR_Word SearchDirsIndep_10,
  MR_Word SearchDirsInstall_11,
  MR_Word * Dirs_12);

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
libs__handle_options__make_proposed_search_path_gas_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gas_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gas_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gas_8_p_0(
  MR_Word SubdirSetting_9,
  MR_String Grade_10,
  MR_String TargetArch_11,
  MR_String ExtSubDir_12,
  MR_Word SearchDirsSame_13,
  MR_Word SearchDirsIndep_14,
  MR_Word SearchDirsInstall_15,
  MR_Word * Dirs_16);

static void MR_CALL 
libs__handle_options__handle_subdir_setting_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12);

static void MR_CALL 
libs__handle_options__handle_libgrades_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word STATE_VARIABLE_Globals_0_23,
  MR_Word * STATE_VARIABLE_Globals_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
libs__handle_options__handle_chosen_stdlib_dir_5_p_0(
  MR_Word MaybeEnvOptFileMerStdLibDir_6,
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word * STATE_VARIABLE_Globals_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

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
libs__handle_options__handle_op_mode_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_18,
  MR_Word * STATE_VARIABLE_Globals_19);

static void MR_CALL 
libs__handle_options__turn_off_all_only_codegen_warnings_3_p_0(
  MR_Word HaltAtWarnSrcOpt_4,
  MR_Word STATE_VARIABLE_Globals_0_8,
  MR_Word * STATE_VARIABLE_Globals_9);

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
  MR_Word Globals_5,
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_bool MR_CALL 
libs__handle_options____Unify____maybe_allow_src_changes_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__handle_options____Compare____maybe_allow_src_changes_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__handle_options_scalar_common_1[191][2];

static /* final */ const MR_Box libs__handle_options_scalar_common_2[6][1];

static /* final */ const MR_Box libs__handle_options_scalar_common_3[2][4];

static /* final */ const MR_Box libs__handle_options_scalar_common_4[2][9];

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][8];

static /* final */ const MR_Box libs__handle_options_scalar_common_6[3][7];

static /* final */ const MR_Box libs__handle_options_scalar_common_7[4][6];

static /* final */ const MR_Box libs__handle_options_scalar_common_8[3][5];

static /* final */ const MR_Box libs__handle_options_scalar_common_9[6][3];




static /* final */ const MR_Box libs__handle_options_scalar_common_1[191][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may be given:"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the value of the"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--install-method"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option is"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "internal"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "external"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the only valid values are"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[32])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[32])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-ptag-bits"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the only valid values are 2 and 3."))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[71])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[84]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[81]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is C."))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[94]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[93])))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The only target language that"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[96]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[98]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--(no-)reclaim-heap-on-failure"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[100]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Use"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[102]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[101])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-nondet-failure"))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[105]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-semidet-failure"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[108]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and just one of"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[110]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[109])))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--high-level-code"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[114]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[116]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[118]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[120]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[124]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "parallel execution."))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[127]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[122]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[130]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Debugging is not available in parallel grades."))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[132]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[134]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[121])))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "requires a term size profiling grade."))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[136]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The --experimental-complexity option"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[138]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[140]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[142]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[121])))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Mercury.config"))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[144]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in any specified options file, such as"))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[146]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[145])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MERCURY_STDLIB_DIR"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[147])))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or by a make variable named"))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[150]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[149])))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or by an environment variable named"))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[155]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[154])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option,"))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[158]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[157])))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[160]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[159])))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "either by an"))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[162]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[161])))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not specified"))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[165]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[164])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "that holds the Mercury standard library"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[167]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the location of the directory"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[169]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[168])))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "contains more than one string."))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[171]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "or in a specified options file,"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[173]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[172])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "either in the environment"))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[175]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[174])))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable,"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[177]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[176])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[148]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[178])))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the definition of the"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[180]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[179])))
  },
  /* row 182 */
  {
    ((MR_Box) ((MR_String) "shared")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 183 */
  {
    ((MR_Box) ((MR_String) "static")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[182])))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[183])))
  },
  /* row 185 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion requires --optimize-tailcalls"))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[185]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 187 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2025 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 1993-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[187])))
  },
  /* row 189 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "--warn-non-tail-recursion is incompatible with --pessimize-tailcalls"))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[189]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_2[6][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 32)) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "predicate \140libs.handle_options.handle_chosen_stdlib_dir\'/5")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[170])))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "predicate \140libs.handle_options.handle_chosen_stdlib_dir\'/5")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[181])))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_4[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_subdir_setting_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box libs__handle_options_scalar_common_5[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box libs__handle_options_scalar_common_6[3][7] = {
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
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_subdir_setting_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
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

static /* final */ const MR_Box libs__handle_options_scalar_common_7[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__handle_options__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&libs__handle_options__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__handle_options_scalar_common_8[3][5] = {
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

static /* final */ const MR_Box libs__handle_options_scalar_common_9[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[2])),
    ((MR_Box) (libs__handle_options__handle_given_options_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_4[1])),
    ((MR_Box) (libs__handle_options__handle_given_options_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_9[2])),
    ((MR_Box) (&libs__handle_options_scalar_common_9[3])),
    ((MR_Box) (&libs__handle_options_scalar_common_9[4]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.handle_options.mh"
#line 3321 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 3321 "handle_options.m"
void 
libs__handle_options__user_init_pred_120_0(void)
#line 3321 "handle_options.m"
{
#line 3321 "handle_options.m"
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
libs__handle_options__IntroducedFrom__func__handle_directory_options__2520__1_1_f_0(
  MR_String LambdaHeadVar__1_285)
{
  MR_String LambdaHeadVar__2_286;
  MR_String Var_287;

  Var_287 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_285, (MR_String) "Mercury");
  LambdaHeadVar__2_286 = mercury__dir__f_slash_2_f_0(Var_287, (MR_String) "mihs");
  return LambdaHeadVar__2_286;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2516__1_2_f_0(
  MR_Word ToGradeSubdir_40,
  MR_String LambdaHeadVar__1_279)
{
  MR_String LambdaHeadVar__2_280;
  MR_String Var_281;
  MR_String Var_282;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_40, 1))));
  MR_Box conv1_Var_282;

  conv1_Var_282 = func_0(((MR_Box) (ToGradeSubdir_40)), ((MR_Box) (LambdaHeadVar__1_279)));
  Var_282 = ((MR_String) (conv1_Var_282));
  Var_281 = mercury__dir__f_slash_2_f_0(Var_282, (MR_String) "Mercury");
  LambdaHeadVar__2_280 = mercury__dir__f_slash_2_f_0(Var_281, (MR_String) "mihs");
  return LambdaHeadVar__2_280;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2491__1_2_f_0(
  MR_Word ToGradeSubdir_40,
  MR_String LambdaHeadVar__1_267)
{
  MR_String LambdaHeadVar__2_268;
  MR_String Var_269;
  MR_String Var_270;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_40, 1))));
  MR_Box conv1_Var_270;

  conv1_Var_270 = func_0(((MR_Box) (ToGradeSubdir_40)), ((MR_Box) (LambdaHeadVar__1_267)));
  Var_270 = ((MR_String) (conv1_Var_270));
  Var_269 = mercury__dir__f_slash_2_f_0(Var_270, (MR_String) "Mercury");
  LambdaHeadVar__2_268 = mercury__dir__f_slash_2_f_0(Var_269, (MR_String) "inits");
  return LambdaHeadVar__2_268;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2487__1_2_f_0(
  MR_Word ToGradeSubdir_40,
  MR_String LambdaHeadVar__1_261)
{
  MR_String LambdaHeadVar__2_262;
  MR_String Var_263;
  MR_String Var_264;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_40, 1))));
  MR_Box conv1_Var_264;

  conv1_Var_264 = func_0(((MR_Box) (ToGradeSubdir_40)), ((MR_Box) (LambdaHeadVar__1_261)));
  Var_264 = ((MR_String) (conv1_Var_264));
  Var_263 = mercury__dir__f_slash_2_f_0(Var_264, (MR_String) "Mercury");
  LambdaHeadVar__2_262 = mercury__dir__f_slash_2_f_0(Var_263, (MR_String) "lib");
  return LambdaHeadVar__2_262;
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2466__1_2_p_0(
  MR_String HeadVar__1_255,
  MR_String HeadVar__2_407)
{
  MR_bool succeeded = (strcmp(HeadVar__1_255, HeadVar__2_407) == 0);

  return succeeded;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2447__1_3_f_0(
  MR_String Grade_21,
  MR_String TargetArch_39,
  MR_String LambdaHeadVar__1_243)
{
  MR_String LambdaHeadVar__2_244;
  MR_String Var_245;
  MR_String Var_246;

  Var_246 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_243, (MR_String) "Mercury");
  Var_245 = mercury__dir__f_slash_2_f_0(Var_246, Grade_21);
  LambdaHeadVar__2_244 = mercury__dir__f_slash_2_f_0(Var_245, TargetArch_39);
  return LambdaHeadVar__2_244;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2410__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_224)
{
  MR_String LambdaHeadVar__2_225;
  MR_String Var_226;

  Var_226 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_224, (MR_String) "modules");
  LambdaHeadVar__2_225 = mercury__dir__f_slash_2_f_0(Var_226, Grade_21);
  return LambdaHeadVar__2_225;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2400__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_214)
{
  MR_String LambdaHeadVar__2_215;
  MR_String Var_216;

  Var_216 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", Grade_21);
  LambdaHeadVar__2_215 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_214, Var_216);
  return LambdaHeadVar__2_215;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2390__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_202)
{
  MR_String LambdaHeadVar__2_203;
  MR_String Var_204;
  MR_String Var_205;

  Var_205 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_202, (MR_String) "lib");
  Var_204 = mercury__dir__f_slash_2_f_0(Var_205, Grade_21);
  LambdaHeadVar__2_203 = mercury__dir__f_slash_2_f_0(Var_204, (MR_String) "inc");
  return LambdaHeadVar__2_203;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2369__1_2_f_0(
  MR_String Grade_21,
  MR_String LambdaHeadVar__1_187)
{
  MR_String LambdaHeadVar__2_188;
  MR_String Var_189;

  Var_189 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_187, (MR_String) "lib");
  LambdaHeadVar__2_188 = mercury__dir__f_slash_2_f_0(Var_189, Grade_21);
  return LambdaHeadVar__2_188;
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
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[188])));
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[5])));
  mercury__io__write_prefixed_lines_5_p_0(ProgressStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[9])));
  mercury__io__write_string_4_p_0(ProgressStream_4, (MR_String) "\nOptions:\n");
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
  mercury__io__write_strings_4_p_0(ProgressStream_4, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[188])));
}

static MR_Box MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = libs__op_mode__op_mode_to_option_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__handle_options__convert_option_table_result_to_globals_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word DefaultOptionTable_13,
  MR_Word MaybeStdLibGrades_14,
  MR_Word MaybeError_15,
  MR_Word OptionTable0_16,
  MR_Word OptOptionsCord_17,
  MR_Word MaybeEnvOptFileMerStdLibDir_18,
  MR_Word * STATE_VARIABLE_Specs_53,
  MR_Word * Globals_20)
{
  MR_bool succeeded;

  if ((MaybeError_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OptOptions_25;
    MR_Word OptionTable_26;
    MR_Word OptTuple_27;
    MR_Word Target_28;
    MR_Word WordSize_29;
    MR_Word GC_Method_30;
    MR_Word TermNorm_31;
    MR_Word Term2Norm_32;
    MR_Word TraceLevel_33;
    MR_Word TraceSuppress_34;
    MR_Word SSTraceLevel_35;
    MR_Word MaybeThreadSafe_36;
    MR_Word C_CompilerType_37;
    MR_Word CSharp_CompilerType_38;
    MR_Word ReuseStrategy_39;
    MR_Word MaybeFeedbackInfo_40;
    MR_Word HostEnvType_41;
    MR_Word SystemEnvType_42;
    MR_Word TargetEnvType_43;
    MR_Word LimitErrorContextsMap_44;
    MR_Word LinkExtMap_45;
    MR_Word OpMode_46;
    MR_Word OtherOpModes_47;
    MR_Word DefaultGlobals_52;
    MR_Word STATE_VARIABLE_Specs_2_65;
    MR_Word STATE_VARIABLE_Specs_3_86;

    OptOptions_25 = mercury__cord__list_1_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0), OptOptionsCord_17);
    libs__check_options__check_option_values_23_p_0(OptionTable0_16, &OptionTable_26, &Target_28, &WordSize_29, &GC_Method_30, &TermNorm_31, &Term2Norm_32, &TraceLevel_33, &TraceSuppress_34, &SSTraceLevel_35, &MaybeThreadSafe_36, &C_CompilerType_37, &CSharp_CompilerType_38, &ReuseStrategy_39, &MaybeFeedbackInfo_40, &HostEnvType_41, &SystemEnvType_42, &TargetEnvType_43, &LimitErrorContextsMap_44, &LinkExtMap_45, &STATE_VARIABLE_Specs_2_65);
    libs__optimization_options__process_optimization_options_3_p_0(OptionTable_26, OptOptions_25, &OptTuple_27);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_26, &OpMode_46, &OtherOpModes_47);
    if ((OtherOpModes_47 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_3_86 = STATE_VARIABLE_Specs_2_65;
    else
    {
      MR_Word OpModeStrs_50;
      MR_Word OpModePieces_51;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_76;
      MR_Word Var_77;

      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_67, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[3]));
        MR_hl_field(0, Var_67, 1) = ((MR_Box) (libs__handle_options__convert_option_table_result_to_globals_11_p_0_1));
        MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_67, 3) = ((MR_Box) (OptionTable_26));
      }
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (OpMode_46));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (OtherOpModes_47));
      }
      OpModeStrs_50 = mercury__list__map_2_f_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_67, Var_68);
      Var_77 = parse_tree__error_spec__quote_list_to_pieces_2_f_0((MR_String) "and", OpModeStrs_50);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])));
      OpModePieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[13])), Var_76);
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_51, STATE_VARIABLE_Specs_2_65, &STATE_VARIABLE_Specs_3_86);
    }
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_26, ((MR_Box) ((MR_Integer) 752)), &DefaultGlobals_52);
    succeeded = (STATE_VARIABLE_Specs_3_86 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (DefaultGlobals_52 == (MR_Integer) 1);
    if (succeeded)
      libs__handle_options__convert_options_to_globals_30_p_0(ProgressStream_12, DefaultOptionTable_13, OptionTable_26, MaybeStdLibGrades_14, MaybeEnvOptFileMerStdLibDir_18, OptTuple_27, OpMode_46, Target_28, WordSize_29, GC_Method_30, TermNorm_31, Term2Norm_32, TraceLevel_33, TraceSuppress_34, SSTraceLevel_35, MaybeThreadSafe_36, C_CompilerType_37, CSharp_CompilerType_38, ReuseStrategy_39, MaybeFeedbackInfo_40, HostEnvType_41, SystemEnvType_42, TargetEnvType_43, LimitErrorContextsMap_44, LinkExtMap_45, STATE_VARIABLE_Specs_3_86, STATE_VARIABLE_Specs_53, Globals_20);
    else
    {
      libs__handle_options__generate_default_globals_5_p_0(ProgressStream_12, DefaultOptionTable_13, Globals_20);
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_3_86;
    }
  }
  else
  {
    MR_Word Error_22 = ((MR_Word) ((MR_hl_field(1, MaybeError_15, 0))));
    MR_String ErrorMessage_23;
    MR_Word OptionTableSpec_24;
    MR_Word Var_59;
    MR_Word Var_60;

    ErrorMessage_23 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), Error_22);
    {
      Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_60, 1) = ((MR_Box) (ErrorMessage_23));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      OptionTableSpec_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, OptionTableSpec_24, 0) = ((MR_Box) ((MR_String) "predicate \140libs.handle_options.convert_option_table_result_to_globals\'/11"));
      MR_hl_field(1, OptionTableSpec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, OptionTableSpec_24, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, OptionTableSpec_24, 3) = ((MR_Box) (Var_59));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_53 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (OptionTableSpec_24));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__handle_options__generate_default_globals_5_p_0(ProgressStream_12, DefaultOptionTable_13, Globals_20);
  }
}

static MR_bool MR_CALL 
libs__handle_options__handle_given_options_11_p_0_3(
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
libs__handle_options__handle_given_options_11_p_0_2(
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
libs__handle_options__handle_given_options_11_p_0_1(
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
libs__handle_options__handle_given_options_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word DefaultOptionTable_13,
  MR_Word MaybeStdLibGrades_14,
  MR_Word MaybeEnvOptFileMerStdLibDir_15,
  MR_Word Args0_16,
  MR_Word * OptionArgs_17,
  MR_Word * Args_18,
  MR_Word * Specs_19,
  MR_Word * STATE_VARIABLE_Globals_32)
{
  MR_bool succeeded;
  MR_Word MaybeError_23;
  MR_Word OptionTable_24;
  MR_Word OptOptions_25;
  MR_Word STATE_VARIABLE_Globals_1_47;
  MR_Word Var_58;
  MR_Word _OptionsSet_54;
  MR_Box conv4_OptOptions_25;

  Var_58 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
  mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_9[5]), Args0_16, OptionArgs_17, Args_18, &MaybeError_23, &_OptionsSet_54, DefaultOptionTable_13, &OptionTable_24, ((MR_Box) (Var_58)), &conv4_OptOptions_25);
  OptOptions_25 = ((MR_Word) (conv4_OptOptions_25));
  libs__handle_options__convert_option_table_result_to_globals_11_p_0(ProgressStream_12, DefaultOptionTable_13, MaybeStdLibGrades_14, MaybeError_23, OptionTable_24, OptOptions_25, MaybeEnvOptFileMerStdLibDir_15, Specs_19, &STATE_VARIABLE_Globals_1_47);
  if ((*Specs_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OpMode_28;
    MR_Word Smart_29;
    MR_Word OpModeArgs_30;
    MR_Word Var_50;
    MR_Word Var_51;

    libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_1_47, &OpMode_28);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_47, (MR_Integer) 180, &Smart_29);
    succeeded = (Smart_29 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) OpMode_28)) == (MR_Integer) 3);
      if (succeeded)
      {
        OpModeArgs_30 = ((MR_Word) ((MR_hl_field(3, OpMode_28, 0))));
        succeeded = ((MR_tag((MR_Word) OpModeArgs_30)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_50 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_30, 0))));
          succeeded = ((MR_tag((MR_Word) Var_50)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_51 = ((MR_Unsigned) ((MR_hl_field(1, Var_50, 0))) & (MR_Integer) 3);
            succeeded = (Var_51 == (MR_Integer) 3);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word WarnSmart_62;

      libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
      libs__globals__set_option_4_p_0((MR_Integer) 180, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_1_47, STATE_VARIABLE_Globals_32);
      libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_32, (MR_Integer) 36, &WarnSmart_62);
      switch (WarnSmart_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Halt_63;

            mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "Warning: smart recompilation does not yet work with ");
            mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) "linking");
            mercury__io__write_string_4_p_0(ProgressStream_12, (MR_String) ".\n");
            libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_32, (MR_Integer) 3, &Halt_63);
            switch (Halt_63) {
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
      *STATE_VARIABLE_Globals_32 = STATE_VARIABLE_Globals_1_47;
  }
  else
    *STATE_VARIABLE_Globals_32 = STATE_VARIABLE_Globals_1_47;
}

void MR_CALL 
libs__handle_options__generate_default_globals_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word DefaultOptionTable0_7,
  MR_Word * DefaultGlobals_8)
{
  MR_Word DefaultOptionTable_10;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;

  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 752)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[0]))), DefaultOptionTable0_7, &DefaultOptionTable_10);
  libs__handle_options__handle_given_options_11_p_0(ProgressStream_6, DefaultOptionTable_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&libs__handle_options_scalar_common_2[1]), (MR_Word) ((MR_Unsigned) 0U), &Var_13, &Var_14, &Var_15, DefaultGlobals_8);
}

static void MR_CALL 
libs__handle_options__convert_options_to_globals_30_p_0(
  MR_Word ProgressStream_31,
  MR_Word DefaultOptionTable_32,
  MR_Word OptionTable0_33,
  MR_Word MaybeStdLibGrades_34,
  MR_Word MaybeEnvOptFileMerStdLibDir_35,
  MR_Word STATE_VARIABLE_OptTuple_0_140,
  MR_Word OpMode_37,
  MR_Word Target_38,
  MR_Word WordSize_39,
  MR_Word GC_Method_40,
  MR_Word TermNorm_41,
  MR_Word Term2Norm_42,
  MR_Word TraceLevel_43,
  MR_Word TraceSuppress_44,
  MR_Word SSTraceLevel_45,
  MR_Word MaybeThreadSafe_46,
  MR_Word C_CompilerType_47,
  MR_Word CSharp_CompilerType_48,
  MR_Word ReuseStrategy_49,
  MR_Word MaybeFeedbackInfo_50,
  MR_Word HostEnvType_51,
  MR_Word SystemEnvType_52,
  MR_Word TargetEnvType_53,
  MR_Word LimitErrorContextsMap_54,
  MR_Word LinkExtMap_55,
  MR_Word STATE_VARIABLE_Specs_0_141,
  MR_Word * STATE_VARIABLE_Specs_142,
  MR_Word * STATE_VARIABLE_Globals_143)
{
  MR_bool succeeded;
  MR_Word OT_AllowInlining0_60 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 31)) & (MR_Integer) 1);
  MR_Word OT_EnableConstStructPoly0_61 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 26)) & (MR_Integer) 1);
  MR_Word OT_EnableConstStructUser0_62 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 25)) & (MR_Integer) 1);
  MR_Word OT_OptCommonStructs0_63 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 24)) & (MR_Integer) 1);
  MR_Word OT_PropConstraints0_64 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 23)) & (MR_Integer) 1);
  MR_Word OT_PropLocalConstraints0_65 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 22)) & (MR_Integer) 1);
  MR_Word OT_OptDupCalls0_66 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 21)) & (MR_Integer) 1);
  MR_Word OT_PropConstants0_67 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 20)) & (MR_Integer) 1);
  MR_Word OT_ElimExcessAssigns0_68 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 19)) & (MR_Integer) 1);
  MR_Word OT_MergeCodeAfterSwitch0_69 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 18)) & (MR_Integer) 1);
  MR_Word OT_OptLoopInvariants0_70 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 15)) & (MR_Integer) 1);
  MR_Word OT_OptSVCell0_71 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word OT_OptFollowCode0_72 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 6)) & (MR_Integer) 1);
  MR_Word OT_OptUnusedArgs0_73 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 5)) & (MR_Integer) 1);
  MR_Word OT_OptUnusedArgsIntermod0_74 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 4)) & (MR_Integer) 1);
  MR_Word OT_OptHigherOrder0_75 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 3)) & (MR_Integer) 1);
  MR_Integer OT_HigherOrderSizeLimit0_76 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 17))));
  MR_Word OT_SpecTypes0_77 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 1)) & (MR_Integer) 1);
  MR_Word OT_SpecTypesUserGuided0_78 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) & (MR_Integer) 1);
  MR_Word OT_IntroduceAccumulators0_79 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 31)) & (MR_Integer) 1);
  MR_Word OT_OptLCMC0_80 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 28)) & (MR_Integer) 1);
  MR_Word OT_Deforest0_81 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 26)) & (MR_Integer) 1);
  MR_Word OT_Tuple0_82 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 24)) & (MR_Integer) 1);
  MR_Word OT_Untuple0_83 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 25)) & (MR_Integer) 1);
  MR_Word OT_OptMiddleRec0_84 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 7)) & (MR_Integer) 1);
  MR_Word OT_AllowHijacks0_85 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 5)) & (MR_Integer) 1);
  MR_Word OT_OptMLDSTailCalls0_86 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 4)) & (MR_Integer) 1);
  MR_Word OT_OptimizeMlds0_87 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 21)) & (MR_Integer) 1);
  MR_Word OT_StdLabels0_88 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 12)) & (MR_Integer) 1);
  MR_Word OT_OptDups0_89 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 10)) & (MR_Integer) 1);
  MR_Word OT_OptFrames0_90 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 8)) & (MR_Integer) 1);
  MR_Integer OT_StringBinarySwitchSize0_91 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 32))));
  MR_String InstallMethodStr_92;
  MR_Word InstallMethod_93;
  MR_String InstallCmd_95;
  MR_Word FileInstallCmd_96;
  MR_Word Experiment2_97;
  MR_Integer OT_StringBinarySwitchSize_98;
  MR_Word OT_OptFrames_99;
  MR_Word AllowHijacksMMSC_100;
  MR_Word TraceEnabled_101;
  MR_Word AllowSrcChangesDebug_102;
  MR_Word ProfileDeep_103;
  MR_Word AllowSrcChangesProf_104;
  MR_Integer OT_HigherOrderSizeLimit_105;
  MR_Word AllowOptLCMCTermSize_106;
  MR_Word OT_OptDups_107;
  MR_Word OT_StdLabels_108;
  MR_Word OT_OptMLDSTailCalls_109;
  MR_Word OT_AllowInlining_110;
  MR_Word OT_EnableConstStructPoly_111;
  MR_Word OT_EnableConstStructUser_112;
  MR_Word OT_InlineBuiltins0_113;
  MR_Word OT_PropConstants_114;
  MR_Word BodyTypeInfoLiveness_115;
  MR_Word ReorderConj_116;
  MR_Word OT_Deforest_117;
  MR_Word StackSegments_118;
  MR_Word OT_OptMiddleRec_119;
  MR_Word OT_AllowHijacks_120;
  MR_Word OT_SpecTypes_121;
  MR_Word OT_SpecTypesUserGuided_122;
  MR_Word OT_PropLocalConstraints_123;
  MR_Word OT_PropConstraints_124;
  MR_Word OT_OptCommonStructs_125;
  MR_Word OT_ElimExcessAssigns_126;
  MR_Word OT_OptUnusedArgs_128;
  MR_Word OT_OptUnusedArgsIntermod_129;
  MR_Word OT_OptLCMC_130;
  MR_Word OT_OptFollowCode_131;
  MR_Word OT_OptDupCalls_132;
  MR_Word OT_OptSVCell_133;
  MR_Word OT_OptLoopInvariants_134;
  MR_Word OT_OptHigherOrder_135;
  MR_Word OT_Untuple_136;
  MR_Word OT_Tuple_137;
  MR_Word OT_MergeCodeAfterSwitch_138;
  MR_Word HighLevelCode_139;
  MR_Word STATE_VARIABLE_Specs_1_179;
  MR_Word STATE_VARIABLE_Globals_1_182;
  MR_Word STATE_VARIABLE_Globals_8_210;
  MR_Word STATE_VARIABLE_Specs_2_212;
  MR_Word STATE_VARIABLE_Specs_3_213;
  MR_Word STATE_VARIABLE_Globals_9_214;
  MR_Word STATE_VARIABLE_Specs_4_215;
  MR_Word STATE_VARIABLE_Globals_10_216;
  MR_Word STATE_VARIABLE_Specs_5_217;
  MR_Word STATE_VARIABLE_Globals_11_218;
  MR_Word STATE_VARIABLE_Specs_6_219;
  MR_Word STATE_VARIABLE_Globals_12_220;
  MR_Word STATE_VARIABLE_Specs_7_221;
  MR_Word STATE_VARIABLE_Globals_13_222;
  MR_Word STATE_VARIABLE_Specs_8_223;
  MR_Word STATE_VARIABLE_Globals_14_224;
  MR_Word STATE_VARIABLE_Globals_15_227;
  MR_Word STATE_VARIABLE_Specs_9_228;
  MR_Word STATE_VARIABLE_Globals_16_229;
  MR_Word STATE_VARIABLE_Specs_10_230;
  MR_Word STATE_VARIABLE_Globals_17_231;
  MR_Word STATE_VARIABLE_Globals_18_232;
  MR_Word STATE_VARIABLE_Globals_19_233;
  MR_Word STATE_VARIABLE_Globals_20_234;
  MR_Word STATE_VARIABLE_Globals_21_236;
  MR_Word STATE_VARIABLE_Specs_11_237;
  MR_Word STATE_VARIABLE_Globals_22_238;
  MR_Word STATE_VARIABLE_Specs_12_239;
  MR_Word STATE_VARIABLE_Globals_23_241;
  MR_Word STATE_VARIABLE_Globals_24_245;
  MR_Word STATE_VARIABLE_Globals_25_250;
  MR_Word STATE_VARIABLE_Globals_26_252;
  MR_Word STATE_VARIABLE_Globals_27_253;
  MR_Word STATE_VARIABLE_Globals_28_254;
  MR_Word STATE_VARIABLE_Globals_29_256;
  MR_Word STATE_VARIABLE_Globals_30_257;
  MR_Word STATE_VARIABLE_Globals_31_268;
  MR_Word STATE_VARIABLE_OptTuple_30_299;
  MR_Word STATE_VARIABLE_Globals_32_301;
  MR_Word STATE_VARIABLE_OptTuple_31_302;
  MR_Word Var_4462;
  MR_Word Var_4463;
  MR_Word Var_4464;
  MR_Word Var_4465;
  MR_Word Var_4475;
  MR_Word Var_4476;
  MR_Word Var_4478;
  MR_Word Var_4480;
  MR_Word Var_4481;
  MR_Word Var_4482;
  MR_Word Var_4483;
  MR_Word Var_4484;
  MR_Word Var_4485;
  MR_Word Var_4490;
  MR_Word Var_4493;
  MR_Word Var_4494;
  MR_Word Var_4495;
  MR_Word Var_4497;
  MR_Word Var_4501;
  MR_Word Var_4502;
  MR_Word Var_4503;
  MR_Word Var_4504;
  MR_Word Var_4505;
  MR_Word Var_4506;
  MR_Word Var_4507;
  MR_Word Var_4508;
  MR_Word Var_4509;
  MR_Word Var_4510;
  MR_Word Var_4511;
  MR_Word Var_4512;
  MR_Word Var_4513;
  MR_Word Var_4514;
  MR_Word Var_4515;
  MR_Word Var_4516;
  MR_Word Var_4518;
  MR_Word Var_4521;
  MR_Word Var_4522;
  MR_Word Var_4523;
  MR_Word Var_4524;
  MR_Word Var_4525;
  MR_Word Var_4526;
  MR_Word Var_4527;
  MR_Word Var_4528;
  MR_Word Var_4529;
  MR_Word Var_4530;
  MR_Word Var_4531;
  MR_Word Var_4532;
  MR_Word Var_4533;
  MR_Word Var_4534;
  MR_Word Var_4535;
  MR_Word Var_4536;
  MR_Word Var_4538;
  MR_Word Var_4540;
  MR_Word Var_4542;
  MR_Word Var_4543;
  MR_Word Var_4544;
  MR_Word Var_4545;
  MR_Word Var_4546;
  MR_Word Var_4547;
  MR_Word Var_4548;
  MR_Word Var_4549;
  MR_Integer Var_4550;
  MR_Integer Var_4551;
  MR_Integer Var_4552;
  MR_Integer Var_4553;
  MR_Integer Var_4554;
  MR_Integer Var_4555;
  MR_Integer Var_4556;
  MR_Integer Var_4557;
  MR_Integer Var_4558;
  MR_Integer Var_4559;
  MR_Integer Var_4560;
  MR_Integer Var_4561;
  MR_Integer Var_4562;
  MR_Integer Var_4563;
  MR_Integer Var_4565;
  MR_Integer Var_4566;
  MR_Integer Var_4567;
  MR_Integer Var_4568;
  MR_Integer Var_4569;
  MR_Integer Var_4570;
  MR_Integer Var_4571;
  MR_Integer Var_4572;
  MR_Integer Var_4573;
  MR_Integer Var_4574;
  MR_Integer Var_4575;
  MR_Integer Var_4576;
  MR_Integer Var_4577;
  MR_Integer Var_4578;
  MR_Integer Var_4580;
  MR_Integer Var_4581;
  MR_Integer Var_4582;
  MR_Integer Var_4583;
  MR_Integer Var_4584;
  MR_Integer Var_4585;
  MR_Integer Var_4586;
  MR_String Var_4587;
  MR_Word Var_262;
  MR_Word Var_263;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_33, ((MR_Box) ((MR_Integer) 702)), &InstallMethodStr_92);
  if ((strcmp(InstallMethodStr_92, (MR_String) "") == 0))
    succeeded = MR_TRUE;
  else
  if ((strcmp(InstallMethodStr_92, (MR_String) "external") == 0))
    succeeded = MR_TRUE;
  else
    succeeded = MR_FALSE;
  if (succeeded)
  {
    InstallMethod_93 = (MR_Integer) 0;
    STATE_VARIABLE_Specs_1_179 = STATE_VARIABLE_Specs_0_141;
  }
  else
  {
    succeeded = (strcmp(InstallMethodStr_92, (MR_String) "internal") == 0);
    if (succeeded)
    {
      InstallMethod_93 = (MR_Integer) 1;
      STATE_VARIABLE_Specs_1_179 = STATE_VARIABLE_Specs_0_141;
    }
    else
    {
      MR_Word InstallMethodSpec_94;
      MR_Word Var_149;
      MR_Word Var_152;
      MR_Word Var_155;
      MR_Word Var_156;

      {
        Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_156, 1) = ((MR_Box) (InstallMethodStr_92));
      }
      {
        Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
        MR_hl_field(1, Var_155, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[29])));
      }
      {
        Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_152, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[19])));
        MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_155));
      }
      {
        Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_149, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[18])));
        MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_152));
      }
      {
        InstallMethodSpec_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InstallMethodSpec_94, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
        MR_hl_field(1, InstallMethodSpec_94, 1) = ((MR_Box) (Var_149));
      }
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InstallMethodSpec_94, STATE_VARIABLE_Specs_0_141, &STATE_VARIABLE_Specs_1_179);
      InstallMethod_93 = (MR_Integer) 0;
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_33, ((MR_Box) ((MR_Integer) 703)), &InstallCmd_95);
  succeeded = (strcmp(InstallCmd_95, (MR_String) "") == 0);
  if (succeeded)
    FileInstallCmd_96 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      FileInstallCmd_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileInstallCmd_96, 0) = ((MR_Box) (InstallCmd_95));
    }
  libs__globals__globals_init_27_p_0(DefaultOptionTable_32, OptionTable0_33, STATE_VARIABLE_OptTuple_0_140, OpMode_37, MaybeFeedbackInfo_50, FileInstallCmd_96, TraceSuppress_44, ReuseStrategy_49, LimitErrorContextsMap_54, LinkExtMap_55, C_CompilerType_47, CSharp_CompilerType_48, MaybeStdLibGrades_34, Target_38, (MR_Integer) 0, WordSize_39, GC_Method_40, TermNorm_41, Term2Norm_42, TraceLevel_43, SSTraceLevel_45, MaybeThreadSafe_46, HostEnvType_51, SystemEnvType_52, TargetEnvType_53, InstallMethod_93, &STATE_VARIABLE_Globals_1_182);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_182, (MR_Integer) 756, &Experiment2_97);
  switch (Experiment2_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_8_210 = STATE_VARIABLE_Globals_1_182;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_2_186;
        MR_Word STATE_VARIABLE_Globals_3_190;
        MR_Word STATE_VARIABLE_Globals_4_194;
        MR_Word STATE_VARIABLE_Globals_5_198;
        MR_Word STATE_VARIABLE_Globals_6_202;
        MR_Word STATE_VARIABLE_Globals_7_206;

        libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_182, &STATE_VARIABLE_Globals_2_186);
        libs__globals__set_option_4_p_0((MR_Integer) 324, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_2_186, &STATE_VARIABLE_Globals_3_190);
        libs__globals__set_option_4_p_0((MR_Integer) 325, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_3_190, &STATE_VARIABLE_Globals_4_194);
        libs__globals__set_option_4_p_0((MR_Integer) 326, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_4_194, &STATE_VARIABLE_Globals_5_198);
        libs__globals__set_option_4_p_0((MR_Integer) 327, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_5_198, &STATE_VARIABLE_Globals_6_202);
        libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_6_202, &STATE_VARIABLE_Globals_7_206);
        libs__globals__set_option_4_p_0((MR_Integer) 329, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_7_206, &STATE_VARIABLE_Globals_8_210);
      }
      break;
  }
  libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_8_210, Target_38, GC_Method_40, STATE_VARIABLE_Specs_1_179, &STATE_VARIABLE_Specs_2_212);
  libs__handle_options__check_for_incompatibilities_4_p_0(STATE_VARIABLE_Globals_8_210, OpMode_37, STATE_VARIABLE_Specs_2_212, &STATE_VARIABLE_Specs_3_213);
  libs__handle_options__handle_implications_of_pregen_target_spf_7_p_0(STATE_VARIABLE_Globals_8_210, &STATE_VARIABLE_Globals_9_214, Target_38, OT_StringBinarySwitchSize0_91, &OT_StringBinarySwitchSize_98, STATE_VARIABLE_Specs_3_213, &STATE_VARIABLE_Specs_4_215);
  libs__handle_options__handle_implications_of_parallel_4_p_0(STATE_VARIABLE_Globals_9_214, &STATE_VARIABLE_Globals_10_216, STATE_VARIABLE_Specs_4_215, &STATE_VARIABLE_Specs_5_217);
  libs__handle_options__handle_gc_options_7_p_0(STATE_VARIABLE_Globals_10_216, &STATE_VARIABLE_Globals_11_218, GC_Method_40, OT_OptFrames0_90, &OT_OptFrames_99, STATE_VARIABLE_Specs_5_217, &STATE_VARIABLE_Specs_6_219);
  libs__handle_options__handle_minimal_model_options_5_p_0(STATE_VARIABLE_Globals_11_218, &STATE_VARIABLE_Globals_12_220, &AllowHijacksMMSC_100, STATE_VARIABLE_Specs_6_219, &STATE_VARIABLE_Specs_7_221);
  TraceEnabled_101 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_43);
  libs__handle_options__handle_debugging_options_9_p_0(Target_38, TraceLevel_43, TraceEnabled_101, SSTraceLevel_45, &AllowSrcChangesDebug_102, STATE_VARIABLE_Globals_12_220, &STATE_VARIABLE_Globals_13_222, STATE_VARIABLE_Specs_7_221, &STATE_VARIABLE_Specs_8_223);
  libs__handle_options__maybe_update_event_set_file_name_4_p_0(STATE_VARIABLE_Globals_13_222, &STATE_VARIABLE_Globals_14_224);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_14_224, (MR_Integer) 273, &ProfileDeep_103);
  libs__handle_options__handle_profiling_options_9_p_0(STATE_VARIABLE_Globals_14_224, &STATE_VARIABLE_Globals_15_227, Target_38, ProfileDeep_103, &AllowSrcChangesProf_104, OT_HigherOrderSizeLimit0_76, &OT_HigherOrderSizeLimit_105, STATE_VARIABLE_Specs_8_223, &STATE_VARIABLE_Specs_9_228);
  libs__handle_options__handle_record_term_sizes_options_5_p_0(STATE_VARIABLE_Globals_15_227, &STATE_VARIABLE_Globals_16_229, &AllowOptLCMCTermSize_106, STATE_VARIABLE_Specs_9_228, &STATE_VARIABLE_Specs_10_230);
  libs__handle_options__handle_stack_layout_options_6_p_0(STATE_VARIABLE_Globals_16_229, &STATE_VARIABLE_Globals_17_231, OT_OptDups0_89, &OT_OptDups_107, OT_StdLabels0_88, &OT_StdLabels_108);
  libs__handle_options__handle_op_mode_implications_3_p_0(OpMode_37, STATE_VARIABLE_Globals_17_231, &STATE_VARIABLE_Globals_18_232);
  libs__handle_options__handle_option_to_option_implications_3_p_0(OpMode_37, STATE_VARIABLE_Globals_18_232, &STATE_VARIABLE_Globals_19_233);
  libs__handle_options__maybe_disable_smart_recompilation_6_p_0(ProgressStream_31, OpMode_37, STATE_VARIABLE_Globals_19_233, &STATE_VARIABLE_Globals_20_234);
  libs__handle_options__handle_chosen_stdlib_dir_5_p_0(MaybeEnvOptFileMerStdLibDir_35, STATE_VARIABLE_Globals_20_234, &STATE_VARIABLE_Globals_21_236, STATE_VARIABLE_Specs_10_230, &STATE_VARIABLE_Specs_11_237);
  libs__handle_options__handle_libgrades_7_p_0(ProgressStream_31, STATE_VARIABLE_Globals_21_236, &STATE_VARIABLE_Globals_22_238, STATE_VARIABLE_Specs_11_237, &STATE_VARIABLE_Specs_12_239);
  libs__handle_options__handle_subdir_setting_3_p_0(OpMode_37, STATE_VARIABLE_Globals_22_238, &STATE_VARIABLE_Globals_23_241);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 179, (MR_Integer) 625, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[30])), STATE_VARIABLE_Globals_23_241, &STATE_VARIABLE_Globals_24_245);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 179, (MR_Integer) 627, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[30])), STATE_VARIABLE_Globals_24_245, &STATE_VARIABLE_Globals_25_250);
  libs__handle_options__handle_directory_options_3_p_0(OpMode_37, STATE_VARIABLE_Globals_25_250, &STATE_VARIABLE_Globals_26_252);
  libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(STATE_VARIABLE_Globals_26_252, &STATE_VARIABLE_Globals_27_253);
  libs__handle_options__handle_compiler_developer_options_4_p_0(STATE_VARIABLE_Globals_27_253, &STATE_VARIABLE_Globals_28_254);
  libs__handle_options__handle_compare_specialization_2_p_0(STATE_VARIABLE_Globals_28_254, &STATE_VARIABLE_Globals_29_256);
  libs__handle_options__handle_colors_2_p_0(STATE_VARIABLE_Globals_29_256, &STATE_VARIABLE_Globals_30_257);
  switch (OT_OptimizeMlds0_87) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OT_OptMLDSTailCalls_109 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      OT_OptMLDSTailCalls_109 = OT_OptMLDSTailCalls0_86;
      break;
  }
  libs__handle_options__handle_non_tail_rec_warnings_5_p_0(STATE_VARIABLE_Globals_30_257, STATE_VARIABLE_OptTuple_0_140, OT_OptMLDSTailCalls_109, STATE_VARIABLE_Specs_12_239, STATE_VARIABLE_Specs_142);
  succeeded = (AllowSrcChangesDebug_102 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (AllowSrcChangesProf_104 == (MR_Integer) 1);
  if (succeeded)
    OT_AllowInlining_110 = OT_AllowInlining0_60;
  else
    OT_AllowInlining_110 = (MR_Integer) 1;
  libs__handle_options__handle_const_struct_8_p_0(Target_38, OpMode_37, TraceLevel_43, TraceSuppress_44, OT_EnableConstStructPoly0_61, &OT_EnableConstStructPoly_111, OT_EnableConstStructUser0_62, &OT_EnableConstStructUser_112);
  OT_InlineBuiltins0_113 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 29)) & (MR_Integer) 1);
  succeeded = (OT_InlineBuiltins0_113 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (OT_AllowInlining_110 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (ProfileDeep_103 == (MR_Integer) 1);
  }
  if (succeeded)
    OT_PropConstants_114 = OT_PropConstants0_67;
  else
    OT_PropConstants_114 = (MR_Integer) 1;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_257, (MR_Integer) 348, &BodyTypeInfoLiveness_115);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_257, (MR_Integer) 245, &ReorderConj_116);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_257, (MR_Integer) 305, &StackSegments_118);
  switch (OT_IntroduceAccumulators0_79) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OT_OptCommonStructs_125 = OT_OptCommonStructs0_63;
      break;
    case (MR_Integer) 0:
      OT_OptCommonStructs_125 = (MR_Integer) 0;
      break;
  }
  succeeded = (TraceEnabled_101 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (GC_Method_40 != (MR_Integer) 5);
    if (succeeded)
    {
      Var_262 = (MR_Integer) 296;
      Var_263 = (MR_Integer) 0;
      succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_30_257, Var_262, Var_263);
      if (succeeded)
        succeeded = (StackSegments_118 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    OT_OptMiddleRec_119 = OT_OptMiddleRec0_84;
    succeeded = (GC_Method_40 != (MR_Integer) 5);
    if (succeeded)
      succeeded = (AllowHijacksMMSC_100 == (MR_Integer) 1);
    if (succeeded)
      OT_AllowHijacks_120 = OT_AllowHijacks0_85;
    else
      OT_AllowHijacks_120 = (MR_Integer) 1;
    succeeded = (OT_IntroduceAccumulators0_79 == (MR_Integer) 0);
    if (succeeded)
      OT_ElimExcessAssigns_126 = (MR_Integer) 0;
    else
      OT_ElimExcessAssigns_126 = OT_ElimExcessAssigns0_68;
    OT_OptFollowCode_131 = OT_OptFollowCode0_72;
  }
  else
  {
    OT_OptMiddleRec_119 = (MR_Integer) 1;
    succeeded = (TraceEnabled_101 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (GC_Method_40 != (MR_Integer) 5);
      if (succeeded)
        succeeded = (AllowHijacksMMSC_100 == (MR_Integer) 1);
    }
    if (succeeded)
      OT_AllowHijacks_120 = OT_AllowHijacks0_85;
    else
      OT_AllowHijacks_120 = (MR_Integer) 1;
    succeeded = (TraceEnabled_101 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (OT_IntroduceAccumulators0_79 == (MR_Integer) 0);
    if (succeeded)
      OT_ElimExcessAssigns_126 = (MR_Integer) 0;
    else
      OT_ElimExcessAssigns_126 = OT_ElimExcessAssigns0_68;
    switch (TraceEnabled_101) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        OT_OptFollowCode_131 = (MR_Integer) 0;
        break;
      case (MR_Integer) 0:
        OT_OptFollowCode_131 = OT_OptFollowCode0_72;
        break;
    }
  }
  succeeded = (AllowSrcChangesDebug_102 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (ReorderConj_116 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (BodyTypeInfoLiveness_115 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word Var_264;
    MR_Word Var_265;

    OT_Deforest_117 = OT_Deforest0_81;
    succeeded = (GC_Method_40 != (MR_Integer) 5);
    if (succeeded)
    {
      OT_SpecTypes_121 = OT_SpecTypes0_77;
      switch (OT_SpecTypes_121) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          OT_SpecTypesUserGuided_122 = OT_SpecTypesUserGuided0_78;
          break;
        case (MR_Integer) 0:
          OT_SpecTypesUserGuided_122 = (MR_Integer) 0;
          break;
      }
    }
    else
    {
      OT_SpecTypes_121 = (MR_Integer) 1;
      OT_SpecTypesUserGuided_122 = (MR_Integer) 1;
    }
    OT_PropLocalConstraints_123 = OT_PropLocalConstraints0_65;
    succeeded = ((MR_tag((MR_Word) OpMode_37)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_264 = ((MR_Word) ((MR_hl_field(3, OpMode_37, 0))));
      succeeded = ((MR_tag((MR_Word) Var_264)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_265 = ((MR_Word) ((MR_hl_field(3, Var_264, 0))));
        succeeded = (Var_265 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      OT_OptUnusedArgs_128 = (MR_Integer) 1;
    else
      OT_OptUnusedArgs_128 = OT_OptUnusedArgs0_73;
    succeeded = (ProfileDeep_103 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (AllowOptLCMCTermSize_106 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (GC_Method_40 != (MR_Integer) 5);
    }
    if (succeeded)
      OT_OptLCMC_130 = OT_OptLCMC0_80;
    else
      OT_OptLCMC_130 = (MR_Integer) 1;
    OT_OptDupCalls_132 = OT_OptDupCalls0_66;
    OT_OptSVCell_133 = OT_OptSVCell0_71;
    OT_OptLoopInvariants_134 = OT_OptLoopInvariants0_70;
    OT_OptHigherOrder_135 = OT_OptHigherOrder0_75;
    OT_Tuple_137 = OT_Tuple0_82;
    OT_Untuple_136 = OT_Untuple0_83;
    OT_MergeCodeAfterSwitch_138 = OT_MergeCodeAfterSwitch0_69;
  }
  else
  {
    OT_Deforest_117 = (MR_Integer) 1;
    succeeded = (AllowSrcChangesDebug_102 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (GC_Method_40 != (MR_Integer) 5);
    if (succeeded)
    {
      OT_SpecTypes_121 = OT_SpecTypes0_77;
      switch (OT_SpecTypes_121) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          OT_SpecTypesUserGuided_122 = OT_SpecTypesUserGuided0_78;
          break;
        case (MR_Integer) 0:
          OT_SpecTypesUserGuided_122 = (MR_Integer) 0;
          break;
      }
    }
    else
    {
      OT_SpecTypes_121 = (MR_Integer) 1;
      OT_SpecTypesUserGuided_122 = (MR_Integer) 1;
    }
    succeeded = (AllowSrcChangesDebug_102 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ReorderConj_116 == (MR_Integer) 1);
    if (succeeded)
      OT_PropLocalConstraints_123 = OT_PropLocalConstraints0_65;
    else
      OT_PropLocalConstraints_123 = (MR_Integer) 1;
    succeeded = (AllowSrcChangesDebug_102 == (MR_Integer) 0);
    if (!(succeeded))
    {
      MR_Word Var_8313;
      MR_Word Var_8314;

      succeeded = ((MR_tag((MR_Word) OpMode_37)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_8313 = ((MR_Word) ((MR_hl_field(3, OpMode_37, 0))));
        succeeded = ((MR_tag((MR_Word) Var_8313)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_8314 = ((MR_Word) ((MR_hl_field(3, Var_8313, 0))));
          succeeded = (Var_8314 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
      OT_OptUnusedArgs_128 = (MR_Integer) 1;
    else
      OT_OptUnusedArgs_128 = OT_OptUnusedArgs0_73;
    succeeded = (AllowSrcChangesDebug_102 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (ProfileDeep_103 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (AllowOptLCMCTermSize_106 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (GC_Method_40 != (MR_Integer) 5);
      }
    }
    if (succeeded)
      OT_OptLCMC_130 = OT_OptLCMC0_80;
    else
      OT_OptLCMC_130 = (MR_Integer) 1;
    switch (AllowSrcChangesDebug_102) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          OT_OptDupCalls_132 = OT_OptDupCalls0_66;
          OT_OptSVCell_133 = OT_OptSVCell0_71;
          OT_OptLoopInvariants_134 = OT_OptLoopInvariants0_70;
          OT_OptHigherOrder_135 = OT_OptHigherOrder0_75;
          OT_Tuple_137 = OT_Tuple0_82;
          OT_Untuple_136 = OT_Untuple0_83;
          OT_MergeCodeAfterSwitch_138 = OT_MergeCodeAfterSwitch0_69;
        }
        break;
      case (MR_Integer) 0:
        {
          OT_OptDupCalls_132 = (MR_Integer) 1;
          OT_OptSVCell_133 = (MR_Integer) 1;
          OT_OptLoopInvariants_134 = (MR_Integer) 1;
          OT_OptHigherOrder_135 = (MR_Integer) 1;
          OT_Untuple_136 = (MR_Integer) 1;
          OT_Tuple_137 = (MR_Integer) 1;
          OT_MergeCodeAfterSwitch_138 = (MR_Integer) 1;
        }
        break;
    }
  }
  succeeded = (BodyTypeInfoLiveness_115 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (OT_PropLocalConstraints_123 == (MR_Integer) 0);
  if (succeeded)
    OT_PropConstraints_124 = OT_PropConstraints0_64;
  else
    OT_PropConstraints_124 = (MR_Integer) 1;
  succeeded = (OT_OptUnusedArgsIntermod0_74 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (OT_OptUnusedArgs_128 == (MR_Integer) 0);
  if (succeeded)
  {
    OT_OptUnusedArgsIntermod_129 = OT_OptUnusedArgsIntermod0_74;
    libs__globals__set_option_4_p_0((MR_Integer) 529, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_30_257, &STATE_VARIABLE_Globals_31_268);
  }
  else
  {
    OT_OptUnusedArgsIntermod_129 = (MR_Integer) 1;
    STATE_VARIABLE_Globals_31_268 = STATE_VARIABLE_Globals_30_257;
  }
  Var_4462 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 30)) & (MR_Integer) 1);
  Var_4463 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 29)) & (MR_Integer) 1);
  Var_4464 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 28)) & (MR_Integer) 1);
  Var_4465 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 27)) & (MR_Integer) 1);
  Var_4475 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 17)) & (MR_Integer) 1);
  Var_4476 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 16)) & (MR_Integer) 1);
  Var_4478 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 14)) & (MR_Integer) 1);
  Var_4480 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 12)) & (MR_Integer) 1);
  Var_4481 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 11)) & (MR_Integer) 1);
  Var_4482 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 10)) & (MR_Integer) 1);
  Var_4483 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 9)) & (MR_Integer) 1);
  Var_4484 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 8)) & (MR_Integer) 1);
  Var_4485 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 7)) & (MR_Integer) 1);
  Var_4490 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 2)) & (MR_Integer) 1);
  Var_4493 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 31)) & (MR_Integer) 1);
  Var_4494 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 30)) & (MR_Integer) 1);
  Var_4495 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 29)) & (MR_Integer) 1);
  Var_4497 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 27)) & (MR_Integer) 1);
  Var_4501 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 23)) & (MR_Integer) 1);
  Var_4502 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 22)) & (MR_Integer) 1);
  Var_4503 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 21)) & (MR_Integer) 1);
  Var_4504 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 20)) & (MR_Integer) 1);
  Var_4505 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 19)) & (MR_Integer) 1);
  Var_4506 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 18)) & (MR_Integer) 1);
  Var_4507 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 17)) & (MR_Integer) 1);
  Var_4508 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 16)) & (MR_Integer) 1);
  Var_4509 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 15)) & (MR_Integer) 1);
  Var_4510 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 14)) & (MR_Integer) 1);
  Var_4511 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 13)) & (MR_Integer) 1);
  Var_4512 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 12)) & (MR_Integer) 1);
  Var_4513 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 11)) & (MR_Integer) 1);
  Var_4514 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 10)) & (MR_Integer) 1);
  Var_4515 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 9)) & (MR_Integer) 1);
  Var_4516 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 8)) & (MR_Integer) 1);
  Var_4518 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 6)) & (MR_Integer) 1);
  Var_4521 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 3)) & (MR_Integer) 1);
  Var_4522 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 2)) & (MR_Integer) 1);
  Var_4523 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 1)) & (MR_Integer) 1);
  Var_4524 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) & (MR_Integer) 1);
  Var_4525 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 24)) & (MR_Integer) 1);
  Var_4526 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 23)) & (MR_Integer) 1);
  Var_4527 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 22)) & (MR_Integer) 1);
  Var_4528 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 21)) & (MR_Integer) 1);
  Var_4529 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 20)) & (MR_Integer) 1);
  Var_4530 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 19)) & (MR_Integer) 1);
  Var_4531 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 18)) & (MR_Integer) 1);
  Var_4532 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 17)) & (MR_Integer) 1);
  Var_4533 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 16)) & (MR_Integer) 1);
  Var_4534 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 15)) & (MR_Integer) 1);
  Var_4535 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 14)) & (MR_Integer) 1);
  Var_4536 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 13)) & (MR_Integer) 1);
  Var_4538 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 11)) & (MR_Integer) 1);
  Var_4540 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 9)) & (MR_Integer) 1);
  Var_4542 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 7)) & (MR_Integer) 1);
  Var_4543 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 6)) & (MR_Integer) 1);
  Var_4544 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 5)) & (MR_Integer) 1);
  Var_4545 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 4)) & (MR_Integer) 1);
  Var_4546 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 3)) & (MR_Integer) 1);
  Var_4547 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 2)) & (MR_Integer) 1);
  Var_4548 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 1)) & (MR_Integer) 1);
  Var_4549 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) & (MR_Integer) 1);
  Var_4550 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 3))));
  Var_4551 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 4))));
  Var_4552 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 5))));
  Var_4553 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 6))));
  Var_4554 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 7))));
  Var_4555 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 8))));
  Var_4556 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 9))));
  Var_4557 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 10))));
  Var_4558 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 11))));
  Var_4559 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 12))));
  Var_4560 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 13))));
  Var_4561 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 14))));
  Var_4562 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 15))));
  Var_4563 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 16))));
  Var_4565 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 18))));
  Var_4566 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 19))));
  Var_4567 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 20))));
  Var_4568 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 21))));
  Var_4569 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 22))));
  Var_4570 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 23))));
  Var_4571 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 24))));
  Var_4572 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 25))));
  Var_4573 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 26))));
  Var_4574 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 27))));
  Var_4575 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 28))));
  Var_4576 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 29))));
  Var_4577 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 30))));
  Var_4578 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 31))));
  Var_4580 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 33))));
  Var_4581 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 34))));
  Var_4582 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 35))));
  Var_4583 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 36))));
  Var_4584 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 37))));
  Var_4585 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 38))));
  Var_4586 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 39))));
  Var_4587 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 40))));
  {
    STATE_VARIABLE_OptTuple_30_299 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 0) = (MR_Box) (((((MR_Unsigned) (OT_AllowInlining_110) << 31)) | (((((MR_Unsigned) (Var_4462) << 30)) | (((((MR_Unsigned) (Var_4463) << 29)) | (((((MR_Unsigned) (Var_4464) << 28)) | (((((MR_Unsigned) (Var_4465) << 27)) | (((((MR_Unsigned) (OT_EnableConstStructPoly_111) << 26)) | (((((MR_Unsigned) (OT_EnableConstStructUser_112) << 25)) | (((((MR_Unsigned) (OT_OptCommonStructs_125) << 24)) | (((((MR_Unsigned) (OT_PropConstraints_124) << 23)) | (((((MR_Unsigned) (OT_PropLocalConstraints_123) << 22)) | (((((MR_Unsigned) (OT_OptDupCalls_132) << 21)) | (((((MR_Unsigned) (OT_PropConstants_114) << 20)) | (((((MR_Unsigned) (OT_ElimExcessAssigns_126) << 19)) | (((((MR_Unsigned) (OT_MergeCodeAfterSwitch_138) << 18)) | (((((MR_Unsigned) (Var_4475) << 17)) | (((((MR_Unsigned) (Var_4476) << 16)) | (((((MR_Unsigned) (OT_OptLoopInvariants_134) << 15)) | (((((MR_Unsigned) (Var_4478) << 14)) | (((((MR_Unsigned) (OT_OptSVCell_133) << 13)) | (((((MR_Unsigned) (Var_4480) << 12)) | (((((MR_Unsigned) (Var_4481) << 11)) | (((((MR_Unsigned) (Var_4482) << 10)) | (((((MR_Unsigned) (Var_4483) << 9)) | (((((MR_Unsigned) (Var_4484) << 8)) | (((((MR_Unsigned) (Var_4485) << 7)) | (((((MR_Unsigned) (OT_OptFollowCode_131) << 6)) | (((((MR_Unsigned) (OT_OptUnusedArgs_128) << 5)) | (((((MR_Unsigned) (OT_OptUnusedArgsIntermod_129) << 4)) | (((((MR_Unsigned) (OT_OptHigherOrder_135) << 3)) | (((((MR_Unsigned) (Var_4490) << 2)) | (((((MR_Unsigned) (OT_SpecTypes_121) << 1)) | (MR_Unsigned) (OT_SpecTypesUserGuided_122)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 1) = (MR_Box) (((((MR_Unsigned) (Var_4493) << 31)) | (((((MR_Unsigned) (Var_4494) << 30)) | (((((MR_Unsigned) (Var_4495) << 29)) | (((((MR_Unsigned) (OT_OptLCMC_130) << 28)) | (((((MR_Unsigned) (Var_4497) << 27)) | (((((MR_Unsigned) (OT_Deforest_117) << 26)) | (((((MR_Unsigned) (OT_Untuple_136) << 25)) | (((((MR_Unsigned) (OT_Tuple_137) << 24)) | (((((MR_Unsigned) (Var_4501) << 23)) | (((((MR_Unsigned) (Var_4502) << 22)) | (((((MR_Unsigned) (Var_4503) << 21)) | (((((MR_Unsigned) (Var_4504) << 20)) | (((((MR_Unsigned) (Var_4505) << 19)) | (((((MR_Unsigned) (Var_4506) << 18)) | (((((MR_Unsigned) (Var_4507) << 17)) | (((((MR_Unsigned) (Var_4508) << 16)) | (((((MR_Unsigned) (Var_4509) << 15)) | (((((MR_Unsigned) (Var_4510) << 14)) | (((((MR_Unsigned) (Var_4511) << 13)) | (((((MR_Unsigned) (Var_4512) << 12)) | (((((MR_Unsigned) (Var_4513) << 11)) | (((((MR_Unsigned) (Var_4514) << 10)) | (((((MR_Unsigned) (Var_4515) << 9)) | (((((MR_Unsigned) (Var_4516) << 8)) | (((((MR_Unsigned) (OT_OptMiddleRec_119) << 7)) | (((((MR_Unsigned) (Var_4518) << 6)) | (((((MR_Unsigned) (OT_AllowHijacks_120) << 5)) | (((((MR_Unsigned) (OT_OptMLDSTailCalls_109) << 4)) | (((((MR_Unsigned) (Var_4521) << 3)) | (((((MR_Unsigned) (Var_4522) << 2)) | (((((MR_Unsigned) (Var_4523) << 1)) | (MR_Unsigned) (Var_4524)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 2) = (MR_Box) (((((MR_Unsigned) (Var_4525) << 24)) | (((((MR_Unsigned) (Var_4526) << 23)) | (((((MR_Unsigned) (Var_4527) << 22)) | (((((MR_Unsigned) (Var_4528) << 21)) | (((((MR_Unsigned) (Var_4529) << 20)) | (((((MR_Unsigned) (Var_4530) << 19)) | (((((MR_Unsigned) (Var_4531) << 18)) | (((((MR_Unsigned) (Var_4532) << 17)) | (((((MR_Unsigned) (Var_4533) << 16)) | (((((MR_Unsigned) (Var_4534) << 15)) | (((((MR_Unsigned) (Var_4535) << 14)) | (((((MR_Unsigned) (Var_4536) << 13)) | (((((MR_Unsigned) (OT_StdLabels_108) << 12)) | (((((MR_Unsigned) (Var_4538) << 11)) | (((((MR_Unsigned) (OT_OptDups_107) << 10)) | (((((MR_Unsigned) (Var_4540) << 9)) | (((((MR_Unsigned) (OT_OptFrames_99) << 8)) | (((((MR_Unsigned) (Var_4542) << 7)) | (((((MR_Unsigned) (Var_4543) << 6)) | (((((MR_Unsigned) (Var_4544) << 5)) | (((((MR_Unsigned) (Var_4545) << 4)) | (((((MR_Unsigned) (Var_4546) << 3)) | (((((MR_Unsigned) (Var_4547) << 2)) | (((((MR_Unsigned) (Var_4548) << 1)) | (MR_Unsigned) (Var_4549)))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 3) = ((MR_Box) (Var_4550));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 4) = ((MR_Box) (Var_4551));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 5) = ((MR_Box) (Var_4552));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 6) = ((MR_Box) (Var_4553));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 7) = ((MR_Box) (Var_4554));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 8) = ((MR_Box) (Var_4555));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 9) = ((MR_Box) (Var_4556));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 10) = ((MR_Box) (Var_4557));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 11) = ((MR_Box) (Var_4558));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 12) = ((MR_Box) (Var_4559));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 13) = ((MR_Box) (Var_4560));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 14) = ((MR_Box) (Var_4561));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 15) = ((MR_Box) (Var_4562));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 16) = ((MR_Box) (Var_4563));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 17) = ((MR_Box) (OT_HigherOrderSizeLimit_105));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 18) = ((MR_Box) (Var_4565));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 19) = ((MR_Box) (Var_4566));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 20) = ((MR_Box) (Var_4567));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 21) = ((MR_Box) (Var_4568));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 22) = ((MR_Box) (Var_4569));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 23) = ((MR_Box) (Var_4570));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 24) = ((MR_Box) (Var_4571));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 25) = ((MR_Box) (Var_4572));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 26) = ((MR_Box) (Var_4573));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 27) = ((MR_Box) (Var_4574));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 28) = ((MR_Box) (Var_4575));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 29) = ((MR_Box) (Var_4576));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 30) = ((MR_Box) (Var_4577));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 31) = ((MR_Box) (Var_4578));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 32) = ((MR_Box) (OT_StringBinarySwitchSize_98));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 33) = ((MR_Box) (Var_4580));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 34) = ((MR_Box) (Var_4581));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 35) = ((MR_Box) (Var_4582));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 36) = ((MR_Box) (Var_4583));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 37) = ((MR_Box) (Var_4584));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 38) = ((MR_Box) (Var_4585));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 39) = ((MR_Box) (Var_4586));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_30_299, 40) = ((MR_Box) (Var_4587));
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_31_268, (MR_Integer) 337, &HighLevelCode_139);
  switch (HighLevelCode_139) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__handle_options__postprocess_options_lowlevel_4_p_0(STATE_VARIABLE_Globals_31_268, &STATE_VARIABLE_Globals_32_301, STATE_VARIABLE_OptTuple_30_299, &STATE_VARIABLE_OptTuple_31_302);
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptTuple_31_302 = STATE_VARIABLE_OptTuple_30_299;
        STATE_VARIABLE_Globals_32_301 = STATE_VARIABLE_Globals_31_268;
      }
      break;
  }
  libs__globals__set_opt_tuple_3_p_0(STATE_VARIABLE_OptTuple_31_302, STATE_VARIABLE_Globals_32_301, STATE_VARIABLE_Globals_143);
  libs__globals__globals_init_mutables_3_p_0(*STATE_VARIABLE_Globals_143);
}

static void MR_CALL 
libs__handle_options__postprocess_options_lowlevel_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_OptTuple_0_18,
  MR_Word * STATE_VARIABLE_OptTuple_19)
{
  MR_bool succeeded;
  MR_Word SavedVarsCell_7 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 0))) >> 13)) & (MR_Integer) 1);
  MR_Word OptFrames_8;
  MR_Word OptProcDups_9;
  MR_Word UseLocalVars_10;
  MR_Integer OptRepeat_11;
  MR_Word UnboxedFloat_12;
  MR_Word UnboxedInt64s_13;
  MR_Word NonLocalGotos_14;
  MR_Word AsmLabels_15;
  MR_Word STATE_VARIABLE_OptTuple_1_20;
  MR_Word STATE_VARIABLE_OptTuple_3_24;
  MR_Word STATE_VARIABLE_OptTuple_4_31;
  MR_Word STATE_VARIABLE_OptTuple_5_34;
  MR_Word STATE_VARIABLE_OptTuple_7_39;
  MR_Word Var_112 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 24)) & (MR_Integer) 1);
  MR_Word Var_113 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 23)) & (MR_Integer) 1);
  MR_Word Var_114 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_115 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_116 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_117 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_118 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_119 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_120 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_121 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_122 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_124 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_125 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_126 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_127 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_128 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_129 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_130 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_131 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_132 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_133 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_134 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_135 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_136 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) & (MR_Integer) 1);
  MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 3))));
  MR_Integer Var_138 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 4))));
  MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 5))));
  MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 6))));
  MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 7))));
  MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 8))));
  MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 9))));
  MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 10))));
  MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 11))));
  MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 12))));
  MR_Integer Var_147 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 13))));
  MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 14))));
  MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 15))));
  MR_Integer Var_150 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 16))));
  MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 17))));
  MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 18))));
  MR_Integer Var_153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 19))));
  MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 20))));
  MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 21))));
  MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 22))));
  MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 23))));
  MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 24))));
  MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 25))));
  MR_Integer Var_160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 26))));
  MR_Integer Var_161 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 27))));
  MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 28))));
  MR_Integer Var_163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 29))));
  MR_Integer Var_164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 30))));
  MR_Integer Var_165 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 31))));
  MR_Integer Var_166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 32))));
  MR_Integer Var_167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 33))));
  MR_Integer Var_168 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 34))));
  MR_Integer Var_169 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 35))));
  MR_Integer Var_170 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 36))));
  MR_Integer Var_171 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 37))));
  MR_Integer Var_172 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 38))));
  MR_Integer Var_173 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 39))));
  MR_String Var_174 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 40))));
  MR_Word Var_366;
  MR_Word Var_367;
  MR_Word Var_368;
  MR_Word Var_369;
  MR_Word Var_370;
  MR_Word Var_371;
  MR_Word Var_372;
  MR_Word Var_374;
  MR_Word Var_375;
  MR_Word Var_376;
  MR_Word Var_377;
  MR_Word Var_378;
  MR_Word Var_380;
  MR_Word Var_381;
  MR_Word Var_382;
  MR_Word Var_383;
  MR_Word Var_384;
  MR_Word Var_385;
  MR_Word Var_386;
  MR_Word Var_387;
  MR_Word Var_388;
  MR_Word Var_389;
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
  MR_Integer Var_421;
  MR_Integer Var_422;
  MR_Integer Var_423;
  MR_Integer Var_424;
  MR_Integer Var_425;
  MR_Integer Var_426;
  MR_String Var_427;
  MR_String Var_1949;
  MR_Integer Var_1950;
  MR_Integer Var_1951;
  MR_Integer Var_1952;
  MR_Integer Var_1953;
  MR_Integer Var_1954;
  MR_Integer Var_1955;
  MR_Integer Var_1956;
  MR_Integer Var_1957;
  MR_Integer Var_1958;
  MR_Integer Var_1959;
  MR_Integer Var_1960;
  MR_Integer Var_1961;
  MR_Integer Var_1962;
  MR_Integer Var_1963;
  MR_Integer Var_1964;
  MR_Integer Var_1965;
  MR_Integer Var_1966;
  MR_Integer Var_1967;
  MR_Integer Var_1968;
  MR_Integer Var_1969;
  MR_Integer Var_1970;
  MR_Integer Var_1971;
  MR_Integer Var_1972;
  MR_Integer Var_1973;
  MR_Integer Var_1974;
  MR_Integer Var_1975;
  MR_Integer Var_1976;
  MR_Integer Var_1977;
  MR_Integer Var_1978;
  MR_Integer Var_1979;
  MR_Integer Var_1980;
  MR_Integer Var_1981;
  MR_Integer Var_1982;
  MR_Integer Var_1983;
  MR_Integer Var_1984;
  MR_Integer Var_1985;
  MR_Integer Var_1986;
  MR_Word Var_2012;
  MR_Word Var_2013;
  MR_Word Var_2014;
  MR_Word Var_2015;
  MR_Word Var_2016;
  MR_Word Var_2017;
  MR_Word Var_2018;
  MR_Word Var_2019;
  MR_Word Var_2020;
  MR_Word Var_2021;
  MR_Word Var_2022;
  MR_Word Var_2024;
  MR_Word Var_2025;
  MR_Word Var_2026;
  MR_Word Var_2027;
  MR_Word Var_2028;
  MR_Word Var_2029;
  MR_Word Var_2030;
  MR_Word Var_2031;
  MR_Word Var_2032;
  MR_Word Var_2033;
  MR_Word Var_2034;
  MR_Word Var_2035;
  MR_Word Var_2036;
  MR_Word Var_2037;
  MR_Word Var_2038;
  MR_Word Var_2039;
  MR_Word Var_2040;
  MR_Word Var_2041;
  MR_Word Var_2042;
  MR_Word Var_2043;
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 0)));
  MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 1)));
  MR_Unsigned packed_word_2;
  MR_Unsigned packed_word_3;
  MR_Integer Var_30;
  MR_Unsigned packed_word_7;
  MR_Unsigned packed_word_8;

  switch (SavedVarsCell_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_OptTuple_1_20 = STATE_VARIABLE_OptTuple_0_18;
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_1_20 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 0) = (MR_Box) (packed_word_0);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 1) = (MR_Box) (packed_word_1);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2) = (MR_Box) (((((MR_Unsigned) (Var_112) << 24)) | (((((MR_Unsigned) (Var_113) << 23)) | (((((MR_Unsigned) (Var_114) << 22)) | (((((MR_Unsigned) (Var_115) << 21)) | (((((MR_Unsigned) (Var_116) << 20)) | (((((MR_Unsigned) (Var_117) << 19)) | (((((MR_Unsigned) (Var_118) << 18)) | (((((MR_Unsigned) (Var_119) << 17)) | (((((MR_Unsigned) (Var_120) << 16)) | (((((MR_Unsigned) (Var_121) << 15)) | (((((MR_Unsigned) (Var_122) << 14)) | (((((MR_Unsigned) ((MR_Integer) 0) << 13)) | (((((MR_Unsigned) (Var_124) << 12)) | (((((MR_Unsigned) (Var_125) << 11)) | (((((MR_Unsigned) (Var_126) << 10)) | (((((MR_Unsigned) (Var_127) << 9)) | (((((MR_Unsigned) (Var_128) << 8)) | (((((MR_Unsigned) (Var_129) << 7)) | (((((MR_Unsigned) (Var_130) << 6)) | (((((MR_Unsigned) (Var_131) << 5)) | (((((MR_Unsigned) (Var_132) << 4)) | (((((MR_Unsigned) (Var_133) << 3)) | (((((MR_Unsigned) (Var_134) << 2)) | (((((MR_Unsigned) (Var_135) << 1)) | (MR_Unsigned) (Var_136)))))))))))))))))))))))))))))))))))))))))))))))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 3) = ((MR_Box) (Var_137));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 4) = ((MR_Box) (Var_138));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 5) = ((MR_Box) (Var_139));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 6) = ((MR_Box) (Var_140));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 7) = ((MR_Box) (Var_141));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 8) = ((MR_Box) (Var_142));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 9) = ((MR_Box) (Var_143));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 10) = ((MR_Box) (Var_144));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 11) = ((MR_Box) (Var_145));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 12) = ((MR_Box) (Var_146));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 13) = ((MR_Box) (Var_147));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 14) = ((MR_Box) (Var_148));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 15) = ((MR_Box) (Var_149));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 16) = ((MR_Box) (Var_150));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 17) = ((MR_Box) (Var_151));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 18) = ((MR_Box) (Var_152));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 19) = ((MR_Box) (Var_153));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 20) = ((MR_Box) (Var_154));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 21) = ((MR_Box) (Var_155));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 22) = ((MR_Box) (Var_156));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 23) = ((MR_Box) (Var_157));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 24) = ((MR_Box) (Var_158));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 25) = ((MR_Box) (Var_159));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 26) = ((MR_Box) (Var_160));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 27) = ((MR_Box) (Var_161));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 28) = ((MR_Box) (Var_162));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 29) = ((MR_Box) (Var_163));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 30) = ((MR_Box) (Var_164));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 31) = ((MR_Box) (Var_165));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 32) = ((MR_Box) (Var_166));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 33) = ((MR_Box) (Var_167));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 34) = ((MR_Box) (Var_168));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 35) = ((MR_Box) (Var_169));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 36) = ((MR_Box) (Var_170));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 37) = ((MR_Box) (Var_171));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 38) = ((MR_Box) (Var_172));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 39) = ((MR_Box) (Var_173));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 40) = ((MR_Box) (Var_174));
      }
      break;
  }
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 0)));
  packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 1)));
  Var_366 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 24)) & (MR_Integer) 1);
  Var_367 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 23)) & (MR_Integer) 1);
  Var_368 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 22)) & (MR_Integer) 1);
  Var_369 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 21)) & (MR_Integer) 1);
  Var_370 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 20)) & (MR_Integer) 1);
  Var_371 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 19)) & (MR_Integer) 1);
  Var_372 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 18)) & (MR_Integer) 1);
  Var_374 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 16)) & (MR_Integer) 1);
  Var_375 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 15)) & (MR_Integer) 1);
  Var_376 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 14)) & (MR_Integer) 1);
  Var_377 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 13)) & (MR_Integer) 1);
  Var_378 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 12)) & (MR_Integer) 1);
  Var_380 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 10)) & (MR_Integer) 1);
  Var_381 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 9)) & (MR_Integer) 1);
  OptFrames_8 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 8)) & (MR_Integer) 1);
  Var_382 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 7)) & (MR_Integer) 1);
  Var_383 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 6)) & (MR_Integer) 1);
  Var_384 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 5)) & (MR_Integer) 1);
  Var_385 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 4)) & (MR_Integer) 1);
  Var_386 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 3)) & (MR_Integer) 1);
  Var_387 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 2)) & (MR_Integer) 1);
  Var_388 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) >> 1)) & (MR_Integer) 1);
  Var_389 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 2))) & (MR_Integer) 1);
  Var_390 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 3))));
  Var_391 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 4))));
  Var_392 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 5))));
  Var_393 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 6))));
  Var_394 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 7))));
  Var_395 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 8))));
  Var_396 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 9))));
  Var_397 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 10))));
  Var_398 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 11))));
  Var_399 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 12))));
  Var_400 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 13))));
  Var_401 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 14))));
  Var_402 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 15))));
  Var_403 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 16))));
  Var_404 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 17))));
  Var_405 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 18))));
  Var_406 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 19))));
  Var_407 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 20))));
  Var_408 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 21))));
  Var_409 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 22))));
  Var_410 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 23))));
  Var_411 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 24))));
  Var_412 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 25))));
  Var_413 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 26))));
  Var_414 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 27))));
  Var_415 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 28))));
  Var_416 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 29))));
  Var_417 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 30))));
  Var_418 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 31))));
  Var_419 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 32))));
  Var_420 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 33))));
  Var_421 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 34))));
  Var_422 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 35))));
  Var_423 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 36))));
  Var_424 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 37))));
  Var_425 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 38))));
  Var_426 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 39))));
  Var_427 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_1_20, 40))));
  switch (OptFrames_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_OptTuple_3_24 = STATE_VARIABLE_OptTuple_1_20;
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_3_24 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 0) = (MR_Box) (packed_word_2);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 1) = (MR_Box) (packed_word_3);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 2) = (MR_Box) (((((MR_Unsigned) (Var_366) << 24)) | (((((MR_Unsigned) (Var_367) << 23)) | (((((MR_Unsigned) (Var_368) << 22)) | (((((MR_Unsigned) (Var_369) << 21)) | (((((MR_Unsigned) (Var_370) << 20)) | (((((MR_Unsigned) (Var_371) << 19)) | (((((MR_Unsigned) (Var_372) << 18)) | (((((MR_Unsigned) ((MR_Integer) 0) << 17)) | (((((MR_Unsigned) (Var_374) << 16)) | (((((MR_Unsigned) (Var_375) << 15)) | (((((MR_Unsigned) (Var_376) << 14)) | (((((MR_Unsigned) (Var_377) << 13)) | (((((MR_Unsigned) (Var_378) << 12)) | (((((MR_Unsigned) ((MR_Integer) 0) << 11)) | (((((MR_Unsigned) (Var_380) << 10)) | (((((MR_Unsigned) (Var_381) << 9)) | (((((MR_Unsigned) (OptFrames_8) << 8)) | (((((MR_Unsigned) (Var_382) << 7)) | (((((MR_Unsigned) (Var_383) << 6)) | (((((MR_Unsigned) (Var_384) << 5)) | (((((MR_Unsigned) (Var_385) << 4)) | (((((MR_Unsigned) (Var_386) << 3)) | (((((MR_Unsigned) (Var_387) << 2)) | (((((MR_Unsigned) (Var_388) << 1)) | (MR_Unsigned) (Var_389)))))))))))))))))))))))))))))))))))))))))))))))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 3) = ((MR_Box) (Var_390));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 4) = ((MR_Box) (Var_391));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 5) = ((MR_Box) (Var_392));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 6) = ((MR_Box) (Var_393));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 7) = ((MR_Box) (Var_394));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 8) = ((MR_Box) (Var_395));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 9) = ((MR_Box) (Var_396));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 10) = ((MR_Box) (Var_397));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 11) = ((MR_Box) (Var_398));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 12) = ((MR_Box) (Var_399));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 13) = ((MR_Box) (Var_400));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 14) = ((MR_Box) (Var_401));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 15) = ((MR_Box) (Var_402));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 16) = ((MR_Box) (Var_403));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 17) = ((MR_Box) (Var_404));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 18) = ((MR_Box) (Var_405));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 19) = ((MR_Box) (Var_406));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 20) = ((MR_Box) (Var_407));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 21) = ((MR_Box) (Var_408));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 22) = ((MR_Box) (Var_409));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 23) = ((MR_Box) (Var_410));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 24) = ((MR_Box) (Var_411));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 25) = ((MR_Box) (Var_412));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 26) = ((MR_Box) (Var_413));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 27) = ((MR_Box) (Var_414));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 28) = ((MR_Box) (Var_415));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 29) = ((MR_Box) (Var_416));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 30) = ((MR_Box) (Var_417));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 31) = ((MR_Box) (Var_418));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 32) = ((MR_Box) (Var_419));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 33) = ((MR_Box) (Var_420));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 34) = ((MR_Box) (Var_421));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 35) = ((MR_Box) (Var_422));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 36) = ((MR_Box) (Var_423));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 37) = ((MR_Box) (Var_424));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 38) = ((MR_Box) (Var_425));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 39) = ((MR_Box) (Var_426));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 40) = ((MR_Box) (Var_427));
      }
      break;
  }
  UseLocalVars_10 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 2))) >> 13)) & (MR_Integer) 1);
  OptProcDups_9 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 2))) >> 9)) & (MR_Integer) 1);
  OptRepeat_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 37))));
  switch (OptProcDups_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Globals_17 = STATE_VARIABLE_Globals_0_16;
      break;
    case (MR_Integer) 0:
      libs__globals__set_option_4_p_0((MR_Integer) 374, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_16, STATE_VARIABLE_Globals_17);
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
    MR_Integer Var_1149 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 3))));
    MR_Integer Var_1150 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 4))));
    MR_Integer Var_1151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 5))));
    MR_Integer Var_1152 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 6))));
    MR_Integer Var_1153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 7))));
    MR_Integer Var_1154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 8))));
    MR_Integer Var_1155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 9))));
    MR_Integer Var_1156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 10))));
    MR_Integer Var_1157 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 11))));
    MR_Integer Var_1158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 12))));
    MR_Integer Var_1159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 13))));
    MR_Integer Var_1160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 14))));
    MR_Integer Var_1161 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 15))));
    MR_Integer Var_1162 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 16))));
    MR_Integer Var_1163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 17))));
    MR_Integer Var_1164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 18))));
    MR_Integer Var_1165 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 19))));
    MR_Integer Var_1166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 20))));
    MR_Integer Var_1167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 21))));
    MR_Integer Var_1168 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 22))));
    MR_Integer Var_1169 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 23))));
    MR_Integer Var_1170 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 24))));
    MR_Integer Var_1171 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 25))));
    MR_Integer Var_1172 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 26))));
    MR_Integer Var_1173 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 27))));
    MR_Integer Var_1174 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 28))));
    MR_Integer Var_1175 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 29))));
    MR_Integer Var_1176 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 30))));
    MR_Integer Var_1177 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 31))));
    MR_Integer Var_1178 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 32))));
    MR_Integer Var_1179 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 33))));
    MR_Integer Var_1180 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 34))));
    MR_Integer Var_1181 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 35))));
    MR_Integer Var_1182 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 36))));
    MR_Integer Var_1184 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 38))));
    MR_Integer Var_1185 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 39))));
    MR_String Var_1186 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 40))));
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 0)));
    MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 1)));
    MR_Unsigned packed_word_6 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_3_24, 2)));

    {
      STATE_VARIABLE_OptTuple_4_31 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 0) = (MR_Box) (packed_word_4);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1) = (MR_Box) (packed_word_5);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 2) = (MR_Box) (packed_word_6);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 3) = ((MR_Box) (Var_1149));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 4) = ((MR_Box) (Var_1150));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 5) = ((MR_Box) (Var_1151));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 6) = ((MR_Box) (Var_1152));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 7) = ((MR_Box) (Var_1153));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 8) = ((MR_Box) (Var_1154));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 9) = ((MR_Box) (Var_1155));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 10) = ((MR_Box) (Var_1156));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 11) = ((MR_Box) (Var_1157));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 12) = ((MR_Box) (Var_1158));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 13) = ((MR_Box) (Var_1159));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 14) = ((MR_Box) (Var_1160));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 15) = ((MR_Box) (Var_1161));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 16) = ((MR_Box) (Var_1162));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 17) = ((MR_Box) (Var_1163));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 18) = ((MR_Box) (Var_1164));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 19) = ((MR_Box) (Var_1165));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 20) = ((MR_Box) (Var_1166));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 21) = ((MR_Box) (Var_1167));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 22) = ((MR_Box) (Var_1168));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 23) = ((MR_Box) (Var_1169));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 24) = ((MR_Box) (Var_1170));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 25) = ((MR_Box) (Var_1171));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 26) = ((MR_Box) (Var_1172));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 27) = ((MR_Box) (Var_1173));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 28) = ((MR_Box) (Var_1174));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 29) = ((MR_Box) (Var_1175));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 30) = ((MR_Box) (Var_1176));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 31) = ((MR_Box) (Var_1177));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 32) = ((MR_Box) (Var_1178));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 33) = ((MR_Box) (Var_1179));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 34) = ((MR_Box) (Var_1180));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 35) = ((MR_Box) (Var_1181));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 36) = ((MR_Box) (Var_1182));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 37) = ((MR_Box) (Var_30));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 38) = ((MR_Box) (Var_1184));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 39) = ((MR_Box) (Var_1185));
      MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 40) = ((MR_Box) (Var_1186));
    }
  }
  else
    STATE_VARIABLE_OptTuple_4_31 = STATE_VARIABLE_OptTuple_3_24;
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 317, &UnboxedFloat_12);
  packed_word_7 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 0)));
  Var_2043 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 31)) & (MR_Integer) 1);
  Var_2042 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 30)) & (MR_Integer) 1);
  Var_2041 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 29)) & (MR_Integer) 1);
  Var_2040 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 28)) & (MR_Integer) 1);
  Var_2039 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 27)) & (MR_Integer) 1);
  Var_2038 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 26)) & (MR_Integer) 1);
  Var_2037 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 25)) & (MR_Integer) 1);
  Var_2036 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 24)) & (MR_Integer) 1);
  Var_2035 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 23)) & (MR_Integer) 1);
  Var_2034 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 22)) & (MR_Integer) 1);
  Var_2033 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 21)) & (MR_Integer) 1);
  Var_2032 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 20)) & (MR_Integer) 1);
  Var_2031 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 19)) & (MR_Integer) 1);
  Var_2030 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 18)) & (MR_Integer) 1);
  Var_2029 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 17)) & (MR_Integer) 1);
  Var_2028 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 16)) & (MR_Integer) 1);
  Var_2027 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 15)) & (MR_Integer) 1);
  Var_2026 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 14)) & (MR_Integer) 1);
  Var_2025 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 13)) & (MR_Integer) 1);
  Var_2024 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 12)) & (MR_Integer) 1);
  Var_2022 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 10)) & (MR_Integer) 1);
  Var_2021 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 9)) & (MR_Integer) 1);
  Var_2020 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 8)) & (MR_Integer) 1);
  Var_2019 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 7)) & (MR_Integer) 1);
  Var_2018 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 6)) & (MR_Integer) 1);
  Var_2017 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 5)) & (MR_Integer) 1);
  Var_2016 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 4)) & (MR_Integer) 1);
  Var_2015 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 3)) & (MR_Integer) 1);
  Var_2014 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 2)) & (MR_Integer) 1);
  Var_2013 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) >> 1)) & (MR_Integer) 1);
  Var_2012 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 1))) & (MR_Integer) 1);
  packed_word_8 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 2)));
  Var_1986 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 3))));
  Var_1985 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 4))));
  Var_1984 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 5))));
  Var_1983 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 6))));
  Var_1982 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 7))));
  Var_1981 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 8))));
  Var_1980 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 9))));
  Var_1979 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 10))));
  Var_1978 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 11))));
  Var_1977 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 12))));
  Var_1976 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 13))));
  Var_1975 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 14))));
  Var_1974 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 15))));
  Var_1973 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 16))));
  Var_1972 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 17))));
  Var_1971 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 18))));
  Var_1970 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 19))));
  Var_1969 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 20))));
  Var_1968 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 21))));
  Var_1967 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 22))));
  Var_1966 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 23))));
  Var_1965 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 24))));
  Var_1964 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 25))));
  Var_1963 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 26))));
  Var_1962 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 27))));
  Var_1961 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 28))));
  Var_1960 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 29))));
  Var_1959 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 30))));
  Var_1958 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 31))));
  Var_1957 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 32))));
  Var_1956 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 33))));
  Var_1955 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 34))));
  Var_1954 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 35))));
  Var_1953 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 36))));
  Var_1952 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 37))));
  Var_1951 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 38))));
  Var_1950 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 39))));
  Var_1949 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_4_31, 40))));
  switch (UnboxedFloat_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_5_34 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 0) = (MR_Box) (packed_word_7);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1) = (MR_Box) (((((MR_Unsigned) (Var_2043) << 31)) | (((((MR_Unsigned) (Var_2042) << 30)) | (((((MR_Unsigned) (Var_2041) << 29)) | (((((MR_Unsigned) (Var_2040) << 28)) | (((((MR_Unsigned) (Var_2039) << 27)) | (((((MR_Unsigned) (Var_2038) << 26)) | (((((MR_Unsigned) (Var_2037) << 25)) | (((((MR_Unsigned) (Var_2036) << 24)) | (((((MR_Unsigned) (Var_2035) << 23)) | (((((MR_Unsigned) (Var_2034) << 22)) | (((((MR_Unsigned) (Var_2033) << 21)) | (((((MR_Unsigned) (Var_2032) << 20)) | (((((MR_Unsigned) (Var_2031) << 19)) | (((((MR_Unsigned) (Var_2030) << 18)) | (((((MR_Unsigned) (Var_2029) << 17)) | (((((MR_Unsigned) (Var_2028) << 16)) | (((((MR_Unsigned) (Var_2027) << 15)) | (((((MR_Unsigned) (Var_2026) << 14)) | (((((MR_Unsigned) (Var_2025) << 13)) | (((((MR_Unsigned) (Var_2024) << 12)) | (((((MR_Unsigned) ((MR_Integer) 0) << 11)) | (((((MR_Unsigned) (Var_2022) << 10)) | (((((MR_Unsigned) (Var_2021) << 9)) | (((((MR_Unsigned) (Var_2020) << 8)) | (((((MR_Unsigned) (Var_2019) << 7)) | (((((MR_Unsigned) (Var_2018) << 6)) | (((((MR_Unsigned) (Var_2017) << 5)) | (((((MR_Unsigned) (Var_2016) << 4)) | (((((MR_Unsigned) (Var_2015) << 3)) | (((((MR_Unsigned) (Var_2014) << 2)) | (((((MR_Unsigned) (Var_2013) << 1)) | (MR_Unsigned) (Var_2012)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 2) = (MR_Box) (packed_word_8);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 3) = ((MR_Box) (Var_1986));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 4) = ((MR_Box) (Var_1985));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 5) = ((MR_Box) (Var_1984));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 6) = ((MR_Box) (Var_1983));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 7) = ((MR_Box) (Var_1982));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 8) = ((MR_Box) (Var_1981));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 9) = ((MR_Box) (Var_1980));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 10) = ((MR_Box) (Var_1979));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 11) = ((MR_Box) (Var_1978));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 12) = ((MR_Box) (Var_1977));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 13) = ((MR_Box) (Var_1976));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 14) = ((MR_Box) (Var_1975));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 15) = ((MR_Box) (Var_1974));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 16) = ((MR_Box) (Var_1973));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 17) = ((MR_Box) (Var_1972));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 18) = ((MR_Box) (Var_1971));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 19) = ((MR_Box) (Var_1970));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 20) = ((MR_Box) (Var_1969));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 21) = ((MR_Box) (Var_1968));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 22) = ((MR_Box) (Var_1967));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 23) = ((MR_Box) (Var_1966));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 24) = ((MR_Box) (Var_1965));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 25) = ((MR_Box) (Var_1964));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 26) = ((MR_Box) (Var_1963));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 27) = ((MR_Box) (Var_1962));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 28) = ((MR_Box) (Var_1961));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 29) = ((MR_Box) (Var_1960));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 30) = ((MR_Box) (Var_1959));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 31) = ((MR_Box) (Var_1958));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 32) = ((MR_Box) (Var_1957));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 33) = ((MR_Box) (Var_1956));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 34) = ((MR_Box) (Var_1955));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 35) = ((MR_Box) (Var_1954));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 36) = ((MR_Box) (Var_1953));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 37) = ((MR_Box) (Var_1952));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 38) = ((MR_Box) (Var_1951));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 39) = ((MR_Box) (Var_1950));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 40) = ((MR_Box) (Var_1949));
      }
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptTuple_5_34 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 0) = (MR_Box) (packed_word_7);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1) = (MR_Box) (((((MR_Unsigned) (Var_2043) << 31)) | (((((MR_Unsigned) (Var_2042) << 30)) | (((((MR_Unsigned) (Var_2041) << 29)) | (((((MR_Unsigned) (Var_2040) << 28)) | (((((MR_Unsigned) (Var_2039) << 27)) | (((((MR_Unsigned) (Var_2038) << 26)) | (((((MR_Unsigned) (Var_2037) << 25)) | (((((MR_Unsigned) (Var_2036) << 24)) | (((((MR_Unsigned) (Var_2035) << 23)) | (((((MR_Unsigned) (Var_2034) << 22)) | (((((MR_Unsigned) (Var_2033) << 21)) | (((((MR_Unsigned) (Var_2032) << 20)) | (((((MR_Unsigned) (Var_2031) << 19)) | (((((MR_Unsigned) (Var_2030) << 18)) | (((((MR_Unsigned) (Var_2029) << 17)) | (((((MR_Unsigned) (Var_2028) << 16)) | (((((MR_Unsigned) (Var_2027) << 15)) | (((((MR_Unsigned) (Var_2026) << 14)) | (((((MR_Unsigned) (Var_2025) << 13)) | (((((MR_Unsigned) (Var_2024) << 12)) | (((((MR_Unsigned) ((MR_Integer) 0) << 11)) | (((((MR_Unsigned) (Var_2022) << 10)) | (((((MR_Unsigned) (Var_2021) << 9)) | (((((MR_Unsigned) (Var_2020) << 8)) | (((((MR_Unsigned) (Var_2019) << 7)) | (((((MR_Unsigned) (Var_2018) << 6)) | (((((MR_Unsigned) (Var_2017) << 5)) | (((((MR_Unsigned) (Var_2016) << 4)) | (((((MR_Unsigned) (Var_2015) << 3)) | (((((MR_Unsigned) (Var_2014) << 2)) | (((((MR_Unsigned) (Var_2013) << 1)) | (MR_Unsigned) (Var_2012)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 2) = (MR_Box) (packed_word_8);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 3) = ((MR_Box) (Var_1986));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 4) = ((MR_Box) (Var_1985));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 5) = ((MR_Box) (Var_1984));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 6) = ((MR_Box) (Var_1983));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 7) = ((MR_Box) (Var_1982));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 8) = ((MR_Box) (Var_1981));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 9) = ((MR_Box) (Var_1980));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 10) = ((MR_Box) (Var_1979));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 11) = ((MR_Box) (Var_1978));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 12) = ((MR_Box) (Var_1977));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 13) = ((MR_Box) (Var_1976));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 14) = ((MR_Box) (Var_1975));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 15) = ((MR_Box) (Var_1974));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 16) = ((MR_Box) (Var_1973));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 17) = ((MR_Box) (Var_1972));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 18) = ((MR_Box) (Var_1971));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 19) = ((MR_Box) (Var_1970));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 20) = ((MR_Box) (Var_1969));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 21) = ((MR_Box) (Var_1968));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 22) = ((MR_Box) (Var_1967));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 23) = ((MR_Box) (Var_1966));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 24) = ((MR_Box) (Var_1965));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 25) = ((MR_Box) (Var_1964));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 26) = ((MR_Box) (Var_1963));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 27) = ((MR_Box) (Var_1962));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 28) = ((MR_Box) (Var_1961));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 29) = ((MR_Box) (Var_1960));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 30) = ((MR_Box) (Var_1959));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 31) = ((MR_Box) (Var_1958));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 32) = ((MR_Box) (Var_1957));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 33) = ((MR_Box) (Var_1956));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 34) = ((MR_Box) (Var_1955));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 35) = ((MR_Box) (Var_1954));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 36) = ((MR_Box) (Var_1953));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 37) = ((MR_Box) (Var_1952));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 38) = ((MR_Box) (Var_1951));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 39) = ((MR_Box) (Var_1950));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 40) = ((MR_Box) (Var_1949));
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 318, &UnboxedInt64s_13);
  switch (UnboxedInt64s_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_1600 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 31)) & (MR_Integer) 1);
        MR_Word Var_1601 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 30)) & (MR_Integer) 1);
        MR_Word Var_1602 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 29)) & (MR_Integer) 1);
        MR_Word Var_1603 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 28)) & (MR_Integer) 1);
        MR_Word Var_1604 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 27)) & (MR_Integer) 1);
        MR_Word Var_1605 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 26)) & (MR_Integer) 1);
        MR_Word Var_1606 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 25)) & (MR_Integer) 1);
        MR_Word Var_1607 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 24)) & (MR_Integer) 1);
        MR_Word Var_1608 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 23)) & (MR_Integer) 1);
        MR_Word Var_1609 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 22)) & (MR_Integer) 1);
        MR_Word Var_1610 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 21)) & (MR_Integer) 1);
        MR_Word Var_1611 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 20)) & (MR_Integer) 1);
        MR_Word Var_1612 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 19)) & (MR_Integer) 1);
        MR_Word Var_1613 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 18)) & (MR_Integer) 1);
        MR_Word Var_1614 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 17)) & (MR_Integer) 1);
        MR_Word Var_1615 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 16)) & (MR_Integer) 1);
        MR_Word Var_1616 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 15)) & (MR_Integer) 1);
        MR_Word Var_1617 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 14)) & (MR_Integer) 1);
        MR_Word Var_1618 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 13)) & (MR_Integer) 1);
        MR_Word Var_1619 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 12)) & (MR_Integer) 1);
        MR_Word Var_1620 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 11)) & (MR_Integer) 1);
        MR_Word Var_1622 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 9)) & (MR_Integer) 1);
        MR_Word Var_1623 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 8)) & (MR_Integer) 1);
        MR_Word Var_1624 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 7)) & (MR_Integer) 1);
        MR_Word Var_1625 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 6)) & (MR_Integer) 1);
        MR_Word Var_1626 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 5)) & (MR_Integer) 1);
        MR_Word Var_1627 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 4)) & (MR_Integer) 1);
        MR_Word Var_1628 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 3)) & (MR_Integer) 1);
        MR_Word Var_1629 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 2)) & (MR_Integer) 1);
        MR_Word Var_1630 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_1631 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) & (MR_Integer) 1);
        MR_Integer Var_1657 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 3))));
        MR_Integer Var_1658 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 4))));
        MR_Integer Var_1659 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 5))));
        MR_Integer Var_1660 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 6))));
        MR_Integer Var_1661 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 7))));
        MR_Integer Var_1662 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 8))));
        MR_Integer Var_1663 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 9))));
        MR_Integer Var_1664 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 10))));
        MR_Integer Var_1665 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 11))));
        MR_Integer Var_1666 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 12))));
        MR_Integer Var_1667 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 13))));
        MR_Integer Var_1668 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 14))));
        MR_Integer Var_1669 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 15))));
        MR_Integer Var_1670 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 16))));
        MR_Integer Var_1671 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 17))));
        MR_Integer Var_1672 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 18))));
        MR_Integer Var_1673 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 19))));
        MR_Integer Var_1674 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 20))));
        MR_Integer Var_1675 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 21))));
        MR_Integer Var_1676 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 22))));
        MR_Integer Var_1677 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 23))));
        MR_Integer Var_1678 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 24))));
        MR_Integer Var_1679 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 25))));
        MR_Integer Var_1680 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 26))));
        MR_Integer Var_1681 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 27))));
        MR_Integer Var_1682 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 28))));
        MR_Integer Var_1683 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 29))));
        MR_Integer Var_1684 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 30))));
        MR_Integer Var_1685 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 31))));
        MR_Integer Var_1686 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 32))));
        MR_Integer Var_1687 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 33))));
        MR_Integer Var_1688 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 34))));
        MR_Integer Var_1689 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 35))));
        MR_Integer Var_1690 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 36))));
        MR_Integer Var_1691 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 37))));
        MR_Integer Var_1692 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 38))));
        MR_Integer Var_1693 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 39))));
        MR_String Var_1694 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 40))));
        MR_Unsigned packed_word_9 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 0)));
        MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 2)));

        {
          STATE_VARIABLE_OptTuple_7_39 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 0) = (MR_Box) (packed_word_9);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1) = (MR_Box) (((((MR_Unsigned) (Var_1600) << 31)) | (((((MR_Unsigned) (Var_1601) << 30)) | (((((MR_Unsigned) (Var_1602) << 29)) | (((((MR_Unsigned) (Var_1603) << 28)) | (((((MR_Unsigned) (Var_1604) << 27)) | (((((MR_Unsigned) (Var_1605) << 26)) | (((((MR_Unsigned) (Var_1606) << 25)) | (((((MR_Unsigned) (Var_1607) << 24)) | (((((MR_Unsigned) (Var_1608) << 23)) | (((((MR_Unsigned) (Var_1609) << 22)) | (((((MR_Unsigned) (Var_1610) << 21)) | (((((MR_Unsigned) (Var_1611) << 20)) | (((((MR_Unsigned) (Var_1612) << 19)) | (((((MR_Unsigned) (Var_1613) << 18)) | (((((MR_Unsigned) (Var_1614) << 17)) | (((((MR_Unsigned) (Var_1615) << 16)) | (((((MR_Unsigned) (Var_1616) << 15)) | (((((MR_Unsigned) (Var_1617) << 14)) | (((((MR_Unsigned) (Var_1618) << 13)) | (((((MR_Unsigned) (Var_1619) << 12)) | (((((MR_Unsigned) (Var_1620) << 11)) | (((((MR_Unsigned) ((MR_Integer) 0) << 10)) | (((((MR_Unsigned) (Var_1622) << 9)) | (((((MR_Unsigned) (Var_1623) << 8)) | (((((MR_Unsigned) (Var_1624) << 7)) | (((((MR_Unsigned) (Var_1625) << 6)) | (((((MR_Unsigned) (Var_1626) << 5)) | (((((MR_Unsigned) (Var_1627) << 4)) | (((((MR_Unsigned) (Var_1628) << 3)) | (((((MR_Unsigned) (Var_1629) << 2)) | (((((MR_Unsigned) (Var_1630) << 1)) | (MR_Unsigned) (Var_1631)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 2) = (MR_Box) (packed_word_10);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 3) = ((MR_Box) (Var_1657));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 4) = ((MR_Box) (Var_1658));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 5) = ((MR_Box) (Var_1659));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 6) = ((MR_Box) (Var_1660));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 7) = ((MR_Box) (Var_1661));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 8) = ((MR_Box) (Var_1662));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 9) = ((MR_Box) (Var_1663));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 10) = ((MR_Box) (Var_1664));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 11) = ((MR_Box) (Var_1665));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 12) = ((MR_Box) (Var_1666));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 13) = ((MR_Box) (Var_1667));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 14) = ((MR_Box) (Var_1668));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 15) = ((MR_Box) (Var_1669));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 16) = ((MR_Box) (Var_1670));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 17) = ((MR_Box) (Var_1671));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 18) = ((MR_Box) (Var_1672));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 19) = ((MR_Box) (Var_1673));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 20) = ((MR_Box) (Var_1674));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 21) = ((MR_Box) (Var_1675));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 22) = ((MR_Box) (Var_1676));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 23) = ((MR_Box) (Var_1677));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 24) = ((MR_Box) (Var_1678));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 25) = ((MR_Box) (Var_1679));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 26) = ((MR_Box) (Var_1680));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 27) = ((MR_Box) (Var_1681));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 28) = ((MR_Box) (Var_1682));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 29) = ((MR_Box) (Var_1683));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 30) = ((MR_Box) (Var_1684));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 31) = ((MR_Box) (Var_1685));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 32) = ((MR_Box) (Var_1686));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 33) = ((MR_Box) (Var_1687));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 34) = ((MR_Box) (Var_1688));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 35) = ((MR_Box) (Var_1689));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 36) = ((MR_Box) (Var_1690));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 37) = ((MR_Box) (Var_1691));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 38) = ((MR_Box) (Var_1692));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 39) = ((MR_Box) (Var_1693));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 40) = ((MR_Box) (Var_1694));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_1473 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 31)) & (MR_Integer) 1);
        MR_Word Var_1474 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 30)) & (MR_Integer) 1);
        MR_Word Var_1475 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 29)) & (MR_Integer) 1);
        MR_Word Var_1476 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 28)) & (MR_Integer) 1);
        MR_Word Var_1477 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 27)) & (MR_Integer) 1);
        MR_Word Var_1478 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 26)) & (MR_Integer) 1);
        MR_Word Var_1479 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 25)) & (MR_Integer) 1);
        MR_Word Var_1480 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 24)) & (MR_Integer) 1);
        MR_Word Var_1481 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 23)) & (MR_Integer) 1);
        MR_Word Var_1482 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 22)) & (MR_Integer) 1);
        MR_Word Var_1483 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 21)) & (MR_Integer) 1);
        MR_Word Var_1484 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 20)) & (MR_Integer) 1);
        MR_Word Var_1485 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 19)) & (MR_Integer) 1);
        MR_Word Var_1486 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 18)) & (MR_Integer) 1);
        MR_Word Var_1487 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 17)) & (MR_Integer) 1);
        MR_Word Var_1488 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 16)) & (MR_Integer) 1);
        MR_Word Var_1489 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 15)) & (MR_Integer) 1);
        MR_Word Var_1490 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 14)) & (MR_Integer) 1);
        MR_Word Var_1491 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 13)) & (MR_Integer) 1);
        MR_Word Var_1492 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 12)) & (MR_Integer) 1);
        MR_Word Var_1493 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 11)) & (MR_Integer) 1);
        MR_Word Var_1495 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 9)) & (MR_Integer) 1);
        MR_Word Var_1496 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 8)) & (MR_Integer) 1);
        MR_Word Var_1497 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 7)) & (MR_Integer) 1);
        MR_Word Var_1498 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 6)) & (MR_Integer) 1);
        MR_Word Var_1499 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 5)) & (MR_Integer) 1);
        MR_Word Var_1500 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 4)) & (MR_Integer) 1);
        MR_Word Var_1501 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 3)) & (MR_Integer) 1);
        MR_Word Var_1502 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 2)) & (MR_Integer) 1);
        MR_Word Var_1503 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_1504 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 1))) & (MR_Integer) 1);
        MR_Integer Var_1530 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 3))));
        MR_Integer Var_1531 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 4))));
        MR_Integer Var_1532 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 5))));
        MR_Integer Var_1533 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 6))));
        MR_Integer Var_1534 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 7))));
        MR_Integer Var_1535 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 8))));
        MR_Integer Var_1536 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 9))));
        MR_Integer Var_1537 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 10))));
        MR_Integer Var_1538 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 11))));
        MR_Integer Var_1539 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 12))));
        MR_Integer Var_1540 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 13))));
        MR_Integer Var_1541 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 14))));
        MR_Integer Var_1542 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 15))));
        MR_Integer Var_1543 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 16))));
        MR_Integer Var_1544 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 17))));
        MR_Integer Var_1545 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 18))));
        MR_Integer Var_1546 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 19))));
        MR_Integer Var_1547 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 20))));
        MR_Integer Var_1548 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 21))));
        MR_Integer Var_1549 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 22))));
        MR_Integer Var_1550 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 23))));
        MR_Integer Var_1551 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 24))));
        MR_Integer Var_1552 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 25))));
        MR_Integer Var_1553 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 26))));
        MR_Integer Var_1554 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 27))));
        MR_Integer Var_1555 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 28))));
        MR_Integer Var_1556 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 29))));
        MR_Integer Var_1557 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 30))));
        MR_Integer Var_1558 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 31))));
        MR_Integer Var_1559 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 32))));
        MR_Integer Var_1560 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 33))));
        MR_Integer Var_1561 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 34))));
        MR_Integer Var_1562 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 35))));
        MR_Integer Var_1563 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 36))));
        MR_Integer Var_1564 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 37))));
        MR_Integer Var_1565 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 38))));
        MR_Integer Var_1566 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 39))));
        MR_String Var_1567 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 40))));
        MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 0)));
        MR_Unsigned packed_word_12 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_5_34, 2)));

        {
          STATE_VARIABLE_OptTuple_7_39 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 0) = (MR_Box) (packed_word_11);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1) = (MR_Box) (((((MR_Unsigned) (Var_1473) << 31)) | (((((MR_Unsigned) (Var_1474) << 30)) | (((((MR_Unsigned) (Var_1475) << 29)) | (((((MR_Unsigned) (Var_1476) << 28)) | (((((MR_Unsigned) (Var_1477) << 27)) | (((((MR_Unsigned) (Var_1478) << 26)) | (((((MR_Unsigned) (Var_1479) << 25)) | (((((MR_Unsigned) (Var_1480) << 24)) | (((((MR_Unsigned) (Var_1481) << 23)) | (((((MR_Unsigned) (Var_1482) << 22)) | (((((MR_Unsigned) (Var_1483) << 21)) | (((((MR_Unsigned) (Var_1484) << 20)) | (((((MR_Unsigned) (Var_1485) << 19)) | (((((MR_Unsigned) (Var_1486) << 18)) | (((((MR_Unsigned) (Var_1487) << 17)) | (((((MR_Unsigned) (Var_1488) << 16)) | (((((MR_Unsigned) (Var_1489) << 15)) | (((((MR_Unsigned) (Var_1490) << 14)) | (((((MR_Unsigned) (Var_1491) << 13)) | (((((MR_Unsigned) (Var_1492) << 12)) | (((((MR_Unsigned) (Var_1493) << 11)) | (((((MR_Unsigned) ((MR_Integer) 0) << 10)) | (((((MR_Unsigned) (Var_1495) << 9)) | (((((MR_Unsigned) (Var_1496) << 8)) | (((((MR_Unsigned) (Var_1497) << 7)) | (((((MR_Unsigned) (Var_1498) << 6)) | (((((MR_Unsigned) (Var_1499) << 5)) | (((((MR_Unsigned) (Var_1500) << 4)) | (((((MR_Unsigned) (Var_1501) << 3)) | (((((MR_Unsigned) (Var_1502) << 2)) | (((((MR_Unsigned) (Var_1503) << 1)) | (MR_Unsigned) (Var_1504)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 2) = (MR_Box) (packed_word_12);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 3) = ((MR_Box) (Var_1530));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 4) = ((MR_Box) (Var_1531));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 5) = ((MR_Box) (Var_1532));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 6) = ((MR_Box) (Var_1533));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 7) = ((MR_Box) (Var_1534));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 8) = ((MR_Box) (Var_1535));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 9) = ((MR_Box) (Var_1536));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 10) = ((MR_Box) (Var_1537));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 11) = ((MR_Box) (Var_1538));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 12) = ((MR_Box) (Var_1539));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 13) = ((MR_Box) (Var_1540));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 14) = ((MR_Box) (Var_1541));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 15) = ((MR_Box) (Var_1542));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 16) = ((MR_Box) (Var_1543));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 17) = ((MR_Box) (Var_1544));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 18) = ((MR_Box) (Var_1545));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 19) = ((MR_Box) (Var_1546));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 20) = ((MR_Box) (Var_1547));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 21) = ((MR_Box) (Var_1548));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 22) = ((MR_Box) (Var_1549));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 23) = ((MR_Box) (Var_1550));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 24) = ((MR_Box) (Var_1551));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 25) = ((MR_Box) (Var_1552));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 26) = ((MR_Box) (Var_1553));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 27) = ((MR_Box) (Var_1554));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 28) = ((MR_Box) (Var_1555));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 29) = ((MR_Box) (Var_1556));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 30) = ((MR_Box) (Var_1557));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 31) = ((MR_Box) (Var_1558));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 32) = ((MR_Box) (Var_1559));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 33) = ((MR_Box) (Var_1560));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 34) = ((MR_Box) (Var_1561));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 35) = ((MR_Box) (Var_1562));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 36) = ((MR_Box) (Var_1563));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 37) = ((MR_Box) (Var_1564));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 38) = ((MR_Box) (Var_1565));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 39) = ((MR_Box) (Var_1566));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 40) = ((MR_Box) (Var_1567));
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 333, &NonLocalGotos_14);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 335, &AsmLabels_15);
  succeeded = (NonLocalGotos_14 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (AsmLabels_15 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_1727 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 31)) & (MR_Integer) 1);
    MR_Word Var_1728 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 30)) & (MR_Integer) 1);
    MR_Word Var_1729 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 29)) & (MR_Integer) 1);
    MR_Word Var_1730 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 28)) & (MR_Integer) 1);
    MR_Word Var_1731 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 27)) & (MR_Integer) 1);
    MR_Word Var_1732 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 26)) & (MR_Integer) 1);
    MR_Word Var_1733 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 25)) & (MR_Integer) 1);
    MR_Word Var_1734 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 24)) & (MR_Integer) 1);
    MR_Word Var_1735 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 23)) & (MR_Integer) 1);
    MR_Word Var_1736 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 22)) & (MR_Integer) 1);
    MR_Word Var_1737 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 21)) & (MR_Integer) 1);
    MR_Word Var_1738 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 20)) & (MR_Integer) 1);
    MR_Word Var_1739 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 19)) & (MR_Integer) 1);
    MR_Word Var_1740 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 18)) & (MR_Integer) 1);
    MR_Word Var_1741 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_1742 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 16)) & (MR_Integer) 1);
    MR_Word Var_1743 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 15)) & (MR_Integer) 1);
    MR_Word Var_1744 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 14)) & (MR_Integer) 1);
    MR_Word Var_1745 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 13)) & (MR_Integer) 1);
    MR_Word Var_1746 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 12)) & (MR_Integer) 1);
    MR_Word Var_1747 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 11)) & (MR_Integer) 1);
    MR_Word Var_1748 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 10)) & (MR_Integer) 1);
    MR_Word Var_1750 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_1751 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 7)) & (MR_Integer) 1);
    MR_Word Var_1752 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word Var_1753 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word Var_1754 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word Var_1755 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word Var_1756 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_1757 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_1758 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) & (MR_Integer) 1);
    MR_Integer Var_1784 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 3))));
    MR_Integer Var_1785 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 4))));
    MR_Integer Var_1786 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 5))));
    MR_Integer Var_1787 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 6))));
    MR_Integer Var_1788 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 7))));
    MR_Integer Var_1789 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 8))));
    MR_Integer Var_1790 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 9))));
    MR_Integer Var_1791 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 10))));
    MR_Integer Var_1792 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 11))));
    MR_Integer Var_1793 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 12))));
    MR_Integer Var_1794 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 13))));
    MR_Integer Var_1795 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 14))));
    MR_Integer Var_1796 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 15))));
    MR_Integer Var_1797 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 16))));
    MR_Integer Var_1798 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 17))));
    MR_Integer Var_1799 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 18))));
    MR_Integer Var_1800 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 19))));
    MR_Integer Var_1801 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 20))));
    MR_Integer Var_1802 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 21))));
    MR_Integer Var_1803 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 22))));
    MR_Integer Var_1804 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 23))));
    MR_Integer Var_1805 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 24))));
    MR_Integer Var_1806 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 25))));
    MR_Integer Var_1807 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 26))));
    MR_Integer Var_1808 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 27))));
    MR_Integer Var_1809 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 28))));
    MR_Integer Var_1810 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 29))));
    MR_Integer Var_1811 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 30))));
    MR_Integer Var_1812 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 31))));
    MR_Integer Var_1813 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 32))));
    MR_Integer Var_1814 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 33))));
    MR_Integer Var_1815 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 34))));
    MR_Integer Var_1816 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 35))));
    MR_Integer Var_1817 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 36))));
    MR_Integer Var_1818 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 37))));
    MR_Integer Var_1819 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 38))));
    MR_Integer Var_1820 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 39))));
    MR_String Var_1821 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 40))));
    MR_Unsigned packed_word_13 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 0)));
    MR_Unsigned packed_word_14 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_OptTuple_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_13);
      MR_hl_field(0, base, 1) = (MR_Box) (((((MR_Unsigned) (Var_1727) << 31)) | (((((MR_Unsigned) (Var_1728) << 30)) | (((((MR_Unsigned) (Var_1729) << 29)) | (((((MR_Unsigned) (Var_1730) << 28)) | (((((MR_Unsigned) (Var_1731) << 27)) | (((((MR_Unsigned) (Var_1732) << 26)) | (((((MR_Unsigned) (Var_1733) << 25)) | (((((MR_Unsigned) (Var_1734) << 24)) | (((((MR_Unsigned) (Var_1735) << 23)) | (((((MR_Unsigned) (Var_1736) << 22)) | (((((MR_Unsigned) (Var_1737) << 21)) | (((((MR_Unsigned) (Var_1738) << 20)) | (((((MR_Unsigned) (Var_1739) << 19)) | (((((MR_Unsigned) (Var_1740) << 18)) | (((((MR_Unsigned) (Var_1741) << 17)) | (((((MR_Unsigned) (Var_1742) << 16)) | (((((MR_Unsigned) (Var_1743) << 15)) | (((((MR_Unsigned) (Var_1744) << 14)) | (((((MR_Unsigned) (Var_1745) << 13)) | (((((MR_Unsigned) (Var_1746) << 12)) | (((((MR_Unsigned) (Var_1747) << 11)) | (((((MR_Unsigned) (Var_1748) << 10)) | (((((MR_Unsigned) ((MR_Integer) 1) << 9)) | (((((MR_Unsigned) (Var_1750) << 8)) | (((((MR_Unsigned) (Var_1751) << 7)) | (((((MR_Unsigned) (Var_1752) << 6)) | (((((MR_Unsigned) (Var_1753) << 5)) | (((((MR_Unsigned) (Var_1754) << 4)) | (((((MR_Unsigned) (Var_1755) << 3)) | (((((MR_Unsigned) (Var_1756) << 2)) | (((((MR_Unsigned) (Var_1757) << 1)) | (MR_Unsigned) (Var_1758)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
      MR_hl_field(0, base, 2) = (MR_Box) (packed_word_14);
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_1784));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_1785));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_1786));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_1787));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_1788));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_1789));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_1790));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_1791));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_1792));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_1793));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_1794));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_1795));
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_1796));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_1797));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_1798));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_1799));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_1800));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_1801));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_1802));
      MR_hl_field(0, base, 22) = ((MR_Box) (Var_1803));
      MR_hl_field(0, base, 23) = ((MR_Box) (Var_1804));
      MR_hl_field(0, base, 24) = ((MR_Box) (Var_1805));
      MR_hl_field(0, base, 25) = ((MR_Box) (Var_1806));
      MR_hl_field(0, base, 26) = ((MR_Box) (Var_1807));
      MR_hl_field(0, base, 27) = ((MR_Box) (Var_1808));
      MR_hl_field(0, base, 28) = ((MR_Box) (Var_1809));
      MR_hl_field(0, base, 29) = ((MR_Box) (Var_1810));
      MR_hl_field(0, base, 30) = ((MR_Box) (Var_1811));
      MR_hl_field(0, base, 31) = ((MR_Box) (Var_1812));
      MR_hl_field(0, base, 32) = ((MR_Box) (Var_1813));
      MR_hl_field(0, base, 33) = ((MR_Box) (Var_1814));
      MR_hl_field(0, base, 34) = ((MR_Box) (Var_1815));
      MR_hl_field(0, base, 35) = ((MR_Box) (Var_1816));
      MR_hl_field(0, base, 36) = ((MR_Box) (Var_1817));
      MR_hl_field(0, base, 37) = ((MR_Box) (Var_1818));
      MR_hl_field(0, base, 38) = ((MR_Box) (Var_1819));
      MR_hl_field(0, base, 39) = ((MR_Box) (Var_1820));
      MR_hl_field(0, base, 40) = ((MR_Box) (Var_1821));
    }
  }
  else
  {
    MR_Word Var_1854 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 31)) & (MR_Integer) 1);
    MR_Word Var_1855 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 30)) & (MR_Integer) 1);
    MR_Word Var_1856 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 29)) & (MR_Integer) 1);
    MR_Word Var_1857 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 28)) & (MR_Integer) 1);
    MR_Word Var_1858 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 27)) & (MR_Integer) 1);
    MR_Word Var_1859 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 26)) & (MR_Integer) 1);
    MR_Word Var_1860 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 25)) & (MR_Integer) 1);
    MR_Word Var_1861 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 24)) & (MR_Integer) 1);
    MR_Word Var_1862 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 23)) & (MR_Integer) 1);
    MR_Word Var_1863 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 22)) & (MR_Integer) 1);
    MR_Word Var_1864 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 21)) & (MR_Integer) 1);
    MR_Word Var_1865 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 20)) & (MR_Integer) 1);
    MR_Word Var_1866 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 19)) & (MR_Integer) 1);
    MR_Word Var_1867 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 18)) & (MR_Integer) 1);
    MR_Word Var_1868 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_1869 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 16)) & (MR_Integer) 1);
    MR_Word Var_1870 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 15)) & (MR_Integer) 1);
    MR_Word Var_1871 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 14)) & (MR_Integer) 1);
    MR_Word Var_1872 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 13)) & (MR_Integer) 1);
    MR_Word Var_1873 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 12)) & (MR_Integer) 1);
    MR_Word Var_1874 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 11)) & (MR_Integer) 1);
    MR_Word Var_1875 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 10)) & (MR_Integer) 1);
    MR_Word Var_1877 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_1878 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 7)) & (MR_Integer) 1);
    MR_Word Var_1879 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word Var_1880 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word Var_1881 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word Var_1882 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word Var_1883 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_1884 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_1885 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 1))) & (MR_Integer) 1);
    MR_Integer Var_1911 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 3))));
    MR_Integer Var_1912 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 4))));
    MR_Integer Var_1913 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 5))));
    MR_Integer Var_1914 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 6))));
    MR_Integer Var_1915 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 7))));
    MR_Integer Var_1916 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 8))));
    MR_Integer Var_1917 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 9))));
    MR_Integer Var_1918 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 10))));
    MR_Integer Var_1919 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 11))));
    MR_Integer Var_1920 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 12))));
    MR_Integer Var_1921 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 13))));
    MR_Integer Var_1922 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 14))));
    MR_Integer Var_1923 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 15))));
    MR_Integer Var_1924 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 16))));
    MR_Integer Var_1925 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 17))));
    MR_Integer Var_1926 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 18))));
    MR_Integer Var_1927 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 19))));
    MR_Integer Var_1928 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 20))));
    MR_Integer Var_1929 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 21))));
    MR_Integer Var_1930 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 22))));
    MR_Integer Var_1931 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 23))));
    MR_Integer Var_1932 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 24))));
    MR_Integer Var_1933 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 25))));
    MR_Integer Var_1934 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 26))));
    MR_Integer Var_1935 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 27))));
    MR_Integer Var_1936 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 28))));
    MR_Integer Var_1937 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 29))));
    MR_Integer Var_1938 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 30))));
    MR_Integer Var_1939 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 31))));
    MR_Integer Var_1940 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 32))));
    MR_Integer Var_1941 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 33))));
    MR_Integer Var_1942 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 34))));
    MR_Integer Var_1943 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 35))));
    MR_Integer Var_1944 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 36))));
    MR_Integer Var_1945 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 37))));
    MR_Integer Var_1946 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 38))));
    MR_Integer Var_1947 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 39))));
    MR_String Var_1948 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 40))));
    MR_Unsigned packed_word_15 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 0)));
    MR_Unsigned packed_word_16 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_7_39, 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_OptTuple_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_15);
      MR_hl_field(0, base, 1) = (MR_Box) (((((MR_Unsigned) (Var_1854) << 31)) | (((((MR_Unsigned) (Var_1855) << 30)) | (((((MR_Unsigned) (Var_1856) << 29)) | (((((MR_Unsigned) (Var_1857) << 28)) | (((((MR_Unsigned) (Var_1858) << 27)) | (((((MR_Unsigned) (Var_1859) << 26)) | (((((MR_Unsigned) (Var_1860) << 25)) | (((((MR_Unsigned) (Var_1861) << 24)) | (((((MR_Unsigned) (Var_1862) << 23)) | (((((MR_Unsigned) (Var_1863) << 22)) | (((((MR_Unsigned) (Var_1864) << 21)) | (((((MR_Unsigned) (Var_1865) << 20)) | (((((MR_Unsigned) (Var_1866) << 19)) | (((((MR_Unsigned) (Var_1867) << 18)) | (((((MR_Unsigned) (Var_1868) << 17)) | (((((MR_Unsigned) (Var_1869) << 16)) | (((((MR_Unsigned) (Var_1870) << 15)) | (((((MR_Unsigned) (Var_1871) << 14)) | (((((MR_Unsigned) (Var_1872) << 13)) | (((((MR_Unsigned) (Var_1873) << 12)) | (((((MR_Unsigned) (Var_1874) << 11)) | (((((MR_Unsigned) (Var_1875) << 10)) | (((((MR_Unsigned) ((MR_Integer) 0) << 9)) | (((((MR_Unsigned) (Var_1877) << 8)) | (((((MR_Unsigned) (Var_1878) << 7)) | (((((MR_Unsigned) (Var_1879) << 6)) | (((((MR_Unsigned) (Var_1880) << 5)) | (((((MR_Unsigned) (Var_1881) << 4)) | (((((MR_Unsigned) (Var_1882) << 3)) | (((((MR_Unsigned) (Var_1883) << 2)) | (((((MR_Unsigned) (Var_1884) << 1)) | (MR_Unsigned) (Var_1885)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
      MR_hl_field(0, base, 2) = (MR_Box) (packed_word_16);
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_1911));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_1912));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_1913));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_1914));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_1915));
      MR_hl_field(0, base, 8) = ((MR_Box) (Var_1916));
      MR_hl_field(0, base, 9) = ((MR_Box) (Var_1917));
      MR_hl_field(0, base, 10) = ((MR_Box) (Var_1918));
      MR_hl_field(0, base, 11) = ((MR_Box) (Var_1919));
      MR_hl_field(0, base, 12) = ((MR_Box) (Var_1920));
      MR_hl_field(0, base, 13) = ((MR_Box) (Var_1921));
      MR_hl_field(0, base, 14) = ((MR_Box) (Var_1922));
      MR_hl_field(0, base, 15) = ((MR_Box) (Var_1923));
      MR_hl_field(0, base, 16) = ((MR_Box) (Var_1924));
      MR_hl_field(0, base, 17) = ((MR_Box) (Var_1925));
      MR_hl_field(0, base, 18) = ((MR_Box) (Var_1926));
      MR_hl_field(0, base, 19) = ((MR_Box) (Var_1927));
      MR_hl_field(0, base, 20) = ((MR_Box) (Var_1928));
      MR_hl_field(0, base, 21) = ((MR_Box) (Var_1929));
      MR_hl_field(0, base, 22) = ((MR_Box) (Var_1930));
      MR_hl_field(0, base, 23) = ((MR_Box) (Var_1931));
      MR_hl_field(0, base, 24) = ((MR_Box) (Var_1932));
      MR_hl_field(0, base, 25) = ((MR_Box) (Var_1933));
      MR_hl_field(0, base, 26) = ((MR_Box) (Var_1934));
      MR_hl_field(0, base, 27) = ((MR_Box) (Var_1935));
      MR_hl_field(0, base, 28) = ((MR_Box) (Var_1936));
      MR_hl_field(0, base, 29) = ((MR_Box) (Var_1937));
      MR_hl_field(0, base, 30) = ((MR_Box) (Var_1938));
      MR_hl_field(0, base, 31) = ((MR_Box) (Var_1939));
      MR_hl_field(0, base, 32) = ((MR_Box) (Var_1940));
      MR_hl_field(0, base, 33) = ((MR_Box) (Var_1941));
      MR_hl_field(0, base, 34) = ((MR_Box) (Var_1942));
      MR_hl_field(0, base, 35) = ((MR_Box) (Var_1943));
      MR_hl_field(0, base, 36) = ((MR_Box) (Var_1944));
      MR_hl_field(0, base, 37) = ((MR_Box) (Var_1945));
      MR_hl_field(0, base, 38) = ((MR_Box) (Var_1946));
      MR_hl_field(0, base, 39) = ((MR_Box) (Var_1947));
      MR_hl_field(0, base, 40) = ((MR_Box) (Var_1948));
    }
  }
}

static void MR_CALL 
libs__handle_options__handle_const_struct_8_p_0(
  MR_Word Target_9,
  MR_Word OpMode_10,
  MR_Word TraceLevel_11,
  MR_Word TraceSuppress_12,
  MR_Word OT_EnableConstStructPoly0_13,
  MR_Word * OT_EnableConstStructPoly_14,
  MR_Word OT_EnableConstStructUser0_15,
  MR_Word * OT_EnableConstStructUser_16)
{
  MR_bool succeeded;

  switch (Target_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word NeedProcBodies_17;

        *OT_EnableConstStructPoly_14 = OT_EnableConstStructPoly0_13;
        NeedProcBodies_17 = libs__trace_params__trace_needs_proc_body_reps_2_f_0(TraceLevel_11, TraceSuppress_12);
        succeeded = (NeedProcBodies_17 == (MR_Integer) 1);
        if (!(succeeded))
        {
          {
            MR_Word Augment_18;
            MR_Word Var_20;

            succeeded = ((MR_tag((MR_Word) OpMode_10)) == (MR_Integer) 3);
            if (succeeded)
            {
              Var_20 = ((MR_Word) ((MR_hl_field(3, OpMode_10, 0))));
              succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 3);
              if (succeeded)
              {
                Augment_18 = ((MR_Word) ((MR_hl_field(3, Var_20, 0))));
                if ((Augment_18 == (MR_Word) ((MR_Unsigned) 0U)))
                  succeeded = MR_TRUE;
                else
                if ((Augment_18 == (MR_Word) ((MR_Unsigned) 4U)))
                  succeeded = MR_TRUE;
                else
                  succeeded = MR_FALSE;
              }
            }
          }
          if (!(succeeded))
            succeeded = (OT_EnableConstStructPoly0_13 == (MR_Integer) 1);
        }
        if (succeeded)
          *OT_EnableConstStructUser_16 = (MR_Integer) 1;
        else
          *OT_EnableConstStructUser_16 = OT_EnableConstStructUser0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        *OT_EnableConstStructPoly_14 = (MR_Integer) 1;
        *OT_EnableConstStructUser_16 = (MR_Integer) 1;
      }
      break;
    case (MR_Integer) 2:
      {
        *OT_EnableConstStructPoly_14 = OT_EnableConstStructPoly0_13;
        *OT_EnableConstStructUser_16 = (MR_Integer) 1;
      }
      break;
  }
}

static void MR_CALL 
libs__handle_options__handle_non_tail_rec_warnings_5_p_0(
  MR_Word Globals_6,
  MR_Word OptTuple0_7,
  MR_Word OT_OptMLDSTailCalls_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_bool succeeded;
  MR_Word WarnNonTailRecSelf_10;
  MR_Word WarnNonTailRecMutual_11;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 39, &WarnNonTailRecSelf_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 40, &WarnNonTailRecMutual_11);
  succeeded = (WarnNonTailRecSelf_10 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (WarnNonTailRecMutual_11 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word OT_PessimizeTailCalls0_12 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple0_7, 2))) >> 15)) & (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Specs_1_23;

    switch (OT_PessimizeTailCalls0_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_Specs_1_23 = STATE_VARIABLE_Specs_0_15;
        break;
      case (MR_Integer) 0:
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[190])), STATE_VARIABLE_Specs_0_15, &STATE_VARIABLE_Specs_1_23);
        break;
    }
    switch (OT_OptMLDSTailCalls_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[186])), STATE_VARIABLE_Specs_1_23, STATE_VARIABLE_Specs_16);
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_1_23;
        break;
    }
  }
  else
    *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
}

static void MR_CALL 
libs__handle_options__handle_colors_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_8,
  MR_Word * STATE_VARIABLE_Globals_9)
{
  MR_Word EnableIsSet_4;
  MR_Word EnableValue_5;
  MR_Word ConfigDefault_6;
  MR_Word UseColor_7;
  MR_Word Var_14;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 98, &EnableIsSet_4);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 99, &EnableValue_5);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 96, &ConfigDefault_6);
  switch (EnableIsSet_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UseColor_7 = ConfigDefault_6;
      break;
    case (MR_Integer) 1:
      UseColor_7 = EnableValue_5;
      break;
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = (MR_Box) ((MR_Unsigned) (UseColor_7));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 100, Var_14, STATE_VARIABLE_Globals_0_8, STATE_VARIABLE_Globals_9);
}

static void MR_CALL 
libs__handle_options__handle_compare_specialization_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_9,
  MR_Word * STATE_VARIABLE_Globals_10)
{
  MR_bool succeeded;
  MR_Integer CompareSpec_4;

  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 388, &CompareSpec_4);
  succeeded = (CompareSpec_4 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word HighLevelCode_5;
    MR_Integer Limit0_6;
    MR_Word ModeConstraints_7;
    MR_Integer Limit_8;
    MR_Word Var_16;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 337, &HighLevelCode_5);
    switch (HighLevelCode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Limit0_6 = (MR_Integer) 13;
        break;
      case (MR_Integer) 1:
        Limit0_6 = (MR_Integer) 14;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 236, &ModeConstraints_7);
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
    libs__globals__set_option_4_p_0((MR_Integer) 388, Var_16, STATE_VARIABLE_Globals_0_9, STATE_VARIABLE_Globals_10);
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
  MR_Word STATE_VARIABLE_Globals_1_46;
  MR_Word STATE_VARIABLE_Globals_2_51;
  MR_Word STATE_VARIABLE_Globals_3_57;
  MR_Word STATE_VARIABLE_Globals_4_62;
  MR_Word STATE_VARIABLE_Globals_5_67;
  MR_Word STATE_VARIABLE_Globals_6_72;
  MR_Word STATE_VARIABLE_Globals_7_80;
  MR_Word STATE_VARIABLE_Globals_8_84;
  MR_Word STATE_VARIABLE_Globals_9_90;
  MR_Word STATE_VARIABLE_Globals_10_95;
  MR_Word STATE_VARIABLE_Globals_11_101;
  MR_Word STATE_VARIABLE_Globals_12_117;
  MR_Word STATE_VARIABLE_Globals_13_121;
  MR_String AllDumpOptions_10;
  MR_String Var_76;

  libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 81, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_39, &STATE_VARIABLE_Globals_1_46);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 81, (MR_Integer) 87, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_46, &STATE_VARIABLE_Globals_2_51);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_2_51, (MR_Integer) 82, &VeryVerbose_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_2_51, (MR_Integer) 91, &Statistics_8);
  succeeded = (VeryVerbose_7 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Statistics_8 == (MR_Integer) 1);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 92, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_2_51, &STATE_VARIABLE_Globals_3_57);
  else
    STATE_VARIABLE_Globals_3_57 = STATE_VARIABLE_Globals_2_51;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 115, (MR_Integer) 113, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_3_57, &STATE_VARIABLE_Globals_4_62);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 116, (MR_Integer) 113, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_4_62, &STATE_VARIABLE_Globals_5_67);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 114, (MR_Integer) 113, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_5_67, &STATE_VARIABLE_Globals_6_72);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_6_72, (MR_Integer) 130, &DebugLiveness_9);
  succeeded = (DebugLiveness_9 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_76 = (MR_String) "all";
    succeeded = libs__check_options__convert_dump_alias_2_p_0(Var_76, &AllDumpOptions_10);
  }
  if (succeeded)
  {
    MR_String DumpOptions0_11;
    MR_String DumpOptions1_12;
    MR_Word Var_79;

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_6_72, (MR_Integer) 227, &DumpOptions0_11);
    DumpOptions1_12 = mercury__string__f_43_43_2_f_0(DumpOptions0_11, AllDumpOptions_10);
    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (DumpOptions1_12));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 227, Var_79, STATE_VARIABLE_Globals_6_72, &STATE_VARIABLE_Globals_7_80);
  }
  else
    STATE_VARIABLE_Globals_7_80 = STATE_VARIABLE_Globals_6_72;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 116, (MR_Integer) 113, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_7_80, &STATE_VARIABLE_Globals_8_84);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_8_84, (MR_Integer) 119, &DebugModesPredId_13);
  succeeded = (DebugModesPredId_13 > (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 113, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_8_84, &STATE_VARIABLE_Globals_9_90);
  else
    STATE_VARIABLE_Globals_9_90 = STATE_VARIABLE_Globals_8_84;
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_9_90, (MR_Integer) 243, &DebugUnneededCodePredNames_14);
  if ((DebugUnneededCodePredNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_10_95 = STATE_VARIABLE_Globals_9_90;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 242, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_9_90, &STATE_VARIABLE_Globals_10_95);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_10_95, (MR_Integer) 127, &DebugOptPredIdStrs_17);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_10_95, (MR_Integer) 128, &DebugOptPredNames_18);
  succeeded = (DebugOptPredIdStrs_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    succeeded = (DebugOptPredNames_18 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 125, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_10_95, &STATE_VARIABLE_Globals_11_101);
  else
    STATE_VARIABLE_Globals_11_101 = STATE_VARIABLE_Globals_10_95;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_11_101, (MR_Integer) 136, &DebugIntermoduleAnalysis_23);
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
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_11_101, (MR_Integer) 221, &DumpHLDSPredIds_25);
  if ((DumpHLDSPredIds_25 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_12_117 = STATE_VARIABLE_Globals_11_101;
  else
  {
    MR_String DumpOptions2_28;
    MR_String DumpOptions3_29;
    MR_String DumpOptions_30;
    MR_Word Var_116;

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_11_101, (MR_Integer) 227, &DumpOptions2_28);
    mercury__string__replace_all_4_p_0(DumpOptions2_28, (MR_String) "M", (MR_String) "", &DumpOptions3_29);
    mercury__string__replace_all_4_p_0(DumpOptions3_29, (MR_String) "T", (MR_String) "", &DumpOptions_30);
    {
      Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_116, 1) = ((MR_Box) (DumpOptions_30));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 227, Var_116, STATE_VARIABLE_Globals_11_101, &STATE_VARIABLE_Globals_12_117);
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 205, (MR_Integer) 204, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_12_117, &STATE_VARIABLE_Globals_13_121);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_13_121, (MR_Integer) 220, &DumpHLDSStages_31);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_13_121, (MR_Integer) 219, &DumpTraceStages_32);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_13_121, (MR_Integer) 375, &ParallelLiveness_33);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_13_121, (MR_Integer) 376, &ParallelCodeGen_34);
  succeeded = (DumpHLDSStages_31 != (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
  {
    succeeded = (DumpTraceStages_32 != (MR_Word) ((MR_Unsigned) 0U));
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
    libs__globals__set_option_4_p_0((MR_Integer) 374, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_13_121, STATE_VARIABLE_Globals_40);
  else
    *STATE_VARIABLE_Globals_40 = STATE_VARIABLE_Globals_13_121;
}

static void MR_CALL 
libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8)
{
  MR_bool succeeded;
  MR_Word LibLinkages0_4;
  MR_Word STATE_VARIABLE_Globals_1_12;
  MR_Word STATE_VARIABLE_Globals_2_21;
  MR_Word SourceOptionValue_27;

  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_0_7, (MR_Integer) 709, &LibLinkages0_4);
  if ((LibLinkages0_4 == (MR_Word) ((MR_Unsigned) 0U)))
    libs__globals__set_option_4_p_0((MR_Integer) 709, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[184])), STATE_VARIABLE_Globals_0_7, &STATE_VARIABLE_Globals_1_12);
  else
    STATE_VARIABLE_Globals_1_12 = STATE_VARIABLE_Globals_0_7;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_12, (MR_Integer) 566, &SourceOptionValue_27);
  switch (SourceOptionValue_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_2_21 = STATE_VARIABLE_Globals_1_12;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 629, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_1_12, &STATE_VARIABLE_Globals_2_21);
      break;
  }
  succeeded = mercury__io__file__have_symlinks_0_p_0();
  if (succeeded)
    *STATE_VARIABLE_Globals_8 = STATE_VARIABLE_Globals_2_21;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 699, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_2_21, STATE_VARIABLE_Globals_8);
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv9_LambdaHeadVar__2_291;

  conv9_LambdaHeadVar__2_291 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_291));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv8_LambdaHeadVar__2_286;

  conv8_LambdaHeadVar__2_286 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2520__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_286));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_LambdaHeadVar__2_280;

  conv7_LambdaHeadVar__2_280 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2516__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_280));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_LambdaHeadVar__2_268;

  conv6_LambdaHeadVar__2_268 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2491__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_268));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_LambdaHeadVar__2_262;

  conv5_LambdaHeadVar__2_262 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2487__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_262));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__handle_options__IntroducedFrom__pred__handle_directory_options__2466__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_LambdaHeadVar__2_244;

  conv4_LambdaHeadVar__2_244 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2447__1_3_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_244));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_LambdaHeadVar__2_225;

  conv3_LambdaHeadVar__2_225 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2410__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_225));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_215;

  conv2_LambdaHeadVar__2_215 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2400__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_215));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_203;

  conv1_LambdaHeadVar__2_203 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2390__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_203));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_188;

  conv0_LambdaHeadVar__2_188 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2369__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_188));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__handle_options__handle_directory_options_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_142,
  MR_Word * STATE_VARIABLE_Globals_143)
{
  MR_bool succeeded;
  MR_String MercuryLinkage_8;
  MR_Word DefaultRuntimeLibraryDirs_9;
  MR_Word MaybeStdLibDir_10;
  MR_Word MerStdLibDirs_12;
  MR_Word MaybeConfDir_17;
  MR_Word MercuryLibDirs_20;
  MR_String Grade_21;
  MR_Word UseSearchDirsForIntermod_34;
  MR_Word SearchLibFilesDirs_37;
  MR_Word IntermodDirs2_38;
  MR_String TargetArch_39;
  MR_Word ToGradeSubdir_40;
  MR_Word SubdirSetting_42;
  MR_Word LinkLibDirs_50;
  MR_Word InitDirs_53;
  MR_Word InterfaceSame_62;
  MR_Word InterfaceIndep_63;
  MR_Word InterfaceInstalled_64;
  MR_Word IntermodSame_65;
  MR_Word IntermodIndep_66;
  MR_Word IntermodInstalled_67;
  MR_Word CInclSame_68;
  MR_Word CInclIndep_69;
  MR_Word CInclInstalled_70;
  MR_Word CInclExternal_71;
  MR_Word MerLibSame_72;
  MR_Word MerLibIndep_73;
  MR_Word MerLibInstalled_74;
  MR_String ExtDirInt0_81;
  MR_String ExtDirInt1_83;
  MR_String ExtDirInt2_85;
  MR_String ExtDirInt3_87;
  MR_String ExtDirModuleDep_89;
  MR_Word InterfaceInt0_90;
  MR_Word InterfaceInt1_91;
  MR_Word InterfaceInt2_92;
  MR_Word InterfaceInt3_93;
  MR_Word InterfaceModuleDep_94;
  MR_Word InterfaceSrc_95;
  MR_String ExtDirPlainOpt_97;
  MR_String ExtDirTransOpt_99;
  MR_String ExtDirDate_101;
  MR_String ExtDirStatus_103;
  MR_String ExtDirAnalysis_105;
  MR_String ExtDirImdg_107;
  MR_String ExtDirRequest_109;
  MR_Word IntermodPlainOpt_110;
  MR_Word IntermodTransOpt_111;
  MR_Word IntermodDate_112;
  MR_Word IntermodStatus_113;
  MR_Word IntermodAnalysis_114;
  MR_Word IntermodImdg_115;
  MR_Word IntermodRequest_116;
  MR_Word IntermodSrc_117;
  MR_String ExtDirMh_119;
  MR_String ExtDirMih_121;
  MR_Word CInclMh_122;
  MR_Word CInclMih_123;
  MR_Word CInclH0_124;
  MR_Word CInclH_125;
  MR_String ExtDirA_127;
  MR_Word LibA_128;
  MR_String ExtDirInit_131;
  MR_String ExtDirJar_134;
  MR_String ExtDirDll_137;
  MR_Word LibInit_138;
  MR_Word LibJar_139;
  MR_Word LibDll_140;
  MR_Word ExtDirsMaps_141;
  MR_Word STATE_VARIABLE_Globals_1_148;
  MR_Word STATE_VARIABLE_Globals_2_153;
  MR_Word STATE_VARIABLE_Globals_5_169;
  MR_Word STATE_VARIABLE_Globals_7_181;
  MR_Word STATE_VARIABLE_Globals_12_231;
  MR_Word STATE_VARIABLE_Globals_13_238;
  MR_Word STATE_VARIABLE_Globals_14_258;
  MR_Word Var_274;
  MR_Word STATE_VARIABLE_Globals_15_275;
  MR_Word Var_277;
  MR_Word STATE_VARIABLE_Globals_16_278;
  MR_Word STATE_VARIABLE_Globals_17_305;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_1_319;
  MR_Word STATE_VARIABLE_IntermodDirsMap_1_320;
  MR_Word STATE_VARIABLE_CInclDirsMap_1_321;
  MR_Word STATE_VARIABLE_LibDirsMap_1_322;
  MR_Word STATE_VARIABLE_StdLibDirsMap_1_323;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_2_330;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_3_332;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_4_334;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_5_336;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_6_338;
  MR_Word Var_339;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_7_341;
  MR_Word STATE_VARIABLE_IntermodDirsMap_2_350;
  MR_Word STATE_VARIABLE_IntermodDirsMap_3_352;
  MR_Word STATE_VARIABLE_IntermodDirsMap_4_354;
  MR_Word STATE_VARIABLE_IntermodDirsMap_5_356;
  MR_Word STATE_VARIABLE_IntermodDirsMap_6_358;
  MR_Word STATE_VARIABLE_IntermodDirsMap_7_360;
  MR_Word STATE_VARIABLE_IntermodDirsMap_8_362;
  MR_Word Var_363;
  MR_Word STATE_VARIABLE_IntermodDirsMap_9_365;
  MR_Word STATE_VARIABLE_CInclDirsMap_2_369;
  MR_Word STATE_VARIABLE_CInclDirsMap_3_371;
  MR_Word Var_372;
  MR_Word STATE_VARIABLE_CInclDirsMap_4_374;
  MR_Word STATE_VARIABLE_LibDirsMap_2_377;
  MR_Word STATE_VARIABLE_StdLibDirsMap_2_388;
  MR_Word STATE_VARIABLE_StdLibDirsMap_3_390;
  MR_Word STATE_VARIABLE_StdLibDirsMap_4_392;
  MR_Word ToMihsSubdir_54;
  MR_String Var_80;
  MR_String Var_82;
  MR_String Var_84;
  MR_String Var_86;
  MR_String Var_88;
  MR_String Var_96;
  MR_String Var_98;
  MR_String Var_100;
  MR_String Var_102;
  MR_String Var_104;
  MR_String Var_106;
  MR_String Var_108;
  MR_String Var_118;
  MR_String Var_120;
  MR_String Var_126;
  MR_String Var_129;
  MR_String Var_130;
  MR_String Var_132;
  MR_String Var_133;
  MR_String Var_135;
  MR_String Var_136;

  if ((OpMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3))
  {
    MR_Word OpModeArgs_6 = ((MR_Word) ((MR_hl_field(3, OpMode_4, 0))));
    MR_Word Var_144;
    MR_Word Var_145;

    succeeded = ((MR_tag((MR_Word) OpModeArgs_6)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_144 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_6, 0))));
      succeeded = ((MR_tag((MR_Word) Var_144)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_145 = ((MR_Unsigned) ((MR_hl_field(1, Var_144, 0))) & (MR_Integer) 3);
        succeeded = (Var_145 == (MR_Integer) 3);
      }
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    STATE_VARIABLE_Globals_1_148 = STATE_VARIABLE_Globals_0_142;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 735, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_142, &STATE_VARIABLE_Globals_1_148);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_1_148, (MR_Integer) 627, &MercuryLinkage_8);
  succeeded = (strcmp(MercuryLinkage_8, (MR_String) "static") == 0);
  if (succeeded)
  {
    DefaultRuntimeLibraryDirs_9 = (MR_Integer) 0;
    libs__globals__set_option_4_p_0((MR_Integer) 611, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_1_148, &STATE_VARIABLE_Globals_2_153);
  }
  else
  {
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_148, (MR_Integer) 611, &DefaultRuntimeLibraryDirs_9);
    STATE_VARIABLE_Globals_2_153 = STATE_VARIABLE_Globals_1_148;
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_2_153, (MR_Integer) 620, &MaybeStdLibDir_10);
  if ((MaybeStdLibDir_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MerStdLibDirs_12 = (MR_Word) ((MR_Unsigned) 0U);
    libs__globals__set_option_4_p_0((MR_Integer) 735, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_2_153, &STATE_VARIABLE_Globals_5_169);
  }
  else
  {
    MR_String StdLibDir_11 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_10, 0))));
    MR_Word OptionTable2_13;
    MR_Word OptionTable_14;
    MR_Word LinkLibDirs0_15;
    MR_Word STATE_VARIABLE_Globals_3_158;
    MR_Word Var_161;
    MR_Word STATE_VARIABLE_Globals_4_162;
    MR_Word Var_163;
    MR_String Var_164;

    {
      MerStdLibDirs_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MerStdLibDirs_12, 0) = ((MR_Box) (StdLibDir_11));
      MR_hl_field(1, MerStdLibDirs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_2_153, &OptionTable2_13);
    libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_11, OptionTable2_13, &OptionTable_14);
    libs__globals__set_options_3_p_0(OptionTable_14, STATE_VARIABLE_Globals_2_153, &STATE_VARIABLE_Globals_3_158);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_3_158, (MR_Integer) 609, &LinkLibDirs0_15);
    Var_164 = mercury__dir__f_slash_2_f_0(StdLibDir_11, (MR_String) "lib");
    {
      Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_163, 0) = ((MR_Box) (Var_164));
      MR_hl_field(1, Var_163, 1) = ((MR_Box) (LinkLibDirs0_15));
    }
    {
      Var_161 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_161, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_161, 1) = ((MR_Box) (Var_163));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 609, Var_161, STATE_VARIABLE_Globals_3_158, &STATE_VARIABLE_Globals_4_162);
    switch (DefaultRuntimeLibraryDirs_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_5_169 = STATE_VARIABLE_Globals_4_162;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath0_16;
          MR_Word Var_168;
          MR_Word Var_170;
          MR_String Var_171;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_4_162, (MR_Integer) 610, &Rpath0_16);
          Var_171 = mercury__dir__f_slash_2_f_0(StdLibDir_11, (MR_String) "lib");
          {
            Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
            MR_hl_field(1, Var_170, 1) = ((MR_Box) (Rpath0_16));
          }
          {
            Var_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_168, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_168, 1) = ((MR_Box) (Var_170));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 610, Var_168, STATE_VARIABLE_Globals_4_162, &STATE_VARIABLE_Globals_5_169);
        }
        break;
    }
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_5_169, (MR_Integer) 700, &MaybeConfDir_17);
  if ((MaybeConfDir_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_7_181 = STATE_VARIABLE_Globals_5_169;
  else
  {
    MR_String ConfDir_18 = ((MR_String) ((MR_hl_field(1, MaybeConfDir_17, 0))));
    MR_Word CIncludeDirs0_19;
    MR_Word Var_180;
    MR_Word Var_182;
    MR_String Var_183;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_5_169, (MR_Integer) 570, &CIncludeDirs0_19);
    Var_183 = mercury__dir__f_slash_2_f_0(ConfDir_18, (MR_String) "conf");
    {
      Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_182, 0) = ((MR_Box) (Var_183));
      MR_hl_field(1, Var_182, 1) = ((MR_Box) (CIncludeDirs0_19));
    }
    {
      Var_180 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_180, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_180, 1) = ((MR_Box) (Var_182));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 570, Var_180, STATE_VARIABLE_Globals_5_169, &STATE_VARIABLE_Globals_7_181);
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_7_181, (MR_Integer) 614, &MercuryLibDirs_20);
  libs__globals__get_grade_dir_2_p_0(STATE_VARIABLE_Globals_7_181, &Grade_21);
  if ((MercuryLibDirs_20 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_12_231 = STATE_VARIABLE_Globals_7_181;
  else
  {
    MR_Word ExtraLinkLibDirs_24;
    MR_Word LinkLibDirs1_26;
    MR_Word ExtraIncludeDirs_28;
    MR_Word CIncludeDirs_29;
    MR_Word ExtraIntermodDirs_30;
    MR_Word IntermodDirs0_31;
    MR_Word ExtraInitDirs_32;
    MR_Word InitDirs1_33;
    MR_Word Var_186;
    MR_Word Var_193;
    MR_Word STATE_VARIABLE_Globals_8_194;
    MR_Word Var_195;
    MR_Word STATE_VARIABLE_Globals_9_199;
    MR_Word Var_201;
    MR_Word Var_210;
    MR_Word STATE_VARIABLE_Globals_10_211;
    MR_Word Var_212;
    MR_Word Var_213;
    MR_Word Var_220;
    MR_Word STATE_VARIABLE_Globals_11_221;
    MR_Word Var_222;
    MR_Word Var_223;
    MR_Word Var_230;
    MR_Word Var_232;

    {
      Var_186 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_186, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_186, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_1));
      MR_hl_field(0, Var_186, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_186, 3) = ((MR_Box) (Grade_21));
    }
    ExtraLinkLibDirs_24 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_186, MercuryLibDirs_20);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_7_181, (MR_Integer) 609, &LinkLibDirs1_26);
    Var_195 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_26, ExtraLinkLibDirs_24);
    {
      Var_193 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_193, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_193, 1) = ((MR_Box) (Var_195));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 609, Var_193, STATE_VARIABLE_Globals_7_181, &STATE_VARIABLE_Globals_8_194);
    switch (DefaultRuntimeLibraryDirs_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_9_199 = STATE_VARIABLE_Globals_8_194;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath_27;
          MR_Word Var_198;
          MR_Word Var_200;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_8_194, (MR_Integer) 610, &Rpath_27);
          Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_27, ExtraLinkLibDirs_24);
          {
            Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_198, 1) = ((MR_Box) (Var_200));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 610, Var_198, STATE_VARIABLE_Globals_8_194, &STATE_VARIABLE_Globals_9_199);
        }
        break;
    }
    {
      Var_201 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_201, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_201, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_2));
      MR_hl_field(0, Var_201, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_201, 3) = ((MR_Box) (Grade_21));
    }
    ExtraIncludeDirs_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_201, MercuryLibDirs_20);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_9_199, (MR_Integer) 570, &CIncludeDirs_29);
    Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_28, CIncludeDirs_29);
    {
      Var_210 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_210, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_210, 1) = ((MR_Box) (Var_212));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 570, Var_210, STATE_VARIABLE_Globals_9_199, &STATE_VARIABLE_Globals_10_211);
    {
      Var_213 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_213, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_213, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_3));
      MR_hl_field(0, Var_213, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_213, 3) = ((MR_Box) (Grade_21));
    }
    ExtraIntermodDirs_30 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_213, MercuryLibDirs_20);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_10_211, (MR_Integer) 719, &IntermodDirs0_31);
    Var_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_30, IntermodDirs0_31);
    {
      Var_220 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_220, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_220, 1) = ((MR_Box) (Var_222));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 719, Var_220, STATE_VARIABLE_Globals_10_211, &STATE_VARIABLE_Globals_11_221);
    {
      Var_223 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_223, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_223, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_4));
      MR_hl_field(0, Var_223, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_223, 3) = ((MR_Box) (Grade_21));
    }
    ExtraInitDirs_32 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_223, MercuryLibDirs_20);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_11_221, (MR_Integer) 622, &InitDirs1_33);
    Var_232 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_33, ExtraInitDirs_32);
    {
      Var_230 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_230, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_230, 1) = ((MR_Box) (Var_232));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 622, Var_230, STATE_VARIABLE_Globals_11_221, &STATE_VARIABLE_Globals_12_231);
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_12_231, (MR_Integer) 720, &UseSearchDirsForIntermod_34);
  switch (UseSearchDirsForIntermod_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_13_238 = STATE_VARIABLE_Globals_12_231;
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntermodDirs1_35;
        MR_Word SearchDirs_36;
        MR_Word Var_237;
        MR_Word Var_239;

        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_12_231, (MR_Integer) 719, &IntermodDirs1_35);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_12_231, (MR_Integer) 718, &SearchDirs_36);
        Var_239 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_35, SearchDirs_36);
        {
          Var_237 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_237, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_237, 1) = ((MR_Box) (Var_239));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 719, Var_237, STATE_VARIABLE_Globals_12_231, &STATE_VARIABLE_Globals_13_238);
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_13_238, (MR_Integer) 616, &SearchLibFilesDirs_37);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_13_238, (MR_Integer) 719, &IntermodDirs2_38);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_13_238, (MR_Integer) 749, &TargetArch_39);
  {
    ToGradeSubdir_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToGradeSubdir_40, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[2]));
    MR_hl_field(0, ToGradeSubdir_40, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_5));
    MR_hl_field(0, ToGradeSubdir_40, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, ToGradeSubdir_40, 3) = ((MR_Box) (Grade_21));
    MR_hl_field(0, ToGradeSubdir_40, 4) = ((MR_Box) (TargetArch_39));
  }
  libs__globals__get_subdir_setting_2_p_0(STATE_VARIABLE_Globals_13_238, &SubdirSetting_42);
  switch (SubdirSetting_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word IntermodDirs3_45;
        MR_Word LinkLibDirs2_46;
        MR_Word InitDirs2_47;
        MR_Word Var_257;

        IntermodDirs3_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_37, IntermodDirs2_38);
        {
          Var_257 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_257, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_257, 1) = ((MR_Box) (IntermodDirs3_45));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 719, Var_257, STATE_VARIABLE_Globals_13_238, &STATE_VARIABLE_Globals_14_258);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_14_258, (MR_Integer) 609, &LinkLibDirs2_46);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_14_258, (MR_Integer) 622, &InitDirs2_47);
        LinkLibDirs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_37, LinkLibDirs2_46);
        InitDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_37, InitDirs2_47);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String GradeSubdir_43;
        MR_Word SearchLibFilesGradeSubdirs_44;
        MR_Word ToGradeLibDir_48;
        MR_Word SearchGradeLibDirs_49;
        MR_Word ToGradeInitDir_51;
        MR_Word SearchGradeInitDirs_52;
        MR_String Var_248;
        MR_Word Var_250;
        MR_Word Var_252;
        MR_Word Var_253;
        MR_Word Var_254;
        MR_String Var_255;
        MR_Word IntermodDirs3_420;
        MR_Word LinkLibDirs2_421;
        MR_Word InitDirs2_422;
        MR_Word Var_423;

        Var_248 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_21);
        GradeSubdir_43 = mercury__dir__f_slash_2_f_0(Var_248, TargetArch_39);
        SearchLibFilesGradeSubdirs_44 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_40, SearchLibFilesDirs_37);
        {
          Var_250 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_250, 0) = ((MR_Box) (GradeSubdir_43));
          MR_hl_field(1, Var_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_255 = mercury__dir__this_directory_0_f_0();
        {
          Var_254 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_254, 0) = ((MR_Box) (&libs__handle_options_scalar_common_8[0]));
          MR_hl_field(0, Var_254, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_6));
          MR_hl_field(0, Var_254, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_254, 3) = ((MR_Box) (Var_255));
        }
        Var_253 = mercury__list__negated_filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_254, IntermodDirs2_38);
        Var_252 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_44, Var_253);
        IntermodDirs3_420 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_250, Var_252);
        {
          Var_423 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_423, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_423, 1) = ((MR_Box) (IntermodDirs3_420));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 719, Var_423, STATE_VARIABLE_Globals_13_238, &STATE_VARIABLE_Globals_14_258);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_14_258, (MR_Integer) 609, &LinkLibDirs2_421);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_14_258, (MR_Integer) 622, &InitDirs2_422);
        {
          ToGradeLibDir_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeLibDir_48, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
          MR_hl_field(0, ToGradeLibDir_48, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_7));
          MR_hl_field(0, ToGradeLibDir_48, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeLibDir_48, 3) = ((MR_Box) (ToGradeSubdir_40));
        }
        SearchGradeLibDirs_49 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_48, SearchLibFilesDirs_37);
        LinkLibDirs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_49, LinkLibDirs2_421);
        {
          ToGradeInitDir_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeInitDir_51, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
          MR_hl_field(0, ToGradeInitDir_51, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_8));
          MR_hl_field(0, ToGradeInitDir_51, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeInitDir_51, 3) = ((MR_Box) (ToGradeSubdir_40));
        }
        SearchGradeInitDirs_52 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_51, SearchLibFilesDirs_37);
        InitDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_52, InitDirs2_422);
      }
      break;
  }
  {
    Var_274 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_274, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_274, 1) = ((MR_Box) (LinkLibDirs_50));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 609, Var_274, STATE_VARIABLE_Globals_14_258, &STATE_VARIABLE_Globals_15_275);
  {
    Var_277 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_277, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_277, 1) = ((MR_Box) (InitDirs_53));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 622, Var_277, STATE_VARIABLE_Globals_15_275, &STATE_VARIABLE_Globals_16_278);
  switch (SubdirSetting_42) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      {
        {
          ToMihsSubdir_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToMihsSubdir_54, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
          MR_hl_field(0, ToMihsSubdir_54, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_3_p_0_9));
          MR_hl_field(0, ToMihsSubdir_54, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToMihsSubdir_54, 3) = ((MR_Box) (ToGradeSubdir_40));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        ToMihsSubdir_54 = (MR_Word) (&libs__handle_options_scalar_common_9[0]);
        succeeded = MR_TRUE;
      }
      break;
  }
  if (succeeded)
  {
    MR_Word CIncludeDirs1_56;
    MR_String MhsSubdir_57;
    MR_String MihsSubdir_58;
    MR_Word SearchLibMhsSubdirs_59;
    MR_Word SearchLibMihsSubdirs_60;
    MR_Word SubdirCIncludeDirs_61;
    MR_String Var_296;
    MR_String Var_297;
    MR_String Var_298;
    MR_Word Var_299;
    MR_Word Var_300;
    MR_Word Var_301;
    MR_Word Var_302;
    MR_Word Var_304;
    MR_Box MR_CALL (* func_10)(MR_Box, MR_Box);
    MR_Box conv11_MihsSubdir_58;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_16_278, (MR_Integer) 570, &CIncludeDirs1_56);
    Var_296 = mercury__dir__this_directory_0_f_0();
    MhsSubdir_57 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(Var_296);
    Var_297 = mercury__dir__this_directory_0_f_0();
    func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToMihsSubdir_54, 1))));
    conv11_MihsSubdir_58 = func_10(((MR_Box) (ToMihsSubdir_54)), ((MR_Box) (Var_297)));
    MihsSubdir_58 = ((MR_String) (conv11_MihsSubdir_58));
    SearchLibMhsSubdirs_59 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__handle_options_scalar_common_9[1]), SearchLibFilesDirs_37);
    SearchLibMihsSubdirs_60 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_54, SearchLibFilesDirs_37);
    Var_298 = mercury__dir__this_directory_0_f_0();
    Var_302 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_60, CIncludeDirs1_56);
    Var_301 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMhsSubdirs_59, Var_302);
    {
      Var_300 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_300, 0) = ((MR_Box) (MihsSubdir_58));
      MR_hl_field(1, Var_300, 1) = ((MR_Box) (Var_301));
    }
    {
      Var_299 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_299, 0) = ((MR_Box) (MhsSubdir_57));
      MR_hl_field(1, Var_299, 1) = ((MR_Box) (Var_300));
    }
    {
      SubdirCIncludeDirs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SubdirCIncludeDirs_61, 0) = ((MR_Box) (Var_298));
      MR_hl_field(1, SubdirCIncludeDirs_61, 1) = ((MR_Box) (Var_299));
    }
    {
      Var_304 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_304, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_304, 1) = ((MR_Box) (SubdirCIncludeDirs_61));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 570, Var_304, STATE_VARIABLE_Globals_16_278, &STATE_VARIABLE_Globals_17_305);
  }
  else
    STATE_VARIABLE_Globals_17_305 = STATE_VARIABLE_Globals_16_278;
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 721, &InterfaceSame_62);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 722, &InterfaceIndep_63);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 723, &InterfaceInstalled_64);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 724, &IntermodSame_65);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 725, &IntermodIndep_66);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 726, &IntermodInstalled_67);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 727, &CInclSame_68);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 728, &CInclIndep_69);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 729, &CInclInstalled_70);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 730, &CInclExternal_71);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 731, &MerLibSame_72);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 732, &MerLibIndep_73);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 733, &MerLibInstalled_74);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_InterfaceDirsMap_1_319);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_IntermodDirsMap_1_320);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_CInclDirsMap_1_321);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_LibDirsMap_1_322);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_StdLibDirsMap_1_323);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 0, &Var_80, &ExtDirInt0_81);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 1, &Var_82, &ExtDirInt1_83);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 2, &Var_84, &ExtDirInt2_85);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 3, &Var_86, &ExtDirInt3_87);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 10, &Var_88, &ExtDirModuleDep_89);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_42, ExtDirInt0_81, InterfaceSame_62, InterfaceIndep_63, InterfaceInstalled_64, &InterfaceInt0_90);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_42, ExtDirInt1_83, InterfaceSame_62, InterfaceIndep_63, InterfaceInstalled_64, &InterfaceInt1_91);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_42, ExtDirInt2_85, InterfaceSame_62, InterfaceIndep_63, InterfaceInstalled_64, &InterfaceInt2_92);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_42, ExtDirInt3_87, InterfaceSame_62, InterfaceIndep_63, InterfaceInstalled_64, &InterfaceInt3_93);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_42, ExtDirModuleDep_89, InterfaceSame_62, InterfaceIndep_63, InterfaceInstalled_64, &InterfaceModuleDep_94);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (InterfaceInt0_90)), STATE_VARIABLE_InterfaceDirsMap_1_319, &STATE_VARIABLE_InterfaceDirsMap_2_330);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (InterfaceInt1_91)), STATE_VARIABLE_InterfaceDirsMap_2_330, &STATE_VARIABLE_InterfaceDirsMap_3_332);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (InterfaceInt2_92)), STATE_VARIABLE_InterfaceDirsMap_3_332, &STATE_VARIABLE_InterfaceDirsMap_4_334);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 3)), ((MR_Box) (InterfaceInt3_93)), STATE_VARIABLE_InterfaceDirsMap_4_334, &STATE_VARIABLE_InterfaceDirsMap_5_336);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 4)), ((MR_Box) (InterfaceModuleDep_94)), STATE_VARIABLE_InterfaceDirsMap_5_336, &STATE_VARIABLE_InterfaceDirsMap_6_338);
  Var_339 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InterfaceIndep_63, InterfaceInstalled_64);
  InterfaceSrc_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InterfaceSame_62, Var_339);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 5)), ((MR_Box) (InterfaceSrc_95)), STATE_VARIABLE_InterfaceDirsMap_6_338, &STATE_VARIABLE_InterfaceDirsMap_7_341);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 0, &Var_96, &ExtDirPlainOpt_97);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 1, &Var_98, &ExtDirTransOpt_99);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 10, &Var_100, &ExtDirDate_101);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 11, &Var_102, &ExtDirStatus_103);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 2, &Var_104, &ExtDirAnalysis_105);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 3, &Var_106, &ExtDirImdg_107);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 4, &Var_108, &ExtDirRequest_109);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirPlainOpt_97, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodPlainOpt_110);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirTransOpt_99, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodTransOpt_111);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirDate_101, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodDate_112);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirStatus_103, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodStatus_113);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirAnalysis_105, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodAnalysis_114);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirImdg_107, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodImdg_115);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirRequest_109, IntermodSame_65, IntermodIndep_66, IntermodInstalled_67, &IntermodRequest_116);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (IntermodPlainOpt_110)), STATE_VARIABLE_IntermodDirsMap_1_320, &STATE_VARIABLE_IntermodDirsMap_2_350);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (IntermodTransOpt_111)), STATE_VARIABLE_IntermodDirsMap_2_350, &STATE_VARIABLE_IntermodDirsMap_3_352);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (IntermodDate_112)), STATE_VARIABLE_IntermodDirsMap_3_352, &STATE_VARIABLE_IntermodDirsMap_4_354);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 3)), ((MR_Box) (IntermodStatus_113)), STATE_VARIABLE_IntermodDirsMap_4_354, &STATE_VARIABLE_IntermodDirsMap_5_356);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 4)), ((MR_Box) (IntermodAnalysis_114)), STATE_VARIABLE_IntermodDirsMap_5_356, &STATE_VARIABLE_IntermodDirsMap_6_358);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 5)), ((MR_Box) (IntermodImdg_115)), STATE_VARIABLE_IntermodDirsMap_6_358, &STATE_VARIABLE_IntermodDirsMap_7_360);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 6)), ((MR_Box) (IntermodRequest_116)), STATE_VARIABLE_IntermodDirsMap_7_360, &STATE_VARIABLE_IntermodDirsMap_8_362);
  Var_363 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodIndep_66, IntermodInstalled_67);
  IntermodSrc_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodSame_65, Var_363);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 7)), ((MR_Box) (IntermodSrc_117)), STATE_VARIABLE_IntermodDirsMap_8_362, &STATE_VARIABLE_IntermodDirsMap_9_365);
  parse_tree__file_names__ext_cur_pgs_max_cur_extension_dir_3_p_0(&Var_118, &ExtDirMh_119);
  parse_tree__file_names__ext_cur_ngs_gs_max_cur_extension_dir_3_p_0(&Var_120, &ExtDirMih_121);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_42, ExtDirMh_119, CInclSame_68, CInclIndep_69, CInclInstalled_70, &CInclMh_122);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirMih_121, CInclSame_68, CInclIndep_69, CInclInstalled_70, &CInclMih_123);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (CInclMh_122)), STATE_VARIABLE_CInclDirsMap_1_321, &STATE_VARIABLE_CInclDirsMap_2_369);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (CInclMih_123)), STATE_VARIABLE_CInclDirsMap_2_369, &STATE_VARIABLE_CInclDirsMap_3_371);
  Var_372 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CInclMih_123, CInclExternal_71);
  CInclH0_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CInclMh_122, Var_372);
  mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CInclH0_124, &CInclH_125);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (CInclH_125)), STATE_VARIABLE_CInclDirsMap_3_371, &STATE_VARIABLE_CInclDirsMap_4_374);
  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(STATE_VARIABLE_Globals_17_305, (MR_Integer) 7, &Var_126, &ExtDirA_127);
  libs__handle_options__make_proposed_search_path_gas_8_p_0(SubdirSetting_42, Grade_21, TargetArch_39, ExtDirA_127, MerLibSame_72, MerLibIndep_73, MerLibInstalled_74, &LibA_128);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (LibA_128)), STATE_VARIABLE_LibDirsMap_1_322, &STATE_VARIABLE_LibDirsMap_2_377);
  parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 0, &Var_129, &Var_130, &ExtDirInit_131);
  parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 1, &Var_132, &Var_133, &ExtDirJar_134);
  parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 2, &Var_135, &Var_136, &ExtDirDll_137);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirInit_131, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MerStdLibDirs_12, &LibInit_138);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirJar_134, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MerStdLibDirs_12, &LibJar_139);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_42, Grade_21, ExtDirDll_137, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MerStdLibDirs_12, &LibDll_140);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (LibInit_138)), STATE_VARIABLE_StdLibDirsMap_1_323, &STATE_VARIABLE_StdLibDirsMap_2_388);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (LibJar_139)), STATE_VARIABLE_StdLibDirsMap_2_388, &STATE_VARIABLE_StdLibDirsMap_3_390);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (LibDll_140)), STATE_VARIABLE_StdLibDirsMap_3_390, &STATE_VARIABLE_StdLibDirsMap_4_392);
  {
    ExtDirsMaps_141 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExtDirsMaps_141, 0) = ((MR_Box) (STATE_VARIABLE_InterfaceDirsMap_7_341));
    MR_hl_field(0, ExtDirsMaps_141, 1) = ((MR_Box) (STATE_VARIABLE_IntermodDirsMap_9_365));
    MR_hl_field(0, ExtDirsMaps_141, 2) = ((MR_Box) (STATE_VARIABLE_CInclDirsMap_4_374));
    MR_hl_field(0, ExtDirsMaps_141, 3) = ((MR_Box) (STATE_VARIABLE_LibDirsMap_2_377));
    MR_hl_field(0, ExtDirsMaps_141, 4) = ((MR_Box) (STATE_VARIABLE_StdLibDirsMap_4_392));
  }
  libs__globals__set_ext_dirs_maps_3_p_0(ExtDirsMaps_141, STATE_VARIABLE_Globals_17_305, STATE_VARIABLE_Globals_143);
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(
  MR_String LambdaHeadVar__1_290)
{
  MR_String LambdaHeadVar__2_291;
  MR_String Var_292;

  Var_292 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_290, (MR_String) "Mercury");
  LambdaHeadVar__2_291 = mercury__dir__f_slash_2_f_0(Var_292, (MR_String) "mhs");
  return LambdaHeadVar__2_291;
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__4_4;

  parse_tree__file_names__make_selected_proposed_dir_name_ngs_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), &conv2_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__4_4));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;

  parse_tree__file_names__make_all_proposed_dir_names_ngs_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_3));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__4_4;

  parse_tree__file_names__make_selected_proposed_dir_name_ngs_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_ngs_6_p_0(
  MR_Word SubdirSetting_7,
  MR_String ExtSubDir_8,
  MR_Word SearchDirsSame_9,
  MR_Word SearchDirsIndep_10,
  MR_Word SearchDirsInstall_11,
  MR_Word * Dirs_12)
{
  MR_Word DirsSame_13;
  MR_Word DirsListIndep_14;
  MR_Word DirsInstall_15;
  MR_Word DirsIndep_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_21;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_ngs_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (SubdirSetting_7));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (ExtSubDir_8));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, SearchDirsSame_9, &DirsSame_13);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_ngs_6_p_0_2));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (ExtSubDir_8));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), Var_18, SearchDirsIndep_10, &DirsListIndep_14);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_ngs_6_p_0_3));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (ExtSubDir_8));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, SearchDirsInstall_11, &DirsInstall_15);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsListIndep_14, &DirsIndep_16);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsIndep_16, DirsInstall_15);
  *Dirs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsSame_13, Var_21);
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gs_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__5_5;

  parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), &conv2_HeadVar__5_5);
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

  parse_tree__file_names__make_all_proposed_dir_names_gs_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__4_4);
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

  parse_tree__file_names__make_selected_proposed_dir_name_gs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), &conv0_HeadVar__5_5);
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
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gs_7_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (SubdirSetting_8));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (Grade_9));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (ExtSubDir_10));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, SearchDirsSame_11, &DirsSame_15);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gs_7_p_0_2));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Grade_9));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (ExtSubDir_10));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), Var_20, SearchDirsIndep_12, &DirsListIndep_16);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[1]));
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
libs__handle_options__make_proposed_search_path_gas_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__6_6;

  parse_tree__file_names__make_selected_proposed_dir_name_gas_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) (wrapper_arg_1)), &conv2_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__6_6));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gas_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__5_5;

  parse_tree__file_names__make_all_proposed_dir_names_gas_5_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gas_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__make_selected_proposed_dir_name_gas_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_String) (wrapper_arg_1)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
libs__handle_options__make_proposed_search_path_gas_8_p_0(
  MR_Word SubdirSetting_9,
  MR_String Grade_10,
  MR_String TargetArch_11,
  MR_String ExtSubDir_12,
  MR_Word SearchDirsSame_13,
  MR_Word SearchDirsIndep_14,
  MR_Word SearchDirsInstall_15,
  MR_Word * Dirs_16)
{
  MR_Word DirsSame_17;
  MR_Word DirsListIndep_18;
  MR_Word DirsInstall_19;
  MR_Word DirsIndep_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_25;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gas_8_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (SubdirSetting_9));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Grade_10));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (TargetArch_11));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (ExtSubDir_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, SearchDirsSame_13, &DirsSame_17);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&libs__handle_options_scalar_common_5[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gas_8_p_0_2));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Grade_10));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (TargetArch_11));
    MR_hl_field(0, Var_22, 5) = ((MR_Box) (ExtSubDir_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), Var_22, SearchDirsIndep_14, &DirsListIndep_18);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&libs__handle_options_scalar_common_4[0]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (libs__handle_options__make_proposed_search_path_gas_8_p_0_3));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (Grade_10));
    MR_hl_field(0, Var_23, 5) = ((MR_Box) (TargetArch_11));
    MR_hl_field(0, Var_23, 6) = ((MR_Box) (ExtSubDir_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, SearchDirsInstall_15, &DirsInstall_19);
  mercury__list__condense_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsListIndep_18, &DirsIndep_20);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsIndep_20, DirsInstall_19);
  *Dirs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirsSame_17, Var_25);
}

static void MR_CALL 
libs__handle_options__handle_subdir_setting_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_11,
  MR_Word * STATE_VARIABLE_Globals_12)
{
  MR_bool succeeded;
  MR_Word UseGradeSubdirs_6;
  MR_Word SubdirSetting_8;
  MR_Word STATE_VARIABLE_Globals_1_16;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 715, &UseGradeSubdirs_6);
  switch (UseGradeSubdirs_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        if ((OpMode_4 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) OpMode_4)) == (MR_Integer) 3))
        {
          MR_Word InvokedByMMCMake_10 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_4, 1))) & (MR_Integer) 1);

          succeeded = (InvokedByMMCMake_10 == (MR_Integer) 1);
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
        {
          libs__globals__set_option_4_p_0((MR_Integer) 714, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_11, &STATE_VARIABLE_Globals_1_16);
          SubdirSetting_8 = (MR_Integer) 1;
        }
        else
        {
          MR_Word UseSubdirs_23;

          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 714, &UseSubdirs_23);
          switch (UseSubdirs_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SubdirSetting_8 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              SubdirSetting_8 = (MR_Integer) 1;
              break;
          }
          STATE_VARIABLE_Globals_1_16 = STATE_VARIABLE_Globals_0_11;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        libs__globals__set_option_4_p_0((MR_Integer) 714, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_11, &STATE_VARIABLE_Globals_1_16);
        SubdirSetting_8 = (MR_Integer) 2;
      }
      break;
  }
  libs__globals__set_subdir_setting_3_p_0(SubdirSetting_8, STATE_VARIABLE_Globals_1_16, STATE_VARIABLE_Globals_12);
}

static void MR_CALL 
libs__handle_options__handle_libgrades_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word STATE_VARIABLE_Globals_0_23,
  MR_Word * STATE_VARIABLE_Globals_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  MR_bool succeeded;
  MR_Word MaybeStdLibGrades0_12;
  MR_Word StdLibGrades_14;
  MR_Word LibGrades0_20;
  MR_Word STATE_VARIABLE_Globals_1_31;
  MR_Word STATE_VARIABLE_Globals_2_36;
  MR_Word SpecifiedLibGrades_21;
  MR_String Var_33;

  libs__globals__get_maybe_stdlib_grades_2_p_0(STATE_VARIABLE_Globals_0_23, &MaybeStdLibGrades0_12);
  if ((MaybeStdLibGrades0_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Detect_15;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_23, (MR_Integer) 705, &Detect_15);
    switch (Detect_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          StdLibGrades_14 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Globals_1_31 = STATE_VARIABLE_Globals_0_23;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeStdLibGradeSet_16;

          libs__check_libgrades__detect_stdlib_grades_5_p_0(ProgressStream_8, STATE_VARIABLE_Globals_0_23, &MaybeStdLibGradeSet_16);
          if (((MR_tag((MR_Word) MaybeStdLibGradeSet_16)) == (MR_Integer) 0))
          {
            StdLibGrades_14 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Globals_1_31 = STATE_VARIABLE_Globals_0_23;
          }
          else
          {
            MR_Word StdLibGradeSet_17 = ((MR_Word) ((MR_hl_field(1, MaybeStdLibGradeSet_16, 0))));
            MR_Word MaybeStdLibGrades_18;

            {
              MaybeStdLibGrades_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeStdLibGrades_18, 0) = ((MR_Box) (StdLibGradeSet_17));
            }
            libs__globals__set_maybe_stdlib_grades_3_p_0(MaybeStdLibGrades_18, STATE_VARIABLE_Globals_0_23, &STATE_VARIABLE_Globals_1_31);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdLibGradeSet_17, &StdLibGrades_14);
          }
        }
        break;
    }
  }
  else
  {
    MR_Word StdLibGradeSet0_13 = ((MR_Word) ((MR_hl_field(1, MaybeStdLibGrades0_12, 0))));

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdLibGradeSet0_13, &StdLibGrades_14);
    STATE_VARIABLE_Globals_1_31 = STATE_VARIABLE_Globals_0_23;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_1_31, (MR_Integer) 706, &LibGrades0_20);
  succeeded = (LibGrades0_20 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_33 = ((MR_String) ((MR_hl_field(1, LibGrades0_20, 0))));
    SpecifiedLibGrades_21 = ((MR_Word) ((MR_hl_field(1, LibGrades0_20, 1))));
    succeeded = (strcmp(Var_33, (MR_String) "stdlib") == 0);
  }
  if (succeeded)
  {
    MR_Word LibGrades_22;
    MR_Word Var_35;

    LibGrades_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdLibGrades_14, SpecifiedLibGrades_21);
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (LibGrades_22));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 706, Var_35, STATE_VARIABLE_Globals_1_31, &STATE_VARIABLE_Globals_2_36);
  }
  else
    STATE_VARIABLE_Globals_2_36 = STATE_VARIABLE_Globals_1_31;
  libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0(STATE_VARIABLE_Globals_2_36, STATE_VARIABLE_Globals_24, STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
}

static void MR_CALL 
libs__handle_options__handle_chosen_stdlib_dir_5_p_0(
  MR_Word MaybeEnvOptFileMerStdLibDir_6,
  MR_Word STATE_VARIABLE_Globals_0_19,
  MR_Word * STATE_VARIABLE_Globals_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word MaybeOptionsStdLibDir_9;
  MR_Word MaybeChosenStdLibDir_11;
  MR_Word Var_106;

  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 620, &MaybeOptionsStdLibDir_9);
  if ((MaybeOptionsStdLibDir_9 == (MR_Word) ((MR_Unsigned) 0U)))
    if (((MR_tag((MR_Word) MaybeEnvOptFileMerStdLibDir_6)) == (MR_Integer) 0))
    {
      MR_Word EnvOptFileSpecs_18 = ((MR_Word) ((MR_hl_field(0, MaybeEnvOptFileMerStdLibDir_6, 0))));

      MaybeChosenStdLibDir_11 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), EnvOptFileSpecs_18, STATE_VARIABLE_Specs_0_21);
    }
    else
    {
      MR_Word EnvOptFileMerStdLibDirs_12 = ((MR_Word) ((MR_hl_field(1, MaybeEnvOptFileMerStdLibDir_6, 0))));

      if ((EnvOptFileMerStdLibDirs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeChosenStdLibDir_11 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_22 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_3[0])));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
        }
      }
      else
      {
        MR_Word Var_112 = ((MR_Word) ((MR_hl_field(1, EnvOptFileMerStdLibDirs_12, 1))));
        MR_String Var_113 = ((MR_String) ((MR_hl_field(1, EnvOptFileMerStdLibDirs_12, 0))));

        if ((Var_112 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MaybeChosenStdLibDir_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeChosenStdLibDir_11, 0) = ((MR_Box) (Var_113));
          }
          *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
        }
        else
        {
          MaybeChosenStdLibDir_11 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_3[1])));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
          }
        }
      }
    }
  else
  {
    MaybeChosenStdLibDir_11 = MaybeOptionsStdLibDir_9;
    *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
  }
  {
    Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, Var_106, 1) = ((MR_Box) (MaybeChosenStdLibDir_11));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 734, Var_106, STATE_VARIABLE_Globals_0_19, STATE_VARIABLE_Globals_20);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 180, &Smart_11);
  switch (Smart_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_15 = STATE_VARIABLE_Globals_0_14;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_1_22;
        MR_Word STATE_VARIABLE_Globals_2_27;
        MR_Word OpModeArgs_12;
        MR_Word Var_29;
        MR_Word Var_30;

        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_0_14, (MR_Integer) 529, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_32;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 180, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_1_22);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_22, (MR_Integer) 36, &WarnSmart_32);
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
                libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_22, (MR_Integer) 3, &Halt_33);
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
          STATE_VARIABLE_Globals_1_22 = STATE_VARIABLE_Globals_0_14;
        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_1_22, (MR_Integer) 531, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_51;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 180, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_1_22, &STATE_VARIABLE_Globals_2_27);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_2_27, (MR_Integer) 36, &WarnSmart_51);
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
                libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_2_27, (MR_Integer) 3, &Halt_52);
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
          STATE_VARIABLE_Globals_2_27 = STATE_VARIABLE_Globals_1_22;
        succeeded = ((MR_tag((MR_Word) OpMode_8)) == (MR_Integer) 3);
        if (succeeded)
        {
          OpModeArgs_12 = ((MR_Word) ((MR_hl_field(3, OpMode_8, 0))));
          succeeded = ((MR_tag((MR_Word) OpModeArgs_12)) == (MR_Integer) 3);
          if (succeeded)
          {
            Var_29 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_12, 0))));
            succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_30 = ((MR_Unsigned) ((MR_hl_field(1, Var_29, 0))) & (MR_Integer) 3);
              succeeded = (Var_30 == (MR_Integer) 1);
            }
          }
        }
        if (succeeded)
          *STATE_VARIABLE_Globals_15 = STATE_VARIABLE_Globals_2_27;
        else
        {
          MR_Word WarnSmart_70;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 180, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_2_27, STATE_VARIABLE_Globals_15);
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_15, (MR_Integer) 36, &WarnSmart_70);
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
  MR_Word STATE_VARIABLE_Globals_1_13;
  MR_Word STATE_VARIABLE_Globals_2_18;
  MR_Word STATE_VARIABLE_Globals_3_23;
  MR_Word STATE_VARIABLE_Globals_4_28;
  MR_Word STATE_VARIABLE_Globals_5_33;
  MR_Word STATE_VARIABLE_Globals_6_38;
  MR_Word STATE_VARIABLE_Globals_7_43;
  MR_Word STATE_VARIABLE_Globals_8_48;
  MR_Word STATE_VARIABLE_Globals_9_53;
  MR_Word STATE_VARIABLE_Globals_10_58;
  MR_Word STATE_VARIABLE_Globals_11_63;
  MR_Word STATE_VARIABLE_Globals_12_68;
  MR_Word STATE_VARIABLE_Globals_13_73;
  MR_Word STATE_VARIABLE_Globals_14_78;
  MR_Word STATE_VARIABLE_Globals_15_83;
  MR_Word STATE_VARIABLE_Globals_16_88;
  MR_Word STATE_VARIABLE_Globals_17_93;
  MR_Word STATE_VARIABLE_Globals_18_98;
  MR_Word STATE_VARIABLE_Globals_19_103;
  MR_Word STATE_VARIABLE_Globals_20_107;
  MR_Word InvokedByMMCMake_7;

  if (succeeded)
  {
    InvokedByMMCMake_7 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_4, 1))) & (MR_Integer) 1);
    succeeded = (InvokedByMMCMake_7 == (MR_Integer) 1);
  }
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 182, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_9, &STATE_VARIABLE_Globals_1_13);
  else
    STATE_VARIABLE_Globals_1_13 = STATE_VARIABLE_Globals_0_9;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 85, (MR_Integer) 84, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_13, &STATE_VARIABLE_Globals_2_18);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 135, (MR_Integer) 238, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_2_18, &STATE_VARIABLE_Globals_3_23);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 238, (MR_Integer) 236, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_3_23, &STATE_VARIABLE_Globals_4_28);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 237, (MR_Integer) 236, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_4_28, &STATE_VARIABLE_Globals_5_33);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 264, (MR_Integer) 343, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_5_33, &STATE_VARIABLE_Globals_6_38);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 273, (MR_Integer) 343, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_6_38, &STATE_VARIABLE_Globals_7_43);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 537, (MR_Integer) 538, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_7_43, &STATE_VARIABLE_Globals_8_48);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 543, (MR_Integer) 541, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_8_48, &STATE_VARIABLE_Globals_9_53);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 551, (MR_Integer) 550, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_9_53, &STATE_VARIABLE_Globals_10_58);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 558, (MR_Integer) 557, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_10_58, &STATE_VARIABLE_Globals_11_63);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 550, (MR_Integer) 549, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_11_63, &STATE_VARIABLE_Globals_12_68);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 557, (MR_Integer) 556, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_12_68, &STATE_VARIABLE_Globals_13_73);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 550, (MR_Integer) 23, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_13_73, &STATE_VARIABLE_Globals_14_78);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 557, (MR_Integer) 23, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_14_78, &STATE_VARIABLE_Globals_15_83);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 533, (MR_Integer) 529, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_15_83, &STATE_VARIABLE_Globals_16_88);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 533, (MR_Integer) 532, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_16_88, &STATE_VARIABLE_Globals_17_93);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 529, (MR_Integer) 531, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_17_93, &STATE_VARIABLE_Globals_18_98);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 532, (MR_Integer) 531, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_18_98, &STATE_VARIABLE_Globals_19_103);
  libs__globals__set_option_4_p_0((MR_Integer) 531, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_19_103, &STATE_VARIABLE_Globals_20_107);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_20_107, (MR_Integer) 56, &UnusedImports_8);
  switch (UnusedImports_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_10 = STATE_VARIABLE_Globals_20_107;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 57, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_20_107, STATE_VARIABLE_Globals_10);
      break;
  }
}

static void MR_CALL 
libs__handle_options__handle_op_mode_implications_3_p_0(
  MR_Word OpMode_4,
  MR_Word STATE_VARIABLE_Globals_0_18,
  MR_Word * STATE_VARIABLE_Globals_19)
{
  MR_bool succeeded;
  MR_Word Smart0_6;
  MR_Word Inform0_7;
  MR_Word Smart_11;
  MR_Word Inform_12;
  MR_Word STATE_VARIABLE_Globals_2_26;
  MR_Word STATE_VARIABLE_Globals_9_47;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 180, &Smart0_6);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_18, (MR_Integer) 77, &Inform0_7);
  switch (MR_tag((MR_Word) OpMode_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpMode_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Smart_11 = (MR_Integer) 0;
            Inform_12 = (MR_Integer) 0;
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
          }
          break;
        case (MR_Integer) 1:
          {
            Smart_11 = (MR_Integer) 0;
            Inform_12 = (MR_Integer) 0;
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        Smart_11 = (MR_Integer) 0;
        Inform_12 = (MR_Integer) 0;
        STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OpModeQuery_16 = ((MR_Unsigned) ((MR_hl_field(2, OpMode_4, 0))) & (MR_Integer) 15);

        switch (OpModeQuery_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 3:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 2:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 5:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 6:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 4:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 11:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 7:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            libs__globals__set_option_4_p_0((MR_Integer) 705, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_18, &STATE_VARIABLE_Globals_2_26);
            break;
          case (MR_Integer) 10:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 8:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 9:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 14:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
          case (MR_Integer) 15:
            STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            break;
        }
        Smart_11 = (MR_Integer) 0;
        Inform_12 = (MR_Integer) 0;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeArgs_8 = ((MR_Word) ((MR_hl_field(3, OpMode_4, 0))));

        switch (MR_tag((MR_Word) OpModeArgs_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              Smart_11 = (MR_Integer) 0;
              Inform_12 = (MR_Integer) 0;
              STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word OpModeArgsMI_10 = ((MR_Unsigned) ((MR_hl_field(2, OpModeArgs_8, 0))) & (MR_Integer) 3);
              MR_Word STATE_VARIABLE_Globals_1_23;

              libs__handle_options__turn_off_all_only_codegen_warnings_3_p_0((MR_Integer) 4, STATE_VARIABLE_Globals_0_18, &STATE_VARIABLE_Globals_1_23);
              switch (OpModeArgsMI_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word Var_25;

                    {
                      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_25, 0) = (MR_Box) ((MR_Unsigned) (Smart0_6));
                    }
                    libs__globals__set_option_4_p_0((MR_Integer) 181, Var_25, STATE_VARIABLE_Globals_1_23, &STATE_VARIABLE_Globals_2_26);
                  }
                  break;
                case (MR_Integer) 2:
                  libs__globals__set_option_4_p_0((MR_Integer) 181, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_1_23, &STATE_VARIABLE_Globals_2_26);
                  break;
              }
              Smart_11 = (MR_Integer) 0;
              Inform_12 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word OpModeAugment_13 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_8, 0))));

              switch (MR_tag((MR_Word) OpModeAugment_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(OpModeAugment_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word HaltAtWarn_72;
                        MR_Word STATE_VARIABLE_OptionTable_1_73;
                        MR_Word STATE_VARIABLE_OptionTable_2_76;
                        MR_Word STATE_VARIABLE_OptionTable_3_79;
                        MR_Word Var_80;
                        MR_Word STATE_VARIABLE_OptionTable_4_82;
                        MR_Word Var_84;
                        MR_Word STATE_VARIABLE_OptionTable_5_86;
                        MR_Word Var_88;
                        MR_Word STATE_VARIABLE_OptionTable_6_90;
                        MR_Box conv1_HaltAtWarn_72;

                        libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_0_18, &STATE_VARIABLE_OptionTable_1_73);
                        mercury__map__det_update_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 200)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[4]))), STATE_VARIABLE_OptionTable_1_73, &STATE_VARIABLE_OptionTable_2_76);
                        mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_2_76, ((MR_Box) ((MR_Integer) 5)), &conv1_HaltAtWarn_72);
                        HaltAtWarn_72 = ((MR_Word) (conv1_HaltAtWarn_72));
                        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 3)), ((MR_Box) (HaltAtWarn_72)), STATE_VARIABLE_OptionTable_2_76, &STATE_VARIABLE_OptionTable_3_79);
                        Var_80 = libs__options__dodgy_code_warning_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_80, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_3_79, &STATE_VARIABLE_OptionTable_4_82);
                        Var_84 = libs__options__style_warning_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_84, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_4_82, &STATE_VARIABLE_OptionTable_5_86);
                        Var_88 = libs__options__info_request_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_88, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_5_86, &STATE_VARIABLE_OptionTable_6_90);
                        libs__globals__set_options_3_p_0(STATE_VARIABLE_OptionTable_6_90, STATE_VARIABLE_Globals_0_18, &STATE_VARIABLE_Globals_2_26);
                        Smart_11 = (MR_Integer) 0;
                        Inform_12 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word STATE_VARIABLE_Globals_5_35;

                        libs__globals__set_option_4_p_0((MR_Integer) 533, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_18, &STATE_VARIABLE_Globals_5_35);
                        libs__handle_options__turn_off_all_only_codegen_warnings_3_p_0((MR_Integer) 5, STATE_VARIABLE_Globals_5_35, &STATE_VARIABLE_Globals_2_26);
                        Smart_11 = (MR_Integer) 0;
                        Inform_12 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                      {
                        MR_Word HaltAtWarn_50;
                        MR_Word STATE_VARIABLE_OptionTable_1_51;
                        MR_Word STATE_VARIABLE_OptionTable_2_54;
                        MR_Word STATE_VARIABLE_OptionTable_3_57;
                        MR_Word Var_58;
                        MR_Word STATE_VARIABLE_OptionTable_4_60;
                        MR_Word Var_62;
                        MR_Word STATE_VARIABLE_OptionTable_5_64;
                        MR_Word Var_66;
                        MR_Word STATE_VARIABLE_OptionTable_6_68;
                        MR_Box conv0_HaltAtWarn_50;

                        libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_0_18, &STATE_VARIABLE_OptionTable_1_51);
                        mercury__map__det_update_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 200)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[4]))), STATE_VARIABLE_OptionTable_1_51, &STATE_VARIABLE_OptionTable_2_54);
                        mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_2_54, ((MR_Box) ((MR_Integer) 3)), &conv0_HaltAtWarn_50);
                        HaltAtWarn_50 = ((MR_Word) (conv0_HaltAtWarn_50));
                        mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 3)), ((MR_Box) (HaltAtWarn_50)), STATE_VARIABLE_OptionTable_2_54, &STATE_VARIABLE_OptionTable_3_57);
                        Var_58 = libs__options__dodgy_code_warning_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_58, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_3_57, &STATE_VARIABLE_OptionTable_4_60);
                        Var_62 = libs__options__style_warning_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_62, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_4_60, &STATE_VARIABLE_OptionTable_5_64);
                        Var_66 = libs__options__info_request_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_66, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_5_64, &STATE_VARIABLE_OptionTable_6_68);
                        libs__globals__set_options_3_p_0(STATE_VARIABLE_OptionTable_6_68, STATE_VARIABLE_Globals_0_18, &STATE_VARIABLE_Globals_2_26);
                        Smart_11 = (MR_Integer) 0;
                        Inform_12 = (MR_Integer) 0;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OpModeFrontAndMiddle_14 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_13, 0))) & (MR_Integer) 3);

                    switch (OpModeFrontAndMiddle_14) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Smart_11 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 1:
                      case (MR_Integer) 3:
                        Smart_11 = Smart0_6;
                        break;
                    }
                    Inform_12 = Inform0_7;
                    STATE_VARIABLE_Globals_2_26 = STATE_VARIABLE_Globals_0_18;
                  }
                  break;
              }
            }
            break;
        }
      }
      break;
  }
  succeeded = (Smart_11 == Smart0_6);
  if (succeeded)
    STATE_VARIABLE_Globals_9_47 = STATE_VARIABLE_Globals_2_26;
  else
  {
    MR_Word Var_46;

    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = (MR_Box) ((MR_Unsigned) (Smart_11));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 180, Var_46, STATE_VARIABLE_Globals_2_26, &STATE_VARIABLE_Globals_9_47);
  }
  succeeded = (Inform_12 == Inform0_7);
  if (succeeded)
    *STATE_VARIABLE_Globals_19 = STATE_VARIABLE_Globals_9_47;
  else
  {
    MR_Word Var_49;

    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = (MR_Box) ((MR_Unsigned) (Inform_12));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 77, Var_49, STATE_VARIABLE_Globals_9_47, STATE_VARIABLE_Globals_19);
  }
}

static void MR_CALL 
libs__handle_options__turn_off_all_only_codegen_warnings_3_p_0(
  MR_Word HaltAtWarnSrcOpt_4,
  MR_Word STATE_VARIABLE_Globals_0_8,
  MR_Word * STATE_VARIABLE_Globals_9)
{
  MR_Word HaltAtWarn_7;
  MR_Word STATE_VARIABLE_OptionTable_1_10;
  MR_Word STATE_VARIABLE_OptionTable_2_13;
  MR_Word STATE_VARIABLE_OptionTable_3_16;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_OptionTable_4_19;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_OptionTable_5_23;
  MR_Word Var_25;
  MR_Word STATE_VARIABLE_OptionTable_6_27;
  MR_Box conv0_HaltAtWarn_7;

  libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_0_8, &STATE_VARIABLE_OptionTable_1_10);
  mercury__map__det_update_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 200)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[4]))), STATE_VARIABLE_OptionTable_1_10, &STATE_VARIABLE_OptionTable_2_13);
  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_2_13, ((MR_Box) (HaltAtWarnSrcOpt_4)), &conv0_HaltAtWarn_7);
  HaltAtWarn_7 = ((MR_Word) (conv0_HaltAtWarn_7));
  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 3)), ((MR_Box) (HaltAtWarn_7)), STATE_VARIABLE_OptionTable_2_13, &STATE_VARIABLE_OptionTable_3_16);
  Var_17 = libs__options__dodgy_code_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_17, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_3_16, &STATE_VARIABLE_OptionTable_4_19);
  Var_21 = libs__options__style_warning_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_21, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_4_19, &STATE_VARIABLE_OptionTable_5_23);
  Var_25 = libs__options__info_request_options_0_f_0();
  libs__options__set_all_options_to_4_p_0(Var_25, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_OptionTable_5_23, &STATE_VARIABLE_OptionTable_6_27);
  libs__globals__set_options_3_p_0(STATE_VARIABLE_OptionTable_6_27, STATE_VARIABLE_Globals_0_8, STATE_VARIABLE_Globals_9);
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
  MR_Word STATE_VARIABLE_Globals_1_20;
  MR_Word STATE_VARIABLE_Globals_2_25;
  MR_Word STATE_VARIABLE_Globals_3_30;
  MR_Word SourceOptionValue_40;
  MR_Word SourceOptionValue_41;
  MR_Word SourceOptionValue_42;
  MR_Word SourceOptionValue_43;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 343, &SourceOptionValue_40);
  switch (SourceOptionValue_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_1_20 = STATE_VARIABLE_Globals_0_15;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 346, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_1_20);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_20, (MR_Integer) 347, &SourceOptionValue_41);
  switch (SourceOptionValue_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_2_25 = STATE_VARIABLE_Globals_1_20;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 346, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_20, &STATE_VARIABLE_Globals_2_25);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_2_25, (MR_Integer) 346, &SourceOptionValue_42);
  switch (SourceOptionValue_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_3_30 = STATE_VARIABLE_Globals_2_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 344, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_2_25, &STATE_VARIABLE_Globals_3_30);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_3_30, (MR_Integer) 345, &SourceOptionValue_43);
  switch (SourceOptionValue_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_3_30;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 344, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_3_30, STATE_VARIABLE_Globals_16);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 346, &ProcIdStackLayout_12);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 345, &AgcStackLayout_13);
  succeeded = (ProcIdStackLayout_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (AgcStackLayout_13 == (MR_Integer) 1);
  if (succeeded)
    *OT_OptDups_9 = (MR_Integer) 1;
  else
    *OT_OptDups_9 = OT_OptDups0_8;
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 344, &BasicStackLayout_14);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 290, &RecordTermSizesAsWords_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 291, &RecordTermSizesAsCells_10);
  succeeded = (RecordTermSizesAsWords_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (RecordTermSizesAsCells_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[141])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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
      MR_Word STATE_VARIABLE_Globals_1_29;

      libs__globals__set_option_4_p_0((MR_Integer) 275, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_1_29);
      *AllowOptLCMCTermSize_7 = (MR_Integer) 0;
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_29, (MR_Integer) 337, &HighLevelCode_12);
      libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_1_29, STATE_VARIABLE_Globals_15);
      switch (HighLevelCode_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
          break;
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[143])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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
  MR_Word STATE_VARIABLE_Globals_1_33;
  MR_Word STATE_VARIABLE_Globals_2_38;
  MR_Word STATE_VARIABLE_Globals_3_43;
  MR_Word STATE_VARIABLE_Globals_4_48;
  MR_Word STATE_VARIABLE_Specs_1_60;
  MR_Word STATE_VARIABLE_AllowSrcChangesProf_1_71;
  MR_Word SourceOptionValue_88;
  MR_Word SourceOptionValue_89;
  MR_Word SourceOptionValue_90;
  MR_Word SourceOptionValue_91;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_25, (MR_Integer) 286, &SourceOptionValue_88);
  switch (SourceOptionValue_88) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_1_33 = STATE_VARIABLE_Globals_0_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 277, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_25, &STATE_VARIABLE_Globals_1_33);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_33, (MR_Integer) 277, &SourceOptionValue_89);
  switch (SourceOptionValue_89) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_2_38 = STATE_VARIABLE_Globals_1_33;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 289, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_1_33, &STATE_VARIABLE_Globals_2_38);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_2_38, (MR_Integer) 273, &SourceOptionValue_90);
  switch (SourceOptionValue_90) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_3_43 = STATE_VARIABLE_Globals_2_38;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 275, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_2_38, &STATE_VARIABLE_Globals_3_43);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_3_43, (MR_Integer) 273, &SourceOptionValue_91);
  switch (SourceOptionValue_91) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_4_48 = STATE_VARIABLE_Globals_3_43;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 346, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_3_43, &STATE_VARIABLE_Globals_4_48);
      break;
  }
  switch (ProfileDeep_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_AllowSrcChangesProf_1_71 = (MR_Integer) 1;
        *OT_HigherOrderSizeLimit_15 = OT_HigherOrderSizeLimit0_14;
        *STATE_VARIABLE_Globals_26 = STATE_VARIABLE_Globals_4_48;
        STATE_VARIABLE_Specs_1_60 = STATE_VARIABLE_Specs_0_28;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word HighLevelCode_17;
        MR_Word ProfOptimized_19;
        MR_Word LotsOfHOSpec_20;
        MR_Word STATE_VARIABLE_Globals_5_63;
        MR_Word SourceOptionValue_92;

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_4_48, (MR_Integer) 337, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_11 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_1_60 = STATE_VARIABLE_Specs_0_28;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[135])), STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_1_60);
        libs__globals__set_option_4_p_0((MR_Integer) 389, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_4_48, &STATE_VARIABLE_Globals_5_63);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_5_63, (MR_Integer) 286, &SourceOptionValue_92);
        switch (SourceOptionValue_92) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Globals_26 = STATE_VARIABLE_Globals_5_63;
            break;
          case (MR_Integer) 1:
            libs__globals__set_option_4_p_0((MR_Integer) 192, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_5_63, STATE_VARIABLE_Globals_26);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 192, &ProfOptimized_19);
        switch (ProfOptimized_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChangesProf_1_71 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChangesProf_1_71 = (MR_Integer) 1;
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 288, &LotsOfHOSpec_20);
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
  libs__globals__lookup_string_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 292, &ExpComp_21);
  succeeded = (strcmp(ExpComp_21, (MR_String) "") == 0);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_1_60;
    *STATE_VARIABLE_AllowSrcChangesProf_27 = STATE_VARIABLE_AllowSrcChangesProf_1_71;
  }
  else
  {
    MR_Word RecordTermSizesAsWords_22;
    MR_Word RecordTermSizesAsCells_23;

    *STATE_VARIABLE_AllowSrcChangesProf_27 = (MR_Integer) 0;
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 290, &RecordTermSizesAsWords_22);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 291, &RecordTermSizesAsCells_23);
    succeeded = (RecordTermSizesAsWords_22 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (RecordTermSizesAsCells_23 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_1_60;
    else
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[139])), STATE_VARIABLE_Specs_1_60, STATE_VARIABLE_Specs_29);
  }
}

static void MR_CALL 
libs__handle_options__maybe_update_event_set_file_name_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  MR_bool succeeded;
  MR_String EventSetFileName0_7;

  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_10, (MR_Integer) 256, &EventSetFileName0_7);
  succeeded = (strcmp(EventSetFileName0_7, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_Word MaybeEventSetFileName_8;

    mercury__io__environment__get_environment_var_4_p_0((MR_String) "MERCURY_EVENT_SET_FILE_NAME", &MaybeEventSetFileName_8);
    if ((MaybeEventSetFileName_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Globals_11 = STATE_VARIABLE_Globals_0_10;
    else
    {
      MR_String EventSetFileName_9 = ((MR_String) ((MR_hl_field(1, MaybeEventSetFileName_8, 0))));
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_18, 1) = ((MR_Box) (EventSetFileName_9));
      }
      libs__globals__set_option_4_p_0((MR_Integer) 256, Var_18, STATE_VARIABLE_Globals_0_10, STATE_VARIABLE_Globals_11);
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
  MR_Word STATE_VARIABLE_Globals_1_31;
  MR_Word STATE_VARIABLE_Globals_2_36;
  MR_Word STATE_VARIABLE_Globals_3_41;
  MR_Word STATE_VARIABLE_Globals_4_46;
  MR_Word STATE_VARIABLE_AllowSrcChanges_1_65;
  MR_Word STATE_VARIABLE_Globals_8_81;
  MR_Word SourceOptionValue_94;
  MR_Word SourceOptionValue_95;
  MR_Word SourceOptionValue_96;
  MR_Word SourceOptionValue_97;
  MR_Word SourceOptionValue_98;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_24, (MR_Integer) 265, &SourceOptionValue_94);
  switch (SourceOptionValue_94) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_1_31 = STATE_VARIABLE_Globals_0_24;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 264, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_24, &STATE_VARIABLE_Globals_1_31);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_31, (MR_Integer) 264, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_2_36 = STATE_VARIABLE_Globals_1_31;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 190, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_31, &STATE_VARIABLE_Globals_2_36);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_2_36, (MR_Integer) 190, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_3_41 = STATE_VARIABLE_Globals_2_36;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 186, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_2_36, &STATE_VARIABLE_Globals_3_41);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_3_41, (MR_Integer) 189, &SourceOptionValue_97);
  switch (SourceOptionValue_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_4_46 = STATE_VARIABLE_Globals_3_41;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 186, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_3_41, &STATE_VARIABLE_Globals_4_46);
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
        MR_Word STATE_VARIABLE_Specs_1_55;
        MR_Word STATE_VARIABLE_Globals_5_69;
        MR_Word STATE_VARIABLE_Globals_6_73;
        MR_Word STATE_VARIABLE_Globals_7_77;

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_4_46, (MR_Integer) 337, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_10 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_1_55 = STATE_VARIABLE_Specs_0_26;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[131])), STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_1_55);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_4_46, (MR_Integer) 294, &Parallel_19);
        switch (Parallel_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_1_55;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[133])), STATE_VARIABLE_Specs_1_55, STATE_VARIABLE_Specs_27);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_4_46, (MR_Integer) 184, &TraceOptimized_21);
        switch (TraceOptimized_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChanges_1_65 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChanges_1_65 = (MR_Integer) 1;
            break;
        }
        libs__globals__set_option_4_p_0((MR_Integer) 347, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_4_46, &STATE_VARIABLE_Globals_5_69);
        libs__globals__set_option_4_p_0((MR_Integer) 348, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_5_69, &STATE_VARIABLE_Globals_6_73);
        libs__globals__set_option_4_p_0((MR_Integer) 395, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_6_73, &STATE_VARIABLE_Globals_7_77);
        AllowTraceTailRec_22 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_11);
        switch (AllowTraceTailRec_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__globals__set_option_4_p_0((MR_Integer) 193, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_7_77, &STATE_VARIABLE_Globals_8_81);
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Globals_8_81 = STATE_VARIABLE_Globals_7_77;
            break;
        }
      }
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_AllowSrcChanges_1_65 = (MR_Integer) 1;
        libs__globals__set_option_4_p_0((MR_Integer) 193, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_4_46, &STATE_VARIABLE_Globals_8_81);
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
      *STATE_VARIABLE_AllowSrcChanges_23 = STATE_VARIABLE_AllowSrcChanges_1_65;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_8_81, (MR_Integer) 310, &SourceOptionValue_98);
  switch (SourceOptionValue_98) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_25 = STATE_VARIABLE_Globals_8_81;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_8_81, STATE_VARIABLE_Globals_25);
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
  MR_Word STATE_VARIABLE_Specs_1_36;
  MR_Word STATE_VARIABLE_Globals_1_74;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 297, &UseMinimalModelStackCopy_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 298, &UseMinimalModelOwnStacks_10);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (UseMinimalModelOwnStacks_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[119])), STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_1_36);
    mercury__bool__or_3_p_0(UseMinimalModelStackCopy_9, UseMinimalModelOwnStacks_10, &UseMinimalModel_12);
    *AllowHijacksMMSC_7 = (MR_Integer) 0;
  }
  else
  {
    STATE_VARIABLE_Specs_1_36 = STATE_VARIABLE_Specs_0_23;
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
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_1_36;
      break;
    case (MR_Integer) 1:
      {
        MR_Word HighLevelCode_13;
        MR_Word UseTrail_15;
        MR_Word Parallel_17;
        MR_Word STATE_VARIABLE_Specs_2_47;
        MR_Word STATE_VARIABLE_Specs_3_58;

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 337, &HighLevelCode_13);
        switch (HighLevelCode_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_2_47 = STATE_VARIABLE_Specs_1_36;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[123])), STATE_VARIABLE_Specs_1_36, &STATE_VARIABLE_Specs_2_47);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 296, &UseTrail_15);
        switch (UseTrail_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_3_58 = STATE_VARIABLE_Specs_2_47;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[126])), STATE_VARIABLE_Specs_2_47, &STATE_VARIABLE_Specs_3_58);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 294, &Parallel_17);
        switch (Parallel_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_3_58;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[129])), STATE_VARIABLE_Specs_3_58, STATE_VARIABLE_Specs_24);
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 358, &DisablePneg_19);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 359, &DisableCut_20);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisablePneg_19 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 360, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_21, &STATE_VARIABLE_Globals_1_74);
  else
    STATE_VARIABLE_Globals_1_74 = STATE_VARIABLE_Globals_0_21;
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableCut_20 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 361, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_74, STATE_VARIABLE_Globals_22);
  else
    *STATE_VARIABLE_Globals_22 = STATE_VARIABLE_Globals_1_74;
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
        MR_Word STATE_VARIABLE_Globals_1_26;
        MR_Word STATE_VARIABLE_Globals_2_30;
        MR_Word STATE_VARIABLE_Globals_3_34;
        MR_Word STATE_VARIABLE_Globals_4_38;

        libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_1_26);
        libs__globals__set_option_4_p_0((MR_Integer) 348, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_26, &STATE_VARIABLE_Globals_2_30);
        libs__globals__set_option_4_p_0((MR_Integer) 395, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_2_30, &STATE_VARIABLE_Globals_3_34);
        libs__globals__set_option_4_p_0((MR_Integer) 378, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_3_34, &STATE_VARIABLE_Globals_4_38);
        libs__globals__set_option_4_p_0((MR_Integer) 379, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_4_38, STATE_VARIABLE_Globals_21);
        *OT_OptFrames_11 = (MR_Integer) 1;
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_21, (MR_Integer) 337, &HighLevelCode_13);
        libs__globals__get_target_2_p_0(*STATE_VARIABLE_Globals_21, &Target_14);
        succeeded = (HighLevelCode_13 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (Target_14 != (MR_Integer) 0);
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[97])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
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

              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 337, &HighLevelCode_106);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 378, &SemidetReclaim_17);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 379, &NondetReclaim_18);
              succeeded = (HighLevelCode_106 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (SemidetReclaim_17 != NondetReclaim_18);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[115])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
              else
                *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
              *STATE_VARIABLE_Globals_21 = STATE_VARIABLE_Globals_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Globals_6_63;

              libs__globals__set_option_4_p_0((MR_Integer) 378, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_6_63);
              libs__globals__set_option_4_p_0((MR_Integer) 379, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_6_63, STATE_VARIABLE_Globals_21);
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
  MR_Word STATE_VARIABLE_Specs_1_36;
  MR_Word STATE_VARIABLE_Globals_1_79;
  MR_Word STATE_VARIABLE_Globals_2_84;
  MR_Word STATE_VARIABLE_Globals_3_88;
  MR_Word SourceOptionValue_95;
  MR_Word SourceOptionValue_96;

  libs__globals__current_grade_supports_par_conj_2_p_0(STATE_VARIABLE_Globals_0_15, &GradeSupportsParConj_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 294, &Parallel_8);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 295, &Threadscope_9);
  succeeded = (GradeSupportsParConj_7 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Threadscope_9 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[74])), STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_1_36);
  else
    STATE_VARIABLE_Specs_1_36 = STATE_VARIABLE_Specs_0_17;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 764, &ImplicitParallelism_11);
  switch (ImplicitParallelism_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_Globals_1_79 = STATE_VARIABLE_Globals_0_15;
        *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_1_36;
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
                *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_1_36;
                break;
              case (MR_Integer) 1:
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[83])), STATE_VARIABLE_Specs_1_36, STATE_VARIABLE_Specs_18);
                break;
            }
            libs__globals__set_option_4_p_0((MR_Integer) 764, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_1_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FeedbackFile_12;

            libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 765, &FeedbackFile_12);
            succeeded = (strcmp(FeedbackFile_12, (MR_String) "") == 0);
            if (succeeded)
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[89])), STATE_VARIABLE_Specs_1_36, STATE_VARIABLE_Specs_18);
            else
              *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_1_36;
            STATE_VARIABLE_Globals_1_79 = STATE_VARIABLE_Globals_0_15;
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_1_79, (MR_Integer) 764, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_2_84 = STATE_VARIABLE_Globals_1_79;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 276, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_1_79, &STATE_VARIABLE_Globals_2_84);
      break;
  }
  switch (GradeSupportsParConj_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__set_option_4_p_0((MR_Integer) 766, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_2_84, &STATE_VARIABLE_Globals_3_88);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Globals_3_88 = STATE_VARIABLE_Globals_2_84;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_3_88, (MR_Integer) 294, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_3_88;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 571, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_3_88, STATE_VARIABLE_Globals_16);
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
  MR_Word STATE_VARIABLE_Globals_7_55;
  MR_Word STATE_VARIABLE_Globals_8_60;
  MR_Word STATE_VARIABLE_Globals_16_154;
  MR_Word STATE_VARIABLE_Globals_40_252;
  MR_Word STATE_VARIABLE_Globals_41_257;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_26, (MR_Integer) 300, &PregeneratedDist_13);
  switch (PregeneratedDist_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_7_55 = STATE_VARIABLE_Globals_0_26;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_1_32;
        MR_Word STATE_VARIABLE_Globals_2_35;
        MR_Word STATE_VARIABLE_Globals_3_39;
        MR_Word STATE_VARIABLE_Globals_4_43;
        MR_Word STATE_VARIABLE_Globals_5_47;
        MR_Word STATE_VARIABLE_Globals_6_51;

        libs__globals__set_word_size_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_0_26, &STATE_VARIABLE_Globals_1_32);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[2])), STATE_VARIABLE_Globals_1_32, &STATE_VARIABLE_Globals_2_35);
        libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_2_35, &STATE_VARIABLE_Globals_3_39);
        libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_3_39, &STATE_VARIABLE_Globals_4_43);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_4_43, &STATE_VARIABLE_Globals_5_47);
        libs__globals__set_option_4_p_0((MR_Integer) 301, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_5_47, &STATE_VARIABLE_Globals_6_51);
        libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_6_51, &STATE_VARIABLE_Globals_7_55);
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 301, (MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_7_55, &STATE_VARIABLE_Globals_8_60);
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
        MR_Word STATE_VARIABLE_Globals_9_68;
        MR_Word STATE_VARIABLE_Specs_1_89;
        MR_Word STATE_VARIABLE_Globals_13_105;
        MR_Word STATE_VARIABLE_Globals_14_110;
        MR_Word Var_153;

        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[53]));
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_8_60, (MR_Integer) 313, &NumPtagBits0_15);
        succeeded = (NumPtagBits0_15 == (MR_Integer) -1);
        if (succeeded)
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_8_60, (MR_Integer) 316, &NumPtagBits_16);
        else
          NumPtagBits_16 = NumPtagBits0_15;
        {
          Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_67, 0) = ((MR_Box) (NumPtagBits_16));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 313, Var_67, STATE_VARIABLE_Globals_8_60, &STATE_VARIABLE_Globals_9_68);
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
          STATE_VARIABLE_Specs_1_89 = STATE_VARIABLE_Specs_0_28;
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
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[57])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[19])));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[54])));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
          }
          {
            NumPtagBitsSpec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NumPtagBitsSpec_17, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
            MR_hl_field(1, NumPtagBitsSpec_17, 1) = ((MR_Box) (Var_71));
          }
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), NumPtagBitsSpec_17, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_1_89);
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_9_68, (MR_Integer) 337, &HighLevelCode_18);
        switch (HighLevelCode_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Globals_13_105 = STATE_VARIABLE_Globals_9_68;
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Globals_10_93;
              MR_Word STATE_VARIABLE_Globals_11_97;
              MR_Word STATE_VARIABLE_Globals_12_101;

              libs__globals__set_option_4_p_0((MR_Integer) 341, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_9_68, &STATE_VARIABLE_Globals_10_93);
              libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_10_93, &STATE_VARIABLE_Globals_11_97);
              libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_11_97, &STATE_VARIABLE_Globals_12_101);
              libs__globals__set_option_4_p_0((MR_Integer) 335, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_12_101, &STATE_VARIABLE_Globals_13_105);
            }
            break;
        }
        succeeded = (NumPtagBits_16 >= (MR_Integer) 2);
        if (succeeded)
          libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_13_105, &STATE_VARIABLE_Globals_14_110);
        else
          libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_13_105, &STATE_VARIABLE_Globals_14_110);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_14_110, (MR_Integer) 320, &ArgPackBits0_19);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_14_110, (MR_Integer) 314, &BitsPerWord_20);
        succeeded = (ArgPackBits0_19 < (MR_Integer) 0);
        if (succeeded)
        {
          ArgPackBits_21 = BitsPerWord_20;
          *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_1_89;
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
            Var_122 = (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[59]));
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
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[63])));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[62])));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15])));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
            }
            {
              Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_127, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[61])));
              MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[60])));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
            }
            {
              ArgPackBitsSpec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgPackBitsSpec_22, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[58])));
              MR_hl_field(1, ArgPackBitsSpec_22, 1) = ((MR_Box) (Var_121));
            }
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), ArgPackBitsSpec_22, STATE_VARIABLE_Specs_1_89, STATE_VARIABLE_Specs_29);
          }
          else
          {
            ArgPackBits_21 = ArgPackBits0_19;
            *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_1_89;
          }
        }
        {
          Var_153 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_153, 0) = ((MR_Box) (ArgPackBits_21));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 320, Var_153, STATE_VARIABLE_Globals_14_110, &STATE_VARIABLE_Globals_16_154);
        *OT_StringBinarySwitchSize_11 = OT_StringBinarySwitchSize0_10;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_17_157;
        MR_Word STATE_VARIABLE_Globals_18_160;
        MR_Word STATE_VARIABLE_Globals_19_163;
        MR_Word STATE_VARIABLE_Globals_20_167;
        MR_Word STATE_VARIABLE_Globals_21_171;
        MR_Word STATE_VARIABLE_Globals_22_175;
        MR_Word STATE_VARIABLE_Globals_23_179;
        MR_Word STATE_VARIABLE_Globals_24_183;
        MR_Word STATE_VARIABLE_Globals_25_187;
        MR_Word STATE_VARIABLE_Globals_26_191;
        MR_Word STATE_VARIABLE_Globals_27_195;
        MR_Word STATE_VARIABLE_Globals_28_199;
        MR_Word STATE_VARIABLE_Globals_29_203;
        MR_Word STATE_VARIABLE_Globals_30_207;
        MR_Word STATE_VARIABLE_Globals_31_211;
        MR_Word STATE_VARIABLE_Globals_32_215;
        MR_Word STATE_VARIABLE_Globals_33_219;
        MR_Word STATE_VARIABLE_Globals_34_225;
        MR_Word STATE_VARIABLE_Globals_35_231;
        MR_Word STATE_VARIABLE_Globals_36_235;
        MR_Word STATE_VARIABLE_Globals_37_239;
        MR_Word STATE_VARIABLE_Globals_38_243;

        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_8_60, &STATE_VARIABLE_Globals_17_157);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_17_157, &STATE_VARIABLE_Globals_18_160);
        libs__globals__set_option_4_p_0((MR_Integer) 293, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[64])), STATE_VARIABLE_Globals_18_160, &STATE_VARIABLE_Globals_19_163);
        libs__globals__set_option_4_p_0((MR_Integer) 379, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_19_163, &STATE_VARIABLE_Globals_20_167);
        libs__globals__set_option_4_p_0((MR_Integer) 378, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_20_167, &STATE_VARIABLE_Globals_21_171);
        libs__globals__set_option_4_p_0((MR_Integer) 337, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_21_171, &STATE_VARIABLE_Globals_22_175);
        libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_22_175, &STATE_VARIABLE_Globals_23_179);
        libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_23_179, &STATE_VARIABLE_Globals_24_183);
        libs__globals__set_option_4_p_0((MR_Integer) 335, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_24_183, &STATE_VARIABLE_Globals_25_187);
        libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_25_187, &STATE_VARIABLE_Globals_26_191);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_26_191, &STATE_VARIABLE_Globals_27_195);
        libs__globals__set_option_4_p_0((MR_Integer) 340, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_27_195, &STATE_VARIABLE_Globals_28_199);
        libs__globals__set_option_4_p_0((MR_Integer) 339, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_28_199, &STATE_VARIABLE_Globals_29_203);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_29_203, &STATE_VARIABLE_Globals_30_207);
        libs__globals__set_option_4_p_0((MR_Integer) 350, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_30_207, &STATE_VARIABLE_Globals_31_211);
        libs__globals__set_option_4_p_0((MR_Integer) 543, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_31_211, &STATE_VARIABLE_Globals_32_215);
        libs__globals__set_option_4_p_0((MR_Integer) 541, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_32_215, &STATE_VARIABLE_Globals_33_219);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[65]));
        libs__globals__set_option_4_p_0((MR_Integer) 642, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[66])), STATE_VARIABLE_Globals_33_219, &STATE_VARIABLE_Globals_34_225);
        libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_34_225, &STATE_VARIABLE_Globals_35_231);
        libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_35_231, &STATE_VARIABLE_Globals_36_235);
        libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_36_235, &STATE_VARIABLE_Globals_37_239);
        libs__globals__set_option_4_p_0((MR_Integer) 325, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_37_239, &STATE_VARIABLE_Globals_38_243);
        libs__globals__set_option_4_p_0((MR_Integer) 326, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_38_243, &STATE_VARIABLE_Globals_16_154);
        *OT_StringBinarySwitchSize_11 = (MR_Integer) 999999;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word STATE_VARIABLE_Globals_17_264;
        MR_Word STATE_VARIABLE_Globals_18_266;
        MR_Word STATE_VARIABLE_Globals_19_269;
        MR_Word STATE_VARIABLE_Globals_20_272;
        MR_Word STATE_VARIABLE_Globals_21_275;
        MR_Word STATE_VARIABLE_Globals_22_278;
        MR_Word STATE_VARIABLE_Globals_23_281;
        MR_Word STATE_VARIABLE_Globals_24_284;
        MR_Word STATE_VARIABLE_Globals_25_287;
        MR_Word STATE_VARIABLE_Globals_26_290;
        MR_Word STATE_VARIABLE_Globals_27_293;
        MR_Word STATE_VARIABLE_Globals_28_296;
        MR_Word STATE_VARIABLE_Globals_29_299;
        MR_Word STATE_VARIABLE_Globals_30_302;
        MR_Word STATE_VARIABLE_Globals_31_305;
        MR_Word STATE_VARIABLE_Globals_32_308;
        MR_Word STATE_VARIABLE_Globals_34_312;
        MR_Word STATE_VARIABLE_Globals_35_315;
        MR_Word STATE_VARIABLE_Globals_36_318;
        MR_Word STATE_VARIABLE_Globals_37_321;
        MR_Word STATE_VARIABLE_Globals_38_324;

        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_8_60, &STATE_VARIABLE_Globals_17_264);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_17_264, &STATE_VARIABLE_Globals_18_266);
        libs__globals__set_option_4_p_0((MR_Integer) 293, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[64])), STATE_VARIABLE_Globals_18_266, &STATE_VARIABLE_Globals_19_269);
        libs__globals__set_option_4_p_0((MR_Integer) 379, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_19_269, &STATE_VARIABLE_Globals_20_272);
        libs__globals__set_option_4_p_0((MR_Integer) 378, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_20_272, &STATE_VARIABLE_Globals_21_275);
        libs__globals__set_option_4_p_0((MR_Integer) 337, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_21_275, &STATE_VARIABLE_Globals_22_278);
        libs__globals__set_option_4_p_0((MR_Integer) 333, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_22_278, &STATE_VARIABLE_Globals_23_281);
        libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_23_281, &STATE_VARIABLE_Globals_24_284);
        libs__globals__set_option_4_p_0((MR_Integer) 335, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_24_284, &STATE_VARIABLE_Globals_25_287);
        libs__globals__set_option_4_p_0((MR_Integer) 317, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_25_287, &STATE_VARIABLE_Globals_26_290);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_26_290, &STATE_VARIABLE_Globals_27_293);
        libs__globals__set_option_4_p_0((MR_Integer) 340, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_27_293, &STATE_VARIABLE_Globals_28_296);
        libs__globals__set_option_4_p_0((MR_Integer) 339, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_28_296, &STATE_VARIABLE_Globals_29_299);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_29_299, &STATE_VARIABLE_Globals_30_302);
        libs__globals__set_option_4_p_0((MR_Integer) 350, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_30_302, &STATE_VARIABLE_Globals_31_305);
        libs__globals__set_option_4_p_0((MR_Integer) 543, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_31_305, &STATE_VARIABLE_Globals_32_308);
        libs__globals__set_option_4_p_0((MR_Integer) 541, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_32_308, &STATE_VARIABLE_Globals_34_312);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[67]));
        libs__globals__set_option_4_p_0((MR_Integer) 349, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_34_312, &STATE_VARIABLE_Globals_35_315);
        libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_35_315, &STATE_VARIABLE_Globals_36_318);
        libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_36_318, &STATE_VARIABLE_Globals_37_321);
        libs__globals__set_option_4_p_0((MR_Integer) 325, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_37_321, &STATE_VARIABLE_Globals_38_324);
        libs__globals__set_option_4_p_0((MR_Integer) 326, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_38_324, &STATE_VARIABLE_Globals_16_154);
        *OT_StringBinarySwitchSize_11 = (MR_Integer) 999999;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 317, (MR_Integer) 336, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_16_154, &STATE_VARIABLE_Globals_40_252);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 337, (MR_Integer) 336, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_40_252, &STATE_VARIABLE_Globals_41_257);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_41_257, (MR_Integer) 342, &CurrentBackendForeignLanguage_23);
  if ((CurrentBackendForeignLanguage_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_261;

    {
      Var_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_261, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_261, 1) = ((MR_Box) (BackendForeignLanguages_14));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 342, Var_261, STATE_VARIABLE_Globals_41_257, STATE_VARIABLE_Globals_27);
  }
  else
    *STATE_VARIABLE_Globals_27 = STATE_VARIABLE_Globals_41_257;
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
  MR_Word Globals_5,
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word TransOpt_8;
  MR_Word InterModOpt_12;
  MR_Word InterModAnalysis_13;
  MR_Word ExtraInitFunctions_15;
  MR_Word STATE_VARIABLE_Specs_1_39;
  MR_Word STATE_VARIABLE_Specs_2_60;

  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 533, &TransOpt_8);
  switch (TransOpt_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_1_39 = STATE_VARIABLE_Specs_0_18;
      break;
    case (MR_Integer) 1:
      {
        if ((OpMode_6 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        if (((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3))
        {
          MR_Word InvokedByMMCMake_10 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_6, 1))) & (MR_Integer) 1);

          succeeded = (InvokedByMMCMake_10 == (MR_Integer) 1);
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[40])), STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_1_39);
        else
          STATE_VARIABLE_Specs_1_39 = STATE_VARIABLE_Specs_0_18;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 529, &InterModOpt_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 534, &InterModAnalysis_13);
  succeeded = (InterModOpt_12 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (InterModAnalysis_13 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[46])), STATE_VARIABLE_Specs_1_39, &STATE_VARIABLE_Specs_2_60);
  else
    STATE_VARIABLE_Specs_2_60 = STATE_VARIABLE_Specs_1_39;
  libs__globals__lookup_bool_option_3_p_0(Globals_5, (MR_Integer) 635, &ExtraInitFunctions_15);
  succeeded = ((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 1);
  if (succeeded)
    succeeded = (ExtraInitFunctions_15 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[52])), STATE_VARIABLE_Specs_2_60, STATE_VARIABLE_Specs_19);
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_2_60;
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
  libs__handle_options__user_init_pred_120_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__handle_options__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.handle_options.
