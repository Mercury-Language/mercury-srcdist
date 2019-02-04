/*
** Automatically generated from `style_checks.m'
** by the Mercury compiler,
** version rotd-2017-08-02
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module check_hlds.style_checks. */
/* :- implementation. */

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
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_1;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_2[1];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_style_warnings_task_0_2;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_2[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_style_warnings_task_0[3];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_style_warnings_task_0[3];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_style_warnings_task_0[3];

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0(
  MR_Word check_hlds__style_checks__HeadVar__2_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0(
  MR_Word check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0(
  MR_Word check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0(
  MR_Word check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2);

static void MR_CALL 
check_hlds__style_checks__diff_line_to_pieces_2_p_0(
  MR_String check_hlds__style_checks__Line0_3,
  MR_Word * check_hlds__style_checks__Pieces_4);

static void MR_CALL 
check_hlds__style_checks__write_pred_desc_4_p_0(
  MR_Word check_hlds__style_checks__Stream_5,
  MR_Word check_hlds__style_checks__PredItemNumbers_6);

static void MR_CALL 
check_hlds__style_checks__compare_defn_item_number_3_p_0(
  MR_Word check_hlds__style_checks__A_4,
  MR_Word check_hlds__style_checks__B_5,
  MR_Word * check_hlds__style_checks__R_6);

static void MR_CALL 
check_hlds__style_checks__compare_decl_item_number_3_p_0(
  MR_Word check_hlds__style_checks__A_4,
  MR_Word check_hlds__style_checks__B_5,
  MR_Word * check_hlds__style_checks__R_6);

static void MR_CALL 
check_hlds__style_checks__gather_proc_item_numbers_5_p_0(
  MR_Word check_hlds__style_checks__ProcInfo_6,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_0_12,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_13,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_MakesSense_0_14,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_MakesSense_15);

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3,
  MR_Box check_hlds__style_checks__wrapper_arg_4,
  MR_Box * check_hlds__style_checks__wrapper_arg_5);

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(
  MR_Word check_hlds__style_checks__ModuleInfo_6,
  MR_Word check_hlds__style_checks__MaybeDefnKind_7,
  MR_Word check_hlds__style_checks__PredId_8,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_StyleInfo_43);

static void MR_CALL 
check_hlds__style_checks__report_any_inc_gaps_7_p_0(
  MR_Word check_hlds__style_checks__PredInfo_8,
  MR_Word check_hlds__style_checks__FirstINC_9,
  MR_Word check_hlds__style_checks__SecondINC_10,
  MR_Word check_hlds__style_checks__LaterINCs_11,
  MR_Integer check_hlds__style_checks__FirstProcNum_12,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_Specs_0_28,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_Specs_29);

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_3(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_2(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_3(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box * check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3,
  MR_Box * check_hlds__style_checks__wrapper_arg_4);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_2(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(
  MR_Word check_hlds__style_checks__ModuleContext_8,
  MR_String check_hlds__style_checks__ExportedOrNotStr_9,
  MR_Word check_hlds__style_checks__PredItemNumbers_10,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_Specs_0_39,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_Specs_40);

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_execute_cmd_spec_3_f_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_5,
  MR_String check_hlds__style_checks__Cmd_6,
  MR_Word check_hlds__style_checks__Error_7);

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_create_temp_file_spec_2_f_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_4,
  MR_Word check_hlds__style_checks__Error_5);

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box * check_hlds__style_checks__wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0(
  MR_Word check_hlds__style_checks__DiffStream_8,
  MR_String check_hlds__style_checks__DiffFileName_9,
  MR_Word check_hlds__style_checks__ModuleContext_10,
  MR_String check_hlds__style_checks__ExportedOrNotStr_11,
  MR_Word * check_hlds__style_checks__Spec_12);

static void MR_CALL 
check_hlds__style_checks__read_lines_as_rev_strings_6_p_0(
  MR_Word check_hlds__style_checks__Stream_7,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_RevLines_0_14,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_RevLines_15,
  MR_Word * check_hlds__style_checks__MaybeIOError_9);

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_7,
  MR_String check_hlds__style_checks__DeclOrDefnOrderStr_8,
  MR_Word check_hlds__style_checks__PredItemNumbers_9,
  MR_Word * check_hlds__style_checks__MaybeFileName_10);

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_5,
  MR_String check_hlds__style_checks__TempFileName_6,
  MR_Word check_hlds__style_checks__Error_7);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_warnings_task_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____style_warnings_task_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "its first mode declaration."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not followed immediately by"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The first mode declaration"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode declaration."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__style_checks_scalar_common_2[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is inconsistent, as shown by this diff:"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicates"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not have the expected format."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "diff -u"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "because the output of"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicates,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Cannot generate diagnostics"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "about inconsistencies between the order of"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the declarations and definitions of"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "predicates,"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "because the opening of the temporary file"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "failed:"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the declarations and definitions of the"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "because the creation of a temporary file failed:"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the order of"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the declarations and definitions"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "because reading of the temporary file"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "because the execution of the following command failed:"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The error message was:"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not followed immediately by its"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__maybe__pti_maybe_1__plain_hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0
  }
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0
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
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_item_numbers_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_item_numbers_0_0
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_item_numbers_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_item_numbers_0_0
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
    (MR_TypeInfo) &check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__style_checks__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_pred_style_info_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_item_numbers_0,
  (MR_PseudoTypeInfo) &check_hlds__style_checks__list__ti_list_1check_hlds__style_checks__type_ctor_info_pred_item_numbers_0,
  (MR_PseudoTypeInfo) &check_hlds__style_checks__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
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
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_style_info_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_pred_style_info_0_0
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_style_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_style_info_0_0
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
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_1[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0
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
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_style_warnings_task_0_2[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0
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
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    MR_SECTAG_LOCAL,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_style_warnings_task_0_2
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
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_16 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;
    MR_Integer check_hlds__style_checks__CastY_17 = (MR_Integer) check_hlds__style_checks__HeadVar__3_3;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_16 == check_hlds__style_checks__CastY_17);
    if (check_hlds__style_checks__succeeded)
      *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) check_hlds__style_checks__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) check_hlds__style_checks__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__style_checks__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__style_checks__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__style_checks__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer check_hlds__style_checks__Var_22 = (MR_Integer) check_hlds__style_checks__Var_20;
                  MR_Integer check_hlds__style_checks__Var_23 = (MR_Integer) check_hlds__style_checks__ArgY1_8;

                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__style_checks__HeadVar__1_1, check_hlds__style_checks__Var_22, check_hlds__style_checks__Var_23);
                }
                break;
              case (MR_Integer) 2:
                *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__style_checks__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) check_hlds__style_checks__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__style_checks__ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer check_hlds__style_checks__Var_24 = (MR_Integer) check_hlds__style_checks__Var_21;
                  MR_Integer check_hlds__style_checks__Var_25 = (MR_Integer) check_hlds__style_checks__ArgY1_15;

                  mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__style_checks__HeadVar__1_1, check_hlds__style_checks__Var_24, check_hlds__style_checks__Var_25);
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
  MR_Word check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_9 = (MR_Integer) check_hlds__style_checks__HeadVar__1_1;
    MR_Integer check_hlds__style_checks__CastY_10 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_9 == check_hlds__style_checks__CastY_10);
    if (check_hlds__style_checks__succeeded)
      check_hlds__style_checks__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) check_hlds__style_checks__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer check_hlds__style_checks__CastX_3 = (MR_Integer) check_hlds__style_checks__HeadVar__1_1;
            MR_Integer check_hlds__style_checks__CastY_4 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;

            check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastY_4 == check_hlds__style_checks__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word check_hlds__style_checks__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__style_checks__ArgY1_6;

            check_hlds__style_checks__succeeded = ((MR_tag((MR_Word) check_hlds__style_checks__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (check_hlds__style_checks__succeeded)
            {
              check_hlds__style_checks__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__style_checks__succeeded = (check_hlds__style_checks__ArgX1_5 == check_hlds__style_checks__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__style_checks__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__style_checks__ArgY1_8;

            check_hlds__style_checks__succeeded = ((MR_tag((MR_Word) check_hlds__style_checks__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (check_hlds__style_checks__succeeded)
            {
              check_hlds__style_checks__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
              check_hlds__style_checks__succeeded = (check_hlds__style_checks__ArgX1_7 == check_hlds__style_checks__ArgY1_8);
            }
          }
          break;
      }
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3)
{
  {
    MR_Integer check_hlds__style_checks__Cast_HeadVar1_4 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;
    MR_Integer check_hlds__style_checks__Cast_HeadVar2_5 = (MR_Integer) check_hlds__style_checks__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__style_checks__HeadVar__1_1, check_hlds__style_checks__Cast_HeadVar1_4, check_hlds__style_checks__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0(
  MR_Word check_hlds__style_checks__HeadVar__2_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded = (check_hlds__style_checks__HeadVar__2_1 == check_hlds__style_checks__HeadVar__2_2);

    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_12 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;
    MR_Integer check_hlds__style_checks__CastY_13 = (MR_Integer) check_hlds__style_checks__HeadVar__3_3;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_12 == check_hlds__style_checks__CastY_13);
    if (check_hlds__style_checks__succeeded)
      *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word check_hlds__style_checks__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word check_hlds__style_checks__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word check_hlds__style_checks__Var_10;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__style_checks_scalar_common_1[2], &check_hlds__style_checks__Var_10, ((MR_Box) (check_hlds__style_checks__ArgX1_4)), ((MR_Box) (check_hlds__style_checks__ArgY1_5)));
      check_hlds__style_checks__succeeded = (check_hlds__style_checks__Var_10 == (MR_Integer) 0);
      check_hlds__style_checks__succeeded = !(check_hlds__style_checks__succeeded);
      if (check_hlds__style_checks__succeeded)
        *check_hlds__style_checks__HeadVar__1_1 = check_hlds__style_checks__Var_10;
      else
      {
        MR_Word check_hlds__style_checks__Var_11;

        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__style_checks_scalar_common_1[2], &check_hlds__style_checks__Var_11, ((MR_Box) (check_hlds__style_checks__ArgX2_6)), ((MR_Box) (check_hlds__style_checks__ArgY2_7)));
        check_hlds__style_checks__succeeded = (check_hlds__style_checks__Var_11 == (MR_Integer) 0);
        check_hlds__style_checks__succeeded = !(check_hlds__style_checks__succeeded);
        if (check_hlds__style_checks__succeeded)
          *check_hlds__style_checks__HeadVar__1_1 = check_hlds__style_checks__Var_11;
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__style_checks_scalar_common_1[3], check_hlds__style_checks__HeadVar__1_1, ((MR_Box) (check_hlds__style_checks__ArgX3_8)), ((MR_Box) (check_hlds__style_checks__ArgY3_9)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0(
  MR_Word check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_9 = (MR_Integer) check_hlds__style_checks__HeadVar__1_1;
    MR_Integer check_hlds__style_checks__CastY_10 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_9 == check_hlds__style_checks__CastY_10);
    if (check_hlds__style_checks__succeeded)
      check_hlds__style_checks__succeeded = MR_TRUE;
    else
    {
      MR_Word check_hlds__style_checks__TypeInfo_12_12;
      MR_Word check_hlds__style_checks__TypeInfo_13_13;
      MR_Word check_hlds__style_checks__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word check_hlds__style_checks__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 2)));

      check_hlds__style_checks__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__style_checks_scalar_common_1[2], ((MR_Box) (check_hlds__style_checks__ArgX1_3)), ((MR_Box) (check_hlds__style_checks__ArgY1_4)));
      if (check_hlds__style_checks__succeeded)
      {
        check_hlds__style_checks__TypeInfo_12_12 = (MR_Word) &check_hlds__style_checks_scalar_common_1[2];
        check_hlds__style_checks__succeeded = mercury__builtin__unify_2_p_0(check_hlds__style_checks__TypeInfo_12_12, ((MR_Box) (check_hlds__style_checks__ArgX2_5)), ((MR_Box) (check_hlds__style_checks__ArgY2_6)));
        if (check_hlds__style_checks__succeeded)
        {
          check_hlds__style_checks__TypeInfo_13_13 = (MR_Word) &check_hlds__style_checks_scalar_common_1[3];
          check_hlds__style_checks__succeeded = mercury__builtin__unify_2_p_0(check_hlds__style_checks__TypeInfo_13_13, ((MR_Box) (check_hlds__style_checks__ArgX3_7)), ((MR_Box) (check_hlds__style_checks__ArgY3_8)));
        }
      }
    }
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_15 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;
    MR_Integer check_hlds__style_checks__CastY_16 = (MR_Integer) check_hlds__style_checks__HeadVar__3_3;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_15 == check_hlds__style_checks__CastY_16);
    if (check_hlds__style_checks__succeeded)
      *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word check_hlds__style_checks__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer check_hlds__style_checks__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer check_hlds__style_checks__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer check_hlds__style_checks__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer check_hlds__style_checks__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word check_hlds__style_checks__Var_12;

      hlds__hlds_pred____Compare____pred_id_0_0(&check_hlds__style_checks__Var_12, check_hlds__style_checks__ArgX1_4, check_hlds__style_checks__ArgY1_5);
      check_hlds__style_checks__succeeded = (check_hlds__style_checks__Var_12 == (MR_Integer) 0);
      check_hlds__style_checks__succeeded = !(check_hlds__style_checks__succeeded);
      if (check_hlds__style_checks__succeeded)
        *check_hlds__style_checks__HeadVar__1_1 = check_hlds__style_checks__Var_12;
      else
      {
        MR_Word check_hlds__style_checks__Var_13;

        hlds__hlds_pred____Compare____pred_info_0_0(&check_hlds__style_checks__Var_13, check_hlds__style_checks__ArgX2_6, check_hlds__style_checks__ArgY2_7);
        check_hlds__style_checks__succeeded = (check_hlds__style_checks__Var_13 == (MR_Integer) 0);
        check_hlds__style_checks__succeeded = !(check_hlds__style_checks__succeeded);
        if (check_hlds__style_checks__succeeded)
          *check_hlds__style_checks__HeadVar__1_1 = check_hlds__style_checks__Var_13;
        else
        {
          MR_Word check_hlds__style_checks__Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__style_checks__Var_14, check_hlds__style_checks__ArgX3_8, check_hlds__style_checks__ArgY3_9);
          check_hlds__style_checks__succeeded = (check_hlds__style_checks__Var_14 == (MR_Integer) 0);
          check_hlds__style_checks__succeeded = !(check_hlds__style_checks__succeeded);
          if (check_hlds__style_checks__succeeded)
            *check_hlds__style_checks__HeadVar__1_1 = check_hlds__style_checks__Var_14;
          else
            mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__style_checks__HeadVar__1_1, check_hlds__style_checks__ArgX4_10, check_hlds__style_checks__ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0(
  MR_Word check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_11 = (MR_Integer) check_hlds__style_checks__HeadVar__1_1;
    MR_Integer check_hlds__style_checks__CastY_12 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_11 == check_hlds__style_checks__CastY_12);
    if (check_hlds__style_checks__succeeded)
      check_hlds__style_checks__succeeded = MR_TRUE;
    else
    {
      MR_Word check_hlds__style_checks__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer check_hlds__style_checks__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer check_hlds__style_checks__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer check_hlds__style_checks__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer check_hlds__style_checks__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 3)));

      check_hlds__style_checks__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(check_hlds__style_checks__ArgX1_3, check_hlds__style_checks__ArgY1_4);
      if (check_hlds__style_checks__succeeded)
      {
        check_hlds__style_checks__succeeded = hlds__hlds_pred____Unify____pred_info_0_0(check_hlds__style_checks__ArgX2_5, check_hlds__style_checks__ArgY2_6);
        if (check_hlds__style_checks__succeeded)
        {
          check_hlds__style_checks__succeeded = (check_hlds__style_checks__ArgX3_7 == check_hlds__style_checks__ArgY3_8);
          if (check_hlds__style_checks__succeeded)
            check_hlds__style_checks__succeeded = (check_hlds__style_checks__ArgX4_9 == check_hlds__style_checks__ArgY4_10);
        }
      }
    }
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0(
  MR_Word * check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2,
  MR_Word check_hlds__style_checks__HeadVar__3_3)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_9 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;
    MR_Integer check_hlds__style_checks__CastY_10 = (MR_Integer) check_hlds__style_checks__HeadVar__3_3;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_9 == check_hlds__style_checks__CastY_10);
    if (check_hlds__style_checks__succeeded)
      *check_hlds__style_checks__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer check_hlds__style_checks__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer check_hlds__style_checks__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__Var_8;

      mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__style_checks__Var_8, check_hlds__style_checks__ArgX1_4, check_hlds__style_checks__ArgY1_5);
      check_hlds__style_checks__succeeded = (check_hlds__style_checks__Var_8 == (MR_Integer) 0);
      check_hlds__style_checks__succeeded = !(check_hlds__style_checks__succeeded);
      if (check_hlds__style_checks__succeeded)
        *check_hlds__style_checks__HeadVar__1_1 = check_hlds__style_checks__Var_8;
      else
        mercury__term____Compare____context_0_0(check_hlds__style_checks__HeadVar__1_1, check_hlds__style_checks__ArgX2_6, check_hlds__style_checks__ArgY2_7);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0(
  MR_Word check_hlds__style_checks__HeadVar__1_1,
  MR_Word check_hlds__style_checks__HeadVar__2_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Integer check_hlds__style_checks__CastX_7 = (MR_Integer) check_hlds__style_checks__HeadVar__1_1;
    MR_Integer check_hlds__style_checks__CastY_8 = (MR_Integer) check_hlds__style_checks__HeadVar__2_2;

    check_hlds__style_checks__succeeded = (check_hlds__style_checks__CastX_7 == check_hlds__style_checks__CastY_8);
    if (check_hlds__style_checks__succeeded)
      check_hlds__style_checks__succeeded = MR_TRUE;
    else
    {
      MR_Integer check_hlds__style_checks__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer check_hlds__style_checks__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__HeadVar__2_2, (MR_Integer) 1)));

      check_hlds__style_checks__succeeded = (check_hlds__style_checks__ArgX1_3 == check_hlds__style_checks__ArgY1_4);
      if (check_hlds__style_checks__succeeded)
        check_hlds__style_checks__succeeded = mercury__term____Unify____context_0_0(check_hlds__style_checks__ArgX2_5, check_hlds__style_checks__ArgY2_6);
    }
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks__diff_line_to_pieces_2_p_0(
  MR_String check_hlds__style_checks__Line0_3,
  MR_Word * check_hlds__style_checks__Pieces_4)
{
  {
    MR_String check_hlds__style_checks__Line_5;
    MR_Word check_hlds__style_checks__Var_7;

    check_hlds__style_checks__Line_5 = mercury__string__remove_suffix_if_present_2_f_0((MR_String) "\n", check_hlds__style_checks__Line0_3);
    {
      check_hlds__style_checks__Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__style_checks__Var_7, 0) = ((MR_Box) (check_hlds__style_checks__Line_5));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__style_checks__Pieces_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__Var_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[4])));
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__write_pred_desc_4_p_0(
  MR_Word check_hlds__style_checks__Stream_5,
  MR_Word check_hlds__style_checks__PredItemNumbers_6)
{
  {
    MR_Word check_hlds__style_checks__PredInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_6, (MR_Integer) 1)));
    MR_Word check_hlds__style_checks__PredPieces_12;
    MR_String check_hlds__style_checks__PredDesc_13;
    MR_Word check_hlds__style_checks__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_6, (MR_Integer) 0)));
    MR_Integer check_hlds__style_checks__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_6, (MR_Integer) 2)));
    MR_Integer check_hlds__style_checks__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_6, (MR_Integer) 3)));

    check_hlds__style_checks__PredPieces_12 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__style_checks__PredInfo_9);
    check_hlds__style_checks__PredDesc_13 = parse_tree__error_util__error_pieces_to_string_1_f_0(check_hlds__style_checks__PredPieces_12);
    mercury__io__write_string_4_p_0(check_hlds__style_checks__Stream_5, check_hlds__style_checks__PredDesc_13);
    mercury__io__nl_3_p_0(check_hlds__style_checks__Stream_5);
  }
}

static void MR_CALL 
check_hlds__style_checks__compare_defn_item_number_3_p_0(
  MR_Word check_hlds__style_checks__A_4,
  MR_Word check_hlds__style_checks__B_5,
  MR_Word * check_hlds__style_checks__R_6)
{
  {
    MR_Integer check_hlds__style_checks__ItemNumberA_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 3)));
    MR_Integer check_hlds__style_checks__ItemNumberB_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 3)));
    MR_Word check_hlds__style_checks__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 0)));
    MR_Word check_hlds__style_checks__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 1)));
    MR_Integer check_hlds__style_checks__Var_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 2)));
    MR_Word check_hlds__style_checks__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 0)));
    MR_Word check_hlds__style_checks__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 1)));
    MR_Integer check_hlds__style_checks__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 2)));

    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__style_checks__R_6, check_hlds__style_checks__ItemNumberA_10, check_hlds__style_checks__ItemNumberB_14);
  }
}

static void MR_CALL 
check_hlds__style_checks__compare_decl_item_number_3_p_0(
  MR_Word check_hlds__style_checks__A_4,
  MR_Word check_hlds__style_checks__B_5,
  MR_Word * check_hlds__style_checks__R_6)
{
  {
    MR_Integer check_hlds__style_checks__ItemNumberA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 2)));
    MR_Integer check_hlds__style_checks__ItemNumberB_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 2)));
    MR_Word check_hlds__style_checks__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 0)));
    MR_Word check_hlds__style_checks__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 1)));
    MR_Integer check_hlds__style_checks__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__A_4, (MR_Integer) 3)));
    MR_Word check_hlds__style_checks__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 0)));
    MR_Word check_hlds__style_checks__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 1)));
    MR_Integer check_hlds__style_checks__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__B_5, (MR_Integer) 3)));

    mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__style_checks__R_6, check_hlds__style_checks__ItemNumberA_9, check_hlds__style_checks__ItemNumberB_13);
  }
}

static void MR_CALL 
check_hlds__style_checks__gather_proc_item_numbers_5_p_0(
  MR_Word check_hlds__style_checks__ProcInfo_6,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_0_12,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_13,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_MakesSense_0_14,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_MakesSense_15)
{
  {
    MR_bool check_hlds__style_checks__succeeded;

    check_hlds__style_checks__succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(check_hlds__style_checks__ProcInfo_6);
    if (check_hlds__style_checks__succeeded)
    {
      MR_Integer check_hlds__style_checks__ItemNumber_9;

      hlds__hlds_pred__proc_info_get_item_number_2_p_0(check_hlds__style_checks__ProcInfo_6, &check_hlds__style_checks__ItemNumber_9);
      check_hlds__style_checks__succeeded = (check_hlds__style_checks__ItemNumber_9 > (MR_Integer) 1);
      if (check_hlds__style_checks__succeeded)
      {
        MR_Word check_hlds__style_checks__Context_10;
        MR_Word check_hlds__style_checks__ProcINC_11;

        hlds__hlds_pred__proc_info_get_context_2_p_0(check_hlds__style_checks__ProcInfo_6, &check_hlds__style_checks__Context_10);
        {
          check_hlds__style_checks__ProcINC_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__ProcINC_11, 0) = ((MR_Box) (check_hlds__style_checks__ItemNumber_9));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__ProcINC_11, 1) = ((MR_Box) (check_hlds__style_checks__Context_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__ProcINC_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_0_12));
        }
        *check_hlds__style_checks__STATE_VARIABLE_MakesSense_15 = check_hlds__style_checks__STATE_VARIABLE_MakesSense_0_14;
      }
      else
      {
        *check_hlds__style_checks__STATE_VARIABLE_MakesSense_15 = (MR_Integer) 1;
        *check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_13 = check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_0_12;
      }
    }
    else
    {
      *check_hlds__style_checks__STATE_VARIABLE_MakesSense_15 = (MR_Integer) 1;
      *check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_13 = check_hlds__style_checks__STATE_VARIABLE_RevProcINCs_0_12;
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3,
  MR_Box check_hlds__style_checks__wrapper_arg_4,
  MR_Box * check_hlds__style_checks__wrapper_arg_5)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv1_STATE_VARIABLE_RevProcINCs_13;
    MR_Word check_hlds__style_checks__conv0_STATE_VARIABLE_MakesSense_15;

    check_hlds__style_checks__gather_proc_item_numbers_5_p_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2), &check_hlds__style_checks__conv1_STATE_VARIABLE_RevProcINCs_13, ((MR_Word) check_hlds__style_checks__wrapper_arg_4), &check_hlds__style_checks__conv0_STATE_VARIABLE_MakesSense_15);
    *check_hlds__style_checks__wrapper_arg_3 = ((MR_Box) (check_hlds__style_checks__conv1_STATE_VARIABLE_RevProcINCs_13));
    *check_hlds__style_checks__wrapper_arg_5 = ((MR_Box) (check_hlds__style_checks__conv0_STATE_VARIABLE_MakesSense_15));
  }
}

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(
  MR_Word check_hlds__style_checks__ModuleInfo_6,
  MR_Word check_hlds__style_checks__MaybeDefnKind_7,
  MR_Word check_hlds__style_checks__PredId_8,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_StyleInfo_43)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Word check_hlds__style_checks__PredInfo_10;
    MR_Word check_hlds__style_checks__MaybeDeclInfo_11;

    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__style_checks__ModuleInfo_6, check_hlds__style_checks__PredId_8, &check_hlds__style_checks__PredInfo_10);
    hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(check_hlds__style_checks__PredInfo_10, &check_hlds__style_checks__MaybeDeclInfo_11);
    if ((check_hlds__style_checks__MaybeDeclInfo_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *check_hlds__style_checks__STATE_VARIABLE_StyleInfo_43 = check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42;
    else
    {
      MR_Word check_hlds__style_checks__DeclInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__MaybeDeclInfo_11, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__DeclSection_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DeclInfo_12, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Integer check_hlds__style_checks__PredDeclItemNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DeclInfo_12, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__ProcTable_16;
      MR_Word check_hlds__style_checks__RevProcINCs_17;
      MR_Word check_hlds__style_checks__MakesSense_18;
      MR_Word check_hlds__style_checks__ProcINCs_19;
      MR_Word check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48;
      MR_Word check_hlds__style_checks__Var_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DeclInfo_12, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Box check_hlds__style_checks__conv3_RevProcINCs_17;
      MR_Box check_hlds__style_checks__conv2_MakesSense_18;
      MR_Word check_hlds__style_checks__HeadProcINC_20;
      MR_Word check_hlds__style_checks__TailProcINCs_21;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__style_checks__PredInfo_10, &check_hlds__style_checks__ProcTable_16);
      mercury__map__foldl2_values_6_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, (MR_Word) &check_hlds__style_checks_scalar_common_1[0], (MR_Word) &check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &check_hlds__style_checks_scalar_common_5[5], check_hlds__style_checks__ProcTable_16, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__style_checks__conv3_RevProcINCs_17, ((MR_Box) ((MR_Integer) 0)), &check_hlds__style_checks__conv2_MakesSense_18);
      check_hlds__style_checks__RevProcINCs_17 = ((MR_Word) check_hlds__style_checks__conv3_RevProcINCs_17);
      check_hlds__style_checks__MakesSense_18 = ((MR_Word) check_hlds__style_checks__conv2_MakesSense_18);
      mercury__list__reverse_2_p_0((MR_Word) &check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0, check_hlds__style_checks__RevProcINCs_17, &check_hlds__style_checks__ProcINCs_19);
      check_hlds__style_checks__succeeded = (check_hlds__style_checks__MakesSense_18 == (MR_Integer) 0);
      if (check_hlds__style_checks__succeeded)
      {
        check_hlds__style_checks__succeeded = ((MR_tag((MR_Word) check_hlds__style_checks__ProcINCs_19)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__style_checks__succeeded)
        {
          check_hlds__style_checks__HeadProcINC_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__ProcINCs_19, (MR_Integer) 0)));
          check_hlds__style_checks__TailProcINCs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__ProcINCs_19, (MR_Integer) 1)));
        }
      }
      if (check_hlds__style_checks__succeeded)
      {
        MR_Word check_hlds__style_checks__PredDeclContext_22;
        MR_Word check_hlds__style_checks__PredINC_23;
        MR_Word check_hlds__style_checks__Specs0_24;
        MR_Word check_hlds__style_checks__Specs_25;
        MR_Word check_hlds__style_checks__Var_51;
        MR_Word check_hlds__style_checks__Var_52;
        MR_Word check_hlds__style_checks__Var_53;
        MR_Word check_hlds__style_checks__Var_54;
        MR_Word check_hlds__style_checks__Var_55;

        hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__style_checks__PredInfo_10, &check_hlds__style_checks__PredDeclContext_22);
        {
          check_hlds__style_checks__PredINC_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredINC_23, 0) = ((MR_Box) (check_hlds__style_checks__PredDeclItemNumber_15));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredINC_23, 1) = ((MR_Box) (check_hlds__style_checks__PredDeclContext_22));
        }
        check_hlds__style_checks__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 0)));
        check_hlds__style_checks__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 1)));
        check_hlds__style_checks__Specs0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 2)));
        check_hlds__style_checks__report_any_inc_gaps_7_p_0(check_hlds__style_checks__PredInfo_10, check_hlds__style_checks__PredINC_23, check_hlds__style_checks__HeadProcINC_20, check_hlds__style_checks__TailProcINCs_21, (MR_Integer) 0, check_hlds__style_checks__Specs0_24, &check_hlds__style_checks__Specs_25);
        check_hlds__style_checks__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 0)));
        check_hlds__style_checks__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 1)));
        check_hlds__style_checks__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42, (MR_Integer) 2)));
        {
          check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48, 0) = ((MR_Box) (check_hlds__style_checks__Var_53));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48, 1) = ((MR_Box) (check_hlds__style_checks__Var_54));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48, 2) = ((MR_Box) (check_hlds__style_checks__Specs_25));
        }
      }
      else
        check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48 = check_hlds__style_checks__STATE_VARIABLE_StyleInfo_0_42;
      if ((check_hlds__style_checks__MaybeDefnKind_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__style_checks__STATE_VARIABLE_StyleInfo_43 = check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48;
      else
      {
        MR_Word check_hlds__style_checks__DefnKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__MaybeDefnKind_7, (MR_Integer) 0)));
        MR_Word check_hlds__style_checks__ClausesInfo_27;
        MR_Word check_hlds__style_checks__ClauseItemNumbers_29;
        MR_Word check_hlds__style_checks__Regions_30;
        MR_Word check_hlds__style_checks___ClausesRep_28;

        hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__style_checks__PredInfo_10, &check_hlds__style_checks__ClausesInfo_27);
        hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__style_checks__ClausesInfo_27, &check_hlds__style_checks___ClausesRep_28, &check_hlds__style_checks__ClauseItemNumbers_29);
        hlds__hlds_clauses__clause_item_number_regions_3_p_0(check_hlds__style_checks__ClauseItemNumbers_29, check_hlds__style_checks__DefnKind_26, &check_hlds__style_checks__Regions_30);
        if ((check_hlds__style_checks__Regions_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__style_checks__STATE_VARIABLE_StyleInfo_43 = check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48;
        else
        {
          MR_Word check_hlds__style_checks__FirstRegion_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Regions_30, (MR_Integer) 0)));
          MR_Integer check_hlds__style_checks__FirstClauseItemNumber_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstRegion_31, (MR_Integer) 0)));
          MR_Word check_hlds__style_checks__PredItemNumbers_37;
          MR_Word check_hlds__style_checks__Var_76;
          MR_Word check_hlds__style_checks__Var_77;
          MR_Word check_hlds__style_checks__Var_78;
          MR_Word check_hlds__style_checks__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Regions_30, (MR_Integer) 1)));
          MR_Integer check_hlds__style_checks__Var_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstRegion_31, (MR_Integer) 1)));
          MR_Word check_hlds__style_checks__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstRegion_31, (MR_Integer) 2)));
          MR_Word check_hlds__style_checks__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstRegion_31, (MR_Integer) 3)));

          {
            check_hlds__style_checks__PredItemNumbers_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_37, 0) = ((MR_Box) (check_hlds__style_checks__PredId_8));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_37, 1) = ((MR_Box) (check_hlds__style_checks__PredInfo_10));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_37, 2) = ((MR_Box) (check_hlds__style_checks__PredDeclItemNumber_15));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__PredItemNumbers_37, 3) = ((MR_Box) (check_hlds__style_checks__FirstClauseItemNumber_33));
          }
          check_hlds__style_checks__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48, (MR_Integer) 0)));
          check_hlds__style_checks__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48, (MR_Integer) 1)));
          check_hlds__style_checks__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__STATE_VARIABLE_StyleInfo_48_48, (MR_Integer) 2)));
          switch (check_hlds__style_checks__DeclSection_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__style_checks__NonExportedPINs_41;

                {
                  check_hlds__style_checks__NonExportedPINs_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__style_checks__NonExportedPINs_41, 0) = ((MR_Box) (check_hlds__style_checks__PredItemNumbers_37));
                  MR_hl_field(MR_mktag(1), check_hlds__style_checks__NonExportedPINs_41, 1) = ((MR_Box) (check_hlds__style_checks__Var_77));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__style_checks__STATE_VARIABLE_StyleInfo_43 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__style_checks__Var_78));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__style_checks__NonExportedPINs_41));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__style_checks__Var_76));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word check_hlds__style_checks__ExportedPINs_39;

                {
                  check_hlds__style_checks__ExportedPINs_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__style_checks__ExportedPINs_39, 0) = ((MR_Box) (check_hlds__style_checks__PredItemNumbers_37));
                  MR_hl_field(MR_mktag(1), check_hlds__style_checks__ExportedPINs_39, 1) = ((MR_Box) (check_hlds__style_checks__Var_78));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  *check_hlds__style_checks__STATE_VARIABLE_StyleInfo_43 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__style_checks__ExportedPINs_39));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__style_checks__Var_77));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__style_checks__Var_76));
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
  MR_Word check_hlds__style_checks__PredInfo_8,
  MR_Word check_hlds__style_checks__FirstINC_9,
  MR_Word check_hlds__style_checks__SecondINC_10,
  MR_Word check_hlds__style_checks__LaterINCs_11,
  MR_Integer check_hlds__style_checks__FirstProcNum_12,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_Specs_0_28,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_Specs_29)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool check_hlds__style_checks__succeeded;
      MR_Integer check_hlds__style_checks__FirstItemNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstINC_9, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__FirstContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstINC_9, (MR_Integer) 1)));
      MR_Integer check_hlds__style_checks__SecondItemNumber_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__SecondINC_10, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__SecondContext_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__SecondINC_10, (MR_Integer) 1)));
      MR_Word check_hlds__style_checks__STATE_VARIABLE_Specs_99_99;

      {
        MR_Integer check_hlds__style_checks__Var_30 = (check_hlds__style_checks__SecondItemNumber_16 - check_hlds__style_checks__FirstItemNumber_14);

        check_hlds__style_checks__succeeded = (check_hlds__style_checks__Var_30 == (MR_Integer) 1);
      }
      if (!(check_hlds__style_checks__succeeded))
      {
        check_hlds__style_checks__succeeded = (check_hlds__style_checks__FirstProcNum_12 == (MR_Integer) 0);
        if (check_hlds__style_checks__succeeded)
        {
          check_hlds__style_checks__succeeded = (check_hlds__style_checks__FirstItemNumber_14 == check_hlds__style_checks__SecondItemNumber_16);
          if (check_hlds__style_checks__succeeded)
            check_hlds__style_checks__succeeded = (check_hlds__style_checks__LaterINCs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      if (check_hlds__style_checks__succeeded)
        check_hlds__style_checks__STATE_VARIABLE_Specs_99_99 = check_hlds__style_checks__STATE_VARIABLE_Specs_0_28;
      else
      {
        MR_Word check_hlds__style_checks__PredPieces_18;
        MR_Word check_hlds__style_checks__PredOrFunc_19;
        MR_String check_hlds__style_checks__PredOrFuncStr_20;
        MR_Word check_hlds__style_checks__FirstPieces_21;
        MR_Word check_hlds__style_checks__SecondPieces_22;
        MR_Word check_hlds__style_checks__FirstMsg_23;
        MR_Word check_hlds__style_checks__SecondMsg_24;
        MR_Word check_hlds__style_checks__Spec_25;
        MR_Word check_hlds__style_checks__Var_88;
        MR_Word check_hlds__style_checks__Var_89;
        MR_Word check_hlds__style_checks__Var_91;
        MR_Word check_hlds__style_checks__Var_92;
        MR_Word check_hlds__style_checks__Var_96;
        MR_Word check_hlds__style_checks__Var_97;

        check_hlds__style_checks__PredPieces_18 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, check_hlds__style_checks__PredInfo_8);
        check_hlds__style_checks__PredOrFunc_19 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__style_checks__PredInfo_8);
        check_hlds__style_checks__PredOrFuncStr_20 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(check_hlds__style_checks__PredOrFunc_19);
        check_hlds__style_checks__succeeded = (check_hlds__style_checks__FirstProcNum_12 == (MR_Integer) 0);
        if (check_hlds__style_checks__succeeded)
        {
          MR_Word check_hlds__style_checks__Var_32;
          MR_Word check_hlds__style_checks__Var_35;
          MR_Word check_hlds__style_checks__Var_36;
          MR_Word check_hlds__style_checks__Var_37;

          {
            check_hlds__style_checks__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_36, 1) = ((MR_Box) (check_hlds__style_checks__PredOrFuncStr_20));
          }
          {
            check_hlds__style_checks__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[51])));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_37, 1) = ((MR_Box) (check_hlds__style_checks__PredPieces_18));
          }
          {
            check_hlds__style_checks__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_35, 0) = ((MR_Box) (check_hlds__style_checks__Var_36));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_35, 1) = ((MR_Box) (check_hlds__style_checks__Var_37));
          }
          {
            check_hlds__style_checks__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_32, 1) = ((MR_Box) (check_hlds__style_checks__Var_35));
          }
          check_hlds__style_checks__FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__style_checks__Var_32, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[8]));
          check_hlds__style_checks__SecondPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[12]);
        }
        else
        {
          MR_Word check_hlds__style_checks__Var_55;
          MR_Word check_hlds__style_checks__Var_58;
          MR_Word check_hlds__style_checks__Var_59;
          MR_Word check_hlds__style_checks__Var_60;
          MR_Word check_hlds__style_checks__Var_63;
          MR_Word check_hlds__style_checks__Var_66;
          MR_Word check_hlds__style_checks__Var_67;
          MR_Integer check_hlds__style_checks__Var_68;
          MR_Word check_hlds__style_checks__Var_78;
          MR_Word check_hlds__style_checks__Var_79;
          MR_Integer check_hlds__style_checks__Var_80;

          {
            check_hlds__style_checks__Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_59, 1) = ((MR_Box) (check_hlds__style_checks__FirstProcNum_12));
          }
          {
            check_hlds__style_checks__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[52])));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_60, 1) = ((MR_Box) (check_hlds__style_checks__PredPieces_18));
          }
          {
            check_hlds__style_checks__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_58, 0) = ((MR_Box) (check_hlds__style_checks__Var_59));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_58, 1) = ((MR_Box) (check_hlds__style_checks__Var_60));
          }
          {
            check_hlds__style_checks__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[50])));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_55, 1) = ((MR_Box) (check_hlds__style_checks__Var_58));
          }
          check_hlds__style_checks__Var_68 = (check_hlds__style_checks__FirstProcNum_12 + (MR_Integer) 1);
          {
            check_hlds__style_checks__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_67, 1) = ((MR_Box) (check_hlds__style_checks__Var_68));
          }
          {
            check_hlds__style_checks__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_66, 0) = ((MR_Box) (check_hlds__style_checks__Var_67));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[14])));
          }
          {
            check_hlds__style_checks__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[53])));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_63, 1) = ((MR_Box) (check_hlds__style_checks__Var_66));
          }
          check_hlds__style_checks__FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__style_checks__Var_55, check_hlds__style_checks__Var_63);
          check_hlds__style_checks__Var_80 = (check_hlds__style_checks__FirstProcNum_12 + (MR_Integer) 1);
          {
            check_hlds__style_checks__Var_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_79, 1) = ((MR_Box) (check_hlds__style_checks__Var_80));
          }
          {
            check_hlds__style_checks__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_78, 0) = ((MR_Box) (check_hlds__style_checks__Var_79));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[16])));
          }
          {
            check_hlds__style_checks__SecondPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__SecondPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[54])));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__SecondPieces_22, 1) = ((MR_Box) (check_hlds__style_checks__Var_78));
          }
        }
        {
          check_hlds__style_checks__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_89, 0) = ((MR_Box) (check_hlds__style_checks__FirstPieces_21));
        }
        {
          check_hlds__style_checks__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_88, 0) = ((MR_Box) (check_hlds__style_checks__Var_89));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__style_checks__FirstMsg_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstMsg_23, 0) = ((MR_Box) (check_hlds__style_checks__FirstContext_15));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__FirstMsg_23, 1) = ((MR_Box) (check_hlds__style_checks__Var_88));
        }
        {
          check_hlds__style_checks__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_92, 0) = ((MR_Box) (check_hlds__style_checks__SecondPieces_22));
        }
        {
          check_hlds__style_checks__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_91, 0) = ((MR_Box) (check_hlds__style_checks__Var_92));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__style_checks__SecondMsg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__SecondMsg_24, 0) = ((MR_Box) (check_hlds__style_checks__SecondContext_17));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__SecondMsg_24, 1) = ((MR_Box) (check_hlds__style_checks__Var_91));
        }
        {
          check_hlds__style_checks__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_97, 0) = ((MR_Box) (check_hlds__style_checks__SecondMsg_24));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__style_checks__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_96, 0) = ((MR_Box) (check_hlds__style_checks__FirstMsg_23));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_96, 1) = ((MR_Box) (check_hlds__style_checks__Var_97));
        }
        {
          check_hlds__style_checks__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_25, 2) = ((MR_Box) (check_hlds__style_checks__Var_96));
        }
        {
          check_hlds__style_checks__STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (check_hlds__style_checks__Spec_25));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_Specs_0_28));
        }
      }
      if ((check_hlds__style_checks__LaterINCs_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *check_hlds__style_checks__STATE_VARIABLE_Specs_29 = check_hlds__style_checks__STATE_VARIABLE_Specs_99_99;
      else
      {
        MR_Word check_hlds__style_checks__ThirdINC_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__LaterINCs_11, (MR_Integer) 0)));
        MR_Word check_hlds__style_checks__LaterLaterINCs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__LaterINCs_11, (MR_Integer) 1)));
        MR_Integer check_hlds__style_checks__Var_100 = (check_hlds__style_checks__FirstProcNum_12 + (MR_Integer) 1);

        /* direct tailcall eliminated */
        {
          MR_Word check_hlds__style_checks__next_value_of_FirstINC_9 = check_hlds__style_checks__SecondINC_10;
          MR_Word check_hlds__style_checks__next_value_of_SecondINC_10 = check_hlds__style_checks__ThirdINC_26;
          MR_Word check_hlds__style_checks__next_value_of_LaterINCs_11 = check_hlds__style_checks__LaterLaterINCs_27;
          MR_Integer check_hlds__style_checks__next_value_of_FirstProcNum_12 = check_hlds__style_checks__Var_100;
          MR_Word check_hlds__style_checks__next_value_of_STATE_VARIABLE_Specs_0_28 = check_hlds__style_checks__STATE_VARIABLE_Specs_99_99;

          check_hlds__style_checks__STATE_VARIABLE_Specs_0_28 = check_hlds__style_checks__next_value_of_STATE_VARIABLE_Specs_0_28;
          check_hlds__style_checks__FirstProcNum_12 = check_hlds__style_checks__next_value_of_FirstProcNum_12;
          check_hlds__style_checks__LaterINCs_11 = check_hlds__style_checks__next_value_of_LaterINCs_11;
          check_hlds__style_checks__SecondINC_10 = check_hlds__style_checks__next_value_of_SecondINC_10;
          check_hlds__style_checks__FirstINC_9 = check_hlds__style_checks__next_value_of_FirstINC_9;
        }
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_3(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv4_STATE_VARIABLE_StyleInfo_43;

    check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2), &check_hlds__style_checks__conv4_STATE_VARIABLE_StyleInfo_43);
    *check_hlds__style_checks__wrapper_arg_3 = ((MR_Box) (check_hlds__style_checks__conv4_STATE_VARIABLE_StyleInfo_43));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_2(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv2_STATE_VARIABLE_StyleInfo_43;

    check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2), &check_hlds__style_checks__conv2_STATE_VARIABLE_StyleInfo_43);
    *check_hlds__style_checks__wrapper_arg_3 = ((MR_Box) (check_hlds__style_checks__conv2_STATE_VARIABLE_StyleInfo_43));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv0_STATE_VARIABLE_StyleInfo_43;

    check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2), &check_hlds__style_checks__conv0_STATE_VARIABLE_StyleInfo_43);
    *check_hlds__style_checks__wrapper_arg_3 = ((MR_Box) (check_hlds__style_checks__conv0_STATE_VARIABLE_StyleInfo_43));
  }
}

void MR_CALL 
check_hlds__style_checks__generate_style_warnings_5_p_0(
  MR_Word check_hlds__style_checks__ModuleInfo_6,
  MR_Word check_hlds__style_checks__Task_7,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_Specs_21)
{
  {
    MR_Word check_hlds__style_checks__TypeCtorInfo_40_40;
    MR_Word check_hlds__style_checks__TypeCtorInfo_41_41;
    MR_Word check_hlds__style_checks__ValidPredIds_10;
    MR_Word check_hlds__style_checks__StyleInfo0_11;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__style_checks__ModuleInfo_6, &check_hlds__style_checks__ValidPredIds_10);
    check_hlds__style_checks__StyleInfo0_11 = (MR_Word) &check_hlds__style_checks_scalar_common_5[4];
    check_hlds__style_checks__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    check_hlds__style_checks__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0;
    switch (MR_tag((MR_Word) check_hlds__style_checks__Task_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word check_hlds__style_checks__StyleInfo_58;
          MR_Word check_hlds__style_checks__Var_62;
          MR_Box check_hlds__style_checks__conv5_StyleInfo_58;
          MR_Word check_hlds__style_checks__ExportedPreds_55;
          MR_Word check_hlds__style_checks__NonExportedPreds_56;

          {
            check_hlds__style_checks__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_62, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_62, 1) = ((MR_Box) (check_hlds__style_checks__generate_style_warnings_5_p_0_3));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_62, 3) = ((MR_Box) (check_hlds__style_checks__ModuleInfo_6));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          mercury__list__foldl_4_p_0(check_hlds__style_checks__TypeCtorInfo_40_40, check_hlds__style_checks__TypeCtorInfo_41_41, check_hlds__style_checks__Var_62, check_hlds__style_checks__ValidPredIds_10, ((MR_Box) (check_hlds__style_checks__StyleInfo0_11)), &check_hlds__style_checks__conv5_StyleInfo_58);
          check_hlds__style_checks__StyleInfo_58 = ((MR_Word) check_hlds__style_checks__conv5_StyleInfo_58);
          check_hlds__style_checks__ExportedPreds_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_58, (MR_Integer) 0)));
          check_hlds__style_checks__NonExportedPreds_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_58, (MR_Integer) 1)));
          *check_hlds__style_checks__STATE_VARIABLE_Specs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_58, (MR_Integer) 2)));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__style_checks__MaybeDefnKind_12;
          MR_Word check_hlds__style_checks__DefnKind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Task_7, (MR_Integer) 0)));
          MR_Word check_hlds__style_checks__StyleInfo_14;
          MR_Word check_hlds__style_checks__ExportedPreds_15;
          MR_Word check_hlds__style_checks__NonExportedPreds_16;
          MR_Word check_hlds__style_checks__ModuleContext_20;
          MR_Word check_hlds__style_checks__Var_27;
          MR_Word check_hlds__style_checks__STATE_VARIABLE_Specs_31_31;
          MR_Box check_hlds__style_checks__conv1_StyleInfo_14;
          MR_Word check_hlds__style_checks__ModeDeclItemNumberSpecs_17;

          {
            check_hlds__style_checks__MaybeDefnKind_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__MaybeDefnKind_12, 0) = ((MR_Box) (check_hlds__style_checks__DefnKind_13));
          }
          {
            check_hlds__style_checks__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_27, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_27, 1) = ((MR_Box) (check_hlds__style_checks__generate_style_warnings_5_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_27, 3) = ((MR_Box) (check_hlds__style_checks__ModuleInfo_6));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_27, 4) = ((MR_Box) (check_hlds__style_checks__MaybeDefnKind_12));
          }
          mercury__list__foldl_4_p_0(check_hlds__style_checks__TypeCtorInfo_40_40, check_hlds__style_checks__TypeCtorInfo_41_41, check_hlds__style_checks__Var_27, check_hlds__style_checks__ValidPredIds_10, ((MR_Box) (check_hlds__style_checks__StyleInfo0_11)), &check_hlds__style_checks__conv1_StyleInfo_14);
          check_hlds__style_checks__StyleInfo_14 = ((MR_Word) check_hlds__style_checks__conv1_StyleInfo_14);
          check_hlds__style_checks__ExportedPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_14, (MR_Integer) 0)));
          check_hlds__style_checks__NonExportedPreds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_14, (MR_Integer) 1)));
          check_hlds__style_checks__ModeDeclItemNumberSpecs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_14, (MR_Integer) 2)));
          hlds__hlds_module__module_info_get_name_context_2_p_0(check_hlds__style_checks__ModuleInfo_6, &check_hlds__style_checks__ModuleContext_20);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(check_hlds__style_checks__ModuleContext_20, (MR_String) "exported", check_hlds__style_checks__ExportedPreds_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__style_checks__STATE_VARIABLE_Specs_31_31);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(check_hlds__style_checks__ModuleContext_20, (MR_String) "nonexported", check_hlds__style_checks__NonExportedPreds_16, check_hlds__style_checks__STATE_VARIABLE_Specs_31_31, check_hlds__style_checks__STATE_VARIABLE_Specs_21);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__style_checks__DefnKind_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__style_checks__Task_7, (MR_Integer) 0)));
          MR_Word check_hlds__style_checks__ModuleContext_43;
          MR_Word check_hlds__style_checks__STATE_VARIABLE_Specs_31_46;
          MR_Word check_hlds__style_checks__MaybeDefnKind_49;
          MR_Word check_hlds__style_checks__StyleInfo_50;
          MR_Word check_hlds__style_checks__ExportedPreds_51;
          MR_Word check_hlds__style_checks__NonExportedPreds_52;
          MR_Word check_hlds__style_checks__ModeDeclItemNumberSpecs_53;
          MR_Word check_hlds__style_checks__Var_54;
          MR_Box check_hlds__style_checks__conv3_StyleInfo_50;

          {
            check_hlds__style_checks__MaybeDefnKind_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__MaybeDefnKind_49, 0) = ((MR_Box) (check_hlds__style_checks__DefnKind_42));
          }
          {
            check_hlds__style_checks__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_54, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_54, 1) = ((MR_Box) (check_hlds__style_checks__generate_style_warnings_5_p_0_2));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_54, 3) = ((MR_Box) (check_hlds__style_checks__ModuleInfo_6));
            MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_54, 4) = ((MR_Box) (check_hlds__style_checks__MaybeDefnKind_49));
          }
          mercury__list__foldl_4_p_0(check_hlds__style_checks__TypeCtorInfo_40_40, check_hlds__style_checks__TypeCtorInfo_41_41, check_hlds__style_checks__Var_54, check_hlds__style_checks__ValidPredIds_10, ((MR_Box) (check_hlds__style_checks__StyleInfo0_11)), &check_hlds__style_checks__conv3_StyleInfo_50);
          check_hlds__style_checks__StyleInfo_50 = ((MR_Word) check_hlds__style_checks__conv3_StyleInfo_50);
          check_hlds__style_checks__ExportedPreds_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_50, (MR_Integer) 0)));
          check_hlds__style_checks__NonExportedPreds_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_50, (MR_Integer) 1)));
          check_hlds__style_checks__ModeDeclItemNumberSpecs_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__StyleInfo_50, (MR_Integer) 2)));
          hlds__hlds_module__module_info_get_name_context_2_p_0(check_hlds__style_checks__ModuleInfo_6, &check_hlds__style_checks__ModuleContext_43);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(check_hlds__style_checks__ModuleContext_43, (MR_String) "exported", check_hlds__style_checks__ExportedPreds_51, check_hlds__style_checks__ModeDeclItemNumberSpecs_53, &check_hlds__style_checks__STATE_VARIABLE_Specs_31_46);
          check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(check_hlds__style_checks__ModuleContext_43, (MR_String) "nonexported", check_hlds__style_checks__NonExportedPreds_52, check_hlds__style_checks__STATE_VARIABLE_Specs_31_46, check_hlds__style_checks__STATE_VARIABLE_Specs_21);
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_3(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box * check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3,
  MR_Box * check_hlds__style_checks__wrapper_arg_4)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv2_HeadVar__2_2;

    mercury__io__remove_file_4_p_0(((MR_String) check_hlds__style_checks__wrapper_arg_1), &check_hlds__style_checks__conv2_HeadVar__2_2);
    *check_hlds__style_checks__wrapper_arg_2 = ((MR_Box) (check_hlds__style_checks__conv2_HeadVar__2_2));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_2(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv1_R_6;

    check_hlds__style_checks__compare_defn_item_number_3_p_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2), &check_hlds__style_checks__conv1_R_6);
    *check_hlds__style_checks__wrapper_arg_3 = ((MR_Box) (check_hlds__style_checks__conv1_R_6));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv0_R_6;

    check_hlds__style_checks__compare_decl_item_number_3_p_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2), &check_hlds__style_checks__conv0_R_6);
    *check_hlds__style_checks__wrapper_arg_3 = ((MR_Box) (check_hlds__style_checks__conv0_R_6));
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_7_p_0(
  MR_Word check_hlds__style_checks__ModuleContext_8,
  MR_String check_hlds__style_checks__ExportedOrNotStr_9,
  MR_Word check_hlds__style_checks__PredItemNumbers_10,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_Specs_0_39,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_Specs_40)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Word check_hlds__style_checks__TypeCtorInfo_97_97 = (MR_Word) &check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0;
    MR_Word check_hlds__style_checks__DeclOrder_13;
    MR_Word check_hlds__style_checks__DefnOrder_14;

    mercury__list__sort_3_p_0(check_hlds__style_checks__TypeCtorInfo_97_97, (MR_Word) &check_hlds__style_checks_scalar_common_5[1], check_hlds__style_checks__PredItemNumbers_10, &check_hlds__style_checks__DeclOrder_13);
    mercury__list__sort_3_p_0(check_hlds__style_checks__TypeCtorInfo_97_97, (MR_Word) &check_hlds__style_checks_scalar_common_5[2], check_hlds__style_checks__PredItemNumbers_10, &check_hlds__style_checks__DefnOrder_14);
    check_hlds__style_checks__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__style_checks_scalar_common_1[2], ((MR_Box) (check_hlds__style_checks__DeclOrder_13)), ((MR_Box) (check_hlds__style_checks__DefnOrder_14)));
    if (check_hlds__style_checks__succeeded)
      *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = check_hlds__style_checks__STATE_VARIABLE_Specs_0_39;
    else
    {
      MR_Word check_hlds__style_checks__DeclResult_16;
      MR_Word check_hlds__style_checks__DefnResult_17;
      MR_Word check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81;
      MR_Word check_hlds__style_checks___Results_38;
      MR_Box check_hlds__style_checks__conv3_STATE_VARIABLE_IO_42;

      check_hlds__style_checks__make_order_temp_file_6_p_0(check_hlds__style_checks__ExportedOrNotStr_9, (MR_String) "declaration_order", check_hlds__style_checks__DeclOrder_13, &check_hlds__style_checks__DeclResult_16);
      check_hlds__style_checks__make_order_temp_file_6_p_0(check_hlds__style_checks__ExportedOrNotStr_9, (MR_String) "definition_order", check_hlds__style_checks__DefnOrder_14, &check_hlds__style_checks__DefnResult_17);
      if (((MR_tag((MR_Word) check_hlds__style_checks__DeclResult_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__style_checks__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DeclResult_16, (MR_Integer) 1)));
        MR_Word check_hlds__style_checks__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DeclResult_16, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__style_checks__DefnResult_17)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word check_hlds__style_checks__TypeCtorInfo_101_101;
          MR_Word check_hlds__style_checks__HeadDefnSpec_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DefnResult_17, (MR_Integer) 0)));
          MR_Word check_hlds__style_checks__TailDefnSpecs_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DefnResult_17, (MR_Integer) 1)));
          MR_Word check_hlds__style_checks__Var_83;
          MR_Word check_hlds__style_checks__Var_84;
          MR_Word check_hlds__style_checks__Var_85;

          check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          check_hlds__style_checks__TypeCtorInfo_101_101 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
          {
            check_hlds__style_checks__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_83, 0) = ((MR_Box) (check_hlds__style_checks__Var_112));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_83, 1) = ((MR_Box) (check_hlds__style_checks__Var_111));
          }
          {
            check_hlds__style_checks__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_85, 0) = ((MR_Box) (check_hlds__style_checks__HeadDefnSpec_20));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_85, 1) = ((MR_Box) (check_hlds__style_checks__TailDefnSpecs_21));
          }
          check_hlds__style_checks__Var_84 = mercury__list__f_43_43_2_f_0(check_hlds__style_checks__TypeCtorInfo_101_101, check_hlds__style_checks__Var_85, check_hlds__style_checks__STATE_VARIABLE_Specs_0_39);
          *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0(check_hlds__style_checks__TypeCtorInfo_101_101, check_hlds__style_checks__Var_83, check_hlds__style_checks__Var_84);
        }
        else
        {
          MR_String check_hlds__style_checks__DefnFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DefnResult_17, (MR_Integer) 0)));
          MR_Word check_hlds__style_checks__Var_80;

          {
            check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81, 0) = ((MR_Box) (check_hlds__style_checks__DefnFileName_22));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__style_checks__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_80, 0) = ((MR_Box) (check_hlds__style_checks__Var_112));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_80, 1) = ((MR_Box) (check_hlds__style_checks__Var_111));
          }
          *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__style_checks__Var_80, check_hlds__style_checks__STATE_VARIABLE_Specs_0_39);
        }
      }
      else
      {
        MR_String check_hlds__style_checks__Var_113 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DeclResult_16, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) check_hlds__style_checks__DefnResult_17)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word check_hlds__style_checks__Var_76;
          MR_Word check_hlds__style_checks__HeadDefnSpec_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DefnResult_17, (MR_Integer) 0)));
          MR_Word check_hlds__style_checks__TailDefnSpecs_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DefnResult_17, (MR_Integer) 1)));

          {
            check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81, 0) = ((MR_Box) (check_hlds__style_checks__Var_113));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__style_checks__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_76, 0) = ((MR_Box) (check_hlds__style_checks__HeadDefnSpec_90));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_76, 1) = ((MR_Box) (check_hlds__style_checks__TailDefnSpecs_91));
          }
          *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__style_checks__Var_76, check_hlds__style_checks__STATE_VARIABLE_Specs_0_39);
        }
        else
        {
          MR_Word check_hlds__style_checks__DiffTempResult_24;
          MR_Word check_hlds__style_checks__STATE_VARIABLE_TempFileNames_49_49;
          MR_Word check_hlds__style_checks__Var_50;
          MR_String check_hlds__style_checks__DefnFileName_92 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DefnResult_17, (MR_Integer) 0)));

          {
            check_hlds__style_checks__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_50, 0) = ((MR_Box) (check_hlds__style_checks__DefnFileName_92));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            check_hlds__style_checks__STATE_VARIABLE_TempFileNames_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_49_49, 0) = ((MR_Box) (check_hlds__style_checks__Var_113));
            MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_49_49, 1) = ((MR_Box) (check_hlds__style_checks__Var_50));
          }
          mercury__io__make_temp_file_6_p_0((MR_String) "/tmp", (MR_String) "difference", (MR_String) "", &check_hlds__style_checks__DiffTempResult_24);
          if (((MR_tag((MR_Word) check_hlds__style_checks__DiffTempResult_24)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word check_hlds__style_checks__DiffTempError_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DiffTempResult_24, (MR_Integer) 0)));
            MR_Word check_hlds__style_checks__DiffTempSpec_26;

            check_hlds__style_checks__DiffTempSpec_26 = check_hlds__style_checks__cannot_create_temp_file_spec_2_f_0(check_hlds__style_checks__ExportedOrNotStr_9, check_hlds__style_checks__DiffTempError_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__DiffTempSpec_26));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_Specs_0_39));
            }
            check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81 = check_hlds__style_checks__STATE_VARIABLE_TempFileNames_49_49;
          }
          else
          {
            MR_String check_hlds__style_checks__DiffFileName_27 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DiffTempResult_24, (MR_Integer) 0)));
            MR_String check_hlds__style_checks__Cmd_28;
            MR_Word check_hlds__style_checks__CmdResult_29;
            MR_String check_hlds__style_checks__Var_115;
            MR_String check_hlds__style_checks__Var_116;
            MR_String check_hlds__style_checks__Var_118;
            MR_String check_hlds__style_checks__Var_119;

            {
              check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81, 0) = ((MR_Box) (check_hlds__style_checks__DiffFileName_27));
              MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_TempFileNames_49_49));
            }
            check_hlds__style_checks__Var_115 = mercury__string__f_43_43_2_f_0((MR_String) " > ", check_hlds__style_checks__DiffFileName_27);
            check_hlds__style_checks__Var_116 = mercury__string__f_43_43_2_f_0(check_hlds__style_checks__DefnFileName_92, check_hlds__style_checks__Var_115);
            check_hlds__style_checks__Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " ", check_hlds__style_checks__Var_116);
            check_hlds__style_checks__Var_119 = mercury__string__f_43_43_2_f_0(check_hlds__style_checks__Var_113, check_hlds__style_checks__Var_118);
            check_hlds__style_checks__Cmd_28 = mercury__string__f_43_43_2_f_0((MR_String) "diff -u ", check_hlds__style_checks__Var_119);
            mercury__io__call_system_4_p_0(check_hlds__style_checks__Cmd_28, &check_hlds__style_checks__CmdResult_29);
            if (((MR_tag((MR_Word) check_hlds__style_checks__CmdResult_29)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word check_hlds__style_checks__CmdError_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__CmdResult_29, (MR_Integer) 0)));
              MR_Word check_hlds__style_checks__CmdSpec_31;

              check_hlds__style_checks__CmdSpec_31 = check_hlds__style_checks__cannot_execute_cmd_spec_3_f_0(check_hlds__style_checks__ExportedOrNotStr_9, check_hlds__style_checks__Cmd_28, check_hlds__style_checks__CmdError_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__CmdSpec_31));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_Specs_0_39));
              }
            }
            else
            {
              MR_Word check_hlds__style_checks__DiffOpenResult_33;

              mercury__io__open_input_4_p_0(check_hlds__style_checks__DiffFileName_27, &check_hlds__style_checks__DiffOpenResult_33);
              if (((MR_tag((MR_Word) check_hlds__style_checks__DiffOpenResult_33)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word check_hlds__style_checks__DiffOpenError_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__DiffOpenResult_33, (MR_Integer) 0)));
                MR_Word check_hlds__style_checks__DiffOpenSpec_35;

                check_hlds__style_checks__DiffOpenSpec_35 = check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(check_hlds__style_checks__ExportedOrNotStr_9, check_hlds__style_checks__DiffFileName_27, check_hlds__style_checks__DiffOpenError_34);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__DiffOpenSpec_35));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_Specs_0_39));
                }
              }
              else
              {
                MR_Word check_hlds__style_checks__DiffStream_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__DiffOpenResult_33, (MR_Integer) 0)));
                MR_Word check_hlds__style_checks__DiffReadSpec_37;

                check_hlds__style_checks__diff_file_to_spec_7_p_0(check_hlds__style_checks__DiffStream_36, check_hlds__style_checks__DiffFileName_27, check_hlds__style_checks__ModuleContext_8, check_hlds__style_checks__ExportedOrNotStr_9, &check_hlds__style_checks__DiffReadSpec_37);
                mercury__io__close_input_3_p_0(check_hlds__style_checks__DiffStream_36);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *check_hlds__style_checks__STATE_VARIABLE_Specs_40 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__DiffReadSpec_37));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_Specs_0_39));
                }
              }
            }
          }
        }
      }
      mercury__list__map_foldl_5_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_res_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &check_hlds__style_checks_scalar_common_5[3], check_hlds__style_checks__STATE_VARIABLE_TempFileNames_81_81, &check_hlds__style_checks___Results_38, ((MR_Box) ((MR_Integer) 0)), &check_hlds__style_checks__conv3_STATE_VARIABLE_IO_42);
    }
  }
}

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_execute_cmd_spec_3_f_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_5,
  MR_String check_hlds__style_checks__Cmd_6,
  MR_Word check_hlds__style_checks__Error_7)
{
  {
    MR_Word check_hlds__style_checks__Spec_8;
    MR_String check_hlds__style_checks__ErrorMsg_9;
    MR_Word check_hlds__style_checks__Pieces_10;
    MR_Word check_hlds__style_checks__Msg_11;
    MR_Word check_hlds__style_checks__Var_14;
    MR_Word check_hlds__style_checks__Var_17;
    MR_Word check_hlds__style_checks__Var_20;
    MR_Word check_hlds__style_checks__Var_21;
    MR_Word check_hlds__style_checks__Var_22;
    MR_Word check_hlds__style_checks__Var_25;
    MR_Word check_hlds__style_checks__Var_28;
    MR_Word check_hlds__style_checks__Var_30;
    MR_Word check_hlds__style_checks__Var_31;
    MR_Word check_hlds__style_checks__Var_32;
    MR_Word check_hlds__style_checks__Var_34;
    MR_Word check_hlds__style_checks__Var_37;
    MR_Word check_hlds__style_checks__Var_39;
    MR_Word check_hlds__style_checks__Var_40;
    MR_Word check_hlds__style_checks__Var_50;
    MR_Word check_hlds__style_checks__Var_51;
    MR_Word check_hlds__style_checks__Var_55;

    mercury__io__error_message_2_p_0(check_hlds__style_checks__Error_7, &check_hlds__style_checks__ErrorMsg_9);
    {
      check_hlds__style_checks__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_21, 1) = ((MR_Box) (check_hlds__style_checks__ExportedOrNotStr_5));
    }
    {
      check_hlds__style_checks__Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__style_checks__Var_31, 0) = ((MR_Box) (check_hlds__style_checks__Cmd_6));
    }
    {
      check_hlds__style_checks__Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_40, 1) = ((MR_Box) (check_hlds__style_checks__ErrorMsg_9));
    }
    {
      check_hlds__style_checks__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_39, 0) = ((MR_Box) (check_hlds__style_checks__Var_40));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
    }
    {
      check_hlds__style_checks__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_37, 1) = ((MR_Box) (check_hlds__style_checks__Var_39));
    }
    {
      check_hlds__style_checks__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[49])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_34, 1) = ((MR_Box) (check_hlds__style_checks__Var_37));
    }
    {
      check_hlds__style_checks__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_32, 1) = ((MR_Box) (check_hlds__style_checks__Var_34));
    }
    {
      check_hlds__style_checks__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_30, 0) = ((MR_Box) (check_hlds__style_checks__Var_31));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_30, 1) = ((MR_Box) (check_hlds__style_checks__Var_32));
    }
    {
      check_hlds__style_checks__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_28, 1) = ((MR_Box) (check_hlds__style_checks__Var_30));
    }
    {
      check_hlds__style_checks__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_25, 1) = ((MR_Box) (check_hlds__style_checks__Var_28));
    }
    {
      check_hlds__style_checks__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_22, 1) = ((MR_Box) (check_hlds__style_checks__Var_25));
    }
    {
      check_hlds__style_checks__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_20, 0) = ((MR_Box) (check_hlds__style_checks__Var_21));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_20, 1) = ((MR_Box) (check_hlds__style_checks__Var_22));
    }
    {
      check_hlds__style_checks__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_17, 1) = ((MR_Box) (check_hlds__style_checks__Var_20));
    }
    {
      check_hlds__style_checks__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_14, 1) = ((MR_Box) (check_hlds__style_checks__Var_17));
    }
    {
      check_hlds__style_checks__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_10, 1) = ((MR_Box) (check_hlds__style_checks__Var_14));
    }
    {
      check_hlds__style_checks__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_51, 0) = ((MR_Box) (check_hlds__style_checks__Pieces_10));
    }
    {
      check_hlds__style_checks__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_50, 0) = ((MR_Box) (check_hlds__style_checks__Var_51));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__style_checks__Msg_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 3) = ((MR_Box) (check_hlds__style_checks__Var_50));
    }
    {
      check_hlds__style_checks__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_55, 0) = ((MR_Box) (check_hlds__style_checks__Msg_11));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__style_checks__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_8, 2) = ((MR_Box) (check_hlds__style_checks__Var_55));
    }
    return check_hlds__style_checks__Spec_8;
  }
}

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_create_temp_file_spec_2_f_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_4,
  MR_Word check_hlds__style_checks__Error_5)
{
  {
    MR_Word check_hlds__style_checks__Spec_6;
    MR_String check_hlds__style_checks__ErrorMsg_7;
    MR_Word check_hlds__style_checks__Pieces_8;
    MR_Word check_hlds__style_checks__Msg_9;
    MR_Word check_hlds__style_checks__Var_12;
    MR_Word check_hlds__style_checks__Var_15;
    MR_Word check_hlds__style_checks__Var_18;
    MR_Word check_hlds__style_checks__Var_19;
    MR_Word check_hlds__style_checks__Var_20;
    MR_Word check_hlds__style_checks__Var_23;
    MR_Word check_hlds__style_checks__Var_26;
    MR_Word check_hlds__style_checks__Var_28;
    MR_Word check_hlds__style_checks__Var_29;
    MR_Word check_hlds__style_checks__Var_39;
    MR_Word check_hlds__style_checks__Var_40;
    MR_Word check_hlds__style_checks__Var_44;

    mercury__io__error_message_2_p_0(check_hlds__style_checks__Error_5, &check_hlds__style_checks__ErrorMsg_7);
    {
      check_hlds__style_checks__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_19, 1) = ((MR_Box) (check_hlds__style_checks__ExportedOrNotStr_4));
    }
    {
      check_hlds__style_checks__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_29, 1) = ((MR_Box) (check_hlds__style_checks__ErrorMsg_7));
    }
    {
      check_hlds__style_checks__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_28, 0) = ((MR_Box) (check_hlds__style_checks__Var_29));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
    }
    {
      check_hlds__style_checks__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_26, 1) = ((MR_Box) (check_hlds__style_checks__Var_28));
    }
    {
      check_hlds__style_checks__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[43])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_23, 1) = ((MR_Box) (check_hlds__style_checks__Var_26));
    }
    {
      check_hlds__style_checks__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_20, 1) = ((MR_Box) (check_hlds__style_checks__Var_23));
    }
    {
      check_hlds__style_checks__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_18, 0) = ((MR_Box) (check_hlds__style_checks__Var_19));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_18, 1) = ((MR_Box) (check_hlds__style_checks__Var_20));
    }
    {
      check_hlds__style_checks__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_15, 1) = ((MR_Box) (check_hlds__style_checks__Var_18));
    }
    {
      check_hlds__style_checks__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_12, 1) = ((MR_Box) (check_hlds__style_checks__Var_15));
    }
    {
      check_hlds__style_checks__Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_8, 1) = ((MR_Box) (check_hlds__style_checks__Var_12));
    }
    {
      check_hlds__style_checks__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_40, 0) = ((MR_Box) (check_hlds__style_checks__Pieces_8));
    }
    {
      check_hlds__style_checks__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_39, 0) = ((MR_Box) (check_hlds__style_checks__Var_40));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__style_checks__Msg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_9, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_9, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_9, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_9, 3) = ((MR_Box) (check_hlds__style_checks__Var_39));
    }
    {
      check_hlds__style_checks__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_44, 0) = ((MR_Box) (check_hlds__style_checks__Msg_9));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__style_checks__Spec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_6, 2) = ((MR_Box) (check_hlds__style_checks__Var_44));
    }
    return check_hlds__style_checks__Spec_6;
  }
}

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box * check_hlds__style_checks__wrapper_arg_2)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;
    MR_Word check_hlds__style_checks__conv0_Pieces_4;

    check_hlds__style_checks__diff_line_to_pieces_2_p_0(((MR_String) check_hlds__style_checks__wrapper_arg_1), &check_hlds__style_checks__conv0_Pieces_4);
    *check_hlds__style_checks__wrapper_arg_2 = ((MR_Box) (check_hlds__style_checks__conv0_Pieces_4));
  }
}

static void MR_CALL 
check_hlds__style_checks__diff_file_to_spec_7_p_0(
  MR_Word check_hlds__style_checks__DiffStream_8,
  MR_String check_hlds__style_checks__DiffFileName_9,
  MR_Word check_hlds__style_checks__ModuleContext_10,
  MR_String check_hlds__style_checks__ExportedOrNotStr_11,
  MR_Word * check_hlds__style_checks__Spec_12)
{
  {
    MR_bool check_hlds__style_checks__succeeded;
    MR_Word check_hlds__style_checks__RevLines_14;
    MR_Word check_hlds__style_checks__MaybeIOError_15;

    check_hlds__style_checks__read_lines_as_rev_strings_6_p_0(check_hlds__style_checks__DiffStream_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__style_checks__RevLines_14, &check_hlds__style_checks__MaybeIOError_15);
    if ((check_hlds__style_checks__MaybeIOError_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word check_hlds__style_checks__TypeCtorInfo_157_157 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word check_hlds__style_checks__Lines_20;
      MR_Word check_hlds__style_checks__DiffLines_23;
      MR_String check_hlds__style_checks__Line1_21;
      MR_String check_hlds__style_checks__Line2_22;
      MR_Word check_hlds__style_checks__Var_31;
      MR_String check_hlds__style_checks__Var_32;
      MR_String check_hlds__style_checks__Var_33;

      mercury__list__reverse_2_p_0(check_hlds__style_checks__TypeCtorInfo_157_157, check_hlds__style_checks__RevLines_14, &check_hlds__style_checks__Lines_20);
      check_hlds__style_checks__succeeded = ((MR_tag((MR_Word) check_hlds__style_checks__Lines_20)) == (MR_mktag((MR_Integer) 1)));
      if (check_hlds__style_checks__succeeded)
      {
        check_hlds__style_checks__Line1_21 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Lines_20, (MR_Integer) 0)));
        check_hlds__style_checks__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Lines_20, (MR_Integer) 1)));
        check_hlds__style_checks__succeeded = ((MR_tag((MR_Word) check_hlds__style_checks__Var_31)) == (MR_mktag((MR_Integer) 1)));
        if (check_hlds__style_checks__succeeded)
        {
          check_hlds__style_checks__Line2_22 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_31, (MR_Integer) 0)));
          check_hlds__style_checks__DiffLines_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_31, (MR_Integer) 1)));
          check_hlds__style_checks__Var_32 = (MR_String) "--- ";
          check_hlds__style_checks__succeeded = mercury__string__prefix_2_p_0(check_hlds__style_checks__Line1_21, check_hlds__style_checks__Var_32);
          if (check_hlds__style_checks__succeeded)
          {
            check_hlds__style_checks__Var_33 = (MR_String) "+++ ";
            check_hlds__style_checks__succeeded = mercury__string__prefix_2_p_0(check_hlds__style_checks__Line2_22, check_hlds__style_checks__Var_33);
          }
        }
      }
      if (check_hlds__style_checks__succeeded)
      {
        MR_Word check_hlds__style_checks__TypeCtorInfo_161_161;
        MR_Word check_hlds__style_checks__HeadPieces_24;
        MR_Word check_hlds__style_checks__DiffPieceLists_25;
        MR_Word check_hlds__style_checks__DiffPieces_26;
        MR_Word check_hlds__style_checks__Var_36;
        MR_Word check_hlds__style_checks__Var_39;
        MR_Word check_hlds__style_checks__Var_42;
        MR_Word check_hlds__style_checks__Var_43;
        MR_Word check_hlds__style_checks__Var_66;
        MR_Word check_hlds__style_checks__Var_67;
        MR_Word check_hlds__style_checks__Var_71;
        MR_Word check_hlds__style_checks__Pieces_149;
        MR_Word check_hlds__style_checks__Msg_150;

        {
          check_hlds__style_checks__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_43, 1) = ((MR_Box) (check_hlds__style_checks__ExportedOrNotStr_11));
        }
        {
          check_hlds__style_checks__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_42, 0) = ((MR_Box) (check_hlds__style_checks__Var_43));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[25])));
        }
        {
          check_hlds__style_checks__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_39, 1) = ((MR_Box) (check_hlds__style_checks__Var_42));
        }
        {
          check_hlds__style_checks__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_36, 1) = ((MR_Box) (check_hlds__style_checks__Var_39));
        }
        {
          check_hlds__style_checks__HeadPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__HeadPieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[44])));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__HeadPieces_24, 1) = ((MR_Box) (check_hlds__style_checks__Var_36));
        }
        mercury__list__map_3_p_0(check_hlds__style_checks__TypeCtorInfo_157_157, (MR_Word) &check_hlds__style_checks_scalar_common_1[1], (MR_Word) &check_hlds__style_checks_scalar_common_5[0], check_hlds__style_checks__DiffLines_23, &check_hlds__style_checks__DiffPieceLists_25);
        check_hlds__style_checks__TypeCtorInfo_161_161 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        mercury__list__condense_2_p_0(check_hlds__style_checks__TypeCtorInfo_161_161, check_hlds__style_checks__DiffPieceLists_25, &check_hlds__style_checks__DiffPieces_26);
        check_hlds__style_checks__Pieces_149 = mercury__list__f_43_43_2_f_0(check_hlds__style_checks__TypeCtorInfo_161_161, check_hlds__style_checks__HeadPieces_24, check_hlds__style_checks__DiffPieces_26);
        {
          check_hlds__style_checks__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_67, 0) = ((MR_Box) (check_hlds__style_checks__Pieces_149));
        }
        {
          check_hlds__style_checks__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_66, 0) = ((MR_Box) (check_hlds__style_checks__Var_67));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__style_checks__Msg_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Msg_150, 0) = ((MR_Box) (check_hlds__style_checks__ModuleContext_10));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Msg_150, 1) = ((MR_Box) (check_hlds__style_checks__Var_66));
        }
        {
          check_hlds__style_checks__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_71, 0) = ((MR_Box) (check_hlds__style_checks__Msg_150));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__style_checks__Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__style_checks__Var_71));
        }
      }
      else
      {
        MR_Word check_hlds__style_checks__Var_75;
        MR_Word check_hlds__style_checks__Var_78;
        MR_Word check_hlds__style_checks__Var_81;
        MR_Word check_hlds__style_checks__Var_82;
        MR_Word check_hlds__style_checks__Var_101;
        MR_Word check_hlds__style_checks__Var_102;
        MR_Word check_hlds__style_checks__Var_106;
        MR_Word check_hlds__style_checks__Pieces_151;
        MR_Word check_hlds__style_checks__Msg_152;

        {
          check_hlds__style_checks__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_82, 1) = ((MR_Box) (check_hlds__style_checks__ExportedOrNotStr_11));
        }
        {
          check_hlds__style_checks__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_81, 0) = ((MR_Box) (check_hlds__style_checks__Var_82));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[33])));
        }
        {
          check_hlds__style_checks__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[38])));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_78, 1) = ((MR_Box) (check_hlds__style_checks__Var_81));
        }
        {
          check_hlds__style_checks__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_75, 1) = ((MR_Box) (check_hlds__style_checks__Var_78));
        }
        {
          check_hlds__style_checks__Pieces_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_151, 1) = ((MR_Box) (check_hlds__style_checks__Var_75));
        }
        {
          check_hlds__style_checks__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_102, 0) = ((MR_Box) (check_hlds__style_checks__Pieces_151));
        }
        {
          check_hlds__style_checks__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_101, 0) = ((MR_Box) (check_hlds__style_checks__Var_102));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          check_hlds__style_checks__Msg_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_152, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_152, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_152, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_152, 3) = ((MR_Box) (check_hlds__style_checks__Var_101));
        }
        {
          check_hlds__style_checks__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_106, 0) = ((MR_Box) (check_hlds__style_checks__Msg_152));
          MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__style_checks__Spec_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__style_checks__Var_106));
        }
      }
    }
    else
    {
      MR_Word check_hlds__style_checks__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__MaybeIOError_15, (MR_Integer) 0)));
      MR_String check_hlds__style_checks__ErrorMsg_17;
      MR_Word check_hlds__style_checks__Pieces_18;
      MR_Word check_hlds__style_checks__Msg_19;
      MR_Word check_hlds__style_checks__Var_110;
      MR_Word check_hlds__style_checks__Var_113;
      MR_Word check_hlds__style_checks__Var_116;
      MR_Word check_hlds__style_checks__Var_117;
      MR_Word check_hlds__style_checks__Var_118;
      MR_Word check_hlds__style_checks__Var_121;
      MR_Word check_hlds__style_checks__Var_124;
      MR_Word check_hlds__style_checks__Var_125;
      MR_Word check_hlds__style_checks__Var_126;
      MR_Word check_hlds__style_checks__Var_129;
      MR_Word check_hlds__style_checks__Var_131;
      MR_Word check_hlds__style_checks__Var_132;
      MR_Word check_hlds__style_checks__Var_142;
      MR_Word check_hlds__style_checks__Var_143;
      MR_Word check_hlds__style_checks__Var_147;

      mercury__io__error_message_2_p_0(check_hlds__style_checks__Error_16, &check_hlds__style_checks__ErrorMsg_17);
      {
        check_hlds__style_checks__Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_117, 1) = ((MR_Box) (check_hlds__style_checks__ExportedOrNotStr_11));
      }
      {
        check_hlds__style_checks__Var_125 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), check_hlds__style_checks__Var_125, 0) = ((MR_Box) (check_hlds__style_checks__DiffFileName_9));
      }
      {
        check_hlds__style_checks__Var_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_132, 1) = ((MR_Box) (check_hlds__style_checks__ErrorMsg_17));
      }
      {
        check_hlds__style_checks__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_131, 0) = ((MR_Box) (check_hlds__style_checks__Var_132));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
      }
      {
        check_hlds__style_checks__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_129, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_129, 1) = ((MR_Box) (check_hlds__style_checks__Var_131));
      }
      {
        check_hlds__style_checks__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_126, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[41])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_126, 1) = ((MR_Box) (check_hlds__style_checks__Var_129));
      }
      {
        check_hlds__style_checks__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_124, 0) = ((MR_Box) (check_hlds__style_checks__Var_125));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_124, 1) = ((MR_Box) (check_hlds__style_checks__Var_126));
      }
      {
        check_hlds__style_checks__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[47])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_121, 1) = ((MR_Box) (check_hlds__style_checks__Var_124));
      }
      {
        check_hlds__style_checks__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_118, 1) = ((MR_Box) (check_hlds__style_checks__Var_121));
      }
      {
        check_hlds__style_checks__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_116, 0) = ((MR_Box) (check_hlds__style_checks__Var_117));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_116, 1) = ((MR_Box) (check_hlds__style_checks__Var_118));
      }
      {
        check_hlds__style_checks__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[38])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_113, 1) = ((MR_Box) (check_hlds__style_checks__Var_116));
      }
      {
        check_hlds__style_checks__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_110, 1) = ((MR_Box) (check_hlds__style_checks__Var_113));
      }
      {
        check_hlds__style_checks__Pieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_18, 1) = ((MR_Box) (check_hlds__style_checks__Var_110));
      }
      {
        check_hlds__style_checks__Var_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_143, 0) = ((MR_Box) (check_hlds__style_checks__Pieces_18));
      }
      {
        check_hlds__style_checks__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_142, 0) = ((MR_Box) (check_hlds__style_checks__Var_143));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__style_checks__Msg_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_19, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_19, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_19, 3) = ((MR_Box) (check_hlds__style_checks__Var_142));
      }
      {
        check_hlds__style_checks__Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_147, 0) = ((MR_Box) (check_hlds__style_checks__Msg_19));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        *check_hlds__style_checks__Spec_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__style_checks__Var_147));
      }
    }
  }
}

static void MR_CALL 
check_hlds__style_checks__read_lines_as_rev_strings_6_p_0(
  MR_Word check_hlds__style_checks__Stream_7,
  MR_Word check_hlds__style_checks__STATE_VARIABLE_RevLines_0_14,
  MR_Word * check_hlds__style_checks__STATE_VARIABLE_RevLines_15,
  MR_Word * check_hlds__style_checks__MaybeIOError_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_Word check_hlds__style_checks__Result_11;

      mercury__io__read_line_as_string_4_p_0(check_hlds__style_checks__Stream_7, &check_hlds__style_checks__Result_11);
      switch (MR_tag((MR_Word) check_hlds__style_checks__Result_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *check_hlds__style_checks__MaybeIOError_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *check_hlds__style_checks__STATE_VARIABLE_RevLines_15 = check_hlds__style_checks__STATE_VARIABLE_RevLines_0_14;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String check_hlds__style_checks__Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__Result_11, (MR_Integer) 0)));
            MR_Word check_hlds__style_checks__STATE_VARIABLE_RevLines_19_19;

            {
              check_hlds__style_checks__STATE_VARIABLE_RevLines_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_RevLines_19_19, 0) = ((MR_Box) (check_hlds__style_checks__Line_13));
              MR_hl_field(MR_mktag(1), check_hlds__style_checks__STATE_VARIABLE_RevLines_19_19, 1) = ((MR_Box) (check_hlds__style_checks__STATE_VARIABLE_RevLines_0_14));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__style_checks__next_value_of_STATE_VARIABLE_RevLines_0_14 = check_hlds__style_checks__STATE_VARIABLE_RevLines_19_19;

              check_hlds__style_checks__STATE_VARIABLE_RevLines_0_14 = check_hlds__style_checks__next_value_of_STATE_VARIABLE_RevLines_0_14;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word check_hlds__style_checks__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__style_checks__Result_11, (MR_Integer) 0)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *check_hlds__style_checks__MaybeIOError_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__Error_12));
            }
            *check_hlds__style_checks__STATE_VARIABLE_RevLines_15 = check_hlds__style_checks__STATE_VARIABLE_RevLines_0_14;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0_1(
  MR_Box check_hlds__style_checks__closure_arg,
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box * check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Box check_hlds__style_checks__closure = check_hlds__style_checks__closure_arg;

    check_hlds__style_checks__write_pred_desc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__style_checks__wrapper_arg_1));
  }
}

static void MR_CALL 
check_hlds__style_checks__make_order_temp_file_6_p_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_7,
  MR_String check_hlds__style_checks__DeclOrDefnOrderStr_8,
  MR_Word check_hlds__style_checks__PredItemNumbers_9,
  MR_Word * check_hlds__style_checks__MaybeFileName_10)
{
  {
    MR_Word check_hlds__style_checks__TempResult_12;

    mercury__io__make_temp_file_6_p_0((MR_String) "/tmp", check_hlds__style_checks__DeclOrDefnOrderStr_8, (MR_String) "", &check_hlds__style_checks__TempResult_12);
    if (((MR_tag((MR_Word) check_hlds__style_checks__TempResult_12)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word check_hlds__style_checks__TempError_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__TempResult_12, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__TempSpec_14;
      MR_String check_hlds__style_checks__ErrorMsg_39;
      MR_Word check_hlds__style_checks__Pieces_40;
      MR_Word check_hlds__style_checks__Msg_41;
      MR_Word check_hlds__style_checks__Var_44;
      MR_Word check_hlds__style_checks__Var_47;
      MR_Word check_hlds__style_checks__Var_50;
      MR_Word check_hlds__style_checks__Var_51;
      MR_Word check_hlds__style_checks__Var_52;
      MR_Word check_hlds__style_checks__Var_55;
      MR_Word check_hlds__style_checks__Var_58;
      MR_Word check_hlds__style_checks__Var_60;
      MR_Word check_hlds__style_checks__Var_61;
      MR_Word check_hlds__style_checks__Var_71;
      MR_Word check_hlds__style_checks__Var_72;
      MR_Word check_hlds__style_checks__Var_76;

      mercury__io__error_message_2_p_0(check_hlds__style_checks__TempError_13, &check_hlds__style_checks__ErrorMsg_39);
      {
        check_hlds__style_checks__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_51, 1) = ((MR_Box) (check_hlds__style_checks__ExportedOrNotStr_7));
      }
      {
        check_hlds__style_checks__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_61, 1) = ((MR_Box) (check_hlds__style_checks__ErrorMsg_39));
      }
      {
        check_hlds__style_checks__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_60, 0) = ((MR_Box) (check_hlds__style_checks__Var_61));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
      }
      {
        check_hlds__style_checks__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_58, 1) = ((MR_Box) (check_hlds__style_checks__Var_60));
      }
      {
        check_hlds__style_checks__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_55, 1) = ((MR_Box) (check_hlds__style_checks__Var_58));
      }
      {
        check_hlds__style_checks__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_52, 1) = ((MR_Box) (check_hlds__style_checks__Var_55));
      }
      {
        check_hlds__style_checks__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_50, 0) = ((MR_Box) (check_hlds__style_checks__Var_51));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_50, 1) = ((MR_Box) (check_hlds__style_checks__Var_52));
      }
      {
        check_hlds__style_checks__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_47, 1) = ((MR_Box) (check_hlds__style_checks__Var_50));
      }
      {
        check_hlds__style_checks__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_44, 1) = ((MR_Box) (check_hlds__style_checks__Var_47));
      }
      {
        check_hlds__style_checks__Pieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_40, 1) = ((MR_Box) (check_hlds__style_checks__Var_44));
      }
      {
        check_hlds__style_checks__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_72, 0) = ((MR_Box) (check_hlds__style_checks__Pieces_40));
      }
      {
        check_hlds__style_checks__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_71, 0) = ((MR_Box) (check_hlds__style_checks__Var_72));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__style_checks__Msg_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_41, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_41, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_41, 3) = ((MR_Box) (check_hlds__style_checks__Var_71));
      }
      {
        check_hlds__style_checks__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_76, 0) = ((MR_Box) (check_hlds__style_checks__Msg_41));
        MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        check_hlds__style_checks__TempSpec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), check_hlds__style_checks__TempSpec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(0), check_hlds__style_checks__TempSpec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
        MR_hl_field(MR_mktag(0), check_hlds__style_checks__TempSpec_14, 2) = ((MR_Box) (check_hlds__style_checks__Var_76));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *check_hlds__style_checks__MaybeFileName_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__TempSpec_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    else
    {
      MR_String check_hlds__style_checks__TempFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__TempResult_12, (MR_Integer) 0)));
      MR_Word check_hlds__style_checks__OpenResult_16;

      mercury__io__open_output_4_p_0(check_hlds__style_checks__TempFileName_15, &check_hlds__style_checks__OpenResult_16);
      if (((MR_tag((MR_Word) check_hlds__style_checks__OpenResult_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word check_hlds__style_checks__OpenError_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__style_checks__OpenResult_16, (MR_Integer) 0)));
        MR_Word check_hlds__style_checks__OpenSpec_18;

        check_hlds__style_checks__OpenSpec_18 = check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(check_hlds__style_checks__ExportedOrNotStr_7, check_hlds__style_checks__TempFileName_15, check_hlds__style_checks__OpenError_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *check_hlds__style_checks__MaybeFileName_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__style_checks__OpenSpec_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_Word check_hlds__style_checks__Stream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__style_checks__OpenResult_16, (MR_Integer) 0)));
        MR_Word check_hlds__style_checks__Var_26;
        MR_Box check_hlds__style_checks__conv0_STATE_VARIABLE_IO_27_27;

        {
          check_hlds__style_checks__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_26, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_26, 1) = ((MR_Box) (check_hlds__style_checks__make_order_temp_file_6_p_0_1));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_26, 3) = ((MR_Box) (check_hlds__style_checks__Stream_19));
        }
        mercury__list__foldl_4_p_2((MR_Word) &check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, check_hlds__style_checks__Var_26, check_hlds__style_checks__PredItemNumbers_9, ((MR_Box) ((MR_Integer) 0)), &check_hlds__style_checks__conv0_STATE_VARIABLE_IO_27_27);
        mercury__io__close_output_3_p_0(check_hlds__style_checks__Stream_19);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *check_hlds__style_checks__MaybeFileName_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__style_checks__TempFileName_15));
        }
      }
    }
  }
}

static MR_Word MR_CALL 
check_hlds__style_checks__cannot_open_temp_file_spec_3_f_0(
  MR_String check_hlds__style_checks__ExportedOrNotStr_5,
  MR_String check_hlds__style_checks__TempFileName_6,
  MR_Word check_hlds__style_checks__Error_7)
{
  {
    MR_Word check_hlds__style_checks__Spec_8;
    MR_String check_hlds__style_checks__ErrorMsg_9;
    MR_Word check_hlds__style_checks__Pieces_10;
    MR_Word check_hlds__style_checks__Msg_11;
    MR_Word check_hlds__style_checks__Var_14;
    MR_Word check_hlds__style_checks__Var_17;
    MR_Word check_hlds__style_checks__Var_20;
    MR_Word check_hlds__style_checks__Var_21;
    MR_Word check_hlds__style_checks__Var_22;
    MR_Word check_hlds__style_checks__Var_25;
    MR_Word check_hlds__style_checks__Var_28;
    MR_Word check_hlds__style_checks__Var_29;
    MR_Word check_hlds__style_checks__Var_30;
    MR_Word check_hlds__style_checks__Var_33;
    MR_Word check_hlds__style_checks__Var_35;
    MR_Word check_hlds__style_checks__Var_36;
    MR_Word check_hlds__style_checks__Var_46;
    MR_Word check_hlds__style_checks__Var_47;
    MR_Word check_hlds__style_checks__Var_51;

    mercury__io__error_message_2_p_0(check_hlds__style_checks__Error_7, &check_hlds__style_checks__ErrorMsg_9);
    {
      check_hlds__style_checks__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_21, 1) = ((MR_Box) (check_hlds__style_checks__ExportedOrNotStr_5));
    }
    {
      check_hlds__style_checks__Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), check_hlds__style_checks__Var_29, 0) = ((MR_Box) (check_hlds__style_checks__TempFileName_6));
    }
    {
      check_hlds__style_checks__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__style_checks__Var_36, 1) = ((MR_Box) (check_hlds__style_checks__ErrorMsg_9));
    }
    {
      check_hlds__style_checks__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_35, 0) = ((MR_Box) (check_hlds__style_checks__Var_36));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[35])));
    }
    {
      check_hlds__style_checks__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_33, 1) = ((MR_Box) (check_hlds__style_checks__Var_35));
    }
    {
      check_hlds__style_checks__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_30, 1) = ((MR_Box) (check_hlds__style_checks__Var_33));
    }
    {
      check_hlds__style_checks__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_28, 0) = ((MR_Box) (check_hlds__style_checks__Var_29));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_28, 1) = ((MR_Box) (check_hlds__style_checks__Var_30));
    }
    {
      check_hlds__style_checks__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_25, 1) = ((MR_Box) (check_hlds__style_checks__Var_28));
    }
    {
      check_hlds__style_checks__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[39])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_22, 1) = ((MR_Box) (check_hlds__style_checks__Var_25));
    }
    {
      check_hlds__style_checks__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_20, 0) = ((MR_Box) (check_hlds__style_checks__Var_21));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_20, 1) = ((MR_Box) (check_hlds__style_checks__Var_22));
    }
    {
      check_hlds__style_checks__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[38])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_17, 1) = ((MR_Box) (check_hlds__style_checks__Var_20));
    }
    {
      check_hlds__style_checks__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[37])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_14, 1) = ((MR_Box) (check_hlds__style_checks__Var_17));
    }
    {
      check_hlds__style_checks__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[36])));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Pieces_10, 1) = ((MR_Box) (check_hlds__style_checks__Var_14));
    }
    {
      check_hlds__style_checks__Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Var_47, 0) = ((MR_Box) (check_hlds__style_checks__Pieces_10));
    }
    {
      check_hlds__style_checks__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_46, 0) = ((MR_Box) (check_hlds__style_checks__Var_47));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__style_checks__Msg_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Msg_11, 3) = ((MR_Box) (check_hlds__style_checks__Var_46));
    }
    {
      check_hlds__style_checks__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_51, 0) = ((MR_Box) (check_hlds__style_checks__Msg_11));
      MR_hl_field(MR_mktag(1), check_hlds__style_checks__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__style_checks__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
      MR_hl_field(MR_mktag(0), check_hlds__style_checks__Spec_8, 2) = ((MR_Box) (check_hlds__style_checks__Var_51));
    }
    return check_hlds__style_checks__Spec_8;
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;

    check_hlds__style_checks__succeeded = check_hlds__style_checks____Unify____inc_0_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2));
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Word check_hlds__style_checks__conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____inc_0_0(&check_hlds__style_checks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__style_checks__wrapper_arg_2), ((MR_Word) check_hlds__style_checks__wrapper_arg_3));
    *check_hlds__style_checks__wrapper_arg_1 = ((MR_Box) (check_hlds__style_checks__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;

    check_hlds__style_checks__succeeded = check_hlds__style_checks____Unify____pred_item_numbers_0_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2));
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Word check_hlds__style_checks__conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____pred_item_numbers_0_0(&check_hlds__style_checks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__style_checks__wrapper_arg_2), ((MR_Word) check_hlds__style_checks__wrapper_arg_3));
    *check_hlds__style_checks__wrapper_arg_1 = ((MR_Box) (check_hlds__style_checks__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;

    check_hlds__style_checks__succeeded = check_hlds__style_checks____Unify____pred_style_info_0_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2));
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Word check_hlds__style_checks__conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____pred_style_info_0_0(&check_hlds__style_checks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__style_checks__wrapper_arg_2), ((MR_Word) check_hlds__style_checks__wrapper_arg_3));
    *check_hlds__style_checks__wrapper_arg_1 = ((MR_Box) (check_hlds__style_checks__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;

    check_hlds__style_checks__succeeded = check_hlds__style_checks____Unify____proc_contiguity_0_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2));
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Word check_hlds__style_checks__conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____proc_contiguity_0_0(&check_hlds__style_checks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__style_checks__wrapper_arg_2), ((MR_Word) check_hlds__style_checks__wrapper_arg_3));
    *check_hlds__style_checks__wrapper_arg_1 = ((MR_Box) (check_hlds__style_checks__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____style_warnings_task_0_0_10001(
  MR_Box check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2)
{
  {
    MR_bool check_hlds__style_checks__succeeded;

    check_hlds__style_checks__succeeded = check_hlds__style_checks____Unify____style_warnings_task_0_0(((MR_Word) check_hlds__style_checks__wrapper_arg_1), ((MR_Word) check_hlds__style_checks__wrapper_arg_2));
    return check_hlds__style_checks__succeeded;
  }
}

static void MR_CALL 
check_hlds__style_checks____Compare____style_warnings_task_0_0_10001(
  MR_Box * check_hlds__style_checks__wrapper_arg_1,
  MR_Box check_hlds__style_checks__wrapper_arg_2,
  MR_Box check_hlds__style_checks__wrapper_arg_3)
{
  {
    MR_Word check_hlds__style_checks__conv0_HeadVar__1_1;

    check_hlds__style_checks____Compare____style_warnings_task_0_0(&check_hlds__style_checks__conv0_HeadVar__1_1, ((MR_Word) check_hlds__style_checks__wrapper_arg_2), ((MR_Word) check_hlds__style_checks__wrapper_arg_3));
    *check_hlds__style_checks__wrapper_arg_1 = ((MR_Box) (check_hlds__style_checks__conv0_HeadVar__1_1));
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

/* :- end_module check_hlds.style_checks. */
