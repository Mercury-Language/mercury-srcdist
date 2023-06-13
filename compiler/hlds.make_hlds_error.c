/*
** Automatically generated from `make_hlds_error.m'
** by the Mercury compiler,
** version rotd-2023-06-13
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


// :- module hlds.make_hlds_error.
// :- implementation.

/*
INIT mercury__hlds__make_hlds_error__init
ENDINIT
*/

#include "hlds.make_hlds_error.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static MR_Word MR_CALL 
hlds__make_hlds_error__pred_form_arity_to_int_fixed_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word PredFormArity_5);

static MR_Word MR_CALL 
hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5);

static MR_Box MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[50][2];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[1][1];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[2][3];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_5[2][6];




static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[50][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[2])))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Here is the previous definition of"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[2])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 31U)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicate"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[2])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does exist with"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[2])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The declared mode for this"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is:"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[34])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 35U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[34])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "However, a"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of that name"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does exist with arity"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of that name do exist with arities"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_5[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static MR_Word MR_CALL 
hlds__make_hlds_error__pred_form_arity_to_int_fixed_2_f_0(
  MR_Word PredOrFunc_4,
  MR_Word PredFormArity_5)
{
  MR_Word Component_6;
  MR_Word UserArity_7;
  MR_Integer UserArityInt_8;

  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_4, &UserArity_7, PredFormArity_5);
  UserArityInt_8 = (MR_Integer) (UserArity_7);
  {
    Component_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Component_6, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Component_6, 1) = ((MR_Box) (UserArityInt_8));
  }
  return Component_6;
}

static MR_Word MR_CALL 
hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_String Var_10;

  Var_10 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 1, ProcId_5, PredInfo_4);
  {
    Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_9, 1) = ((MR_Box) (Var_10));
  }
  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[49])));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[48])));
    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_8));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Component_6;

  conv0_Component_6 = hlds__make_hlds_error__pred_form_arity_to_int_fixed_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Component_6));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredOrFunc_12,
  MR_Word SymName_13,
  MR_Word PredFormArity_14,
  MR_Word Status_15,
  MR_Word IsClassMethod_16,
  MR_Word Context_17,
  MR_Word DescPieces_18,
  MR_Word STATE_VARIABLE_Specs_0_41,
  MR_Word * STATE_VARIABLE_Specs_42)
{
  MR_bool succeeded;
  MR_Word DefinedInThisModule_20;
  MR_Word IsExported_21;
  MR_Word Globals_22;
  MR_Word InferTypes_23;

  DefinedInThisModule_20 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_15);
  IsExported_21 = hlds__status__pred_status_is_exported_1_f_0(Status_15);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 222, &InferTypes_23);
  succeeded = (DefinedInThisModule_20 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (IsExported_21 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (IsClassMethod_16 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (InferTypes_23 == (MR_Integer) 1);
    }
  }
  if (succeeded)
    *STATE_VARIABLE_Specs_42 = STATE_VARIABLE_Specs_0_41;
  else
  {
    MR_Word PFSymNameArity_24;
    MR_String PredOrFuncStr_25;
    MR_Word MainPieces_26;
    MR_Word MainMsg_27;
    MR_Word PredicateTable_28;
    MR_Word AllArityPredIds_29;
    MR_Word PorFArities_30;
    MR_Word OtherPredFormArities_31;
    MR_Word OtherPredFormAritiesList_32;
    MR_String FullPredOrFuncStr_33;
    MR_Word Spec_34;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word Var_60;
    MR_Word Var_61;

    {
      PFSymNameArity_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFSymNameArity_24, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_12));
      MR_hl_field(0, PFSymNameArity_24, 1) = ((MR_Box) (SymName_13));
      MR_hl_field(0, PFSymNameArity_24, 2) = ((MR_Box) (PredFormArity_14));
    }
    PredOrFuncStr_25 = parse_tree__parse_tree_out_misc__pred_or_func_to_str_1_f_0(PredOrFunc_12);
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[1])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (DescPieces_18));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_2[0])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_54, 1) = ((MR_Box) (PFSymNameArity_24));
    }
    {
      Var_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_61, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_61, 1) = ((MR_Box) (PredOrFuncStr_25));
    }
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Var_61));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[24])));
    }
    {
      Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[21])));
      MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[19])));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
    }
    MainPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_50);
    {
      MainMsg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, MainMsg_27, 0) = ((MR_Box) (Context_17));
      MR_hl_field(0, MainMsg_27, 1) = ((MR_Box) (MainPieces_26));
    }
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_28);
    hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_28, (MR_Integer) 0, PredOrFunc_12, SymName_13, &AllArityPredIds_29);
    hlds__make_hlds_error__gather_porf_arities_4_p_0(ModuleInfo_11, AllArityPredIds_29, PredOrFunc_12, &PorFArities_30);
    mercury__set__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), ((MR_Box) (PredFormArity_14)), PorFArities_30, &OtherPredFormArities_31);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), OtherPredFormArities_31, &OtherPredFormAritiesList_32);
    FullPredOrFuncStr_33 = parse_tree__parse_tree_out_misc__pred_or_func_to_full_str_1_f_0(PredOrFunc_12);
    if ((OtherPredFormAritiesList_32 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_72;

      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (MainMsg_27));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
        MR_hl_field(0, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(0, Spec_34, 3) = ((MR_Box) (Var_72));
      }
    }
    else
    {
      MR_Word Var_133 = ((MR_Word) ((MR_hl_field(1, OtherPredFormAritiesList_32, (MR_Integer) 1))));
      MR_Word Var_134 = ((MR_Word) ((MR_hl_field(1, OtherPredFormAritiesList_32, (MR_Integer) 0))));

      if ((Var_133 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OtherAritiesPieces_36;
        MR_Word OtherAritiesMsg_40;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_82;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word UserArity_135;
        MR_Integer UserArityInt_136;

        {
          Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_78, 1) = ((MR_Box) (FullPredOrFuncStr_33));
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_12, &UserArity_135, Var_134);
        UserArityInt_136 = (MR_Integer) (UserArity_135);
        {
          Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_86, 1) = ((MR_Box) (UserArityInt_136));
        }
        {
          Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
          MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[7])));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[44])));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[43])));
          MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
          MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
        }
        {
          OtherAritiesPieces_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, OtherAritiesPieces_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[42])));
          MR_hl_field(1, OtherAritiesPieces_36, 1) = ((MR_Box) (Var_77));
        }
        {
          OtherAritiesMsg_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OtherAritiesMsg_40, 0) = ((MR_Box) (Context_17));
          MR_hl_field(0, OtherAritiesMsg_40, 1) = ((MR_Box) (OtherAritiesPieces_36));
        }
        {
          Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_119, 0) = ((MR_Box) (OtherAritiesMsg_40));
          MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (MainMsg_27));
          MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_119));
        }
        {
          Spec_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
          MR_hl_field(0, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(0, Spec_34, 3) = ((MR_Box) (Var_118));
        }
      }
      else
      {
        MR_Word Var_94;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_102;
        MR_Word Var_105;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word OtherAritiesPieces_125;
        MR_Word OtherAritiesMsg_126;
        MR_Word Var_130;
        MR_Word Var_131;

        {
          Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_98, 1) = ((MR_Box) (FullPredOrFuncStr_33));
        }
        {
          Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_108, 0) = ((MR_Box) (&hlds__make_hlds_error_scalar_common_5[1]));
          MR_hl_field(0, Var_108, 1) = ((MR_Box) (hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1));
          MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_108, 3) = ((MR_Box) (PredOrFunc_12));
        }
        Var_107 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_108, OtherPredFormAritiesList_32);
        Var_105 = parse_tree__error_spec__component_list_to_pieces_2_f_0((MR_String) "and", Var_107);
        {
          Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_102, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[47])));
          MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_105));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[46])));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_102));
        }
        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
          MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_99));
        }
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[45])));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
        }
        OtherAritiesPieces_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[7])));
        {
          OtherAritiesMsg_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, OtherAritiesMsg_126, 0) = ((MR_Box) (Context_17));
          MR_hl_field(0, OtherAritiesMsg_126, 1) = ((MR_Box) (OtherAritiesPieces_125));
        }
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (OtherAritiesMsg_126));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (MainMsg_27));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
        }
        {
          Spec_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.maybe_report_undefined_pred_error\'/10"));
          MR_hl_field(0, Spec_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(0, Spec_34, 3) = ((MR_Box) (Var_130));
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_42 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_34));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_41));
    }
  }
}

static void MR_CALL 
hlds__make_hlds_error__gather_porf_arities_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0));
  else
  {
    MR_Word PredId_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredIds_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word PredInfo_12;
    MR_Word PorF_13;
    MR_Word STATE_VARIABLE_PorFArities_17_17;

    hlds__make_hlds_error__gather_porf_arities_4_p_0(HeadVar__1_1, PredIds_9, HeadVar__3_3, &STATE_VARIABLE_PorFArities_17_17);
    hlds__hlds_module__module_info_pred_info_3_p_0(HeadVar__1_1, PredId_8, &PredInfo_12);
    PorF_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
    succeeded = (PorF_13 == HeadVar__3_3);
    if (succeeded)
    {
      MR_Word Markers_14;

      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_12, &Markers_14);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_14, (MR_Integer) 4);
      if (succeeded)
        *HeadVar__4_4 = STATE_VARIABLE_PorFArities_17_17;
      else
      {
        MR_Word PredFormArity_15;

        PredFormArity_15 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_12);
        mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), ((MR_Box) (PredFormArity_15)), STATE_VARIABLE_PorFArities_17_17, HeadVar__4_4);
      }
    }
    else
      *HeadVar__4_4 = STATE_VARIABLE_PorFArities_17_17;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Word PredInfo_12,
  MR_Word VarSet_13,
  MR_Word ArgModes_14,
  MR_Word DescPieces_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_Word PredIdPieces_18;
  MR_Word StrippedArgModes_19;
  MR_Word PredOrFunc_20;
  MR_String Name_21;
  MR_String SubDeclStr_23;
  MR_Word MainPieces_24;
  MR_Word ProcIds_25;
  MR_Word VerbosePieces_26;
  MR_Word Msg_31;
  MR_Word Spec_32;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_121;

  PredIdPieces_18 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_10, (MR_Integer) 1, PredId_11);
  parse_tree__prog_mode__strip_module_names_from_mode_list_3_p_0((MR_Integer) 0, ArgModes_14, &StrippedArgModes_19);
  PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
  Name_21 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_12);
  Var_38 = mercury__varset__coerce_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0), VarSet_13);
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (Name_21));
  }
  SubDeclStr_23 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_20, Var_38, Var_39, StrippedArgModes_19, (MR_Word) ((MR_Unsigned) 0U));
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[26])));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (DescPieces_15));
  }
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) (SubDeclStr_23));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[7])));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[28])));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[27])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredIdPieces_18, Var_49);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[20])), Var_48);
  MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_43);
  ProcIds_25 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_12);
  if ((ProcIds_25 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_67;
    MR_Word Var_68;

    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_68, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
    }
    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[31])));
    }
    {
      VerbosePieces_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, VerbosePieces_26, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[29])));
      MR_hl_field(1, VerbosePieces_26, 1) = ((MR_Box) (Var_67));
    }
  }
  else
  {
    MR_Integer ProcIdsHead_27 = ((MR_Integer) ((MR_hl_field(1, ProcIds_25, (MR_Integer) 0))));
    MR_Word ProcIdsTail_28 = ((MR_Word) ((MR_hl_field(1, ProcIds_25, (MR_Integer) 1))));

    if ((ProcIdsTail_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_75;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_130;
      MR_Word Var_131;
      MR_String Var_132;

      {
        Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_79, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[36])));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[32])));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
      }
      Var_132 = check_hlds__mode_errors__mode_decl_to_string_3_f_0((MR_Integer) 1, ProcIdsHead_27, PredInfo_12);
      {
        Var_131 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_131, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_131, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
        MR_hl_field(1, Var_130, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[49])));
      }
      {
        Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_88, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[48])));
        MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_130));
      }
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[38])));
      VerbosePieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, Var_87);
    }
    else
    {
      MR_Word Var_93;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;

      {
        Var_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_97, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_97, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
      }
      {
        Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(1, Var_96, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[41])));
      }
      {
        Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_93, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[39])));
        MR_hl_field(1, Var_93, 1) = ((MR_Box) (Var_96));
      }
      {
        Var_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_107, 0) = ((MR_Box) (&hlds__make_hlds_error_scalar_common_5[0]));
        MR_hl_field(0, Var_107, 1) = ((MR_Box) (hlds__make_hlds_error__report_undeclared_mode_error_9_p_0_1));
        MR_hl_field(0, Var_107, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_107, 3) = ((MR_Box) (PredInfo_12));
      }
      Var_106 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_1[0]), Var_107, ProcIds_25);
      Var_105 = parse_tree__error_spec__component_list_to_line_pieces_2_f_0(Var_106, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[38])));
      VerbosePieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_105);
    }
  }
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (MainPieces_24));
  }
  {
    Var_115 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_115, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(2, Var_115, 1) = ((MR_Box) (VerbosePieces_26));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_114));
  }
  {
    Msg_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_31, 0) = ((MR_Box) (Context_16));
    MR_hl_field(2, Msg_31, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_121, 0) = ((MR_Box) (Msg_31));
    MR_hl_field(1, Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_32, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_undeclared_mode_error\'/9"));
    MR_hl_field(0, Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_32, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(0, Spec_32, 3) = ((MR_Box) (Var_121));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_34 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_32));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_33));
  }
}

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  mercury__string__int_to_string_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
}

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(
  MR_Word MaybePorF_9,
  MR_Word SymName_10,
  MR_Word UserArity_11,
  MR_Word OtherUserArities_12,
  MR_Word Context_13,
  MR_Word DescPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word SNAPrefixPieces_16;
  MR_Word PredOrFuncPieces_17;
  MR_Integer UserArityInt_18;
  MR_Word SNA_19;
  MR_Word MainPieces_20;
  MR_Word OtherArityPieces_21;
  MR_Word Spec_26;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_68;
  MR_Word Var_99;

  if ((MaybePorF_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    SNAPrefixPieces_16 = (MR_Word) ((MR_Unsigned) 0U);
    PredOrFuncPieces_17 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[13]));
  }
  else
  {
    MR_Word Var_108 = ((MR_Word) ((MR_hl_field(1, MaybePorF_9, (MR_Integer) 0))));

    switch (Var_108) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          SNAPrefixPieces_16 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[15]));
          PredOrFuncPieces_17 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[9]));
        }
        break;
      case (MR_Integer) 0:
        {
          SNAPrefixPieces_16 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[17]));
          PredOrFuncPieces_17 = (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[18]));
        }
        break;
    }
  }
  UserArityInt_18 = (MR_Integer) (UserArity_11);
  {
    SNA_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_19, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, SNA_19, 1) = ((MR_Box) (UserArityInt_18));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[1])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (DescPieces_14));
  }
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (SNA_19));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[22])));
  }
  Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredOrFuncPieces_17, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[24])));
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, Var_68);
  Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SNAPrefixPieces_16, Var_61);
  Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[20])), Var_60);
  MainPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_55);
  if ((OtherUserArities_12 == (MR_Word) ((MR_Unsigned) 0U)))
    OtherArityPieces_21 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word OtherUserArityInts_24;
    MR_Word OtherArityStrs_25;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_String Var_84;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Box conv2_Var_84;

    OtherUserArityInts_24 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_4[0]), OtherUserArities_12);
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds_error_scalar_common_4[1]), OtherUserArityInts_24, &OtherArityStrs_25);
    {
      Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_78, 1) = ((MR_Box) (SymName_10));
    }
    conv2_Var_84 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherArityStrs_25, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
    Var_84 = ((MR_String) (conv2_Var_84));
    {
      Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[25])));
      MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_82));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
    }
    Var_89 = parse_tree__error_spec__list_to_pieces_1_f_0(OtherArityStrs_25);
    Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_89, (MR_Word) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[7])));
    OtherArityPieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_88);
  }
  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_20, OtherArityPieces_21);
  {
    Spec_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_undefined_pred_or_func_error\'/8"));
    MR_hl_field(1, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, Spec_26, 3) = ((MR_Box) (Context_13));
    MR_hl_field(1, Spec_26, 4) = ((MR_Box) (Var_99));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_28 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
  }
}

void MR_CALL 
hlds__make_hlds_error__report_multiply_defined_8_p_0(
  MR_String EntityKind_9,
  MR_Word SymName_10,
  MR_Word UserArity_11,
  MR_Word Context_12,
  MR_Word OrigContext_13,
  MR_Word ExtraPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word CmpRes_16;
  MR_Word FirstContext_17;
  MR_Word SecondContext_18;
  MR_Integer UserArityInt_19;
  MR_Word SNA_20;
  MR_Word SecondDeclPieces_21;
  MR_Word FirstDeclPieces_22;
  MR_Word SecondDeclMsg_23;
  MR_Word FirstDeclMsg_24;
  MR_Word ExtraMsgs_25;
  MR_Word Spec_28;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_45;
  MR_Word Var_47;
  MR_Word Var_60;
  MR_Word Var_61;

  mercury__term_context____Compare____term_context_0_0(&CmpRes_16, OrigContext_13, Context_12);
  switch (CmpRes_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 0:
      {
        FirstContext_17 = OrigContext_13;
        SecondContext_18 = Context_12;
      }
      break;
    case (MR_Integer) 2:
      {
        FirstContext_17 = Context_12;
        SecondContext_18 = OrigContext_13;
      }
      break;
  }
  UserArityInt_19 = (MR_Integer) (UserArity_11);
  {
    SNA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_20, 0) = ((MR_Box) (SymName_10));
    MR_hl_field(0, SNA_20, 1) = ((MR_Box) (UserArityInt_19));
  }
  {
    Var_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_34, 0) = ((MR_Box) (EntityKind_9));
  }
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 11U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (SNA_20));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[4])));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_35));
  }
  {
    SecondDeclPieces_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SecondDeclPieces_21, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[1])));
    MR_hl_field(1, SecondDeclPieces_21, 1) = ((MR_Box) (Var_33));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds_error_scalar_common_1[7])));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    FirstDeclPieces_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FirstDeclPieces_22, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds_error_scalar_common_1[5])));
    MR_hl_field(1, FirstDeclPieces_22, 1) = ((MR_Box) (Var_45));
  }
  {
    SecondDeclMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SecondDeclMsg_23, 0) = ((MR_Box) (SecondContext_18));
    MR_hl_field(0, SecondDeclMsg_23, 1) = ((MR_Box) (SecondDeclPieces_21));
  }
  {
    FirstDeclMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FirstDeclMsg_24, 0) = ((MR_Box) (FirstContext_17));
    MR_hl_field(0, FirstDeclMsg_24, 1) = ((MR_Box) (FirstDeclPieces_22));
  }
  if ((ExtraPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
    ExtraMsgs_25 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_55;

    {
      Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_55, 0) = ((MR_Box) (SecondContext_18));
      MR_hl_field(0, Var_55, 1) = ((MR_Box) (ExtraPieces_14));
    }
    {
      ExtraMsgs_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ExtraMsgs_25, 0) = ((MR_Box) (Var_55));
      MR_hl_field(1, ExtraMsgs_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (FirstDeclMsg_24));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (ExtraMsgs_25));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (SecondDeclMsg_23));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  {
    Spec_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds_error.report_multiply_defined\'/8"));
    MR_hl_field(0, Spec_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Var_60));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_30 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_28));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
  }
}

void mercury__hlds__make_hlds_error__init(void)
{
}

void mercury__hlds__make_hlds_error__init_type_tables(void)
{
}

void mercury__hlds__make_hlds_error__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds_error__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds_error.
