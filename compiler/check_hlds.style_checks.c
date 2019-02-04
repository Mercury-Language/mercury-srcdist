/*
** Automatically generated from `style_checks.m'
** by the Mercury compiler,
** version rotd-2018-09-09
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


// :- module check_hlds.style_checks.
// :- implementation.

/*
INIT mercury__check_hlds__style_checks__init
ENDINIT
*/

#include "check_hlds.style_checks.mih"


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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
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
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__maybe__pti_maybe_1__plain_hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0[1];

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_pred_item_numbers_0_0[4];

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_pred_item_numbers_0_0[4];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_item_numbers_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_item_numbers_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_item_numbers_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_item_numbers_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_item_numbers_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_item_numbers_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_pred_style_info_0_0[3];

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_pred_style_info_0_0[3];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_style_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_style_info_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_style_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_style_info_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_style_info_0[1];

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_0;

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_1;

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_value_ordered_proc_contiguity_0[2];

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_proc_contiguity_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_proc_contiguity_0[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_1[1];

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_style_warnings_task_0_1[1];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_1;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_2[1];

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_style_warnings_task_0_2[1];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_2;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_2[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_style_warnings_task_0[3];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_style_warnings_task_0[3];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_style_warnings_task_0[3];

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks__diff_line_to_pieces_2_p_0(
  MR_String Line0_3,
  MR_Word * Pieces_4);

static void MR_CALL 
check_hlds__style_checks__write_pred_desc_4_p_0(
  MR_Word Stream_5,
  MR_Word PredItemNumbers_6);

static void MR_CALL 
check_hlds__style_checks__compare_defn_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6);

static void MR_CALL 
check_hlds__style_checks__compare_decl_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6);

static void MR_CALL 
check_hlds__style_checks__gather_proc_item_numbers_5_p_0(
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_RevProcINCs_0_12,
  MR_Word * STATE_VARIABLE_RevProcINCs_13,
  MR_Word STATE_VARIABLE_MakesSense_0_14,
  MR_Word * STATE_VARIABLE_MakesSense_15);

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeDefnKind_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_StyleInfo_0_42,
  MR_Word * STATE_VARIABLE_StyleInfo_43);

static void MR_CALL 
check_hlds__style_checks__report_any_inc_gaps_7_p_0(
  MR_Word PredInfo_8,
  MR_Word FirstINC_9,
  MR_Word SecondINC_10,
  MR_Word LaterINCs_11,
  MR_Integer FirstProcNum_12,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(
  MR_Word ModuleContext_8,
  MR_String ExportedOrNotStr_9,
  MR_Word PredItemNumbers_10,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_execute_cmd_spec_3_f_0(
  MR_String ExportedOrNotStr_5,
  MR_String Cmd_6,
  MR_Word Error_7);

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_create_temp_file_spec_2_f_0(
  MR_String ExportedOrNotStr_4,
  MR_Word Error_5);

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0(
  MR_Word DiffStream_8,
  MR_String DiffFileName_9,
  MR_Word ModuleContext_10,
  MR_String ExportedOrNotStr_11,
  MR_Word * Spec_12);

static void MR_CALL 
check_hlds__style_checks__read_lines_as_rev_strings_6_p_0(
  MR_Word Stream_7,
  MR_Word STATE_VARIABLE_RevLines_0_14,
  MR_Word * STATE_VARIABLE_RevLines_15,
  MR_Word * MaybeIOError_9);

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0(
  MR_String ExportedOrNotStr_7,
  MR_String DeclOrDefnOrderStr_8,
  MR_Word PredItemNumbers_9,
  MR_Word * MaybeFileName_10);

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(
  MR_String ExportedOrNotStr_5,
  MR_String TempFileName_6,
  MR_Word Error_7);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_warnings_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____style_warnings_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__style_checks_scalar_common_1[55][2];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_2[2][1];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_3[2][7];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_4[1][5];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_5[6][3];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_6[1][6];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_7[2][8];




static /* final */ const MR_Box check_hlds__style_checks_scalar_common_1[55][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "its first mode declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not followed immediately by"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first mode declaration"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration is here."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__style_checks_scalar_common_2[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__style_checks_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is inconsistent, as shown by this diff:"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicates"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not have the expected format."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "diff -u"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the output of"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicates,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Cannot generate diagnostics"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "about inconsistencies between the order of"))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the declarations and definitions of"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicates,"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the opening of the temporary file"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "failed:"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the declarations and definitions of the"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the creation of a temporary file failed:"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the order of"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the declarations and definitions"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because reading of the temporary file"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the execution of the following command failed:"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The error message was:"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not followed immediately by its"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "+++ definition order"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "--- declaration order"))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_4[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_5[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_4[0])),
    ((MR_Box) (check_hlds__style_checks__diff_file_to_spec_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_3[1])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_7[1])),
    ((MR_Box) (check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_7[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__style_checks__maybe__pti_maybe_1__plain_hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__maybe__pti_maybe_1__plain_hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0 = {
  (MR_String) "inc",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____inc_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____inc_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "inc",
  {     check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0 },
  {     check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_pred_item_numbers_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_pred_item_numbers_0_0[4] = {
  (MR_String) "piwin_pred_id",
  (MR_String) "piwin_pred_info",
  (MR_String) "piwin_decl_item_number",
  (MR_String) "piwin_first_defn_item_number"
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_item_numbers_0_0 = {
  (MR_String) "pred_item_numbers",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__style_checks__check_hlds__style_checks__field_types_pred_item_numbers_0_0,
  check_hlds__style_checks__check_hlds__style_checks__field_names_pred_item_numbers_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_item_numbers_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_item_numbers_0_0
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_item_numbers_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_item_numbers_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_item_numbers_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_item_numbers_0_0
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_item_numbers_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____pred_item_numbers_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____pred_item_numbers_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "pred_item_numbers",
  {     check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_item_numbers_0 },
  {     check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_item_numbers_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_item_numbers_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_item_numbers_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_pred_style_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_item_numbers_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_item_numbers_0),
  (MR_PseudoTypeInfo) (&check_hlds__style_checks__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_ConstString check_hlds__style_checks__check_hlds__style_checks__field_names_pred_style_info_0_0[3] = {
  (MR_String) "style_exported_preds",
  (MR_String) "style_nonexported_preds",
  (MR_String) "style_specs"
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_style_info_0_0 = {
  (MR_String) "pred_style_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__style_checks__check_hlds__style_checks__field_types_pred_style_info_0_0,
  check_hlds__style_checks__check_hlds__style_checks__field_names_pred_style_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_style_info_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_style_info_0_0
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_style_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_style_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_style_info_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_style_info_0_0
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_style_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____pred_style_info_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____pred_style_info_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "pred_style_info",
  {     check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_style_info_0 },
  {     check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_style_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_style_info_0
};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_0 = {
  (MR_String) "proc_contiguity_makes_sense",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_1 = {
  (MR_String) "proc_contiguity_does_not_makes_sense",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_value_ordered_proc_contiguity_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_proc_contiguity_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_1,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_0
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_proc_contiguity_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__style_checks____Unify____proc_contiguity_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____proc_contiguity_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "proc_contiguity",
  {     check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_proc_contiguity_0 },
  {     check_hlds__style_checks__check_hlds__style_checks__enum_value_ordered_proc_contiguity_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_proc_contiguity_0
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_0 = {
  (MR_String) "non_contiguous_decls_only",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0)
};

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_style_warnings_task_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_1 = {
  (MR_String) "inconsistent_pred_order_only",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_1,
  NULL,
  check_hlds__style_checks__check_hlds__style_checks__field_locns_style_warnings_task_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_2[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0)
};

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_style_warnings_task_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_2 = {
  (MR_String) "non_contiguous_decls_and_inconsistent_pred_order",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_2,
  NULL,
  check_hlds__style_checks__check_hlds__style_checks__field_locns_style_warnings_task_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_0
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_1[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_1
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_2[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_2
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_style_warnings_task_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_style_warnings_task_0[3] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_1,
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_2,
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_0
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_style_warnings_task_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_style_warnings_task_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____style_warnings_task_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____style_warnings_task_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "style_warnings_task",
  {     check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_style_warnings_task_0 },
  {     check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_style_warnings_task_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_style_warnings_task_0
};

void MR_CALL 
check_hlds__style_checks____Compare____style_warnings_task_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_22 = (MR_Integer) (Var_20);
                  MR_Integer Var_23 = (MR_Integer) (ArgY1_8);
                  MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_22, Var_23);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_24 = (MR_Integer) (Var_21);
                  MR_Integer Var_25 = (MR_Integer) (ArgY1_15);
                  MR_Unsigned packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_24, Var_25);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_warnings_task_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_6;
            MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Unsigned packed_args_1;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_8;
            MR_Unsigned packed_args_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Unsigned packed_args_3;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              packed_args_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), &Var_10, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), &Var_11, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word TypeInfo_13_13;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Var_12;

      hlds__hlds_pred____Compare____pred_id_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        hlds__hlds_pred____Compare____pred_info_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
        mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX2_6, ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = mercury__term____Unify____context_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks__diff_line_to_pieces_2_p_0(
  MR_String Line0_3,
  MR_Word * Pieces_4)
{
  {
    MR_String Line_5;
    MR_Word Var_7;

    Line_5 = mercury__string__remove_suffix_if_present_2_f_0((MR_String) "\n", Line0_3);
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (Line_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *Pieces_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])));
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__write_pred_desc_4_p_0(
  MR_Word Stream_5,
  MR_Word PredItemNumbers_6)
{
  {
    MR_Word PredInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredItemNumbers_6, (MR_Integer) 1))));
    MR_Word PredPieces_12;
    MR_String PredDesc_13;

    PredPieces_12 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_9);
    PredDesc_13 = parse_tree__error_util__error_pieces_to_string_1_f_0(PredPieces_12);
    mercury__io__write_string_4_p_0(Stream_5, PredDesc_13);
    mercury__io__nl_3_p_0(Stream_5);
  }
}

static void MR_CALL 
check_hlds__style_checks__compare_defn_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6)
{
  {
    MR_Integer ItemNumberA_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3))));
    MR_Integer ItemNumberB_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3))));

    mercury__private_builtin__builtin_compare_int_3_p_0(R_6, ItemNumberA_10, ItemNumberB_14);
  }
}

static void MR_CALL 
check_hlds__style_checks__compare_decl_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6)
{
  {
    MR_Integer ItemNumberA_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2))));
    MR_Integer ItemNumberB_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2))));

    mercury__private_builtin__builtin_compare_int_3_p_0(R_6, ItemNumberA_9, ItemNumberB_13);
  }
}

static void MR_CALL 
check_hlds__style_checks__gather_proc_item_numbers_5_p_0(
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_RevProcINCs_0_12,
  MR_Word * STATE_VARIABLE_RevProcINCs_13,
  MR_Word STATE_VARIABLE_MakesSense_0_14,
  MR_Word * STATE_VARIABLE_MakesSense_15)
{
  {
    MR_bool succeeded;

    succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_6);
    if (succeeded)
    {
      MR_Integer ItemNumber_9;

      hlds__hlds_pred__proc_info_get_item_number_2_p_0(ProcInfo_6, &ItemNumber_9);
      succeeded = (ItemNumber_9 > (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word Context_10;
        MR_Word ProcINC_11;

        hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_6, &Context_10);
        {
          ProcINC_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ProcINC_11, 0) = ((MR_Box) (ItemNumber_9));
          MR_hl_field(MR_mktag(0), ProcINC_11, 1) = ((MR_Box) (Context_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevProcINCs_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcINC_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevProcINCs_0_12));
        }
        *STATE_VARIABLE_MakesSense_15 = STATE_VARIABLE_MakesSense_0_14;
      }
      else
      {
        *STATE_VARIABLE_MakesSense_15 = (MR_Integer) 1;
        *STATE_VARIABLE_RevProcINCs_13 = STATE_VARIABLE_RevProcINCs_0_12;
      }
    }
    else
    {
      *STATE_VARIABLE_MakesSense_15 = (MR_Integer) 1;
      *STATE_VARIABLE_RevProcINCs_13 = STATE_VARIABLE_RevProcINCs_0_12;
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_RevProcINCs_13;
    MR_Word conv0_STATE_VARIABLE_MakesSense_15;

    check_hlds__style_checks__gather_proc_item_numbers_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_RevProcINCs_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_MakesSense_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_RevProcINCs_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_MakesSense_15));
  }
}

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeDefnKind_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_StyleInfo_0_42,
  MR_Word * STATE_VARIABLE_StyleInfo_43)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_10;
    MR_Word MaybeDeclInfo_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_10);
    hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(PredInfo_10, &MaybeDeclInfo_11);
    if ((MaybeDeclInfo_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StyleInfo_43 = STATE_VARIABLE_StyleInfo_0_42;
    else
    {
      MR_Word DeclInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclInfo_11, (MR_Integer) 0))));
      MR_Word DeclSection_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeclInfo_12, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Integer PredDeclItemNumber_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), DeclInfo_12, (MR_Integer) 1))));
      MR_Word ProcTable_16;
      MR_Word RevProcINCs_17;
      MR_Word MakesSense_18;
      MR_Word ProcINCs_19;
      MR_Word STATE_VARIABLE_StyleInfo_48_48;
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeclInfo_12, (MR_Integer) 0)));
      MR_Box conv3_RevProcINCs_17;
      MR_Box conv2_MakesSense_18;
      MR_Word HeadProcINC_20;
      MR_Word TailProcINCs_21;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_10, &ProcTable_16);
      mercury__map__foldl2_values_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[0]), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__style_checks_scalar_common_5[5]), ProcTable_16, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_RevProcINCs_17, ((MR_Box) ((MR_Integer) 0)), &conv2_MakesSense_18);
      RevProcINCs_17 = ((MR_Word) (conv3_RevProcINCs_17));
      MakesSense_18 = ((MR_Word) (conv2_MakesSense_18));
      mercury__list__reverse_2_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0), RevProcINCs_17, &ProcINCs_19);
      succeeded = (MakesSense_18 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) ProcINCs_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          HeadProcINC_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcINCs_19, (MR_Integer) 0))));
          TailProcINCs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcINCs_19, (MR_Integer) 1))));
        }
      }
      if (succeeded)
      {
        MR_Word PredDeclContext_22;
        MR_Word PredINC_23;
        MR_Word Specs0_24;
        MR_Word Specs_25;
        MR_Word Var_53;
        MR_Word Var_54;

        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &PredDeclContext_22);
        {
          PredINC_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredINC_23, 0) = ((MR_Box) (PredDeclItemNumber_15));
          MR_hl_field(MR_mktag(0), PredINC_23, 1) = ((MR_Box) (PredDeclContext_22));
        }
        Specs0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 2))));
        check_hlds__style_checks__report_any_inc_gaps_7_p_0(PredInfo_10, PredINC_23, HeadProcINC_20, TailProcINCs_21, (MR_Integer) 0, Specs0_24, &Specs_25);
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 0))));
        Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 1))));
        {
          STATE_VARIABLE_StyleInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_48_48, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_48_48, 1) = ((MR_Box) (Var_54));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_48_48, 2) = ((MR_Box) (Specs_25));
        }
      }
      else
        STATE_VARIABLE_StyleInfo_48_48 = STATE_VARIABLE_StyleInfo_0_42;
      if ((MaybeDefnKind_7 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_StyleInfo_43 = STATE_VARIABLE_StyleInfo_48_48;
      else
      {
        MR_Word DefnKind_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDefnKind_7, (MR_Integer) 0))));
        MR_Word ClausesInfo_27;
        MR_Word ClauseItemNumbers_29;
        MR_Word Regions_30;
        MR_Word _ClausesRep_28;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_10, &ClausesInfo_27);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_27, &_ClausesRep_28, &ClauseItemNumbers_29);
        hlds__hlds_clauses__clause_item_number_regions_3_p_0(ClauseItemNumbers_29, DefnKind_26, &Regions_30);
        if ((Regions_30 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_StyleInfo_43 = STATE_VARIABLE_StyleInfo_48_48;
        else
        {
          MR_Word FirstRegion_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Regions_30, (MR_Integer) 0))));
          MR_Integer FirstClauseItemNumber_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstRegion_31, (MR_Integer) 0))));
          MR_Word PredItemNumbers_37;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;

          {
            PredItemNumbers_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PredItemNumbers_37, 0) = ((MR_Box) (PredId_8));
            MR_hl_field(MR_mktag(0), PredItemNumbers_37, 1) = ((MR_Box) (PredInfo_10));
            MR_hl_field(MR_mktag(0), PredItemNumbers_37, 2) = ((MR_Box) (PredDeclItemNumber_15));
            MR_hl_field(MR_mktag(0), PredItemNumbers_37, 3) = ((MR_Box) (FirstClauseItemNumber_33));
          }
          Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_48_48, (MR_Integer) 0))));
          Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_48_48, (MR_Integer) 1))));
          Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_48_48, (MR_Integer) 2))));
          switch (DeclSection_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NonExportedPINs_41;

                {
                  NonExportedPINs_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NonExportedPINs_41, 0) = ((MR_Box) (PredItemNumbers_37));
                  MR_hl_field(MR_mktag(1), NonExportedPINs_41, 1) = ((MR_Box) (Var_77));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_StyleInfo_43 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_78));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NonExportedPINs_41));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_76));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word ExportedPINs_39;

                {
                  ExportedPINs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ExportedPINs_39, 0) = ((MR_Box) (PredItemNumbers_37));
                  MR_hl_field(MR_mktag(1), ExportedPINs_39, 1) = ((MR_Box) (Var_78));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *STATE_VARIABLE_StyleInfo_43 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExportedPINs_39));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_77));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_76));
                }
              }
              break;
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__report_any_inc_gaps_7_p_0(
  MR_Word PredInfo_8,
  MR_Word FirstINC_9,
  MR_Word SecondINC_10,
  MR_Word LaterINCs_11,
  MR_Integer FirstProcNum_12,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer FirstItemNumber_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstINC_9, (MR_Integer) 0))));
    MR_Word FirstContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstINC_9, (MR_Integer) 1))));
    MR_Integer SecondItemNumber_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SecondINC_10, (MR_Integer) 0))));
    MR_Word SecondContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondINC_10, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Specs_99_99;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) SecondItemNumber_16 - (MR_Unsigned) FirstItemNumber_14);

      succeeded = (Var_30 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      succeeded = (FirstProcNum_12 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (FirstItemNumber_14 == SecondItemNumber_16);
        if (succeeded)
          succeeded = (LaterINCs_11 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
    if (succeeded)
      STATE_VARIABLE_Specs_99_99 = STATE_VARIABLE_Specs_0_28;
    else
    {
      MR_Word PredPieces_18;
      MR_Word PredOrFunc_19;
      MR_String PredOrFuncStr_20;
      MR_Word FirstPieces_21;
      MR_Word SecondPieces_22;
      MR_Word FirstMsg_23;
      MR_Word SecondMsg_24;
      MR_Word Spec_25;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_96;
      MR_Word Var_97;

      PredPieces_18 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_8);
      PredOrFunc_19 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
      PredOrFuncStr_20 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_19);
      succeeded = (FirstProcNum_12 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;

        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (PredOrFuncStr_20));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[51])));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (PredPieces_18));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
        }
        FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_32, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[8])));
        SecondPieces_22 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[12]));
      }
      else
      {
        MR_Word Var_55;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Integer Var_68;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Integer Var_80;

        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (FirstProcNum_12));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[52])));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (PredPieces_18));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[50])));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
        }
        Var_68 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) (MR_Integer) 1);
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (Var_68));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[14])));
        }
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[53])));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
        }
        FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_55, Var_63);
        Var_80 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) (MR_Integer) 1);
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_79, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_79, 1) = ((MR_Box) (Var_80));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[16])));
        }
        {
          SecondPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SecondPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[54])));
          MR_hl_field(MR_mktag(1), SecondPieces_22, 1) = ((MR_Box) (Var_78));
        }
      }
      {
        Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) (FirstPieces_21));
      }
      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FirstMsg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstMsg_23, 0) = ((MR_Box) (FirstContext_15));
        MR_hl_field(MR_mktag(0), FirstMsg_23, 1) = ((MR_Box) (Var_88));
      }
      {
        Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (SecondPieces_22));
      }
      {
        Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        SecondMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SecondMsg_24, 0) = ((MR_Box) (SecondContext_17));
        MR_hl_field(MR_mktag(0), SecondMsg_24, 1) = ((MR_Box) (Var_91));
      }
      {
        Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_97, 0) = ((MR_Box) (SecondMsg_24));
        MR_hl_field(MR_mktag(1), Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (FirstMsg_23));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_97));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_96));
      }
      {
        STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
      }
    }
    if ((LaterINCs_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_99_99;
    else
    {
      MR_Word ThirdINC_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterINCs_11, (MR_Integer) 0))));
      MR_Word LaterLaterINCs_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterINCs_11, (MR_Integer) 1))));
      MR_Integer Var_100 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) (MR_Integer) 1);
      MR_Word next_value_of_FirstINC_9 = SecondINC_10;
      MR_Word next_value_of_SecondINC_10 = ThirdINC_26;
      MR_Word next_value_of_LaterINCs_11 = LaterLaterINCs_27;
      MR_Integer next_value_of_FirstProcNum_12 = Var_100;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_28 = STATE_VARIABLE_Specs_99_99;

      // direct tailcall eliminated
      ;
      FirstINC_9 = next_value_of_FirstINC_9;
      SecondINC_10 = next_value_of_SecondINC_10;
      LaterINCs_11 = next_value_of_LaterINCs_11;
      FirstProcNum_12 = next_value_of_FirstProcNum_12;
      STATE_VARIABLE_Specs_0_28 = next_value_of_STATE_VARIABLE_Specs_0_28;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_StyleInfo_43;

    check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_StyleInfo_43);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_StyleInfo_43));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_StyleInfo_43;

    check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_StyleInfo_43);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_StyleInfo_43));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_StyleInfo_43;

    check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StyleInfo_43);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StyleInfo_43));
  }
}

void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Task_7,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word ValidPredIds_10;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_6, &ValidPredIds_10);
    switch (MR_tag((MR_Word) Task_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word StyleInfo_58;
          MR_Word Var_62;
          MR_Box conv5_StyleInfo_58;

          {
            Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (check_hlds__style_checks__generate_style_warnings_5_p_0_3));
            MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (ModuleInfo_6));
            MR_hl_field(MR_mktag(0), Var_62, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0), Var_62, ValidPredIds_10, ((MR_Box) (&check_hlds__style_checks_scalar_common_5[4])), &conv5_StyleInfo_58);
          StyleInfo_58 = ((MR_Word) (conv5_StyleInfo_58));
          *STATE_VARIABLE_Specs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_58, (MR_Integer) 2))));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeDefnKind_12;
          MR_Word DefnKind_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Task_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word StyleInfo_14;
          MR_Word ExportedPreds_15;
          MR_Word NonExportedPreds_16;
          MR_Word ModuleContext_20;
          MR_Word Var_27;
          MR_Word STATE_VARIABLE_Specs_31_31;
          MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), Task_7, (MR_Integer) 0)));
          MR_Box conv1_StyleInfo_14;

          {
            MaybeDefnKind_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeDefnKind_12, 0) = ((MR_Box) (DefnKind_13));
          }
          {
            Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (check_hlds__style_checks__generate_style_warnings_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (ModuleInfo_6));
            MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (MaybeDefnKind_12));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0), Var_27, ValidPredIds_10, ((MR_Box) (&check_hlds__style_checks_scalar_common_5[4])), &conv1_StyleInfo_14);
          StyleInfo_14 = ((MR_Word) (conv1_StyleInfo_14));
          ExportedPreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_14, (MR_Integer) 0))));
          NonExportedPreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_14, (MR_Integer) 1))));
          hlds__hlds_module__module_info_get_name_context_2_p_0(ModuleInfo_6, &ModuleContext_20);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(ModuleContext_20, (MR_String) "exported", ExportedPreds_15, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_31_31);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(ModuleContext_20, (MR_String) "nonexported", NonExportedPreds_16, STATE_VARIABLE_Specs_31_31, STATE_VARIABLE_Specs_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DefnKind_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ModuleContext_43;
          MR_Word STATE_VARIABLE_Specs_31_46;
          MR_Word MaybeDefnKind_49;
          MR_Word StyleInfo_50;
          MR_Word ExportedPreds_51;
          MR_Word NonExportedPreds_52;
          MR_Word ModeDeclItemNumberSpecs_53;
          MR_Word Var_54;
          MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), Task_7, (MR_Integer) 0)));
          MR_Box conv3_StyleInfo_50;

          {
            MaybeDefnKind_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeDefnKind_49, 0) = ((MR_Box) (DefnKind_42));
          }
          {
            Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (check_hlds__style_checks__generate_style_warnings_5_p_0_2));
            MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (ModuleInfo_6));
            MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (MaybeDefnKind_49));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0), Var_54, ValidPredIds_10, ((MR_Box) (&check_hlds__style_checks_scalar_common_5[4])), &conv3_StyleInfo_50);
          StyleInfo_50 = ((MR_Word) (conv3_StyleInfo_50));
          ExportedPreds_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_50, (MR_Integer) 0))));
          NonExportedPreds_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_50, (MR_Integer) 1))));
          ModeDeclItemNumberSpecs_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_50, (MR_Integer) 2))));
          hlds__hlds_module__module_info_get_name_context_2_p_0(ModuleInfo_6, &ModuleContext_43);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(ModuleContext_43, (MR_String) "exported", ExportedPreds_51, ModeDeclItemNumberSpecs_53, &STATE_VARIABLE_Specs_31_46);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(ModuleContext_43, (MR_String) "nonexported", NonExportedPreds_52, STATE_VARIABLE_Specs_31_46, STATE_VARIABLE_Specs_21);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__2_2;

    mercury__io__remove_file_4_p_0(((MR_String) (wrapper_arg_1)), &conv2_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_R_6;

    check_hlds__style_checks__compare_defn_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_R_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_R_6));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_R_6;

    check_hlds__style_checks__compare_decl_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_R_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_R_6));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(
  MR_Word ModuleContext_8,
  MR_String ExportedOrNotStr_9,
  MR_Word PredItemNumbers_10,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  {
    MR_bool succeeded;
    MR_Word DeclOrder_13;
    MR_Word DefnOrder_14;

    mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_5[1]), PredItemNumbers_10, &DeclOrder_13);
    mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_5[2]), PredItemNumbers_10, &DefnOrder_14);
    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), ((MR_Box) (DeclOrder_13)), ((MR_Box) (DefnOrder_14)));
    if (succeeded)
      *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
    else
    {
      MR_Word DeclResult_16;
      MR_Word DefnResult_17;
      MR_Word STATE_VARIABLE_TempFileNames_81_81;
      MR_Word _Results_38;
      MR_Box conv3_STATE_VARIABLE_IO_42;

      check_hlds__style_checks__make_order_temp_file_6_p_0(ExportedOrNotStr_9, (MR_String) "declaration_order", DeclOrder_13, &DeclResult_16);
      check_hlds__style_checks__make_order_temp_file_6_p_0(ExportedOrNotStr_9, (MR_String) "definition_order", DefnOrder_14, &DefnResult_17);
      if (((MR_tag((MR_Word) DeclResult_16)) == (MR_Integer) 1))
      {
        MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclResult_16, (MR_Integer) 1))));
        MR_Word Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclResult_16, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) DefnResult_17)) == (MR_Integer) 1))
        {
          MR_Word HeadDefnSpec_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnResult_17, (MR_Integer) 0))));
          MR_Word TailDefnSpecs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnResult_17, (MR_Integer) 1))));
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;

          STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_112));
            MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_111));
          }
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (HeadDefnSpec_20));
            MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (TailDefnSpecs_21));
          }
          Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_85, STATE_VARIABLE_Specs_0_39);
          *STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_83, Var_84);
        }
        else
        {
          MR_String DefnFileName_22 = ((MR_String) ((MR_hl_field(MR_mktag(0), DefnResult_17, (MR_Integer) 0))));
          MR_Word Var_80;

          {
            STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_81_81, 0) = ((MR_Box) (DefnFileName_22));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_81_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_112));
            MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_111));
          }
          *STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_80, STATE_VARIABLE_Specs_0_39);
        }
      }
      else
      {
        MR_String Var_113 = ((MR_String) ((MR_hl_field(MR_mktag(0), DeclResult_16, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) DefnResult_17)) == (MR_Integer) 1))
        {
          MR_Word Var_76;
          MR_Word HeadDefnSpec_90 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnResult_17, (MR_Integer) 0))));
          MR_Word TailDefnSpecs_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DefnResult_17, (MR_Integer) 1))));

          {
            STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_81_81, 0) = ((MR_Box) (Var_113));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_81_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (HeadDefnSpec_90));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (TailDefnSpecs_91));
          }
          *STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_76, STATE_VARIABLE_Specs_0_39);
        }
        else
        {
          MR_Word DiffTempResult_24;
          MR_Word STATE_VARIABLE_TempFileNames_49_49;
          MR_Word Var_50;
          MR_String DefnFileName_92 = ((MR_String) ((MR_hl_field(MR_mktag(0), DefnResult_17, (MR_Integer) 0))));

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (DefnFileName_92));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            STATE_VARIABLE_TempFileNames_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_49_49, 0) = ((MR_Box) (Var_113));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_49_49, 1) = ((MR_Box) (Var_50));
          }
          mercury__io__make_temp_file_6_p_0((MR_String) "/tmp", (MR_String) "difference", (MR_String) "", &DiffTempResult_24);
          if (((MR_tag((MR_Word) DiffTempResult_24)) == (MR_Integer) 1))
          {
            MR_Word DiffTempError_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DiffTempResult_24, (MR_Integer) 0))));
            MR_Word DiffTempSpec_26;

            DiffTempSpec_26 = check_hlds__style_checks__cannot_create_temp_file_spec_2_f_0(ExportedOrNotStr_9, DiffTempError_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_40 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DiffTempSpec_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
            }
            STATE_VARIABLE_TempFileNames_81_81 = STATE_VARIABLE_TempFileNames_49_49;
          }
          else
          {
            MR_String DiffFileName_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), DiffTempResult_24, (MR_Integer) 0))));
            MR_String Cmd_28;
            MR_Word CmdResult_29;
            MR_String Var_115;
            MR_String Var_116;
            MR_String Var_118;
            MR_String Var_119;

            {
              STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_81_81, 0) = ((MR_Box) (DiffFileName_27));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_TempFileNames_81_81, 1) = ((MR_Box) (STATE_VARIABLE_TempFileNames_49_49));
            }
            Var_115 = mercury__string__f_43_43_2_f_0((MR_String) " > ", DiffFileName_27);
            Var_116 = mercury__string__f_43_43_2_f_0(DefnFileName_92, Var_115);
            Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_116);
            Var_119 = mercury__string__f_43_43_2_f_0(Var_113, Var_118);
            Cmd_28 = mercury__string__f_43_43_2_f_0((MR_String) "diff -u ", Var_119);
            mercury__io__call_system_4_p_0(Cmd_28, &CmdResult_29);
            if (((MR_tag((MR_Word) CmdResult_29)) == (MR_Integer) 1))
            {
              MR_Word CmdError_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CmdResult_29, (MR_Integer) 0))));
              MR_Word CmdSpec_31;

              CmdSpec_31 = check_hlds__style_checks__cannot_execute_cmd_spec_3_f_0(ExportedOrNotStr_9, Cmd_28, CmdError_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_40 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (CmdSpec_31));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
              }
            }
            else
            {
              MR_Word DiffOpenResult_33;

              mercury__io__open_input_4_p_0(DiffFileName_27, &DiffOpenResult_33);
              if (((MR_tag((MR_Word) DiffOpenResult_33)) == (MR_Integer) 1))
              {
                MR_Word DiffOpenError_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DiffOpenResult_33, (MR_Integer) 0))));
                MR_Word DiffOpenSpec_35;

                DiffOpenSpec_35 = check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(ExportedOrNotStr_9, DiffFileName_27, DiffOpenError_34);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_40 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DiffOpenSpec_35));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
                }
              }
              else
              {
                MR_Word DiffStream_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DiffOpenResult_33, (MR_Integer) 0))));
                MR_Word DiffReadSpec_37;

                check_hlds__style_checks__diff_file_to_spec_7_p_0(DiffStream_36, DiffFileName_27, ModuleContext_8, ExportedOrNotStr_9, &DiffReadSpec_37);
                mercury__io__close_input_3_p_0(DiffStream_36);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_40 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DiffReadSpec_37));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
                }
              }
            }
          }
        }
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&check_hlds__style_checks_scalar_common_5[3]), STATE_VARIABLE_TempFileNames_81_81, &_Results_38, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_42);
    }
  }
}

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_execute_cmd_spec_3_f_0(
  MR_String ExportedOrNotStr_5,
  MR_String Cmd_6,
  MR_Word Error_7)
{
  {
    MR_Word Spec_8;
    MR_String ErrorMsg_9;
    MR_Word Pieces_10;
    MR_Word Msg_11;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_55;

    mercury__io__error_message_2_p_0(Error_7, &ErrorMsg_9);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (ExportedOrNotStr_5));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (Cmd_6));
    }
    {
      Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_40, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_40, 1) = ((MR_Box) (ErrorMsg_9));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Msg_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), Msg_11, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Msg_11, 3) = ((MR_Box) (Var_50));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_55));
    }
    return Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_create_temp_file_spec_2_f_0(
  MR_String ExportedOrNotStr_4,
  MR_Word Error_5)
{
  {
    MR_Word Spec_6;
    MR_String ErrorMsg_7;
    MR_Word Pieces_8;
    MR_Word Msg_9;
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_44;

    mercury__io__error_message_2_p_0(Error_5, &ErrorMsg_7);
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (ExportedOrNotStr_4));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (ErrorMsg_7));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[43])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_15));
    }
    {
      Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (Var_12));
    }
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (Pieces_8));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Msg_9, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), Msg_9, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Msg_9, 3) = ((MR_Box) (Var_39));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Msg_9));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_6, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_6, 1) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_6, 2) = ((MR_Box) (Var_44));
    }
    return Spec_6;
  }
}

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Pieces_4;

    check_hlds__style_checks__diff_line_to_pieces_2_p_0(((MR_String) (wrapper_arg_1)), &conv0_Pieces_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Pieces_4));
  }
}

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0(
  MR_Word DiffStream_8,
  MR_String DiffFileName_9,
  MR_Word ModuleContext_10,
  MR_String ExportedOrNotStr_11,
  MR_Word * Spec_12)
{
  {
    MR_bool succeeded;
    MR_Word RevLines_14;
    MR_Word MaybeIOError_15;

    check_hlds__style_checks__read_lines_as_rev_strings_6_p_0(DiffStream_8, (MR_Word) ((MR_Unsigned) 0U), &RevLines_14, &MaybeIOError_15);
    if ((MaybeIOError_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Lines_20;
      MR_Word DiffLines_23;
      MR_String Line1_21;
      MR_String Line2_22;
      MR_Word Var_31;
      MR_String Var_32;
      MR_String Var_33;

      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevLines_14, &Lines_20);
      succeeded = ((MR_tag((MR_Word) Lines_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        Line1_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), Lines_20, (MR_Integer) 0))));
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lines_20, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
        if (succeeded)
        {
          Line2_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));
          DiffLines_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 1))));
          Var_32 = (MR_String) "--- ";
          succeeded = mercury__string__prefix_2_p_0(Line1_21, Var_32);
          if (succeeded)
          {
            Var_33 = (MR_String) "+++ ";
            succeeded = mercury__string__prefix_2_p_0(Line2_22, Var_33);
          }
        }
      }
      if (succeeded)
      {
        MR_Word HeadPieces_24;
        MR_Word DiffPieceLists_25;
        MR_Word DiffPieces_26;
        MR_Word Var_36;
        MR_Word Var_39;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_71;
        MR_Word Pieces_149;
        MR_Word Msg_150;

        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (ExportedOrNotStr_11));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[25])));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
        }
        {
          HeadPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), HeadPieces_24, 1) = ((MR_Box) (Var_36));
        }
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[1]), (MR_Word) (&check_hlds__style_checks_scalar_common_5[0]), DiffLines_23, &DiffPieceLists_25);
        mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DiffPieceLists_25, &DiffPieces_26);
        Pieces_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_24, DiffPieces_26);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Pieces_149));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_150, 0) = ((MR_Box) (ModuleContext_10));
          MR_hl_field(MR_mktag(0), Msg_150, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Msg_150));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_71));
        }
      }
      else
      {
        MR_Word Var_75;
        MR_Word Var_78;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_101;
        MR_Word Var_102;
        MR_Word Var_106;
        MR_Word Pieces_151;
        MR_Word Msg_152;

        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_82, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_82, 1) = ((MR_Box) (ExportedOrNotStr_11));
        }
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[33])));
        }
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[38])));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
        }
        {
          Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
          MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
        }
        {
          Pieces_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), Pieces_151, 1) = ((MR_Box) (Var_75));
        }
        {
          Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (Pieces_151));
        }
        {
          Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
          MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Msg_152, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(1), Msg_152, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), Msg_152, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), Msg_152, 3) = ((MR_Box) (Var_101));
        }
        {
          Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_106, 0) = ((MR_Box) (Msg_152));
          MR_hl_field(MR_mktag(1), Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_106));
        }
      }
    }
    else
    {
      MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_15, (MR_Integer) 0))));
      MR_String ErrorMsg_17;
      MR_Word Pieces_18;
      MR_Word Msg_19;
      MR_Word Var_110;
      MR_Word Var_113;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_121;
      MR_Word Var_124;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_129;
      MR_Word Var_131;
      MR_Word Var_132;
      MR_Word Var_142;
      MR_Word Var_143;
      MR_Word Var_147;

      mercury__io__error_message_2_p_0(Error_16, &ErrorMsg_17);
      {
        Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (ExportedOrNotStr_11));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_125, 0) = ((MR_Box) (DiffFileName_9));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_132, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_132, 1) = ((MR_Box) (ErrorMsg_17));
      }
      {
        Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Var_132));
        MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
      }
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
      }
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[41])));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
      }
      {
        Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (Var_125));
        MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) (Var_126));
      }
      {
        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_124));
      }
      {
        Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (Var_121));
      }
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
      }
      {
        Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[38])));
        MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
      }
      {
        Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
      }
      {
        Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
        MR_hl_field(MR_mktag(1), Pieces_18, 1) = ((MR_Box) (Var_110));
      }
      {
        Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_143, 0) = ((MR_Box) (Pieces_18));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (Var_143));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Msg_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Msg_19, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Msg_19, 3) = ((MR_Box) (Var_142));
      }
      {
        Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (Msg_19));
        MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *Spec_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_147));
      }
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__read_lines_as_rev_strings_6_p_0(
  MR_Word Stream_7,
  MR_Word STATE_VARIABLE_RevLines_0_14,
  MR_Word * STATE_VARIABLE_RevLines_15,
  MR_Word * MaybeIOError_9)
{
  while (MR_TRUE)
  {
    MR_Word Result_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(Stream_7, &Result_11);
    switch (MR_tag((MR_Word) Result_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeIOError_9 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_RevLines_15 = STATE_VARIABLE_RevLines_0_14;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_11, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_RevLines_19_19;
          MR_Word next_value_of_STATE_VARIABLE_RevLines_0_14;

          {
            STATE_VARIABLE_RevLines_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevLines_19_19, 0) = ((MR_Box) (Line_13));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevLines_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevLines_0_14));
          }
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_RevLines_0_14 = STATE_VARIABLE_RevLines_19_19;
          STATE_VARIABLE_RevLines_0_14 = next_value_of_STATE_VARIABLE_RevLines_0_14;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_11, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeIOError_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_12));
          }
          *STATE_VARIABLE_RevLines_15 = STATE_VARIABLE_RevLines_0_14;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    check_hlds__style_checks__write_pred_desc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0(
  MR_String ExportedOrNotStr_7,
  MR_String DeclOrDefnOrderStr_8,
  MR_Word PredItemNumbers_9,
  MR_Word * MaybeFileName_10)
{
  {
    MR_Word TempResult_12;

    mercury__io__make_temp_file_6_p_0((MR_String) "/tmp", DeclOrDefnOrderStr_8, (MR_String) "", &TempResult_12);
    if (((MR_tag((MR_Word) TempResult_12)) == (MR_Integer) 1))
    {
      MR_Word TempError_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TempResult_12, (MR_Integer) 0))));
      MR_Word TempSpec_14;
      MR_String ErrorMsg_39;
      MR_Word Pieces_40;
      MR_Word Msg_41;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_58;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_76;

      mercury__io__error_message_2_p_0(TempError_13, &ErrorMsg_39);
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ExportedOrNotStr_7));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (ErrorMsg_39));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
        MR_hl_field(MR_mktag(1), Pieces_40, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Pieces_40));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msg_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Msg_41, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), Msg_41, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), Msg_41, 3) = ((MR_Box) (Var_71));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_41));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        TempSpec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TempSpec_14, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), TempSpec_14, 1) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(0), TempSpec_14, 2) = ((MR_Box) (Var_76));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFileName_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TempSpec_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String TempFileName_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), TempResult_12, (MR_Integer) 0))));
      MR_Word OpenResult_16;

      mercury__io__open_output_4_p_0(TempFileName_15, &OpenResult_16);
      if (((MR_tag((MR_Word) OpenResult_16)) == (MR_Integer) 1))
      {
        MR_Word OpenError_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_16, (MR_Integer) 0))));
        MR_Word OpenSpec_18;

        OpenSpec_18 = check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(ExportedOrNotStr_7, TempFileName_15, OpenError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeFileName_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (OpenSpec_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Stream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_16, (MR_Integer) 0))));
        MR_Word Var_26;
        MR_Box conv0_STATE_VARIABLE_IO_27_27;

        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (check_hlds__style_checks__make_order_temp_file_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_26, 3) = ((MR_Box) (Stream_19));
        }
        mercury__list__foldl_4_p_2((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, PredItemNumbers_9, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_27_27);
        mercury__io__close_output_3_p_0(Stream_19);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeFileName_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TempFileName_15));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(
  MR_String ExportedOrNotStr_5,
  MR_String TempFileName_6,
  MR_Word Error_7)
{
  {
    MR_Word Spec_8;
    MR_String ErrorMsg_9;
    MR_Word Pieces_10;
    MR_Word Msg_11;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_51;

    mercury__io__error_message_2_p_0(Error_7, &ErrorMsg_9);
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (ExportedOrNotStr_5));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (TempFileName_6));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (ErrorMsg_9));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Msg_11, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), Msg_11, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Msg_11, 3) = ((MR_Box) (Var_46));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_51));
    }
    return Spec_8;
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__style_checks____Unify____inc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____inc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__style_checks____Unify____pred_item_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____pred_item_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__style_checks____Unify____pred_style_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____pred_style_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__style_checks____Unify____proc_contiguity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____proc_contiguity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_warnings_task_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__style_checks____Unify____style_warnings_task_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____style_warnings_task_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____style_warnings_task_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__check_hlds__style_checks__init(void)
{
}

void mercury__check_hlds__style_checks__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_style_warnings_task_0);
}

void mercury__check_hlds__style_checks__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__style_checks__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.style_checks.
