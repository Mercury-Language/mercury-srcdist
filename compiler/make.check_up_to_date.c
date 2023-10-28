/*
** Automatically generated from `make.check_up_to_date.m'
** by the Mercury compiler,
** version rotd-2023-10-28
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.deps_set.mih"
#include "make.file_names.mih"
#include "make.get_module_dep_info.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.timestamp.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct2 make__check_up_to_date__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_0;

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_1;

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_2;

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_dependencies_result_0[3];

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_name_ordered_dependencies_result_0[3];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_dependencies_result_0[3];

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_dependency_status_known_file_0_0[3];

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_dependency_status_known_file_0_0[3];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_known_file_0_0;

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_dependency_status_known_file_0_0[1];

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_dependency_status_known_file_0[1];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_dependency_status_known_file_0[1];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_dependency_status_known_file_0[1];

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_dependency_status_result_0_0[3];

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_dependency_status_result_0_0[3];

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_result_0_0;

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_dependency_status_result_0_0[1];

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_dependency_status_result_0[1];

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_dependency_status_result_0[1];

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_dependency_status_result_0[1];

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__describe_newer_dependencies__454__1_2_p_0(
  MR_Word MaybeTimestamp_7,
  MR_Word LambdaHeadVar__1_29);

static MR_String MR_CALL 
make__check_up_to_date__IntroducedFrom__func__check_dependencies_timestamps_missing_deps_msg__350__1_1_f_0(
  MR_Word LambdaHeadVar__1_28);

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__check_dependencies_timestamps_missing_deps_msg__346__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26);

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__check_dependencies__275__1_1_p_0(
  MR_Word LambdaHeadVar__1_39);

static void MR_CALL 
make__check_up_to_date____Compare____dependency_status_known_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____dependency_status_known_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__check_up_to_date__describe_dependency_file_and_timestamp_2_p_0(
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
  MR_Word MaybeTimestamp_7,
  MR_Word DepFileTuples_8,
  MR_Word DepTimestamps_9,
  MR_String * Desc_10);

static void MR_CALL 
make__check_up_to_date__describe_target_dependency_status_2_p_0(
  MR_Word DepTuple_3,
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
make__check_up_to_date__get_dependency_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word Tuple0_7,
  MR_Word * Tuple_8);

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static MR_bool MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static MR_bool MR_CALL 
make__check_up_to_date__newer_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Timestamp_5);

static MR_bool MR_CALL 
make__check_up_to_date__error_in_timestamps_1_p_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0(
  MR_String TargetFileName_6,
  MR_Word BuildDepsSucceeded_7,
  MR_Word DepFileTuples_8,
  MR_Word DepTimestamps_9,
  MR_String * Msg_10);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____dependencies_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____dependencies_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____dependency_status_known_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____dependency_status_known_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__check_up_to_date____Unify____dependency_status_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__check_up_to_date____Compare____dependency_status_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__check_up_to_date_scalar_common_1[7][3];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_2[1][2];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_3[1][1];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_4[4][5];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_5[2][6];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_6[3][8];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_7[2][11];

static /* final */ const MR_Box make__check_up_to_date_scalar_common_8[1][4];


struct make__check_up_to_date__vector_common_type_9_0_s {
  const MR_String make__check_up_to_date__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct make__check_up_to_date__vector_common_type_9_0_s make__check_up_to_date_vector_common_9[4];



static /* final */ const MR_Box make__check_up_to_date_scalar_common_1[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0)),
    ((MR_Box) (&make__check_up_to_date_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[0])),
    ((MR_Box) (make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[1])),
    ((MR_Box) (make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_8[0])),
    ((MR_Box) (make__check_up_to_date__check_dependencies_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[1])),
    ((MR_Box) (make__check_up_to_date__describe_unbuilt_dependencies_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__check_up_to_date_scalar_common_4[3])),
    ((MR_Box) (make__check_up_to_date__describe_newer_dependencies_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
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
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0)),
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
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0)),
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
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0)),
    ((MR_Box) (&make__check_up_to_date__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_7[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0)),
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
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__check_up_to_date_scalar_common_8[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0))
  },
};


static /* final */ const struct make__check_up_to_date__vector_common_type_9_0_s make__check_up_to_date_vector_common_9[4] = {
  /* row   0 */   { (MR_String) "deps_status_not_considered" },
  /* row   1 */   { (MR_String) "deps_status_being_built" },
  /* row   2 */   { (MR_String) "deps_status_up_to_date" },
  /* row   3 */   { (MR_String) "deps_status_error" },
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

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__pair__pti_pair_2__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0),
    (MR_PseudoTypeInfo) (&make__check_up_to_date__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__string__string__type_ctor_info_poly_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_make__check_up_to_date__type_ctor_info_dependency_status_known_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__check_up_to_date__list__pti_list_1__plain_maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__check_up_to_date__maybe__ti_maybe_error_2libs__timestamp__type_ctor_info_timestamp_0builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__check_up_to_date__maybe__pti_maybe_error_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_0 = {
  (MR_String) "deps_up_to_date",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_1 = {
  (MR_String) "deps_out_of_date",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_2 = {
  (MR_String) "deps_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_dependencies_result_0[3] = {
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_0,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_1,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_2
};

static const MR_EnumFunctorDescPtr make__check_up_to_date__make__check_up_to_date__enum_name_ordered_dependencies_result_0[3] = {
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_2,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_1,
  &make__check_up_to_date__make__check_up_to_date__enum_functor_desc_dependencies_result_0_0
};

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_dependencies_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependencies_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__check_up_to_date____Unify____dependencies_result_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____dependencies_result_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "dependencies_result",
  { make__check_up_to_date__make__check_up_to_date__enum_name_ordered_dependencies_result_0 },
  { make__check_up_to_date__make__check_up_to_date__enum_ordinal_ordered_dependencies_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_dependencies_result_0,

};

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_dependency_status_known_file_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
};

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_dependency_status_known_file_0_0[3] = {
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

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_known_file_0_0 = {
  (MR_String) "dependency_status_known_file",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__check_up_to_date__make__check_up_to_date__field_types_dependency_status_known_file_0_0,
  NULL,
  make__check_up_to_date__make__check_up_to_date__field_locns_dependency_status_known_file_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_dependency_status_known_file_0_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_known_file_0_0 };

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_dependency_status_known_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_dependency_status_known_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_dependency_status_known_file_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_known_file_0_0 };

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_dependency_status_known_file_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__check_up_to_date____Unify____dependency_status_known_file_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____dependency_status_known_file_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "dependency_status_known_file",
  { make__check_up_to_date__make__check_up_to_date__du_name_ordered_dependency_status_known_file_0 },
  { make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_dependency_status_known_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_dependency_status_known_file_0,

};

static const MR_FA_TypeInfo_Struct1 make__check_up_to_date__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo make__check_up_to_date__make__check_up_to_date__field_types_dependency_status_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0),
  (MR_PseudoTypeInfo) (&make__check_up_to_date__maybe__ti_maybe_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0)
};

static const MR_DuArgLocn make__check_up_to_date__make__check_up_to_date__field_locns_dependency_status_result_0_0[3] = {
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

static const MR_DuFunctorDesc make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_result_0_0 = {
  (MR_String) "dependency_status_result",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__check_up_to_date__make__check_up_to_date__field_types_dependency_status_result_0_0,
  NULL,
  make__check_up_to_date__make__check_up_to_date__field_locns_dependency_status_result_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_stag_ordered_dependency_status_result_0_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_result_0_0 };

static const MR_DuPtagLayout make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_dependency_status_result_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__check_up_to_date__make__check_up_to_date__du_stag_ordered_dependency_status_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__check_up_to_date__make__check_up_to_date__du_name_ordered_dependency_status_result_0[1] = { &make__check_up_to_date__make__check_up_to_date__du_functor_desc_dependency_status_result_0_0 };

static const MR_Integer make__check_up_to_date__make__check_up_to_date__functor_number_map_dependency_status_result_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__check_up_to_date____Unify____dependency_status_result_0_0_10001)),
  ((MR_Box) (make__check_up_to_date____Compare____dependency_status_result_0_0_10001)),
  (MR_String) "make.check_up_to_date",
  (MR_String) "dependency_status_result",
  { make__check_up_to_date__make__check_up_to_date__du_name_ordered_dependency_status_result_0 },
  { make__check_up_to_date__make__check_up_to_date__du_ptag_ordered_dependency_status_result_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__check_up_to_date__make__check_up_to_date__functor_number_map_dependency_status_result_0,

};

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__describe_newer_dependencies__454__1_2_p_0(
  MR_Word MaybeTimestamp_7,
  MR_Word LambdaHeadVar__1_29)
{
  MR_bool succeeded;
  MR_Word MaybeDepTimestamp_35 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, (MR_Integer) 1))));

  if (((MR_tag((MR_Word) MaybeDepTimestamp_35)) == (MR_Integer) 1))
    succeeded = MR_TRUE;
  else
  {
    MR_Word DepTimestamp_16 = ((MR_Word) ((MR_hl_field(0, MaybeDepTimestamp_35, (MR_Integer) 0))));
    MR_Word Timestamp_17;
    MR_Word Var_30;
    MR_Word Var_43;

    succeeded = ((MR_tag((MR_Word) MaybeTimestamp_7)) == (MR_Integer) 0);
    if (succeeded)
    {
      Timestamp_17 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_7, (MR_Integer) 0))));
      Var_30 = (MR_Integer) 2;
      libs__timestamp____Compare____timestamp_0_0(&Var_43, DepTimestamp_16, Timestamp_17);
      succeeded = (Var_30 == Var_43);
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
make__check_up_to_date__IntroducedFrom__func__check_dependencies_timestamps_missing_deps_msg__350__1_1_f_0(
  MR_Word LambdaHeadVar__1_28)
{
  MR_String LambdaHeadVar__2_29 = ((MR_String) ((MR_hl_field(0, LambdaHeadVar__1_28, (MR_Integer) 1))));

  return LambdaHeadVar__2_29;
}

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__check_dependencies_timestamps_missing_deps_msg__346__1_2_p_0(
  MR_Word LambdaHeadVar__1_25,
  MR_Word * LambdaHeadVar__2_26)
{
  MR_bool succeeded;
  MR_Word Var_27;

  *LambdaHeadVar__2_26 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_25, (MR_Integer) 0))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_25, (MR_Integer) 1))));
  succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
  if (succeeded)
  {
  }
  return succeeded;
}

static MR_bool MR_CALL 
make__check_up_to_date__IntroducedFrom__pred__check_dependencies__275__1_1_p_0(
  MR_Word LambdaHeadVar__1_39)
{
  MR_bool succeeded;
  MR_Word DepStatus_57 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_39, (MR_Integer) 2))) & (MR_Integer) 3);

  succeeded = (DepStatus_57 != (MR_Integer) 2);
  return succeeded;
}

void MR_CALL 
make__check_up_to_date____Compare____dependency_status_result_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    make__make_info____Compare____dependency_file_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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
make__check_up_to_date____Unify____dependency_status_result_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = make__make_info____Unify____dependency_file_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&make__check_up_to_date_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____dependency_status_known_file_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    make__make_info____Compare____dependency_file_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
make__check_up_to_date____Unify____dependency_status_known_file_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

    succeeded = make__make_info____Unify____dependency_file_0_0(ArgX1_3, ArgY1_4);
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
make__check_up_to_date____Compare____dependencies_result_0_0(
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
make__check_up_to_date____Unify____dependencies_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__describe_dependency_file_and_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Desc_5)
{
  MR_Word DepFileTuple_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word MaybeTimestamp_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word DepFile_6 = ((MR_Word) ((MR_hl_field(0, DepFileTuple_3, (MR_Integer) 0))));
  MR_String DepFileName_7 = ((MR_String) ((MR_hl_field(0, DepFileTuple_3, (MR_Integer) 1))));
  MR_String Var_12;
  MR_String Var_17;
  MR_String Var_22;
  MR_String Var_24;
  MR_String Var_25;
  MR_String Var_27;
  MR_String Var_28;

  Var_12 = mercury__string__string_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), ((MR_Box) (DepFile_6)));
  Var_17 = mercury__string__string_1_f_0((MR_Word) (&make__check_up_to_date_scalar_common_1[0]), ((MR_Box) (MaybeTimestamp_4)));
  Var_22 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "\n");
  Var_24 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_22);
  Var_25 = mercury__string__f_43_43_2_f_0(DepFileName_7, Var_24);
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

  make__check_up_to_date__describe_dependency_file_and_timestamp_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Desc_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_Desc_5));
}

static MR_bool MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__check_up_to_date__IntroducedFrom__pred__describe_newer_dependencies__454__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__describe_newer_dependencies_5_p_0(
  MR_String TargetFileName_6,
  MR_Word MaybeTimestamp_7,
  MR_Word DepFileTuples_8,
  MR_Word DepTimestamps_9,
  MR_String * Desc_10)
{
  MR_bool succeeded;
  MR_String Header_11;
  MR_Word DepTimestampAL_12;
  MR_Word NewerDepsAL0_18;
  MR_Word NewerDepsAL_19;
  MR_Word NewerDepsDescs_20;
  MR_String Var_26;
  MR_Word Var_28;
  MR_Word Var_32;
  MR_String Var_45;
  MR_String Var_47;

  Var_26 = mercury__string__string_1_f_0((MR_Word) (&make__check_up_to_date_scalar_common_1[0]), ((MR_Box) (MaybeTimestamp_7)));
  Var_45 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) "]: newer dependencies:\n");
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " [", Var_45);
  Header_11 = mercury__string__f_43_43_2_f_0(TargetFileName_6, Var_47);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), DepFileTuples_8, DepTimestamps_9, &DepTimestampAL_12);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_4[2]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (make__check_up_to_date__describe_newer_dependencies_5_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (MaybeTimestamp_7));
  }
  mercury__list__filter_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[1]), Var_28, DepTimestampAL_12, &NewerDepsAL0_18);
  mercury__list__sort_2_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[1]), NewerDepsAL0_18, &NewerDepsAL_19);
  mercury__list__map_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[6]), NewerDepsAL_19, &NewerDepsDescs_20);
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Header_11));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (NewerDepsDescs_20));
  }
  mercury__string__append_list_2_p_0(Var_32, Desc_10);
}

static void MR_CALL 
make__check_up_to_date__describe_target_dependency_status_2_p_0(
  MR_Word DepTuple_3,
  MR_String * Desc_4)
{
  MR_String DepTargetFileName_6 = ((MR_String) ((MR_hl_field(0, DepTuple_3, (MR_Integer) 1))));
  MR_Word DepStatus_7 = ((MR_Unsigned) ((MR_hl_field(0, DepTuple_3, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_String DepStatusStr_8 = ((&make__check_up_to_date_vector_common_9[0 + DepStatus_7]))->make__check_up_to_date__vector_common_type_9_0__vct_9_f_0;
  MR_String Var_16;
  MR_String Var_18;
  MR_String Var_19;

  Var_16 = mercury__string__f_43_43_2_f_0(DepStatusStr_8, (MR_String) "\n");
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) " - ", Var_16);
  Var_19 = mercury__string__f_43_43_2_f_0(DepTargetFileName_6, Var_18);
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
  mercury__list__map_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[5]), UnbuiltDependencies_5, &UnbuiltDependencyDescs_8);
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Header_7));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (UnbuiltDependencyDescs_8));
  }
  mercury__string__append_list_2_p_0(Var_14, UnbuiltDependenciesDesc_6);
}

static void MR_CALL 
make__check_up_to_date__get_dependency_file_name_5_p_0(
  MR_Word Globals_6,
  MR_Word Tuple0_7,
  MR_Word * Tuple_8)
{
  MR_Word Dep_10 = ((MR_Word) ((MR_hl_field(0, Tuple0_7, (MR_Integer) 0))));
  MR_Word MaybeTargetFileName_11 = ((MR_Word) ((MR_hl_field(0, Tuple0_7, (MR_Integer) 1))));
  MR_Word Status_12 = ((MR_Unsigned) ((MR_hl_field(0, Tuple0_7, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_String TargetFileName_13;

  if ((MaybeTargetFileName_11 == (MR_Word) ((MR_Unsigned) 0U)))
    make__file_names__dependency_file_to_file_name_5_p_0(Globals_6, Dep_10, &TargetFileName_13);
  else
    TargetFileName_13 = ((MR_String) ((MR_hl_field(1, MaybeTargetFileName_11, (MR_Integer) 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Tuple_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Dep_10));
    MR_hl_field(0, base, 1) = ((MR_Box) (TargetFileName_13));
    MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Status_12));
  }
}

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_6(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv11_UnbuiltDependenciesDesc_6;

  make__check_up_to_date__describe_unbuilt_dependencies_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv11_UnbuiltDependenciesDesc_6);
  *wrapper_arg_1 = ((MR_Box) (conv11_UnbuiltDependenciesDesc_6));
}

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Tuple_8;

  make__check_up_to_date__get_dependency_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv9_Tuple_8);
  *wrapper_arg_2 = ((MR_Box) (conv9_Tuple_8));
}

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_4(
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

  make__timestamp__get_dependency_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv5_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv6_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv5_HeadVar__6_6));
}

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv4_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv4_HeadVar__3_3));
}

static MR_bool MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__check_up_to_date__IntroducedFrom__pred__check_dependencies__275__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0_1(
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
  MR_Word conv0_STATE_VARIABLE_Info_43;

  make__check_up_to_date__get_dependency_file_status_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_Result_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Info_43);
  *wrapper_arg_2 = ((MR_Box) (conv1_Result_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Info_43));
}

void MR_CALL 
make__check_up_to_date__check_dependencies_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_String TargetFileName_14,
  MR_Word MaybeTimestamp_15,
  MR_Word BuildDepsSucceeded_16,
  MR_Word DepFiles_17,
  MR_Word * DepsResult_18,
  MR_Word STATE_VARIABLE_Info_0_31,
  MR_Word * STATE_VARIABLE_Info_32)
{
  MR_bool succeeded;
  MR_Word DepStatusTuples_21;
  MR_Word UnbuiltDependencyTuples0_25;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_Info_36_36;
  MR_Box conv3_STATE_VARIABLE_Info_36_36;
  MR_Box conv2_STATE_VARIABLE_IO_37_37;

  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_7[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (make__check_up_to_date__check_dependencies_11_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (ProgressStream_12));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (Globals_13));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, DepFiles_17, &DepStatusTuples_21, ((MR_Box) (STATE_VARIABLE_Info_0_31)), &conv3_STATE_VARIABLE_Info_36_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37_37);
  STATE_VARIABLE_Info_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_Info_36_36));
  mercury__list__filter_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[4]), DepStatusTuples_21, &UnbuiltDependencyTuples0_25);
  if ((UnbuiltDependencyTuples0_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word DepTimestamps_30;
    MR_Word Var_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_String DebugMsg_58;
    MR_Box conv8_STATE_VARIABLE_Info_32;
    MR_Box conv7_STATE_VARIABLE_IO_51_51;

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
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (make__check_up_to_date__check_dependencies_11_p_0_3));
      MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_43, 3) = ((MR_Box) ((MR_String) "%s: finished dependencies\n"));
      MR_hl_field(0, Var_43, 4) = ((MR_Box) (Var_45));
    }
    make__util__debug_make_msg_3_p_0(Globals_13, Var_43, &DebugMsg_58);
    make__util__maybe_write_msg_4_p_0(ProgressStream_12, DebugMsg_58);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_7[1]));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__check_up_to_date__check_dependencies_11_p_0_4));
      MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_49, 3) = ((MR_Box) (ProgressStream_12));
      MR_hl_field(0, Var_49, 4) = ((MR_Box) (Globals_13));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, DepFiles_17, &DepTimestamps_30, ((MR_Box) (STATE_VARIABLE_Info_36_36)), &conv8_STATE_VARIABLE_Info_32, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_51_51);
    *STATE_VARIABLE_Info_32 = ((MR_Word) (conv8_STATE_VARIABLE_Info_32));
    make__check_up_to_date__check_dependency_timestamps_10_p_0(ProgressStream_12, Globals_13, TargetFileName_14, MaybeTimestamp_15, BuildDepsSucceeded_16, DepStatusTuples_21, DepTimestamps_30, DepsResult_18);
  }
  else
  {
    MR_Word UnbuiltDependencyTuples_28;
    MR_String DebugMsg_29;
    MR_Word Var_41;
    MR_Word Var_78;
    MR_Box conv10_STATE_VARIABLE_IO_40_40;

    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_78, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[0]));
      MR_hl_field(0, Var_78, 1) = ((MR_Box) (make__check_up_to_date__check_dependencies_11_p_0_5));
      MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_78, 3) = ((MR_Box) (Globals_13));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_78, UnbuiltDependencyTuples0_25, &UnbuiltDependencyTuples_28, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_40_40);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_41, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_5[1]));
      MR_hl_field(0, Var_41, 1) = ((MR_Box) (make__check_up_to_date__check_dependencies_11_p_0_6));
      MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_41, 3) = ((MR_Box) (TargetFileName_14));
      MR_hl_field(0, Var_41, 4) = ((MR_Box) (UnbuiltDependencyTuples_28));
    }
    make__util__debug_make_msg_3_p_0(Globals_13, Var_41, &DebugMsg_29);
    make__util__maybe_write_msg_4_p_0(ProgressStream_12, DebugMsg_29);
    *DepsResult_18 = (MR_Integer) 2;
    *STATE_VARIABLE_Info_32 = STATE_VARIABLE_Info_36_36;
  }
}

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_5(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv6_Desc_10;

  make__check_up_to_date__describe_newer_dependencies_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &conv6_Desc_10);
  *wrapper_arg_1 = ((MR_Box) (conv6_Desc_10));
}

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Tuple_8;

  make__check_up_to_date__get_dependency_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Tuple_8);
  *wrapper_arg_2 = ((MR_Box) (conv4_Tuple_8));
}

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_3(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv3_Msg_10;

  make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), &conv3_Msg_10);
  *wrapper_arg_1 = ((MR_Box) (conv3_Msg_10));
}

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Tuple_8;

  make__check_up_to_date__get_dependency_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Tuple_8);
  *wrapper_arg_2 = ((MR_Box) (conv1_Tuple_8));
}

static void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  mercury__string__format_3_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
make__check_up_to_date__check_dependency_timestamps_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_String TargetFileName_13,
  MR_Word MaybeTimestamp_14,
  MR_Word BuildDepsSucceeded_15,
  MR_Word DepFileTuples0_16,
  MR_Word DepTimestamps_17,
  MR_Word * DepsResult_18)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) MaybeTimestamp_14)) == (MR_Integer) 1))
  {
    MR_String DebugMsg_21;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_Word Var_32;

    *DepsResult_18 = (MR_Integer) 1;
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (TargetFileName_13));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_5[0]));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (make__check_up_to_date__check_dependency_timestamps_10_p_0_1));
      MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_29, 3) = ((MR_Box) ((MR_String) "%s does not exist.\n"));
      MR_hl_field(0, Var_29, 4) = ((MR_Box) (Var_31));
    }
    make__util__debug_make_msg_3_p_0(Globals_12, Var_29, &DebugMsg_21);
    make__util__maybe_write_msg_4_p_0(ProgressStream_11, DebugMsg_21);
  }
  else
  {
    MR_Word Timestamp_22 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_14, (MR_Integer) 0))));

    succeeded = make__check_up_to_date__error_in_timestamps_1_p_0(DepTimestamps_17);
    if (succeeded)
    {
      MR_Word DepFileTuples_23;
      MR_Word Var_45;
      MR_Box conv2_STATE_VARIABLE_IO_35_35;

      *DepsResult_18 = (MR_Integer) 2;
      {
        Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_45, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[0]));
        MR_hl_field(0, Var_45, 1) = ((MR_Box) (make__check_up_to_date__check_dependency_timestamps_10_p_0_2));
        MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_45, 3) = ((MR_Box) (Globals_12));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, DepFileTuples0_16, &DepFileTuples_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_35_35);
      switch (BuildDepsSucceeded_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String MaybeMissingDepsMsg_25;
            MR_Word Var_37;

            {
              Var_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_37, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[1]));
              MR_hl_field(0, Var_37, 1) = ((MR_Box) (make__check_up_to_date__check_dependency_timestamps_10_p_0_3));
              MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 4));
              MR_hl_field(0, Var_37, 3) = ((MR_Box) (TargetFileName_13));
              MR_hl_field(0, Var_37, 4) = ((MR_Box) (BuildDepsSucceeded_15));
              MR_hl_field(0, Var_37, 5) = ((MR_Box) (DepFileTuples_23));
              MR_hl_field(0, Var_37, 6) = ((MR_Box) (DepTimestamps_17));
            }
            make__util__debug_make_msg_3_p_0(Globals_12, Var_37, &MaybeMissingDepsMsg_25);
            make__util__maybe_write_msg_4_p_0(ProgressStream_11, MaybeMissingDepsMsg_25);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String MissingDepsMsg_24;

            make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0(TargetFileName_13, BuildDepsSucceeded_15, DepFileTuples_23, DepTimestamps_17, &MissingDepsMsg_24);
            mercury__io__write_string_4_p_0(ProgressStream_11, MissingDepsMsg_24);
          }
          break;
      }
    }
    else
    {
      MR_Word Rebuild_26;

      libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 666, &Rebuild_26);
      switch (Rebuild_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            succeeded = make__check_up_to_date__newer_timestamp_2_p_0(DepTimestamps_17, Timestamp_22);
            if (succeeded)
            {
              MR_Word Var_41;
              MR_String DebugMsg_43;
              MR_Word DepFileTuples_44;
              MR_Word Var_49;
              MR_Box conv5_STATE_VARIABLE_IO_40_40;

              {
                Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_49, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[0]));
                MR_hl_field(0, Var_49, 1) = ((MR_Box) (make__check_up_to_date__check_dependency_timestamps_10_p_0_4));
                MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(0, Var_49, 3) = ((MR_Box) (Globals_12));
              }
              mercury__list__map_foldl_5_p_2((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_49, DepFileTuples0_16, &DepFileTuples_44, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_40_40);
              {
                Var_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_41, 0) = ((MR_Box) (&make__check_up_to_date_scalar_common_6[2]));
                MR_hl_field(0, Var_41, 1) = ((MR_Box) (make__check_up_to_date__check_dependency_timestamps_10_p_0_5));
                MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 4));
                MR_hl_field(0, Var_41, 3) = ((MR_Box) (TargetFileName_13));
                MR_hl_field(0, Var_41, 4) = ((MR_Box) (MaybeTimestamp_14));
                MR_hl_field(0, Var_41, 5) = ((MR_Box) (DepFileTuples_44));
                MR_hl_field(0, Var_41, 6) = ((MR_Box) (DepTimestamps_17));
              }
              make__util__debug_make_msg_3_p_0(Globals_12, Var_41, &DebugMsg_43);
              make__util__maybe_write_msg_4_p_0(ProgressStream_11, DebugMsg_43);
              *DepsResult_18 = (MR_Integer) 1;
            }
            else
              *DepsResult_18 = (MR_Integer) 0;
          }
          break;
        case (MR_Integer) 1:
          *DepsResult_18 = (MR_Integer) 1;
          break;
      }
    }
  }
}

static MR_bool MR_CALL 
make__check_up_to_date__newer_timestamp_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Timestamp_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word H_3;
    MR_Word T_4;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      H_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      {
        MR_Word DepTimestamp_6;
        MR_Word Var_7;
        MR_Word Var_9;

        succeeded = ((MR_tag((MR_Word) H_3)) == (MR_Integer) 0);
        if (succeeded)
        {
          DepTimestamp_6 = ((MR_Word) ((MR_hl_field(0, H_3, (MR_Integer) 0))));
          Var_7 = (MR_Integer) 2;
          libs__timestamp____Compare____timestamp_0_0(&Var_9, DepTimestamp_6, Timestamp_5);
          succeeded = (Var_7 == Var_9);
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = T_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
make__check_up_to_date__error_in_timestamps_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word H_2;
    MR_Word T_3;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      H_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      T_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) H_2)) == (MR_Integer) 1);
      if (succeeded)
      {
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = T_3;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Box MR_CALL 
make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_LambdaHeadVar__2_29;

  conv1_LambdaHeadVar__2_29 = make__check_up_to_date__IntroducedFrom__func__check_dependencies_timestamps_missing_deps_msg__350__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_29));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_26;

  succeeded = make__check_up_to_date__IntroducedFrom__pred__check_dependencies_timestamps_missing_deps_msg__346__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_26);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_26));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date__check_dependencies_timestamps_missing_deps_msg_5_p_0(
  MR_String TargetFileName_6,
  MR_Word BuildDepsSucceeded_7,
  MR_Word DepFileTuples_8,
  MR_Word DepTimestamps_9,
  MR_String * Msg_10)
{
  MR_bool succeeded;
  MR_Word DepTimestampAL_11;
  MR_Word ErrorDepTuples_15;
  MR_Word ErrorFileNames_20;
  MR_Word SortedErrorFileNames_21;
  MR_String SortedErrorFileNamesStr_22;
  MR_String DoNotExistMsg_23;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_52;

  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[0]), DepFileTuples_8, DepTimestamps_9, &DepTimestampAL_11);
  mercury__list__filter_map_3_p_0((MR_Word) (&make__check_up_to_date_scalar_common_1[1]), (MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[2]), DepTimestampAL_11, &ErrorDepTuples_15);
  ErrorFileNames_20 = mercury__list__map_2_f_0((MR_Word) (&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__check_up_to_date_scalar_common_1[3]), ErrorDepTuples_15);
  mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ErrorFileNames_20, &SortedErrorFileNames_21);
  SortedErrorFileNamesStr_22 = mercury__string__join_list_2_f_0((MR_String) ", ", SortedErrorFileNames_21);
  Var_49 = mercury__string__f_43_43_2_f_0(SortedErrorFileNamesStr_22, (MR_String) "\n");
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "\' do not exist: ", Var_49);
  Var_52 = mercury__string__f_43_43_2_f_0(TargetFileName_6, Var_51);
  DoNotExistMsg_23 = mercury__string__f_43_43_2_f_0((MR_String) "** dependencies for \140", Var_52);
  switch (BuildDepsSucceeded_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Msg_10 = DoNotExistMsg_23;
      break;
    case (MR_Integer) 1:
      *Msg_10 = mercury__string__f_43_43_2_f_0(DoNotExistMsg_23, (MR_String) "** This indicates a bug in \140mmc --make\'.\n");
      break;
  }
}

void MR_CALL 
make__check_up_to_date__get_dependency_file_status_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Dep_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_Info_0_42,
  MR_Word * STATE_VARIABLE_Info_43)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Dep_11)) == (MR_Integer) 1))
  {
    MR_String TargetFileName_15 = ((MR_String) ((MR_hl_field(1, Dep_11, (MR_Integer) 0))));
    MR_Word DepStatusMap0_16;
    MR_Word Status_18;
    MR_Word Var_54;
    MR_Word StatusPrime_17;
    MR_Box conv0_StatusPrime_17;

    DepStatusMap0_16 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_42);
    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusMap0_16, ((MR_Box) (Dep_11)), &conv0_StatusPrime_17);
    if (succeeded)
    {
      StatusPrime_17 = ((MR_Word) (conv0_StatusPrime_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      Status_18 = StatusPrime_17;
      *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
    }
    else
    {
      MR_Word MaybeTimestamp_19;
      MR_Word DepStatusMap_22;
      MR_Word STATE_VARIABLE_Info_46_46;

      make__timestamp__get_dependency_timestamp_8_p_0(ProgressStream_9, Globals_10, Dep_11, &MaybeTimestamp_19, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_46_46);
      if (((MR_tag((MR_Word) MaybeTimestamp_19)) == (MR_Integer) 1))
      {
        MR_String Error_21 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_19, (MR_Integer) 0))));

        Status_18 = (MR_Integer) 3;
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "** Error: ");
        mercury__io__write_string_4_p_0(ProgressStream_9, Error_21);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
      }
      else
        Status_18 = (MR_Integer) 2;
      mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_11)), ((MR_Box) (Status_18)), DepStatusMap0_16, &DepStatusMap_22);
      make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_22, STATE_VARIABLE_Info_46_46, STATE_VARIABLE_Info_43);
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (TargetFileName_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Dep_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_54));
      MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Status_18));
    }
  }
  else
  {
    MR_Word Target_23 = (MR_Word) ((MR_Word) (Dep_11));
    MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(0, Target_23, (MR_Integer) 0))));
    MR_Word FileType_25 = ((MR_Word) ((MR_hl_field(0, Target_23, (MR_Integer) 1))));
    MR_Word MaybeTargetFileName_28;
    MR_Word Status_110;

    switch (MR_tag((MR_Word) FileType_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FileType_25)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 8:
            {
              MR_Word TopTargetFile_27;
              MR_String UpToDateMsg_29;
              MR_String TargetFileName_75;

              {
                TopTargetFile_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TopTargetFile_27, 0) = ((MR_Box) (ModuleName_24));
                MR_hl_field(0, TopTargetFile_27, 1) = ((MR_Box) (&make__check_up_to_date_scalar_common_3[0]));
              }
              make__file_names__get_make_target_file_name_6_p_0(Globals_10, (MR_String) "predicate \140make.check_up_to_date.get_dependency_file_status\'/8", Target_23, &TargetFileName_75);
              {
                MaybeTargetFileName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeTargetFileName_28, 0) = ((MR_Box) (TargetFileName_75));
              }
              make__util__maybe_warn_up_to_date_target_msg_6_p_0(Globals_10, TopTargetFile_27, TargetFileName_75, STATE_VARIABLE_Info_0_42, STATE_VARIABLE_Info_43, &UpToDateMsg_29);
              make__util__maybe_write_msg_4_p_0(ProgressStream_9, UpToDateMsg_29);
              Status_110 = (MR_Integer) 2;
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
              MR_Word DepStatusMap0_96;
              MR_Word StatusPrime_91;
              MR_Box conv1_StatusPrime_91;

              DepStatusMap0_96 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_42);
              succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusMap0_96, ((MR_Box) (Dep_11)), &conv1_StatusPrime_91);
              if (succeeded)
              {
                StatusPrime_91 = ((MR_Word) (conv1_StatusPrime_91));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                Status_110 = StatusPrime_91;
                MaybeTargetFileName_28 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
              }
              else
              {
                MR_Word MaybeModuleDepInfo_36;
                MR_Word DepStatusMap1_41;
                MR_Word STATE_VARIABLE_Info_62_62;
                MR_Word STATE_VARIABLE_Info_65_65;
                MR_String TargetFileName_86;
                MR_Word DepStatusMap_89;

                make__file_names__get_make_target_file_name_6_p_0(Globals_10, (MR_String) "predicate \140make.check_up_to_date.get_dependency_file_status\'/8", Target_23, &TargetFileName_86);
                {
                  MaybeTargetFileName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeTargetFileName_28, 0) = ((MR_Box) (TargetFileName_86));
                }
                make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_24, &MaybeModuleDepInfo_36, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_62_62);
                if ((MaybeModuleDepInfo_36 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Status_110 = (MR_Integer) 3;
                  STATE_VARIABLE_Info_65_65 = STATE_VARIABLE_Info_62_62;
                }
                else
                {
                  MR_Word ModuleDepInfo_37 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_36, (MR_Integer) 0))));
                  MR_String ModuleDir_38;
                  MR_String Var_119;

                  parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_37, &ModuleDir_38);
                  Var_119 = mercury__dir__this_directory_0_f_0();
                  succeeded = (strcmp(ModuleDir_38, Var_119) == 0);
                  if (succeeded)
                  {
                    Status_110 = (MR_Integer) 0;
                    STATE_VARIABLE_Info_65_65 = STATE_VARIABLE_Info_62_62;
                  }
                  else
                  {
                    MR_Word MaybeTimestamp_78;

                    make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 1, Target_23, &MaybeTimestamp_78, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_65_65);
                    if (((MR_tag((MR_Word) MaybeTimestamp_78)) == (MR_Integer) 1))
                    {
                      MR_String ErrorMsg_40;
                      MR_String Error_76 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_78, (MR_Integer) 0))));
                      MR_String Var_121;
                      MR_String Var_123;
                      MR_String Var_124;

                      Status_110 = (MR_Integer) 3;
                      Var_121 = mercury__string__f_43_43_2_f_0(Error_76, (MR_String) "\n");
                      Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "\' not found: ", Var_121);
                      Var_124 = mercury__string__f_43_43_2_f_0(TargetFileName_86, Var_123);
                      ErrorMsg_40 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: file \140", Var_124);
                      mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_40);
                    }
                    else
                      Status_110 = (MR_Integer) 2;
                  }
                }
                DepStatusMap1_41 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_65_65);
                mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_11)), ((MR_Box) (Status_110)), DepStatusMap1_41, &DepStatusMap_89);
                make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_89, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_43);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word DepStatusMap0_96;
          MR_Word StatusPrime_91;
          MR_Box conv1_StatusPrime_91;

          DepStatusMap0_96 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_42);
          succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusMap0_96, ((MR_Box) (Dep_11)), &conv1_StatusPrime_91);
          if (succeeded)
          {
            StatusPrime_91 = ((MR_Word) (conv1_StatusPrime_91));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Status_110 = StatusPrime_91;
            MaybeTargetFileName_28 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
          }
          else
          {
            MR_Word MaybeModuleDepInfo_36;
            MR_Word DepStatusMap1_41;
            MR_Word STATE_VARIABLE_Info_62_62;
            MR_Word STATE_VARIABLE_Info_65_65;
            MR_String TargetFileName_86;
            MR_Word DepStatusMap_89;

            make__file_names__get_make_target_file_name_6_p_0(Globals_10, (MR_String) "predicate \140make.check_up_to_date.get_dependency_file_status\'/8", Target_23, &TargetFileName_86);
            {
              MaybeTargetFileName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeTargetFileName_28, 0) = ((MR_Box) (TargetFileName_86));
            }
            make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_24, &MaybeModuleDepInfo_36, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_62_62);
            if ((MaybeModuleDepInfo_36 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Status_110 = (MR_Integer) 3;
              STATE_VARIABLE_Info_65_65 = STATE_VARIABLE_Info_62_62;
            }
            else
            {
              MR_Word ModuleDepInfo_37 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_36, (MR_Integer) 0))));
              MR_String ModuleDir_38;
              MR_String Var_119;

              parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_37, &ModuleDir_38);
              Var_119 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(ModuleDir_38, Var_119) == 0);
              if (succeeded)
              {
                Status_110 = (MR_Integer) 0;
                STATE_VARIABLE_Info_65_65 = STATE_VARIABLE_Info_62_62;
              }
              else
              {
                MR_Word MaybeTimestamp_78;

                make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 1, Target_23, &MaybeTimestamp_78, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_65_65);
                if (((MR_tag((MR_Word) MaybeTimestamp_78)) == (MR_Integer) 1))
                {
                  MR_String ErrorMsg_40;
                  MR_String Error_76 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_78, (MR_Integer) 0))));
                  MR_String Var_121;
                  MR_String Var_123;
                  MR_String Var_124;

                  Status_110 = (MR_Integer) 3;
                  Var_121 = mercury__string__f_43_43_2_f_0(Error_76, (MR_String) "\n");
                  Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "\' not found: ", Var_121);
                  Var_124 = mercury__string__f_43_43_2_f_0(TargetFileName_86, Var_123);
                  ErrorMsg_40 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: file \140", Var_124);
                  mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_40);
                }
                else
                  Status_110 = (MR_Integer) 2;
              }
            }
            DepStatusMap1_41 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_65_65);
            mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_11)), ((MR_Box) (Status_110)), DepStatusMap1_41, &DepStatusMap_89);
            make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_89, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_43);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DepStatusMap0_96;
          MR_Word StatusPrime_91;
          MR_Box conv1_StatusPrime_91;

          DepStatusMap0_96 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_0_42);
          succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), DepStatusMap0_96, ((MR_Box) (Dep_11)), &conv1_StatusPrime_91);
          if (succeeded)
          {
            StatusPrime_91 = ((MR_Word) (conv1_StatusPrime_91));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Status_110 = StatusPrime_91;
            MaybeTargetFileName_28 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Info_43 = STATE_VARIABLE_Info_0_42;
          }
          else
          {
            MR_Word MaybeModuleDepInfo_36;
            MR_Word DepStatusMap1_41;
            MR_Word STATE_VARIABLE_Info_62_62;
            MR_Word STATE_VARIABLE_Info_65_65;
            MR_String TargetFileName_86;
            MR_Word DepStatusMap_89;

            make__file_names__get_make_target_file_name_6_p_0(Globals_10, (MR_String) "predicate \140make.check_up_to_date.get_dependency_file_status\'/8", Target_23, &TargetFileName_86);
            {
              MaybeTargetFileName_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeTargetFileName_28, 0) = ((MR_Box) (TargetFileName_86));
            }
            make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_9, Globals_10, ModuleName_24, &MaybeModuleDepInfo_36, STATE_VARIABLE_Info_0_42, &STATE_VARIABLE_Info_62_62);
            if ((MaybeModuleDepInfo_36 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Status_110 = (MR_Integer) 3;
              STATE_VARIABLE_Info_65_65 = STATE_VARIABLE_Info_62_62;
            }
            else
            {
              MR_Word ModuleDepInfo_37 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_36, (MR_Integer) 0))));
              MR_String ModuleDir_38;
              MR_String Var_119;

              parse_tree__module_dep_info__module_dep_info_get_source_file_dir_2_p_0(ModuleDepInfo_37, &ModuleDir_38);
              Var_119 = mercury__dir__this_directory_0_f_0();
              succeeded = (strcmp(ModuleDir_38, Var_119) == 0);
              if (succeeded)
              {
                Status_110 = (MR_Integer) 0;
                STATE_VARIABLE_Info_65_65 = STATE_VARIABLE_Info_62_62;
              }
              else
              {
                MR_Word MaybeTimestamp_78;

                make__timestamp__get_target_timestamp_9_p_0(ProgressStream_9, Globals_10, (MR_Integer) 1, Target_23, &MaybeTimestamp_78, STATE_VARIABLE_Info_62_62, &STATE_VARIABLE_Info_65_65);
                if (((MR_tag((MR_Word) MaybeTimestamp_78)) == (MR_Integer) 1))
                {
                  MR_String ErrorMsg_40;
                  MR_String Error_76 = ((MR_String) ((MR_hl_field(1, MaybeTimestamp_78, (MR_Integer) 0))));
                  MR_String Var_121;
                  MR_String Var_123;
                  MR_String Var_124;

                  Status_110 = (MR_Integer) 3;
                  Var_121 = mercury__string__f_43_43_2_f_0(Error_76, (MR_String) "\n");
                  Var_123 = mercury__string__f_43_43_2_f_0((MR_String) "\' not found: ", Var_121);
                  Var_124 = mercury__string__f_43_43_2_f_0(TargetFileName_86, Var_123);
                  ErrorMsg_40 = mercury__string__f_43_43_2_f_0((MR_String) "** Error: file \140", Var_124);
                  mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_40);
                }
                else
                  Status_110 = (MR_Integer) 2;
              }
            }
            DepStatusMap1_41 = make__make_info__make_info_get_dep_file_status_map_1_f_0(STATE_VARIABLE_Info_65_65);
            mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_status_0), ((MR_Box) (Dep_11)), ((MR_Box) (Status_110)), DepStatusMap1_41, &DepStatusMap_89);
            make__make_info__make_info_set_dep_file_status_map_3_p_0(DepStatusMap_89, STATE_VARIABLE_Info_65_65, STATE_VARIABLE_Info_43);
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Dep_11));
      MR_hl_field(0, base, 1) = ((MR_Box) (MaybeTargetFileName_28));
      MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (Status_110));
    }
  }
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____dependencies_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____dependencies_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____dependencies_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____dependencies_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____dependency_status_known_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____dependency_status_known_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____dependency_status_known_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____dependency_status_known_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__check_up_to_date____Unify____dependency_status_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__check_up_to_date____Unify____dependency_status_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__check_up_to_date____Compare____dependency_status_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__check_up_to_date____Compare____dependency_status_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependencies_result_0);
	MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_known_file_0);
	MR_register_type_ctor_info(&make__check_up_to_date__make__check_up_to_date__type_ctor_info_dependency_status_result_0);
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
