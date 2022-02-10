/*
** Automatically generated from `typecheck_msgs.m'
** by the Mercury compiler,
** version rotd-2022-02-10
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
#include "int.mih"
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
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0;

static MR_String MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__244__1_1_f_0(
  MR_String LambdaHeadVar__1_20);

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__pred__construct_type_inference_message__135__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_51);

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__diff_to_pieces_1_f_0(
  MR_Word Diff_3);

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

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__pred_decl_lines_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__pred_decl_lines_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__typecheck_msgs__pred_decl_lines_3_p_0(
  MR_Word TVarSet_4,
  MR_Word ArgTypes_5,
  MR_Word * Lines_6);

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__report_any_non_contiguous_clauses_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word ItemNumbers_10,
  MR_Word NumberTypes_11);

static void MR_CALL 
check_hlds__typecheck_msgs__report_non_contiguous_clause_contexts_6_p_0(
  MR_Word PredPieces_7,
  MR_Integer GapNumber_8,
  MR_Word FirstRegion_9,
  MR_Word SecondRegion_10,
  MR_Word LaterRegions_11,
  MR_Word * Msgs_12);

static void MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7);


static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_1[30][2];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_2[1][1];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_3[5][3];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_4[3][5];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_5[1][8];

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_6[1][7];




static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_1[30][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__edit_seq__edit_seq__type_ctor_info_diff_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Type inference iteration limit exceeded."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "This probably indicates that your program has a type error."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You should declare the types explicitly."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "option to increase the limit)."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "iterations."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Inferred"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_2[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The argument list difference from the arity"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "version is"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[15])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "pred")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: non-contiguous clauses for "))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[15])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Gap"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in clauses of"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "starts after this clause."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[15])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "ends with this clause."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[15])))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_msgs__pred_decl_lines_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_msgs__func_decl_lines_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_4[1])),
    ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_4[2])),
    ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_msgs__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_msgs_scalar_common_6[1][7] = {
  /* row 0 */
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



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck_msgs__edit_seq__pti_diff_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__edit_seq__edit_seq__type_ctor_info_diff_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static MR_String MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__244__1_1_f_0(
  MR_String LambdaHeadVar__1_20)
{
  {
    MR_String LambdaHeadVar__2_21;
    MR_String Var_23;

    Var_23 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_20, (MR_String) ",");
    LambdaHeadVar__2_21 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_23);
    return LambdaHeadVar__2_21;
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__IntroducedFrom__pred__construct_type_inference_message__135__1_2_p_0(
  MR_Word ModuleInfo_5,
  MR_Word LambdaHeadVar__1_51)
{
  {
    MR_bool succeeded;
    MR_Word OtherPredInfo_33;
    MR_Word OtherPredMarkers_34;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, LambdaHeadVar__1_51, &OtherPredInfo_33);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(OtherPredInfo_33, &OtherPredMarkers_34);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(OtherPredMarkers_34, (MR_Integer) 2);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__diff_to_pieces_1_f_0(
  MR_Word Diff_3)
{
  {
    MR_Word Pieces_4;
    MR_String Line_5;
    MR_String Char_6;
    MR_Word Var_7;
    MR_String Var_8;
    MR_String Var_9;

    switch (MR_tag((MR_Word) Diff_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Line_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Diff_3, (MR_Integer) 0))));
          Char_6 = (MR_String) " ";
        }
        break;
      case (MR_Integer) 1:
        {
          Line_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), Diff_3, (MR_Integer) 0))));
          Char_6 = (MR_String) "-";
        }
        break;
      case (MR_Integer) 2:
        {
          Line_5 = ((MR_String) ((MR_hl_field(MR_mktag(2), Diff_3, (MR_Integer) 0))));
          Char_6 = (MR_String) "+";
        }
        break;
    }
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) " ", Line_5);
    Var_8 = mercury__string__f_43_43_2_f_0(Char_6, Var_9);
    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_7, 0) = ((MR_Box) (Var_8));
    }
    {
      Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[15])));
    }
    return Pieces_4;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv4_Pieces_4;

    conv4_Pieces_4 = check_hlds__typecheck_msgs__diff_to_pieces_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv4_Pieces_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_21;

    conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__244__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ActualArgTypes_7,
  MR_Word MaybeActualReturnType_8,
  MR_Word OtherPredId_9,
  MR_Word * Pieces_10)
{
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
      MR_Word NonLastArgTypes_52;
      MR_Word LastArgType_53;
      MR_Box conv0_LastArgType_53;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherTypes_12, &OtherArity_14);
      succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ActualArgTypes_7, &NonLastArgTypes_52, &conv0_LastArgType_53);
      if (succeeded)
      {
        LastArgType_53 = ((MR_Word) (conv0_LastArgType_53));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word NonLastArgTypeStrs_65;
        MR_Word NonLastArgTypeLines_68;
        MR_String LastArgTypeStr_69;
        MR_Word Var_70;
        MR_Word Var_78;
        MR_String Var_79;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_String Var_84;
        MR_Word Var_86;
        MR_String Var_87;

        {
          Var_70 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_70, 1) = ((MR_Box) (check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_70, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_70, 3) = ((MR_Box) (TVarSet_13));
          MR_hl_field(MR_mktag(0), Var_70, 4) = ((MR_Box) ((MR_Integer) 2));
        }
        NonLastArgTypeStrs_65 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_70, NonLastArgTypes_52);
        NonLastArgTypeLines_68 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_3[3]), NonLastArgTypeStrs_65);
        LastArgTypeStr_69 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_13, (MR_Integer) 2, LastArgType_53);
        Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "pred", (MR_String) "(");
        {
          Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
          MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_69);
        Var_87 = mercury__string__f_43_43_2_f_0((MR_String) ")", (MR_String) "");
        {
          Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_86));
        }
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_68, Var_83);
        ActualLines_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_78, Var_82);
      }
      else
        ActualLines_15 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[20]));
      check_hlds__typecheck_msgs__pred_decl_lines_3_p_0(TVarSet_13, OtherTypes_12, &OtherLines_16);
    }
    else
    {
      MR_Word ActualReturnType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeActualReturnType_8, (MR_Integer) 0))));
      MR_Word OtherArgTypes_18;
      MR_Word OtherReturnType_19;
      MR_Box conv3_OtherReturnType_19;

      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherTypes_12, &OtherArgTypes_18, &conv3_OtherReturnType_19);
      OtherReturnType_19 = ((MR_Word) (conv3_OtherReturnType_19));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OtherArgTypes_18, &OtherArity_14);
      check_hlds__typecheck_msgs__func_decl_lines_4_p_0(TVarSet_13, ActualArgTypes_7, ActualReturnType_17, &ActualLines_15);
      check_hlds__typecheck_msgs__func_decl_lines_4_p_0(TVarSet_13, OtherArgTypes_18, OtherReturnType_19, &OtherLines_16);
    }
    mercury__edit_seq__find_shortest_edit_seq_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_3[0]), OtherLines_16, ActualLines_15, &EditSeq_21);
    mercury__edit_seq__find_diff_seq_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherLines_16, EditSeq_21, &DiffSeq_22);
    DiffPieceLists_23 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__typecheck_msgs_scalar_common_1[1]), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_1[0]), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_3[4]), DiffSeq_22);
    mercury__list__condense_2_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DiffPieceLists_23, &DiffPieces_24);
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (OtherArity_14));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[19])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    *Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_29, DiffPieces_24);
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_21;

    conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__244__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_msgs__func_decl_lines_4_p_0(
  MR_Word TVarSet_5,
  MR_Word ArgTypes_6,
  MR_Word ReturnType_7,
  MR_Word * Lines_8)
{
  {
    MR_bool succeeded;
    MR_String ReturnTypeStr_9;
    MR_String ReturnTypeSuffix_10;
    MR_Word NonLastArgTypes_11;
    MR_Word LastArgType_12;
    MR_Box conv0_LastArgType_12;

    ReturnTypeStr_9 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, ReturnType_7);
    ReturnTypeSuffix_10 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ReturnTypeStr_9);
    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_6, &NonLastArgTypes_11, &conv0_LastArgType_12);
    if (succeeded)
    {
      LastArgType_12 = ((MR_Word) (conv0_LastArgType_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NonLastArgTypeStrs_26;
      MR_Word NonLastArgTypeLines_29;
      MR_String LastArgTypeStr_30;
      MR_Word Var_31;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_String Var_45;
      MR_Word Var_47;
      MR_String Var_48;

      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (check_hlds__typecheck_msgs__func_decl_lines_4_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (TVarSet_5));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      NonLastArgTypeStrs_26 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, NonLastArgTypes_11);
      NonLastArgTypeLines_29 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_3[2]), NonLastArgTypeStrs_26);
      LastArgTypeStr_30 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 2, LastArgType_12);
      Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "func", (MR_String) "(");
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_30);
      Var_48 = mercury__string__f_43_43_2_f_0((MR_String) ")", ReturnTypeSuffix_10);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
      }
      Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_29, Var_44);
      *Lines_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_39, Var_43);
    }
    else
    {
      MR_String Var_16;

      Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "func", ReturnTypeSuffix_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Lines_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__pred_decl_lines_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_LambdaHeadVar__2_21;

    conv2_LambdaHeadVar__2_21 = check_hlds__typecheck_msgs__IntroducedFrom__func__arg_decl_lines__244__1_1_f_0(((MR_String) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_21));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
check_hlds__typecheck_msgs__pred_decl_lines_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__4_4;

    conv1_HeadVar__4_4 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__4_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__typecheck_msgs__pred_decl_lines_3_p_0(
  MR_Word TVarSet_4,
  MR_Word ArgTypes_5,
  MR_Word * Lines_6)
{
  {
    MR_bool succeeded;
    MR_Word NonLastArgTypes_7;
    MR_Word LastArgType_8;
    MR_Box conv0_LastArgType_8;

    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_5, &NonLastArgTypes_7, &conv0_LastArgType_8);
    if (succeeded)
    {
      LastArgType_8 = ((MR_Word) (conv0_LastArgType_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NonLastArgTypeStrs_20;
      MR_Word NonLastArgTypeLines_23;
      MR_String LastArgTypeStr_24;
      MR_Word Var_25;
      MR_Word Var_33;
      MR_String Var_34;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_String Var_39;
      MR_Word Var_41;
      MR_String Var_42;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (check_hlds__typecheck_msgs__pred_decl_lines_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TVarSet_4));
        MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) ((MR_Integer) 2));
      }
      NonLastArgTypeStrs_20 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_25, NonLastArgTypes_7);
      NonLastArgTypeLines_23 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_3[1]), NonLastArgTypeStrs_20);
      LastArgTypeStr_24 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_4, (MR_Integer) 2, LastArgType_8);
      Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "pred", (MR_String) "(");
      {
        Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "    ", LastArgTypeStr_24);
      Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ")", (MR_String) "");
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
      }
      Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), NonLastArgTypeLines_23, Var_38);
      *Lines_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, Var_37);
    }
    else
      *Lines_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[20]));
  }
}

void MR_CALL 
check_hlds__typecheck_msgs__maybe_check_for_and_report_any_non_contiguous_clauses_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Word PredInfo_8,
  MR_Word ItemNumbers_9,
  MR_Word * Specs_10)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word WarnNonContiguousForeignProcs_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 24, &WarnNonContiguousForeignProcs_12);
    switch (WarnNonContiguousForeignProcs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word WarnNonContiguousClauses_13;

          libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 23, &WarnNonContiguousClauses_13);
          switch (WarnNonContiguousClauses_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word FirstRegion_24;
                MR_Word SecondRegion_25;
                MR_Word LaterRegions_26;

                succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(ItemNumbers_9, (MR_Integer) 0, &FirstRegion_24, &SecondRegion_25, &LaterRegions_26);
                if (succeeded)
                {
                  MR_Word Spec_27;
                  MR_Word PredPieces_36;
                  MR_Word FrontPieces_37;
                  MR_Word Context_38;
                  MR_Word FrontMsg_39;
                  MR_Word ContextMsgs_40;
                  MR_Word Msgs_41;
                  MR_Word Var_43;

                  PredPieces_36 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_6, (MR_Integer) 1, PredId_7);
                  {
                    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[21])));
                    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (PredPieces_36));
                  }
                  FrontPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_43, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[23])));
                  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_8, &Context_38);
                  {
                    FrontMsg_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FrontMsg_39, 0) = ((MR_Box) (Context_38));
                    MR_hl_field(MR_mktag(0), FrontMsg_39, 1) = ((MR_Box) (FrontPieces_37));
                  }
                  check_hlds__typecheck_msgs__report_non_contiguous_clause_contexts_6_p_0(PredPieces_36, (MR_Integer) 1, FirstRegion_24, SecondRegion_25, LaterRegions_26, &ContextMsgs_40);
                  {
                    Msgs_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Msgs_41, 0) = ((MR_Box) (FrontMsg_39));
                    MR_hl_field(MR_mktag(1), Msgs_41, 1) = ((MR_Box) (ContextMsgs_40));
                  }
                  {
                    Spec_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_27, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.report_non_contiguous_clauses\'/6"));
                    MR_hl_field(MR_mktag(0), Spec_27, 1) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(0), Spec_27, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                    MR_hl_field(MR_mktag(0), Spec_27, 3) = ((MR_Box) (Msgs_41));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *Specs_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_27));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                  *Specs_10 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *Specs_10 = check_hlds__typecheck_msgs__report_any_non_contiguous_clauses_5_f_0(ModuleInfo_6, PredId_7, PredInfo_8, ItemNumbers_9, (MR_Integer) 1);
        break;
    }
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__report_any_non_contiguous_clauses_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredId_8,
  MR_Word PredInfo_9,
  MR_Word ItemNumbers_10,
  MR_Word NumberTypes_11)
{
  {
    MR_bool succeeded;
    MR_Word Specs_12;
    MR_Word FirstRegion_13;
    MR_Word SecondRegion_14;
    MR_Word LaterRegions_15;

    succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(ItemNumbers_10, NumberTypes_11, &FirstRegion_13, &SecondRegion_14, &LaterRegions_15);
    if (succeeded)
    {
      MR_Word Spec_16;
      MR_Word PredPieces_25;
      MR_Word FrontPieces_26;
      MR_Word Context_27;
      MR_Word FrontMsg_28;
      MR_Word ContextMsgs_29;
      MR_Word Msgs_30;
      MR_Word Var_32;

      PredPieces_25 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_7, (MR_Integer) 1, PredId_8);
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[21])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (PredPieces_25));
      }
      FrontPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_32, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[23])));
      hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_9, &Context_27);
      {
        FrontMsg_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FrontMsg_28, 0) = ((MR_Box) (Context_27));
        MR_hl_field(MR_mktag(0), FrontMsg_28, 1) = ((MR_Box) (FrontPieces_26));
      }
      check_hlds__typecheck_msgs__report_non_contiguous_clause_contexts_6_p_0(PredPieces_25, (MR_Integer) 1, FirstRegion_13, SecondRegion_14, LaterRegions_15, &ContextMsgs_29);
      {
        Msgs_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Msgs_30, 0) = ((MR_Box) (FrontMsg_28));
        MR_hl_field(MR_mktag(1), Msgs_30, 1) = ((MR_Box) (ContextMsgs_29));
      }
      {
        Spec_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.report_non_contiguous_clauses\'/6"));
        MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(0), Spec_16, 3) = ((MR_Box) (Msgs_30));
      }
      {
        Specs_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Specs_12, 0) = ((MR_Box) (Spec_16));
        MR_hl_field(MR_mktag(1), Specs_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
      Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
    return Specs_12;
  }
}

static void MR_CALL 
check_hlds__typecheck_msgs__report_non_contiguous_clause_contexts_6_p_0(
  MR_Word PredPieces_7,
  MR_Integer GapNumber_8,
  MR_Word FirstRegion_9,
  MR_Word SecondRegion_10,
  MR_Word LaterRegions_11,
  MR_Word * Msgs_12)
{
  {
    MR_bool succeeded;
    MR_Word FirstUpperContext_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstRegion_9, (MR_Integer) 3))));
    MR_Word SecondLowerContext_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SecondRegion_10, (MR_Integer) 2))));
    MR_Word Var_32 = (MR_Word) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[24]));
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_47;

    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (PredPieces_7));
    }
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[27])));
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_35, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[29])));
    succeeded = (GapNumber_8 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (LaterRegions_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      MR_Word FirstPieces_22;
      MR_Word SecondPieces_23;
      MR_Word FirstMsg_24;
      MR_Word SecondMsg_25;
      MR_Word Var_31;
      MR_Word Var_60;

      {
        Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (LaterRegions_11));
      }
      FirstPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_34);
      SecondPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_31, Var_47);
      {
        FirstMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstMsg_24, 0) = ((MR_Box) (FirstUpperContext_16));
        MR_hl_field(MR_mktag(0), FirstMsg_24, 1) = ((MR_Box) (FirstPieces_22));
      }
      {
        SecondMsg_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SecondMsg_25, 0) = ((MR_Box) (SecondLowerContext_19));
        MR_hl_field(MR_mktag(0), SecondMsg_25, 1) = ((MR_Box) (SecondPieces_23));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (SecondMsg_25));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (LaterRegions_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Msgs_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstMsg_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_60));
      }
    }
    else
    {
      MR_Word Var_29;
      MR_Word GapPieces_68;
      MR_Word FirstPieces_69;
      MR_Word SecondPieces_70;
      MR_Word FirstMsg_71;
      MR_Word SecondMsg_72;
      MR_Word Var_73;

      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (GapNumber_8));
      }
      {
        GapPieces_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GapPieces_68, 0) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(1), GapPieces_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (GapPieces_68));
      }
      FirstPieces_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, Var_34);
      SecondPieces_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_73, Var_47);
      {
        FirstMsg_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FirstMsg_71, 0) = ((MR_Box) (FirstUpperContext_16));
        MR_hl_field(MR_mktag(0), FirstMsg_71, 1) = ((MR_Box) (FirstPieces_69));
      }
      {
        SecondMsg_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), SecondMsg_72, 0) = ((MR_Box) (SecondLowerContext_19));
        MR_hl_field(MR_mktag(0), SecondMsg_72, 1) = ((MR_Box) (SecondPieces_70));
      }
      if ((LaterRegions_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_64;

        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (SecondMsg_72));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Msgs_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstMsg_71));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_64));
        }
      }
      else
      {
        MR_Word FirstLaterRegion_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterRegions_11, (MR_Integer) 0))));
        MR_Word LaterLaterRegions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LaterRegions_11, (MR_Integer) 1))));
        MR_Word LaterMsgs_28;
        MR_Integer Var_57 = (MR_Integer) ((MR_Unsigned) GapNumber_8 + (MR_Unsigned) 1);
        MR_Word Var_59;

        check_hlds__typecheck_msgs__report_non_contiguous_clause_contexts_6_p_0(PredPieces_7, Var_57, SecondRegion_10, FirstLaterRegion_26, LaterLaterRegions_27, &LaterMsgs_28);
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (SecondMsg_72));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (LaterMsgs_28));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Msgs_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstMsg_71));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_59));
        }
      }
    }
  }
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
      MR_Word PredId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredInfo_16;
      MR_Word Markers_17;
      MR_Word STATE_VARIABLE_Specs_23_23;
      MR_Word TypeCtorInfo_25_25;
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_1, PredId_13, &PredInfo_16);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_16, &Markers_17);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_17, (MR_Integer) 2);
      if (succeeded)
      {
        TypeCtorInfo_25_25 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0);
        succeeded = mercury__set_tree234__contains_2_p_0(TypeCtorInfo_25_25, ValidPredIdSet_2, ((MR_Box) (PredId_13)));
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_16, &Var_18);
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word Spec_19;

        Spec_19 = check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0(ModuleInfo_1, PredId_13, PredInfo_16);
        {
          STATE_VARIABLE_Specs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_23_23, 0) = ((MR_Box) (Spec_19));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_23_23, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_4));
        }
      }
      else
        STATE_VARIABLE_Specs_23_23 = STATE_VARIABLE_Specs_0_4;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_23_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Pieces_10;

    check_hlds__typecheck_msgs__construct_pred_decl_diff_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Pieces_10);
    *wrapper_arg_2 = ((MR_Box) (conv1_Pieces_10));
  }
}

static MR_bool MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = check_hlds__typecheck_msgs__IntroducedFrom__pred__construct_type_inference_message__135__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word PredId_6,
  MR_Word PredInfo_7)
{
  {
    MR_bool succeeded;
    MR_Word Spec_8;
    MR_String PredName_9;
    MR_Word PredOrFunc_10;
    MR_Word UnqualPredSymName_11;
    MR_Word Context_12;
    MR_Word VarSet_13;
    MR_Word ExistQVars_14;
    MR_Word Types0_15;
    MR_Word Types_16;
    MR_Word ClassContext_17;
    MR_Word Purity_18;
    MR_Word ArgTypes_21;
    MR_Word MaybeReturnType_22;
    MR_String TypeStr_23;
    MR_Word InferredPieces_25;
    MR_Word PredicateTable_26;
    MR_Word ModuleName_27;
    MR_Word QualPredSymName_28;
    MR_Word AllPredIds_29;
    MR_Word AllOtherPredIds_30;
    MR_Word PredIsDeclared_31;
    MR_Word AllOtherDeclaredPredIds_35;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;

    PredName_9 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    {
      UnqualPredSymName_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualPredSymName_11, 0) = ((MR_Box) (PredName_9));
    }
    hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo_7, &Context_12);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(PredInfo_7, &VarSet_13, &ExistQVars_14, &Types0_15);
    parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(Types0_15, &Types_16);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo_7, &ClassContext_17);
    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_7, &Purity_18);
    switch (PredOrFunc_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ReturnType_24;
          MR_Box conv0_ReturnType_24;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Types_16, &ArgTypes_21, &conv0_ReturnType_24);
          ReturnType_24 = ((MR_Word) (conv0_ReturnType_24));
          {
            MaybeReturnType_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeReturnType_22, 0) = ((MR_Box) (ReturnType_24));
          }
          TypeStr_23 = parse_tree__parse_tree_out_pred_decl__mercury_func_type_to_string_9_f_0(VarSet_13, (MR_Integer) 0, ExistQVars_14, UnqualPredSymName_11, ArgTypes_21, ReturnType_24, (MR_Word) ((MR_Unsigned) 0U), Purity_18, ClassContext_17);
        }
        break;
      case (MR_Integer) 0:
        {
          ArgTypes_21 = Types_16;
          MaybeReturnType_22 = (MR_Word) ((MR_Unsigned) 0U);
          TypeStr_23 = parse_tree__parse_tree_out_pred_decl__mercury_pred_type_to_string_8_f_0(VarSet_13, (MR_Integer) 0, ExistQVars_14, UnqualPredSymName_11, Types_16, (MR_Word) ((MR_Unsigned) 0U), Purity_18, ClassContext_17);
        }
        break;
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (TypeStr_23));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[15])));
    }
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      InferredPieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InferredPieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_2[0])));
      MR_hl_field(MR_mktag(1), InferredPieces_25, 1) = ((MR_Box) (Var_42));
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_5, &PredicateTable_26);
    ModuleName_27 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    {
      QualPredSymName_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), QualPredSymName_28, 0) = ((MR_Box) (ModuleName_27));
      MR_hl_field(MR_mktag(1), QualPredSymName_28, 1) = ((MR_Box) (PredName_9));
    }
    hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_26, (MR_Integer) 0, PredOrFunc_10, QualPredSymName_28, &AllPredIds_29);
    mercury__list__delete_all_3_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), AllPredIds_29, ((MR_Box) (PredId_6)), &AllOtherPredIds_30);
    {
      PredIsDeclared_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 1) = ((MR_Box) (check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0_1));
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), PredIsDeclared_31, 3) = ((MR_Box) (ModuleInfo_5));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIsDeclared_31, AllOtherPredIds_30, &AllOtherDeclaredPredIds_35);
    if ((AllOtherDeclaredPredIds_35 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_68;
      MR_Word Var_69;

      {
        Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (InferredPieces_25));
      }
      {
        Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
        MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.construct_type_inference_message\'/3"));
        MR_hl_field(MR_mktag(3), Spec_8, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 65) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Spec_8, 3) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(3), Spec_8, 4) = ((MR_Box) (Var_68));
      }
    }
    else
    {
      MR_Word DiffPieceLists_38;
      MR_Word Pieces_39;
      MR_Word Var_53;
      MR_Word Var_58;
      MR_Word Var_59;

      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&check_hlds__typecheck_msgs_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (check_hlds__typecheck_msgs__construct_type_inference_message_3_f_0_2));
        MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (ModuleInfo_5));
        MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (ArgTypes_21));
        MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (MaybeReturnType_22));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__typecheck_msgs_scalar_common_1[0]), Var_53, AllOtherDeclaredPredIds_35, &DiffPieceLists_38);
      Var_59 = mercury__list__condense_1_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), DiffPieceLists_38);
      Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), InferredPieces_25, Var_59);
      Pieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[16])), Var_58);
      {
        Spec_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.construct_type_inference_message\'/3"));
        MR_hl_field(MR_mktag(1), Spec_8, 1) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(1), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(MR_mktag(1), Spec_8, 3) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(1), Spec_8, 4) = ((MR_Box) (Pieces_39));
      }
    }
    return Spec_8;
  }
}

MR_Word MR_CALL 
check_hlds__typecheck_msgs__typecheck_report_max_iterations_exceeded_1_f_0(
  MR_Integer MaxIterations_3)
{
  {
    MR_Word Spec_4;
    MR_Word Pieces_5;
    MR_Word Var_8;
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (MaxIterations_3));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_msgs_scalar_common_1[13])));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[5])));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[4])));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[3])));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (Var_11));
    }
    {
      Pieces_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_5, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_msgs_scalar_common_1[2])));
      MR_hl_field(MR_mktag(1), Pieces_5, 1) = ((MR_Box) (Var_8));
    }
    {
      Spec_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Spec_4, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.typecheck_msgs.typecheck_report_max_iterations_exceeded\'/1"));
      MR_hl_field(MR_mktag(2), Spec_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), Spec_4, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(MR_mktag(2), Spec_4, 3) = ((MR_Box) (Pieces_5));
    }
    return Spec_4;
  }
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
