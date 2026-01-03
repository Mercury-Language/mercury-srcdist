/*
** Automatically generated from `make.check_up_to_date.m'
** by the Mercury compiler,
** version rotd-2026-01-03
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


// :- module make.check_up_to_date.
// :- implementation.

/*
INIT mercury__make__check_up_to_date__init
ENDINIT
*/

#include "make.check_up_to_date.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "libs.mih"
#include "list.mih"
#include "make.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_code.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.file_names.mih"
#include "make.get_module_dep_info.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "mdbcomp.feedback.feedback_info.mih"



struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s {
  MR_bool make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded;
  MR_Word make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__DatelessLhsFileTimestamps_25;
  MR_Word make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__DatedLhsFileTimestamps_26;
  jmp_buf make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__commit_0;
  MR_Word make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__Var_94;
  MR_Box make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__conv6_Var_94;
  jmp_buf make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__commit_1;
  MR_Word make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__Var_95;
  MR_Box make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__conv7_Var_95;
};


static const MR_FA_TypeInfo_Struct2 make__check_up_to_date__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0;

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_lhs_result_0_0[1];

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_lhs_result_0_0[1];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_0;

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_1;

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_lhs_result_0_0[1];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_lhs_result_0_1[1];

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_lhs_result_0[2];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_lhs_result_0[2];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_lhs_result_0[2];

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__list__ti_list_1make__make_info__type_ctor_info_target_file_0;

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_make_lhs_files_0_0[4];

static const MR_ConstString make__check_up_to_date__make__check_up_to_date__field_names_make_lhs_files_0_0[4];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_make_lhs_files_0_0;

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_make_lhs_files_0_0[1];

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_make_lhs_files_0[1];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_make_lhs_files_0[1];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_make_lhs_files_0[1];

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_0;

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_1;

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_maybe_found_error_0[2];

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_name_ordered_maybe_found_error_0[2];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_maybe_found_error_0[2];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_0;

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_maybe_oldest_lhs_file_0_1[1];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_1;

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_maybe_oldest_lhs_file_0_0[1];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_maybe_oldest_lhs_file_0_1[1];

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_maybe_oldest_lhs_file_0[2];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_maybe_oldest_lhs_file_0[2];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_maybe_oldest_lhs_file_0[2];

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_0;

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_1;

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_should_rebuild_lhs_0[2];

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_name_ordered_should_rebuild_lhs_0[2];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_should_rebuild_lhs_0[2];

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_target_status_known_file_0_0[3];

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_target_status_known_file_0_0[3];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_known_file_0_0;

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_target_status_known_file_0_0[1];

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_target_status_known_file_0[1];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_target_status_known_file_0[1];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_target_status_known_file_0[1];

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_target_status_result_0_0[3];

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_target_status_result_0_0[3];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_result_0_0;

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_target_status_result_0_0[1];

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_target_status_result_0[1];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_target_status_result_0[1];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_target_status_result_0[1];

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__describe_newer_dependencies__780__1_2_p_0(
  MR_Word OldestLhsFileTimestamp_7,
  MR_Word LambdaHeadVar__1_26);

static MR_String MR_CALL 
make__check_up_to_date__IntroducedFrom__func__rhs_timestamps_missing_msg__713__1_1_f_0(
  MR_Word LambdaHeadVar__1_28);

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__rhs_timestamps_missing_msg__709__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__should_we_rebuild_lhs__350__1_1_p_0(
  MR_Word LambdaHeadVar__1_39);

static void MR_CALL 
make__check_up_to_date____Compare____target_status_known_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____target_status_known_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__check_up_to_date____Compare____maybe_found_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____maybe_found_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__check_up_to_date__describe_target_file_and_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Desc_5);

static void MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0(
  MR_String TargetFileName_6,
  MR_Word OldestLhsFileTimestamp_7,
  MR_Word RhsTargetStatusTuples_8,
  MR_Word RhsTimestamps_9,
  MR_String * Desc_10);

static void MR_CALL 
make__check_up_to_date__describe_target_dependency_status_2_p_0(
  MR_Word TargetTuple_3,
  MR_String * Desc_4);

static void MR_CALL 
make__check_up_to_date__describe_unbuilt_dependencies_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date__describe_unbuilt_dependencies_3_p_0(
  MR_String TargetFileName_4,
  MR_Word UnbuiltDependencies_5,
  MR_String * UnbuiltDependenciesDesc_6);

static void MR_CALL 
make__check_up_to_date__get_target_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word Tuple0_7,
  MR_Word * Tuple_8);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_9(
  void * env_ptr_arg);

static void MR_CALL 
make__check_up_to_date__find_oldest_lhs_file_loop_3_p_0(
  MR_Word LhsMaybeTimestamps_4,
  MR_Word STATE_VARIABLE_OldestLhsTimestamp_0_11,
  MR_Word * MaybeOldestLhsTimestamp_6);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static MR_bool MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static MR_Box MR_CALL 
make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0(
  MR_String TargetFileName_6,
  MR_Word BuildRhsSucceeded_7,
  MR_Word RhsTargetStatusTuples_8,
  MR_Word RhsTimestamps_9,
  MR_String * Msg_10);

static void MR_CALL 
make__check_up_to_date__is_any_rhs_file_newer_than_oldest_lhs_3_p_0(
  MR_Word RhsTimestamps_4,
  MR_Word OldestLhsTimestamp_5,
  MR_Word * Result_6);

static void MR_CALL 
make__check_up_to_date__find_timestamps_and_errors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RhsTimestamps_0_2,
  MR_Word * STATE_VARIABLE_RhsTimestamps_3,
  MR_Word STATE_VARIABLE_FoundError_0_4,
  MR_Word * STATE_VARIABLE_FoundError_5);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____lhs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____lhs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____make_lhs_files_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____make_lhs_files_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____maybe_found_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____maybe_found_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____maybe_oldest_lhs_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____maybe_oldest_lhs_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____should_rebuild_lhs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____should_rebuild_lhs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____target_status_known_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____target_status_known_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____target_status_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____target_status_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__check_up_to_date_scalar_common_1[8][3];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_2[4][2];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_3[2][1];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_4[4][5];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_5[2][6];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_6[3][8];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_7[4][11];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_8[2][4];


struct make__check_up_to_date__vector_common_type_9_0_s {
  const MR_String make__check_up_to_date__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct make__check_up_to_date__vector_common_type_9_0_s make__check_up_to_date_vector_common_9[4];



static /* final */ const MR_Box make__check_up_to_date_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0)),
    ((MR_Box) (&make__check_up_to_date_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[0])),
    ((MR_Box) (make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[1])),
    ((MR_Box) (make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_8[0])),
    ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[1])),
    ((MR_Box) (make__check_up_to_date__describe_unbuilt_dependencies_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[3])),
    ((MR_Box) (make__check_up_to_date__describe_newer_dependencies_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_6[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_7[4][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_id_0)),
    ((MR_Box) (&make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_target_file_0)),
    ((MR_Box) (&make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_auth_dirs_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_8[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_7[3])),
    ((MR_Box) (make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_11)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct make__check_up_to_date__vector_common_type_9_0_s make__check_up_to_date_vector_common_9[4] = {
  /* row   0 */   { (MR_String) "target_status_not_considered" },
  /* row   1 */   { (MR_String) "target_status_being_built" },
  /* row   2 */   { (MR_String) "target_status_up_to_date" },
  /* row   3 */   { (MR_String) "target_status_error" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_FA_TypeInfo_Struct2 make__check_up_to_date__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0),
    (MR_PseudoTypeInfo) (&make__check_up_to_date__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__check_up_to_date__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_target_status_known_file_0__plain_libs__timestamp__type_ctor_info_timestamp_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0),
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)
  }
};

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_lhs_result_0_0[1] = { (MR_PseudoTypeInfo) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_should_rebuild_lhs_0) };

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_lhs_result_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_0 = {
  (MR_String) "can_rebuild_lhs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  make__check_up_to_date__make__check_up_to_date__field_types_lhs_result_0_0,
  NULL,
  make__check_up_to_date__make__check_up_to_date__field_locns_lhs_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_1 = {
  (MR_String) "rhs_error",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_lhs_result_0_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_1 };

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_lhs_result_0_1[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_0 };

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_lhs_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_lhs_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_lhs_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_lhs_result_0[2] = {
  &make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_0,
  &make__check_up_to_date__make__check_up_to_date__du_functor_desc_lhs_result_0_1
};

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_lhs_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_lhs_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__check_up_to_date____Unify____lhs_result_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____lhs_result_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "lhs_result",
  { make__check_up_to_date__make__check_up_to_date__du_name_ordered_lhs_result_0 },
  { make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_lhs_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_lhs_result_0,

};

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__list__ti_list_1make__make_info__type_ctor_info_target_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_file_0) }
};

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_make_lhs_files_0_0[4] = {
  (MR_PseudoTypeInfo) (&make__check_up_to_date__list__ti_list_1make__make_info__type_ctor_info_target_file_0),
  (MR_PseudoTypeInfo) (&make__check_up_to_date__list__ti_list_1make__make_info__type_ctor_info_target_file_0),
  (MR_PseudoTypeInfo) (&make__check_up_to_date__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__check_up_to_date__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString make__check_up_to_date__make__check_up_to_date__field_names_make_lhs_files_0_0[4] = {
  (MR_String) "mlf_dateless_target_files",
  (MR_String) "mlf_dated_target_files",
  (MR_String) "mlf_date_files",
  (MR_String) "mlf_foreign_code_files"
};

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_make_lhs_files_0_0 = {
  (MR_String) "make_lhs_files",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__check_up_to_date__make__check_up_to_date__field_types_make_lhs_files_0_0,
  make__check_up_to_date__make__check_up_to_date__field_names_make_lhs_files_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_make_lhs_files_0_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_make_lhs_files_0_0 };

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_make_lhs_files_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_make_lhs_files_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_make_lhs_files_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_make_lhs_files_0_0 };

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_make_lhs_files_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_make_lhs_files_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__check_up_to_date____Unify____make_lhs_files_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____make_lhs_files_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "make_lhs_files",
  { make__check_up_to_date__make__check_up_to_date__du_name_ordered_make_lhs_files_0 },
  { make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_make_lhs_files_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_make_lhs_files_0,

};

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_0 = {
  (MR_String) "not_found_error",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_1 = {
  (MR_String) "found_error",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_maybe_found_error_0[2] = {
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_0,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_1
};

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_name_ordered_maybe_found_error_0[2] = {
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_1,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_maybe_found_error_0_0
};

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_maybe_found_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_maybe_found_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__check_up_to_date____Unify____maybe_found_error_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____maybe_found_error_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "maybe_found_error",
  { make__check_up_to_date__make__check_up_to_date__enum_name_ordered_maybe_found_error_0 },
  { make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_maybe_found_error_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_maybe_found_error_0,

};

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_0 = {
  (MR_String) "some_lhs_file_is_missing",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_maybe_oldest_lhs_file_0_1[1] = { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) };

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_1 = {
  (MR_String) "all_lhs_files_exist_oldest_timestamp",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  make__check_up_to_date__make__check_up_to_date__field_types_maybe_oldest_lhs_file_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_maybe_oldest_lhs_file_0_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_0 };

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_maybe_oldest_lhs_file_0_1[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_1 };

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_maybe_oldest_lhs_file_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_maybe_oldest_lhs_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_maybe_oldest_lhs_file_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_maybe_oldest_lhs_file_0[2] = {
  &make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_1,
  &make__check_up_to_date__make__check_up_to_date__du_functor_desc_maybe_oldest_lhs_file_0_0
};

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_maybe_oldest_lhs_file_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_maybe_oldest_lhs_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__check_up_to_date____Unify____maybe_oldest_lhs_file_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____maybe_oldest_lhs_file_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "maybe_oldest_lhs_file",
  { make__check_up_to_date__make__check_up_to_date__du_name_ordered_maybe_oldest_lhs_file_0 },
  { make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_maybe_oldest_lhs_file_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_maybe_oldest_lhs_file_0,

};

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_0 = {
  (MR_String) "all_lhs_files_up_to_date",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_1 = {
  (MR_String) "some_lhs_file_needs_rebuilding",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_should_rebuild_lhs_0[2] = {
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_0,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_1
};

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_name_ordered_should_rebuild_lhs_0[2] = {
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_0,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_should_rebuild_lhs_0_1
};

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_should_rebuild_lhs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_should_rebuild_lhs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__check_up_to_date____Unify____should_rebuild_lhs_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____should_rebuild_lhs_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "should_rebuild_lhs",
  { make__check_up_to_date__make__check_up_to_date__enum_name_ordered_should_rebuild_lhs_0 },
  { make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_should_rebuild_lhs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_should_rebuild_lhs_0,

};

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_target_status_known_file_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_status_0)
};

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_target_status_known_file_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_known_file_0_0 = {
  (MR_String) "target_status_known_file",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__check_up_to_date__make__check_up_to_date__field_types_target_status_known_file_0_0,
  NULL,
  make__check_up_to_date__make__check_up_to_date__field_locns_target_status_known_file_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_target_status_known_file_0_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_known_file_0_0 };

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_target_status_known_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_target_status_known_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_target_status_known_file_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_known_file_0_0 };

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_target_status_known_file_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__check_up_to_date____Unify____target_status_known_file_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____target_status_known_file_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "target_status_known_file",
  { make__check_up_to_date__make__check_up_to_date__du_name_ordered_target_status_known_file_0 },
  { make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_target_status_known_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_target_status_known_file_0,

};

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_target_status_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_id_0),
  (MR_PseudoTypeInfo) (&make__check_up_to_date__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_target_status_0)
};

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_target_status_result_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_result_0_0 = {
  (MR_String) "target_status_result",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__check_up_to_date__make__check_up_to_date__field_types_target_status_result_0_0,
  NULL,
  make__check_up_to_date__make__check_up_to_date__field_locns_target_status_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_target_status_result_0_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_result_0_0 };

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_target_status_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_target_status_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_target_status_result_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_target_status_result_0_0 };

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_target_status_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__check_up_to_date____Unify____target_status_result_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____target_status_result_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "target_status_result",
  { make__check_up_to_date__make__check_up_to_date__du_name_ordered_target_status_result_0 },
  { make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_target_status_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_target_status_result_0,

};

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__describe_newer_dependencies__780__1_2_p_0(
  MR_Word OldestLhsFileTimestamp_7,
  MR_Word LambdaHeadVar__1_26)
{
  MR_bool succeeded;
  MR_Word RhsTimestamp_32 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_26, 1))));
  MR_Word Var_40;

  libs__timestamp____Compare____timestamp_0_0(&Var_40, RhsTimestamp_32, OldestLhsFileTimestamp_7);
  succeeded = ((MR_Integer) 2 == Var_40);
  return succeeded;
}

static MR_String MR_CALL 
make__check_up_to_date__IntroducedFrom__func__rhs_timestamps_missing_msg__713__1_1_f_0(
  MR_Word LambdaHeadVar__1_28)
{
  MR_String LambdaHeadVar__2_29 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_28, 1))));

  return LambdaHeadVar__2_29;
}

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__rhs_timestamps_missing_msg__709__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_bool succeeded;
  MR_Word Var_27;

  *LambdaHeadVar__2_26 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_25, 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_25, 1))));
  succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
  return succeeded;
}

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__should_we_rebuild_lhs__350__1_1_p_0(
  MR_Word LambdaHeadVar__1_39)
{
  MR_bool succeeded;
  MR_Word TargetStatus_57 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_39, 2))) & (MR_Integer) 3);

  succeeded = (TargetStatus_57 != (MR_Integer) 2);
  return succeeded;
}

void MR_CALL 
make__check_up_to_date____Compare____target_status_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    make__make_info____Compare____target_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
make__check_up_to_date____Unify____target_status_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);

    succeeded = make__make_info____Unify____target_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&make__check_up_to_date_scalar_common_2[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____target_status_known_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    make__make_info____Compare____target_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_17 < Var_18);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____target_status_known_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 3);

    succeeded = make__make_info____Unify____target_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
make__check_up_to_date____Compare____should_rebuild_lhs_0_0(
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

MR_bool MR_CALL 
make__check_up_to_date____Unify____should_rebuild_lhs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__check_up_to_date____Compare____maybe_oldest_lhs_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    libs__timestamp____Compare____timestamp_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
make__check_up_to_date____Unify____maybe_oldest_lhs_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = libs__timestamp____Unify____timestamp_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____maybe_found_error_0_0(
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
make__check_up_to_date____Unify____maybe_found_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__check_up_to_date____Compare____make_lhs_files_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
make__check_up_to_date____Unify____make_lhs_files_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&make__check_up_to_date_scalar_common_2[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&make__check_up_to_date_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&make__check_up_to_date_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
make__check_up_to_date____Compare____lhs_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
make__check_up_to_date____Unify____lhs_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__describe_target_file_and_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Desc_5)
{
  MR_Word TargetStatusTuple_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Timestamp_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Word TargetId_6 = ((MR_Word) ((MR_hl_field(0, TargetStatusTuple_3, 0))));
  MR_String TargetFileName_7 = ((MR_String) ((MR_hl_field(0, TargetStatusTuple_3, 1))));
  MR_String Var_12;
  MR_String Var_17;
  MR_String Var_22;
  MR_String Var_24;
  MR_String Var_25;
  MR_String Var_27;
  MR_String Var_28;

  Var_12 = mercury__string__string_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), ((MR_Box) (TargetId_6)));
  Var_17 = mercury__string__string_1_f_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (Timestamp_4)));
  Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "\n");
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_22);
  Var_25 = mercury__string__f_43_43_2_f_0(TargetFileName_7, Var_24);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_25);
  Var_28 = mercury__string__f_43_43_2_f_0(Var_12, Var_27);
  *Desc_5 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_28);
}

static void MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Desc_5;

  make__check_up_to_date__describe_target_file_and_timestamp_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Desc_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_Desc_5));
}

static MR_bool MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__check_up_to_date__IntroducedFrom__pred__describe_newer_dependencies__780__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0(
  MR_String TargetFileName_6,
  MR_Word OldestLhsFileTimestamp_7,
  MR_Word RhsTargetStatusTuples_8,
  MR_Word RhsTimestamps_9,
  MR_String * Desc_10)
{
  MR_bool succeeded;
  MR_String Header_11;
  MR_Word RhsTimestampAL_12;
  MR_Word NewerRhsTimestampAL_15;
  MR_Word SortedNewerRhsTimestampAL_16;
  MR_Word NewerDescs_17;
  MR_String Var_23;
  MR_Word Var_25;
  MR_Word Var_29;
  MR_String Var_42;
  MR_String Var_44;

  Var_23 = mercury__string__string_1_f_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), ((MR_Box) (OldestLhsFileTimestamp_7)));
  Var_42 = mercury__string__f_43_43_2_f_0(Var_23, (MR_String) "]: newer dependencies:\n");
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) " [", Var_42);
  Header_11 = mercury__string__f_43_43_2_f_0(TargetFileName_6, Var_44);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), RhsTargetStatusTuples_8, RhsTimestamps_9, &RhsTimestampAL_12);
  {
    Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_25, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_4[2]));
    MR_hl_field(0, Var_25, 1) = ((MR_Box) (make__check_up_to_date__describe_newer_dependencies_5_p_0_1));
    MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_25, 3) = ((MR_Box) (OldestLhsFileTimestamp_7));
  }
  mercury__list__filter_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[2]), Var_25, RhsTimestampAL_12, &NewerRhsTimestampAL_15);
  mercury__list__sort_2_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[2]), NewerRhsTimestampAL_15, &SortedNewerRhsTimestampAL_16);
  mercury__list__map_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[7]), SortedNewerRhsTimestampAL_16, &NewerDescs_17);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Header_11));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (NewerDescs_17));
  }
  mercury__string__append_list_2_p_0(Var_29, Desc_10);
}

static void MR_CALL 
make__check_up_to_date__describe_target_dependency_status_2_p_0(
  MR_Word TargetTuple_3,
  MR_String * Desc_4)
{
  MR_String TargetFileName_6 = ((MR_String) ((MR_hl_field(0, TargetTuple_3, 1))));
  MR_Word TargetStatus_7 = ((MR_Unsigned) ((MR_hl_field(0, TargetTuple_3, 2))) & (MR_Integer) 3);
  MR_String TargetStatusStr_8 = ((&make__check_up_to_date_vector_common_9[0 + TargetStatus_7]))->make__check_up_to_date__vector_common_type_9_0__vct_9_f_0;
  MR_String Var_16;
  MR_String Var_18;
  MR_String Var_19;

  Var_16 = mercury__string__f_43_43_2_f_0(TargetStatusStr_8, (MR_String) "\n");
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) " - ", Var_16);
  Var_19 = mercury__string__f_43_43_2_f_0(TargetFileName_6, Var_18);
  *Desc_4 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_19);
}

static void MR_CALL 
make__check_up_to_date__describe_unbuilt_dependencies_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Desc_4;

  make__check_up_to_date__describe_target_dependency_status_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Desc_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Desc_4));
}

static void MR_CALL 
make__check_up_to_date__describe_unbuilt_dependencies_3_p_0(
  MR_String TargetFileName_4,
  MR_Word UnbuiltDependencies_5,
  MR_String * UnbuiltDependenciesDesc_6)
{
  MR_String Header_7;
  MR_Word UnbuiltDependencyDescs_8;
  MR_Word Var_14;

  Header_7 = mercury__string__f_43_43_2_f_0(TargetFileName_4, (MR_String) ": dependencies could not be built.\n\t");
  mercury__list__map_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[6]), UnbuiltDependencies_5, &UnbuiltDependencyDescs_8);
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Header_7));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (UnbuiltDependencyDescs_8));
  }
  mercury__string__append_list_2_p_0(Var_14, UnbuiltDependenciesDesc_6);
}

static void MR_CALL 
make__check_up_to_date__get_target_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word Tuple0_7,
  MR_Word * Tuple_8)
{
  MR_Word TargetId_10 = ((MR_Word) ((MR_hl_field(0, Tuple0_7, 0))));
  MR_Word MaybeTargetFileName_11 = ((MR_Word) ((MR_hl_field(0, Tuple0_7, 1))));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, Tuple0_7, 2))) & (MR_Integer) 3);
  MR_String TargetFileName_13;

  if ((MaybeTargetFileName_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String _TargetFileNameProposed_14;

    make__file_names__target_id_to_file_name_6_p_0(Globals_6, TargetId_10, &TargetFileName_13, &_TargetFileNameProposed_14);
  }
  else
    TargetFileName_13 = ((MR_String) ((MR_hl_field(1, MaybeTargetFileName_11, 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Tuple_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (TargetId_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (TargetFileName_13));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Status_12));
  }
}

void MR_CALL 
make__check_up_to_date__get_target_id_status_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word TargetId_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_35,
  MR_Word * STATE_VARIABLE_Info_36)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) TargetId_11)) == (MR_Integer) 0))
  {
    MR_Word Target_23 = (MR_Word) ((MR_Word) (TargetId_11));
    MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(0, Target_23, 0))));
    MR_Word FileType_25 = ((MR_Word) ((MR_hl_field(0, Target_23, 1))));

    switch (MR_tag((MR_Word) FileType_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FileType_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 8:
            {
              MR_Word TopTargetFile_28;
              MR_String UpToDateMsg_29;
              MR_Word MaybeTargetFileName_30;
              MR_String TargetFileName_55;
              MR_String _TargetFileNameProposed_26;

              make__file_names__module_target_file_to_file_name_7_p_0(Globals_10, (MR_String) "predicate \140make.check_up_to_date.get_target_id_status\'/8", Target_23, &TargetFileName_55, &_TargetFileNameProposed_26);
              {
                TopTargetFile_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TopTargetFile_28, 0) = ((MR_Box) (ModuleName_24));
                MR_hl_field(0, TopTargetFile_28, 1) = ((MR_Box) (&make__check_up_to_date_scalar_common_3[1]));
              }
              make__util__maybe_warn_up_to_date_target_msg_6_p_0(Globals_10, TopTargetFile_28, TargetFileName_55, STATE_VARIABLE_Info_0_35, STATE_VARIABLE_Info_36, &UpToDateMsg_29);
              make__util__maybe_write_msg_4_p_0(ProgressStream_9, UpToDateMsg_29);
              {
                MaybeTargetFileName_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeTargetFileName_30, 0) = ((MR_Box) (TargetFileName_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *Result_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (TargetId_11));
                MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTargetFileName_30));
                MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
            {
              MR_Word TargetStatusMap0_65;
              MR_Word Status_67;
              MR_Word MaybeTargetFileName_68;
              MR_Word StatusPrime_66;
              MR_Box conv0_StatusPrime_66;

              TargetStatusMap0_65 = make__make_info__make_info_get_target_status_map_1_f_0(STATE_VARIABLE_Info_0_35);
              succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), TargetStatusMap0_65, ((MR_Box) (TargetId_11)), &conv0_StatusPrime_66);
              if (succeeded)
              {
                StatusPrime_66 = ((MR_Word) (conv0_StatusPrime_66));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                Status_67 = StatusPrime_66;
                MaybeTargetFileName_68 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
              }
              else
              {
                MR_String TargetFileName_69;
                MR_Word MaybeModuleDepInfo_71;
                MR_Word TargetStatusMap1_78;
                MR_Word TargetStatusMap_79;
                MR_Word STATE_VARIABLE_Info_1_82;
                MR_Word STATE_VARIABLE_Info_2_84;
                MR_String _TargetFileNameProposed_70;

                make__file_names__module_target_file_to_file_name_7_p_0(Globals_10, (MR_String) "predicate \140make.check_up_to_date.get_target_id_status_main_path\'/10", Target_23, &TargetFileName_69, &_TargetFileNameProposed_70);
                {
                  MaybeTargetFileName_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeTargetFileName_68, 0) = ((MR_Box) (TargetFileName_69));
                }
                make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_24, &MaybeModuleDepInfo_71, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_1_82);
                if ((MaybeModuleDepInfo_71 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Status_67 = (MR_Integer) 3;
                  STATE_VARIABLE_Info_2_84 = STATE_VARIABLE_Info_1_82;
                }
                else
                {
                  MR_Word ModuleDepInfo_72 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_71, 0))));
                  MR_String ModuleDir_73;
                  MR_String Var_96;

                  parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_72, &ModuleDir_73);
                  Var_96 = mercury__dir__this_directory_0_f_0();
                  succeeded = (strcmp(ModuleDir_73, Var_96) == 0);
                  if (succeeded)
                  {
                    Status_67 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_2_84 = STATE_VARIABLE_Info_1_82;
                  }
                  else
                  {
                    MR_Word MaybeTimestamp_74;

                    make__timestamp__get_target_timestamp_search_8_p_0(ProgressStream_9, Globals_10, Target_23, &MaybeTimestamp_74, STATE_VARIABLE_Info_1_82, &STATE_VARIABLE_Info_2_84);
                    if (((MR_tag((MR_Word) MaybeTimestamp_74)) == (MR_Integer) 1))
                    {
                      MR_String Error_76 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_74, 0))));
                      MR_String ErrorMsg_77;
                      MR_String Var_98;
                      MR_String Var_100;
                      MR_String Var_101;

                      Status_67 = (MR_Integer) 3;
                      Var_98 = mercury__string__f_43_43_2_f_0(Error_76, (MR_String) "\n");
                      Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "\' not found: ", Var_98);
                      Var_101 = mercury__string__f_43_43_2_f_0(TargetFileName_69, Var_100);
                      ErrorMsg_77 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: file \140", Var_101);
                      mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_77);
                    }
                    else
                      Status_67 = (MR_Integer) 2;
                  }
                }
                TargetStatusMap1_78 = make__make_info__make_info_get_target_status_map_1_f_0(STATE_VARIABLE_Info_2_84);
                mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), ((MR_Box) (TargetId_11)), ((MR_Box) (Status_67)), TargetStatusMap1_78, &TargetStatusMap_79);
                make__make_info__make_info_set_target_status_map_3_p_0(TargetStatusMap_79, STATE_VARIABLE_Info_2_84, STATE_VARIABLE_Info_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *Result_12 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (TargetId_11));
                MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTargetFileName_68));
                MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Status_67));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word TargetStatusMap0_65;
          MR_Word Status_67;
          MR_Word MaybeTargetFileName_68;
          MR_Word StatusPrime_66;
          MR_Box conv0_StatusPrime_66;

          TargetStatusMap0_65 = make__make_info__make_info_get_target_status_map_1_f_0(STATE_VARIABLE_Info_0_35);
          succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), TargetStatusMap0_65, ((MR_Box) (TargetId_11)), &conv0_StatusPrime_66);
          if (succeeded)
          {
            StatusPrime_66 = ((MR_Word) (conv0_StatusPrime_66));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Status_67 = StatusPrime_66;
            MaybeTargetFileName_68 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
          }
          else
          {
            MR_String TargetFileName_69;
            MR_Word MaybeModuleDepInfo_71;
            MR_Word TargetStatusMap1_78;
            MR_Word TargetStatusMap_79;
            MR_Word STATE_VARIABLE_Info_1_82;
            MR_Word STATE_VARIABLE_Info_2_84;
            MR_String _TargetFileNameProposed_70;

            make__file_names__module_target_file_to_file_name_7_p_0(Globals_10, (MR_String) "predicate \140make.check_up_to_date.get_target_id_status_main_path\'/10", Target_23, &TargetFileName_69, &_TargetFileNameProposed_70);
            {
              MaybeTargetFileName_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeTargetFileName_68, 0) = ((MR_Box) (TargetFileName_69));
            }
            make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_24, &MaybeModuleDepInfo_71, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_1_82);
            if ((MaybeModuleDepInfo_71 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Status_67 = (MR_Integer) 3;
              STATE_VARIABLE_Info_2_84 = STATE_VARIABLE_Info_1_82;
            }
            else
            {
              MR_Word ModuleDepInfo_72 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_71, 0))));
              MR_String ModuleDir_73;
              MR_String Var_96;

              parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_72, &ModuleDir_73);
              Var_96 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(ModuleDir_73, Var_96) == 0);
              if (succeeded)
              {
                Status_67 = (MR_Integer) 0;
                STATE_VARIABLE_Info_2_84 = STATE_VARIABLE_Info_1_82;
              }
              else
              {
                MR_Word MaybeTimestamp_74;

                make__timestamp__get_target_timestamp_search_8_p_0(ProgressStream_9, Globals_10, Target_23, &MaybeTimestamp_74, STATE_VARIABLE_Info_1_82, &STATE_VARIABLE_Info_2_84);
                if (((MR_tag((MR_Word) MaybeTimestamp_74)) == (MR_Integer) 1))
                {
                  MR_String Error_76 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_74, 0))));
                  MR_String ErrorMsg_77;
                  MR_String Var_98;
                  MR_String Var_100;
                  MR_String Var_101;

                  Status_67 = (MR_Integer) 3;
                  Var_98 = mercury__string__f_43_43_2_f_0(Error_76, (MR_String) "\n");
                  Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "\' not found: ", Var_98);
                  Var_101 = mercury__string__f_43_43_2_f_0(TargetFileName_69, Var_100);
                  ErrorMsg_77 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: file \140", Var_101);
                  mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_77);
                }
                else
                  Status_67 = (MR_Integer) 2;
              }
            }
            TargetStatusMap1_78 = make__make_info__make_info_get_target_status_map_1_f_0(STATE_VARIABLE_Info_2_84);
            mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), ((MR_Box) (TargetId_11)), ((MR_Box) (Status_67)), TargetStatusMap1_78, &TargetStatusMap_79);
            make__make_info__make_info_set_target_status_map_3_p_0(TargetStatusMap_79, STATE_VARIABLE_Info_2_84, STATE_VARIABLE_Info_36);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Result_12 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (TargetId_11));
            MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTargetFileName_68));
            MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Status_67));
          }
        }
        break;
    }
  }
  else
  {
    MR_String TargetFileName_15 = ((MR_String) ((MR_hl_field(1, TargetId_11, 0))));
    MR_Word TargetStatusMap0_16;
    MR_Word Status_18;
    MR_Word Var_47;
    MR_Word StatusPrime_17;
    MR_Box conv1_StatusPrime_17;

    TargetStatusMap0_16 = make__make_info__make_info_get_target_status_map_1_f_0(STATE_VARIABLE_Info_0_35);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), TargetStatusMap0_16, ((MR_Box) (TargetId_11)), &conv1_StatusPrime_17);
    if (succeeded)
    {
      StatusPrime_17 = ((MR_Word) (conv1_StatusPrime_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Status_18 = StatusPrime_17;
      *STATE_VARIABLE_Info_36 = STATE_VARIABLE_Info_0_35;
    }
    else
    {
      MR_Word MaybeTimestamp_19;
      MR_Word TargetStatusMap_22;
      MR_Word STATE_VARIABLE_Info_1_39;

      make__timestamp__get_target_id_timestamp_8_p_0(ProgressStream_9, Globals_10, TargetId_11, &MaybeTimestamp_19, STATE_VARIABLE_Info_0_35, &STATE_VARIABLE_Info_1_39);
      if (((MR_tag((MR_Word) MaybeTimestamp_19)) == (MR_Integer) 1))
      {
        MR_String Error_21 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_19, 0))));

        Status_18 = (MR_Integer) 3;
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "** Error: ");
        mercury__io__write_string_4_p_0(ProgressStream_9, Error_21);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
      }
      else
        Status_18 = (MR_Integer) 2;
      mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_status_0), ((MR_Box) (TargetId_11)), ((MR_Box) (Status_18)), TargetStatusMap0_16, &TargetStatusMap_22);
      make__make_info__make_info_set_target_status_map_3_p_0(TargetStatusMap_22, STATE_VARIABLE_Info_1_39, STATE_VARIABLE_Info_36);
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (TargetFileName_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TargetId_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Status_18));
    }
  }
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__3_3;
  MR_Word conv10_HeadVar__4_4;
  MR_Word conv9_HeadVar__6_6;

  make__timestamp__get_file_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)), &conv11_HeadVar__3_3, &conv10_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv9_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__3_3));
  *wrapper_arg_3 = ((MR_Box) (conv10_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv9_HeadVar__6_6));
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_10(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv8_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv8_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv8_HeadVar__3_3));
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  make__timestamp__get_target_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_2(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_4(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__Var_94 = ((MR_Word) ((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__conv6_Var_94));
  make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_3(env_ptr);
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_3(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String ArgX1_103;

    (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__Var_94)) == (MR_Integer) 1);
    if ((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded)
      make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_2(env_ptr);
  }
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_5(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__check_up_to_date_scalar_common_1[0]), &(env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__conv6_Var_94, (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__DatelessLhsFileTimestamps_25, make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_4, env_ptr);
      (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_6(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_8(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__Var_95 = ((MR_Word) ((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__conv7_Var_95));
  make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_7(env_ptr);
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_7(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String ArgX1_109;

    (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__Var_95)) == (MR_Integer) 1);
    if ((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded)
      make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_6(env_ptr);
  }
}

static void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_9(
  void * env_ptr_arg)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s * env_ptr = (struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&make__check_up_to_date_scalar_common_1[0]), &(env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__conv7_Var_95, (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__DatedLhsFileTimestamps_26, make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_8, env_ptr);
      (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = MR_TRUE;
}

void MR_CALL 
make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word TargetFile_14,
  MR_String TargetFileName_15,
  MR_Word MakeLhsFiles_16,
  MR_Word RhsTargetIds_17,
  MR_Word * LhsResult_18,
  MR_Word STATE_VARIABLE_Info_0_41,
  MR_Word * STATE_VARIABLE_Info_42)
{
  struct make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0_s env;

  {
    MR_Word DatelessLhsTargetFiles_21 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_16, 0))));
    MR_Word DatedLhsTargetFiles_22 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_16, 1))));
    MR_Word LhsDateFileNames_23 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_16, 2))));
    MR_Word LhsForeignCodeFileNames_24 = ((MR_Word) ((MR_hl_field(0, MakeLhsFiles_16, 3))));
    MR_Word Var_45;
    MR_Word STATE_VARIABLE_Info_1_46;
    MR_Word STATE_VARIABLE_Info_2_49;
    MR_Box conv3_STATE_VARIABLE_Info_1_46;
    MR_Box conv2_STATE_VARIABLE_IO_1_47;
    MR_Box conv5_STATE_VARIABLE_Info_2_49;
    MR_Box conv4_STATE_VARIABLE_IO_2_50;

    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_7[2]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (ProgressStream_12));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) (Globals_13));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, DatelessLhsTargetFiles_21, &(env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__DatelessLhsFileTimestamps_25, ((MR_Box) (STATE_VARIABLE_Info_0_41)), &conv3_STATE_VARIABLE_Info_1_46, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_1_47);
    STATE_VARIABLE_Info_1_46 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_46));
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, DatedLhsTargetFiles_22, &(env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__DatedLhsFileTimestamps_26, ((MR_Box) (STATE_VARIABLE_Info_1_46)), &conv5_STATE_VARIABLE_Info_2_49, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_2_50);
    STATE_VARIABLE_Info_2_49 = ((MR_Word) (conv5_STATE_VARIABLE_Info_2_49));
    make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_5(&env);
    if (!((env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded))
      make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_9(&env);
    if ((env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded)
    {
      MR_String DebugMsg_29;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;

      {
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_56, 1) = ((MR_Box) (TargetFileName_15));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_53, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_5[0]));
        MR_hl_field(0, Var_53, 1) = ((MR_Box) (make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_10));
        MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_53, 3) = ((MR_Box) ((MR_String) "%s: target file does not exist\n"));
        MR_hl_field(0, Var_53, 4) = ((MR_Box) (Var_55));
      }
      make__util__debug_make_msg_3_p_0(Globals_13, Var_53, &DebugMsg_29);
      make__util__maybe_write_msg_4_p_0(ProgressStream_12, DebugMsg_29);
      *LhsResult_18 = (MR_Word) (MR_mkword(1, &make__check_up_to_date_scalar_common_3[0]));
      *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_2_49;
    }
    else
    {
      MR_Word ForceReanalysis_32;
      MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, 0))));
      MR_Word TargetType_31 = ((MR_Word) ((MR_hl_field(0, TargetFile_14, 1))));

      (env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = (TargetType_31 == (MR_Word) ((MR_Unsigned) 28U));
      if ((env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded)
      {
        MR_Integer Var_114;

        Var_114 = make__make_info__make_info_get_reanalysis_passes_1_f_0(STATE_VARIABLE_Info_2_49);
        (env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded = (Var_114 > (MR_Integer) 0);
        if ((env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__succeeded)
        {
          MR_Word AnalysisStatus_113;

          analysis__operations__do_read_module_overall_status_6_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[1]), ((MR_Box) ((MR_Integer) 0)), Globals_13, ModuleName_30, &AnalysisStatus_113);
          switch (AnalysisStatus_113) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              ForceReanalysis_32 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              ForceReanalysis_32 = (MR_Integer) 0;
              break;
          }
        }
        else
          ForceReanalysis_32 = (MR_Integer) 0;
      }
      else
        ForceReanalysis_32 = (MR_Integer) 0;
      switch (ForceReanalysis_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word LhsDateFileTimestamps_35;
            MR_Word LhsForeignCodeFileTimestamps_37;
            MR_Word AllLhsTimestamps_38;
            MR_Word MaybeOldestLhsTimestamp_39;
            MR_Word STATE_VARIABLE_Info_3_63;
            MR_Word STATE_VARIABLE_Info_4_65;
            MR_Word Var_67;
            MR_Word Var_34;
            MR_Box conv13_STATE_VARIABLE_Info_3_63;
            MR_Box conv12_STATE_VARIABLE_IO_5_64;
            MR_Word Var_36;
            MR_Box conv15_STATE_VARIABLE_Info_4_65;
            MR_Box conv14_STATE_VARIABLE_IO_6_66;

            mercury__list__map2_foldl2_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_2[0]), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__check_up_to_date_scalar_common_8[1]), LhsDateFileNames_23, &Var_34, &LhsDateFileTimestamps_35, ((MR_Box) (STATE_VARIABLE_Info_2_49)), &conv13_STATE_VARIABLE_Info_3_63, ((MR_Box) ((MR_Integer) 0)), &conv12_STATE_VARIABLE_IO_5_64);
            STATE_VARIABLE_Info_3_63 = ((MR_Word) (conv13_STATE_VARIABLE_Info_3_63));
            mercury__list__map2_foldl2_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_2[0]), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&make__check_up_to_date_scalar_common_8[1]), LhsForeignCodeFileNames_24, &Var_36, &LhsForeignCodeFileTimestamps_37, ((MR_Box) (STATE_VARIABLE_Info_3_63)), &conv15_STATE_VARIABLE_Info_4_65, ((MR_Box) ((MR_Integer) 0)), &conv14_STATE_VARIABLE_IO_6_66);
            STATE_VARIABLE_Info_4_65 = ((MR_Word) (conv15_STATE_VARIABLE_Info_4_65));
            Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__check_up_to_date_scalar_common_1[0]), LhsDateFileTimestamps_35, LhsForeignCodeFileTimestamps_37);
            AllLhsTimestamps_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&make__check_up_to_date_scalar_common_1[0]), (env).make__check_up_to_date__must_or_should_we_rebuild_lhs_11_p_0_env_0__DatelessLhsFileTimestamps_25, Var_67);
            if ((AllLhsTimestamps_38 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140make.check_up_to_date.find_oldest_lhs_file\'/2", (MR_String) "LhsMaybeTimestamps = []");
                return;
              }
            else
            {
              MR_Word HeadLhsMaybeTimestamp_118 = ((MR_Word) ((MR_hl_field(1, AllLhsTimestamps_38, 0))));
              MR_Word TailLhsMaybeTimestamps_119 = ((MR_Word) ((MR_hl_field(1, AllLhsTimestamps_38, 1))));

              if (((MR_tag((MR_Word) HeadLhsMaybeTimestamp_118)) == (MR_Integer) 1))
                MaybeOldestLhsTimestamp_39 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word HeadLhsTimestamp_121 = ((MR_Word) ((MR_hl_field(0, HeadLhsMaybeTimestamp_118, 0))));

                make__check_up_to_date__find_oldest_lhs_file_loop_3_p_0(TailLhsMaybeTimestamps_119, HeadLhsTimestamp_121, &MaybeOldestLhsTimestamp_39);
              }
            }
            make__check_up_to_date__should_we_rebuild_lhs_11_p_0(ProgressStream_12, Globals_13, TargetFileName_15, MaybeOldestLhsTimestamp_39, (MR_Integer) 1, RhsTargetIds_17, LhsResult_18, STATE_VARIABLE_Info_4_65, STATE_VARIABLE_Info_42);
          }
          break;
        case (MR_Integer) 1:
          {
            *LhsResult_18 = (MR_Word) (MR_mkword(1, &make__check_up_to_date_scalar_common_3[0]));
            *STATE_VARIABLE_Info_42 = STATE_VARIABLE_Info_2_49;
          }
          break;
      }
    }
  }
}

static void MR_CALL 
make__check_up_to_date__find_oldest_lhs_file_loop_3_p_0(
  MR_Word LhsMaybeTimestamps_4,
  MR_Word STATE_VARIABLE_OldestLhsTimestamp_0_11,
  MR_Word * MaybeOldestLhsTimestamp_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((LhsMaybeTimestamps_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeOldestLhsTimestamp_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (STATE_VARIABLE_OldestLhsTimestamp_0_11));
      }
    else
    {
      MR_Word HeadLhsMaybeTimestamp_7 = ((MR_Word) ((MR_hl_field(1, LhsMaybeTimestamps_4, 0))));
      MR_Word TailLhsMaybeTimestamps_8 = ((MR_Word) ((MR_hl_field(1, LhsMaybeTimestamps_4, 1))));

      if (((MR_tag((MR_Word) HeadLhsMaybeTimestamp_7)) == (MR_Integer) 1))
        *MaybeOldestLhsTimestamp_6 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word HeadLhsTimestamp_10 = ((MR_Word) ((MR_hl_field(0, HeadLhsMaybeTimestamp_7, 0))));
        MR_Word STATE_VARIABLE_OldestLhsTimestamp_1_13;
        MR_Word Var_15;
        MR_Word next_value_of_LhsMaybeTimestamps_4;
        MR_Word next_value_of_STATE_VARIABLE_OldestLhsTimestamp_0_11;

        libs__timestamp____Compare____timestamp_0_0(&Var_15, HeadLhsTimestamp_10, STATE_VARIABLE_OldestLhsTimestamp_0_11);
        succeeded = ((MR_Integer) 1 == Var_15);
        if (succeeded)
          STATE_VARIABLE_OldestLhsTimestamp_1_13 = HeadLhsTimestamp_10;
        else
          STATE_VARIABLE_OldestLhsTimestamp_1_13 = STATE_VARIABLE_OldestLhsTimestamp_0_11;
        // direct tailcall eliminated
        ;
        next_value_of_LhsMaybeTimestamps_4 = TailLhsMaybeTimestamps_8;
        next_value_of_STATE_VARIABLE_OldestLhsTimestamp_0_11 = STATE_VARIABLE_OldestLhsTimestamp_1_13;
        LhsMaybeTimestamps_4 = next_value_of_LhsMaybeTimestamps_4;
        STATE_VARIABLE_OldestLhsTimestamp_0_11 = next_value_of_STATE_VARIABLE_OldestLhsTimestamp_0_11;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv11_UnbuiltDependenciesDesc_6;

  make__check_up_to_date__describe_unbuilt_dependencies_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv11_UnbuiltDependenciesDesc_6);
  *wrapper_arg_1 = ((MR_Box) (conv11_UnbuiltDependenciesDesc_6));
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Tuple_8;

  make__check_up_to_date__get_target_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv9_Tuple_8);
  *wrapper_arg_2 = ((MR_Box) (conv9_Tuple_8));
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_HeadVar__4_4;
  MR_Word conv5_HeadVar__6_6;

  make__timestamp__get_target_id_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv5_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv5_HeadVar__6_6));
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv4_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv4_HeadVar__3_3));
}

static MR_bool MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__check_up_to_date__IntroducedFrom__pred__should_we_rebuild_lhs__350__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Result_12;
  MR_Word conv0_STATE_VARIABLE_Info_36;

  make__check_up_to_date__get_target_id_status_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Result_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_36);
  *wrapper_arg_2 = ((MR_Box) (conv1_Result_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_36));
}

void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_String TargetFileName_14,
  MR_Word MaybeOldestLhsFile_15,
  MR_Word BuildRhsSucceeded_16,
  MR_Word RhsTargetIds_17,
  MR_Word * LhsResult_18,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;
  MR_Word RhsTargetStatusTuples_21;
  MR_Word UnbuiltRhsTargetStatusTuples0_25;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_Info_1_36;
  MR_Box conv3_STATE_VARIABLE_Info_1_36;
  MR_Box conv2_STATE_VARIABLE_IO_1_37;

  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_7[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_11_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ProgressStream_12));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (Globals_13));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, RhsTargetIds_17, &RhsTargetStatusTuples_21, ((MR_Box) (STATE_VARIABLE_Info_0_31)), &conv3_STATE_VARIABLE_Info_1_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_1_37);
  STATE_VARIABLE_Info_1_36 = ((MR_Word) (conv3_STATE_VARIABLE_Info_1_36));
  mercury__list__filter_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[5]), RhsTargetStatusTuples_21, &UnbuiltRhsTargetStatusTuples0_25);
  if ((UnbuiltRhsTargetStatusTuples0_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word RhsMaybeTimestamps_30;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_String DebugMsg_58;
    MR_Box conv8_STATE_VARIABLE_Info_32;
    MR_Box conv7_STATE_VARIABLE_IO_5_51;

    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) (TargetFileName_14));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_5[0]));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_11_p_0_3));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_43, 3) = ((MR_Box) ((MR_String) "%s: finished dependencies\n"));
      MR_hl_field(0, Var_43, 4) = ((MR_Box) (Var_45));
    }
    make__util__debug_make_msg_3_p_0(Globals_13, Var_43, &DebugMsg_58);
    make__util__maybe_write_msg_4_p_0(ProgressStream_12, DebugMsg_58);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_7[1]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_11_p_0_4));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_12));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (Globals_13));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_target_id_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, RhsTargetIds_17, &RhsMaybeTimestamps_30, ((MR_Box) (STATE_VARIABLE_Info_1_36)), &conv8_STATE_VARIABLE_Info_32, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_5_51);
    *STATE_VARIABLE_Info_32 = ((MR_Word) (conv8_STATE_VARIABLE_Info_32));
    make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0(ProgressStream_12, Globals_13, TargetFileName_14, MaybeOldestLhsFile_15, BuildRhsSucceeded_16, RhsTargetStatusTuples_21, RhsMaybeTimestamps_30, LhsResult_18);
  }
  else
  {
    MR_Word UnbuiltRhsTargetStatusTuples_28;
    MR_String DebugMsg_29;
    MR_Word Var_41;
    MR_Word Var_78;
    MR_Box conv10_STATE_VARIABLE_IO_2_40;

    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[0]));
      MR_hl_field(0, Var_78, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_11_p_0_5));
      MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_78, 3) = ((MR_Box) (Globals_13));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, UnbuiltRhsTargetStatusTuples0_25, &UnbuiltRhsTargetStatusTuples_28, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_2_40);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_5[1]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_11_p_0_6));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (TargetFileName_14));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) (UnbuiltRhsTargetStatusTuples_28));
    }
    make__util__debug_make_msg_3_p_0(Globals_13, Var_41, &DebugMsg_29);
    make__util__maybe_write_msg_4_p_0(ProgressStream_12, DebugMsg_29);
    *LhsResult_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_1_36;
  }
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv6_Desc_10;

  make__check_up_to_date__describe_newer_dependencies_5_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), &conv6_Desc_10);
  *wrapper_arg_1 = ((MR_Box) (conv6_Desc_10));
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Tuple_8;

  make__check_up_to_date__get_target_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Tuple_8);
  *wrapper_arg_2 = ((MR_Box) (conv4_Tuple_8));
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Msg_10;

  make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), &conv3_Msg_10);
  *wrapper_arg_1 = ((MR_Box) (conv3_Msg_10));
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Tuple_8;

  make__check_up_to_date__get_target_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Tuple_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_Tuple_8));
}

static void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String TargetFileName_13,
  MR_Word MaybeOldestLhsFile_14,
  MR_Word BuildRhsSucceeded_15,
  MR_Word RhsTargetStatusTuples_16,
  MR_Word RhsMaybeTimestamps_17,
  MR_Word * LhsResult_18)
{
  if ((MaybeOldestLhsFile_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String DebugMsg_20;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35;

    *LhsResult_18 = (MR_Word) (MR_mkword(1, &make__check_up_to_date_scalar_common_3[0]));
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (TargetFileName_13));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_5[0]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_1));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) ((MR_String) "%s does not exist.\n"));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) (Var_34));
    }
    make__util__debug_make_msg_3_p_0(Globals_12, Var_32, &DebugMsg_20);
    make__util__maybe_write_msg_4_p_0(ProgressStream_11, DebugMsg_20);
  }
  else
  {
    MR_Word OldestLhsFileTimestamp_21 = ((MR_Word) ((MR_hl_field(1, MaybeOldestLhsFile_14, 0))));
    MR_Word RhsTimestamps_22;
    MR_Word FoundError_23;

    make__check_up_to_date__find_timestamps_and_errors_5_p_0(RhsMaybeTimestamps_17, (MR_Word) ((MR_Unsigned) 0U), &RhsTimestamps_22, (MR_Integer) 0, &FoundError_23);
    switch (FoundError_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FilledInRhsTargetStatusTuples_24;
          MR_Word Var_50;
          MR_Box conv2_STATE_VARIABLE_IO_2_40;

          *LhsResult_18 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_50, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[0]));
            MR_hl_field(0, Var_50, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_2));
            MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_50, 3) = ((MR_Box) (Globals_12));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_50, RhsTargetStatusTuples_16, &FilledInRhsTargetStatusTuples_24, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_2_40);
          switch (BuildRhsSucceeded_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String MaybeMissingDepsMsg_26;
                MR_Word Var_42;

                {
                  Var_42 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_42, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[1]));
                  MR_hl_field(0, Var_42, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_3));
                  MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 4));
                  MR_hl_field(0, Var_42, 3) = ((MR_Box) (TargetFileName_13));
                  MR_hl_field(0, Var_42, 4) = ((MR_Box) (BuildRhsSucceeded_15));
                  MR_hl_field(0, Var_42, 5) = ((MR_Box) (FilledInRhsTargetStatusTuples_24));
                  MR_hl_field(0, Var_42, 6) = ((MR_Box) (RhsMaybeTimestamps_17));
                }
                make__util__debug_make_msg_3_p_0(Globals_12, Var_42, &MaybeMissingDepsMsg_26);
                make__util__maybe_write_msg_4_p_0(ProgressStream_11, MaybeMissingDepsMsg_26);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String MissingDepsMsg_25;

                make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0(TargetFileName_13, BuildRhsSucceeded_15, FilledInRhsTargetStatusTuples_24, RhsMaybeTimestamps_17, &MissingDepsMsg_25);
                mercury__io__write_string_4_p_0(ProgressStream_11, MissingDepsMsg_25);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Rebuild_27;
          MR_Word ShouldRebuildLhs_28;

          libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 24, &Rebuild_27);
          switch (Rebuild_27) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                make__check_up_to_date__is_any_rhs_file_newer_than_oldest_lhs_3_p_0(RhsTimestamps_22, OldestLhsFileTimestamp_21, &ShouldRebuildLhs_28);
                switch (ShouldRebuildLhs_28) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_46;
                      MR_String DebugMsg_48;
                      MR_Word FilledInRhsTargetStatusTuples_49;
                      MR_Word Var_54;
                      MR_Box conv5_STATE_VARIABLE_IO_5_45;

                      {
                        Var_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_54, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[0]));
                        MR_hl_field(0, Var_54, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_4));
                        MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(0, Var_54, 3) = ((MR_Box) (Globals_12));
                      }
                      mercury__list__map_foldl_5_p_2((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_54, RhsTargetStatusTuples_16, &FilledInRhsTargetStatusTuples_49, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_5_45);
                      {
                        Var_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_46, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[2]));
                        MR_hl_field(0, Var_46, 1) = ((MR_Box) (make__check_up_to_date__should_we_rebuild_lhs_given_timestamps_10_p_0_5));
                        MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 4));
                        MR_hl_field(0, Var_46, 3) = ((MR_Box) (TargetFileName_13));
                        MR_hl_field(0, Var_46, 4) = ((MR_Box) (OldestLhsFileTimestamp_21));
                        MR_hl_field(0, Var_46, 5) = ((MR_Box) (FilledInRhsTargetStatusTuples_49));
                        MR_hl_field(0, Var_46, 6) = ((MR_Box) (RhsTimestamps_22));
                      }
                      make__util__debug_make_msg_3_p_0(Globals_12, Var_46, &DebugMsg_48);
                      make__util__maybe_write_msg_4_p_0(ProgressStream_11, DebugMsg_48);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              ShouldRebuildLhs_28 = (MR_Integer) 1;
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *LhsResult_18 = base;
            MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (ShouldRebuildLhs_28));
          }
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_29;

  conv1_LambdaHeadVar__2_29 = make__check_up_to_date__IntroducedFrom__func__rhs_timestamps_missing_msg__713__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_29));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_26;

  succeeded = make__check_up_to_date__IntroducedFrom__pred__rhs_timestamps_missing_msg__709__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_26);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_26));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__rhs_timestamps_missing_msg_5_p_0(
  MR_String TargetFileName_6,
  MR_Word BuildRhsSucceeded_7,
  MR_Word RhsTargetStatusTuples_8,
  MR_Word RhsTimestamps_9,
  MR_String * Msg_10)
{
  MR_bool succeeded;
  MR_Word RhsTimestampAL_11;
  MR_Word ErrorRhsStatusTuples_15;
  MR_Word ErrorFileNames_20;
  MR_Word SortedErrorFileNames_21;
  MR_String SortedErrorFileNamesStr_22;
  MR_String DoNotExistMsg_23;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_52;

  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), RhsTargetStatusTuples_8, RhsTimestamps_9, &RhsTimestampAL_11);
  mercury__list__filter_map_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[1]), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[3]), RhsTimestampAL_11, &ErrorRhsStatusTuples_15);
  ErrorFileNames_20 = mercury__list__map_2_f_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[4]), ErrorRhsStatusTuples_15);
  mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ErrorFileNames_20, &SortedErrorFileNames_21);
  SortedErrorFileNamesStr_22 = mercury__string__join_list_2_f_0((MR_String) ", ", SortedErrorFileNames_21);
  Var_49 = mercury__string__f_43_43_2_f_0(SortedErrorFileNamesStr_22, (MR_String) "\n");
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "\' do not exist: ", Var_49);
  Var_52 = mercury__string__f_43_43_2_f_0(TargetFileName_6, Var_51);
  DoNotExistMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "** dependencies for \140", Var_52);
  switch (BuildRhsSucceeded_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_10 = DoNotExistMsg_23;
      break;
    case (MR_Integer) 1:
      *Msg_10 = mercury__string__f_43_43_2_f_0(DoNotExistMsg_23, (MR_String) "** This indicates a bug in \140mmc --make\'.\n");
      break;
  }
}

static void MR_CALL 
make__check_up_to_date__is_any_rhs_file_newer_than_oldest_lhs_3_p_0(
  MR_Word RhsTimestamps_4,
  MR_Word OldestLhsTimestamp_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((RhsTimestamps_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_6 = (MR_Integer) 0;
    else
    {
      MR_Word HeadRhsTimestamp_7 = ((MR_Word) ((MR_hl_field(1, RhsTimestamps_4, 0))));
      MR_Word TailRhsTimestamps_8 = ((MR_Word) ((MR_hl_field(1, RhsTimestamps_4, 1))));
      MR_Word Var_11;

      libs__timestamp____Compare____timestamp_0_0(&Var_11, HeadRhsTimestamp_7, OldestLhsTimestamp_5);
      succeeded = ((MR_Integer) 2 == Var_11);
      if (succeeded)
        *Result_6 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_RhsTimestamps_4 = TailRhsTimestamps_8;

        // direct tailcall eliminated
        ;
        RhsTimestamps_4 = next_value_of_RhsTimestamps_4;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
make__check_up_to_date__find_timestamps_and_errors_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RhsTimestamps_0_2,
  MR_Word * STATE_VARIABLE_RhsTimestamps_3,
  MR_Word STATE_VARIABLE_FoundError_0_4,
  MR_Word * STATE_VARIABLE_FoundError_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_FoundError_5 = STATE_VARIABLE_FoundError_0_4;
      *STATE_VARIABLE_RhsTimestamps_3 = STATE_VARIABLE_RhsTimestamps_0_2;
    }
    else
    {
      MR_Word RhsMaybeTimestamp_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word RhsMaybeTimestamps_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_FoundError_1_22;
      MR_Word STATE_VARIABLE_RhsTimestamps_1_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RhsTimestamps_0_2;
      MR_Word next_value_of_STATE_VARIABLE_FoundError_0_4;

      if (((MR_tag((MR_Word) RhsMaybeTimestamp_12)) == (MR_Integer) 1))
      {
        STATE_VARIABLE_FoundError_1_22 = (MR_Integer) 1;
        STATE_VARIABLE_RhsTimestamps_1_23 = STATE_VARIABLE_RhsTimestamps_0_2;
      }
      else
      {
        MR_Word RhsTimestamp_17 = ((MR_Word) ((MR_hl_field(0, RhsMaybeTimestamp_12, 0))));

        {
          STATE_VARIABLE_RhsTimestamps_1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RhsTimestamps_1_23, 0) = ((MR_Box) (RhsTimestamp_17));
          MR_hl_field(1, STATE_VARIABLE_RhsTimestamps_1_23, 1) = ((MR_Box) (STATE_VARIABLE_RhsTimestamps_0_2));
        }
        STATE_VARIABLE_FoundError_1_22 = STATE_VARIABLE_FoundError_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = RhsMaybeTimestamps_13;
      next_value_of_STATE_VARIABLE_RhsTimestamps_0_2 = STATE_VARIABLE_RhsTimestamps_1_23;
      next_value_of_STATE_VARIABLE_FoundError_0_4 = STATE_VARIABLE_FoundError_1_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RhsTimestamps_0_2 = next_value_of_STATE_VARIABLE_RhsTimestamps_0_2;
      STATE_VARIABLE_FoundError_0_4 = next_value_of_STATE_VARIABLE_FoundError_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____lhs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____lhs_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____lhs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____lhs_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____make_lhs_files_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____make_lhs_files_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____make_lhs_files_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____make_lhs_files_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____maybe_found_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____maybe_found_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____maybe_found_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____maybe_found_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____maybe_oldest_lhs_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____maybe_oldest_lhs_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____maybe_oldest_lhs_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____maybe_oldest_lhs_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____should_rebuild_lhs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____should_rebuild_lhs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____should_rebuild_lhs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____should_rebuild_lhs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____target_status_known_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____target_status_known_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____target_status_known_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____target_status_known_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____target_status_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____target_status_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____target_status_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____target_status_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__check_up_to_date__init(void)
{
}

void mercury__make__check_up_to_date__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_lhs_result_0);
  MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_make_lhs_files_0);
  MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_maybe_found_error_0);
  MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_maybe_oldest_lhs_file_0);
  MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_should_rebuild_lhs_0);
  MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_known_file_0);
  MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_target_status_result_0);
}

void mercury__make__check_up_to_date__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__check_up_to_date__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.check_up_to_date.
