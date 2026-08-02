/*
** Automatically generated from `make.order.m'
** by the Mercury compiler,
** version rotd-2026-08-02
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


// :- module make.order.
// :- implementation.

/*
INIT mercury__make__order__init
ENDINIT
*/

#include "make.order.mih"


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
#include "digraph.mih"
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
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.link_target_util.mih"
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
#include "make.get_module_dep_info.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "make.prereqs_cache.mih"
#include "make.timestamp.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 make__order__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__order__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__order__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__order__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__order__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 make__order__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0;

static const MR_VA_PseudoTypeInfo_Struct2 make__order____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__order__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static void MR_CALL 
make__order__IntroducedFrom__pred__get_bottom_up_ordered_modules__258__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26);

static MR_bool MR_CALL 
make__order__IntroducedFrom__pred__filter_out_nested_modules__150__1_2_p_0(
  MR_Word NestedModules_15,
  MR_Word HeadVar__2_36);

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__96__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49);

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__92__1_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46);

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__101__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61);

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__100__1_3_p_0(
  MR_Word HeadVar__1_56,
  MR_Word HeadVar__2_57,
  MR_Word * HeadVar__3_58);

static void MR_CALL 
make__order__add_module_relations_6_p_0(
  MR_Word LookupModuleImportsFunc_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_15);

static MR_Word MR_CALL 
make__order__lookup_module_dep_info_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5);

static void MR_CALL 
make__order__acc_nonnested_and_parent_modules_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_NonnestedModules_0_24,
  MR_Word * STATE_VARIABLE_NonnestedModules_25,
  MR_Word STATE_VARIABLE_ParentModules_0_26,
  MR_Word * STATE_VARIABLE_ParentModules_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29);

static void MR_CALL 
make__order__get_non_nested_target_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_19,
  MR_Word * STATE_VARIABLE_TargetModulesCord_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22);

static void MR_CALL 
make__order__collect_nested_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_NestedModules_0_20,
  MR_Word * STATE_VARIABLE_NestedModules_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23);

static void MR_CALL 
make__order__pair_module_with_name_2_p_0(
  MR_Word Module_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
make__order__pair_module_with_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19);

static void MR_CALL 
make__order__get_bottom_up_ordered_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__order__get_bottom_up_ordered_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
make__order__get_bottom_up_ordered_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__order__get_nonnested_and_parent_modules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
make__order__get_target_modules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
make__order__filter_out_nested_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
make__order__filter_out_nested_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
make__order__order_target_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__order__order_target_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__order__order_target_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
make__order__order_target_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
make__order__order_target_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__order__order_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box make__order_scalar_common_1[8][3];

static /* final */ const MR_Box make__order_scalar_common_2[4][2];

static /* final */ const MR_Box make__order_scalar_common_3[5][5];

static /* final */ const MR_Box make__order_scalar_common_4[3][6];

static /* final */ const MR_Box make__order_scalar_common_5[1][11];

static /* final */ const MR_Box make__order_scalar_common_6[2][12];

static /* final */ const MR_Box make__order_scalar_common_7[1][14];

static /* final */ const MR_Box make__order_scalar_common_8[1][9];




static /* final */ const MR_Box make__order_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&make__order_scalar_common_3[0])),
    ((MR_Box) (make__order__order_target_modules_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__order_scalar_common_4[0])),
    ((MR_Box) (make__order__order_target_modules_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&make__order_scalar_common_3[1])),
    ((MR_Box) (make__order__order_target_modules_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&make__order_scalar_common_4[1])),
    ((MR_Box) (make__order__order_target_modules_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&make__order_scalar_common_3[2])),
    ((MR_Box) (make__order__order_target_modules_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&make__order_scalar_common_3[4])),
    ((MR_Box) (make__order__get_bottom_up_ordered_modules_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__order_scalar_common_2[4][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__order_scalar_common_3[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__order__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__order__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box make__order_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&make__order__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
};

static /* final */ const MR_Box make__order_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__order_scalar_common_6[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__order_scalar_common_7[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box make__order_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&make__order____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__order__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct2 make__order__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__order__pair__pti_pair_2__plain_libs__timestamp__type_ctor_info_timestamp_0__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0),
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__order__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__order__cord__pti_cord_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__order__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 make__order__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_make__make_info__type_ctor_info_maybe_module_dep_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 make__order____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__order__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static void MR_CALL 
make__order__IntroducedFrom__pred__get_bottom_up_ordered_modules__258__1_2_p_0(
  MR_Word HeadVar__1_25,
  MR_Word * HeadVar__2_26)
{
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_25, HeadVar__2_26);
}

static MR_bool MR_CALL 
make__order__IntroducedFrom__pred__filter_out_nested_modules__150__1_2_p_0(
  MR_Word NestedModules_15,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = mercury__set__contains_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedModules_15, ((MR_Box) (HeadVar__2_36)));
  return succeeded;
}

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__96__1_2_p_0(
  MR_Word HeadVar__1_48,
  MR_Word * HeadVar__2_49)
{
  MR_Box conv0_HeadVar__2_49;

  mercury__pair__snd_2_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_48, &conv0_HeadVar__2_49);
  *HeadVar__2_49 = ((MR_Word) (conv0_HeadVar__2_49));
}

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__92__1_3_p_0(
  MR_Word HeadVar__1_44,
  MR_Word HeadVar__2_45,
  MR_Word * HeadVar__3_46)
{
  MR_Word KeyA_48 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_44, 0))));
  MR_Word ModuleA_49 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_44, 1))));
  MR_Word KeyB_50 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_45, 0))));
  MR_Word ModuleB_51 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_45, 1))));
  MR_Word KeyResult_52;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0), &KeyResult_52, ((MR_Box) (KeyA_48)), ((MR_Box) (KeyB_50)));
  switch (KeyResult_52) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *HeadVar__3_46 = KeyResult_52;
      break;
    case (MR_Integer) 0:
      {
        MR_String ModuleAStr_53;
        MR_String ModuleBStr_54;

        ModuleAStr_53 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleA_49);
        ModuleBStr_54 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleB_51);
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__3_46, ModuleAStr_53, ModuleBStr_54);
      }
      break;
  }
}

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__101__1_2_p_0(
  MR_Word HeadVar__1_60,
  MR_Word * HeadVar__2_61)
{
  MR_Box conv0_HeadVar__2_61;

  mercury__pair__snd_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HeadVar__1_60, &conv0_HeadVar__2_61);
  *HeadVar__2_61 = ((MR_Word) (conv0_HeadVar__2_61));
}

static void MR_CALL 
make__order__IntroducedFrom__pred__order_target_modules__100__1_3_p_0(
  MR_Word HeadVar__1_56,
  MR_Word HeadVar__2_57,
  MR_Word * HeadVar__3_58)
{
  MR_String KeyA_60 = ((MR_String) ((MR_hl_field(0, HeadVar__1_56, 0))));
  MR_Word ModuleA_61 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_56, 1))));
  MR_String KeyB_62 = ((MR_String) ((MR_hl_field(0, HeadVar__2_57, 0))));
  MR_Word ModuleB_63 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_57, 1))));
  MR_Word KeyResult_64;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &KeyResult_64, ((MR_Box) (KeyA_60)), ((MR_Box) (KeyB_62)));
  switch (KeyResult_64) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *HeadVar__3_58 = KeyResult_64;
      break;
    case (MR_Integer) 0:
      {
        MR_String ModuleAStr_65;
        MR_String ModuleBStr_66;

        ModuleAStr_65 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleA_61);
        ModuleBStr_66 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleB_63);
        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__3_58, ModuleAStr_65, ModuleBStr_66);
      }
      break;
  }
}

static void MR_CALL 
make__order__add_module_relations_6_p_0(
  MR_Word LookupModuleImportsFunc_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_12,
  MR_Word * STATE_VARIABLE_IntDepsGraph_13,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_14,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_15)
{
  MR_Word ModuleDepInfo_11;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, LookupModuleImportsFunc_7, 1))));
  MR_Box conv1_ModuleDepInfo_11;

  conv1_ModuleDepInfo_11 = func_0(((MR_Box) (LookupModuleImportsFunc_7)), ((MR_Box) (ModuleName_8)));
  ModuleDepInfo_11 = ((MR_Word) (conv1_ModuleDepInfo_11));
  parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(ModuleDepInfo_11, LookupModuleImportsFunc_7, STATE_VARIABLE_IntDepsGraph_0_12, STATE_VARIABLE_IntDepsGraph_13, STATE_VARIABLE_ImpDepsGraph_0_14, STATE_VARIABLE_ImpDepsGraph_15);
}

static MR_Word MR_CALL 
make__order__lookup_module_dep_info_in_maybe_map_2_f_0(
  MR_Word ModuleDeps_4,
  MR_Word ModuleName_5)
{
  MR_Word ModuleDepInfo_6;
  MR_Word MaybeModuleDepInfo_7;
  MR_Box conv0_MaybeModuleDepInfo_7;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_maybe_module_dep_info_0), ModuleDeps_4, ((MR_Box) (ModuleName_5)), &conv0_MaybeModuleDepInfo_7);
  MaybeModuleDepInfo_7 = ((MR_Word) (conv0_MaybeModuleDepInfo_7));
  if ((MaybeModuleDepInfo_7 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140make.order.lookup_module_dep_info_in_maybe_map\'/2", (MR_String) "MaybeModuleDepInfo = no");
  else
    ModuleDepInfo_6 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_7, 0))));
  return ModuleDepInfo_6;
}

static void MR_CALL 
make__order__acc_nonnested_and_parent_modules_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word STATE_VARIABLE_NonnestedModules_0_24,
  MR_Word * STATE_VARIABLE_NonnestedModules_25,
  MR_Word STATE_VARIABLE_ParentModules_0_26,
  MR_Word * STATE_VARIABLE_ParentModules_27,
  MR_Word STATE_VARIABLE_Info_0_28,
  MR_Word * STATE_VARIABLE_Info_29)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_19;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_12, Globals_13, ModuleName_14, &MaybeModuleDepInfo_19, STATE_VARIABLE_Info_0_28, STATE_VARIABLE_Info_29);
  if ((MaybeModuleDepInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_NonnestedModules_25 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonnestedModules_0_24));
    }
    *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
  }
  else
  {
    MR_Word ModuleDepInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_19, 0))));
    MR_Word MaybeTopModule_21;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_20, &MaybeTopModule_21);
    if ((MaybeTopModule_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NonnestedModules_25 = STATE_VARIABLE_NonnestedModules_0_24;
      *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
    }
    else
    {
      MR_Word Children_23;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_NonnestedModules_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_NonnestedModules_0_24));
      }
      parse_tree__module_dep_info__module_dep_info_get_children_2_p_0(ModuleDepInfo_20, &Children_23);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Children_23);
      if (succeeded)
        *STATE_VARIABLE_ParentModules_27 = STATE_VARIABLE_ParentModules_0_26;
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_ParentModules_27 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ParentModules_0_26));
        }
    }
  }
}

static void MR_CALL 
make__order__get_non_nested_target_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_TargetModulesCord_0_19,
  MR_Word * STATE_VARIABLE_TargetModulesCord_20,
  MR_Word STATE_VARIABLE_Info_0_21,
  MR_Word * STATE_VARIABLE_Info_22)
{
  MR_bool succeeded;
  MR_Word MaybeModuleDepInfo_16;
  MR_Word ModuleDepInfo_17;
  MR_Word SourceFileModuleName_18;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_12, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_21, STATE_VARIABLE_Info_22);
  succeeded = (MaybeModuleDepInfo_16 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, 0))));
    parse_tree__module_dep_info__module_dep_info_get_source_file_module_name_2_p_0(ModuleDepInfo_17, &SourceFileModuleName_18);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_12, SourceFileModuleName_18);
  }
  if (succeeded)
    mercury__cord__snoc_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_12)), STATE_VARIABLE_TargetModulesCord_0_19, STATE_VARIABLE_TargetModulesCord_20);
  else
    *STATE_VARIABLE_TargetModulesCord_20 = STATE_VARIABLE_TargetModulesCord_0_19;
}

static void MR_CALL 
make__order__collect_nested_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleName_12,
  MR_Word STATE_VARIABLE_NestedModules_0_20,
  MR_Word * STATE_VARIABLE_NestedModules_21,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  MR_Word MaybeModuleDepInfo_16;

  make__get_module_dep_info__get_maybe_module_dep_info_8_p_0(ProgressStream_10, Globals_11, ModuleName_12, &MaybeModuleDepInfo_16, STATE_VARIABLE_Info_0_22, STATE_VARIABLE_Info_23);
  if ((MaybeModuleDepInfo_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_NestedModules_21 = STATE_VARIABLE_NestedModules_0_20;
  else
  {
    MR_Word ModuleDepInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeModuleDepInfo_16, 0))));
    MR_Word MaybeTopModule_18;
    MR_Word NestedSubModules_19;

    parse_tree__module_dep_info__module_dep_info_get_maybe_top_module_2_p_0(ModuleDepInfo_17, &MaybeTopModule_18);
    NestedSubModules_19 = parse_tree__module_baggage__get_nested_children_of_top_module_1_f_0(MaybeTopModule_18);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedSubModules_19, STATE_VARIABLE_NestedModules_0_20, STATE_VARIABLE_NestedModules_21);
  }
}

static void MR_CALL 
make__order__pair_module_with_name_2_p_0(
  MR_Word Module_3,
  MR_Word * HeadVar__2_2)
{
  MR_String Name_4;

  Name_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Module_3);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Name_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Module_3));
  }
}

static void MR_CALL 
make__order__pair_module_with_timestamp_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Module_11,
  MR_Word * HeadVar__4_4,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_Word Timestamp_12;
  MR_Word Target_15;
  MR_Word MaybeTimestamp_16;

  {
    Target_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Target_15, 0) = ((MR_Box) (Module_11));
    MR_hl_field(0, Target_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  make__timestamp__get_target_timestamp_8_p_0(ProgressStream_9, Globals_10, Target_15, &MaybeTimestamp_16, STATE_VARIABLE_Info_0_18, STATE_VARIABLE_Info_19);
  if (((MR_tag((MR_Word) MaybeTimestamp_16)) == (MR_Integer) 1))
    Timestamp_12 = libs__timestamp__oldest_timestamp_0_f_0();
  else
    Timestamp_12 = ((MR_Word) ((MR_hl_field(0, MaybeTimestamp_16, 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Timestamp_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (Module_11));
  }
}

static void MR_CALL 
make__order__get_bottom_up_ordered_modules_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_26;

  make__order__IntroducedFrom__pred__get_bottom_up_ordered_modules__258__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv5_HeadVar__2_26);
  *wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_26));
}

static void MR_CALL 
make__order__get_bottom_up_ordered_modules_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_IntDepsGraph_13;
  MR_Word conv1_STATE_VARIABLE_ImpDepsGraph_15;

  make__order__add_module_relations_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_IntDepsGraph_13, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ImpDepsGraph_15);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_IntDepsGraph_13));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ImpDepsGraph_15));
}

static MR_Box MR_CALL 
make__order__get_bottom_up_ordered_modules_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleDepInfo_6;

  conv0_ModuleDepInfo_6 = make__order__lookup_module_dep_info_in_maybe_map_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleDepInfo_6));
  return wrapper_arg_2;
}

void MR_CALL 
make__order__get_bottom_up_ordered_modules_3_p_0(
  MR_Word ModuleDeps_4,
  MR_Word Modules0_5,
  MR_Word * Modules_6)
{
  MR_Word ImpDepsGraph_8;
  MR_Word SccSets_9;
  MR_Word SccLists_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Box conv4__IntDepsGraph_7;
  MR_Box conv3_ImpDepsGraph_8;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&make__order_scalar_common_4[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (make__order__get_bottom_up_ordered_modules_3_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (ModuleDeps_4));
  }
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&make__order_scalar_common_8[0]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (make__order__get_bottom_up_ordered_modules_3_p_0_2));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Var_14));
  }
  Var_12 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  Var_13 = mercury__digraph__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_2[3]), (MR_Word) (&make__order_scalar_common_2[3]), Var_11, Modules0_5, ((MR_Box) (Var_12)), &conv4__IntDepsGraph_7, ((MR_Box) (Var_13)), &conv3_ImpDepsGraph_8);
  ImpDepsGraph_8 = ((MR_Word) (conv3_ImpDepsGraph_8));
  SccSets_9 = mercury__digraph__return_sccs_in_to_from_order_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ImpDepsGraph_8);
  mercury__list__map_3_p_0((MR_Word) (&make__order_scalar_common_2[0]), (MR_Word) (&make__order_scalar_common_2[2]), (MR_Word) (&make__order_scalar_common_1[7]), SccSets_9, &SccLists_10);
  mercury__list__condense_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SccLists_10, Modules_6);
}

static void MR_CALL 
make__order__get_nonnested_and_parent_modules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_NonnestedModules_25;
  MR_Word conv1_STATE_VARIABLE_ParentModules_27;
  MR_Word conv0_STATE_VARIABLE_Info_29;

  make__order__acc_nonnested_and_parent_modules_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_NonnestedModules_25, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ParentModules_27, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Info_29);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_NonnestedModules_25));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ParentModules_27));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Info_29));
}

void MR_CALL 
make__order__get_nonnested_and_parent_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word ModuleNames_12,
  MR_Word * NonnestedModules_13,
  MR_Word * ParentModules_14,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word Var_21;
  MR_Box conv6_NonnestedModules_13;
  MR_Box conv5_ParentModules_14;
  MR_Box conv4_STATE_VARIABLE_Info_18;
  MR_Box conv3_STATE_VARIABLE_IO_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&make__order_scalar_common_7[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (make__order__get_nonnested_and_parent_modules_9_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ProgressStream_10));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Globals_11));
  }
  mercury__list__foldl4_10_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_2[2]), (MR_Word) (&make__order_scalar_common_2[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ModuleNames_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv6_NonnestedModules_13, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_ParentModules_14, ((MR_Box) (STATE_VARIABLE_Info_0_17)), &conv4_STATE_VARIABLE_Info_18, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_20);
  *NonnestedModules_13 = ((MR_Word) (conv6_NonnestedModules_13));
  *ParentModules_14 = ((MR_Word) (conv5_ParentModules_14));
  *STATE_VARIABLE_Info_18 = ((MR_Word) (conv4_STATE_VARIABLE_Info_18));
}

static void MR_CALL 
make__order__get_target_modules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_TargetModulesCord_20;
  MR_Word conv0_STATE_VARIABLE_Info_22;

  make__order__get_non_nested_target_modules_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_TargetModulesCord_20, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_22);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_TargetModulesCord_20));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_22));
}

void MR_CALL 
make__order__get_target_modules_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Globals_11,
  MR_Word TargetType_12,
  MR_Word AllModules_13,
  MR_Word * TargetModules_14,
  MR_Word STATE_VARIABLE_Info_0_18,
  MR_Word * STATE_VARIABLE_Info_19)
{
  MR_bool succeeded = (TargetType_12 == (MR_Word) ((MR_Unsigned) 4U));

  if (succeeded)
  {
    MR_Word TargetModulesCord_17;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Box conv4_TargetModulesCord_17;
    MR_Box conv3_STATE_VARIABLE_Info_19;
    MR_Box conv2_STATE_VARIABLE_IO_21;

    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_22, 0) = ((MR_Box) (&make__order_scalar_common_6[1]));
      MR_hl_field(0, Var_22, 1) = ((MR_Box) (make__order__get_target_modules_9_p_0_1));
      MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_22, 3) = ((MR_Box) (ProgressStream_10));
      MR_hl_field(0, Var_22, 4) = ((MR_Box) (Globals_11));
    }
    Var_23 = mercury__cord__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_2[1]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, AllModules_13, ((MR_Box) (Var_23)), &conv4_TargetModulesCord_17, ((MR_Box) (STATE_VARIABLE_Info_0_18)), &conv3_STATE_VARIABLE_Info_19, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_21);
    TargetModulesCord_17 = ((MR_Word) (conv4_TargetModulesCord_17));
    *STATE_VARIABLE_Info_19 = ((MR_Word) (conv3_STATE_VARIABLE_Info_19));
    *TargetModules_14 = mercury__cord__list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TargetModulesCord_17);
  }
  else
  {
    *TargetModules_14 = AllModules_13;
    *STATE_VARIABLE_Info_19 = STATE_VARIABLE_Info_0_18;
  }
}

static MR_bool MR_CALL 
make__order__filter_out_nested_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = make__order__IntroducedFrom__pred__filter_out_nested_modules__150__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
make__order__filter_out_nested_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_NestedModules_21;
  MR_Word conv0_STATE_VARIABLE_Info_23;

  make__order__collect_nested_modules_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_NestedModules_21, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_23);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_NestedModules_21));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_23));
}

void MR_CALL 
make__order__filter_out_nested_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules0_11,
  MR_Word * Modules_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word NestedModules_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_24;
  MR_Box conv4_NestedModules_15;
  MR_Box conv3_STATE_VARIABLE_Info_17;
  MR_Box conv2_STATE_VARIABLE_IO_19;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&make__order_scalar_common_6[0]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (make__order__filter_out_nested_modules_8_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (Globals_10));
  }
  Var_21 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__list__foldl3_8_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_2[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, Modules0_11, ((MR_Box) (Var_21)), &conv4_NestedModules_15, ((MR_Box) (STATE_VARIABLE_Info_0_16)), &conv3_STATE_VARIABLE_Info_17, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_19);
  NestedModules_15 = ((MR_Word) (conv4_NestedModules_15));
  *STATE_VARIABLE_Info_17 = ((MR_Word) (conv3_STATE_VARIABLE_Info_17));
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&make__order_scalar_common_3[3]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (make__order__filter_out_nested_modules_8_p_0_2));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (NestedModules_15));
  }
  mercury__list__negated_filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_24, Modules0_11, Modules_12);
}

static void MR_CALL 
make__order__order_target_modules_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_49;

  make__order__IntroducedFrom__pred__order_target_modules__96__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv8_HeadVar__2_49);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_49));
}

static void MR_CALL 
make__order__order_target_modules_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__3_46;

  make__order__IntroducedFrom__pred__order_target_modules__92__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv7_HeadVar__3_46);
  *wrapper_arg_3 = ((MR_Box) (conv7_HeadVar__3_46));
}

static void MR_CALL 
make__order__order_target_modules_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__4_4;
  MR_Word conv3_STATE_VARIABLE_Info_19;

  make__order__pair_module_with_timestamp_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__4_4, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Info_19);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__4_4));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Info_19));
}

static void MR_CALL 
make__order__order_target_modules_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_61;

  make__order__IntroducedFrom__pred__order_target_modules__101__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_HeadVar__2_61);
  *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_61));
}

static void MR_CALL 
make__order__order_target_modules_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_58;

  make__order__IntroducedFrom__pred__order_target_modules__100__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_58);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_58));
}

static void MR_CALL 
make__order__order_target_modules_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  make__order__pair_module_with_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
make__order__order_target_modules_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word Modules_11,
  MR_Word * OrderedModules_12,
  MR_Word STATE_VARIABLE_Info_0_19,
  MR_Word * STATE_VARIABLE_Info_20)
{
  MR_Word OrderByTimestamp_15;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 466, &OrderByTimestamp_15);
  switch (OrderByTimestamp_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word PairedModules_32;
        MR_Word OrderedPairs_33;

        mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_1[1]), (MR_Word) (&make__order_scalar_common_1[2]), Modules_11, &PairedModules_32);
        mercury__list__sort_3_p_0((MR_Word) (&make__order_scalar_common_1[1]), (MR_Word) (&make__order_scalar_common_1[3]), PairedModules_32, &OrderedPairs_33);
        mercury__list__map_3_p_0((MR_Word) (&make__order_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_1[4]), OrderedPairs_33, OrderedModules_12);
        *STATE_VARIABLE_Info_20 = STATE_VARIABLE_Info_0_19;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PairedModules_16;
        MR_Word RevOrderedPairs_17;
        MR_Word OrderedPairs_18;
        MR_Word Var_24;
        MR_Box conv6_STATE_VARIABLE_Info_20;
        MR_Box conv5_STATE_VARIABLE_IO_22;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (&make__order_scalar_common_5[0]));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (make__order__order_target_modules_8_p_0_4));
          MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_24, 3) = ((MR_Box) (ProgressStream_9));
          MR_hl_field(0, Var_24, 4) = ((MR_Box) (Globals_10));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_1[0]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Modules_11, &PairedModules_16, ((MR_Box) (STATE_VARIABLE_Info_0_19)), &conv6_STATE_VARIABLE_Info_20, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_22);
        *STATE_VARIABLE_Info_20 = ((MR_Word) (conv6_STATE_VARIABLE_Info_20));
        mercury__list__sort_3_p_0((MR_Word) (&make__order_scalar_common_1[0]), (MR_Word) (&make__order_scalar_common_1[5]), PairedModules_16, &RevOrderedPairs_17);
        mercury__list__reverse_2_p_0((MR_Word) (&make__order_scalar_common_1[0]), RevOrderedPairs_17, &OrderedPairs_18);
        mercury__list__map_3_p_0((MR_Word) (&make__order_scalar_common_1[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__order_scalar_common_1[6]), OrderedPairs_18, OrderedModules_12);
      }
      break;
  }
}

void mercury__make__order__init(void)
{
}

void mercury__make__order__init_type_tables(void)
{
}

void mercury__make__order__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__order__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.order.
