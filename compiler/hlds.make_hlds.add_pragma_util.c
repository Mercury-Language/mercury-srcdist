/*
** Automatically generated from `add_pragma_util.m'
** by the Mercury compiler,
** version rotd-2026-04-15
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


// :- module hlds.make_hlds.add_pragma_util.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma_util__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_util__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_markers__type_ctor_info_pred_marker_0;

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_util____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_1;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_2;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_lookup_failure_handling_0[3];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_lookup_failure_handling_0[3];

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_lookup_failure_handling_0[3];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_util__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__field_types_matching_pred_ids_result_0_0[3];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__field_types_matching_pred_ids_result_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_stag_ordered_matching_pred_ids_result_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_stag_ordered_matching_pred_ids_result_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_ptag_ordered_matching_pred_ids_result_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_name_ordered_matching_pred_ids_result_0[2];

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_matching_pred_ids_result_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_maybe_require_one_match_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_maybe_require_one_match_0[2];

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_maybe_require_one_match_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_pragma_status_class_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_pragma_status_class_0[2];

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_pragma_status_class_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__258__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_60);

static void MR_CALL 
hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_41,
  MR_String PragmaName_1,
  MR_Word PragmaStatusClass_2,
  MR_Word PragmaStatus_3,
  MR_Word Context_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredTable_0_7,
  MR_Word * STATE_VARIABLE_PredTable_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10);

static void MR_CALL 
hlds__make_hlds__add_pragma_util__pragma_conflict_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____add_marker_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____lookup_failure_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____lookup_failure_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____matching_pred_ids_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____matching_pred_ids_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____maybe_require_one_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____maybe_require_one_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____pragma_status_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____pragma_status_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_1[88][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_4[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_5[1][3];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_1[88][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ambiguous"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "name"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The possible matches are:"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[15])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may be necessary to select the right match."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "An explicit module qualifier"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[25])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Internal compiler error:"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown mode number"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[28]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "unknown"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: since the"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is exported, the"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for it"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "should also be exported."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[42]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: since the"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is not exported, the"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not be exported either."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: a"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may not be exported,"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is exported."))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the predicate or function it refers to"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "even if"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "function"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "conflicts"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[62]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "with previous"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[69]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a predicate or a function."))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "could refer to either"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[75])))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "ambiguous name"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[78]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[77])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[83]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])))
  },
  /* row  86 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[27])))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_2[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 692U) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 185U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 181U) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0)),
    ((MR_Box) (&hlds__pred_table__hlds__pred_table__type_ctor_info_is_fully_qualified_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_4[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_util__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_markers__type_ctor_info_pred_marker_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_util_scalar_common_5[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_util_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma_util__pragma_conflict_error_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_util__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_markers__type_ctor_info_pred_marker_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0) }
};

static const MR_VA_TypeInfo_Struct2 hlds__make_hlds__add_pragma_util____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_add_marker_pred_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Unify____add_marker_pred_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Compare____add_marker_pred_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_util",
  (MR_String) "add_marker_pred_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_util____vti_pred_2hlds__hlds_pred__type_ctor_info_pred_info_0hlds__hlds_pred__type_ctor_info_pred_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_0 = {
  (MR_String) "lfh_ignore",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_1 = {
  (MR_String) "lfh_user_error",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_2 = {
  (MR_String) "lfh_internal_error",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_lookup_failure_handling_0[3] = {
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_0,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_1,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_2
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_lookup_failure_handling_0[3] = {
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_0,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_2,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_lookup_failure_handling_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_lookup_failure_handling_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_lookup_failure_handling_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Unify____lookup_failure_handling_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Compare____lookup_failure_handling_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_util",
  (MR_String) "lookup_failure_handling",
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_lookup_failure_handling_0 },
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_lookup_failure_handling_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_lookup_failure_handling_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_util__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__field_types_matching_pred_ids_result_0_0[3] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_util__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_0 = {
  (MR_String) "mpids_ok",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__field_types_matching_pred_ids_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__field_types_matching_pred_ids_result_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_util__list__ti_list_1parse_tree__error_spec__type_ctor_info_error_spec_0) };

static const MR_DuFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_1 = {
  (MR_String) "mpids_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__field_types_matching_pred_ids_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_stag_ordered_matching_pred_ids_result_0_0[1] = { &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_stag_ordered_matching_pred_ids_result_0_1[1] = { &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_ptag_ordered_matching_pred_ids_result_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_stag_ordered_matching_pred_ids_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_stag_ordered_matching_pred_ids_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_name_ordered_matching_pred_ids_result_0[2] = {
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_1,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_functor_desc_matching_pred_ids_result_0_0
};

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_matching_pred_ids_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_matching_pred_ids_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Unify____matching_pred_ids_result_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Compare____matching_pred_ids_result_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_util",
  (MR_String) "matching_pred_ids_result",
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_name_ordered_matching_pred_ids_result_0 },
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__du_ptag_ordered_matching_pred_ids_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_matching_pred_ids_result_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_0 = {
  (MR_String) "do_not_require_one_match",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_1 = {
  (MR_String) "require_one_match",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_maybe_require_one_match_0[2] = {
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_0,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_maybe_require_one_match_0[2] = {
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_0,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_maybe_require_one_match_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_maybe_require_one_match_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_maybe_require_one_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Unify____maybe_require_one_match_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Compare____maybe_require_one_match_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_util",
  (MR_String) "maybe_require_one_match",
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_maybe_require_one_match_0 },
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_maybe_require_one_match_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_maybe_require_one_match_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_0 = {
  (MR_String) "psc_decl",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_1 = {
  (MR_String) "psc_impl",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_pragma_status_class_0[2] = {
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_0,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_pragma_status_class_0[2] = {
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_0,
  &hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_functor_desc_pragma_status_class_0_1
};

static const MR_Integer hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_pragma_status_class_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_pragma_status_class_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Unify____pragma_status_class_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_pragma_util____Compare____pragma_status_class_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_pragma_util",
  (MR_String) "pragma_status_class",
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_name_ordered_pragma_status_class_0 },
  { hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__enum_ordinal_ordered_pragma_status_class_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__functor_number_map_pragma_status_class_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__258__1_2_p_0(
  MR_Word IsFullyQualified_11,
  MR_Word HeadVar__2_60)
{
  MR_bool succeeded = (IsFullyQualified_11 == HeadVar__2_60);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____pragma_status_class_0_0(
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
hlds__make_hlds__add_pragma_util____Unify____pragma_status_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____maybe_require_one_match_0_0(
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
hlds__make_hlds__add_pragma_util____Unify____maybe_require_one_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____matching_pred_ids_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX1_12)), ((MR_Box) (ArgY1_13)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____matching_pred_ids_result_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_13_13 = (MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
    }
  }
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____lookup_failure_handling_0_0(
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
hlds__make_hlds__add_pragma_util____Unify____lookup_failure_handling_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____add_marker_pred_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____add_marker_pred_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__transform_selected_mode_of_pred_10_p_0(
  MR_Word PredId_11,
  MR_Word PFNameArity_12,
  MR_Word Modes_13,
  MR_String PragmaName_14,
  MR_Word Context_15,
  MR_Word ProcTransform_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  MR_bool succeeded;
  MR_Word PredInfo0_19;
  MR_Word ProcTable0_20;
  MR_Word ProcList_21;
  MR_Integer ProcId_22;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_28, PredId_11, &PredInfo0_19);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_19, &ProcTable0_20);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_20, &ProcList_21);
  succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_0_28, ProcList_21, Modes_13, &ProcId_22);
  if (succeeded)
  {
    MR_Word ProcInfo0_23;
    MR_Word ProcInfo_24;
    MR_Word PredInfo_25;
    MR_Box conv0_ProcInfo0_23;
    void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);
    MR_Box conv2_ProcInfo_24;

    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_20, ((MR_Box) (ProcId_22)), &conv0_ProcInfo0_23);
    ProcInfo0_23 = ((MR_Word) (conv0_ProcInfo0_23));
    func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, ProcTransform_16, 1))));
    func_1(((MR_Box) (ProcTransform_16)), ((MR_Box) (ProcInfo0_23)), &conv2_ProcInfo_24);
    ProcInfo_24 = ((MR_Word) (conv2_ProcInfo_24));
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_22, ProcInfo_24, PredInfo0_19, &PredInfo_25);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, PredInfo_25, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29);
    *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
  }
  else
  {
    MR_Word Pieces_26;
    MR_Word Spec_27;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_48;
    MR_Word Var_51;
    MR_Word Var_52;

    {
      Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 36U));
      MR_hl_field(3, Var_37, 1) = ((MR_Box) (PragmaName_14));
    }
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[68])));
    }
    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[8])));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
    }
    Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[84])));
    {
      Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 18U));
      MR_hl_field(3, Var_52, 1) = ((MR_Box) (PFNameArity_12));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[85])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[33])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
    }
    Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_48);
    Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_42);
    {
      Spec_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_27, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.transform_selected_mode_of_pred\'/10"));
      MR_hl_field(0, Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_27, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, Spec_27, 4) = ((MR_Box) (Pieces_26));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_31 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_27));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
    }
    *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__add_marker_pred_info_3_p_0(
  MR_Word Marker_4,
  MR_Word STATE_VARIABLE_PredInfo_0_8,
  MR_Word * STATE_VARIABLE_PredInfo_9)
{
  MR_Word Markers0_6;
  MR_Word Markers_7;

  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_8, &Markers0_6);
  hlds__hlds_markers__add_marker_3_p_0(Marker_4, Markers0_6, &Markers_7);
  hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_7, STATE_VARIABLE_PredInfo_0_8, STATE_VARIABLE_PredInfo_9);
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__pragma_add_marker_10_p_0(
  MR_String PragmaName_1,
  MR_Word PragmaStatusClass_2,
  MR_Word PragmaStatus_3,
  MR_Word Context_4,
  MR_Word UpdatePredInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredTable_0_7,
  MR_Word * STATE_VARIABLE_PredTable_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_PredTable_8 = STATE_VARIABLE_PredTable_0_7;
    }
    else
    {
      MR_Word PredId_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word PredIds_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word PredInfo0_31;
      MR_Word PredInfo_32;
      MR_Word STATE_VARIABLE_PredTable_1_37;
      MR_Word STATE_VARIABLE_Specs_1_38;
      MR_Box conv0_PredInfo0_31;
      void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);
      MR_Box conv2_PredInfo_32;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_7, ((MR_Box) (PredId_27)), &conv0_PredInfo0_31);
      PredInfo0_31 = ((MR_Word) (conv0_PredInfo0_31));
      func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, UpdatePredInfo_5, 1))));
      func_1(((MR_Box) (UpdatePredInfo_5)), ((MR_Box) (PredInfo0_31)), &conv2_PredInfo_32);
      PredInfo_32 = ((MR_Word) (conv2_PredInfo_32));
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_27)), ((MR_Box) (PredInfo_32)), STATE_VARIABLE_PredTable_0_7, &STATE_VARIABLE_PredTable_1_37);
      hlds__make_hlds__add_pragma_util__check_pragma_status_7_p_0(PragmaName_1, PragmaStatusClass_2, PragmaStatus_3, Context_4, PredInfo_32, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_1_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = PredIds_28;
      next_value_of_STATE_VARIABLE_PredTable_0_7 = STATE_VARIABLE_PredTable_1_37;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_1_38;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_PredTable_0_7 = next_value_of_STATE_VARIABLE_PredTable_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__get_pred_markers_3_p_0(
  MR_Word PredIdTable_4,
  MR_Word PredId_5,
  MR_Word * Markers_6)
{
  MR_Word PredInfo_7;
  MR_Box conv0_PredInfo_7;

  mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_4, ((MR_Box) (PredId_5)), &conv0_PredInfo_7);
  PredInfo_7 = ((MR_Word) (conv0_PredInfo_7));
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, Markers_6);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Markers_6;

  hlds__make_hlds__add_pragma_util__get_pred_markers_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Markers_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_Markers_6));
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0(
  MR_Word PredSpec_12,
  MR_String PragmaName_13,
  MR_Word PragmaStatusClass_14,
  MR_Word PragmaStatus_15,
  MR_Word Context_16,
  MR_Word Marker_17,
  MR_Word ConflictMarkers_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_35,
  MR_Word * STATE_VARIABLE_ModuleInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_bool succeeded;
  MR_Word PFU_21 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_12, 0))) & (MR_Integer) 3);
  MR_Word PredSymName_22 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 1))));
  MR_Word UserArity_23 = ((MR_Word) ((MR_hl_field(0, PredSpec_12, 2))));
  MR_Word MatchingPredIdResult_24;

  hlds__make_hlds__add_pragma_util__get_matching_pred_ids_9_p_0(STATE_VARIABLE_ModuleInfo_0_35, PragmaName_13, (MR_Integer) 0, (MR_Integer) 0, Context_16, PFU_21, PredSymName_22, UserArity_23, &MatchingPredIdResult_24);
  if (((MR_tag((MR_Word) MatchingPredIdResult_24)) == (MR_Integer) 1))
  {
    MR_Word ErrorSpecs_34 = ((MR_Word) ((MR_hl_field(1, MatchingPredIdResult_24, 0))));

    *STATE_VARIABLE_Specs_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ErrorSpecs_34, STATE_VARIABLE_Specs_0_37);
    *STATE_VARIABLE_ModuleInfo_36 = STATE_VARIABLE_ModuleInfo_0_35;
  }
  else
  {
    MR_Word HeadPredId_25 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_24, 0))));
    MR_Word TailPredIds_26 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_24, 1))));
    MR_Word WarnSpecs_27 = ((MR_Word) ((MR_hl_field(0, MatchingPredIdResult_24, 2))));
    MR_Word PredIds_28;
    MR_Word PredIdTable0_29;
    MR_Word PredIdTable_30;
    MR_Word PredMarkerSets_31;
    MR_Word PredMarkers_32;
    MR_Word BadPredMarkers_33;
    MR_Word STATE_VARIABLE_Specs_1_41;
    MR_Word STATE_VARIABLE_Specs_2_43;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word PredId_70;
    MR_Word PredIds_71;
    MR_Word PredInfo0_72;
    MR_Word PredInfo_73;
    MR_Word STATE_VARIABLE_PredTable_1_78;
    MR_Word STATE_VARIABLE_Specs_1_79;
    MR_Word Markers0_82;
    MR_Word Markers_83;
    MR_Box conv0_PredInfo0_72;

    {
      PredIds_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredIds_28, 0) = ((MR_Box) (HeadPredId_25));
      MR_hl_field(1, PredIds_28, 1) = ((MR_Box) (TailPredIds_26));
    }
    STATE_VARIABLE_Specs_1_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), WarnSpecs_27, STATE_VARIABLE_Specs_0_37);
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_35, &PredIdTable0_29);
    PredId_70 = ((MR_Word) ((MR_hl_field(1, PredIds_28, 0))));
    PredIds_71 = ((MR_Word) ((MR_hl_field(1, PredIds_28, 1))));
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable0_29, ((MR_Box) (PredId_70)), &conv0_PredInfo0_72);
    PredInfo0_72 = ((MR_Word) (conv0_PredInfo0_72));
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_72, &Markers0_82);
    hlds__hlds_markers__add_marker_3_p_0(Marker_17, Markers0_82, &Markers_83);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_83, PredInfo0_72, &PredInfo_73);
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_70)), ((MR_Box) (PredInfo_73)), PredIdTable0_29, &STATE_VARIABLE_PredTable_1_78);
    hlds__make_hlds__add_pragma_util__check_pragma_status_7_p_0(PragmaName_13, PragmaStatusClass_14, PragmaStatus_15, Context_16, PredInfo_73, STATE_VARIABLE_Specs_1_41, &STATE_VARIABLE_Specs_1_79);
    hlds__make_hlds__add_pragma_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(Marker_17, PragmaName_13, PragmaStatusClass_14, PragmaStatus_15, Context_16, PredIds_71, STATE_VARIABLE_PredTable_1_78, &PredIdTable_30, STATE_VARIABLE_Specs_1_79, &STATE_VARIABLE_Specs_2_43);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_30, STATE_VARIABLE_ModuleInfo_0_35, STATE_VARIABLE_ModuleInfo_36);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_util_scalar_common_4[1]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_util__add_pred_marker_11_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (PredIdTable_30));
    }
    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[1]), Var_45, PredIds_28, &PredMarkerSets_31);
    PredMarkers_32 = mercury__set__union_list_1_f_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), PredMarkerSets_31);
    Var_46 = mercury__set__list_to_set_1_f_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), ConflictMarkers_18);
    mercury__set__intersect_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), PredMarkers_32, Var_46, &BadPredMarkers_33);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), BadPredMarkers_33);
    if (succeeded)
      *STATE_VARIABLE_Specs_38 = STATE_VARIABLE_Specs_2_43;
    else
      hlds__make_hlds__add_pragma_util__pragma_conflict_error_6_p_0(PredSpec_12, Context_16, PragmaName_13, BadPredMarkers_33, STATE_VARIABLE_Specs_2_43, STATE_VARIABLE_Specs_38);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_97_103_109_97_95_97_100_100_95_109_97_114_107_101_114_95_95_104_111_49_95_95_91_54_93_95_48_10_p_0(
  MR_Word Var_41,
  MR_String PragmaName_1,
  MR_Word PragmaStatusClass_2,
  MR_Word PragmaStatus_3,
  MR_Word Context_4,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_PredTable_0_7,
  MR_Word * STATE_VARIABLE_PredTable_8,
  MR_Word STATE_VARIABLE_Specs_0_9,
  MR_Word * STATE_VARIABLE_Specs_10)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_10 = STATE_VARIABLE_Specs_0_9;
      *STATE_VARIABLE_PredTable_8 = STATE_VARIABLE_PredTable_0_7;
    }
    else
    {
      MR_Word PredId_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word PredIds_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word PredInfo0_31;
      MR_Word PredInfo_32;
      MR_Word STATE_VARIABLE_PredTable_1_37;
      MR_Word STATE_VARIABLE_Specs_1_38;
      MR_Word Markers0_42;
      MR_Word Markers_43;
      MR_Box conv0_PredInfo0_31;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_PredTable_0_7;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_9;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredTable_0_7, ((MR_Box) (PredId_27)), &conv0_PredInfo0_31);
      PredInfo0_31 = ((MR_Word) (conv0_PredInfo0_31));
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_31, &Markers0_42);
      hlds__hlds_markers__add_marker_3_p_0(Var_41, Markers0_42, &Markers_43);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_43, PredInfo0_31, &PredInfo_32);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_27)), ((MR_Box) (PredInfo_32)), STATE_VARIABLE_PredTable_0_7, &STATE_VARIABLE_PredTable_1_37);
      hlds__make_hlds__add_pragma_util__check_pragma_status_7_p_0(PragmaName_1, PragmaStatusClass_2, PragmaStatus_3, Context_4, PredInfo_32, STATE_VARIABLE_Specs_0_9, &STATE_VARIABLE_Specs_1_38);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = PredIds_28;
      next_value_of_STATE_VARIABLE_PredTable_0_7 = STATE_VARIABLE_PredTable_1_37;
      next_value_of_STATE_VARIABLE_Specs_0_9 = STATE_VARIABLE_Specs_1_38;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_PredTable_0_7 = next_value_of_STATE_VARIABLE_PredTable_0_7;
      STATE_VARIABLE_Specs_0_9 = next_value_of_STATE_VARIABLE_Specs_0_9;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__get_matching_pred_ids_9_p_0(
  MR_Word ModuleInfo_10,
  MR_String Pragma_11,
  MR_Word RequireOneMatch_12,
  MR_Word PragmaAllowsModes_13,
  MR_Word Context_14,
  MR_Word PFU_15,
  MR_Word SymName_16,
  MR_Word UserArity_17,
  MR_Word * Result_18)
{
  MR_Word PredTable0_19;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_10, &PredTable0_19);
  if (((MR_tag((MR_Word) SymName_16)) == (MR_Integer) 1))
  {
    MR_Word PredIds_23;
    MR_Word WarnSpecs_24;

    switch (PFU_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PredFormArity_153;

          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_17, &PredFormArity_153);
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_19, (MR_Integer) 0, (MR_Integer) 1, SymName_16, PredFormArity_153, &PredIds_23);
          WarnSpecs_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word PredFormArity_25;

          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_17, &PredFormArity_25);
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable0_19, (MR_Integer) 0, (MR_Integer) 0, SymName_16, PredFormArity_25, &PredIds_23);
          WarnSpecs_24 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable0_19, (MR_Integer) 0, SymName_16, UserArity_17, &PredIds_23);
          hlds__make_hlds_error__warn_about_pfu_unknown_7_p_0(ModuleInfo_10, Pragma_11, PragmaAllowsModes_13, SymName_16, UserArity_17, Context_14, &WarnSpecs_24);
        }
        break;
    }
    if ((PredIds_23 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word SymOnlyPredIds_26;
      MR_Word PredIdTable0_27;
      MR_Word OtherUserArities_28;
      MR_Word DescPieces_29;
      MR_Word NoMatchSpecs_30;
      MR_Word Var_54;
      MR_Word Var_59;
      MR_Word Var_61;

      hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable0_19, (MR_Integer) 0, SymName_16, &SymOnlyPredIds_26);
      hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_10, &PredIdTable0_27);
      hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable0_27, SymOnlyPredIds_26, UserArity_17, &OtherUserArities_28);
      {
        Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_54, 1) = ((MR_Box) (Pragma_11));
      }
      {
        DescPieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, DescPieces_29, 0) = ((MR_Box) (Var_54));
        MR_hl_field(1, DescPieces_29, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[5])));
      }
      Var_59 = parse_tree__prog_item__pfu_to_maybe_pred_or_func_1_f_0(PFU_15);
      hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_59, SymName_16, UserArity_17, OtherUserArities_28, Context_14, DescPieces_29, (MR_Word) ((MR_Unsigned) 0U), &NoMatchSpecs_30);
      Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), NoMatchSpecs_30, WarnSpecs_24);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_61));
      }
    }
    else
    {
      MR_Word Var_159 = ((MR_Word) ((MR_hl_field(1, PredIds_23, 1))));
      MR_Word Var_160 = ((MR_Word) ((MR_hl_field(1, PredIds_23, 0))));

      if ((Var_159 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Result_18 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_160));
          MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, base, 2) = ((MR_Box) (WarnSpecs_24));
        }
      else
      {
        MR_Integer UserArityInt_35 = (MR_Integer) (UserArity_17);

        switch (RequireOneMatch_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Globals_36;
              MR_Word WarnActual_37;

              hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_36);
              libs__globals__lookup_bool_option_3_p_0(Globals_36, (MR_Integer) 181, &WarnActual_37);
              switch (WarnActual_37) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    *Result_18 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (Var_160));
                    MR_hl_field(0, base, 1) = ((MR_Box) (Var_159));
                    MR_hl_field(0, base, 2) = ((MR_Box) (WarnSpecs_24));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SNA_38;
                    MR_Word ActualPieces_39;
                    MR_Word ActualSpec_41;
                    MR_Word Var_65;
                    MR_Word Var_68;
                    MR_Word Var_69;
                    MR_Word Var_74;
                    MR_Word Var_75;
                    MR_Word Var_76;
                    MR_Word Var_77;
                    MR_Word Var_82;
                    MR_Word Var_89;
                    MR_Word Var_90;
                    MR_Word Var_107;

                    {
                      SNA_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, SNA_38, 0) = ((MR_Box) (SymName_16));
                      MR_hl_field(0, SNA_38, 1) = ((MR_Box) (UserArityInt_35));
                    }
                    {
                      Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                      MR_hl_field(3, Var_69, 1) = ((MR_Box) (Pragma_11));
                    }
                    {
                      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
                      MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[68])));
                    }
                    {
                      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_65, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[66])));
                      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_68));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                      MR_hl_field(3, Var_77, 1) = ((MR_Box) (SNA_38));
                    }
                    {
                      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
                      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[70])));
                    }
                    Var_75 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
                    Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[79])));
                    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])));
                    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[73])), Var_89);
                    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_82);
                    ActualPieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, Var_74);
                    {
                      ActualSpec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ActualSpec_41, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.get_matching_pred_ids\'/9"));
                      MR_hl_field(0, ActualSpec_41, 1) = ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pragma_util_scalar_common_2[3])));
                      MR_hl_field(0, ActualSpec_41, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                      MR_hl_field(0, ActualSpec_41, 3) = ((MR_Box) (Context_14));
                      MR_hl_field(0, ActualSpec_41, 4) = ((MR_Box) (ActualPieces_39));
                    }
                    {
                      Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_107, 0) = ((MR_Box) (ActualSpec_41));
                      MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      *Result_18 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (Var_160));
                      MR_hl_field(0, base, 1) = ((MR_Box) (Var_159));
                      MR_hl_field(0, base, 2) = ((MR_Box) (Var_107));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ErrorPieces_42;
              MR_Word ErrorSpec_43;
              MR_Word Var_109;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_118;
              MR_Word Var_119;
              MR_Word Var_120;
              MR_Word Var_121;
              MR_Word Var_126;
              MR_Word Var_133;
              MR_Word Var_134;
              MR_Word Var_151;
              MR_Word SNA_154;

              {
                SNA_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, SNA_154, 0) = ((MR_Box) (SymName_16));
                MR_hl_field(0, SNA_154, 1) = ((MR_Box) (UserArityInt_35));
              }
              {
                Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                MR_hl_field(3, Var_113, 1) = ((MR_Box) (Pragma_11));
              }
              {
                Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
                MR_hl_field(1, Var_112, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[68])));
              }
              {
                Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[66])));
                MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
              }
              {
                Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_121, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                MR_hl_field(3, Var_121, 1) = ((MR_Box) (SNA_154));
              }
              {
                Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_120, 0) = ((MR_Box) (Var_121));
                MR_hl_field(1, Var_120, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[70])));
              }
              Var_119 = parse_tree__error_spec__color_as_subject_1_f_0(Var_120);
              Var_134 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[79])));
              Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_134, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])));
              Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[82])), Var_133);
              Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_119, Var_126);
              ErrorPieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_109, Var_118);
              {
                ErrorSpec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, ErrorSpec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.get_matching_pred_ids\'/9"));
                MR_hl_field(0, ErrorSpec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, ErrorSpec_43, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, ErrorSpec_43, 3) = ((MR_Box) (Context_14));
                MR_hl_field(0, ErrorSpec_43, 4) = ((MR_Box) (ErrorPieces_42));
              }
              {
                Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_151, 0) = ((MR_Box) (ErrorSpec_43));
                MR_hl_field(1, Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_18 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_151));
              }
            }
            break;
        }
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.get_matching_pred_ids\'/9", (MR_String) "unqualified name");
      return;
    }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util__pragma_conflict_error_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  hlds__hlds_markers__marker_name_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__pragma_conflict_error_6_p_0(
  MR_Word PredSpec_7,
  MR_Word Context_8,
  MR_String PragmaName_9,
  MR_Word ConflictMarkers_10,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word PFU_12 = ((MR_Unsigned) ((MR_hl_field(0, PredSpec_7, 0))) & (MR_Integer) 3);
  MR_Word PredSymName_13 = ((MR_Word) ((MR_hl_field(0, PredSpec_7, 1))));
  MR_Word UserArity_14 = ((MR_Word) ((MR_hl_field(0, PredSpec_7, 2))));
  MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_14);
  MR_Word SNA_16;
  MR_Word PorFPieces_17;
  MR_Word ConflictNames_18;
  MR_Word Pieces_19;
  MR_Word Spec_20;
  MR_Word Var_30;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_49;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_String Var_60;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Box conv1_Var_60;

  {
    SNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_16, 0) = ((MR_Box) (PredSymName_13));
    MR_hl_field(0, SNA_16, 1) = ((MR_Box) (UserArityInt_15));
  }
  switch (PFU_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      PorFPieces_17 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[59]));
      break;
    case (MR_Integer) 0:
      PorFPieces_17 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[61]));
      break;
    case (MR_Integer) 2:
      PorFPieces_17 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
  Var_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), ConflictMarkers_10);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_markers__hlds__hlds_markers__type_ctor_info_pred_marker_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_5[0]), Var_30, &ConflictNames_18);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (PragmaName_9));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[5])));
  }
  Var_36 = parse_tree__error_spec__color_as_subject_1_f_0(Var_37);
  Var_44 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[63])));
  Var_55 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", ConflictNames_18);
  conv1_Var_60 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ConflictNames_18, ((MR_Box) ((MR_String) "pragma for")), ((MR_Box) ((MR_String) "pragmas for")));
  Var_60 = ((MR_String) (conv1_Var_60));
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 15U));
    MR_hl_field(3, Var_68, 1) = ((MR_Box) (SNA_16));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[7])));
  }
  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PorFPieces_17, Var_67);
  Var_65 = parse_tree__error_spec__color_as_subject_1_f_0(Var_66);
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_65, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])));
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_64);
  Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_57);
  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[65])), Var_54);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_49);
  Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_43);
  Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[9])), Var_35);
  {
    Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.pragma_conflict_error\'/6"));
    MR_hl_field(0, Spec_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_8));
    MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_22 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_20));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__check_pragma_status_7_p_0(
  MR_String PragmaName_8,
  MR_Word StatusClass_9,
  MR_Word PragmaStatus_10,
  MR_Word Context_11,
  MR_Word PredInfo_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  if (((MR_tag((MR_Word) PragmaStatus_10)) == (MR_Integer) 1))
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  else
  {
    MR_Word PragmaExport_15 = ((MR_Unsigned) ((MR_hl_field(0, PragmaStatus_10, 0))) & (MR_Integer) 3);
    MR_Word PredStatus_17;
    MR_Word PredExported_18;

    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_12, &PredStatus_17);
    PredExported_18 = hlds__status__pred_status_is_exported_to_non_submodules_1_f_0(PredStatus_17);
    switch (PragmaExport_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        switch (PredExported_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word PredNamePieces_19;
              MR_Word Pieces_20;
              MR_Word Spec_21;
              MR_Word Var_33;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word Var_38;
              MR_Word Var_39;
              MR_Word Var_44;
              MR_Word Var_45;

              PredNamePieces_19 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_2[1])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_12);
              {
                Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                MR_hl_field(3, Var_39, 1) = ((MR_Box) (PragmaName_8));
              }
              {
                Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
                MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[41])));
              }
              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[46])));
                MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
              }
              Var_45 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[48])));
              Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_45, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])));
              Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_44);
              Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNamePieces_19, Var_34);
              Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[45])), Var_33);
              {
                Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.check_pragma_status\'/7"));
                MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_11));
                MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_24 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
              }
            }
            break;
          case (MR_Integer) 1:
            switch (StatusClass_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_89;
                  MR_Word Var_92;
                  MR_Word Var_93;
                  MR_Word Var_98;
                  MR_Word Var_99;
                  MR_Word Pieces_129;
                  MR_Word Spec_130;

                  {
                    Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_93, 1) = ((MR_Box) (PragmaName_8));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                    MR_hl_field(1, Var_92, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[5])));
                  }
                  {
                    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[49])));
                    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
                  }
                  Var_99 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[51])));
                  Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[57])));
                  Pieces_129 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, Var_98);
                  {
                    Spec_130 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_130, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.check_pragma_status\'/7"));
                    MR_hl_field(0, Spec_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(0, Spec_130, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_130, 3) = ((MR_Box) (Context_11));
                    MR_hl_field(0, Spec_130, 4) = ((MR_Box) (Pieces_129));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_24 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_130));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                  }
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        switch (PredExported_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
            break;
          case (MR_Integer) 1:
            switch (StatusClass_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_65;
                  MR_Word Var_66;
                  MR_Word Var_67;
                  MR_Word Var_70;
                  MR_Word Var_71;
                  MR_Word Var_76;
                  MR_Word Var_77;
                  MR_Word PredNamePieces_120;
                  MR_Word Pieces_121;
                  MR_Word Spec_122;

                  PredNamePieces_120 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_2[1])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_12);
                  {
                    Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 36U));
                    MR_hl_field(3, Var_71, 1) = ((MR_Box) (PragmaName_8));
                  }
                  {
                    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
                    MR_hl_field(1, Var_70, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[41])));
                  }
                  {
                    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[39])));
                    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
                  }
                  Var_77 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[43])));
                  Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])));
                  Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, Var_76);
                  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredNamePieces_120, Var_66);
                  Pieces_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[38])), Var_65);
                  {
                    Spec_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Spec_122, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.check_pragma_status\'/7"));
                    MR_hl_field(0, Spec_122, 1) = ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_pragma_util_scalar_common_2[2])));
                    MR_hl_field(0, Spec_122, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                    MR_hl_field(0, Spec_122, 3) = ((MR_Box) (Context_11));
                    MR_hl_field(0, Spec_122, 4) = ((MR_Box) (Pieces_121));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_24 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_122));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                  }
                }
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
                break;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_mode_num_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word IsFullyQualified_12,
  MR_Word FailHandling_13,
  MR_Word Context_14,
  MR_String PragmaName_15,
  MR_Word PredOrFunc_16,
  MR_Word SymName_17,
  MR_Word UserArity_18,
  MR_Integer ModeNum_19,
  MR_Word * MaybePredProcId_20)
{
  MR_bool succeeded;
  MR_Word MaybePredId_21;

  hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(ModuleInfo_11, IsFullyQualified_12, FailHandling_13, Context_14, PragmaName_15, PredOrFunc_16, SymName_17, UserArity_18, &MaybePredId_21);
  if (((MR_tag((MR_Word) MaybePredId_21)) == (MR_Integer) 0))
  {
    MR_Word Specs_33 = ((MR_Word) ((MR_hl_field(0, MaybePredId_21, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredProcId_20 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_33));
    }
  }
  else
  {
    MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(1, MaybePredId_21, 0))));
    MR_Integer ProcId_23;
    MR_Word PredInfo_24;
    MR_Word ProcTable_25;
    MR_Word ProcInfo_26;
    MR_Box conv0_ProcInfo_26;

    hlds__hlds_pred__proc_id_to_int_2_p_1(&ProcId_23, ModeNum_19);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_22, &PredInfo_24);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_24, &ProcTable_25);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_25, ((MR_Box) (ProcId_23)), &conv0_ProcInfo_26);
    if (succeeded)
    {
      ProcInfo_26 = ((MR_Word) (conv0_ProcInfo_26));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredProcId_20 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (PredId_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (ProcId_23));
        MR_hl_field(1, base, 2) = ((MR_Box) (PredInfo_24));
        MR_hl_field(1, base, 3) = ((MR_Box) (ProcInfo_26));
      }
    else
    {
      MR_Word PorF_27;
      MR_String PredName_28;
      MR_Integer UserArityInt_29;
      MR_Word NameArity_30;
      MR_Word Pieces_31;
      MR_Word Spec_32;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_71;

      PorF_27 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_24);
      PredName_28 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_24);
      Var_34 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_24);
      UserArityInt_29 = (MR_Integer) (Var_34);
      {
        NameArity_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NameArity_30, 0) = ((MR_Box) (PredName_28));
        MR_hl_field(0, NameArity_30, 1) = ((MR_Box) (UserArityInt_29));
      }
      {
        Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 36U));
        MR_hl_field(3, Var_39, 1) = ((MR_Box) (PragmaName_15));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[31])));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[28])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, Var_53, 1) = ((MR_Box) (ModeNum_19));
      }
      {
        Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_58, 1) = (MR_Box) ((MR_Unsigned) (PorF_27));
      }
      {
        Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(3, Var_60, 1) = ((MR_Box) (NameArity_30));
      }
      {
        Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[7])));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[33])));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[32])));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
      }
      Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
      Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[23])));
      Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, Var_47);
      {
        Spec_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.look_up_pragma_pf_sym_arity_mode_num\'/10"));
        MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Context_14));
        MR_hl_field(0, Spec_32, 4) = ((MR_Box) (Pieces_31));
      }
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (Spec_32));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredProcId_20 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_71));
      }
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_error_util__describe_qual_pred_name_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma_util__IntroducedFrom__pred__look_up_pragma_pf_sym_arity__258__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word IsFullyQualified_11,
  MR_Word FailHandling_12,
  MR_Word Context_13,
  MR_String PragmaName_14,
  MR_Word PredOrFunc_15,
  MR_Word SymName_16,
  MR_Word UserArity_17,
  MR_Word * MaybePredId_18)
{
  MR_bool succeeded;
  MR_Word PredTable_19;
  MR_Word PredFormArity_20;
  MR_Word PredIds_21;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_10, &PredTable_19);
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_15, UserArity_17, &PredFormArity_20);
  hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_19, IsFullyQualified_11, PredOrFunc_15, SymName_16, PredFormArity_20, &PredIds_21);
  if ((PredIds_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Specs_26;

    switch (FailHandling_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_28;
          MR_Word InformIgnored_29;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_28);
          libs__globals__lookup_bool_option_3_p_0(Globals_28, (MR_Integer) 692, &InformIgnored_29);
          switch (InformIgnored_29) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Specs_26 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word Spec_135;

                Spec_135 = hlds__make_hlds__add_pragma_util__report_unknown_pred_or_func_6_f_0((MR_Word) ((MR_Unsigned) 0U), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
                {
                  Specs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Specs_26, 0) = ((MR_Box) (Spec_135));
                  MR_hl_field(1, Specs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Spec_27;

          Spec_27 = hlds__make_hlds__add_pragma_util__report_unknown_pred_or_func_6_f_0((MR_Word) ((MR_Unsigned) 0U), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
          {
            Specs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Specs_26, 0) = ((MR_Box) (Spec_27));
            MR_hl_field(1, Specs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllArityPredIds_22;
          MR_Word PredIdTable_23;
          MR_Word OtherUserArities_24;
          MR_Word DeclPieces_25;
          MR_Word Var_43;
          MR_Word Var_48;

          hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_19, (MR_Integer) 1, PredOrFunc_15, SymName_16, &AllArityPredIds_22);
          hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_10, &PredIdTable_23);
          hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable_23, AllArityPredIds_22, UserArity_17, &OtherUserArities_24);
          {
            Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 36U));
            MR_hl_field(3, Var_43, 1) = ((MR_Box) (PragmaName_14));
          }
          {
            DeclPieces_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DeclPieces_25, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, DeclPieces_25, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[5])));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (PredOrFunc_15));
          }
          hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(Var_48, SymName_16, UserArity_17, OtherUserArities_24, Context_13, DeclPieces_25, (MR_Word) ((MR_Unsigned) 0U), &Specs_26);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybePredId_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Specs_26));
    }
  }
  else
  {
    MR_Word Var_155 = ((MR_Word) ((MR_hl_field(1, PredIds_21, 1))));
    MR_Word Var_156 = ((MR_Word) ((MR_hl_field(1, PredIds_21, 0))));

    if ((Var_155 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybePredId_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_156));
      }
    else
    {
      MR_Word Var_57;
      MR_Word Specs_148;

      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_57, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_util_scalar_common_3[0]));
        MR_hl_field(0, Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0_1));
        MR_hl_field(0, Var_57, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_57, 3) = ((MR_Box) (IsFullyQualified_11));
        MR_hl_field(0, Var_57, 4) = ((MR_Box) ((MR_Integer) 1));
      }
      mercury__require__expect_3_p_0(Var_57, (MR_String) "predicate \140hlds.make_hlds.add_pragma_util.look_up_pragma_pf_sym_arity\'/9", (MR_String) "two or more PredIds but is_fully_qualified");
      switch (FailHandling_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Globals_143;
            MR_Word InformIgnored_144;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_143);
            libs__globals__lookup_bool_option_3_p_0(Globals_143, (MR_Integer) 692, &InformIgnored_144);
            switch (InformIgnored_144) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Specs_148 = (MR_Word) ((MR_Unsigned) 0U);
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Spec_140;

                  Spec_140 = hlds__make_hlds__add_pragma_util__report_ambiguous_pred_or_func_6_f_0((MR_Word) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_2[0])), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
                  {
                    Specs_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Specs_148, 0) = ((MR_Box) (Spec_140));
                    MR_hl_field(1, Specs_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Spec_139;

            Spec_139 = hlds__make_hlds__add_pragma_util__report_ambiguous_pred_or_func_6_f_0((MR_Word) ((MR_Unsigned) 0U), PragmaName_14, Context_13, PredOrFunc_15, SymName_16, UserArity_17);
            {
              Specs_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Specs_148, 0) = ((MR_Box) (Spec_139));
              MR_hl_field(1, Specs_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer UserArityInt_34 = (MR_Integer) (UserArity_17);
            MR_Word SNA_35;
            MR_Word PredIdPiecesList_36;
            MR_Word PredIdPieces_37;
            MR_Word MainPieces_38;
            MR_Word Msg_40;
            MR_Word Var_61;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_84;
            MR_Word Var_85;
            MR_Word Var_87;
            MR_Word Var_88;
            MR_Word Var_91;
            MR_Word Var_92;
            MR_Word Var_105;
            MR_Word Var_118;
            MR_Word Var_119;
            MR_Word Var_127;
            MR_Word Spec_138;

            {
              SNA_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SNA_35, 0) = ((MR_Box) (SymName_16));
              MR_hl_field(0, SNA_35, 1) = ((MR_Box) (UserArityInt_34));
            }
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_61, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_util_scalar_common_4[0]));
              MR_hl_field(0, Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_util__look_up_pragma_pf_sym_arity_9_p_0_2));
              MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_61, 3) = ((MR_Box) (ModuleInfo_10));
            }
            PredIdPiecesList_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_util_scalar_common_1[0]), Var_61, PredIds_21);
            PredIdPieces_37 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 4, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[7])), PredIdPiecesList_36);
            {
              Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 31U));
              MR_hl_field(3, Var_77, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_15));
            }
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[12])));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[10])));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
            }
            Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_73);
            {
              Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_85, 1) = ((MR_Box) (SNA_35));
            }
            {
              Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
              MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_83 = parse_tree__error_spec__color_as_subject_1_f_0(Var_84);
            {
              Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 36U));
              MR_hl_field(3, Var_92, 1) = ((MR_Box) (PragmaName_14));
            }
            {
              Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
              MR_hl_field(1, Var_91, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[20])));
            }
            {
              Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[13])));
              MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_91));
            }
            Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredIdPieces_37, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[22])));
            Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_105);
            Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, Var_87);
            Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_72, Var_82);
            MainPieces_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[9])), Var_71);
            {
              Var_119 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_119, 0) = ((MR_Box) (MainPieces_38));
            }
            {
              Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
              MR_hl_field(1, Var_118, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[87])));
            }
            {
              Msg_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Msg_40, 0) = ((MR_Box) (Context_13));
              MR_hl_field(2, Msg_40, 1) = ((MR_Box) (Var_118));
            }
            {
              Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_127, 0) = ((MR_Box) (Msg_40));
              MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_138 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Spec_138, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_util.look_up_pragma_pf_sym_arity\'/9"));
              MR_hl_field(2, Spec_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(2, Spec_138, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(2, Spec_138, 3) = ((MR_Box) (Var_127));
            }
            {
              Specs_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Specs_148, 0) = ((MR_Box) (Spec_138));
              MR_hl_field(1, Specs_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          break;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybePredId_18 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_148));
      }
    }
  }
}

MR_Word MR_CALL 
hlds__make_hlds__add_pragma_util__report_ambiguous_pred_or_func_6_f_0(
  MR_Word Severity_8,
  MR_String PragmaName_9,
  MR_Word Context_10,
  MR_Word PredOrFunc_11,
  MR_Word SymName_12,
  MR_Word UserArity_13)
{
  MR_Word Spec_14;
  MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_13);
  MR_Word SNA_16;
  MR_Word Pieces_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_38;
  MR_Word Var_39;

  {
    SNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_16, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, SNA_16, 1) = ((MR_Box) (UserArityInt_15));
  }
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
  }
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (SNA_16));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[11])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[10])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_24);
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) (PragmaName_9));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[36])));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[13])));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_35);
  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[34])), Var_22);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_pragma_util.report_ambiguous_pred_or_func\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) (Severity_8));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_17));
  }
  return Spec_14;
}

MR_Word MR_CALL 
hlds__make_hlds__add_pragma_util__report_unknown_pred_or_func_6_f_0(
  MR_Word Severity_8,
  MR_String PragmaName_9,
  MR_Word Context_10,
  MR_Word PredOrFunc_11,
  MR_Word SymName_12,
  MR_Word UserArity_13)
{
  MR_Word Spec_14;
  MR_Integer UserArityInt_15 = (MR_Integer) (UserArity_13);
  MR_Word SNA_16;
  MR_Word Pieces_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;

  {
    SNA_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_16, 0) = ((MR_Box) (SymName_12));
    MR_hl_field(0, SNA_16, 1) = ((MR_Box) (UserArityInt_15));
  }
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_28, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_11));
  }
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 14U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (SNA_16));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_29));
  }
  {
    Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_24, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[35])));
    MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
  }
  Var_23 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_24);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 36U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (PragmaName_9));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[36])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_util_scalar_common_1[13])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_23, Var_32);
  Pieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_util_scalar_common_1[34])), Var_22);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_pragma_util.report_unknown_pred_or_func\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) (Severity_8));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_17));
  }
  return Spec_14;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____add_marker_pred_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_util____Unify____add_marker_pred_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____add_marker_pred_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_util____Compare____add_marker_pred_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____lookup_failure_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_util____Unify____lookup_failure_handling_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____lookup_failure_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_util____Compare____lookup_failure_handling_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____matching_pred_ids_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_util____Unify____matching_pred_ids_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____matching_pred_ids_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_util____Compare____matching_pred_ids_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____maybe_require_one_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_util____Unify____maybe_require_one_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____maybe_require_one_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_util____Compare____maybe_require_one_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_util____Unify____pragma_status_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_pragma_util____Unify____pragma_status_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_util____Compare____pragma_status_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_pragma_util____Compare____pragma_status_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_pragma_util__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_add_marker_pred_info_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_lookup_failure_handling_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_matching_pred_ids_result_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_maybe_require_one_match_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_pragma_util__hlds__make_hlds__add_pragma_util__type_ctor_info_pragma_status_class_0);
}

void mercury__hlds__make_hlds__add_pragma_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma_util.
