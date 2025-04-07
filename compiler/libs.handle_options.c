/*
** Automatically generated from `handle_options.m'
** by the Mercury compiler,
** version rotd-2025-04-07
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
  MR_String LambdaHeadVar__1_290);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2516__1_2_f_0(
  MR_Word ToGradeSubdir_43,
  MR_String LambdaHeadVar__1_284);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2491__1_2_f_0(
  MR_Word ToGradeSubdir_43,
  MR_String LambdaHeadVar__1_272);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2487__1_2_f_0(
  MR_Word ToGradeSubdir_43,
  MR_String LambdaHeadVar__1_266);

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2466__1_2_p_0(
  MR_String HeadVar__1_260,
  MR_String HeadVar__2_412);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2447__1_3_f_0(
  MR_String Grade_24,
  MR_String TargetArch_42,
  MR_String LambdaHeadVar__1_248);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2410__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_229);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2400__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_219);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2390__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_207);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2369__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_192);

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
libs__handle_options__handle_non_tail_rec_warnings_6_p_0(
  MR_Word OptTuple0_7,
  MR_Word OT_OptMLDSTailCalls_8,
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

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
libs__handle_options__handle_directory_options_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
libs__handle_options__handle_directory_options_5_p_0(
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Globals_0_145,
  MR_Word * STATE_VARIABLE_Globals_146,
  MR_Word STATE_VARIABLE_Specs_0_147,
  MR_Word * STATE_VARIABLE_Specs_148);

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(
  MR_String LambdaHeadVar__1_295);

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
libs__handle_options__handle_libgrades_6_p_0(
  MR_Word STATE_VARIABLE_Globals_0_21,
  MR_Word * STATE_VARIABLE_Globals_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

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
    ((MR_Box) ((MR_String) "Error: the value of the"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--install-method"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the only valid values are"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[27])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option."))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--make"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option is incompatible with the"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--transitive-intermodule-optimization"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-analysis"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[31])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--intermodule-optimization"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[42])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--extra-initialization-functions"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[31])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--generate-standalone-interface"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[48])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "c")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--num-ptag-bits"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the only valid values are 2 and 3."))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: cannot set the value of"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--arg-pack-bits"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to value higher than the value of"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--bits-per-word"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Reducing the effective value of"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to the maximum allowable value, which is"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "automatic"))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_String) "csharp")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ".exe"))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_String) "java")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires a parallel grade."))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "grade component"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "threadscope"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Use a low-level C grade without trailing."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "supports parallel conjunctions."))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option requires a grade that"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--implicit-parallelism"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--feedback-file"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[83]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option requires the use of"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[85]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is C."))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[89]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is incompatible with"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[91]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    ((MR_Box) ((MR_String) "--gc accurate"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[93]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The only target language that"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[94])))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--(no-)reclaim-heap-on-failure"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[99]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[98])))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Use"))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[101]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-nondet-failure"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[104]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[103])))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-semidet-failure"))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and just one of"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[109]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--high-level-code"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[113]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at once."))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[115]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You cannot use both forms of minimal model tabling"))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[117]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "high level code."))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Minimal model tabling is incompatible with"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "trailing."))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[123]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "parallel execution."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[126]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[121]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Debugging is available only in low level C grades."))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[129]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Debugging is not available in parallel grades."))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[131]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Deep profiling is incompatible with"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[133]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[120])))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires a term size profiling grade."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[135]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The --experimental-complexity option"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[137]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[136])))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Cannot record term size as both words and cells."))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[139]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Term size profiling is incompatible with"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[141]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[120])))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Mercury.config"))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[143]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[16])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in any specified options file, such as"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[145]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[144])))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MERCURY_STDLIB_DIR"))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[146])))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or by a make variable named"))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[149]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[148])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or by an environment variable named"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[154]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[153])))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[155])))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "option,"))
  },
  /* row 158 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[157]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[156])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--mercury-stdlib-dir"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[159]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[158])))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "either by an"))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[161]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[160])))
  },
  /* row 163 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not specified"))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[164]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[163])))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that holds the Mercury standard library"))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[166]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[165])))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the location of the directory"))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[168]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[167])))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "contains more than one string."))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[170]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[14])))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or in a specified options file,"))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[172]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[171])))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "either in the environment"))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[174]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[173])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable,"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[176]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[175])))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[147]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[177])))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the definition of the"))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[179]))),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[178])))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "shared"))
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) ((MR_Unsigned) 6U)),
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
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[169])))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "predicate \140libs.handle_options.handle_chosen_stdlib_dir\'/5")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[180])))
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
    ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&libs__handle_options_scalar_common_8[0])),
    ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_11)),
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
#line 3330 "handle_options.m"
MR_Word libs__handle_options__mutable_variable_already_printed_usage;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__handle_options__mutable_variable_already_printed_usage_lock;
#endif


#line 3330 "handle_options.m"
void 
libs__handle_options__user_init_pred_120_0(void)
#line 3330 "handle_options.m"
{
#line 3330 "handle_options.m"
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
  MR_String LambdaHeadVar__1_290)
{
  MR_String LambdaHeadVar__2_291;
  MR_String Var_292;

  Var_292 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_290, (MR_String) "Mercury");
  LambdaHeadVar__2_291 = mercury__dir__f_slash_2_f_0(Var_292, (MR_String) "mihs");
  return LambdaHeadVar__2_291;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2516__1_2_f_0(
  MR_Word ToGradeSubdir_43,
  MR_String LambdaHeadVar__1_284)
{
  MR_String LambdaHeadVar__2_285;
  MR_String Var_286;
  MR_String Var_287;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_43, 1))));
  MR_Box conv1_Var_287;

  conv1_Var_287 = func_0(((MR_Box) (ToGradeSubdir_43)), ((MR_Box) (LambdaHeadVar__1_284)));
  Var_287 = ((MR_String) (conv1_Var_287));
  Var_286 = mercury__dir__f_slash_2_f_0(Var_287, (MR_String) "Mercury");
  LambdaHeadVar__2_285 = mercury__dir__f_slash_2_f_0(Var_286, (MR_String) "mihs");
  return LambdaHeadVar__2_285;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2491__1_2_f_0(
  MR_Word ToGradeSubdir_43,
  MR_String LambdaHeadVar__1_272)
{
  MR_String LambdaHeadVar__2_273;
  MR_String Var_274;
  MR_String Var_275;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_43, 1))));
  MR_Box conv1_Var_275;

  conv1_Var_275 = func_0(((MR_Box) (ToGradeSubdir_43)), ((MR_Box) (LambdaHeadVar__1_272)));
  Var_275 = ((MR_String) (conv1_Var_275));
  Var_274 = mercury__dir__f_slash_2_f_0(Var_275, (MR_String) "Mercury");
  LambdaHeadVar__2_273 = mercury__dir__f_slash_2_f_0(Var_274, (MR_String) "inits");
  return LambdaHeadVar__2_273;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2487__1_2_f_0(
  MR_Word ToGradeSubdir_43,
  MR_String LambdaHeadVar__1_266)
{
  MR_String LambdaHeadVar__2_267;
  MR_String Var_268;
  MR_String Var_269;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToGradeSubdir_43, 1))));
  MR_Box conv1_Var_269;

  conv1_Var_269 = func_0(((MR_Box) (ToGradeSubdir_43)), ((MR_Box) (LambdaHeadVar__1_266)));
  Var_269 = ((MR_String) (conv1_Var_269));
  Var_268 = mercury__dir__f_slash_2_f_0(Var_269, (MR_String) "Mercury");
  LambdaHeadVar__2_267 = mercury__dir__f_slash_2_f_0(Var_268, (MR_String) "lib");
  return LambdaHeadVar__2_267;
}

static MR_bool MR_CALL 
libs__handle_options__IntroducedFrom__pred__handle_directory_options__2466__1_2_p_0(
  MR_String HeadVar__1_260,
  MR_String HeadVar__2_412)
{
  MR_bool succeeded = (strcmp(HeadVar__1_260, HeadVar__2_412) == 0);

  return succeeded;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2447__1_3_f_0(
  MR_String Grade_24,
  MR_String TargetArch_42,
  MR_String LambdaHeadVar__1_248)
{
  MR_String LambdaHeadVar__2_249;
  MR_String Var_250;
  MR_String Var_251;

  Var_251 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_248, (MR_String) "Mercury");
  Var_250 = mercury__dir__f_slash_2_f_0(Var_251, Grade_24);
  LambdaHeadVar__2_249 = mercury__dir__f_slash_2_f_0(Var_250, TargetArch_42);
  return LambdaHeadVar__2_249;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2410__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_229)
{
  MR_String LambdaHeadVar__2_230;
  MR_String Var_231;

  Var_231 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_229, (MR_String) "modules");
  LambdaHeadVar__2_230 = mercury__dir__f_slash_2_f_0(Var_231, Grade_24);
  return LambdaHeadVar__2_230;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2400__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_219)
{
  MR_String LambdaHeadVar__2_220;
  MR_String Var_221;

  Var_221 = mercury__dir__make_path_name_2_f_0((MR_String) "ints", Grade_24);
  LambdaHeadVar__2_220 = mercury__dir__make_path_name_2_f_0(LambdaHeadVar__1_219, Var_221);
  return LambdaHeadVar__2_220;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2390__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_207)
{
  MR_String LambdaHeadVar__2_208;
  MR_String Var_209;
  MR_String Var_210;

  Var_210 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_207, (MR_String) "lib");
  Var_209 = mercury__dir__f_slash_2_f_0(Var_210, Grade_24);
  LambdaHeadVar__2_208 = mercury__dir__f_slash_2_f_0(Var_209, (MR_String) "inc");
  return LambdaHeadVar__2_208;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2369__1_2_f_0(
  MR_String Grade_24,
  MR_String LambdaHeadVar__1_192)
{
  MR_String LambdaHeadVar__2_193;
  MR_String Var_194;

  Var_194 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_192, (MR_String) "lib");
  LambdaHeadVar__2_193 = mercury__dir__f_slash_2_f_0(Var_194, Grade_24);
  return LambdaHeadVar__2_193;
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
    MR_Word STATE_VARIABLE_Specs_65_65;
    MR_Word STATE_VARIABLE_Specs_86_86;

    OptOptions_25 = mercury__cord__list_1_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0), OptOptionsCord_17);
    libs__check_options__check_option_values_23_p_0(OptionTable0_16, &OptionTable_26, &Target_28, &WordSize_29, &GC_Method_30, &TermNorm_31, &Term2Norm_32, &TraceLevel_33, &TraceSuppress_34, &SSTraceLevel_35, &MaybeThreadSafe_36, &C_CompilerType_37, &CSharp_CompilerType_38, &ReuseStrategy_39, &MaybeFeedbackInfo_40, &HostEnvType_41, &SystemEnvType_42, &TargetEnvType_43, &LimitErrorContextsMap_44, &LinkExtMap_45, &STATE_VARIABLE_Specs_65_65);
    libs__optimization_options__process_optimization_options_3_p_0(OptionTable_26, OptOptions_25, &OptTuple_27);
    libs__op_mode__decide_op_mode_3_p_0(OptionTable_26, &OpMode_46, &OtherOpModes_47);
    if ((OtherOpModes_47 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_65_65;
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
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), OpModePieces_51, STATE_VARIABLE_Specs_65_65, &STATE_VARIABLE_Specs_86_86);
    }
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_26, ((MR_Box) ((MR_Integer) 747)), &DefaultGlobals_52);
    succeeded = (STATE_VARIABLE_Specs_86_86 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = (DefaultGlobals_52 == (MR_Integer) 1);
    if (succeeded)
      libs__handle_options__convert_options_to_globals_30_p_0(ProgressStream_12, DefaultOptionTable_13, OptionTable_26, MaybeStdLibGrades_14, MaybeEnvOptFileMerStdLibDir_18, OptTuple_27, OpMode_46, Target_28, WordSize_29, GC_Method_30, TermNorm_31, Term2Norm_32, TraceLevel_33, TraceSuppress_34, SSTraceLevel_35, MaybeThreadSafe_36, C_CompilerType_37, CSharp_CompilerType_38, ReuseStrategy_39, MaybeFeedbackInfo_40, HostEnvType_41, SystemEnvType_42, TargetEnvType_43, LimitErrorContextsMap_44, LinkExtMap_45, STATE_VARIABLE_Specs_86_86, STATE_VARIABLE_Specs_53, Globals_20);
    else
    {
      libs__handle_options__generate_default_globals_5_p_0(ProgressStream_12, DefaultOptionTable_13, Globals_20);
      *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_86_86;
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
      MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 6U));
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
  MR_Word STATE_VARIABLE_Globals_47_47;
  MR_Word Var_58;
  MR_Word _OptionsSet_54;
  MR_Box conv4_OptOptions_25;

  Var_58 = mercury__cord__init_0_f_0((MR_Word) (&libs__optimization_options__libs__optimization_options__type_ctor_info_optimization_option_0));
  mercury__getopt__process_options_userdata_io_12_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&libs__handle_options_scalar_common_1[0]), (MR_Word) (&libs__handle_options_scalar_common_9[5]), Args0_16, OptionArgs_17, Args_18, &MaybeError_23, &_OptionsSet_54, DefaultOptionTable_13, &OptionTable_24, ((MR_Box) (Var_58)), &conv4_OptOptions_25);
  OptOptions_25 = ((MR_Word) (conv4_OptOptions_25));
  libs__handle_options__convert_option_table_result_to_globals_11_p_0(ProgressStream_12, DefaultOptionTable_13, MaybeStdLibGrades_14, MaybeError_23, OptionTable_24, OptOptions_25, MaybeEnvOptFileMerStdLibDir_15, Specs_19, &STATE_VARIABLE_Globals_47_47);
  if ((*Specs_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word OpMode_28;
    MR_Word Smart_29;
    MR_Word OpModeArgs_30;
    MR_Word Var_50;
    MR_Word Var_51;

    libs__globals__get_op_mode_2_p_0(STATE_VARIABLE_Globals_47_47, &OpMode_28);
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_47_47, (MR_Integer) 175, &Smart_29);
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
      libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_47_47, STATE_VARIABLE_Globals_32);
      libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_32, (MR_Integer) 33, &WarnSmart_62);
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
      *STATE_VARIABLE_Globals_32 = STATE_VARIABLE_Globals_47_47;
  }
  else
    *STATE_VARIABLE_Globals_32 = STATE_VARIABLE_Globals_47_47;
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

  mercury__map__set_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 747)), ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_2[0]))), DefaultOptionTable0_7, &DefaultOptionTable_10);
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
  MR_Word OT_Optimize0_87 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 20)) & (MR_Integer) 1);
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
  MR_Word STATE_VARIABLE_Specs_179_179;
  MR_Word STATE_VARIABLE_Globals_182_182;
  MR_Word STATE_VARIABLE_Globals_210_210;
  MR_Word STATE_VARIABLE_Specs_212_212;
  MR_Word STATE_VARIABLE_Specs_213_213;
  MR_Word STATE_VARIABLE_Globals_214_214;
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
  MR_Word STATE_VARIABLE_Globals_227_227;
  MR_Word STATE_VARIABLE_Specs_228_228;
  MR_Word STATE_VARIABLE_Globals_229_229;
  MR_Word STATE_VARIABLE_Specs_230_230;
  MR_Word STATE_VARIABLE_Globals_231_231;
  MR_Word STATE_VARIABLE_Globals_232_232;
  MR_Word STATE_VARIABLE_Globals_233_233;
  MR_Word STATE_VARIABLE_Globals_234_234;
  MR_Word STATE_VARIABLE_Globals_236_236;
  MR_Word STATE_VARIABLE_Specs_237_237;
  MR_Word STATE_VARIABLE_Globals_238_238;
  MR_Word STATE_VARIABLE_Specs_239_239;
  MR_Word STATE_VARIABLE_Globals_241_241;
  MR_Word STATE_VARIABLE_Globals_242_242;
  MR_Word STATE_VARIABLE_Specs_243_243;
  MR_Word STATE_VARIABLE_Globals_244_244;
  MR_Word STATE_VARIABLE_Globals_245_245;
  MR_Word STATE_VARIABLE_Globals_247_247;
  MR_Word STATE_VARIABLE_Globals_248_248;
  MR_Word STATE_VARIABLE_Globals_250_250;
  MR_Word STATE_VARIABLE_Globals_261_261;
  MR_Word STATE_VARIABLE_OptTuple_292_292;
  MR_Word STATE_VARIABLE_Globals_294_294;
  MR_Word STATE_VARIABLE_OptTuple_295_295;
  MR_Word Var_4389;
  MR_Word Var_4390;
  MR_Word Var_4391;
  MR_Word Var_4392;
  MR_Word Var_4402;
  MR_Word Var_4403;
  MR_Word Var_4405;
  MR_Word Var_4407;
  MR_Word Var_4408;
  MR_Word Var_4409;
  MR_Word Var_4410;
  MR_Word Var_4411;
  MR_Word Var_4412;
  MR_Word Var_4417;
  MR_Word Var_4420;
  MR_Word Var_4421;
  MR_Word Var_4422;
  MR_Word Var_4424;
  MR_Word Var_4428;
  MR_Word Var_4429;
  MR_Word Var_4430;
  MR_Word Var_4431;
  MR_Word Var_4432;
  MR_Word Var_4433;
  MR_Word Var_4434;
  MR_Word Var_4435;
  MR_Word Var_4436;
  MR_Word Var_4437;
  MR_Word Var_4438;
  MR_Word Var_4439;
  MR_Word Var_4440;
  MR_Word Var_4441;
  MR_Word Var_4442;
  MR_Word Var_4443;
  MR_Word Var_4445;
  MR_Word Var_4448;
  MR_Word Var_4449;
  MR_Word Var_4450;
  MR_Word Var_4451;
  MR_Word Var_4452;
  MR_Word Var_4453;
  MR_Word Var_4454;
  MR_Word Var_4455;
  MR_Word Var_4456;
  MR_Word Var_4457;
  MR_Word Var_4458;
  MR_Word Var_4459;
  MR_Word Var_4460;
  MR_Word Var_4461;
  MR_Word Var_4463;
  MR_Word Var_4465;
  MR_Word Var_4467;
  MR_Word Var_4468;
  MR_Word Var_4469;
  MR_Word Var_4470;
  MR_Word Var_4471;
  MR_Word Var_4472;
  MR_Word Var_4473;
  MR_Word Var_4474;
  MR_Integer Var_4475;
  MR_Integer Var_4476;
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
  MR_Integer Var_4490;
  MR_Integer Var_4491;
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
  MR_Integer Var_4505;
  MR_Integer Var_4506;
  MR_Integer Var_4507;
  MR_Integer Var_4508;
  MR_Integer Var_4509;
  MR_Integer Var_4510;
  MR_Integer Var_4511;
  MR_String Var_4512;
  MR_Word Var_255;
  MR_Word Var_256;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_33, ((MR_Box) ((MR_Integer) 696)), &InstallMethodStr_92);
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
    STATE_VARIABLE_Specs_179_179 = STATE_VARIABLE_Specs_0_141;
  }
  else
  {
    succeeded = (strcmp(InstallMethodStr_92, (MR_String) "internal") == 0);
    if (succeeded)
    {
      InstallMethod_93 = (MR_Integer) 1;
      STATE_VARIABLE_Specs_179_179 = STATE_VARIABLE_Specs_0_141;
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
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), InstallMethodSpec_94, STATE_VARIABLE_Specs_0_141, &STATE_VARIABLE_Specs_179_179);
      InstallMethod_93 = (MR_Integer) 0;
    }
  }
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_33, ((MR_Box) ((MR_Integer) 697)), &InstallCmd_95);
  succeeded = (strcmp(InstallCmd_95, (MR_String) "") == 0);
  if (succeeded)
    FileInstallCmd_96 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      FileInstallCmd_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FileInstallCmd_96, 0) = ((MR_Box) (InstallCmd_95));
    }
  libs__globals__globals_init_27_p_0(DefaultOptionTable_32, OptionTable0_33, STATE_VARIABLE_OptTuple_0_140, OpMode_37, MaybeFeedbackInfo_50, FileInstallCmd_96, TraceSuppress_44, ReuseStrategy_49, LimitErrorContextsMap_54, LinkExtMap_55, C_CompilerType_47, CSharp_CompilerType_48, MaybeStdLibGrades_34, Target_38, (MR_Integer) 0, WordSize_39, GC_Method_40, TermNorm_41, Term2Norm_42, TraceLevel_43, SSTraceLevel_45, MaybeThreadSafe_46, HostEnvType_51, SystemEnvType_52, TargetEnvType_53, InstallMethod_93, &STATE_VARIABLE_Globals_182_182);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_182_182, (MR_Integer) 751, &Experiment2_97);
  switch (Experiment2_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_210_210 = STATE_VARIABLE_Globals_182_182;
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Globals_186_186;
        MR_Word STATE_VARIABLE_Globals_190_190;
        MR_Word STATE_VARIABLE_Globals_194_194;
        MR_Word STATE_VARIABLE_Globals_198_198;
        MR_Word STATE_VARIABLE_Globals_202_202;
        MR_Word STATE_VARIABLE_Globals_206_206;

        libs__globals__set_option_4_p_0((MR_Integer) 316, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_182_182, &STATE_VARIABLE_Globals_186_186);
        libs__globals__set_option_4_p_0((MR_Integer) 319, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_186_186, &STATE_VARIABLE_Globals_190_190);
        libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_190_190, &STATE_VARIABLE_Globals_194_194);
        libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_194_194, &STATE_VARIABLE_Globals_198_198);
        libs__globals__set_option_4_p_0((MR_Integer) 322, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_198_198, &STATE_VARIABLE_Globals_202_202);
        libs__globals__set_option_4_p_0((MR_Integer) 323, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_202_202, &STATE_VARIABLE_Globals_206_206);
        libs__globals__set_option_4_p_0((MR_Integer) 324, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_206_206, &STATE_VARIABLE_Globals_210_210);
      }
      break;
  }
  libs__compute_grade__check_grade_component_compatibility_5_p_0(STATE_VARIABLE_Globals_210_210, Target_38, GC_Method_40, STATE_VARIABLE_Specs_179_179, &STATE_VARIABLE_Specs_212_212);
  libs__handle_options__check_for_incompatibilities_4_p_0(STATE_VARIABLE_Globals_210_210, OpMode_37, STATE_VARIABLE_Specs_212_212, &STATE_VARIABLE_Specs_213_213);
  libs__handle_options__handle_implications_of_pregen_target_spf_7_p_0(STATE_VARIABLE_Globals_210_210, &STATE_VARIABLE_Globals_214_214, Target_38, OT_StringBinarySwitchSize0_91, &OT_StringBinarySwitchSize_98, STATE_VARIABLE_Specs_213_213, &STATE_VARIABLE_Specs_215_215);
  libs__handle_options__handle_implications_of_parallel_4_p_0(STATE_VARIABLE_Globals_214_214, &STATE_VARIABLE_Globals_216_216, STATE_VARIABLE_Specs_215_215, &STATE_VARIABLE_Specs_217_217);
  libs__handle_options__handle_gc_options_7_p_0(STATE_VARIABLE_Globals_216_216, &STATE_VARIABLE_Globals_218_218, GC_Method_40, OT_OptFrames0_90, &OT_OptFrames_99, STATE_VARIABLE_Specs_217_217, &STATE_VARIABLE_Specs_219_219);
  libs__handle_options__handle_minimal_model_options_5_p_0(STATE_VARIABLE_Globals_218_218, &STATE_VARIABLE_Globals_220_220, &AllowHijacksMMSC_100, STATE_VARIABLE_Specs_219_219, &STATE_VARIABLE_Specs_221_221);
  TraceEnabled_101 = libs__trace_params__is_exec_trace_enabled_at_given_trace_level_1_f_0(TraceLevel_43);
  libs__handle_options__handle_debugging_options_9_p_0(Target_38, TraceLevel_43, TraceEnabled_101, SSTraceLevel_45, &AllowSrcChangesDebug_102, STATE_VARIABLE_Globals_220_220, &STATE_VARIABLE_Globals_222_222, STATE_VARIABLE_Specs_221_221, &STATE_VARIABLE_Specs_223_223);
  libs__handle_options__maybe_update_event_set_file_name_4_p_0(STATE_VARIABLE_Globals_222_222, &STATE_VARIABLE_Globals_224_224);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_224_224, (MR_Integer) 268, &ProfileDeep_103);
  libs__handle_options__handle_profiling_options_9_p_0(STATE_VARIABLE_Globals_224_224, &STATE_VARIABLE_Globals_227_227, Target_38, ProfileDeep_103, &AllowSrcChangesProf_104, OT_HigherOrderSizeLimit0_76, &OT_HigherOrderSizeLimit_105, STATE_VARIABLE_Specs_223_223, &STATE_VARIABLE_Specs_228_228);
  libs__handle_options__handle_record_term_sizes_options_5_p_0(STATE_VARIABLE_Globals_227_227, &STATE_VARIABLE_Globals_229_229, &AllowOptLCMCTermSize_106, STATE_VARIABLE_Specs_228_228, &STATE_VARIABLE_Specs_230_230);
  libs__handle_options__handle_stack_layout_options_6_p_0(STATE_VARIABLE_Globals_229_229, &STATE_VARIABLE_Globals_231_231, OT_OptDups0_89, &OT_OptDups_107, OT_StdLabels0_88, &OT_StdLabels_108);
  libs__handle_options__handle_opmode_implications_3_p_0(OpMode_37, STATE_VARIABLE_Globals_231_231, &STATE_VARIABLE_Globals_232_232);
  libs__handle_options__handle_option_to_option_implications_3_p_0(OpMode_37, STATE_VARIABLE_Globals_232_232, &STATE_VARIABLE_Globals_233_233);
  libs__handle_options__maybe_disable_smart_recompilation_6_p_0(ProgressStream_31, OpMode_37, STATE_VARIABLE_Globals_233_233, &STATE_VARIABLE_Globals_234_234);
  libs__handle_options__handle_chosen_stdlib_dir_5_p_0(MaybeEnvOptFileMerStdLibDir_35, STATE_VARIABLE_Globals_234_234, &STATE_VARIABLE_Globals_236_236, STATE_VARIABLE_Specs_230_230, &STATE_VARIABLE_Specs_237_237);
  libs__handle_options__handle_libgrades_6_p_0(STATE_VARIABLE_Globals_236_236, &STATE_VARIABLE_Globals_238_238, STATE_VARIABLE_Specs_237_237, &STATE_VARIABLE_Specs_239_239);
  libs__handle_options__handle_subdir_setting_3_p_0(OpMode_37, STATE_VARIABLE_Globals_238_238, &STATE_VARIABLE_Globals_241_241);
  libs__handle_options__handle_directory_options_5_p_0(OpMode_37, STATE_VARIABLE_Globals_241_241, &STATE_VARIABLE_Globals_242_242, STATE_VARIABLE_Specs_239_239, &STATE_VARIABLE_Specs_243_243);
  libs__handle_options__handle_target_compile_link_symlink_options_2_p_0(STATE_VARIABLE_Globals_242_242, &STATE_VARIABLE_Globals_244_244);
  libs__handle_options__handle_compiler_developer_options_4_p_0(STATE_VARIABLE_Globals_244_244, &STATE_VARIABLE_Globals_245_245);
  libs__handle_options__handle_compare_specialization_2_p_0(STATE_VARIABLE_Globals_245_245, &STATE_VARIABLE_Globals_247_247);
  libs__handle_options__handle_colors_4_p_0(STATE_VARIABLE_Globals_247_247, &STATE_VARIABLE_Globals_248_248);
  switch (OT_Optimize0_87) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      OT_OptMLDSTailCalls_109 = (MR_Integer) 1;
      break;
    case (MR_Integer) 0:
      OT_OptMLDSTailCalls_109 = OT_OptMLDSTailCalls0_86;
      break;
  }
  libs__handle_options__handle_non_tail_rec_warnings_6_p_0(STATE_VARIABLE_OptTuple_0_140, OT_OptMLDSTailCalls_109, STATE_VARIABLE_Globals_248_248, &STATE_VARIABLE_Globals_250_250, STATE_VARIABLE_Specs_243_243, STATE_VARIABLE_Specs_142);
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
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_250_250, (MR_Integer) 343, &BodyTypeInfoLiveness_115);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_250_250, (MR_Integer) 240, &ReorderConj_116);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_250_250, (MR_Integer) 300, &StackSegments_118);
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
      Var_255 = (MR_Integer) 291;
      Var_256 = (MR_Integer) 0;
      succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_250_250, Var_255, Var_256);
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
    MR_Word Var_257;
    MR_Word Var_258;

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
      Var_257 = ((MR_Word) ((MR_hl_field(3, OpMode_37, 0))));
      succeeded = ((MR_tag((MR_Word) Var_257)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_258 = ((MR_Word) ((MR_hl_field(3, Var_257, 0))));
        succeeded = (Var_258 == (MR_Word) ((MR_Unsigned) 0U));
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
      MR_Word Var_8180;
      MR_Word Var_8181;

      succeeded = ((MR_tag((MR_Word) OpMode_37)) == (MR_Integer) 3);
      if (succeeded)
      {
        Var_8180 = ((MR_Word) ((MR_hl_field(3, OpMode_37, 0))));
        succeeded = ((MR_tag((MR_Word) Var_8180)) == (MR_Integer) 3);
        if (succeeded)
        {
          Var_8181 = ((MR_Word) ((MR_hl_field(3, Var_8180, 0))));
          succeeded = (Var_8181 == (MR_Word) ((MR_Unsigned) 0U));
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
    libs__globals__set_option_4_p_0((MR_Integer) 522, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_250_250, &STATE_VARIABLE_Globals_261_261);
  }
  else
  {
    OT_OptUnusedArgsIntermod_129 = (MR_Integer) 1;
    STATE_VARIABLE_Globals_261_261 = STATE_VARIABLE_Globals_250_250;
  }
  Var_4389 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 30)) & (MR_Integer) 1);
  Var_4390 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 29)) & (MR_Integer) 1);
  Var_4391 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 28)) & (MR_Integer) 1);
  Var_4392 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 27)) & (MR_Integer) 1);
  Var_4402 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 17)) & (MR_Integer) 1);
  Var_4403 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 16)) & (MR_Integer) 1);
  Var_4405 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 14)) & (MR_Integer) 1);
  Var_4407 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 12)) & (MR_Integer) 1);
  Var_4408 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 11)) & (MR_Integer) 1);
  Var_4409 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 10)) & (MR_Integer) 1);
  Var_4410 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 9)) & (MR_Integer) 1);
  Var_4411 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 8)) & (MR_Integer) 1);
  Var_4412 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 7)) & (MR_Integer) 1);
  Var_4417 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 0))) >> 2)) & (MR_Integer) 1);
  Var_4420 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 31)) & (MR_Integer) 1);
  Var_4421 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 30)) & (MR_Integer) 1);
  Var_4422 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 29)) & (MR_Integer) 1);
  Var_4424 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 27)) & (MR_Integer) 1);
  Var_4428 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 23)) & (MR_Integer) 1);
  Var_4429 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 22)) & (MR_Integer) 1);
  Var_4430 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 21)) & (MR_Integer) 1);
  Var_4431 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 20)) & (MR_Integer) 1);
  Var_4432 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 19)) & (MR_Integer) 1);
  Var_4433 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 18)) & (MR_Integer) 1);
  Var_4434 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 17)) & (MR_Integer) 1);
  Var_4435 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 16)) & (MR_Integer) 1);
  Var_4436 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 15)) & (MR_Integer) 1);
  Var_4437 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 14)) & (MR_Integer) 1);
  Var_4438 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 13)) & (MR_Integer) 1);
  Var_4439 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 12)) & (MR_Integer) 1);
  Var_4440 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 11)) & (MR_Integer) 1);
  Var_4441 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 10)) & (MR_Integer) 1);
  Var_4442 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 9)) & (MR_Integer) 1);
  Var_4443 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 8)) & (MR_Integer) 1);
  Var_4445 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 6)) & (MR_Integer) 1);
  Var_4448 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 3)) & (MR_Integer) 1);
  Var_4449 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 2)) & (MR_Integer) 1);
  Var_4450 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) >> 1)) & (MR_Integer) 1);
  Var_4451 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 1))) & (MR_Integer) 1);
  Var_4452 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 22)) & (MR_Integer) 1);
  Var_4453 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 21)) & (MR_Integer) 1);
  Var_4454 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 20)) & (MR_Integer) 1);
  Var_4455 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 19)) & (MR_Integer) 1);
  Var_4456 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 18)) & (MR_Integer) 1);
  Var_4457 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 17)) & (MR_Integer) 1);
  Var_4458 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 16)) & (MR_Integer) 1);
  Var_4459 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 15)) & (MR_Integer) 1);
  Var_4460 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 14)) & (MR_Integer) 1);
  Var_4461 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 13)) & (MR_Integer) 1);
  Var_4463 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 11)) & (MR_Integer) 1);
  Var_4465 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 9)) & (MR_Integer) 1);
  Var_4467 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 7)) & (MR_Integer) 1);
  Var_4468 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 6)) & (MR_Integer) 1);
  Var_4469 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 5)) & (MR_Integer) 1);
  Var_4470 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 4)) & (MR_Integer) 1);
  Var_4471 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 3)) & (MR_Integer) 1);
  Var_4472 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 2)) & (MR_Integer) 1);
  Var_4473 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) >> 1)) & (MR_Integer) 1);
  Var_4474 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 2))) & (MR_Integer) 1);
  Var_4475 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 3))));
  Var_4476 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 4))));
  Var_4477 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 5))));
  Var_4478 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 6))));
  Var_4479 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 7))));
  Var_4480 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 8))));
  Var_4481 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 9))));
  Var_4482 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 10))));
  Var_4483 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 11))));
  Var_4484 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 12))));
  Var_4485 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 13))));
  Var_4486 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 14))));
  Var_4487 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 15))));
  Var_4488 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 16))));
  Var_4490 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 18))));
  Var_4491 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 19))));
  Var_4492 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 20))));
  Var_4493 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 21))));
  Var_4494 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 22))));
  Var_4495 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 23))));
  Var_4496 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 24))));
  Var_4497 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 25))));
  Var_4498 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 26))));
  Var_4499 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 27))));
  Var_4500 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 28))));
  Var_4501 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 29))));
  Var_4502 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 30))));
  Var_4503 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 31))));
  Var_4505 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 33))));
  Var_4506 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 34))));
  Var_4507 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 35))));
  Var_4508 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 36))));
  Var_4509 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 37))));
  Var_4510 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 38))));
  Var_4511 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 39))));
  Var_4512 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_140, 40))));
  {
    STATE_VARIABLE_OptTuple_292_292 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 0) = (MR_Box) (((((MR_Unsigned) (OT_AllowInlining_110) << 31)) | (((((MR_Unsigned) (Var_4389) << 30)) | (((((MR_Unsigned) (Var_4390) << 29)) | (((((MR_Unsigned) (Var_4391) << 28)) | (((((MR_Unsigned) (Var_4392) << 27)) | (((((MR_Unsigned) (OT_EnableConstStructPoly_111) << 26)) | (((((MR_Unsigned) (OT_EnableConstStructUser_112) << 25)) | (((((MR_Unsigned) (OT_OptCommonStructs_125) << 24)) | (((((MR_Unsigned) (OT_PropConstraints_124) << 23)) | (((((MR_Unsigned) (OT_PropLocalConstraints_123) << 22)) | (((((MR_Unsigned) (OT_OptDupCalls_132) << 21)) | (((((MR_Unsigned) (OT_PropConstants_114) << 20)) | (((((MR_Unsigned) (OT_ElimExcessAssigns_126) << 19)) | (((((MR_Unsigned) (OT_MergeCodeAfterSwitch_138) << 18)) | (((((MR_Unsigned) (Var_4402) << 17)) | (((((MR_Unsigned) (Var_4403) << 16)) | (((((MR_Unsigned) (OT_OptLoopInvariants_134) << 15)) | (((((MR_Unsigned) (Var_4405) << 14)) | (((((MR_Unsigned) (OT_OptSVCell_133) << 13)) | (((((MR_Unsigned) (Var_4407) << 12)) | (((((MR_Unsigned) (Var_4408) << 11)) | (((((MR_Unsigned) (Var_4409) << 10)) | (((((MR_Unsigned) (Var_4410) << 9)) | (((((MR_Unsigned) (Var_4411) << 8)) | (((((MR_Unsigned) (Var_4412) << 7)) | (((((MR_Unsigned) (OT_OptFollowCode_131) << 6)) | (((((MR_Unsigned) (OT_OptUnusedArgs_128) << 5)) | (((((MR_Unsigned) (OT_OptUnusedArgsIntermod_129) << 4)) | (((((MR_Unsigned) (OT_OptHigherOrder_135) << 3)) | (((((MR_Unsigned) (Var_4417) << 2)) | (((((MR_Unsigned) (OT_SpecTypes_121) << 1)) | (MR_Unsigned) (OT_SpecTypesUserGuided_122)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 1) = (MR_Box) (((((MR_Unsigned) (Var_4420) << 31)) | (((((MR_Unsigned) (Var_4421) << 30)) | (((((MR_Unsigned) (Var_4422) << 29)) | (((((MR_Unsigned) (OT_OptLCMC_130) << 28)) | (((((MR_Unsigned) (Var_4424) << 27)) | (((((MR_Unsigned) (OT_Deforest_117) << 26)) | (((((MR_Unsigned) (OT_Untuple_136) << 25)) | (((((MR_Unsigned) (OT_Tuple_137) << 24)) | (((((MR_Unsigned) (Var_4428) << 23)) | (((((MR_Unsigned) (Var_4429) << 22)) | (((((MR_Unsigned) (Var_4430) << 21)) | (((((MR_Unsigned) (Var_4431) << 20)) | (((((MR_Unsigned) (Var_4432) << 19)) | (((((MR_Unsigned) (Var_4433) << 18)) | (((((MR_Unsigned) (Var_4434) << 17)) | (((((MR_Unsigned) (Var_4435) << 16)) | (((((MR_Unsigned) (Var_4436) << 15)) | (((((MR_Unsigned) (Var_4437) << 14)) | (((((MR_Unsigned) (Var_4438) << 13)) | (((((MR_Unsigned) (Var_4439) << 12)) | (((((MR_Unsigned) (Var_4440) << 11)) | (((((MR_Unsigned) (Var_4441) << 10)) | (((((MR_Unsigned) (Var_4442) << 9)) | (((((MR_Unsigned) (Var_4443) << 8)) | (((((MR_Unsigned) (OT_OptMiddleRec_119) << 7)) | (((((MR_Unsigned) (Var_4445) << 6)) | (((((MR_Unsigned) (OT_AllowHijacks_120) << 5)) | (((((MR_Unsigned) (OT_OptMLDSTailCalls_109) << 4)) | (((((MR_Unsigned) (Var_4448) << 3)) | (((((MR_Unsigned) (Var_4449) << 2)) | (((((MR_Unsigned) (Var_4450) << 1)) | (MR_Unsigned) (Var_4451)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 2) = (MR_Box) (((((MR_Unsigned) (Var_4452) << 22)) | (((((MR_Unsigned) (Var_4453) << 21)) | (((((MR_Unsigned) (Var_4454) << 20)) | (((((MR_Unsigned) (Var_4455) << 19)) | (((((MR_Unsigned) (Var_4456) << 18)) | (((((MR_Unsigned) (Var_4457) << 17)) | (((((MR_Unsigned) (Var_4458) << 16)) | (((((MR_Unsigned) (Var_4459) << 15)) | (((((MR_Unsigned) (Var_4460) << 14)) | (((((MR_Unsigned) (Var_4461) << 13)) | (((((MR_Unsigned) (OT_StdLabels_108) << 12)) | (((((MR_Unsigned) (Var_4463) << 11)) | (((((MR_Unsigned) (OT_OptDups_107) << 10)) | (((((MR_Unsigned) (Var_4465) << 9)) | (((((MR_Unsigned) (OT_OptFrames_99) << 8)) | (((((MR_Unsigned) (Var_4467) << 7)) | (((((MR_Unsigned) (Var_4468) << 6)) | (((((MR_Unsigned) (Var_4469) << 5)) | (((((MR_Unsigned) (Var_4470) << 4)) | (((((MR_Unsigned) (Var_4471) << 3)) | (((((MR_Unsigned) (Var_4472) << 2)) | (((((MR_Unsigned) (Var_4473) << 1)) | (MR_Unsigned) (Var_4474)))))))))))))))))))))))))))))))))))))))))))));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 3) = ((MR_Box) (Var_4475));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 4) = ((MR_Box) (Var_4476));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 5) = ((MR_Box) (Var_4477));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 6) = ((MR_Box) (Var_4478));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 7) = ((MR_Box) (Var_4479));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 8) = ((MR_Box) (Var_4480));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 9) = ((MR_Box) (Var_4481));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 10) = ((MR_Box) (Var_4482));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 11) = ((MR_Box) (Var_4483));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 12) = ((MR_Box) (Var_4484));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 13) = ((MR_Box) (Var_4485));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 14) = ((MR_Box) (Var_4486));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 15) = ((MR_Box) (Var_4487));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 16) = ((MR_Box) (Var_4488));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 17) = ((MR_Box) (OT_HigherOrderSizeLimit_105));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 18) = ((MR_Box) (Var_4490));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 19) = ((MR_Box) (Var_4491));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 20) = ((MR_Box) (Var_4492));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 21) = ((MR_Box) (Var_4493));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 22) = ((MR_Box) (Var_4494));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 23) = ((MR_Box) (Var_4495));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 24) = ((MR_Box) (Var_4496));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 25) = ((MR_Box) (Var_4497));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 26) = ((MR_Box) (Var_4498));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 27) = ((MR_Box) (Var_4499));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 28) = ((MR_Box) (Var_4500));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 29) = ((MR_Box) (Var_4501));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 30) = ((MR_Box) (Var_4502));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 31) = ((MR_Box) (Var_4503));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 32) = ((MR_Box) (OT_StringBinarySwitchSize_98));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 33) = ((MR_Box) (Var_4505));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 34) = ((MR_Box) (Var_4506));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 35) = ((MR_Box) (Var_4507));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 36) = ((MR_Box) (Var_4508));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 37) = ((MR_Box) (Var_4509));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 38) = ((MR_Box) (Var_4510));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 39) = ((MR_Box) (Var_4511));
    MR_hl_field(0, STATE_VARIABLE_OptTuple_292_292, 40) = ((MR_Box) (Var_4512));
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_261_261, (MR_Integer) 332, &HighLevelCode_139);
  switch (HighLevelCode_139) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__handle_options__postprocess_options_lowlevel_4_p_0(STATE_VARIABLE_Globals_261_261, &STATE_VARIABLE_Globals_294_294, STATE_VARIABLE_OptTuple_292_292, &STATE_VARIABLE_OptTuple_295_295);
      break;
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_OptTuple_295_295 = STATE_VARIABLE_OptTuple_292_292;
        STATE_VARIABLE_Globals_294_294 = STATE_VARIABLE_Globals_261_261;
      }
      break;
  }
  libs__globals__set_opt_tuple_3_p_0(STATE_VARIABLE_OptTuple_295_295, STATE_VARIABLE_Globals_294_294, STATE_VARIABLE_Globals_143);
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
  MR_Word STATE_VARIABLE_OptTuple_20_20;
  MR_Word STATE_VARIABLE_OptTuple_24_24;
  MR_Word STATE_VARIABLE_OptTuple_31_31;
  MR_Word STATE_VARIABLE_OptTuple_34_34;
  MR_Word STATE_VARIABLE_OptTuple_39_39;
  MR_Word Var_112 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 22)) & (MR_Integer) 1);
  MR_Word Var_113 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 21)) & (MR_Integer) 1);
  MR_Word Var_114 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 20)) & (MR_Integer) 1);
  MR_Word Var_115 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 19)) & (MR_Integer) 1);
  MR_Word Var_116 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 18)) & (MR_Integer) 1);
  MR_Word Var_117 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 17)) & (MR_Integer) 1);
  MR_Word Var_118 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 16)) & (MR_Integer) 1);
  MR_Word Var_119 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 15)) & (MR_Integer) 1);
  MR_Word Var_120 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 14)) & (MR_Integer) 1);
  MR_Word Var_122 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 12)) & (MR_Integer) 1);
  MR_Word Var_123 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 11)) & (MR_Integer) 1);
  MR_Word Var_124 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 10)) & (MR_Integer) 1);
  MR_Word Var_125 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 9)) & (MR_Integer) 1);
  MR_Word Var_126 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 8)) & (MR_Integer) 1);
  MR_Word Var_127 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 7)) & (MR_Integer) 1);
  MR_Word Var_128 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 6)) & (MR_Integer) 1);
  MR_Word Var_129 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 5)) & (MR_Integer) 1);
  MR_Word Var_130 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 4)) & (MR_Integer) 1);
  MR_Word Var_131 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 3)) & (MR_Integer) 1);
  MR_Word Var_132 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 2)) & (MR_Integer) 1);
  MR_Word Var_133 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) >> 1)) & (MR_Integer) 1);
  MR_Word Var_134 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 2))) & (MR_Integer) 1);
  MR_Integer Var_135 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 3))));
  MR_Integer Var_136 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 4))));
  MR_Integer Var_137 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 5))));
  MR_Integer Var_138 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 6))));
  MR_Integer Var_139 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 7))));
  MR_Integer Var_140 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 8))));
  MR_Integer Var_141 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 9))));
  MR_Integer Var_142 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 10))));
  MR_Integer Var_143 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 11))));
  MR_Integer Var_144 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 12))));
  MR_Integer Var_145 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 13))));
  MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 14))));
  MR_Integer Var_147 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 15))));
  MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 16))));
  MR_Integer Var_149 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 17))));
  MR_Integer Var_150 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 18))));
  MR_Integer Var_151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 19))));
  MR_Integer Var_152 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 20))));
  MR_Integer Var_153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 21))));
  MR_Integer Var_154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 22))));
  MR_Integer Var_155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 23))));
  MR_Integer Var_156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 24))));
  MR_Integer Var_157 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 25))));
  MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 26))));
  MR_Integer Var_159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 27))));
  MR_Integer Var_160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 28))));
  MR_Integer Var_161 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 29))));
  MR_Integer Var_162 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 30))));
  MR_Integer Var_163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 31))));
  MR_Integer Var_164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 32))));
  MR_Integer Var_165 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 33))));
  MR_Integer Var_166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 34))));
  MR_Integer Var_167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 35))));
  MR_Integer Var_168 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 36))));
  MR_Integer Var_169 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 37))));
  MR_Integer Var_170 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 38))));
  MR_Integer Var_171 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 39))));
  MR_String Var_172 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_0_18, 40))));
  MR_Word Var_362;
  MR_Word Var_363;
  MR_Word Var_364;
  MR_Word Var_365;
  MR_Word Var_366;
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
  MR_Word Var_379;
  MR_Word Var_380;
  MR_Word Var_381;
  MR_Word Var_382;
  MR_Word Var_383;
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
  MR_Word Var_1980;
  MR_Word Var_1981;
  MR_Word Var_1982;
  MR_Word Var_1983;
  MR_Word Var_1984;
  MR_Word Var_1985;
  MR_Word Var_1986;
  MR_Word Var_1987;
  MR_Word Var_1988;
  MR_Word Var_1989;
  MR_Word Var_1990;
  MR_Word Var_1992;
  MR_Word Var_1993;
  MR_Word Var_1994;
  MR_Word Var_1995;
  MR_Word Var_1996;
  MR_Word Var_1997;
  MR_Word Var_1998;
  MR_Word Var_1999;
  MR_Word Var_2000;
  MR_Word Var_2001;
  MR_Word Var_2002;
  MR_Word Var_2003;
  MR_Word Var_2004;
  MR_Word Var_2005;
  MR_Word Var_2006;
  MR_Word Var_2007;
  MR_Word Var_2008;
  MR_Word Var_2009;
  MR_Word Var_2010;
  MR_Word Var_2011;
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
      STATE_VARIABLE_OptTuple_20_20 = STATE_VARIABLE_OptTuple_0_18;
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_20_20 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 0) = (MR_Box) (packed_word_0);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 1) = (MR_Box) (packed_word_1);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2) = (MR_Box) (((((MR_Unsigned) (Var_112) << 22)) | (((((MR_Unsigned) (Var_113) << 21)) | (((((MR_Unsigned) (Var_114) << 20)) | (((((MR_Unsigned) (Var_115) << 19)) | (((((MR_Unsigned) (Var_116) << 18)) | (((((MR_Unsigned) (Var_117) << 17)) | (((((MR_Unsigned) (Var_118) << 16)) | (((((MR_Unsigned) (Var_119) << 15)) | (((((MR_Unsigned) (Var_120) << 14)) | (((((MR_Unsigned) ((MR_Integer) 0) << 13)) | (((((MR_Unsigned) (Var_122) << 12)) | (((((MR_Unsigned) (Var_123) << 11)) | (((((MR_Unsigned) (Var_124) << 10)) | (((((MR_Unsigned) (Var_125) << 9)) | (((((MR_Unsigned) (Var_126) << 8)) | (((((MR_Unsigned) (Var_127) << 7)) | (((((MR_Unsigned) (Var_128) << 6)) | (((((MR_Unsigned) (Var_129) << 5)) | (((((MR_Unsigned) (Var_130) << 4)) | (((((MR_Unsigned) (Var_131) << 3)) | (((((MR_Unsigned) (Var_132) << 2)) | (((((MR_Unsigned) (Var_133) << 1)) | (MR_Unsigned) (Var_134)))))))))))))))))))))))))))))))))))))))))))));
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
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 0)));
  packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 1)));
  Var_362 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 22)) & (MR_Integer) 1);
  Var_363 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 21)) & (MR_Integer) 1);
  Var_364 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 20)) & (MR_Integer) 1);
  Var_365 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 19)) & (MR_Integer) 1);
  Var_366 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 18)) & (MR_Integer) 1);
  Var_368 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 16)) & (MR_Integer) 1);
  Var_369 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 15)) & (MR_Integer) 1);
  Var_370 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 14)) & (MR_Integer) 1);
  Var_371 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 13)) & (MR_Integer) 1);
  Var_372 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 12)) & (MR_Integer) 1);
  Var_374 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 10)) & (MR_Integer) 1);
  Var_375 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 9)) & (MR_Integer) 1);
  OptFrames_8 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 8)) & (MR_Integer) 1);
  Var_376 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 7)) & (MR_Integer) 1);
  Var_377 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 6)) & (MR_Integer) 1);
  Var_378 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 5)) & (MR_Integer) 1);
  Var_379 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 4)) & (MR_Integer) 1);
  Var_380 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 3)) & (MR_Integer) 1);
  Var_381 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 2)) & (MR_Integer) 1);
  Var_382 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) >> 1)) & (MR_Integer) 1);
  Var_383 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 2))) & (MR_Integer) 1);
  Var_384 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 3))));
  Var_385 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 4))));
  Var_386 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 5))));
  Var_387 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 6))));
  Var_388 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 7))));
  Var_389 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 8))));
  Var_390 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 9))));
  Var_391 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 10))));
  Var_392 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 11))));
  Var_393 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 12))));
  Var_394 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 13))));
  Var_395 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 14))));
  Var_396 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 15))));
  Var_397 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 16))));
  Var_398 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 17))));
  Var_399 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 18))));
  Var_400 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 19))));
  Var_401 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 20))));
  Var_402 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 21))));
  Var_403 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 22))));
  Var_404 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 23))));
  Var_405 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 24))));
  Var_406 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 25))));
  Var_407 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 26))));
  Var_408 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 27))));
  Var_409 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 28))));
  Var_410 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 29))));
  Var_411 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 30))));
  Var_412 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 31))));
  Var_413 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 32))));
  Var_414 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 33))));
  Var_415 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 34))));
  Var_416 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 35))));
  Var_417 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 36))));
  Var_418 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 37))));
  Var_419 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 38))));
  Var_420 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 39))));
  Var_421 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_20_20, 40))));
  switch (OptFrames_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_OptTuple_24_24 = STATE_VARIABLE_OptTuple_20_20;
      break;
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_24_24 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 0) = (MR_Box) (packed_word_2);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 1) = (MR_Box) (packed_word_3);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 2) = (MR_Box) (((((MR_Unsigned) (Var_362) << 22)) | (((((MR_Unsigned) (Var_363) << 21)) | (((((MR_Unsigned) (Var_364) << 20)) | (((((MR_Unsigned) (Var_365) << 19)) | (((((MR_Unsigned) (Var_366) << 18)) | (((((MR_Unsigned) ((MR_Integer) 0) << 17)) | (((((MR_Unsigned) (Var_368) << 16)) | (((((MR_Unsigned) (Var_369) << 15)) | (((((MR_Unsigned) (Var_370) << 14)) | (((((MR_Unsigned) (Var_371) << 13)) | (((((MR_Unsigned) (Var_372) << 12)) | (((((MR_Unsigned) ((MR_Integer) 0) << 11)) | (((((MR_Unsigned) (Var_374) << 10)) | (((((MR_Unsigned) (Var_375) << 9)) | (((((MR_Unsigned) (OptFrames_8) << 8)) | (((((MR_Unsigned) (Var_376) << 7)) | (((((MR_Unsigned) (Var_377) << 6)) | (((((MR_Unsigned) (Var_378) << 5)) | (((((MR_Unsigned) (Var_379) << 4)) | (((((MR_Unsigned) (Var_380) << 3)) | (((((MR_Unsigned) (Var_381) << 2)) | (((((MR_Unsigned) (Var_382) << 1)) | (MR_Unsigned) (Var_383)))))))))))))))))))))))))))))))))))))))))))));
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
  UseLocalVars_10 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 2))) >> 13)) & (MR_Integer) 1);
  OptProcDups_9 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 2))) >> 9)) & (MR_Integer) 1);
  OptRepeat_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 37))));
  switch (OptProcDups_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Globals_17 = STATE_VARIABLE_Globals_0_16;
      break;
    case (MR_Integer) 0:
      libs__globals__set_option_4_p_0((MR_Integer) 369, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_16, STATE_VARIABLE_Globals_17);
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
    MR_Integer Var_1131 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 3))));
    MR_Integer Var_1132 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 4))));
    MR_Integer Var_1133 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 5))));
    MR_Integer Var_1134 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 6))));
    MR_Integer Var_1135 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 7))));
    MR_Integer Var_1136 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 8))));
    MR_Integer Var_1137 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 9))));
    MR_Integer Var_1138 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 10))));
    MR_Integer Var_1139 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 11))));
    MR_Integer Var_1140 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 12))));
    MR_Integer Var_1141 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 13))));
    MR_Integer Var_1142 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 14))));
    MR_Integer Var_1143 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 15))));
    MR_Integer Var_1144 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 16))));
    MR_Integer Var_1145 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 17))));
    MR_Integer Var_1146 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 18))));
    MR_Integer Var_1147 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 19))));
    MR_Integer Var_1148 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 20))));
    MR_Integer Var_1149 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 21))));
    MR_Integer Var_1150 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 22))));
    MR_Integer Var_1151 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 23))));
    MR_Integer Var_1152 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 24))));
    MR_Integer Var_1153 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 25))));
    MR_Integer Var_1154 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 26))));
    MR_Integer Var_1155 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 27))));
    MR_Integer Var_1156 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 28))));
    MR_Integer Var_1157 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 29))));
    MR_Integer Var_1158 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 30))));
    MR_Integer Var_1159 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 31))));
    MR_Integer Var_1160 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 32))));
    MR_Integer Var_1161 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 33))));
    MR_Integer Var_1162 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 34))));
    MR_Integer Var_1163 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 35))));
    MR_Integer Var_1164 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 36))));
    MR_Integer Var_1166 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 38))));
    MR_Integer Var_1167 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 39))));
    MR_String Var_1168 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 40))));
    MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 0)));
    MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 1)));
    MR_Unsigned packed_word_6 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_24_24, 2)));

    {
      STATE_VARIABLE_OptTuple_31_31 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 0) = (MR_Box) (packed_word_4);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1) = (MR_Box) (packed_word_5);
      MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 2) = (MR_Box) (packed_word_6);
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
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 312, &UnboxedFloat_12);
  packed_word_7 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 0)));
  Var_2011 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 31)) & (MR_Integer) 1);
  Var_2010 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 30)) & (MR_Integer) 1);
  Var_2009 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 29)) & (MR_Integer) 1);
  Var_2008 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 28)) & (MR_Integer) 1);
  Var_2007 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 27)) & (MR_Integer) 1);
  Var_2006 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 26)) & (MR_Integer) 1);
  Var_2005 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 25)) & (MR_Integer) 1);
  Var_2004 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 24)) & (MR_Integer) 1);
  Var_2003 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 23)) & (MR_Integer) 1);
  Var_2002 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 22)) & (MR_Integer) 1);
  Var_2001 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 21)) & (MR_Integer) 1);
  Var_2000 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 20)) & (MR_Integer) 1);
  Var_1999 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 19)) & (MR_Integer) 1);
  Var_1998 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 18)) & (MR_Integer) 1);
  Var_1997 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 17)) & (MR_Integer) 1);
  Var_1996 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 16)) & (MR_Integer) 1);
  Var_1995 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 15)) & (MR_Integer) 1);
  Var_1994 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 14)) & (MR_Integer) 1);
  Var_1993 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 13)) & (MR_Integer) 1);
  Var_1992 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 12)) & (MR_Integer) 1);
  Var_1990 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 10)) & (MR_Integer) 1);
  Var_1989 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 9)) & (MR_Integer) 1);
  Var_1988 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 8)) & (MR_Integer) 1);
  Var_1987 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 7)) & (MR_Integer) 1);
  Var_1986 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 6)) & (MR_Integer) 1);
  Var_1985 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 5)) & (MR_Integer) 1);
  Var_1984 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 4)) & (MR_Integer) 1);
  Var_1983 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 3)) & (MR_Integer) 1);
  Var_1982 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 2)) & (MR_Integer) 1);
  Var_1981 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) >> 1)) & (MR_Integer) 1);
  Var_1980 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 1))) & (MR_Integer) 1);
  packed_word_8 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 2)));
  Var_1956 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 3))));
  Var_1955 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 4))));
  Var_1954 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 5))));
  Var_1953 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 6))));
  Var_1952 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 7))));
  Var_1951 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 8))));
  Var_1950 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 9))));
  Var_1949 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 10))));
  Var_1948 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 11))));
  Var_1947 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 12))));
  Var_1946 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 13))));
  Var_1945 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 14))));
  Var_1944 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 15))));
  Var_1943 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 16))));
  Var_1942 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 17))));
  Var_1941 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 18))));
  Var_1940 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 19))));
  Var_1939 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 20))));
  Var_1938 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 21))));
  Var_1937 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 22))));
  Var_1936 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 23))));
  Var_1935 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 24))));
  Var_1934 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 25))));
  Var_1933 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 26))));
  Var_1932 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 27))));
  Var_1931 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 28))));
  Var_1930 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 29))));
  Var_1929 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 30))));
  Var_1928 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 31))));
  Var_1927 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 32))));
  Var_1926 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 33))));
  Var_1925 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 34))));
  Var_1924 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 35))));
  Var_1923 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 36))));
  Var_1922 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 37))));
  Var_1921 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 38))));
  Var_1920 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 39))));
  Var_1919 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_31_31, 40))));
  switch (UnboxedFloat_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_OptTuple_34_34 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 0) = (MR_Box) (packed_word_7);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1) = (MR_Box) (((((MR_Unsigned) (Var_2011) << 31)) | (((((MR_Unsigned) (Var_2010) << 30)) | (((((MR_Unsigned) (Var_2009) << 29)) | (((((MR_Unsigned) (Var_2008) << 28)) | (((((MR_Unsigned) (Var_2007) << 27)) | (((((MR_Unsigned) (Var_2006) << 26)) | (((((MR_Unsigned) (Var_2005) << 25)) | (((((MR_Unsigned) (Var_2004) << 24)) | (((((MR_Unsigned) (Var_2003) << 23)) | (((((MR_Unsigned) (Var_2002) << 22)) | (((((MR_Unsigned) (Var_2001) << 21)) | (((((MR_Unsigned) (Var_2000) << 20)) | (((((MR_Unsigned) (Var_1999) << 19)) | (((((MR_Unsigned) (Var_1998) << 18)) | (((((MR_Unsigned) (Var_1997) << 17)) | (((((MR_Unsigned) (Var_1996) << 16)) | (((((MR_Unsigned) (Var_1995) << 15)) | (((((MR_Unsigned) (Var_1994) << 14)) | (((((MR_Unsigned) (Var_1993) << 13)) | (((((MR_Unsigned) (Var_1992) << 12)) | (((((MR_Unsigned) ((MR_Integer) 0) << 11)) | (((((MR_Unsigned) (Var_1990) << 10)) | (((((MR_Unsigned) (Var_1989) << 9)) | (((((MR_Unsigned) (Var_1988) << 8)) | (((((MR_Unsigned) (Var_1987) << 7)) | (((((MR_Unsigned) (Var_1986) << 6)) | (((((MR_Unsigned) (Var_1985) << 5)) | (((((MR_Unsigned) (Var_1984) << 4)) | (((((MR_Unsigned) (Var_1983) << 3)) | (((((MR_Unsigned) (Var_1982) << 2)) | (((((MR_Unsigned) (Var_1981) << 1)) | (MR_Unsigned) (Var_1980)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 2) = (MR_Box) (packed_word_8);
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
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 0) = (MR_Box) (packed_word_7);
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1) = (MR_Box) (((((MR_Unsigned) (Var_2011) << 31)) | (((((MR_Unsigned) (Var_2010) << 30)) | (((((MR_Unsigned) (Var_2009) << 29)) | (((((MR_Unsigned) (Var_2008) << 28)) | (((((MR_Unsigned) (Var_2007) << 27)) | (((((MR_Unsigned) (Var_2006) << 26)) | (((((MR_Unsigned) (Var_2005) << 25)) | (((((MR_Unsigned) (Var_2004) << 24)) | (((((MR_Unsigned) (Var_2003) << 23)) | (((((MR_Unsigned) (Var_2002) << 22)) | (((((MR_Unsigned) (Var_2001) << 21)) | (((((MR_Unsigned) (Var_2000) << 20)) | (((((MR_Unsigned) (Var_1999) << 19)) | (((((MR_Unsigned) (Var_1998) << 18)) | (((((MR_Unsigned) (Var_1997) << 17)) | (((((MR_Unsigned) (Var_1996) << 16)) | (((((MR_Unsigned) (Var_1995) << 15)) | (((((MR_Unsigned) (Var_1994) << 14)) | (((((MR_Unsigned) (Var_1993) << 13)) | (((((MR_Unsigned) (Var_1992) << 12)) | (((((MR_Unsigned) ((MR_Integer) 0) << 11)) | (((((MR_Unsigned) (Var_1990) << 10)) | (((((MR_Unsigned) (Var_1989) << 9)) | (((((MR_Unsigned) (Var_1988) << 8)) | (((((MR_Unsigned) (Var_1987) << 7)) | (((((MR_Unsigned) (Var_1986) << 6)) | (((((MR_Unsigned) (Var_1985) << 5)) | (((((MR_Unsigned) (Var_1984) << 4)) | (((((MR_Unsigned) (Var_1983) << 3)) | (((((MR_Unsigned) (Var_1982) << 2)) | (((((MR_Unsigned) (Var_1981) << 1)) | (MR_Unsigned) (Var_1980)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
        MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 2) = (MR_Box) (packed_word_8);
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
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 313, &UnboxedInt64s_13);
  switch (UnboxedInt64s_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_1576 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 31)) & (MR_Integer) 1);
        MR_Word Var_1577 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 30)) & (MR_Integer) 1);
        MR_Word Var_1578 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 29)) & (MR_Integer) 1);
        MR_Word Var_1579 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 28)) & (MR_Integer) 1);
        MR_Word Var_1580 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 27)) & (MR_Integer) 1);
        MR_Word Var_1581 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 26)) & (MR_Integer) 1);
        MR_Word Var_1582 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 25)) & (MR_Integer) 1);
        MR_Word Var_1583 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 24)) & (MR_Integer) 1);
        MR_Word Var_1584 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 23)) & (MR_Integer) 1);
        MR_Word Var_1585 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 22)) & (MR_Integer) 1);
        MR_Word Var_1586 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 21)) & (MR_Integer) 1);
        MR_Word Var_1587 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 20)) & (MR_Integer) 1);
        MR_Word Var_1588 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 19)) & (MR_Integer) 1);
        MR_Word Var_1589 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 18)) & (MR_Integer) 1);
        MR_Word Var_1590 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 17)) & (MR_Integer) 1);
        MR_Word Var_1591 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 16)) & (MR_Integer) 1);
        MR_Word Var_1592 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 15)) & (MR_Integer) 1);
        MR_Word Var_1593 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 14)) & (MR_Integer) 1);
        MR_Word Var_1594 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 13)) & (MR_Integer) 1);
        MR_Word Var_1595 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 12)) & (MR_Integer) 1);
        MR_Word Var_1596 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 11)) & (MR_Integer) 1);
        MR_Word Var_1598 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 9)) & (MR_Integer) 1);
        MR_Word Var_1599 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 8)) & (MR_Integer) 1);
        MR_Word Var_1600 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 7)) & (MR_Integer) 1);
        MR_Word Var_1601 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 6)) & (MR_Integer) 1);
        MR_Word Var_1602 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 5)) & (MR_Integer) 1);
        MR_Word Var_1603 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 4)) & (MR_Integer) 1);
        MR_Word Var_1604 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 3)) & (MR_Integer) 1);
        MR_Word Var_1605 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 2)) & (MR_Integer) 1);
        MR_Word Var_1606 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_1607 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) & (MR_Integer) 1);
        MR_Integer Var_1631 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 3))));
        MR_Integer Var_1632 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 4))));
        MR_Integer Var_1633 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 5))));
        MR_Integer Var_1634 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 6))));
        MR_Integer Var_1635 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 7))));
        MR_Integer Var_1636 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 8))));
        MR_Integer Var_1637 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 9))));
        MR_Integer Var_1638 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 10))));
        MR_Integer Var_1639 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 11))));
        MR_Integer Var_1640 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 12))));
        MR_Integer Var_1641 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 13))));
        MR_Integer Var_1642 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 14))));
        MR_Integer Var_1643 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 15))));
        MR_Integer Var_1644 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 16))));
        MR_Integer Var_1645 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 17))));
        MR_Integer Var_1646 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 18))));
        MR_Integer Var_1647 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 19))));
        MR_Integer Var_1648 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 20))));
        MR_Integer Var_1649 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 21))));
        MR_Integer Var_1650 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 22))));
        MR_Integer Var_1651 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 23))));
        MR_Integer Var_1652 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 24))));
        MR_Integer Var_1653 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 25))));
        MR_Integer Var_1654 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 26))));
        MR_Integer Var_1655 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 27))));
        MR_Integer Var_1656 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 28))));
        MR_Integer Var_1657 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 29))));
        MR_Integer Var_1658 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 30))));
        MR_Integer Var_1659 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 31))));
        MR_Integer Var_1660 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 32))));
        MR_Integer Var_1661 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 33))));
        MR_Integer Var_1662 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 34))));
        MR_Integer Var_1663 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 35))));
        MR_Integer Var_1664 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 36))));
        MR_Integer Var_1665 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 37))));
        MR_Integer Var_1666 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 38))));
        MR_Integer Var_1667 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 39))));
        MR_String Var_1668 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 40))));
        MR_Unsigned packed_word_9 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 0)));
        MR_Unsigned packed_word_10 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 2)));

        {
          STATE_VARIABLE_OptTuple_39_39 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 0) = (MR_Box) (packed_word_9);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1) = (MR_Box) (((((MR_Unsigned) (Var_1576) << 31)) | (((((MR_Unsigned) (Var_1577) << 30)) | (((((MR_Unsigned) (Var_1578) << 29)) | (((((MR_Unsigned) (Var_1579) << 28)) | (((((MR_Unsigned) (Var_1580) << 27)) | (((((MR_Unsigned) (Var_1581) << 26)) | (((((MR_Unsigned) (Var_1582) << 25)) | (((((MR_Unsigned) (Var_1583) << 24)) | (((((MR_Unsigned) (Var_1584) << 23)) | (((((MR_Unsigned) (Var_1585) << 22)) | (((((MR_Unsigned) (Var_1586) << 21)) | (((((MR_Unsigned) (Var_1587) << 20)) | (((((MR_Unsigned) (Var_1588) << 19)) | (((((MR_Unsigned) (Var_1589) << 18)) | (((((MR_Unsigned) (Var_1590) << 17)) | (((((MR_Unsigned) (Var_1591) << 16)) | (((((MR_Unsigned) (Var_1592) << 15)) | (((((MR_Unsigned) (Var_1593) << 14)) | (((((MR_Unsigned) (Var_1594) << 13)) | (((((MR_Unsigned) (Var_1595) << 12)) | (((((MR_Unsigned) (Var_1596) << 11)) | (((((MR_Unsigned) ((MR_Integer) 0) << 10)) | (((((MR_Unsigned) (Var_1598) << 9)) | (((((MR_Unsigned) (Var_1599) << 8)) | (((((MR_Unsigned) (Var_1600) << 7)) | (((((MR_Unsigned) (Var_1601) << 6)) | (((((MR_Unsigned) (Var_1602) << 5)) | (((((MR_Unsigned) (Var_1603) << 4)) | (((((MR_Unsigned) (Var_1604) << 3)) | (((((MR_Unsigned) (Var_1605) << 2)) | (((((MR_Unsigned) (Var_1606) << 1)) | (MR_Unsigned) (Var_1607)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 2) = (MR_Box) (packed_word_10);
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
        MR_Word Var_1451 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 31)) & (MR_Integer) 1);
        MR_Word Var_1452 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 30)) & (MR_Integer) 1);
        MR_Word Var_1453 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 29)) & (MR_Integer) 1);
        MR_Word Var_1454 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 28)) & (MR_Integer) 1);
        MR_Word Var_1455 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 27)) & (MR_Integer) 1);
        MR_Word Var_1456 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 26)) & (MR_Integer) 1);
        MR_Word Var_1457 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 25)) & (MR_Integer) 1);
        MR_Word Var_1458 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 24)) & (MR_Integer) 1);
        MR_Word Var_1459 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 23)) & (MR_Integer) 1);
        MR_Word Var_1460 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 22)) & (MR_Integer) 1);
        MR_Word Var_1461 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 21)) & (MR_Integer) 1);
        MR_Word Var_1462 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 20)) & (MR_Integer) 1);
        MR_Word Var_1463 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 19)) & (MR_Integer) 1);
        MR_Word Var_1464 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 18)) & (MR_Integer) 1);
        MR_Word Var_1465 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 17)) & (MR_Integer) 1);
        MR_Word Var_1466 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 16)) & (MR_Integer) 1);
        MR_Word Var_1467 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 15)) & (MR_Integer) 1);
        MR_Word Var_1468 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 14)) & (MR_Integer) 1);
        MR_Word Var_1469 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 13)) & (MR_Integer) 1);
        MR_Word Var_1470 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 12)) & (MR_Integer) 1);
        MR_Word Var_1471 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 11)) & (MR_Integer) 1);
        MR_Word Var_1473 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 9)) & (MR_Integer) 1);
        MR_Word Var_1474 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 8)) & (MR_Integer) 1);
        MR_Word Var_1475 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 7)) & (MR_Integer) 1);
        MR_Word Var_1476 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 6)) & (MR_Integer) 1);
        MR_Word Var_1477 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 5)) & (MR_Integer) 1);
        MR_Word Var_1478 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 4)) & (MR_Integer) 1);
        MR_Word Var_1479 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 3)) & (MR_Integer) 1);
        MR_Word Var_1480 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 2)) & (MR_Integer) 1);
        MR_Word Var_1481 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) >> 1)) & (MR_Integer) 1);
        MR_Word Var_1482 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 1))) & (MR_Integer) 1);
        MR_Integer Var_1506 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 3))));
        MR_Integer Var_1507 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 4))));
        MR_Integer Var_1508 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 5))));
        MR_Integer Var_1509 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 6))));
        MR_Integer Var_1510 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 7))));
        MR_Integer Var_1511 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 8))));
        MR_Integer Var_1512 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 9))));
        MR_Integer Var_1513 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 10))));
        MR_Integer Var_1514 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 11))));
        MR_Integer Var_1515 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 12))));
        MR_Integer Var_1516 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 13))));
        MR_Integer Var_1517 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 14))));
        MR_Integer Var_1518 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 15))));
        MR_Integer Var_1519 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 16))));
        MR_Integer Var_1520 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 17))));
        MR_Integer Var_1521 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 18))));
        MR_Integer Var_1522 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 19))));
        MR_Integer Var_1523 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 20))));
        MR_Integer Var_1524 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 21))));
        MR_Integer Var_1525 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 22))));
        MR_Integer Var_1526 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 23))));
        MR_Integer Var_1527 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 24))));
        MR_Integer Var_1528 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 25))));
        MR_Integer Var_1529 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 26))));
        MR_Integer Var_1530 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 27))));
        MR_Integer Var_1531 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 28))));
        MR_Integer Var_1532 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 29))));
        MR_Integer Var_1533 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 30))));
        MR_Integer Var_1534 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 31))));
        MR_Integer Var_1535 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 32))));
        MR_Integer Var_1536 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 33))));
        MR_Integer Var_1537 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 34))));
        MR_Integer Var_1538 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 35))));
        MR_Integer Var_1539 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 36))));
        MR_Integer Var_1540 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 37))));
        MR_Integer Var_1541 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 38))));
        MR_Integer Var_1542 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 39))));
        MR_String Var_1543 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 40))));
        MR_Unsigned packed_word_11 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 0)));
        MR_Unsigned packed_word_12 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_34_34, 2)));

        {
          STATE_VARIABLE_OptTuple_39_39 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 0) = (MR_Box) (packed_word_11);
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1) = (MR_Box) (((((MR_Unsigned) (Var_1451) << 31)) | (((((MR_Unsigned) (Var_1452) << 30)) | (((((MR_Unsigned) (Var_1453) << 29)) | (((((MR_Unsigned) (Var_1454) << 28)) | (((((MR_Unsigned) (Var_1455) << 27)) | (((((MR_Unsigned) (Var_1456) << 26)) | (((((MR_Unsigned) (Var_1457) << 25)) | (((((MR_Unsigned) (Var_1458) << 24)) | (((((MR_Unsigned) (Var_1459) << 23)) | (((((MR_Unsigned) (Var_1460) << 22)) | (((((MR_Unsigned) (Var_1461) << 21)) | (((((MR_Unsigned) (Var_1462) << 20)) | (((((MR_Unsigned) (Var_1463) << 19)) | (((((MR_Unsigned) (Var_1464) << 18)) | (((((MR_Unsigned) (Var_1465) << 17)) | (((((MR_Unsigned) (Var_1466) << 16)) | (((((MR_Unsigned) (Var_1467) << 15)) | (((((MR_Unsigned) (Var_1468) << 14)) | (((((MR_Unsigned) (Var_1469) << 13)) | (((((MR_Unsigned) (Var_1470) << 12)) | (((((MR_Unsigned) (Var_1471) << 11)) | (((((MR_Unsigned) ((MR_Integer) 0) << 10)) | (((((MR_Unsigned) (Var_1473) << 9)) | (((((MR_Unsigned) (Var_1474) << 8)) | (((((MR_Unsigned) (Var_1475) << 7)) | (((((MR_Unsigned) (Var_1476) << 6)) | (((((MR_Unsigned) (Var_1477) << 5)) | (((((MR_Unsigned) (Var_1478) << 4)) | (((((MR_Unsigned) (Var_1479) << 3)) | (((((MR_Unsigned) (Var_1480) << 2)) | (((((MR_Unsigned) (Var_1481) << 1)) | (MR_Unsigned) (Var_1482)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
          MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 2) = (MR_Box) (packed_word_12);
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
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 328, &NonLocalGotos_14);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_17, (MR_Integer) 330, &AsmLabels_15);
  succeeded = (NonLocalGotos_14 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (AsmLabels_15 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Var_1701 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 31)) & (MR_Integer) 1);
    MR_Word Var_1702 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 30)) & (MR_Integer) 1);
    MR_Word Var_1703 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 29)) & (MR_Integer) 1);
    MR_Word Var_1704 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 28)) & (MR_Integer) 1);
    MR_Word Var_1705 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 27)) & (MR_Integer) 1);
    MR_Word Var_1706 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 26)) & (MR_Integer) 1);
    MR_Word Var_1707 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 25)) & (MR_Integer) 1);
    MR_Word Var_1708 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 24)) & (MR_Integer) 1);
    MR_Word Var_1709 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 23)) & (MR_Integer) 1);
    MR_Word Var_1710 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 22)) & (MR_Integer) 1);
    MR_Word Var_1711 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 21)) & (MR_Integer) 1);
    MR_Word Var_1712 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 20)) & (MR_Integer) 1);
    MR_Word Var_1713 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 19)) & (MR_Integer) 1);
    MR_Word Var_1714 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 18)) & (MR_Integer) 1);
    MR_Word Var_1715 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_1716 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 16)) & (MR_Integer) 1);
    MR_Word Var_1717 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 15)) & (MR_Integer) 1);
    MR_Word Var_1718 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 14)) & (MR_Integer) 1);
    MR_Word Var_1719 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 13)) & (MR_Integer) 1);
    MR_Word Var_1720 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 12)) & (MR_Integer) 1);
    MR_Word Var_1721 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 11)) & (MR_Integer) 1);
    MR_Word Var_1722 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 10)) & (MR_Integer) 1);
    MR_Word Var_1724 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_1725 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 7)) & (MR_Integer) 1);
    MR_Word Var_1726 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word Var_1727 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word Var_1728 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word Var_1729 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word Var_1730 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_1731 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_1732 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) & (MR_Integer) 1);
    MR_Integer Var_1756 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 3))));
    MR_Integer Var_1757 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 4))));
    MR_Integer Var_1758 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 5))));
    MR_Integer Var_1759 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 6))));
    MR_Integer Var_1760 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 7))));
    MR_Integer Var_1761 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 8))));
    MR_Integer Var_1762 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 9))));
    MR_Integer Var_1763 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 10))));
    MR_Integer Var_1764 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 11))));
    MR_Integer Var_1765 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 12))));
    MR_Integer Var_1766 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 13))));
    MR_Integer Var_1767 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 14))));
    MR_Integer Var_1768 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 15))));
    MR_Integer Var_1769 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 16))));
    MR_Integer Var_1770 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 17))));
    MR_Integer Var_1771 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 18))));
    MR_Integer Var_1772 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 19))));
    MR_Integer Var_1773 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 20))));
    MR_Integer Var_1774 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 21))));
    MR_Integer Var_1775 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 22))));
    MR_Integer Var_1776 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 23))));
    MR_Integer Var_1777 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 24))));
    MR_Integer Var_1778 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 25))));
    MR_Integer Var_1779 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 26))));
    MR_Integer Var_1780 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 27))));
    MR_Integer Var_1781 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 28))));
    MR_Integer Var_1782 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 29))));
    MR_Integer Var_1783 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 30))));
    MR_Integer Var_1784 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 31))));
    MR_Integer Var_1785 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 32))));
    MR_Integer Var_1786 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 33))));
    MR_Integer Var_1787 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 34))));
    MR_Integer Var_1788 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 35))));
    MR_Integer Var_1789 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 36))));
    MR_Integer Var_1790 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 37))));
    MR_Integer Var_1791 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 38))));
    MR_Integer Var_1792 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 39))));
    MR_String Var_1793 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 40))));
    MR_Unsigned packed_word_13 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 0)));
    MR_Unsigned packed_word_14 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_OptTuple_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_13);
      MR_hl_field(0, base, 1) = (MR_Box) (((((MR_Unsigned) (Var_1701) << 31)) | (((((MR_Unsigned) (Var_1702) << 30)) | (((((MR_Unsigned) (Var_1703) << 29)) | (((((MR_Unsigned) (Var_1704) << 28)) | (((((MR_Unsigned) (Var_1705) << 27)) | (((((MR_Unsigned) (Var_1706) << 26)) | (((((MR_Unsigned) (Var_1707) << 25)) | (((((MR_Unsigned) (Var_1708) << 24)) | (((((MR_Unsigned) (Var_1709) << 23)) | (((((MR_Unsigned) (Var_1710) << 22)) | (((((MR_Unsigned) (Var_1711) << 21)) | (((((MR_Unsigned) (Var_1712) << 20)) | (((((MR_Unsigned) (Var_1713) << 19)) | (((((MR_Unsigned) (Var_1714) << 18)) | (((((MR_Unsigned) (Var_1715) << 17)) | (((((MR_Unsigned) (Var_1716) << 16)) | (((((MR_Unsigned) (Var_1717) << 15)) | (((((MR_Unsigned) (Var_1718) << 14)) | (((((MR_Unsigned) (Var_1719) << 13)) | (((((MR_Unsigned) (Var_1720) << 12)) | (((((MR_Unsigned) (Var_1721) << 11)) | (((((MR_Unsigned) (Var_1722) << 10)) | (((((MR_Unsigned) ((MR_Integer) 1) << 9)) | (((((MR_Unsigned) (Var_1724) << 8)) | (((((MR_Unsigned) (Var_1725) << 7)) | (((((MR_Unsigned) (Var_1726) << 6)) | (((((MR_Unsigned) (Var_1727) << 5)) | (((((MR_Unsigned) (Var_1728) << 4)) | (((((MR_Unsigned) (Var_1729) << 3)) | (((((MR_Unsigned) (Var_1730) << 2)) | (((((MR_Unsigned) (Var_1731) << 1)) | (MR_Unsigned) (Var_1732)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
      MR_hl_field(0, base, 2) = (MR_Box) (packed_word_14);
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
    MR_Word Var_1826 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 31)) & (MR_Integer) 1);
    MR_Word Var_1827 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 30)) & (MR_Integer) 1);
    MR_Word Var_1828 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 29)) & (MR_Integer) 1);
    MR_Word Var_1829 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 28)) & (MR_Integer) 1);
    MR_Word Var_1830 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 27)) & (MR_Integer) 1);
    MR_Word Var_1831 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 26)) & (MR_Integer) 1);
    MR_Word Var_1832 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 25)) & (MR_Integer) 1);
    MR_Word Var_1833 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 24)) & (MR_Integer) 1);
    MR_Word Var_1834 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 23)) & (MR_Integer) 1);
    MR_Word Var_1835 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 22)) & (MR_Integer) 1);
    MR_Word Var_1836 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 21)) & (MR_Integer) 1);
    MR_Word Var_1837 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 20)) & (MR_Integer) 1);
    MR_Word Var_1838 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 19)) & (MR_Integer) 1);
    MR_Word Var_1839 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 18)) & (MR_Integer) 1);
    MR_Word Var_1840 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 17)) & (MR_Integer) 1);
    MR_Word Var_1841 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 16)) & (MR_Integer) 1);
    MR_Word Var_1842 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 15)) & (MR_Integer) 1);
    MR_Word Var_1843 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 14)) & (MR_Integer) 1);
    MR_Word Var_1844 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 13)) & (MR_Integer) 1);
    MR_Word Var_1845 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 12)) & (MR_Integer) 1);
    MR_Word Var_1846 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 11)) & (MR_Integer) 1);
    MR_Word Var_1847 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 10)) & (MR_Integer) 1);
    MR_Word Var_1849 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 8)) & (MR_Integer) 1);
    MR_Word Var_1850 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 7)) & (MR_Integer) 1);
    MR_Word Var_1851 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 6)) & (MR_Integer) 1);
    MR_Word Var_1852 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 5)) & (MR_Integer) 1);
    MR_Word Var_1853 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 4)) & (MR_Integer) 1);
    MR_Word Var_1854 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 3)) & (MR_Integer) 1);
    MR_Word Var_1855 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word Var_1856 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_1857 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 1))) & (MR_Integer) 1);
    MR_Integer Var_1881 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 3))));
    MR_Integer Var_1882 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 4))));
    MR_Integer Var_1883 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 5))));
    MR_Integer Var_1884 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 6))));
    MR_Integer Var_1885 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 7))));
    MR_Integer Var_1886 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 8))));
    MR_Integer Var_1887 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 9))));
    MR_Integer Var_1888 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 10))));
    MR_Integer Var_1889 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 11))));
    MR_Integer Var_1890 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 12))));
    MR_Integer Var_1891 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 13))));
    MR_Integer Var_1892 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 14))));
    MR_Integer Var_1893 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 15))));
    MR_Integer Var_1894 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 16))));
    MR_Integer Var_1895 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 17))));
    MR_Integer Var_1896 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 18))));
    MR_Integer Var_1897 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 19))));
    MR_Integer Var_1898 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 20))));
    MR_Integer Var_1899 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 21))));
    MR_Integer Var_1900 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 22))));
    MR_Integer Var_1901 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 23))));
    MR_Integer Var_1902 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 24))));
    MR_Integer Var_1903 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 25))));
    MR_Integer Var_1904 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 26))));
    MR_Integer Var_1905 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 27))));
    MR_Integer Var_1906 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 28))));
    MR_Integer Var_1907 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 29))));
    MR_Integer Var_1908 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 30))));
    MR_Integer Var_1909 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 31))));
    MR_Integer Var_1910 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 32))));
    MR_Integer Var_1911 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 33))));
    MR_Integer Var_1912 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 34))));
    MR_Integer Var_1913 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 35))));
    MR_Integer Var_1914 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 36))));
    MR_Integer Var_1915 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 37))));
    MR_Integer Var_1916 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 38))));
    MR_Integer Var_1917 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 39))));
    MR_String Var_1918 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 40))));
    MR_Unsigned packed_word_15 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 0)));
    MR_Unsigned packed_word_16 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_OptTuple_39_39, 2)));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_OptTuple_19 = base;
      MR_hl_field(0, base, 0) = (MR_Box) (packed_word_15);
      MR_hl_field(0, base, 1) = (MR_Box) (((((MR_Unsigned) (Var_1826) << 31)) | (((((MR_Unsigned) (Var_1827) << 30)) | (((((MR_Unsigned) (Var_1828) << 29)) | (((((MR_Unsigned) (Var_1829) << 28)) | (((((MR_Unsigned) (Var_1830) << 27)) | (((((MR_Unsigned) (Var_1831) << 26)) | (((((MR_Unsigned) (Var_1832) << 25)) | (((((MR_Unsigned) (Var_1833) << 24)) | (((((MR_Unsigned) (Var_1834) << 23)) | (((((MR_Unsigned) (Var_1835) << 22)) | (((((MR_Unsigned) (Var_1836) << 21)) | (((((MR_Unsigned) (Var_1837) << 20)) | (((((MR_Unsigned) (Var_1838) << 19)) | (((((MR_Unsigned) (Var_1839) << 18)) | (((((MR_Unsigned) (Var_1840) << 17)) | (((((MR_Unsigned) (Var_1841) << 16)) | (((((MR_Unsigned) (Var_1842) << 15)) | (((((MR_Unsigned) (Var_1843) << 14)) | (((((MR_Unsigned) (Var_1844) << 13)) | (((((MR_Unsigned) (Var_1845) << 12)) | (((((MR_Unsigned) (Var_1846) << 11)) | (((((MR_Unsigned) (Var_1847) << 10)) | (((((MR_Unsigned) ((MR_Integer) 0) << 9)) | (((((MR_Unsigned) (Var_1849) << 8)) | (((((MR_Unsigned) (Var_1850) << 7)) | (((((MR_Unsigned) (Var_1851) << 6)) | (((((MR_Unsigned) (Var_1852) << 5)) | (((((MR_Unsigned) (Var_1853) << 4)) | (((((MR_Unsigned) (Var_1854) << 3)) | (((((MR_Unsigned) (Var_1855) << 2)) | (((((MR_Unsigned) (Var_1856) << 1)) | (MR_Unsigned) (Var_1857)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
      MR_hl_field(0, base, 2) = (MR_Box) (packed_word_16);
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
libs__handle_options__handle_non_tail_rec_warnings_6_p_0(
  MR_Word OptTuple0_7,
  MR_Word OT_OptMLDSTailCalls_8,
  MR_Word STATE_VARIABLE_Globals_0_16,
  MR_Word * STATE_VARIABLE_Globals_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word WarnNonTailRecSelf_11;
  MR_Word WarnNonTailRecMutual_12;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_16, (MR_Integer) 36, &WarnNonTailRecSelf_11);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_16, (MR_Integer) 37, &WarnNonTailRecMutual_12);
  succeeded = (WarnNonTailRecSelf_11 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (WarnNonTailRecMutual_12 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word OT_PessimizeTailCalls0_13 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple0_7, 2))) >> 15)) & (MR_Integer) 1);
    MR_Word STATE_VARIABLE_Specs_26_26;

    switch (OT_PessimizeTailCalls0_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_Specs_26_26 = STATE_VARIABLE_Specs_0_18;
        break;
      case (MR_Integer) 0:
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[190])), STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_26_26);
        break;
    }
    switch (OT_OptMLDSTailCalls_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[186])), STATE_VARIABLE_Specs_26_26, STATE_VARIABLE_Specs_19);
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_26_26;
        break;
    }
  }
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
  *STATE_VARIABLE_Globals_17 = STATE_VARIABLE_Globals_0_16;
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 95, &EnableIsSet_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 96, &EnableValue_8);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 93, &ConfigDefault_9);
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
  libs__globals__set_option_4_p_0((MR_Integer) 97, Var_19, STATE_VARIABLE_Globals_0_11, STATE_VARIABLE_Globals_12);
}

static void MR_CALL 
libs__handle_options__handle_compare_specialization_2_p_0(
  MR_Word STATE_VARIABLE_Globals_0_9,
  MR_Word * STATE_VARIABLE_Globals_10)
{
  MR_bool succeeded;
  MR_Integer CompareSpec_4;

  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 383, &CompareSpec_4);
  succeeded = (CompareSpec_4 < (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word HighLevelCode_5;
    MR_Integer Limit0_6;
    MR_Word ModeConstraints_7;
    MR_Integer Limit_8;
    MR_Word Var_16;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 332, &HighLevelCode_5);
    switch (HighLevelCode_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Limit0_6 = (MR_Integer) 13;
        break;
      case (MR_Integer) 1:
        Limit0_6 = (MR_Integer) 14;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_9, (MR_Integer) 231, &ModeConstraints_7);
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
    libs__globals__set_option_4_p_0((MR_Integer) 383, Var_16, STATE_VARIABLE_Globals_0_9, STATE_VARIABLE_Globals_10);
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

  libs__handle_options__option_implies_5_p_0((MR_Integer) 79, (MR_Integer) 78, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_39, &STATE_VARIABLE_Globals_46_46);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 78, (MR_Integer) 84, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_51_51);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 79, &VeryVerbose_7);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_51_51, (MR_Integer) 88, &Statistics_8);
  succeeded = (VeryVerbose_7 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Statistics_8 == (MR_Integer) 1);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 89, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_51_51, &STATE_VARIABLE_Globals_57_57);
  else
    STATE_VARIABLE_Globals_57_57 = STATE_VARIABLE_Globals_51_51;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 112, (MR_Integer) 110, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_57_57, &STATE_VARIABLE_Globals_62_62);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 113, (MR_Integer) 110, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_62_62, &STATE_VARIABLE_Globals_67_67);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 111, (MR_Integer) 110, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_67_67, &STATE_VARIABLE_Globals_72_72);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 125, &DebugLiveness_9);
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

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_72_72, (MR_Integer) 222, &DumpOptions0_11);
    DumpOptions1_12 = mercury__string__f_43_43_2_f_0(DumpOptions0_11, AllDumpOptions_10);
    {
      Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_79, 1) = ((MR_Box) (DumpOptions1_12));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 222, Var_79, STATE_VARIABLE_Globals_72_72, &STATE_VARIABLE_Globals_80_80);
  }
  else
    STATE_VARIABLE_Globals_80_80 = STATE_VARIABLE_Globals_72_72;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 113, (MR_Integer) 110, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_80_80, &STATE_VARIABLE_Globals_84_84);
  libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_84_84, (MR_Integer) 114, &DebugModesPredId_13);
  succeeded = (DebugModesPredId_13 > (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 110, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_90_90);
  else
    STATE_VARIABLE_Globals_90_90 = STATE_VARIABLE_Globals_84_84;
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_90_90, (MR_Integer) 238, &DebugUnneededCodePredNames_14);
  if ((DebugUnneededCodePredNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_95_95 = STATE_VARIABLE_Globals_90_90;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 237, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_90_90, &STATE_VARIABLE_Globals_95_95);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_95_95, (MR_Integer) 122, &DebugOptPredIdStrs_17);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_95_95, (MR_Integer) 123, &DebugOptPredNames_18);
  succeeded = (DebugOptPredIdStrs_17 != (MR_Word) ((MR_Unsigned) 0U));
  if (!(succeeded))
    succeeded = (DebugOptPredNames_18 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 120, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_95_95, &STATE_VARIABLE_Globals_101_101);
  else
    STATE_VARIABLE_Globals_101_101 = STATE_VARIABLE_Globals_95_95;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 131, &DebugIntermoduleAnalysis_23);
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
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 216, &DumpHLDSPredIds_25);
  if ((DumpHLDSPredIds_25 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_117_117 = STATE_VARIABLE_Globals_101_101;
  else
  {
    MR_String DumpOptions2_28;
    MR_String DumpOptions3_29;
    MR_String DumpOptions_30;
    MR_Word Var_116;

    libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_101_101, (MR_Integer) 222, &DumpOptions2_28);
    mercury__string__replace_all_4_p_0(DumpOptions2_28, (MR_String) "M", (MR_String) "", &DumpOptions3_29);
    mercury__string__replace_all_4_p_0(DumpOptions3_29, (MR_String) "T", (MR_String) "", &DumpOptions_30);
    {
      Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_116, 1) = ((MR_Box) (DumpOptions_30));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 222, Var_116, STATE_VARIABLE_Globals_101_101, &STATE_VARIABLE_Globals_117_117);
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 200, (MR_Integer) 199, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_117_117, &STATE_VARIABLE_Globals_121_121);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 215, &DumpHLDSStages_31);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 214, &DumpTraceStages_32);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 370, &ParallelLiveness_33);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_121_121, (MR_Integer) 371, &ParallelCodeGen_34);
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
    libs__globals__set_option_4_p_0((MR_Integer) 369, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_121_121, STATE_VARIABLE_Globals_40);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_7, (MR_Integer) 153, &SourceOptionValue_37);
  switch (SourceOptionValue_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_12_12 = STATE_VARIABLE_Globals_0_7;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 618, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[181])), STATE_VARIABLE_Globals_0_7, &STATE_VARIABLE_Globals_12_12);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_12_12, (MR_Integer) 153, &SourceOptionValue_38);
  switch (SourceOptionValue_38) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_17_17 = STATE_VARIABLE_Globals_12_12;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 620, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[181])), STATE_VARIABLE_Globals_12_12, &STATE_VARIABLE_Globals_17_17);
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_17_17, (MR_Integer) 703, &LibLinkages0_4);
  if ((LibLinkages0_4 == (MR_Word) ((MR_Unsigned) 0U)))
    libs__globals__set_option_4_p_0((MR_Integer) 703, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[184])), STATE_VARIABLE_Globals_17_17, &STATE_VARIABLE_Globals_22_22);
  else
    STATE_VARIABLE_Globals_22_22 = STATE_VARIABLE_Globals_17_17;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 559, &SourceOptionValue_39);
  switch (SourceOptionValue_39) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_31_31 = STATE_VARIABLE_Globals_22_22;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 622, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_31_31);
      break;
  }
  succeeded = mercury__io__file__have_symlinks_0_p_0();
  if (succeeded)
    *STATE_VARIABLE_Globals_8 = STATE_VARIABLE_Globals_31_31;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 693, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_31_31, STATE_VARIABLE_Globals_8);
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv9_LambdaHeadVar__2_296;

  conv9_LambdaHeadVar__2_296 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_LambdaHeadVar__2_296));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv8_LambdaHeadVar__2_291;

  conv8_LambdaHeadVar__2_291 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2520__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_LambdaHeadVar__2_291));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv7_LambdaHeadVar__2_285;

  conv7_LambdaHeadVar__2_285 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2516__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_LambdaHeadVar__2_285));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv6_LambdaHeadVar__2_273;

  conv6_LambdaHeadVar__2_273 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2491__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_273));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_LambdaHeadVar__2_267;

  conv5_LambdaHeadVar__2_267 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2487__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_267));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__handle_options__IntroducedFrom__pred__handle_directory_options__2466__1_2_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_LambdaHeadVar__2_249;

  conv4_LambdaHeadVar__2_249 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2447__1_3_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_249));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_LambdaHeadVar__2_230;

  conv3_LambdaHeadVar__2_230 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2410__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_230));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_220;

  conv2_LambdaHeadVar__2_220 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2400__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_220));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_208;

  conv1_LambdaHeadVar__2_208 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2390__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_208));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
libs__handle_options__handle_directory_options_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_193;

  conv0_LambdaHeadVar__2_193 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2369__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_193));
  return wrapper_arg_2;
}

static void MR_CALL 
libs__handle_options__handle_directory_options_5_p_0(
  MR_Word OpMode_6,
  MR_Word STATE_VARIABLE_Globals_0_145,
  MR_Word * STATE_VARIABLE_Globals_146,
  MR_Word STATE_VARIABLE_Specs_0_147,
  MR_Word * STATE_VARIABLE_Specs_148)
{
  MR_bool succeeded;
  MR_String MercuryLinkage_11;
  MR_Word DefaultRuntimeLibraryDirs_12;
  MR_Word MaybeStdLibDir_13;
  MR_Word MerStdLibDirs_15;
  MR_Word MaybeConfDir_20;
  MR_Word MercuryLibDirs_23;
  MR_String Grade_24;
  MR_Word UseSearchDirsForIntermod_37;
  MR_Word SearchLibFilesDirs_40;
  MR_Word IntermodDirs2_41;
  MR_String TargetArch_42;
  MR_Word ToGradeSubdir_43;
  MR_Word SubdirSetting_45;
  MR_Word LinkLibDirs_53;
  MR_Word InitDirs_56;
  MR_Word InterfaceSame_65;
  MR_Word InterfaceIndep_66;
  MR_Word InterfaceInstalled_67;
  MR_Word IntermodSame_68;
  MR_Word IntermodIndep_69;
  MR_Word IntermodInstalled_70;
  MR_Word CInclSame_71;
  MR_Word CInclIndep_72;
  MR_Word CInclInstalled_73;
  MR_Word CInclExternal_74;
  MR_Word MerLibSame_75;
  MR_Word MerLibIndep_76;
  MR_Word MerLibInstalled_77;
  MR_String ExtDirInt0_84;
  MR_String ExtDirInt1_86;
  MR_String ExtDirInt2_88;
  MR_String ExtDirInt3_90;
  MR_String ExtDirModuleDep_92;
  MR_Word InterfaceInt0_93;
  MR_Word InterfaceInt1_94;
  MR_Word InterfaceInt2_95;
  MR_Word InterfaceInt3_96;
  MR_Word InterfaceModuleDep_97;
  MR_Word InterfaceSrc_98;
  MR_String ExtDirPlainOpt_100;
  MR_String ExtDirTransOpt_102;
  MR_String ExtDirDate_104;
  MR_String ExtDirStatus_106;
  MR_String ExtDirAnalysis_108;
  MR_String ExtDirImdg_110;
  MR_String ExtDirRequest_112;
  MR_Word IntermodPlainOpt_113;
  MR_Word IntermodTransOpt_114;
  MR_Word IntermodDate_115;
  MR_Word IntermodStatus_116;
  MR_Word IntermodAnalysis_117;
  MR_Word IntermodImdg_118;
  MR_Word IntermodRequest_119;
  MR_Word IntermodSrc_120;
  MR_String ExtDirMh_122;
  MR_String ExtDirMih_124;
  MR_Word CInclMh_125;
  MR_Word CInclMih_126;
  MR_Word CInclH0_127;
  MR_Word CInclH_128;
  MR_String ExtDirA_130;
  MR_Word LibA_131;
  MR_String ExtDirInit_134;
  MR_String ExtDirJar_137;
  MR_String ExtDirDll_140;
  MR_Word LibInit_141;
  MR_Word LibJar_142;
  MR_Word LibDll_143;
  MR_Word ExtDirsMaps_144;
  MR_Word STATE_VARIABLE_Globals_153_153;
  MR_Word STATE_VARIABLE_Globals_158_158;
  MR_Word STATE_VARIABLE_Globals_174_174;
  MR_Word STATE_VARIABLE_Globals_186_186;
  MR_Word STATE_VARIABLE_Globals_236_236;
  MR_Word STATE_VARIABLE_Globals_243_243;
  MR_Word STATE_VARIABLE_Globals_263_263;
  MR_Word Var_279;
  MR_Word STATE_VARIABLE_Globals_280_280;
  MR_Word Var_282;
  MR_Word STATE_VARIABLE_Globals_283_283;
  MR_Word STATE_VARIABLE_Globals_310_310;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_324_324;
  MR_Word STATE_VARIABLE_IntermodDirsMap_325_325;
  MR_Word STATE_VARIABLE_CInclDirsMap_326_326;
  MR_Word STATE_VARIABLE_LibDirsMap_327_327;
  MR_Word STATE_VARIABLE_StdLibDirsMap_328_328;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_335_335;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_337_337;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_339_339;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_341_341;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_343_343;
  MR_Word Var_344;
  MR_Word STATE_VARIABLE_InterfaceDirsMap_346_346;
  MR_Word STATE_VARIABLE_IntermodDirsMap_355_355;
  MR_Word STATE_VARIABLE_IntermodDirsMap_357_357;
  MR_Word STATE_VARIABLE_IntermodDirsMap_359_359;
  MR_Word STATE_VARIABLE_IntermodDirsMap_361_361;
  MR_Word STATE_VARIABLE_IntermodDirsMap_363_363;
  MR_Word STATE_VARIABLE_IntermodDirsMap_365_365;
  MR_Word STATE_VARIABLE_IntermodDirsMap_367_367;
  MR_Word Var_368;
  MR_Word STATE_VARIABLE_IntermodDirsMap_370_370;
  MR_Word STATE_VARIABLE_CInclDirsMap_374_374;
  MR_Word STATE_VARIABLE_CInclDirsMap_376_376;
  MR_Word Var_377;
  MR_Word STATE_VARIABLE_CInclDirsMap_379_379;
  MR_Word STATE_VARIABLE_LibDirsMap_382_382;
  MR_Word STATE_VARIABLE_StdLibDirsMap_393_393;
  MR_Word STATE_VARIABLE_StdLibDirsMap_395_395;
  MR_Word STATE_VARIABLE_StdLibDirsMap_397_397;
  MR_Word ToMihsSubdir_57;
  MR_String Var_83;
  MR_String Var_85;
  MR_String Var_87;
  MR_String Var_89;
  MR_String Var_91;
  MR_String Var_99;
  MR_String Var_101;
  MR_String Var_103;
  MR_String Var_105;
  MR_String Var_107;
  MR_String Var_109;
  MR_String Var_111;
  MR_String Var_121;
  MR_String Var_123;
  MR_String Var_129;
  MR_String Var_132;
  MR_String Var_133;
  MR_String Var_135;
  MR_String Var_136;
  MR_String Var_138;
  MR_String Var_139;

  if ((OpMode_6 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) OpMode_6)) == (MR_Integer) 3))
  {
    MR_Word OpModeArgs_9 = ((MR_Word) ((MR_hl_field(3, OpMode_6, 0))));
    MR_Word Var_149;
    MR_Word Var_150;

    succeeded = ((MR_tag((MR_Word) OpModeArgs_9)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_149 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_9, 0))));
      succeeded = ((MR_tag((MR_Word) Var_149)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_150 = ((MR_Unsigned) ((MR_hl_field(1, Var_149, 0))) & (MR_Integer) 3);
        succeeded = (Var_150 == (MR_Integer) 3);
      }
    }
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    STATE_VARIABLE_Globals_153_153 = STATE_VARIABLE_Globals_0_145;
  else
    libs__globals__set_option_4_p_0((MR_Integer) 729, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_145, &STATE_VARIABLE_Globals_153_153);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_153_153, (MR_Integer) 620, &MercuryLinkage_11);
  succeeded = (strcmp(MercuryLinkage_11, (MR_String) "static") == 0);
  if (succeeded)
  {
    DefaultRuntimeLibraryDirs_12 = (MR_Integer) 0;
    libs__globals__set_option_4_p_0((MR_Integer) 604, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_153_153, &STATE_VARIABLE_Globals_158_158);
  }
  else
  {
    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_153_153, (MR_Integer) 604, &DefaultRuntimeLibraryDirs_12);
    STATE_VARIABLE_Globals_158_158 = STATE_VARIABLE_Globals_153_153;
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_158_158, (MR_Integer) 613, &MaybeStdLibDir_13);
  if ((MaybeStdLibDir_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MerStdLibDirs_15 = (MR_Word) ((MR_Unsigned) 0U);
    libs__globals__set_option_4_p_0((MR_Integer) 729, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_158_158, &STATE_VARIABLE_Globals_174_174);
  }
  else
  {
    MR_String StdLibDir_14 = ((MR_String) ((MR_hl_field(1, MaybeStdLibDir_13, 0))));
    MR_Word OptionTable2_16;
    MR_Word OptionTable_17;
    MR_Word LinkLibDirs0_18;
    MR_Word STATE_VARIABLE_Globals_163_163;
    MR_Word Var_166;
    MR_Word STATE_VARIABLE_Globals_167_167;
    MR_Word Var_168;
    MR_String Var_169;

    {
      MerStdLibDirs_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MerStdLibDirs_15, 0) = ((MR_Box) (StdLibDir_14));
      MR_hl_field(1, MerStdLibDirs_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_158_158, &OptionTable2_16);
    libs__options__option_table_add_mercury_library_directory_3_p_0(StdLibDir_14, OptionTable2_16, &OptionTable_17);
    libs__globals__set_options_3_p_0(OptionTable_17, STATE_VARIABLE_Globals_158_158, &STATE_VARIABLE_Globals_163_163);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_163_163, (MR_Integer) 602, &LinkLibDirs0_18);
    Var_169 = mercury__dir__f_slash_2_f_0(StdLibDir_14, (MR_String) "lib");
    {
      Var_168 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_168, 0) = ((MR_Box) (Var_169));
      MR_hl_field(1, Var_168, 1) = ((MR_Box) (LinkLibDirs0_18));
    }
    {
      Var_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_166, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_166, 1) = ((MR_Box) (Var_168));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 602, Var_166, STATE_VARIABLE_Globals_163_163, &STATE_VARIABLE_Globals_167_167);
    switch (DefaultRuntimeLibraryDirs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_174_174 = STATE_VARIABLE_Globals_167_167;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath0_19;
          MR_Word Var_173;
          MR_Word Var_175;
          MR_String Var_176;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_167_167, (MR_Integer) 603, &Rpath0_19);
          Var_176 = mercury__dir__f_slash_2_f_0(StdLibDir_14, (MR_String) "lib");
          {
            Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
            MR_hl_field(1, Var_175, 1) = ((MR_Box) (Rpath0_19));
          }
          {
            Var_173 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_173, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_173, 1) = ((MR_Box) (Var_175));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 603, Var_173, STATE_VARIABLE_Globals_167_167, &STATE_VARIABLE_Globals_174_174);
        }
        break;
    }
  }
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_174_174, (MR_Integer) 694, &MaybeConfDir_20);
  if ((MaybeConfDir_20 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_186_186 = STATE_VARIABLE_Globals_174_174;
  else
  {
    MR_String ConfDir_21 = ((MR_String) ((MR_hl_field(1, MaybeConfDir_20, 0))));
    MR_Word CIncludeDirs0_22;
    MR_Word Var_185;
    MR_Word Var_187;
    MR_String Var_188;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_174_174, (MR_Integer) 563, &CIncludeDirs0_22);
    Var_188 = mercury__dir__f_slash_2_f_0(ConfDir_21, (MR_String) "conf");
    {
      Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_187, 0) = ((MR_Box) (Var_188));
      MR_hl_field(1, Var_187, 1) = ((MR_Box) (CIncludeDirs0_22));
    }
    {
      Var_185 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_185, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_185, 1) = ((MR_Box) (Var_187));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 563, Var_185, STATE_VARIABLE_Globals_174_174, &STATE_VARIABLE_Globals_186_186);
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_186_186, (MR_Integer) 607, &MercuryLibDirs_23);
  libs__globals__get_grade_dir_2_p_0(STATE_VARIABLE_Globals_186_186, &Grade_24);
  if ((MercuryLibDirs_23 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Globals_236_236 = STATE_VARIABLE_Globals_186_186;
  else
  {
    MR_Word ExtraLinkLibDirs_27;
    MR_Word LinkLibDirs1_29;
    MR_Word ExtraIncludeDirs_31;
    MR_Word CIncludeDirs_32;
    MR_Word ExtraIntermodDirs_33;
    MR_Word IntermodDirs0_34;
    MR_Word ExtraInitDirs_35;
    MR_Word InitDirs1_36;
    MR_Word Var_191;
    MR_Word Var_198;
    MR_Word STATE_VARIABLE_Globals_199_199;
    MR_Word Var_200;
    MR_Word STATE_VARIABLE_Globals_204_204;
    MR_Word Var_206;
    MR_Word Var_215;
    MR_Word STATE_VARIABLE_Globals_216_216;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_225;
    MR_Word STATE_VARIABLE_Globals_226_226;
    MR_Word Var_227;
    MR_Word Var_228;
    MR_Word Var_235;
    MR_Word Var_237;

    {
      Var_191 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_191, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_191, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_1));
      MR_hl_field(0, Var_191, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_191, 3) = ((MR_Box) (Grade_24));
    }
    ExtraLinkLibDirs_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_191, MercuryLibDirs_23);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_186_186, (MR_Integer) 602, &LinkLibDirs1_29);
    Var_200 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LinkLibDirs1_29, ExtraLinkLibDirs_27);
    {
      Var_198 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_198, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_198, 1) = ((MR_Box) (Var_200));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 602, Var_198, STATE_VARIABLE_Globals_186_186, &STATE_VARIABLE_Globals_199_199);
    switch (DefaultRuntimeLibraryDirs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_Globals_204_204 = STATE_VARIABLE_Globals_199_199;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rpath_30;
          MR_Word Var_203;
          MR_Word Var_205;

          libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_199_199, (MR_Integer) 603, &Rpath_30);
          Var_205 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Rpath_30, ExtraLinkLibDirs_27);
          {
            Var_203 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_203, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, Var_203, 1) = ((MR_Box) (Var_205));
          }
          libs__globals__set_option_4_p_0((MR_Integer) 603, Var_203, STATE_VARIABLE_Globals_199_199, &STATE_VARIABLE_Globals_204_204);
        }
        break;
    }
    {
      Var_206 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_206, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_206, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_2));
      MR_hl_field(0, Var_206, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_206, 3) = ((MR_Box) (Grade_24));
    }
    ExtraIncludeDirs_31 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_206, MercuryLibDirs_23);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_204_204, (MR_Integer) 563, &CIncludeDirs_32);
    Var_217 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIncludeDirs_31, CIncludeDirs_32);
    {
      Var_215 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_215, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_215, 1) = ((MR_Box) (Var_217));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 563, Var_215, STATE_VARIABLE_Globals_204_204, &STATE_VARIABLE_Globals_216_216);
    {
      Var_218 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_218, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_218, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_3));
      MR_hl_field(0, Var_218, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_218, 3) = ((MR_Box) (Grade_24));
    }
    ExtraIntermodDirs_33 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_218, MercuryLibDirs_23);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_216_216, (MR_Integer) 713, &IntermodDirs0_34);
    Var_227 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtraIntermodDirs_33, IntermodDirs0_34);
    {
      Var_225 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_225, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_225, 1) = ((MR_Box) (Var_227));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 713, Var_225, STATE_VARIABLE_Globals_216_216, &STATE_VARIABLE_Globals_226_226);
    {
      Var_228 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_228, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[1]));
      MR_hl_field(0, Var_228, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_4));
      MR_hl_field(0, Var_228, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_228, 3) = ((MR_Box) (Grade_24));
    }
    ExtraInitDirs_35 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_228, MercuryLibDirs_23);
    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_226_226, (MR_Integer) 615, &InitDirs1_36);
    Var_237 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitDirs1_36, ExtraInitDirs_35);
    {
      Var_235 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_235, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_235, 1) = ((MR_Box) (Var_237));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 615, Var_235, STATE_VARIABLE_Globals_226_226, &STATE_VARIABLE_Globals_236_236);
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_236_236, (MR_Integer) 714, &UseSearchDirsForIntermod_37);
  switch (UseSearchDirsForIntermod_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_243_243 = STATE_VARIABLE_Globals_236_236;
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntermodDirs1_38;
        MR_Word SearchDirs_39;
        MR_Word Var_242;
        MR_Word Var_244;

        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_236_236, (MR_Integer) 713, &IntermodDirs1_38);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_236_236, (MR_Integer) 712, &SearchDirs_39);
        Var_244 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodDirs1_38, SearchDirs_39);
        {
          Var_242 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_242, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_242, 1) = ((MR_Box) (Var_244));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 713, Var_242, STATE_VARIABLE_Globals_236_236, &STATE_VARIABLE_Globals_243_243);
      }
      break;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_243_243, (MR_Integer) 609, &SearchLibFilesDirs_40);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_243_243, (MR_Integer) 713, &IntermodDirs2_41);
  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_243_243, (MR_Integer) 743, &TargetArch_42);
  {
    ToGradeSubdir_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ToGradeSubdir_43, 0) = ((MR_Box) (&libs__handle_options_scalar_common_6[2]));
    MR_hl_field(0, ToGradeSubdir_43, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_5));
    MR_hl_field(0, ToGradeSubdir_43, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, ToGradeSubdir_43, 3) = ((MR_Box) (Grade_24));
    MR_hl_field(0, ToGradeSubdir_43, 4) = ((MR_Box) (TargetArch_42));
  }
  libs__globals__get_subdir_setting_2_p_0(STATE_VARIABLE_Globals_243_243, &SubdirSetting_45);
  switch (SubdirSetting_45) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word IntermodDirs3_48;
        MR_Word LinkLibDirs2_49;
        MR_Word InitDirs2_50;
        MR_Word Var_262;

        IntermodDirs3_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_40, IntermodDirs2_41);
        {
          Var_262 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_262, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_262, 1) = ((MR_Box) (IntermodDirs3_48));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 713, Var_262, STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_263_263);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_263_263, (MR_Integer) 602, &LinkLibDirs2_49);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_263_263, (MR_Integer) 615, &InitDirs2_50);
        LinkLibDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_40, LinkLibDirs2_49);
        InitDirs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesDirs_40, InitDirs2_50);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String GradeSubdir_46;
        MR_Word SearchLibFilesGradeSubdirs_47;
        MR_Word ToGradeLibDir_51;
        MR_Word SearchGradeLibDirs_52;
        MR_Word ToGradeInitDir_54;
        MR_Word SearchGradeInitDirs_55;
        MR_String Var_253;
        MR_Word Var_255;
        MR_Word Var_257;
        MR_Word Var_258;
        MR_Word Var_259;
        MR_String Var_260;
        MR_Word IntermodDirs3_425;
        MR_Word LinkLibDirs2_426;
        MR_Word InitDirs2_427;
        MR_Word Var_428;

        Var_253 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_24);
        GradeSubdir_46 = mercury__dir__f_slash_2_f_0(Var_253, TargetArch_42);
        SearchLibFilesGradeSubdirs_47 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeSubdir_43, SearchLibFilesDirs_40);
        {
          Var_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_255, 0) = ((MR_Box) (GradeSubdir_46));
          MR_hl_field(1, Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_260 = mercury__dir__this_directory_0_f_0();
        {
          Var_259 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_259, 0) = ((MR_Box) (&libs__handle_options_scalar_common_8[0]));
          MR_hl_field(0, Var_259, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_6));
          MR_hl_field(0, Var_259, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_259, 3) = ((MR_Box) (Var_260));
        }
        Var_258 = mercury__list__negated_filter_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_259, IntermodDirs2_41);
        Var_257 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibFilesGradeSubdirs_47, Var_258);
        IntermodDirs3_425 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_255, Var_257);
        {
          Var_428 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_428, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Var_428, 1) = ((MR_Box) (IntermodDirs3_425));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 713, Var_428, STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_263_263);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_263_263, (MR_Integer) 602, &LinkLibDirs2_426);
        libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_263_263, (MR_Integer) 615, &InitDirs2_427);
        {
          ToGradeLibDir_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeLibDir_51, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
          MR_hl_field(0, ToGradeLibDir_51, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_7));
          MR_hl_field(0, ToGradeLibDir_51, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeLibDir_51, 3) = ((MR_Box) (ToGradeSubdir_43));
        }
        SearchGradeLibDirs_52 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeLibDir_51, SearchLibFilesDirs_40);
        LinkLibDirs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeLibDirs_52, LinkLibDirs2_426);
        {
          ToGradeInitDir_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToGradeInitDir_54, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
          MR_hl_field(0, ToGradeInitDir_54, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_8));
          MR_hl_field(0, ToGradeInitDir_54, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToGradeInitDir_54, 3) = ((MR_Box) (ToGradeSubdir_43));
        }
        SearchGradeInitDirs_55 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToGradeInitDir_54, SearchLibFilesDirs_40);
        InitDirs_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchGradeInitDirs_55, InitDirs2_427);
      }
      break;
  }
  {
    Var_279 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_279, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_279, 1) = ((MR_Box) (LinkLibDirs_53));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 602, Var_279, STATE_VARIABLE_Globals_263_263, &STATE_VARIABLE_Globals_280_280);
  {
    Var_282 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_282, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, Var_282, 1) = ((MR_Box) (InitDirs_56));
  }
  libs__globals__set_option_4_p_0((MR_Integer) 615, Var_282, STATE_VARIABLE_Globals_280_280, &STATE_VARIABLE_Globals_283_283);
  switch (SubdirSetting_45) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 2:
      {
        {
          ToMihsSubdir_57 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ToMihsSubdir_57, 0) = ((MR_Box) (&libs__handle_options_scalar_common_7[2]));
          MR_hl_field(0, ToMihsSubdir_57, 1) = ((MR_Box) (libs__handle_options__handle_directory_options_5_p_0_9));
          MR_hl_field(0, ToMihsSubdir_57, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, ToMihsSubdir_57, 3) = ((MR_Box) (ToGradeSubdir_43));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        ToMihsSubdir_57 = (MR_Word) (&libs__handle_options_scalar_common_9[0]);
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
    MR_String Var_301;
    MR_String Var_302;
    MR_String Var_303;
    MR_Word Var_304;
    MR_Word Var_305;
    MR_Word Var_306;
    MR_Word Var_307;
    MR_Word Var_309;
    MR_Box MR_CALL (* func_10)(MR_Box, MR_Box);
    MR_Box conv11_MihsSubdir_61;

    libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_283_283, (MR_Integer) 563, &CIncludeDirs1_59);
    Var_301 = mercury__dir__this_directory_0_f_0();
    MhsSubdir_60 = libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(Var_301);
    Var_302 = mercury__dir__this_directory_0_f_0();
    func_10 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, ToMihsSubdir_57, 1))));
    conv11_MihsSubdir_61 = func_10(((MR_Box) (ToMihsSubdir_57)), ((MR_Box) (Var_302)));
    MihsSubdir_61 = ((MR_String) (conv11_MihsSubdir_61));
    SearchLibMhsSubdirs_62 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__handle_options_scalar_common_9[1]), SearchLibFilesDirs_40);
    SearchLibMihsSubdirs_63 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ToMihsSubdir_57, SearchLibFilesDirs_40);
    Var_303 = mercury__dir__this_directory_0_f_0();
    Var_307 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMihsSubdirs_63, CIncludeDirs1_59);
    Var_306 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SearchLibMhsSubdirs_62, Var_307);
    {
      Var_305 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_305, 0) = ((MR_Box) (MihsSubdir_61));
      MR_hl_field(1, Var_305, 1) = ((MR_Box) (Var_306));
    }
    {
      Var_304 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_304, 0) = ((MR_Box) (MhsSubdir_60));
      MR_hl_field(1, Var_304, 1) = ((MR_Box) (Var_305));
    }
    {
      SubdirCIncludeDirs_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SubdirCIncludeDirs_64, 0) = ((MR_Box) (Var_303));
      MR_hl_field(1, SubdirCIncludeDirs_64, 1) = ((MR_Box) (Var_304));
    }
    {
      Var_309 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_309, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_309, 1) = ((MR_Box) (SubdirCIncludeDirs_64));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 563, Var_309, STATE_VARIABLE_Globals_283_283, &STATE_VARIABLE_Globals_310_310);
  }
  else
    STATE_VARIABLE_Globals_310_310 = STATE_VARIABLE_Globals_283_283;
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 715, &InterfaceSame_65);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 716, &InterfaceIndep_66);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 717, &InterfaceInstalled_67);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 718, &IntermodSame_68);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 719, &IntermodIndep_69);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 720, &IntermodInstalled_70);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 721, &CInclSame_71);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 722, &CInclIndep_72);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 723, &CInclInstalled_73);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 724, &CInclExternal_74);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 725, &MerLibSame_75);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 726, &MerLibIndep_76);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 727, &MerLibInstalled_77);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_InterfaceDirsMap_324_324);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_IntermodDirsMap_325_325);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_CInclDirsMap_326_326);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_LibDirsMap_327_327);
  mercury__map__init_1_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), &STATE_VARIABLE_StdLibDirsMap_328_328);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 0, &Var_83, &ExtDirInt0_84);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 1, &Var_85, &ExtDirInt1_86);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 2, &Var_87, &ExtDirInt2_88);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 3, &Var_89, &ExtDirInt3_90);
  parse_tree__file_names__ext_cur_ngs_extension_dir_3_p_0((MR_Integer) 10, &Var_91, &ExtDirModuleDep_92);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_45, ExtDirInt0_84, InterfaceSame_65, InterfaceIndep_66, InterfaceInstalled_67, &InterfaceInt0_93);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_45, ExtDirInt1_86, InterfaceSame_65, InterfaceIndep_66, InterfaceInstalled_67, &InterfaceInt1_94);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_45, ExtDirInt2_88, InterfaceSame_65, InterfaceIndep_66, InterfaceInstalled_67, &InterfaceInt2_95);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_45, ExtDirInt3_90, InterfaceSame_65, InterfaceIndep_66, InterfaceInstalled_67, &InterfaceInt3_96);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_45, ExtDirModuleDep_92, InterfaceSame_65, InterfaceIndep_66, InterfaceInstalled_67, &InterfaceModuleDep_97);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (InterfaceInt0_93)), STATE_VARIABLE_InterfaceDirsMap_324_324, &STATE_VARIABLE_InterfaceDirsMap_335_335);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (InterfaceInt1_94)), STATE_VARIABLE_InterfaceDirsMap_335_335, &STATE_VARIABLE_InterfaceDirsMap_337_337);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (InterfaceInt2_95)), STATE_VARIABLE_InterfaceDirsMap_337_337, &STATE_VARIABLE_InterfaceDirsMap_339_339);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 3)), ((MR_Box) (InterfaceInt3_96)), STATE_VARIABLE_InterfaceDirsMap_339_339, &STATE_VARIABLE_InterfaceDirsMap_341_341);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 4)), ((MR_Box) (InterfaceModuleDep_97)), STATE_VARIABLE_InterfaceDirsMap_341_341, &STATE_VARIABLE_InterfaceDirsMap_343_343);
  Var_344 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InterfaceIndep_66, InterfaceInstalled_67);
  InterfaceSrc_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InterfaceSame_65, Var_344);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_interface_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 5)), ((MR_Box) (InterfaceSrc_98)), STATE_VARIABLE_InterfaceDirsMap_343_343, &STATE_VARIABLE_InterfaceDirsMap_346_346);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 0, &Var_99, &ExtDirPlainOpt_100);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 1, &Var_101, &ExtDirTransOpt_102);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 10, &Var_103, &ExtDirDate_104);
  parse_tree__file_names__ext_cur_ngs_gs_extension_dir_3_p_0((MR_Integer) 11, &Var_105, &ExtDirStatus_106);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 2, &Var_107, &ExtDirAnalysis_108);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 3, &Var_109, &ExtDirImdg_110);
  parse_tree__file_names__ext_cur_ngs_gs_max_ngs_extension_dir_3_p_0((MR_Integer) 4, &Var_111, &ExtDirRequest_112);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirPlainOpt_100, IntermodSame_68, IntermodIndep_69, IntermodInstalled_70, &IntermodPlainOpt_113);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirTransOpt_102, IntermodSame_68, IntermodIndep_69, IntermodInstalled_70, &IntermodTransOpt_114);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirDate_104, IntermodSame_68, IntermodIndep_69, IntermodInstalled_70, &IntermodDate_115);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirStatus_106, IntermodSame_68, IntermodIndep_69, IntermodInstalled_70, &IntermodStatus_116);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirAnalysis_108, IntermodSame_68, IntermodIndep_69, IntermodInstalled_70, &IntermodAnalysis_117);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirImdg_110, IntermodSame_68, IntermodIndep_69, IntermodInstalled_70, &IntermodImdg_118);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirRequest_112, IntermodSame_68, IntermodIndep_69, IntermodInstalled_70, &IntermodRequest_119);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (IntermodPlainOpt_113)), STATE_VARIABLE_IntermodDirsMap_325_325, &STATE_VARIABLE_IntermodDirsMap_355_355);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (IntermodTransOpt_114)), STATE_VARIABLE_IntermodDirsMap_355_355, &STATE_VARIABLE_IntermodDirsMap_357_357);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (IntermodDate_115)), STATE_VARIABLE_IntermodDirsMap_357_357, &STATE_VARIABLE_IntermodDirsMap_359_359);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 3)), ((MR_Box) (IntermodStatus_116)), STATE_VARIABLE_IntermodDirsMap_359_359, &STATE_VARIABLE_IntermodDirsMap_361_361);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 4)), ((MR_Box) (IntermodAnalysis_117)), STATE_VARIABLE_IntermodDirsMap_361_361, &STATE_VARIABLE_IntermodDirsMap_363_363);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 5)), ((MR_Box) (IntermodImdg_118)), STATE_VARIABLE_IntermodDirsMap_363_363, &STATE_VARIABLE_IntermodDirsMap_365_365);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 6)), ((MR_Box) (IntermodRequest_119)), STATE_VARIABLE_IntermodDirsMap_365_365, &STATE_VARIABLE_IntermodDirsMap_367_367);
  Var_368 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodIndep_69, IntermodInstalled_70);
  IntermodSrc_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), IntermodSame_68, Var_368);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_intermod_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 7)), ((MR_Box) (IntermodSrc_120)), STATE_VARIABLE_IntermodDirsMap_367_367, &STATE_VARIABLE_IntermodDirsMap_370_370);
  parse_tree__file_names__ext_cur_pgs_max_cur_extension_dir_3_p_0(&Var_121, &ExtDirMh_122);
  parse_tree__file_names__ext_cur_ngs_gs_max_cur_extension_dir_3_p_0(&Var_123, &ExtDirMih_124);
  libs__handle_options__make_proposed_search_path_ngs_6_p_0(SubdirSetting_45, ExtDirMh_122, CInclSame_71, CInclIndep_72, CInclInstalled_73, &CInclMh_125);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirMih_124, CInclSame_71, CInclIndep_72, CInclInstalled_73, &CInclMih_126);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (CInclMh_125)), STATE_VARIABLE_CInclDirsMap_326_326, &STATE_VARIABLE_CInclDirsMap_374_374);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (CInclMih_126)), STATE_VARIABLE_CInclDirsMap_374_374, &STATE_VARIABLE_CInclDirsMap_376_376);
  Var_377 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CInclMih_126, CInclExternal_74);
  CInclH0_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CInclMh_125, Var_377);
  mercury__list__remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CInclH0_127, &CInclH_128);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_c_incl_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (CInclH_128)), STATE_VARIABLE_CInclDirsMap_376_376, &STATE_VARIABLE_CInclDirsMap_379_379);
  parse_tree__file_names__ext_cur_gas_extension_dir_4_p_0(STATE_VARIABLE_Globals_310_310, (MR_Integer) 7, &Var_129, &ExtDirA_130);
  libs__handle_options__make_proposed_search_path_gas_8_p_0(SubdirSetting_45, Grade_24, TargetArch_42, ExtDirA_130, MerLibSame_75, MerLibIndep_76, MerLibInstalled_77, &LibA_131);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_lib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (LibA_131)), STATE_VARIABLE_LibDirsMap_327_327, &STATE_VARIABLE_LibDirsMap_382_382);
  parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 0, &Var_132, &Var_133, &ExtDirInit_134);
  parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 1, &Var_135, &Var_136, &ExtDirJar_137);
  parse_tree__file_names__ext_cur_gs_extension_dir_4_p_0((MR_Integer) 2, &Var_138, &Var_139, &ExtDirDll_140);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirInit_134, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MerStdLibDirs_15, &LibInit_141);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirJar_137, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MerStdLibDirs_15, &LibJar_142);
  libs__handle_options__make_proposed_search_path_gs_7_p_0(SubdirSetting_45, Grade_24, ExtDirDll_140, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), MerStdLibDirs_15, &LibDll_143);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (LibInit_141)), STATE_VARIABLE_StdLibDirsMap_328_328, &STATE_VARIABLE_StdLibDirsMap_393_393);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 1)), ((MR_Box) (LibJar_142)), STATE_VARIABLE_StdLibDirsMap_393_393, &STATE_VARIABLE_StdLibDirsMap_395_395);
  mercury__map__det_insert_4_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_stdlib_ext_0), (MR_Word) (&libs__handle_options_scalar_common_1[1]), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (LibDll_143)), STATE_VARIABLE_StdLibDirsMap_395_395, &STATE_VARIABLE_StdLibDirsMap_397_397);
  {
    ExtDirsMaps_144 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ExtDirsMaps_144, 0) = ((MR_Box) (STATE_VARIABLE_InterfaceDirsMap_346_346));
    MR_hl_field(0, ExtDirsMaps_144, 1) = ((MR_Box) (STATE_VARIABLE_IntermodDirsMap_370_370));
    MR_hl_field(0, ExtDirsMaps_144, 2) = ((MR_Box) (STATE_VARIABLE_CInclDirsMap_379_379));
    MR_hl_field(0, ExtDirsMaps_144, 3) = ((MR_Box) (STATE_VARIABLE_LibDirsMap_382_382));
    MR_hl_field(0, ExtDirsMaps_144, 4) = ((MR_Box) (STATE_VARIABLE_StdLibDirsMap_397_397));
  }
  libs__globals__set_ext_dirs_maps_3_p_0(ExtDirsMaps_144, STATE_VARIABLE_Globals_310_310, STATE_VARIABLE_Globals_146);
  *STATE_VARIABLE_Specs_148 = STATE_VARIABLE_Specs_0_147;
}

static MR_String MR_CALL 
libs__handle_options__IntroducedFrom__func__handle_directory_options__2526__1_1_f_0(
  MR_String LambdaHeadVar__1_295)
{
  MR_String LambdaHeadVar__2_296;
  MR_String Var_297;

  Var_297 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_295, (MR_String) "Mercury");
  LambdaHeadVar__2_296 = mercury__dir__f_slash_2_f_0(Var_297, (MR_String) "mhs");
  return LambdaHeadVar__2_296;
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
  MR_Word STATE_VARIABLE_Globals_16_16;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 709, &UseGradeSubdirs_6);
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
          libs__globals__set_option_4_p_0((MR_Integer) 708, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_11, &STATE_VARIABLE_Globals_16_16);
          SubdirSetting_8 = (MR_Integer) 1;
        }
        else
        {
          MR_Word UseSubdirs_23;

          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_11, (MR_Integer) 708, &UseSubdirs_23);
          switch (UseSubdirs_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              SubdirSetting_8 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              SubdirSetting_8 = (MR_Integer) 1;
              break;
          }
          STATE_VARIABLE_Globals_16_16 = STATE_VARIABLE_Globals_0_11;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        libs__globals__set_option_4_p_0((MR_Integer) 708, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_11, &STATE_VARIABLE_Globals_16_16);
        SubdirSetting_8 = (MR_Integer) 2;
      }
      break;
  }
  libs__globals__set_subdir_setting_3_p_0(SubdirSetting_8, STATE_VARIABLE_Globals_16_16, STATE_VARIABLE_Globals_12);
}

static void MR_CALL 
libs__handle_options__handle_libgrades_6_p_0(
  MR_Word STATE_VARIABLE_Globals_0_21,
  MR_Word * STATE_VARIABLE_Globals_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;
  MR_Word MaybeStdLibGrades0_10;
  MR_Word StdLibGrades_12;
  MR_Word LibGrades0_18;
  MR_Word STATE_VARIABLE_Globals_29_29;
  MR_Word STATE_VARIABLE_Globals_34_34;
  MR_Word SpecifiedLibGrades_19;
  MR_String Var_31;

  libs__globals__get_maybe_stdlib_grades_2_p_0(STATE_VARIABLE_Globals_0_21, &MaybeStdLibGrades0_10);
  if ((MaybeStdLibGrades0_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Detect_13;

    libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 699, &Detect_13);
    switch (Detect_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          StdLibGrades_12 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_0_21;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeStdLibGradeSet_14;

          libs__check_libgrades__detect_stdlib_grades_4_p_0(STATE_VARIABLE_Globals_0_21, &MaybeStdLibGradeSet_14);
          if (((MR_tag((MR_Word) MaybeStdLibGradeSet_14)) == (MR_Integer) 0))
          {
            StdLibGrades_12 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_0_21;
          }
          else
          {
            MR_Word StdLibGradeSet_15 = ((MR_Word) ((MR_hl_field(1, MaybeStdLibGradeSet_14, 0))));
            MR_Word MaybeStdLibGrades_16;

            {
              MaybeStdLibGrades_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeStdLibGrades_16, 0) = ((MR_Box) (StdLibGradeSet_15));
            }
            libs__globals__set_maybe_stdlib_grades_3_p_0(MaybeStdLibGrades_16, STATE_VARIABLE_Globals_0_21, &STATE_VARIABLE_Globals_29_29);
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdLibGradeSet_15, &StdLibGrades_12);
          }
        }
        break;
    }
  }
  else
  {
    MR_Word StdLibGradeSet0_11 = ((MR_Word) ((MR_hl_field(1, MaybeStdLibGrades0_10, 0))));

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdLibGradeSet0_11, &StdLibGrades_12);
    STATE_VARIABLE_Globals_29_29 = STATE_VARIABLE_Globals_0_21;
  }
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 700, &LibGrades0_18);
  succeeded = (LibGrades0_18 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_31 = ((MR_String) ((MR_hl_field(1, LibGrades0_18, 0))));
    SpecifiedLibGrades_19 = ((MR_Word) ((MR_hl_field(1, LibGrades0_18, 1))));
    succeeded = (strcmp(Var_31, (MR_String) "stdlib") == 0);
  }
  if (succeeded)
  {
    MR_Word LibGrades_20;
    MR_Word Var_33;

    LibGrades_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), StdLibGrades_12, SpecifiedLibGrades_19);
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (LibGrades_20));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 700, Var_33, STATE_VARIABLE_Globals_29_29, &STATE_VARIABLE_Globals_34_34);
  }
  else
    STATE_VARIABLE_Globals_34_34 = STATE_VARIABLE_Globals_29_29;
  libs__compute_grade__handle_libgrade_component_incl_excl_4_p_0(STATE_VARIABLE_Globals_34_34, STATE_VARIABLE_Globals_22, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
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

  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 613, &MaybeOptionsStdLibDir_9);
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
  libs__globals__set_option_4_p_0((MR_Integer) 728, Var_106, STATE_VARIABLE_Globals_0_19, STATE_VARIABLE_Globals_20);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 175, &Smart_11);
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

        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_0_14, (MR_Integer) 522, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_32;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_22_22);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_22_22, (MR_Integer) 33, &WarnSmart_32);
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
        succeeded = libs__globals__lookup_bool_option_3_p_1(STATE_VARIABLE_Globals_22_22, (MR_Integer) 524, (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word WarnSmart_51;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_22_22, &STATE_VARIABLE_Globals_27_27);
          libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_27_27, (MR_Integer) 33, &WarnSmart_51);
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
          *STATE_VARIABLE_Globals_15 = STATE_VARIABLE_Globals_27_27;
        else
        {
          MR_Word WarnSmart_70;

          libs__globals__io_set_disable_smart_recompilation_3_p_0((MR_Integer) 1);
          libs__globals__set_option_4_p_0((MR_Integer) 175, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_27_27, STATE_VARIABLE_Globals_15);
          libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_15, (MR_Integer) 33, &WarnSmart_70);
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
    InvokedByMMCMake_7 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_4, 1))) & (MR_Integer) 1);
    succeeded = (InvokedByMMCMake_7 == (MR_Integer) 1);
  }
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 177, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_9, &STATE_VARIABLE_Globals_13_13);
  else
    STATE_VARIABLE_Globals_13_13 = STATE_VARIABLE_Globals_0_9;
  libs__handle_options__option_implies_5_p_0((MR_Integer) 82, (MR_Integer) 81, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_13_13, &STATE_VARIABLE_Globals_18_18);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 130, (MR_Integer) 233, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_18_18, &STATE_VARIABLE_Globals_23_23);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 233, (MR_Integer) 231, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_23_23, &STATE_VARIABLE_Globals_28_28);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 232, (MR_Integer) 231, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_28_28, &STATE_VARIABLE_Globals_33_33);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 259, (MR_Integer) 338, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_38_38);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 268, (MR_Integer) 338, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_38_38, &STATE_VARIABLE_Globals_43_43);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 530, (MR_Integer) 531, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_48_48);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 536, (MR_Integer) 534, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_48_48, &STATE_VARIABLE_Globals_53_53);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 544, (MR_Integer) 543, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_53_53, &STATE_VARIABLE_Globals_58_58);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 551, (MR_Integer) 550, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_58_58, &STATE_VARIABLE_Globals_63_63);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 543, (MR_Integer) 542, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_63_63, &STATE_VARIABLE_Globals_68_68);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 550, (MR_Integer) 549, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_68_68, &STATE_VARIABLE_Globals_73_73);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 543, (MR_Integer) 19, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_73_73, &STATE_VARIABLE_Globals_78_78);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 550, (MR_Integer) 19, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_78_78, &STATE_VARIABLE_Globals_83_83);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 526, (MR_Integer) 522, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_83_83, &STATE_VARIABLE_Globals_88_88);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 526, (MR_Integer) 525, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_88_88, &STATE_VARIABLE_Globals_93_93);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 522, (MR_Integer) 524, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_93_93, &STATE_VARIABLE_Globals_98_98);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 525, (MR_Integer) 524, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_98_98, &STATE_VARIABLE_Globals_103_103);
  libs__globals__set_option_4_p_0((MR_Integer) 524, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_103_103, &STATE_VARIABLE_Globals_107_107);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_107_107, (MR_Integer) 53, &UnusedImports_8);
  switch (UnusedImports_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_10 = STATE_VARIABLE_Globals_107_107;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 54, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_107_107, STATE_VARIABLE_Globals_10);
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
  MR_Word STATE_VARIABLE_Globals_38_38;
  MR_Word STATE_VARIABLE_Globals_76_76;

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 175, &Smart0_6);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 74, &Inform0_7);
  switch (MR_tag((MR_Word) OpMode_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OpMode_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Smart_12 = (MR_Integer) 0;
            Inform_13 = (MR_Integer) 0;
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
          }
          break;
        case (MR_Integer) 1:
          {
            libs__globals__set_option_4_p_0((MR_Integer) 32, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_38_38);
            Smart_12 = (MR_Integer) 0;
            Inform_13 = (MR_Integer) 0;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        Smart_12 = (MR_Integer) 0;
        Inform_13 = (MR_Integer) 0;
        STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word OpModeQuery_17 = ((MR_Unsigned) ((MR_hl_field(2, OpMode_4, 0))) & (MR_Integer) 15);

        switch (OpModeQuery_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 3:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 2:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 5:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 6:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 4:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 11:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 7:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            libs__globals__set_option_4_p_0((MR_Integer) 699, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_38_38);
            break;
          case (MR_Integer) 10:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 8:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 9:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 14:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
          case (MR_Integer) 15:
            STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            break;
        }
        Smart_12 = (MR_Integer) 0;
        Inform_13 = (MR_Integer) 0;
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
              Smart_12 = (MR_Integer) 0;
              Inform_13 = (MR_Integer) 0;
              STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word OpModeArgsMI_10 = ((MR_Unsigned) ((MR_hl_field(2, OpModeArgs_8, 0))) & (MR_Integer) 3);
              MR_Word HaltAtWarn_11;
              MR_Word STATE_VARIABLE_Globals_25_25;
              MR_Word Var_29;
              MR_Word STATE_VARIABLE_Globals_30_30;
              MR_Word STATE_VARIABLE_Globals_33_33;
              MR_Word STATE_VARIABLE_Globals_35_35;
              MR_Word OptionTable0_97;
              MR_Word OptionTable_98;
              MR_Word Var_99;

              libs__globals__set_option_4_p_0((MR_Integer) 195, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_25_25);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_25_25, (MR_Integer) 4, &HaltAtWarn_11);
              {
                Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_29, 0) = (MR_Box) ((MR_Unsigned) (HaltAtWarn_11));
              }
              libs__globals__set_option_4_p_0((MR_Integer) 3, Var_29, STATE_VARIABLE_Globals_25_25, &STATE_VARIABLE_Globals_30_30);
              libs__globals__set_option_4_p_0((MR_Integer) 54, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_30_30, &STATE_VARIABLE_Globals_33_33);
              libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_33_33, &OptionTable0_97);
              Var_99 = libs__options__style_warning_options_0_f_0();
              libs__options__set_all_options_to_4_p_0(Var_99, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), OptionTable0_97, &OptionTable_98);
              libs__globals__set_options_3_p_0(OptionTable_98, STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_35_35);
              switch (OpModeArgsMI_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word Var_37;

                    {
                      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_37, 0) = (MR_Box) ((MR_Unsigned) (Smart0_6));
                    }
                    libs__globals__set_option_4_p_0((MR_Integer) 176, Var_37, STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_38_38);
                  }
                  break;
                case (MR_Integer) 2:
                  libs__globals__set_option_4_p_0((MR_Integer) 176, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_38_38);
                  break;
              }
              Smart_12 = (MR_Integer) 0;
              Inform_13 = (MR_Integer) 0;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word OpModeAugment_14 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_8, 0))));

              switch (MR_tag((MR_Word) OpModeAugment_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(OpModeAugment_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word STATE_VARIABLE_Globals_45_45;
                        MR_Word Var_49;
                        MR_Word STATE_VARIABLE_Globals_50_50;
                        MR_Word HaltAtWarn_80;
                        MR_Word OptionTable0_87;
                        MR_Word OptionTable_88;
                        MR_Word Var_89;

                        libs__globals__set_option_4_p_0((MR_Integer) 195, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_45_45);
                        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_45_45, (MR_Integer) 5, &HaltAtWarn_80);
                        {
                          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_49, 0) = (MR_Box) ((MR_Unsigned) (HaltAtWarn_80));
                        }
                        libs__globals__set_option_4_p_0((MR_Integer) 3, Var_49, STATE_VARIABLE_Globals_45_45, &STATE_VARIABLE_Globals_50_50);
                        libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_50_50, &OptionTable0_87);
                        Var_89 = libs__options__style_warning_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_89, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), OptionTable0_87, &OptionTable_88);
                        libs__globals__set_options_3_p_0(OptionTable_88, STATE_VARIABLE_Globals_50_50, &STATE_VARIABLE_Globals_38_38);
                        Smart_12 = (MR_Integer) 0;
                        Inform_13 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word STATE_VARIABLE_Globals_54_54;
                        MR_Word STATE_VARIABLE_Globals_58_58;
                        MR_Word Var_62;
                        MR_Word STATE_VARIABLE_Globals_63_63;
                        MR_Word HaltAtWarn_81;
                        MR_Word OptionTable0_92;
                        MR_Word OptionTable_93;
                        MR_Word Var_94;

                        libs__globals__set_option_4_p_0((MR_Integer) 526, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_54_54);
                        libs__globals__set_option_4_p_0((MR_Integer) 195, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_54_54, &STATE_VARIABLE_Globals_58_58);
                        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_58_58, (MR_Integer) 5, &HaltAtWarn_81);
                        {
                          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, Var_62, 0) = (MR_Box) ((MR_Unsigned) (HaltAtWarn_81));
                        }
                        libs__globals__set_option_4_p_0((MR_Integer) 3, Var_62, STATE_VARIABLE_Globals_58_58, &STATE_VARIABLE_Globals_63_63);
                        libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_63_63, &OptionTable0_92);
                        Var_94 = libs__options__style_warning_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_94, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), OptionTable0_92, &OptionTable_93);
                        libs__globals__set_options_3_p_0(OptionTable_93, STATE_VARIABLE_Globals_63_63, &STATE_VARIABLE_Globals_38_38);
                        Smart_12 = (MR_Integer) 0;
                        Inform_13 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                      {
                        MR_Word OptionTable0_82;
                        MR_Word OptionTable_83;
                        MR_Word Var_84;

                        libs__globals__get_options_2_p_0(STATE_VARIABLE_Globals_0_19, &OptionTable0_82);
                        Var_84 = libs__options__style_warning_options_0_f_0();
                        libs__options__set_all_options_to_4_p_0(Var_84, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), OptionTable0_82, &OptionTable_83);
                        libs__globals__set_options_3_p_0(OptionTable_83, STATE_VARIABLE_Globals_0_19, &STATE_VARIABLE_Globals_38_38);
                        Smart_12 = (MR_Integer) 0;
                        Inform_13 = (MR_Integer) 0;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word OpModeFrontAndMiddle_15 = ((MR_Unsigned) ((MR_hl_field(1, OpModeAugment_14, 0))) & (MR_Integer) 3);

                    switch (OpModeFrontAndMiddle_15) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Smart_12 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 1:
                      case (MR_Integer) 3:
                        Smart_12 = Smart0_6;
                        break;
                    }
                    Inform_13 = Inform0_7;
                    STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_0_19;
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
    STATE_VARIABLE_Globals_76_76 = STATE_VARIABLE_Globals_38_38;
  else
  {
    MR_Word Var_75;

    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = (MR_Box) ((MR_Unsigned) (Smart_12));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 175, Var_75, STATE_VARIABLE_Globals_38_38, &STATE_VARIABLE_Globals_76_76);
  }
  succeeded = (Inform_13 == Inform0_7);
  if (succeeded)
    *STATE_VARIABLE_Globals_20 = STATE_VARIABLE_Globals_76_76;
  else
  {
    MR_Word Var_78;

    {
      Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_78, 0) = (MR_Box) ((MR_Unsigned) (Inform_13));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 74, Var_78, STATE_VARIABLE_Globals_76_76, STATE_VARIABLE_Globals_20);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 338, &SourceOptionValue_40);
  switch (SourceOptionValue_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_20_20 = STATE_VARIABLE_Globals_0_15;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 341, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_20_20);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_20_20, (MR_Integer) 342, &SourceOptionValue_41);
  switch (SourceOptionValue_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_25_25 = STATE_VARIABLE_Globals_20_20;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 341, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_20_20, &STATE_VARIABLE_Globals_25_25);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_25_25, (MR_Integer) 341, &SourceOptionValue_42);
  switch (SourceOptionValue_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_30_30 = STATE_VARIABLE_Globals_25_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 339, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_25_25, &STATE_VARIABLE_Globals_30_30);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_30_30, (MR_Integer) 340, &SourceOptionValue_43);
  switch (SourceOptionValue_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_30_30;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 339, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_30_30, STATE_VARIABLE_Globals_16);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 341, &ProcIdStackLayout_12);
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 340, &AgcStackLayout_13);
  succeeded = (ProcIdStackLayout_12 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (AgcStackLayout_13 == (MR_Integer) 1);
  if (succeeded)
    *OT_OptDups_9 = (MR_Integer) 1;
  else
    *OT_OptDups_9 = OT_OptDups0_8;
  libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_16, (MR_Integer) 339, &BasicStackLayout_14);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 285, &RecordTermSizesAsWords_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_14, (MR_Integer) 286, &RecordTermSizesAsCells_10);
  succeeded = (RecordTermSizesAsWords_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (RecordTermSizesAsCells_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[140])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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

      libs__globals__set_option_4_p_0((MR_Integer) 270, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_14, &STATE_VARIABLE_Globals_29_29);
      *AllowOptLCMCTermSize_7 = (MR_Integer) 0;
      libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_29_29, (MR_Integer) 332, &HighLevelCode_12);
      libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_29_29, STATE_VARIABLE_Globals_15);
      switch (HighLevelCode_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_17 = STATE_VARIABLE_Specs_0_16;
          break;
        case (MR_Integer) 1:
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[142])), STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_25, (MR_Integer) 281, &SourceOptionValue_88);
  switch (SourceOptionValue_88) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_33_33 = STATE_VARIABLE_Globals_0_25;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 272, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_25, &STATE_VARIABLE_Globals_33_33);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_33_33, (MR_Integer) 272, &SourceOptionValue_89);
  switch (SourceOptionValue_89) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_38_38 = STATE_VARIABLE_Globals_33_33;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 284, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_33_33, &STATE_VARIABLE_Globals_38_38);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_38_38, (MR_Integer) 268, &SourceOptionValue_90);
  switch (SourceOptionValue_90) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_43_43 = STATE_VARIABLE_Globals_38_38;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 270, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_38_38, &STATE_VARIABLE_Globals_43_43);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_43_43, (MR_Integer) 268, &SourceOptionValue_91);
  switch (SourceOptionValue_91) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_48_48 = STATE_VARIABLE_Globals_43_43;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 341, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_48_48);
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

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_48_48, (MR_Integer) 332, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_11 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_60_60 = STATE_VARIABLE_Specs_0_28;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[134])), STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_60_60);
        libs__globals__set_option_4_p_0((MR_Integer) 384, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_48_48, &STATE_VARIABLE_Globals_63_63);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_63_63, (MR_Integer) 281, &SourceOptionValue_92);
        switch (SourceOptionValue_92) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Globals_26 = STATE_VARIABLE_Globals_63_63;
            break;
          case (MR_Integer) 1:
            libs__globals__set_option_4_p_0((MR_Integer) 187, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_63_63, STATE_VARIABLE_Globals_26);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 187, &ProfOptimized_19);
        switch (ProfOptimized_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChangesProf_71_71 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChangesProf_71_71 = (MR_Integer) 1;
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 283, &LotsOfHOSpec_20);
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
  libs__globals__lookup_string_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 287, &ExpComp_21);
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
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 285, &RecordTermSizesAsWords_22);
    libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_26, (MR_Integer) 286, &RecordTermSizesAsCells_23);
    succeeded = (RecordTermSizesAsWords_22 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (RecordTermSizesAsCells_23 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_60_60;
    else
      libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[138])), STATE_VARIABLE_Specs_60_60, STATE_VARIABLE_Specs_29);
  }
}

static void MR_CALL 
libs__handle_options__maybe_update_event_set_file_name_4_p_0(
  MR_Word STATE_VARIABLE_Globals_0_10,
  MR_Word * STATE_VARIABLE_Globals_11)
{
  MR_bool succeeded;
  MR_String EventSetFileName0_7;

  libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_10, (MR_Integer) 251, &EventSetFileName0_7);
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
      libs__globals__set_option_4_p_0((MR_Integer) 251, Var_18, STATE_VARIABLE_Globals_0_10, STATE_VARIABLE_Globals_11);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_24, (MR_Integer) 260, &SourceOptionValue_94);
  switch (SourceOptionValue_94) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_31_31 = STATE_VARIABLE_Globals_0_24;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 259, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_24, &STATE_VARIABLE_Globals_31_31);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_31_31, (MR_Integer) 259, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_36_36 = STATE_VARIABLE_Globals_31_31;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 185, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_31_31, &STATE_VARIABLE_Globals_36_36);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_36_36, (MR_Integer) 185, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_41_41 = STATE_VARIABLE_Globals_36_36;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 181, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_36_36, &STATE_VARIABLE_Globals_41_41);
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_41_41, (MR_Integer) 184, &SourceOptionValue_97);
  switch (SourceOptionValue_97) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_46_46 = STATE_VARIABLE_Globals_41_41;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 181, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_41_41, &STATE_VARIABLE_Globals_46_46);
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

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 332, &HighLevelCode_17);
        succeeded = (HighLevelCode_17 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Target_10 == (MR_Integer) 0);
        if (succeeded)
          STATE_VARIABLE_Specs_55_55 = STATE_VARIABLE_Specs_0_26;
        else
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[130])), STATE_VARIABLE_Specs_0_26, &STATE_VARIABLE_Specs_55_55);
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 289, &Parallel_19);
        switch (Parallel_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_55_55;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[132])), STATE_VARIABLE_Specs_55_55, STATE_VARIABLE_Specs_27);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_46_46, (MR_Integer) 179, &TraceOptimized_21);
        switch (TraceOptimized_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_AllowSrcChanges_65_65 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_AllowSrcChanges_65_65 = (MR_Integer) 1;
            break;
        }
        libs__globals__set_option_4_p_0((MR_Integer) 342, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_69_69);
        libs__globals__set_option_4_p_0((MR_Integer) 343, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_69_69, &STATE_VARIABLE_Globals_73_73);
        libs__globals__set_option_4_p_0((MR_Integer) 390, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_73_73, &STATE_VARIABLE_Globals_77_77);
        AllowTraceTailRec_22 = libs__trace_params__trace_level_allows_tail_rec_1_f_0(TraceLevel_11);
        switch (AllowTraceTailRec_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            libs__globals__set_option_4_p_0((MR_Integer) 188, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_77_77, &STATE_VARIABLE_Globals_81_81);
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
        libs__globals__set_option_4_p_0((MR_Integer) 188, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_46_46, &STATE_VARIABLE_Globals_81_81);
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
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_81_81, (MR_Integer) 305, &SourceOptionValue_98);
  switch (SourceOptionValue_98) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_25 = STATE_VARIABLE_Globals_81_81;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 307, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_81_81, STATE_VARIABLE_Globals_25);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 292, &UseMinimalModelStackCopy_9);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 293, &UseMinimalModelOwnStacks_10);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (UseMinimalModelOwnStacks_10 == (MR_Integer) 1);
  if (succeeded)
  {
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[118])), STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_36_36);
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

        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 332, &HighLevelCode_13);
        switch (HighLevelCode_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_47_47 = STATE_VARIABLE_Specs_36_36;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[122])), STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_47_47);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 291, &UseTrail_15);
        switch (UseTrail_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            STATE_VARIABLE_Specs_58_58 = STATE_VARIABLE_Specs_47_47;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[125])), STATE_VARIABLE_Specs_47_47, &STATE_VARIABLE_Specs_58_58);
            break;
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 289, &Parallel_17);
        switch (Parallel_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_58_58;
            break;
          case (MR_Integer) 1:
            libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[128])), STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_24);
            break;
        }
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 353, &DisablePneg_19);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_21, (MR_Integer) 354, &DisableCut_20);
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisablePneg_19 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 355, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_21, &STATE_VARIABLE_Globals_74_74);
  else
    STATE_VARIABLE_Globals_74_74 = STATE_VARIABLE_Globals_0_21;
  succeeded = (UseMinimalModelStackCopy_9 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DisableCut_20 == (MR_Integer) 0);
  if (succeeded)
    libs__globals__set_option_4_p_0((MR_Integer) 356, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_74_74, STATE_VARIABLE_Globals_22);
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

        libs__globals__set_option_4_p_0((MR_Integer) 340, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_26_26);
        libs__globals__set_option_4_p_0((MR_Integer) 343, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_26_26, &STATE_VARIABLE_Globals_30_30);
        libs__globals__set_option_4_p_0((MR_Integer) 390, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_30_30, &STATE_VARIABLE_Globals_34_34);
        libs__globals__set_option_4_p_0((MR_Integer) 373, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_34_34, &STATE_VARIABLE_Globals_38_38);
        libs__globals__set_option_4_p_0((MR_Integer) 374, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_38_38, STATE_VARIABLE_Globals_21);
        *OT_OptFrames_11 = (MR_Integer) 1;
        libs__globals__lookup_bool_option_3_p_0(*STATE_VARIABLE_Globals_21, (MR_Integer) 332, &HighLevelCode_13);
        libs__globals__get_target_2_p_0(*STATE_VARIABLE_Globals_21, &Target_14);
        succeeded = (HighLevelCode_13 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (Target_14 != (MR_Integer) 0);
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[96])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
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

              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 332, &HighLevelCode_106);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 373, &SemidetReclaim_17);
              libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_20, (MR_Integer) 374, &NondetReclaim_18);
              succeeded = (HighLevelCode_106 == (MR_Integer) 1);
              if (succeeded)
                succeeded = (SemidetReclaim_17 != NondetReclaim_18);
              if (succeeded)
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[114])), STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
              else
                *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
              *STATE_VARIABLE_Globals_21 = STATE_VARIABLE_Globals_0_20;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_Globals_63_63;

              libs__globals__set_option_4_p_0((MR_Integer) 373, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_20, &STATE_VARIABLE_Globals_63_63);
              libs__globals__set_option_4_p_0((MR_Integer) 374, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_63_63, STATE_VARIABLE_Globals_21);
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
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 289, &Parallel_8);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 290, &Threadscope_9);
  succeeded = (GradeSupportsParConj_7 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (Threadscope_9 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[73])), STATE_VARIABLE_Specs_0_17, &STATE_VARIABLE_Specs_36_36);
  else
    STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_0_17;
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 759, &ImplicitParallelism_11);
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
                libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[82])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
                break;
            }
            libs__globals__set_option_4_p_0((MR_Integer) 759, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_0_15, &STATE_VARIABLE_Globals_79_79);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FeedbackFile_12;

            libs__globals__lookup_string_option_3_p_0(STATE_VARIABLE_Globals_0_15, (MR_Integer) 760, &FeedbackFile_12);
            succeeded = (strcmp(FeedbackFile_12, (MR_String) "") == 0);
            if (succeeded)
              libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[88])), STATE_VARIABLE_Specs_36_36, STATE_VARIABLE_Specs_18);
            else
              *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_36_36;
            STATE_VARIABLE_Globals_79_79 = STATE_VARIABLE_Globals_0_15;
          }
          break;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_79_79, (MR_Integer) 759, &SourceOptionValue_95);
  switch (SourceOptionValue_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Globals_84_84 = STATE_VARIABLE_Globals_79_79;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 271, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_79_79, &STATE_VARIABLE_Globals_84_84);
      break;
  }
  switch (GradeSupportsParConj_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      libs__globals__set_option_4_p_0((MR_Integer) 761, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_84_84, &STATE_VARIABLE_Globals_88_88);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Globals_88_88 = STATE_VARIABLE_Globals_84_84;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_88_88, (MR_Integer) 289, &SourceOptionValue_96);
  switch (SourceOptionValue_96) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Globals_16 = STATE_VARIABLE_Globals_88_88;
      break;
    case (MR_Integer) 1:
      libs__globals__set_option_4_p_0((MR_Integer) 564, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_88_88, STATE_VARIABLE_Globals_16);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_26, (MR_Integer) 295, &PregeneratedDist_13);
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
        libs__globals__set_option_4_p_0((MR_Integer) 308, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[2])), STATE_VARIABLE_Globals_32_32, &STATE_VARIABLE_Globals_35_35);
        libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[3])), STATE_VARIABLE_Globals_35_35, &STATE_VARIABLE_Globals_39_39);
        libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_39_39, &STATE_VARIABLE_Globals_43_43);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_43_43, &STATE_VARIABLE_Globals_47_47);
        libs__globals__set_option_4_p_0((MR_Integer) 296, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_47_47, &STATE_VARIABLE_Globals_51_51);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_51_51, &STATE_VARIABLE_Globals_55_55);
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 296, (MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_55_55, &STATE_VARIABLE_Globals_60_60);
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

        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[52]));
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 308, &NumPtagBits0_15);
        succeeded = (NumPtagBits0_15 == (MR_Integer) -1);
        if (succeeded)
          libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_60_60, (MR_Integer) 311, &NumPtagBits_16);
        else
          NumPtagBits_16 = NumPtagBits0_15;
        {
          Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_67, 0) = ((MR_Box) (NumPtagBits_16));
        }
        libs__globals__set_option_4_p_0((MR_Integer) 308, Var_67, STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_68_68);
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
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &libs__handle_options_scalar_common_1[56])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[19])));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[53])));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_74));
          }
          {
            NumPtagBitsSpec_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NumPtagBitsSpec_17, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[17])));
            MR_hl_field(1, NumPtagBitsSpec_17, 1) = ((MR_Box) (Var_71));
          }
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), NumPtagBitsSpec_17, STATE_VARIABLE_Specs_0_28, &STATE_VARIABLE_Specs_89_89);
        }
        libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_68_68, (MR_Integer) 332, &HighLevelCode_18);
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

              libs__globals__set_option_4_p_0((MR_Integer) 336, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_68_68, &STATE_VARIABLE_Globals_93_93);
              libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_93_93, &STATE_VARIABLE_Globals_97_97);
              libs__globals__set_option_4_p_0((MR_Integer) 329, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_97_97, &STATE_VARIABLE_Globals_101_101);
              libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_101_101, &STATE_VARIABLE_Globals_105_105);
            }
            break;
        }
        succeeded = (NumPtagBits_16 >= (MR_Integer) 2);
        if (succeeded)
          libs__globals__set_option_4_p_0((MR_Integer) 344, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_110_110);
        else
          libs__globals__set_option_4_p_0((MR_Integer) 344, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_105_105, &STATE_VARIABLE_Globals_110_110);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_110_110, (MR_Integer) 315, &ArgPackBits0_19);
        libs__globals__lookup_int_option_3_p_0(STATE_VARIABLE_Globals_110_110, (MR_Integer) 309, &BitsPerWord_20);
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
            Var_122 = (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[58]));
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
              MR_hl_field(1, Var_139, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[62])));
              MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_142));
            }
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_139));
            }
            {
              Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_133, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[61])));
              MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_136));
            }
            {
              Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_130, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[15])));
              MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_133));
            }
            {
              Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_127, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[60])));
              MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_130));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[59])));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_127));
            }
            {
              Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_121, 0) = ((MR_Box) (Var_122));
              MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_124));
            }
            {
              ArgPackBitsSpec_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, ArgPackBitsSpec_22, 0) = ((MR_Box) (MR_mkword(3, &libs__handle_options_scalar_common_1[57])));
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
        libs__globals__set_option_4_p_0((MR_Integer) 315, Var_153, STATE_VARIABLE_Globals_110_110, &STATE_VARIABLE_Globals_154_154);
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

        libs__globals__set_option_4_p_0((MR_Integer) 308, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_157_157);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_157_157, &STATE_VARIABLE_Globals_160_160);
        libs__globals__set_option_4_p_0((MR_Integer) 288, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[63])), STATE_VARIABLE_Globals_160_160, &STATE_VARIABLE_Globals_163_163);
        libs__globals__set_option_4_p_0((MR_Integer) 374, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_163_163, &STATE_VARIABLE_Globals_167_167);
        libs__globals__set_option_4_p_0((MR_Integer) 373, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_167_167, &STATE_VARIABLE_Globals_171_171);
        libs__globals__set_option_4_p_0((MR_Integer) 332, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_171_171, &STATE_VARIABLE_Globals_175_175);
        libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_175_175, &STATE_VARIABLE_Globals_179_179);
        libs__globals__set_option_4_p_0((MR_Integer) 329, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_179_179, &STATE_VARIABLE_Globals_183_183);
        libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_183_183, &STATE_VARIABLE_Globals_187_187);
        libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_187_187, &STATE_VARIABLE_Globals_191_191);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_191_191, &STATE_VARIABLE_Globals_195_195);
        libs__globals__set_option_4_p_0((MR_Integer) 335, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_195_195, &STATE_VARIABLE_Globals_199_199);
        libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_199_199, &STATE_VARIABLE_Globals_203_203);
        libs__globals__set_option_4_p_0((MR_Integer) 314, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_203_203, &STATE_VARIABLE_Globals_207_207);
        libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_207_207, &STATE_VARIABLE_Globals_211_211);
        libs__globals__set_option_4_p_0((MR_Integer) 536, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_211_211, &STATE_VARIABLE_Globals_215_215);
        libs__globals__set_option_4_p_0((MR_Integer) 534, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_215_215, &STATE_VARIABLE_Globals_219_219);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[64]));
        libs__globals__set_option_4_p_0((MR_Integer) 635, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[65])), STATE_VARIABLE_Globals_219_219, &STATE_VARIABLE_Globals_225_225);
        libs__globals__set_option_4_p_0((MR_Integer) 344, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_225_225, &STATE_VARIABLE_Globals_231_231);
        libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_231_231, &STATE_VARIABLE_Globals_235_235);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_235_235, &STATE_VARIABLE_Globals_239_239);
        libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_239_239, &STATE_VARIABLE_Globals_243_243);
        libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_243_243, &STATE_VARIABLE_Globals_154_154);
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

        libs__globals__set_option_4_p_0((MR_Integer) 308, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_60_60, &STATE_VARIABLE_Globals_157_264);
        libs__globals__set_gc_method_3_p_0((MR_Integer) 0, STATE_VARIABLE_Globals_157_264, &STATE_VARIABLE_Globals_160_266);
        libs__globals__set_option_4_p_0((MR_Integer) 288, (MR_Word) (MR_mkword(3, &libs__handle_options_scalar_common_1[63])), STATE_VARIABLE_Globals_160_266, &STATE_VARIABLE_Globals_163_269);
        libs__globals__set_option_4_p_0((MR_Integer) 374, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_163_269, &STATE_VARIABLE_Globals_167_272);
        libs__globals__set_option_4_p_0((MR_Integer) 373, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_167_272, &STATE_VARIABLE_Globals_171_275);
        libs__globals__set_option_4_p_0((MR_Integer) 332, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_171_275, &STATE_VARIABLE_Globals_175_278);
        libs__globals__set_option_4_p_0((MR_Integer) 328, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_175_278, &STATE_VARIABLE_Globals_179_281);
        libs__globals__set_option_4_p_0((MR_Integer) 329, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_179_281, &STATE_VARIABLE_Globals_183_284);
        libs__globals__set_option_4_p_0((MR_Integer) 330, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_183_284, &STATE_VARIABLE_Globals_187_287);
        libs__globals__set_option_4_p_0((MR_Integer) 312, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_187_287, &STATE_VARIABLE_Globals_191_290);
        libs__globals__set_option_4_p_0((MR_Integer) 313, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_191_290, &STATE_VARIABLE_Globals_195_293);
        libs__globals__set_option_4_p_0((MR_Integer) 335, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_195_293, &STATE_VARIABLE_Globals_199_296);
        libs__globals__set_option_4_p_0((MR_Integer) 334, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_199_296, &STATE_VARIABLE_Globals_203_299);
        libs__globals__set_option_4_p_0((MR_Integer) 314, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_203_299, &STATE_VARIABLE_Globals_207_302);
        libs__globals__set_option_4_p_0((MR_Integer) 345, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[0])), STATE_VARIABLE_Globals_207_302, &STATE_VARIABLE_Globals_211_305);
        libs__globals__set_option_4_p_0((MR_Integer) 536, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_211_305, &STATE_VARIABLE_Globals_215_308);
        libs__globals__set_option_4_p_0((MR_Integer) 534, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_215_308, &STATE_VARIABLE_Globals_225_312);
        BackendForeignLanguages_14 = (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[66]));
        libs__globals__set_option_4_p_0((MR_Integer) 344, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_225_312, &STATE_VARIABLE_Globals_231_315);
        libs__globals__set_option_4_p_0((MR_Integer) 315, (MR_Word) (MR_mkword(2, &libs__handle_options_scalar_common_2[5])), STATE_VARIABLE_Globals_231_315, &STATE_VARIABLE_Globals_235_318);
        libs__globals__set_option_4_p_0((MR_Integer) 318, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_235_318, &STATE_VARIABLE_Globals_239_321);
        libs__globals__set_option_4_p_0((MR_Integer) 320, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_239_321, &STATE_VARIABLE_Globals_243_324);
        libs__globals__set_option_4_p_0((MR_Integer) 321, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_243_324, &STATE_VARIABLE_Globals_154_154);
        *OT_StringBinarySwitchSize_11 = (MR_Integer) 999999;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      break;
  }
  libs__handle_options__option_implies_5_p_0((MR_Integer) 312, (MR_Integer) 331, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_154_154, &STATE_VARIABLE_Globals_252_252);
  libs__handle_options__option_implies_5_p_0((MR_Integer) 332, (MR_Integer) 331, (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_2[4])), STATE_VARIABLE_Globals_252_252, &STATE_VARIABLE_Globals_257_257);
  libs__globals__lookup_accumulating_option_3_p_0(STATE_VARIABLE_Globals_257_257, (MR_Integer) 337, &CurrentBackendForeignLanguage_23);
  if ((CurrentBackendForeignLanguage_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_261;

    {
      Var_261 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_261, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, Var_261, 1) = ((MR_Box) (BackendForeignLanguages_14));
    }
    libs__globals__set_option_4_p_0((MR_Integer) 337, Var_261, STATE_VARIABLE_Globals_257_257, STATE_VARIABLE_Globals_27);
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

  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 526, &TransOpt_8);
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
          MR_Word InvokedByMMCMake_10 = ((MR_Unsigned) ((MR_hl_field(3, OpMode_6, 1))) & (MR_Integer) 1);

          succeeded = (InvokedByMMCMake_10 == (MR_Integer) 1);
        }
        else
          succeeded = MR_FALSE;
        if (succeeded)
          libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[39])), STATE_VARIABLE_Specs_0_20, &STATE_VARIABLE_Specs_41_41);
        else
          STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_0_20;
      }
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 522, &InterModOpt_12);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 527, &InterModAnalysis_13);
  succeeded = (InterModOpt_12 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (InterModAnalysis_13 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[45])), STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_62_62);
  else
    STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_41_41;
  libs__globals__lookup_maybe_string_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 147, &MaybeStandaloneInt_15);
  libs__globals__lookup_bool_option_3_p_0(STATE_VARIABLE_Globals_0_19, (MR_Integer) 628, &ExtraInitFunctions_16);
  succeeded = (MaybeStandaloneInt_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    succeeded = (ExtraInitFunctions_16 == (MR_Integer) 1);
  if (succeeded)
    libs__compiler_util__add_error_4_p_0((MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &libs__handle_options_scalar_common_1[51])), STATE_VARIABLE_Specs_62_62, STATE_VARIABLE_Specs_21);
  else
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_62_62;
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
