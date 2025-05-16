/*
** Automatically generated from `typecheck_error_wrong_type.m'
** by the Mercury compiler,
** version rotd-2025-05-16
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


// :- module check_hlds.typecheck_error_wrong_type.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_error_wrong_type__init
ENDINIT
*/

#include "check_hlds.typecheck_error_wrong_type.mih"


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
#include "check_hlds.type_assign.mih"
#include "check_hlds.typecheck_error_builtin.mih"
#include "check_hlds.typecheck_error_diff.mih"
#include "check_hlds.typecheck_error_type_assign.mih"
#include "check_hlds.typecheck_error_util.mih"
#include "check_hlds.typecheck_info.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_wrong_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_wrong_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_0;

static const MR_EnumFunctorDesc check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_1;

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_ordinal_ordered_maybe_print_expectation_source_0[2];

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_name_ordered_maybe_print_expectation_source_0[2];

static const MR_Integer check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__functor_number_map_maybe_print_expectation_source_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_wrong_type__maybe__ti_maybe_1check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0;

static const MR_PseudoTypeInfo check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__field_types_spec_and_maybe_actual_expected_0_0[2];

static const MR_DuFunctorDesc check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_functor_desc_spec_and_maybe_actual_expected_0_0;

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_stag_ordered_spec_and_maybe_actual_expected_0_0[1];

static const MR_DuPtagLayout check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_ptag_ordered_spec_and_maybe_actual_expected_0[1];

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_name_ordered_spec_and_maybe_actual_expected_0[1];

static const MR_Integer check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__functor_number_map_spec_and_maybe_actual_expected_0[1];

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type__IntroducedFrom__pred__should_we_print_expectation_sources__292__1_1_p_0(
  MR_Word LambdaHeadVar__1_9);

static MR_Word MR_CALL 
check_hlds__typecheck_error_wrong_type__IntroducedFrom__func__print_expected_type_or_types__261__1_1_f_0(
  MR_Word LambdaHeadVar__1_34);

static MR_Word MR_CALL 
check_hlds__typecheck_error_wrong_type__IntroducedFrom__func__print_actual_type_or_types__230__1_1_f_0(
  MR_Word LambdaHeadVar__1_29);

static void MR_CALL 
check_hlds__typecheck_error_wrong_type____Compare____maybe_print_expectation_source_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type____Unify____maybe_print_expectation_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_arg_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0(
  MR_Word ClauseContext_7,
  MR_Word Var_8,
  MR_Word ActualExpectedList_9,
  MR_Word * MaybeActualExpected_10,
  MR_Word * ActualExpectedPieces_11,
  MR_Word * DiffPieces_12);

static void MR_CALL 
check_hlds__typecheck_error_wrong_type__acc_expected_type_source_pieces_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
check_hlds__typecheck_error_wrong_type__is_actual_or_expected_single_type_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeSingleActual_0_2,
  MR_Word * STATE_VARIABLE_MaybeSingleActual_3,
  MR_Word STATE_VARIABLE_MaybeSingleExpected_0_4,
  MR_Word * STATE_VARIABLE_MaybeSingleExpected_5);

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type____Unify____maybe_print_expectation_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_wrong_type____Compare____maybe_print_expectation_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type____Unify____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__typecheck_error_wrong_type____Compare____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_1[24][2];

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_2[4][3];

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_4[1][4];

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_6[1][7];




static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_1[24][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type error:"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has one of the following inferred types:"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has type"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[8])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was one of"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[8])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "expected type was"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[8])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the type expected by"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[1])),
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type_scalar_common_3[0])),
    ((MR_Box) (check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type_scalar_common_4[0])),
    ((MR_Box) (check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type_scalar_common_3[0])),
    ((MR_Box) (check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)),
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_4[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_error_wrong_type_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__error_type_util__parse_tree__error_type_util__type_ctor_info_maybe_add_quotes_0)),
    ((MR_Box) (&check_hlds__typecheck_error_wrong_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0)),
    ((MR_Box) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_wrong_type__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_error_wrong_type__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_0 = {
  (MR_String) "do_not_print_expectation_source",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_1 = {
  (MR_String) "print_expectation_source",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_ordinal_ordered_maybe_print_expectation_source_0[2] = {
  &check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_0,
  &check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_name_ordered_maybe_print_expectation_source_0[2] = {
  &check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_0,
  &check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_functor_desc_maybe_print_expectation_source_0_1
};

static const MR_Integer check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__functor_number_map_maybe_print_expectation_source_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__type_ctor_info_maybe_print_expectation_source_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck_error_wrong_type____Unify____maybe_print_expectation_source_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_wrong_type____Compare____maybe_print_expectation_source_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_wrong_type",
  (MR_String) "maybe_print_expectation_source",
  { check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_name_ordered_maybe_print_expectation_source_0 },
  { check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__enum_ordinal_ordered_maybe_print_expectation_source_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__functor_number_map_maybe_print_expectation_source_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck_error_wrong_type__maybe__ti_maybe_1check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0) }
};

static const MR_PseudoTypeInfo check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__field_types_spec_and_maybe_actual_expected_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&check_hlds__typecheck_error_wrong_type__maybe__ti_maybe_1check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0)
};

static const MR_DuFunctorDesc check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_functor_desc_spec_and_maybe_actual_expected_0_0 = {
  (MR_String) "spec_and_maybe_actual_expected",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__field_types_spec_and_maybe_actual_expected_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_stag_ordered_spec_and_maybe_actual_expected_0_0[1] = { &check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_functor_desc_spec_and_maybe_actual_expected_0_0 };

static const MR_DuPtagLayout check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_ptag_ordered_spec_and_maybe_actual_expected_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_stag_ordered_spec_and_maybe_actual_expected_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_name_ordered_spec_and_maybe_actual_expected_0[1] = { &check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_functor_desc_spec_and_maybe_actual_expected_0_0 };

static const MR_Integer check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__functor_number_map_spec_and_maybe_actual_expected_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__type_ctor_info_spec_and_maybe_actual_expected_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck_error_wrong_type____Unify____spec_and_maybe_actual_expected_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck_error_wrong_type____Compare____spec_and_maybe_actual_expected_0_0_10001)),
  (MR_String) "check_hlds.typecheck_error_wrong_type",
  (MR_String) "spec_and_maybe_actual_expected",
  { check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_name_ordered_spec_and_maybe_actual_expected_0 },
  { check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__du_ptag_ordered_spec_and_maybe_actual_expected_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__functor_number_map_spec_and_maybe_actual_expected_0,

};

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type__IntroducedFrom__pred__should_we_print_expectation_sources__292__1_1_p_0(
  MR_Word LambdaHeadVar__1_9)
{
  MR_bool succeeded;
  MR_Word MaybeSource_7 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_9, 5))));
  MR_Word Source_8;

  succeeded = (MaybeSource_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Source_8 = ((MR_Word) ((MR_hl_field(1, MaybeSource_7, 0))));
    succeeded = (Source_8 != (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_wrong_type__IntroducedFrom__func__print_expected_type_or_types__261__1_1_f_0(
  MR_Word LambdaHeadVar__1_34)
{
  MR_Word LambdaHeadVar__2_35 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_34, 2))));

  return LambdaHeadVar__2_35;
}

static MR_Word MR_CALL 
check_hlds__typecheck_error_wrong_type__IntroducedFrom__func__print_actual_type_or_types__230__1_1_f_0(
  MR_Word LambdaHeadVar__1_29)
{
  MR_Word LambdaHeadVar__2_30 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_29, 0))));

  return LambdaHeadVar__2_30;
}

void MR_CALL 
check_hlds__typecheck_error_wrong_type____Compare____spec_and_maybe_actual_expected_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__error_spec____Compare____error_spec_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type____Unify____spec_and_maybe_actual_expected_0_0(
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
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = parse_tree__error_spec____Unify____error_spec_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_wrong_type____Compare____maybe_print_expectation_source_0_0(
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
check_hlds__typecheck_error_wrong_type____Unify____maybe_print_expectation_source_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_arg_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = check_hlds__typecheck_error_type_assign__arg_type_stuff_to_actual_expected_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_arg_6_f_0(
  MR_Word Info_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Integer ArgNum_11,
  MR_Word Var_12,
  MR_Word ArgTypeAssignSet_13)
{
  MR_Word Spec_14;
  MR_Word ClauseContext_15;
  MR_Word InClauseForPieces_16;
  MR_Word GoalContextPieces_17;
  MR_Word InstVarSet_18;
  MR_Word ArgTypeStuffList_19;
  MR_Word ActualExpectedList0_20;
  MR_Word ActualExpectedList_21;
  MR_Word ActualExpectedPieces_23;
  MR_Word DiffPieces_24;
  MR_Word VarSet_25;
  MR_Word VerboseComponent_26;
  MR_Word Msg_27;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word _MaybeActualExpected_22;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  GoalContextPieces_17 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_15, GoalContext_9);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_18);
  check_hlds__typecheck_error_type_assign__get_arg_type_stuffs_4_p_0(ArgNum_11, Var_12, ArgTypeAssignSet_13, &ArgTypeStuffList_19);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&check_hlds__typecheck_error_wrong_type_scalar_common_6[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_arg_6_f_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (InstVarSet_18));
  }
  ActualExpectedList0_20 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_arg_type_stuff_0), (MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_28, ArgTypeStuffList_19);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedList0_20, &ActualExpectedList_21);
  check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0(ClauseContext_15, Var_12, ActualExpectedList_21, &_MaybeActualExpected_22, &ActualExpectedPieces_23, &DiffPieces_24);
  VarSet_25 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, 5))));
  check_hlds__typecheck_error_type_assign__arg_type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_25, ArgTypeAssignSet_13, &VerboseComponent_26);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (InClauseForPieces_16));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (GoalContextPieces_17));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (ActualExpectedPieces_23));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (DiffPieces_24));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (VerboseComponent_26));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_32));
  }
  {
    Msg_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_27, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Msg_27));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_wrong_type.report_error_var_has_wrong_type_arg\'/6"));
    MR_hl_field(2, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_14, 3) = ((MR_Box) (Var_43));
  }
  return Spec_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  conv0_HeadVar__5_5 = check_hlds__typecheck_error_type_assign__type_stuff_to_actual_expected_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_6_f_0(
  MR_Word Info_8,
  MR_Word GoalContext_9,
  MR_Word Context_10,
  MR_Word Var_11,
  MR_Word ExpectedType_12,
  MR_Word TypeAssignSet_13)
{
  MR_bool succeeded;
  MR_Word SpecAndMaybeActualExpected_14;
  MR_Word ClauseContext_15;
  MR_Word InClauseForPieces_16;
  MR_Word GoalContextPieces_17;
  MR_Word InstVarSet_18;
  MR_Word ActualExpectedList0_19;
  MR_Word ActualExpectedList_20;
  MR_Word MaybeActualExpected_21;
  MR_Word ActualExpectedPieces_22;
  MR_Word DiffPieces_23;
  MR_Word SetOfNoSuffixIntegerVars_24;
  MR_Word NoSuffixIntegerPieces_25;
  MR_Word VarSet_26;
  MR_Word VerboseComponent_27;
  MR_Word Msg_28;
  MR_Word Spec_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_47;

  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(Info_8, &ClauseContext_15);
  InClauseForPieces_16 = check_hlds__typecheck_error_util__in_clause_for_pieces_1_f_0(ClauseContext_15);
  GoalContextPieces_17 = check_hlds__typecheck_error_util__goal_context_to_pieces_2_f_0(ClauseContext_15, GoalContext_9);
  check_hlds__typecheck_error_util__get_inst_varset_2_p_0(ClauseContext_15, &InstVarSet_18);
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&check_hlds__typecheck_error_wrong_type_scalar_common_5[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (check_hlds__typecheck_error_wrong_type__report_error_var_has_wrong_type_6_f_0_1));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (InstVarSet_18));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (ExpectedType_12));
  }
  check_hlds__typecheck_error_type_assign__get_all_transformed_type_stuffs_4_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), Var_30, TypeAssignSet_13, Var_11, &ActualExpectedList0_19);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), ActualExpectedList0_19, &ActualExpectedList_20);
  check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0(ClauseContext_15, Var_11, ActualExpectedList_20, &MaybeActualExpected_21, &ActualExpectedPieces_22, &DiffPieces_23);
  check_hlds__typecheck_info__typecheck_info_get_nosuffix_integer_vars_2_p_0(Info_8, &SetOfNoSuffixIntegerVars_24);
  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[0]), SetOfNoSuffixIntegerVars_24, ((MR_Box) (Var_11)));
  if (succeeded)
    succeeded = check_hlds__typecheck_error_builtin__type_needs_int_constant_suffix_1_p_0(ExpectedType_12);
  if (succeeded)
    NoSuffixIntegerPieces_25 = check_hlds__typecheck_error_builtin__nosuffix_integer_pieces_0_f_0();
  else
    NoSuffixIntegerPieces_25 = (MR_Word) ((MR_Unsigned) 0U);
  VarSet_26 = ((MR_Word) ((MR_hl_field(0, ClauseContext_15, 5))));
  check_hlds__typecheck_error_type_assign__type_assign_set_msg_to_verbose_component_4_p_0(Info_8, VarSet_26, TypeAssignSet_13, &VerboseComponent_27);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (InClauseForPieces_16));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (GoalContextPieces_17));
  }
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (ActualExpectedPieces_22));
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (DiffPieces_23));
  }
  {
    Var_41 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_41, 0) = ((MR_Box) (NoSuffixIntegerPieces_25));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (VerboseComponent_27));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
  }
  {
    Msg_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_28, 0) = ((MR_Box) (Context_10));
    MR_hl_field(2, Msg_28, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Msg_28));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_29, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_error_wrong_type.report_error_var_has_wrong_type\'/6"));
    MR_hl_field(2, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(2, Spec_29, 3) = ((MR_Box) (Var_47));
  }
  {
    SpecAndMaybeActualExpected_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 0) = ((MR_Box) (Spec_29));
    MR_hl_field(0, SpecAndMaybeActualExpected_14, 1) = ((MR_Box) (MaybeActualExpected_21));
  }
  return SpecAndMaybeActualExpected_14;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_35;

  conv1_LambdaHeadVar__2_35 = check_hlds__typecheck_error_wrong_type__IntroducedFrom__func__print_expected_type_or_types__261__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_35));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_error_wrong_type__IntroducedFrom__pred__should_we_print_expectation_sources__292__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_30;

  conv0_LambdaHeadVar__2_30 = check_hlds__typecheck_error_wrong_type__IntroducedFrom__func__print_actual_type_or_types__230__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_30));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_error_wrong_type__report_actual_expected_types_6_p_0(
  MR_Word ClauseContext_7,
  MR_Word Var_8,
  MR_Word ActualExpectedList_9,
  MR_Word * MaybeActualExpected_10,
  MR_Word * ActualExpectedPieces_11,
  MR_Word * DiffPieces_12)
{
  MR_bool succeeded;
  MR_Word VarSet_13 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, 5))));
  MR_Word TypeErrorPieces_14;
  MR_Word MaybeSingleActual_15;
  MR_Word MaybeSingleExpected_16;
  MR_Word ActualPartPieces_17;
  MR_Word ExpectedPartPieces_18;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_33;
  MR_Word ActualExpected_19;
  MR_Word Var_34;

  Var_31 = check_hlds__typecheck_error_util__argument_name_to_pieces_lc_3_f_0(VarSet_13, (MR_Integer) 0, Var_8);
  Var_30 = parse_tree__error_spec__color_as_subject_1_f_0(Var_31);
  TypeErrorPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[4])), Var_30);
  if ((ActualExpectedList_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MaybeSingleActual_15 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeSingleExpected_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word AE_41 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, 0))));
    MR_Word AEs_42 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, 1))));
    MR_Word ActualPieces_45 = ((MR_Word) ((MR_hl_field(0, AE_41, 0))));
    MR_Word ExpectedPieces_47 = ((MR_Word) ((MR_hl_field(0, AE_41, 2))));
    MR_Word Var_51;
    MR_Word Var_52;

    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (ActualPieces_45));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (ExpectedPieces_47));
    }
    check_hlds__typecheck_error_wrong_type__is_actual_or_expected_single_type_loop_5_p_0(AEs_42, Var_51, &MaybeSingleActual_15, Var_52, &MaybeSingleExpected_16);
  }
  if ((MaybeSingleActual_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ActualPieceLists_56;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word ActualColonPieces0_67;
    MR_Word ActualColonPieces_68;

    ActualPieceLists_56 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_2[1]), ActualExpectedList_9);
    Var_62 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(ActualPieceLists_56);
    ActualColonPieces0_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[6])));
    ActualColonPieces_68 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualColonPieces0_67);
    Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualColonPieces_68, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[12])));
    ActualPartPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[10])), Var_65);
  }
  else
  {
    MR_Word SingleActualPieces_53 = ((MR_Word) ((MR_hl_field(1, MaybeSingleActual_15, 0))));
    MR_Word ActualColonPieces0_54;
    MR_Word ActualColonPieces_55;
    MR_Word Var_59;

    ActualColonPieces0_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SingleActualPieces_53, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[6])));
    ActualColonPieces_55 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualColonPieces0_54);
    Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualColonPieces_55, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[12])));
    ActualPartPieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[14])), Var_59);
  }
  if ((MaybeSingleExpected_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = mercury__list__all_true_2_p_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_2[2]), ActualExpectedList_9);
    if (succeeded)
    {
      MR_Word ModuleInfo_78 = ((MR_Word) ((MR_hl_field(0, ClauseContext_7, 0))));
      MR_Word Var_79;

      check_hlds__typecheck_error_wrong_type__acc_expected_type_source_pieces_4_p_0(ModuleInfo_78, ActualExpectedList_9, &Var_79, &ExpectedPartPieces_18);
    }
    else
    {
      MR_Word ExpectedPieceLists_77;
      MR_Word Var_85;
      MR_Word Var_88;
      MR_Word ExpectedDotPieces0_90;
      MR_Word ExpectedDotPieces_91;

      ExpectedPieceLists_77 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_error_type_assign__check_hlds__typecheck_error_type_assign__type_ctor_info_actual_expected_types_0), (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_2[3]), ActualExpectedList_9);
      Var_85 = parse_tree__error_spec__pieces_list_to_line_pieces_1_f_0(ExpectedPieceLists_77);
      ExpectedDotPieces0_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[16])));
      ExpectedDotPieces_91 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces0_90);
      Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedDotPieces_91, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[12])));
      ExpectedPartPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[18])), Var_88);
    }
  }
  else
  {
    MR_Word SingleExpectedPieces_73 = ((MR_Word) ((MR_hl_field(1, MaybeSingleExpected_16, 0))));
    MR_Word ExpectedDotPieces0_74;
    MR_Word ExpectedDotPieces_75;
    MR_Word Var_82;

    ExpectedDotPieces0_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SingleExpectedPieces_73, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[16])));
    ExpectedDotPieces_75 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedDotPieces0_74);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedDotPieces_75, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[12])));
    ExpectedPartPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[20])), Var_82);
  }
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPartPieces_17, ExpectedPartPieces_18);
  *ActualExpectedPieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), TypeErrorPieces_14, Var_33);
  succeeded = (ActualExpectedList_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    ActualExpected_19 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, 0))));
    Var_34 = ((MR_Word) ((MR_hl_field(1, ActualExpectedList_9, 1))));
    succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word ActualType_21;
    MR_Word ExpectedType_23;
    MR_Word ExistQTVars_24;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeActualExpected_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ActualExpected_19));
    }
    ActualType_21 = ((MR_Word) ((MR_hl_field(0, ActualExpected_19, 1))));
    ExpectedType_23 = ((MR_Word) ((MR_hl_field(0, ActualExpected_19, 3))));
    ExistQTVars_24 = ((MR_Word) ((MR_hl_field(0, ActualExpected_19, 4))));
    *DiffPieces_12 = check_hlds__typecheck_error_diff__type_diff_pieces_3_f_0(ExistQTVars_24, ActualType_21, ExpectedType_23);
  }
  else
  {
    *MaybeActualExpected_10 = (MR_Word) ((MR_Unsigned) 0U);
    *DiffPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
check_hlds__typecheck_error_wrong_type__acc_expected_type_source_pieces_4_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_2[0]));
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word ActualExpected_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ActualExpecteds_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word TailSourceExpectedPairs_11;
    MR_Word TailTaggedPieces_12;
    MR_Word ExpectedPieces_15;
    MR_Word MaybeSource_18;
    MR_String CommaOrPeriod_19;
    MR_Word SourcePieces_23;
    MR_Word HeadTaggedPieces_26;
    MR_Word SourceExpectedPair_27;

    check_hlds__typecheck_error_wrong_type__acc_expected_type_source_pieces_4_p_0(ModuleInfo_1, ActualExpecteds_8, &TailSourceExpectedPairs_11, &TailTaggedPieces_12);
    ExpectedPieces_15 = ((MR_Word) ((MR_hl_field(0, ActualExpected_7, 2))));
    MaybeSource_18 = ((MR_Word) ((MR_hl_field(0, ActualExpected_7, 5))));
    if ((TailTaggedPieces_12 == (MR_Word) ((MR_Unsigned) 0U)))
      CommaOrPeriod_19 = (MR_String) ".";
    else
      CommaOrPeriod_19 = (MR_String) ",";
    if ((MaybeSource_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.typecheck_error_wrong_type.acc_expected_type_source_pieces\'/4", (MR_String) "MaybeSource = no");
        return;
      }
    else
    {
      MR_Word Source_22 = ((MR_Word) ((MR_hl_field(1, MaybeSource_18, 0))));
      MR_Word ExpectedCommaOrDotPieces0_24;
      MR_Word ExpectedCommaOrDotPieces_25;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_39;
      MR_Word Var_44;

      SourcePieces_23 = check_hlds__typecheck_error_util__describe_args_type_assign_source_2_f_0(ModuleInfo_1, Source_22);
      {
        Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_29, 1) = ((MR_Box) (CommaOrPeriod_19));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      ExpectedCommaOrDotPieces0_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedPieces_15, Var_28);
      ExpectedCommaOrDotPieces_25 = parse_tree__error_spec__color_as_correct_1_f_0(ExpectedCommaOrDotPieces0_24);
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_error_wrong_type_scalar_common_1[21])));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (SourcePieces_23));
      }
      Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ExpectedCommaOrDotPieces_25, (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[12])));
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[8])), Var_44);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_error_wrong_type_scalar_common_1[23])), Var_39);
      HeadTaggedPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_34);
    }
    {
      SourceExpectedPair_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SourceExpectedPair_27, 0) = ((MR_Box) (SourcePieces_23));
      MR_hl_field(0, SourceExpectedPair_27, 1) = ((MR_Box) (ExpectedPieces_15));
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_2[0]), ((MR_Box) (SourceExpectedPair_27)), TailSourceExpectedPairs_11);
    if (succeeded)
    {
      *HeadVar__3_3 = TailSourceExpectedPairs_11;
      *HeadVar__4_4 = TailTaggedPieces_12;
    }
    else
    {
      mercury__set__insert_3_p_0((MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_2[0]), ((MR_Box) (SourceExpectedPair_27)), TailSourceExpectedPairs_11, HeadVar__3_3);
      *HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), HeadTaggedPieces_26, TailTaggedPieces_12);
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_error_wrong_type__is_actual_or_expected_single_type_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MaybeSingleActual_0_2,
  MR_Word * STATE_VARIABLE_MaybeSingleActual_3,
  MR_Word STATE_VARIABLE_MaybeSingleExpected_0_4,
  MR_Word * STATE_VARIABLE_MaybeSingleExpected_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaybeSingleExpected_5 = STATE_VARIABLE_MaybeSingleExpected_0_4;
      *STATE_VARIABLE_MaybeSingleActual_3 = STATE_VARIABLE_MaybeSingleActual_0_2;
    }
    else
    {
      MR_Word AE_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word AEs_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ActualPieces_16 = ((MR_Word) ((MR_hl_field(0, AE_12, 0))));
      MR_Word ExpectedPieces_18 = ((MR_Word) ((MR_hl_field(0, AE_12, 2))));
      MR_Word STATE_VARIABLE_MaybeSingleActual_26_26;
      MR_Word STATE_VARIABLE_MaybeSingleExpected_27_27;
      MR_Word TypeInfo_30_30;
      MR_Word Var_28;
      MR_Word TypeInfo_31_31;
      MR_Word Var_29;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_MaybeSingleActual_0_2;
      MR_Word next_value_of_STATE_VARIABLE_MaybeSingleExpected_0_4;

      succeeded = (STATE_VARIABLE_MaybeSingleActual_0_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_28 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSingleActual_0_2, 0))));
        TypeInfo_30_30 = (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ActualPieces_16)), ((MR_Box) (Var_28)));
      }
      if (succeeded)
        STATE_VARIABLE_MaybeSingleActual_26_26 = STATE_VARIABLE_MaybeSingleActual_0_2;
      else
        STATE_VARIABLE_MaybeSingleActual_26_26 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = (STATE_VARIABLE_MaybeSingleExpected_0_4 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_29 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeSingleExpected_0_4, 0))));
        TypeInfo_31_31 = (MR_Word) (&check_hlds__typecheck_error_wrong_type_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ExpectedPieces_18)), ((MR_Box) (Var_29)));
      }
      if (succeeded)
        STATE_VARIABLE_MaybeSingleExpected_27_27 = STATE_VARIABLE_MaybeSingleExpected_0_4;
      else
        STATE_VARIABLE_MaybeSingleExpected_27_27 = (MR_Word) ((MR_Unsigned) 0U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = AEs_13;
      next_value_of_STATE_VARIABLE_MaybeSingleActual_0_2 = STATE_VARIABLE_MaybeSingleActual_26_26;
      next_value_of_STATE_VARIABLE_MaybeSingleExpected_0_4 = STATE_VARIABLE_MaybeSingleExpected_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaybeSingleActual_0_2 = next_value_of_STATE_VARIABLE_MaybeSingleActual_0_2;
      STATE_VARIABLE_MaybeSingleExpected_0_4 = next_value_of_STATE_VARIABLE_MaybeSingleExpected_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type____Unify____maybe_print_expectation_source_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_wrong_type____Unify____maybe_print_expectation_source_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_wrong_type____Compare____maybe_print_expectation_source_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_wrong_type____Compare____maybe_print_expectation_source_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__typecheck_error_wrong_type____Unify____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__typecheck_error_wrong_type____Unify____spec_and_maybe_actual_expected_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__typecheck_error_wrong_type____Compare____spec_and_maybe_actual_expected_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__typecheck_error_wrong_type____Compare____spec_and_maybe_actual_expected_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__typecheck_error_wrong_type__init(void)
{
}

void mercury__check_hlds__typecheck_error_wrong_type__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__type_ctor_info_maybe_print_expectation_source_0);
  MR_register_type_ctor_info(&check_hlds__typecheck_error_wrong_type__check_hlds__typecheck_error_wrong_type__type_ctor_info_spec_and_maybe_actual_expected_0);
}

void mercury__check_hlds__typecheck_error_wrong_type__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_error_wrong_type__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_error_wrong_type.
