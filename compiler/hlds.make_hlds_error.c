/*
** Automatically generated from `make_hlds_error.m'
** by the Mercury compiler,
** version 2018-03-07
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
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_pred_decl.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0;

static MR_Word MR_CALL 
hlds__make_hlds_error__wrap_int_fixed_1_f_0(
  MR_Integer N_3);

static MR_Word MR_CALL 
hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5);

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_6_f_0(
  MR_Word ModeList_8,
  MR_Word VarSet_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ModuleInfo_12,
  MR_Word Context_13);

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

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[49][2];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[2][5];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][3];

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[1][6];




static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_1[49][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[1])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "func"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in module interface."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[1])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ".)"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[1])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "are the following:"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is the previous definition of"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does exist with"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "specifies non-existent mode."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However, a"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that name"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does exist with arity"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "However,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "s"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of that name do exist with arities"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: mode annotation specifies undeclared mode"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(There are no declared modes for this"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The declared modes for this"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 18)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) ":- mode"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_2[0])),
    ((MR_Box) (hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds_error_scalar_common_2[1])),
    ((MR_Box) (hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds_error_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds_error__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0
  }
};

static MR_Word MR_CALL 
hlds__make_hlds_error__wrap_int_fixed_1_f_0(
  MR_Integer N_3)
{
  {
    MR_Word HeadVar__2_2;

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), HeadVar__2_2, 1) = ((MR_Box) (N_3));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(
  MR_Word PredInfo_4,
  MR_Integer ProcId_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_String Var_10;

    Var_10 = check_hlds__mode_errors__mode_decl_to_string_2_f_0(ProcId_5, PredInfo_4);
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (Var_10));
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[48])));
    }
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[46])));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (Var_8));
    }
    return HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__make_hlds_error__mode_decl_for_pred_info_to_pieces_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds_error__report_undeclared_mode_error_6_f_0(
  MR_Word ModeList_8,
  MR_Word VarSet_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ModuleInfo_12,
  MR_Word Context_13)
{
  {
    MR_Word Spec_14;
    MR_Word TypeCtorInfo_95_95;
    MR_Word PredIdPieces_15;
    MR_Word StrippedModeList_16;
    MR_Word PredOrFunc_17;
    MR_String Name_18;
    MR_String SubDeclStr_20;
    MR_Word MainPieces_21;
    MR_Word ProcIds_22;
    MR_Word VerbosePieces_23;
    MR_Word Msg_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_91;

    PredIdPieces_15 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_12, (MR_Integer) 1, PredId_10);
    parse_tree__prog_mode__strip_builtin_qualifiers_from_mode_list_2_p_0(ModeList_8, &StrippedModeList_16);
    PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
    Name_18 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
    Var_29 = mercury__varset__coerce_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, VarSet_9);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (Name_18));
    }
    SubDeclStr_20 = parse_tree__parse_tree_out_pred_decl__mercury_mode_subdecl_to_string_6_f_0((MR_Integer) 1, PredOrFunc_17, Var_29, Var_30, StrippedModeList_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    TypeCtorInfo_95_95 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (SubDeclStr_20));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[5])));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[40])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    Var_35 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_95_95, PredIdPieces_15, Var_36);
    MainPieces_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_95_95, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[39]), Var_35);
    ProcIds_22 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_11);
    if ((ProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_75;
      MR_Word Var_76;

      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (PredOrFunc_17));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[19])));
      }
      {
        VerbosePieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), VerbosePieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[42])));
        MR_hl_field(MR_mktag(1), VerbosePieces_23, 1) = ((MR_Box) (Var_75));
      }
    }
    else
    {
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;

      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
        MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (PredOrFunc_17));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[23])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[43])));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&hlds__make_hlds_error_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (hlds__make_hlds_error__report_undeclared_mode_error_6_f_0_1));
        MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (PredInfo_11));
      }
      Var_66 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__make_hlds_error_scalar_common_1[0], Var_67, ProcIds_22);
      Var_65 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(Var_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
      Var_64 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_95_95, Var_65, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[45]));
      VerbosePieces_23 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_95_95, Var_52, Var_64);
    }
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (MainPieces_21));
    }
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_86, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(2), Var_86, 1) = ((MR_Box) (VerbosePieces_23));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_85));
    }
    {
      Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_26, 0) = ((MR_Box) (Context_13));
      MR_hl_field(MR_mktag(0), Msg_26, 1) = ((MR_Box) (Var_83));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Msg_26));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_91));
    }
    return Spec_14;
  }
}

void MR_CALL 
hlds__make_hlds_error__report_if_pragma_is_wrongly_in_interface_4_p_0(
  MR_Word ItemMercuryStatus_5,
  MR_Word ItemPragmaInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_5)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Pragma_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragmaInfo_6, (MR_Integer) 0)));
    MR_Word MaybeAttrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragmaInfo_6, (MR_Integer) 1)));
    MR_Word Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemPragmaInfo_6, (MR_Integer) 2)));
    MR_Integer _SeqNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ItemPragmaInfo_6, (MR_Integer) 3)));
    MR_Word ItemExport_12;
    MR_Word Var_16;

    if (succeeded)
    {
      ItemExport_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ItemMercuryStatus_5, (MR_Integer) 0)));
      succeeded = (ItemExport_12 == (MR_Integer) 2);
      if (succeeded)
      {
        Var_16 = parse_tree__prog_item__pragma_allowed_in_interface_1_f_0(Pragma_8);
        succeeded = (Var_16 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (MaybeAttrs_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word ContextPieces_13;

      ContextPieces_13 = parse_tree__prog_item__pragma_context_pieces_1_f_0(Pragma_8);
      hlds__make_hlds_error__error_is_exported_4_p_0(Context_10, ContextPieces_13, STATE_VARIABLE_Specs_0_14, STATE_VARIABLE_Specs_15);
    }
    else
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
  }
}

void MR_CALL 
hlds__make_hlds_error__error_is_exported_4_p_0(
  MR_Word Context_5,
  MR_Word ItemPieces_6,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  {
    MR_Word TypeCtorInfo_32_32 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word Pieces_8;
    MR_Word Msg_9;
    MR_Word Spec_10;
    MR_Word Var_17;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_29;

    Var_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_32_32, ItemPieces_6, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[17]));
    Pieces_8 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_32_32, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[37]), Var_17);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Pieces_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_9, 0) = ((MR_Box) (Context_5));
      MR_hl_field(MR_mktag(0), Msg_9, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Msg_9));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_10, 2) = ((MR_Box) (Var_29));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_11));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__make_hlds_error__wrap_int_fixed_1_f_0(((MR_Integer) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds_error__maybe_report_undefined_pred_error_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word Name_12,
  MR_Integer Arity_13,
  MR_Word PredOrFunc_14,
  MR_Word Status_15,
  MR_Word IsClassMethod_16,
  MR_Word Context_17,
  MR_Word DescPieces_18,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word DefinedInThisModule_20;
    MR_Word IsExported_21;
    MR_Word Globals_22;
    MR_Word InferTypes_23;

    DefinedInThisModule_20 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_15);
    IsExported_21 = hlds__status__pred_status_is_exported_1_f_0(Status_15);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 185, &InferTypes_23);
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
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
    else
    {
      MR_Word TypeCtorInfo_123_123;
      MR_Word TypeCtorInfo_124_124;
      MR_String PredOrFuncStr_24;
      MR_Word MainPieces_25;
      MR_Word MainMsg_26;
      MR_Word PredicateTable_27;
      MR_Word AllArityPredIds_28;
      MR_Word PorFArities_29;
      MR_Word OtherArities_30;
      MR_Word OtherAritiesList_31;
      MR_String FullPredOrFuncStr_32;
      MR_Word Spec_33;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_65;
      MR_Word Var_66;

      PredOrFuncStr_24 = parse_tree__prog_out__pred_or_func_to_str_1_f_0(PredOrFunc_14);
      TypeCtorInfo_123_123 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[24])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (DescPieces_18));
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (PredOrFunc_14));
        MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) (Name_12));
        MR_hl_field(MR_mktag(0), Var_51, 2) = ((MR_Box) (Arity_13));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), Var_50, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
        MR_hl_field(MR_mktag(3), Var_58, 1) = ((MR_Box) (PredOrFuncStr_24));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[7])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[30])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[26])));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      MainPieces_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_123_123, Var_43, Var_46);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (MainPieces_25));
      }
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MainMsg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MainMsg_26, 0) = ((MR_Box) (Context_17));
        MR_hl_field(MR_mktag(0), MainMsg_26, 1) = ((MR_Box) (Var_65));
      }
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(ModuleInfo_11, &PredicateTable_27);
      hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredicateTable_27, (MR_Integer) 0, PredOrFunc_14, Name_12, &AllArityPredIds_28);
      hlds__make_hlds_error__gather_porf_arities_4_p_0(ModuleInfo_11, AllArityPredIds_28, PredOrFunc_14, &PorFArities_29);
      TypeCtorInfo_124_124 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
      mercury__set__delete_3_p_0(TypeCtorInfo_124_124, ((MR_Box) (Arity_13)), PorFArities_29, &OtherArities_30);
      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_124_124, OtherArities_30, &OtherAritiesList_31);
      FullPredOrFuncStr_32 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(PredOrFunc_14);
      if ((OtherAritiesList_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word Var_120;

        {
          Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (MainMsg_26));
          MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_120));
        }
      }
      else
      {
        MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), OtherAritiesList_31, (MR_Integer) 1)));
        MR_Integer Var_138 = ((MR_Integer) (MR_hl_field(MR_mktag(1), OtherAritiesList_31, (MR_Integer) 0)));

        if ((Var_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word OtherAritiesPieces_35;
          MR_Word OtherAritiesMsg_39;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_99;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_110;
          MR_Word Var_111;
          MR_Word Var_115;
          MR_Word Var_116;

          {
            Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) (FullPredOrFuncStr_32));
          }
          {
            Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Var_103, 1) = ((MR_Box) (Var_138));
          }
          {
            Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[5])));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[33])));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_102));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[32])));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
          }
          {
            Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_96));
          }
          {
            OtherAritiesPieces_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OtherAritiesPieces_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[31])));
            MR_hl_field(MR_mktag(1), OtherAritiesPieces_35, 1) = ((MR_Box) (Var_94));
          }
          {
            Var_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_111, 0) = ((MR_Box) (OtherAritiesPieces_35));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (Var_111));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            OtherAritiesMsg_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_39, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_39, 1) = ((MR_Box) (Var_110));
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (OtherAritiesMsg_39));
            MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (MainMsg_26));
            MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
          }
          {
            Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_115));
          }
        }
        else
        {
          MR_Word Var_70;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word Var_83;
          MR_Word OtherAritiesPieces_127;
          MR_Word OtherAritiesMsg_128;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_134;
          MR_Word Var_135;

          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
            MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (FullPredOrFuncStr_32));
          }
          Var_83 = mercury__list__map_2_f_0(TypeCtorInfo_124_124, TypeCtorInfo_123_123, (MR_Word) &hlds__make_hlds_error_scalar_common_3[1], OtherAritiesList_31);
          Var_81 = parse_tree__error_util__component_list_to_pieces_2_f_0((MR_String) "and", Var_83);
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[36])));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
          }
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[35])));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
            MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (Var_75));
          }
          {
            Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[34])));
            MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
          }
          OtherAritiesPieces_127 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_123_123, Var_70, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[5]));
          {
            Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_130, 0) = ((MR_Box) (OtherAritiesPieces_127));
          }
          {
            Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (Var_130));
            MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            OtherAritiesMsg_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_128, 0) = ((MR_Box) (Context_17));
            MR_hl_field(MR_mktag(0), OtherAritiesMsg_128, 1) = ((MR_Box) (Var_129));
          }
          {
            Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (OtherAritiesMsg_128));
            MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (MainMsg_26));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
          }
          {
            Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), Spec_33, 2) = ((MR_Box) (Var_134));
          }
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_41 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
      }
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
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__4_4 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    else
    {
      MR_Word PredId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word PredIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word PredInfo_12;
      MR_Word PorF_13;
      MR_Word STATE_VARIABLE_PorFArities_17_17;

      hlds__make_hlds_error__gather_porf_arities_4_p_0(HeadVar__1_1, PredIds_9, HeadVar__3_3, &STATE_VARIABLE_PorFArities_17_17);
      hlds__hlds_module__module_info_pred_info_3_p_0(HeadVar__1_1, PredId_8, &PredInfo_12);
      PorF_13 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_12);
      succeeded = (PorF_13 == HeadVar__3_3);
      if (succeeded)
      {
        MR_Integer OrigArity_14;
        MR_Integer Arity_15;

        hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_12, &OrigArity_14);
        parse_tree__prog_util__adjust_func_arity_3_p_0(PorF_13, OrigArity_14, &Arity_15);
        mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (Arity_15)), STATE_VARIABLE_PorFArities_17_17, HeadVar__4_4);
      }
      else
        *HeadVar__4_4 = STATE_VARIABLE_PorFArities_17_17;
    }
  }
}

void MR_CALL 
hlds__make_hlds_error__report_undefined_mode_error_6_p_0(
  MR_Word Name_7,
  MR_Integer Arity_8,
  MR_Word Context_9,
  MR_Word DescPieces_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_35;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (DescPieces_10));
    }
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (Name_7));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (Arity_8));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_24, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[29])));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[26])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Var_17, Var_20);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    mercury__string__int_to_string_2_p_0(((MR_Integer) wrapper_arg_1), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

void MR_CALL 
hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(
  MR_Word Name_8,
  MR_Integer Arity_9,
  MR_Word OtherArities_10,
  MR_Word Context_11,
  MR_Word DescPieces_12,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word TypeCtorInfo_79_79 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word MainPieces_14;
    MR_Word OtherArityPieces_15;
    MR_Word Msg_19;
    MR_Word Spec_20;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_76;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (DescPieces_12));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Arity_9));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[15])));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[26])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    MainPieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, Var_23, Var_26);
    if ((OtherArities_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      OtherArityPieces_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtorInfo_83_83 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      MR_Word OtherArityStrs_18;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_String Var_58;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Box conv1_Var_58;

      mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, TypeCtorInfo_83_83, (MR_Word) &hlds__make_hlds_error_scalar_common_3[0], OtherArities_10, &OtherArityStrs_18);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Name_8));
      }
      conv1_Var_58 = parse_tree__error_util__choose_number_3_f_0(TypeCtorInfo_83_83, TypeCtorInfo_83_83, OtherArityStrs_18, ((MR_Box) ((MR_String) "arity")), ((MR_Box) ((MR_String) "arities")));
      Var_58 = ((MR_String) conv1_Var_58);
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[27])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_53));
      }
      Var_63 = parse_tree__error_util__list_to_pieces_1_f_0(OtherArityStrs_18);
      Var_62 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, Var_63, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[5]));
      OtherArityPieces_15 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, Var_51, Var_62);
    }
    Var_72 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_79_79, MainPieces_14, OtherArityPieces_15);
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (Var_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_19, 0) = ((MR_Box) (Context_11));
      MR_hl_field(MR_mktag(0), Msg_19, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_19));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_20, 2) = ((MR_Box) (Var_76));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_22 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_21));
    }
  }
}

void MR_CALL 
hlds__make_hlds_error__report_multiple_def_error_8_p_0(
  MR_Word Name_9,
  MR_Integer Arity_10,
  MR_String DefType_11,
  MR_Word Context_12,
  MR_Word OrigContext_13,
  MR_Word ExtraPieces_14,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word Pieces1_16;
    MR_Word Pieces2_17;
    MR_Word Msg1_18;
    MR_Word Msg2_19;
    MR_Word ExtraMsgs_20;
    MR_Word Spec_23;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;

    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_29, 0) = ((MR_Box) (DefType_11));
    }
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (Arity_10));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[3])));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      Pieces1_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[24])));
      MR_hl_field(MR_mktag(1), Pieces1_16, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds_error_scalar_common_1[5])));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Pieces2_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces2_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds_error_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Pieces2_17, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Pieces1_16));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg1_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg1_18, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), Msg1_18, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (OrigContext_13));
    }
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Pieces2_17));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg2_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Msg2_19, 0) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(1), Msg2_19, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Msg2_19, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), Msg2_19, 3) = ((MR_Box) (Var_58));
    }
    if ((ExtraPieces_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ExtraMsgs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;

      {
        Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (ExtraPieces_14));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (Var_62));
      }
      {
        ExtraMsgs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ExtraMsgs_20, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), ExtraMsgs_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Msg2_19));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Msg1_18));
      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
    }
    Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0, Var_69, ExtraMsgs_20);
    {
      Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_23, 2) = ((MR_Box) (Var_68));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_25 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
    }
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
