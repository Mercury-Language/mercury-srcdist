/*
** Automatically generated from `typecheck_msgs.m'
** by the Mercury compiler,
** version rotd-2025-07-05
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


// :- module check_hlds.typecheck_msgs.
// :- implementation.

/*
INIT mercury__check_hlds__typecheck_msgs__init
ENDINIT
*/

#include "check_hlds.typecheck_msgs.mih"


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
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_type.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0;

static MR_String MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__239__1_1_f_0(
  MR_String LambdaHeadVar__1_20);

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__pred__construct_type_inference_message__129__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_54);

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__diff_to_pieces_1_f_0(
  MR_Word Diff_3);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ActualArgTypes_7,
  MR_Word MaybeActualReturnType_8,
  MR_Word OtherPredId_9,
  MR_Word * Pieces_10);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgTypes_6,
  MR_Word ReturnType_7,
  MR_Word * Lines_8);

static void MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_1[25][2];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_3[3][5];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_4[1][8];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_5[1][7];




static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_1[25][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Type inference iteration limit exceeded."))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This probably indicates that your program has a type error."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You should declare the types explicitly."))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "option to increase the limit)."))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "iterations."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Inferred"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The argument list difference from the arity"))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "version is"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[6])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "func(")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "pred(")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) ")")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_msgs__func_decl_lines_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_3[1])),
    ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_3[2])),
    ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_3[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_msgs__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&check_hlds__typecheck_msgs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_var_name_print_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_diff_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static MR_String MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__239__1_1_f_0(
  MR_String LambdaHeadVar__1_20)
{
  MR_String LambdaHeadVar__2_21;
  MR_String Var_23;

  Var_23 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_20, (MR_String) ",");
  LambdaHeadVar__2_21 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_23);
  return LambdaHeadVar__2_21;
}

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__pred__construct_type_inference_message__129__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_54)
{
  MR_bool succeeded;
  MR_Word OtherPredInfo_33;
  MR_Word OtherPredMarkers_34;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, LambdaHeadVar__1_54, &OtherPredInfo_33);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(OtherPredInfo_33, &OtherPredMarkers_34);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(OtherPredMarkers_34, (MR_Integer) 2);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__diff_to_pieces_1_f_0(
  MR_Word Diff_3)
{
  MR_Word Pieces_4;

  switch (MR_tag((MR_Word) Diff_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Line_5 = ((MR_String) ((MR_hl_field(0, Diff_3, 0))));
        MR_Word Var_7;
        MR_String Var_8;

        Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "  ", Line_5);
        {
          Var_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_7, 0) = ((MR_Box) (Var_8));
        }
        {
          Pieces_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_4, 0) = ((MR_Box) (Var_7));
          MR_hl_field(1, Pieces_4, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[6])));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Pieces0_6;
        MR_Word Var_13;
        MR_String Var_14;
        MR_String Line_25 = ((MR_String) ((MR_hl_field(1, Diff_3, 0))));

        Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "- ", Line_25);
        {
          Var_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_13, 0) = ((MR_Box) (Var_14));
        }
        {
          Pieces0_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces0_6, 0) = ((MR_Box) (Var_13));
          MR_hl_field(1, Pieces0_6, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[6])));
        }
        Pieces_4 = parse_tree__error_spec__color_as_correct_1_f_0(Pieces0_6);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_19;
        MR_String Var_20;
        MR_String Line_26 = ((MR_String) ((MR_hl_field(2, Diff_3, 0))));
        MR_Word Pieces0_27;

        Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "+ ", Line_26);
        {
          Var_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_19, 0) = ((MR_Box) (Var_20));
        }
        {
          Pieces0_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces0_27, 0) = ((MR_Box) (Var_19));
          MR_hl_field(1, Pieces0_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[6])));
        }
        Pieces_4 = parse_tree__error_spec__color_as_incorrect_1_f_0(Pieces0_27);
      }
      break;
  }
  return Pieces_4;
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_Pieces_4;

  conv7_Pieces_4 = check_hlds__typecheck_msgs__diff_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_Pieces_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv5_LambdaHeadVar__2_21;

  conv5_LambdaHeadVar__2_21 = check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__239__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_21));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__4_4;

  conv4_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__4_4));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_21;

  conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__239__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ActualArgTypes_7,
  MR_Word MaybeActualReturnType_8,
  MR_Word OtherPredId_9,
  MR_Word * Pieces_10)
{
  MR_bool succeeded;
  MR_Word OtherPredInfo_11;
  MR_Word OtherTypes_12;
  MR_Word TVarSet_13;
  MR_Integer OtherArity_14;
  MR_Word ActualLines_15;
  MR_Word OtherLines_16;
  MR_Word EditSeq_21;
  MR_Word DiffSeq_22;
  MR_Word DiffPieceLists_23;
  MR_Word DiffPieces_24;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_33;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, OtherPredId_9, &OtherPredInfo_11);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(OtherPredInfo_11, &OtherTypes_12);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), &TVarSet_13);
  if ((MaybeActualReturnType_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word NonLastArgTypes_49;
    MR_Word LastArgType_50;
    MR_Box conv0_LastArgType_50;
    MR_Word NonLastArgTypes_77;
    MR_Word LastArgType_78;
    MR_Box conv3_LastArgType_78;

    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherTypes_12, &OtherArity_14);
    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_7, &NonLastArgTypes_49, &conv0_LastArgType_50);
    if (succeeded)
    {
      LastArgType_50 = ((MR_Word) (conv0_LastArgType_50));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NonLastArgTypeStrs_56;
      MR_Word NonLastArgTypeLines_58;
      MR_String LastArgTypeStr_59;
      MR_Word Var_60;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_String Var_69;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_5[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_1));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (TVarSet_13));
        MR_hl_field(0, Var_60, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      NonLastArgTypeStrs_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_60, NonLastArgTypes_49);
      NonLastArgTypeLines_58 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_2[2]), NonLastArgTypeStrs_56);
      LastArgTypeStr_59 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 2, LastArgType_50);
      Var_69 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_59);
      {
        Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(1, Var_68, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[24])));
      }
      Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_58, Var_68);
      ActualLines_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[23])), Var_67);
    }
    else
      ActualLines_15 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[21]));
    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherTypes_12, &NonLastArgTypes_77, &conv3_LastArgType_78);
    if (succeeded)
    {
      LastArgType_78 = ((MR_Word) (conv3_LastArgType_78));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NonLastArgTypeStrs_84;
      MR_Word NonLastArgTypeLines_86;
      MR_String LastArgTypeStr_87;
      MR_Word Var_88;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_String Var_97;

      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_88, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_5[0]));
        MR_hl_field(0, Var_88, 1) = ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_3));
        MR_hl_field(0, Var_88, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_88, 3) = ((MR_Box) (TVarSet_13));
        MR_hl_field(0, Var_88, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      NonLastArgTypeStrs_84 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_88, NonLastArgTypes_77);
      NonLastArgTypeLines_86 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_2[3]), NonLastArgTypeStrs_84);
      LastArgTypeStr_87 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 2, LastArgType_78);
      Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_87);
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[24])));
      }
      Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_86, Var_96);
      OtherLines_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[23])), Var_95);
    }
    else
      OtherLines_16 = (MR_Word) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[21]));
  }
  else
  {
    MR_Word ActualReturnType_17 = ((MR_Word) ((MR_hl_field(1, MaybeActualReturnType_8, 0))));
    MR_Word OtherArgTypes_18;
    MR_Word OtherReturnType_19;
    MR_Box conv6_OtherReturnType_19;

    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherTypes_12, &OtherArgTypes_18, &conv6_OtherReturnType_19);
    OtherReturnType_19 = ((MR_Word) (conv6_OtherReturnType_19));
    mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherArgTypes_18, &OtherArity_14);
    check_hlds__typecheck_msgs__func_decl_lines_4_p_0(TVarSet_13, ActualArgTypes_7, ActualReturnType_17, &ActualLines_15);
    check_hlds__typecheck_msgs__func_decl_lines_4_p_0(TVarSet_13, OtherArgTypes_18, OtherReturnType_19, &OtherLines_16);
  }
  mercury__edit_seq__find_shortest_edit_seq_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_2[0]), OtherLines_16, ActualLines_15, &EditSeq_21);
  mercury__edit_seq__find_diff_seq_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherLines_16, EditSeq_21, &DiffSeq_22);
  DiffPieceLists_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_msgs_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_2[4]), DiffSeq_22);
  mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DiffPieceLists_23, &DiffPieces_24);
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) (OtherArity_14));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[20])));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[18])));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
  }
  *Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, DiffPieces_24);
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_21;

  conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__239__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__4_4;

  conv1_HeadVar__4_4 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgTypes_6,
  MR_Word ReturnType_7,
  MR_Word * Lines_8)
{
  MR_bool succeeded;
  MR_String ReturnTypeStr_9;
  MR_String ReturnTypeSuffix_10;
  MR_Word NonLastArgTypes_11;
  MR_Word LastArgType_12;
  MR_Box conv0_LastArgType_12;

  ReturnTypeStr_9 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, ReturnType_7);
  ReturnTypeSuffix_10 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ReturnTypeStr_9);
  succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_6, &NonLastArgTypes_11, &conv0_LastArgType_12);
  if (succeeded)
  {
    LastArgType_12 = ((MR_Word) (conv0_LastArgType_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word NonLastArgTypeStrs_20;
    MR_Word NonLastArgTypeLines_22;
    MR_String LastArgTypeStr_23;
    MR_Word Var_24;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_35;
    MR_String Var_36;

    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_5[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (check_hlds__typecheck_msgs__func_decl_lines_4_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (TVarSet_5));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) ((MR_Integer) 2));
    }
    NonLastArgTypeStrs_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_24, NonLastArgTypes_11);
    NonLastArgTypeLines_22 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_2[1]), NonLastArgTypeStrs_20);
    LastArgTypeStr_23 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, LastArgType_12);
    Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_23);
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ")", ReturnTypeSuffix_10);
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_22, Var_32);
    *Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[22])), Var_31);
  }
  else
  {
    MR_String Var_16;

    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "func", ReturnTypeSuffix_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Lines_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Pieces_10;

  check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Pieces_10);
  *wrapper_arg_2 = ((MR_Box) (conv1_Pieces_10));
}

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = check_hlds__typecheck_msgs__IntroducedFrom__pred__construct_type_inference_message__129__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ValidPredIdSet_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word PredIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word PredInfo_16;
      MR_Word Markers_17;
      MR_Word STATE_VARIABLE_Specs_1_23;
      MR_Word TypeCtorInfo_24_24;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_13, &PredInfo_16);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_16, &Markers_17);
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_17, (MR_Integer) 2);
      if (succeeded)
      {
        TypeCtorInfo_24_24 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        succeeded = mercury__set_tree234__contains_2_p_0(TypeCtorInfo_24_24, ValidPredIdSet_2, ((MR_Box) (PredId_13)));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_16, &Var_18);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word Spec_19;
        MR_String PredName_25;
        MR_Word PredOrFunc_26;
        MR_Word UnqualPredSymName_27;
        MR_Word Context_28;
        MR_Word VarSet_29;
        MR_Word ExistQVars_30;
        MR_Word Types0_31;
        MR_Word Types_32;
        MR_Word ClassContext_33;
        MR_Word Purity_34;
        MR_Word ArgTypes_37;
        MR_Word MaybeReturnType_38;
        MR_String TypeStr_39;
        MR_Word InferredPieces_41;
        MR_Word PredicateTable_42;
        MR_Word ModuleName_43;
        MR_Word QualPredSymName_44;
        MR_Word AllPredIds_45;
        MR_Word AllOtherPredIds_46;
        MR_Word PredIsDeclared_47;
        MR_Word AllOtherDeclaredPredIds_48;
        MR_Word Var_54;
        MR_Word Var_56;
        MR_Word Var_57;

        PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_16);
        PredOrFunc_26 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_16);
        {
          UnqualPredSymName_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, UnqualPredSymName_27, 0) = ((MR_Box) (PredName_25));
        }
        hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_16, &Context_28);
        hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_16, &VarSet_29, &ExistQVars_30, &Types0_31);
        parse_tree__prog_type__strip_module_names_from_type_list_4_p_0((MR_Integer) 0, (MR_Integer) 1, Types0_31, &Types_32);
        hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_16, &ClassContext_33);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_16, &Purity_34);
        switch (PredOrFunc_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word ReturnType_40;
              MR_Box conv0_ReturnType_40;

              parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_32, &ArgTypes_37, &conv0_ReturnType_40);
              ReturnType_40 = ((MR_Word) (conv0_ReturnType_40));
              {
                MaybeReturnType_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MaybeReturnType_38, 0) = ((MR_Box) (ReturnType_40));
              }
              TypeStr_39 = parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(VarSet_29, (MR_Integer) 0, ExistQVars_30, UnqualPredSymName_27, ArgTypes_37, ReturnType_40, (MR_Word) ((MR_Unsigned) 0U), Purity_34, ClassContext_33);
            }
            break;
          case (MR_Integer) 0:
            {
              ArgTypes_37 = Types_32;
              MaybeReturnType_38 = (MR_Word) ((MR_Unsigned) 0U);
              TypeStr_39 = parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(VarSet_29, (MR_Integer) 0, ExistQVars_30, UnqualPredSymName_27, Types_32, (MR_Word) ((MR_Unsigned) 0U), Purity_34, ClassContext_33);
            }
            break;
        }
        {
          Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_57, 1) = ((MR_Box) (TypeStr_39));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
          MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[6])));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[16])));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_56));
        }
        {
          InferredPieces_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, InferredPieces_41, 0) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[15])));
          MR_hl_field(1, InferredPieces_41, 1) = ((MR_Box) (Var_54));
        }
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_1, &PredicateTable_42);
        ModuleName_43 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_16);
        {
          QualPredSymName_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, QualPredSymName_44, 0) = ((MR_Box) (ModuleName_43));
          MR_hl_field(1, QualPredSymName_44, 1) = ((MR_Box) (PredName_25));
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_42, (MR_Integer) 0, PredOrFunc_26, QualPredSymName_44, &AllPredIds_45);
        mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AllPredIds_45, ((MR_Box) (PredId_13)), &AllOtherPredIds_46);
        {
          PredIsDeclared_47 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredIsDeclared_47, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_3[0]));
          MR_hl_field(0, PredIsDeclared_47, 1) = ((MR_Box) (check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0_1));
          MR_hl_field(0, PredIsDeclared_47, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, PredIsDeclared_47, 3) = ((MR_Box) (ModuleInfo_1));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIsDeclared_47, AllOtherPredIds_46, &AllOtherDeclaredPredIds_48);
        if ((AllOtherDeclaredPredIds_48 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_65;
          MR_Word Var_66;

          {
            Var_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) (Context_28));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (InferredPieces_41));
          }
          {
            Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
            MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Spec_19, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.construct_type_inference_message\'/3"));
            MR_hl_field(3, Spec_19, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 277) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(3, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(3, Spec_19, 3) = ((MR_Box) ((MR_Unsigned) 52U));
            MR_hl_field(3, Spec_19, 4) = ((MR_Box) (Var_65));
          }
        }
        else
        {
          MR_Word DiffPieceLists_49;
          MR_Word Pieces_50;
          MR_Word Var_68;
          MR_Word Var_70;
          MR_Word Var_71;

          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_68, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_4[0]));
            MR_hl_field(0, Var_68, 1) = ((MR_Box) (check_hlds__typecheck_msgs__construct_type_inference_messages_5_p_0_2));
            MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_68, 3) = ((MR_Box) (ModuleInfo_1));
            MR_hl_field(0, Var_68, 4) = ((MR_Box) (ArgTypes_37));
            MR_hl_field(0, Var_68, 5) = ((MR_Box) (MaybeReturnType_38));
          }
          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_1[0]), Var_68, AllOtherDeclaredPredIds_48, &DiffPieceLists_49);
          Var_71 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DiffPieceLists_49);
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InferredPieces_41, Var_71);
          Pieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[17])), Var_70);
          {
            Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.construct_type_inference_message\'/3"));
            MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 52U));
            MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Context_28));
            MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_50));
          }
        }
        {
          STATE_VARIABLE_Specs_1_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_23, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_23, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      else
        STATE_VARIABLE_Specs_1_23 = STATE_VARIABLE_Specs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_msgs__typecheck_report_max_iterations_exceeded_1_f_0(
  MR_Integer MaxIterations_3)
{
  MR_Word Spec_4;
  MR_Word Pieces_5;
  MR_Word Var_8;
  MR_Word Var_11;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;

  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (MaxIterations_3));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__typecheck_msgs_scalar_common_1[14])));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[5])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[4])));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[3])));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (Var_11));
  }
  {
    Pieces_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_5, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__typecheck_msgs_scalar_common_1[2])));
    MR_hl_field(1, Pieces_5, 1) = ((MR_Box) (Var_8));
  }
  {
    Spec_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_4, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.typecheck_report_max_iterations_exceeded\'/1"));
    MR_hl_field(1, Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 52U));
    MR_hl_field(1, Spec_4, 3) = ((MR_Box) (Pieces_5));
  }
  return Spec_4;
}

void mercury__check_hlds__typecheck_msgs__init(void)
{
}

void mercury__check_hlds__typecheck_msgs__init_type_tables(void)
{
}

void mercury__check_hlds__typecheck_msgs__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__typecheck_msgs__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.typecheck_msgs.
