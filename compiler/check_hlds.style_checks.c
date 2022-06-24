/*
** Automatically generated from `style_checks.m'
** by the Mercury compiler,
** version rotd-2022-06-24
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
#include "int.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__edit_seq__pti_change_hunk_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_inc_0_0[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_inc_0_0;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0[1];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0[1];

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0;

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1;

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_maybe_warn_non_contiguous_pred_decls_0[2];

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_maybe_warn_non_contiguous_pred_decls_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_decls_0[2];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0;

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_pred_decl_vs_defn_order_0_1[1];

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_pred_decl_vs_defn_order_0_1[1];

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1;

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_1[1];

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_pred_decl_vs_defn_order_0[2];

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_pred_decl_vs_defn_order_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_pred_decl_vs_defn_order_0[2];

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

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_proc_contiguity_0[2];

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_proc_contiguity_0[2];

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_proc_contiguity_0[2];

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0(
  MR_Word HeadVar__1_1,
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
check_hlds__style_checks__desc_pred_item_numbers_2_p_0(
  MR_Word PredItemNumbers_3,
  MR_String * PredDescStr_4);

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
  MR_Word STATE_VARIABLE_ProcINCs_0_13,
  MR_Word * STATE_VARIABLE_ProcINCs_14,
  MR_Word STATE_VARIABLE_MakesSense_0_15,
  MR_Word * STATE_VARIABLE_MakesSense_16);

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
  MR_Word WarnPredDeclDefnOrder_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_StyleInfo_0_41,
  MR_Word * STATE_VARIABLE_StyleInfo_42);

static void MR_CALL 
check_hlds__style_checks__report_any_inc_gaps_7_p_0(
  MR_Word PredInfo_8,
  MR_Word FirstINC_9,
  MR_Word SecondINC_10,
  MR_Word LaterINCs_11,
  MR_Integer FirstProcNum_12,
  MR_Word STATE_VARIABLE_StyleInfo_0_30,
  MR_Word * STATE_VARIABLE_StyleInfo_31);

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0(
  MR_Word ModuleContext_6,
  MR_String ExportedOrNotStr_7,
  MR_Word PredItemNumbers_8,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

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
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
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


static /* final */ const MR_Box check_hlds__style_checks_scalar_common_1[35][2];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_6[2][8];




static /* final */ const MR_Box check_hlds__style_checks_scalar_common_1[35][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_change_hunk_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "its first mode declaration."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[7])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not followed immediately by"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The first mode declaration"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration for"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not followed immediately by its"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[7])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mode declaration is here."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[7])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the order of"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the declarations and definitions"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__style_checks_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[7])))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__style_checks_scalar_common_3[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is inconsistent, as shown by this diff:"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[30])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "predicates"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[32])))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_4[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_4[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_5[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_5[0])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_5[1])),
    ((MR_Box) (check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__style_checks_scalar_common_6[1])),
    ((MR_Box) (check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_3[2][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "+++ definition order"))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "--- declaration order"))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_4[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_5[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__style_checks__edit_seq__pti_change_hunk_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__style_checks_scalar_common_6[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_pred_decl_vs_defn_order_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0)),
    ((MR_Box) (&check_hlds__style_checks__list__pti_list_1__plain_check_hlds__style_checks__type_ctor_info_inc_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0)),
    ((MR_Box) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__edit_seq__pti_change_hunk_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_change_hunk_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__style_checks__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
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
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_inc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____inc_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____inc_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "inc",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_inc_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_inc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_inc_0,

};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0 = {
  (MR_String) "do_not_warn_non_contiguous_pred_decls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1 = {
  (MR_String) "warn_non_contiguous_pred_decls",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_maybe_warn_non_contiguous_pred_decls_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_maybe_warn_non_contiguous_pred_decls_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_maybe_warn_non_contiguous_pred_decls_0_1
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_decls_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_decls_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "maybe_warn_non_contiguous_pred_decls",
  { check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_maybe_warn_non_contiguous_pred_decls_0 },
  { check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_maybe_warn_non_contiguous_pred_decls_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_non_contiguous_pred_decls_0,

};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0 = {
  (MR_String) "do_not_warn_pred_decl_vs_defn_order",
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

static const MR_PseudoTypeInfo check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_pred_decl_vs_defn_order_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_item_number_types_0)
};

static const MR_DuArgLocn check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_pred_decl_vs_defn_order_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1 = {
  (MR_String) "warn_pred_decl_vs_defn_order",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__style_checks__check_hlds__style_checks__field_types_maybe_warn_pred_decl_vs_defn_order_0_1,
  NULL,
  check_hlds__style_checks__check_hlds__style_checks__field_locns_maybe_warn_pred_decl_vs_defn_order_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_0[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_1[1] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1
};

static const MR_DuPtagLayout check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_pred_decl_vs_defn_order_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_maybe_warn_pred_decl_vs_defn_order_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_pred_decl_vs_defn_order_0[2] = {
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_0,
  &check_hlds__style_checks__check_hlds__style_checks__du_functor_desc_maybe_warn_pred_decl_vs_defn_order_0_1
};

static const MR_Integer check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_pred_decl_vs_defn_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_pred_decl_vs_defn_order_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "maybe_warn_pred_decl_vs_defn_order",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_maybe_warn_pred_decl_vs_defn_order_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_maybe_warn_pred_decl_vs_defn_order_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_maybe_warn_pred_decl_vs_defn_order_0,

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
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_item_numbers_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____pred_item_numbers_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____pred_item_numbers_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "pred_item_numbers",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_item_numbers_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_item_numbers_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_item_numbers_0,

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
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__style_checks__check_hlds__style_checks__du_stag_ordered_pred_style_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__style_checks____Unify____pred_style_info_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____pred_style_info_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "pred_style_info",
  { check_hlds__style_checks__check_hlds__style_checks__du_name_ordered_pred_style_info_0 },
  { check_hlds__style_checks__check_hlds__style_checks__du_ptag_ordered_pred_style_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_pred_style_info_0,

};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_0 = {
  (MR_String) "proc_contiguity_makes_sense",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__style_checks__check_hlds__style_checks__enum_functor_desc_proc_contiguity_0_1 = {
  (MR_String) "proc_contiguity_does_not_makes_sense",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_proc_contiguity_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__style_checks____Unify____proc_contiguity_0_0_10001)),
  ((MR_Box) (check_hlds__style_checks____Compare____proc_contiguity_0_0_10001)),
  (MR_String) "check_hlds.style_checks",
  (MR_String) "proc_contiguity",
  { check_hlds__style_checks__check_hlds__style_checks__enum_name_ordered_proc_contiguity_0 },
  { check_hlds__style_checks__check_hlds__style_checks__enum_ordinal_ordered_proc_contiguity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__style_checks__check_hlds__style_checks__functor_number_map_proc_contiguity_0,

};

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0(
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
check_hlds__style_checks____Unify____proc_contiguity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0(
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
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__style_checks_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
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

void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer Var_12 = (MR_Integer) (Var_11);
      MR_Integer Var_13 = (MR_Integer) (ArgY1_7);

      succeeded = (Var_12 < Var_13);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_12 > Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0(
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
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0(
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

static void MR_CALL 
check_hlds__style_checks__desc_pred_item_numbers_2_p_0(
  MR_Word PredItemNumbers_3,
  MR_String * PredDescStr_4)
{
  MR_Word PredInfo_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredItemNumbers_3, (MR_Integer) 1))));
  MR_Word PredPieces_9;

  PredPieces_9 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_6);
  *PredDescStr_4 = parse_tree__error_util__error_pieces_to_string_1_f_0(PredPieces_9);
}

static void MR_CALL 
check_hlds__style_checks__compare_defn_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6)
{
  MR_bool succeeded;
  MR_Integer ItemNumberA_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 3))));
  MR_Integer ItemNumberB_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 3))));

  succeeded = (ItemNumberA_10 < ItemNumberB_14);
  if (succeeded)
    *R_6 = (MR_Integer) 1;
  else
  {
    succeeded = (ItemNumberA_10 > ItemNumberB_14);
    if (succeeded)
      *R_6 = (MR_Integer) 2;
    else
      *R_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
check_hlds__style_checks__compare_decl_item_number_3_p_0(
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * R_6)
{
  MR_bool succeeded;
  MR_Integer ItemNumberA_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), A_4, (MR_Integer) 2))));
  MR_Integer ItemNumberB_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), B_5, (MR_Integer) 2))));

  succeeded = (ItemNumberA_9 < ItemNumberB_13);
  if (succeeded)
    *R_6 = (MR_Integer) 1;
  else
  {
    succeeded = (ItemNumberA_9 > ItemNumberB_13);
    if (succeeded)
      *R_6 = (MR_Integer) 2;
    else
      *R_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
check_hlds__style_checks__gather_proc_item_numbers_5_p_0(
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_ProcINCs_0_13,
  MR_Word * STATE_VARIABLE_ProcINCs_14,
  MR_Word STATE_VARIABLE_MakesSense_0_15,
  MR_Word * STATE_VARIABLE_MakesSense_16)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__proc_info_is_valid_mode_1_p_0(ProcInfo_6);
  if (succeeded)
  {
    MR_Word ItemNumber_9;

    hlds__hlds_pred__proc_info_get_item_number_2_p_0(ProcInfo_6, &ItemNumber_9);
    if ((ItemNumber_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MakesSense_16 = (MR_Integer) 1;
      *STATE_VARIABLE_ProcINCs_14 = STATE_VARIABLE_ProcINCs_0_13;
    }
    else
    {
      MR_Integer SeqNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ItemNumber_9, (MR_Integer) 0))));
      MR_Word Context_11;
      MR_Word ProcINC_12;

      hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_6, &Context_11);
      {
        ProcINC_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcINC_12, 0) = ((MR_Box) (SeqNum_10));
        MR_hl_field(MR_mktag(0), ProcINC_12, 1) = ((MR_Box) (Context_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ProcINCs_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcINC_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ProcINCs_0_13));
      }
      *STATE_VARIABLE_MakesSense_16 = STATE_VARIABLE_MakesSense_0_15;
    }
  }
  else
  {
    *STATE_VARIABLE_MakesSense_16 = (MR_Integer) 1;
    *STATE_VARIABLE_ProcINCs_14 = STATE_VARIABLE_ProcINCs_0_13;
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ProcINCs_14;
  MR_Word conv0_STATE_VARIABLE_MakesSense_16;

  check_hlds__style_checks__gather_proc_item_numbers_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ProcINCs_14, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_MakesSense_16);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ProcINCs_14));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_MakesSense_16));
}

static void MR_CALL 
check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word WarnPredDeclDefnOrder_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_StyleInfo_0_41,
  MR_Word * STATE_VARIABLE_StyleInfo_42)
{
  MR_bool succeeded;
  MR_Word PredInfo_10;
  MR_Word MaybeDeclInfo_11;
  MR_Word DeclSection_13;
  MR_Integer PredDeclItemNumber_16;
  MR_Word DeclInfo_12;
  MR_Word MaybePredDeclItemNumber_15;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_8, &PredInfo_10);
  hlds__hlds_pred__pred_info_get_cur_user_decl_info_2_p_0(PredInfo_10, &MaybeDeclInfo_11);
  succeeded = (MaybeDeclInfo_11 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    DeclInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclInfo_11, (MR_Integer) 0))));
    DeclSection_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), DeclInfo_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MaybePredDeclItemNumber_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DeclInfo_12, (MR_Integer) 1))));
    succeeded = (MaybePredDeclItemNumber_15 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      PredDeclItemNumber_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybePredDeclItemNumber_15, (MR_Integer) 0))));
  }
  if (succeeded)
  {
    MR_Word ProcTable_17;
    MR_Word UnsortedProcINCs_18;
    MR_Word MakesSense_19;
    MR_Word ProcINCs_20;
    MR_Word STATE_VARIABLE_StyleInfo_47_47;
    MR_Box conv3_UnsortedProcINCs_18;
    MR_Box conv2_MakesSense_19;
    MR_Word HeadProcINC_21;
    MR_Word TailProcINCs_22;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_10, &ProcTable_17);
    mercury__map__foldl2_values_6_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&check_hlds__style_checks_scalar_common_1[0]), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[7]), ProcTable_17, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_UnsortedProcINCs_18, ((MR_Box) ((MR_Integer) 0)), &conv2_MakesSense_19);
    UnsortedProcINCs_18 = ((MR_Word) (conv3_UnsortedProcINCs_18));
    MakesSense_19 = ((MR_Word) (conv2_MakesSense_19));
    mercury__list__sort_2_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_inc_0), UnsortedProcINCs_18, &ProcINCs_20);
    succeeded = (MakesSense_19 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (ProcINCs_20 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        HeadProcINC_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcINCs_20, (MR_Integer) 0))));
        TailProcINCs_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProcINCs_20, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word PredDeclContext_23;
      MR_Word PredINC_24;

      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_10, &PredDeclContext_23);
      {
        PredINC_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PredINC_24, 0) = ((MR_Box) (PredDeclItemNumber_16));
        MR_hl_field(MR_mktag(0), PredINC_24, 1) = ((MR_Box) (PredDeclContext_23));
      }
      check_hlds__style_checks__report_any_inc_gaps_7_p_0(PredInfo_10, PredINC_24, HeadProcINC_21, TailProcINCs_22, (MR_Integer) 0, STATE_VARIABLE_StyleInfo_0_41, &STATE_VARIABLE_StyleInfo_47_47);
    }
    else
      STATE_VARIABLE_StyleInfo_47_47 = STATE_VARIABLE_StyleInfo_0_41;
    if ((WarnPredDeclDefnOrder_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StyleInfo_42 = STATE_VARIABLE_StyleInfo_47_47;
    else
    {
      MR_Word DefnKind_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), WarnPredDeclDefnOrder_7, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ClausesInfo_26;
      MR_Word ClauseItemNumbers_28;
      MR_Word Regions_29;
      MR_Word _ClausesRep_27;

      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(PredInfo_10, &ClausesInfo_26);
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(ClausesInfo_26, &_ClausesRep_27, &ClauseItemNumbers_28);
      hlds__hlds_clauses__clause_item_number_regions_3_p_0(ClauseItemNumbers_28, DefnKind_25, &Regions_29);
      if ((Regions_29 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_StyleInfo_42 = STATE_VARIABLE_StyleInfo_47_47;
      else
      {
        MR_Word FirstRegion_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Regions_29, (MR_Integer) 0))));
        MR_Integer FirstClauseItemNumber_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstRegion_30, (MR_Integer) 0))));
        MR_Word PredItemNumbers_36;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;

        {
          PredItemNumbers_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PredItemNumbers_36, 0) = ((MR_Box) (PredId_8));
          MR_hl_field(MR_mktag(0), PredItemNumbers_36, 1) = ((MR_Box) (PredInfo_10));
          MR_hl_field(MR_mktag(0), PredItemNumbers_36, 2) = ((MR_Box) (PredDeclItemNumber_16));
          MR_hl_field(MR_mktag(0), PredItemNumbers_36, 3) = ((MR_Box) (FirstClauseItemNumber_32));
        }
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_47_47, (MR_Integer) 0))));
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_47_47, (MR_Integer) 1))));
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_47_47, (MR_Integer) 2))));
        switch (DeclSection_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word NonExportedPINs_40;

              {
                NonExportedPINs_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), NonExportedPINs_40, 0) = ((MR_Box) (PredItemNumbers_36));
                MR_hl_field(MR_mktag(1), NonExportedPINs_40, 1) = ((MR_Box) (Var_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_StyleInfo_42 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_70));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NonExportedPINs_40));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_68));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word ExportedPINs_38;

              {
                ExportedPINs_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ExportedPINs_38, 0) = ((MR_Box) (PredItemNumbers_36));
                MR_hl_field(MR_mktag(1), ExportedPINs_38, 1) = ((MR_Box) (Var_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_StyleInfo_42 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ExportedPINs_38));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_68));
              }
            }
            break;
        }
      }
    }
  }
  else
    *STATE_VARIABLE_StyleInfo_42 = STATE_VARIABLE_StyleInfo_0_41;
}

static void MR_CALL 
check_hlds__style_checks__report_any_inc_gaps_7_p_0(
  MR_Word PredInfo_8,
  MR_Word FirstINC_9,
  MR_Word SecondINC_10,
  MR_Word LaterINCs_11,
  MR_Integer FirstProcNum_12,
  MR_Word STATE_VARIABLE_StyleInfo_0_30,
  MR_Word * STATE_VARIABLE_StyleInfo_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer FirstItemNumber_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), FirstINC_9, (MR_Integer) 0))));
    MR_Word FirstContext_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstINC_9, (MR_Integer) 1))));
    MR_Integer SecondItemNumber_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SecondINC_10, (MR_Integer) 0))));
    MR_Word SecondContext_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondINC_10, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_StyleInfo_96_96;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) SecondItemNumber_16 - (MR_Unsigned) FirstItemNumber_14);

      succeeded = (Var_32 == (MR_Integer) 1);
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
      STATE_VARIABLE_StyleInfo_96_96 = STATE_VARIABLE_StyleInfo_0_30;
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
      MR_Word Specs0_26;
      MR_Word Specs_27;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_100;
      MR_Word Var_101;

      PredPieces_18 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0((MR_Integer) 1, PredInfo_8);
      PredOrFunc_19 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
      PredOrFuncStr_20 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_19);
      succeeded = (FirstProcNum_12 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_34;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;

        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (PredOrFuncStr_20));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[6])));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (PredPieces_18));
        }
        {
          Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[5])));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
        }
        FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_34, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[11])));
        SecondPieces_22 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[15]));
      }
      else
      {
        MR_Word Var_57;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_65;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Integer Var_70;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Integer Var_82;

        {
          Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (FirstProcNum_12));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[16])));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (PredPieces_18));
        }
        {
          Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[5])));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
        }
        Var_70 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) 1);
        {
          Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (Var_70));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[19])));
        }
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[17])));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
        }
        FirstPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_57, Var_65);
        Var_82 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) 1);
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[22])));
        }
        {
          SecondPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), SecondPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[20])));
          MR_hl_field(MR_mktag(1), SecondPieces_22, 1) = ((MR_Box) (Var_80));
        }
      }
      {
        FirstMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstMsg_23, 0) = ((MR_Box) (FirstContext_15));
        MR_hl_field(MR_mktag(0), FirstMsg_23, 1) = ((MR_Box) (FirstPieces_21));
      }
      {
        SecondMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SecondMsg_24, 0) = ((MR_Box) (SecondContext_17));
        MR_hl_field(MR_mktag(0), SecondMsg_24, 1) = ((MR_Box) (SecondPieces_22));
      }
      {
        Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (SecondMsg_24));
        MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (FirstMsg_23));
        MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.report_any_inc_gaps\'/7"));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 80U));
        MR_hl_field(MR_mktag(0), Spec_25, 3) = ((MR_Box) (Var_93));
      }
      Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_0_30, (MR_Integer) 0))));
      Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_0_30, (MR_Integer) 1))));
      Specs0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_0_30, (MR_Integer) 2))));
      {
        Specs_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Specs_27, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), Specs_27, 1) = ((MR_Box) (Specs0_26));
      }
      {
        STATE_VARIABLE_StyleInfo_96_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_96_96, 0) = ((MR_Box) (Var_100));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_96_96, 1) = ((MR_Box) (Var_101));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_StyleInfo_96_96, 2) = ((MR_Box) (Specs_27));
      }
    }
    if ((LaterINCs_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_StyleInfo_31 = STATE_VARIABLE_StyleInfo_96_96;
    else
    {
      MR_Word ThirdINC_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterINCs_11, (MR_Integer) 0))));
      MR_Word LaterLaterINCs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterINCs_11, (MR_Integer) 1))));
      MR_Integer Var_97 = (MR_Integer) ((MR_Unsigned) FirstProcNum_12 + (MR_Unsigned) 1);
      MR_Word next_value_of_FirstINC_9 = SecondINC_10;
      MR_Word next_value_of_SecondINC_10 = ThirdINC_28;
      MR_Word next_value_of_LaterINCs_11 = LaterLaterINCs_29;
      MR_Integer next_value_of_FirstProcNum_12 = Var_97;
      MR_Word next_value_of_STATE_VARIABLE_StyleInfo_0_30 = STATE_VARIABLE_StyleInfo_96_96;

      // direct tailcall eliminated
      ;
      FirstINC_9 = next_value_of_FirstINC_9;
      SecondINC_10 = next_value_of_SecondINC_10;
      LaterINCs_11 = next_value_of_LaterINCs_11;
      FirstProcNum_12 = next_value_of_FirstProcNum_12;
      STATE_VARIABLE_StyleInfo_0_30 = next_value_of_STATE_VARIABLE_StyleInfo_0_30;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_style_warnings_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_StyleInfo_42;

  check_hlds__style_checks__detect_non_contiguous_pred_decls_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_StyleInfo_42);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_StyleInfo_42));
}

void MR_CALL 
check_hlds__style_checks__generate_style_warnings_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word WarnNonContigPreds_6,
  MR_Word WarnPredDeclDefnOrder_7,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word ValidPredIds_9;
  MR_Word StyleInfo_11;
  MR_Word ExportedPreds_12;
  MR_Word NonExportedPreds_13;
  MR_Word ModeDeclItemNumberSpecs_14;
  MR_Word Var_21;
  MR_Word STATE_VARIABLE_Specs_22_22;
  MR_Box conv1_StyleInfo_11;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_5, &ValidPredIds_9);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&check_hlds__style_checks_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (check_hlds__style_checks__generate_style_warnings_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(MR_mktag(0), Var_21, 4) = ((MR_Box) (WarnPredDeclDefnOrder_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0), Var_21, ValidPredIds_9, ((MR_Box) (&check_hlds__style_checks_scalar_common_2[0])), &conv1_StyleInfo_11);
  StyleInfo_11 = ((MR_Word) (conv1_StyleInfo_11));
  ExportedPreds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_11, (MR_Integer) 0))));
  NonExportedPreds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_11, (MR_Integer) 1))));
  ModeDeclItemNumberSpecs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StyleInfo_11, (MR_Integer) 2))));
  switch (WarnNonContigPreds_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_Specs_22_22 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_Specs_22_22 = ModeDeclItemNumberSpecs_14;
      break;
  }
  if ((WarnPredDeclDefnOrder_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_17 = ModeDeclItemNumberSpecs_14;
  else
  {
    MR_Word ModuleContext_16;
    MR_Word STATE_VARIABLE_Specs_26_26;

    hlds__hlds_module__module_info_get_name_context_2_p_0(ModuleInfo_5, &ModuleContext_16);
    check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0(ModuleContext_16, (MR_String) "exported", ExportedPreds_12, STATE_VARIABLE_Specs_22_22, &STATE_VARIABLE_Specs_26_26);
    check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0(ModuleContext_16, (MR_String) "nonexported", NonExportedPreds_13, STATE_VARIABLE_Specs_26_26, STATE_VARIABLE_Specs_17);
  }
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  parse_tree__error_util__change_hunk_to_pieces_2_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv3_PredDescStr_4;

  check_hlds__style_checks__desc_pred_item_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv3_PredDescStr_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_PredDescStr_4));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv2_PredDescStr_4;

  check_hlds__style_checks__desc_pred_item_numbers_2_p_0(((MR_Word) (wrapper_arg_1)), &conv2_PredDescStr_4);
  *wrapper_arg_2 = ((MR_Box) (conv2_PredDescStr_4));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_R_6;

  check_hlds__style_checks__compare_defn_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_R_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_R_6));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_R_6;

  check_hlds__style_checks__compare_decl_item_number_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_R_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_R_6));
}

static void MR_CALL 
check_hlds__style_checks__generate_inconsistent_pred_order_warnings_5_p_0(
  MR_Word ModuleContext_6,
  MR_String ExportedOrNotStr_7,
  MR_Word PredItemNumbers_8,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word DeclOrder_10;
  MR_Word DefnOrder_11;

  mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[2]), PredItemNumbers_8, &DeclOrder_10);
  mercury__list__sort_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[3]), PredItemNumbers_8, &DefnOrder_11);
  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[3]), ((MR_Box) (DeclOrder_10)), ((MR_Box) (DefnOrder_11)));
  if (succeeded)
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  else
  {
    MR_Word DeclStrs_12;
    MR_Word DefnStrs_13;
    MR_Word EditSeq_18;
    MR_Word DiffSeq_19;
    MR_Word ChangeHunks_20;
    MR_Word WarnSpec_21;
    MR_Word HeadPieces_46;
    MR_Word ChangeHunkPieceLists_47;
    MR_Word ChangeHunkPieces_48;
    MR_Word Pieces_49;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;

    mercury__list__map_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[4]), DeclOrder_10, &DeclStrs_12);
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[5]), DefnOrder_11, &DefnStrs_13);
    mercury__edit_seq__find_shortest_edit_seq_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__style_checks_scalar_common_2[1]), DeclStrs_12, DefnStrs_13, &EditSeq_18);
    mercury__edit_seq__find_diff_seq_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DeclStrs_12, EditSeq_18, &DiffSeq_19);
    mercury__edit_seq__find_change_hunks_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Integer) 3, DiffSeq_19, &ChangeHunks_20);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (ExportedOrNotStr_7));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__style_checks_scalar_common_1[34])));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
    }
    {
      HeadPieces_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadPieces_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__style_checks_scalar_common_1[23])));
      MR_hl_field(MR_mktag(1), HeadPieces_46, 1) = ((MR_Box) (Var_52));
    }
    mercury__list__map_3_p_0((MR_Word) (&check_hlds__style_checks_scalar_common_1[1]), (MR_Word) (&check_hlds__style_checks_scalar_common_1[2]), (MR_Word) (&check_hlds__style_checks_scalar_common_2[6]), ChangeHunks_20, &ChangeHunkPieceLists_47);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ChangeHunkPieceLists_47, &ChangeHunkPieces_48);
    Pieces_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), HeadPieces_46, ChangeHunkPieces_48);
    {
      WarnSpec_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), WarnSpec_21, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.style_checks.chunks_to_spec\'/4"));
      MR_hl_field(MR_mktag(1), WarnSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), WarnSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 80U));
      MR_hl_field(MR_mktag(1), WarnSpec_21, 3) = ((MR_Box) (ModuleContext_6));
      MR_hl_field(MR_mktag(1), WarnSpec_21, 4) = ((MR_Box) (Pieces_49));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (WarnSpec_21));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____inc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____inc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____inc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____inc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____maybe_warn_non_contiguous_pred_decls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____maybe_warn_non_contiguous_pred_decls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____maybe_warn_pred_decl_vs_defn_order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____maybe_warn_pred_decl_vs_defn_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_item_numbers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____pred_item_numbers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_item_numbers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____pred_item_numbers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____pred_style_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____pred_style_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____pred_style_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____pred_style_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__style_checks____Unify____proc_contiguity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__style_checks____Unify____proc_contiguity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__style_checks____Compare____proc_contiguity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__style_checks____Compare____proc_contiguity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_non_contiguous_pred_decls_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_maybe_warn_pred_decl_vs_defn_order_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_item_numbers_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_pred_style_info_0);
	MR_register_type_ctor_info(&check_hlds__style_checks__check_hlds__style_checks__type_ctor_info_proc_contiguity_0);
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
