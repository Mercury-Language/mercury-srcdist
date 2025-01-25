/*
** Automatically generated from `hlds_error_util.m'
** by the Mercury compiler,
** version rotd-2025-01-25
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


// :- module hlds.hlds_error_util.
// :- implementation.

/*
INIT mercury__hlds__hlds_error_util__init
ENDINIT
*/

#include "hlds.hlds_error_util.mih"


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
#include "libs.indent.mih"
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
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term_context__type_ctor_info_term_context_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0;

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1;

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_should_module_qualify_0[2];

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2];

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2];

static void MR_CALL 
hlds__hlds_error_util__gather_user_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UserArities_0_3,
  MR_Word * STATE_VARIABLE_UserArities_4);

static void MR_CALL 
hlds__hlds_error_util__gather_pred_form_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredFormArities_0_3,
  MR_Word * STATE_VARIABLE_PredFormArities_4);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[15][2];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[1][9];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[1][5];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_5[2][8];




static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[15][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for type constructor"))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "typeclass method"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "instance method"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type class method implementation"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "\'")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "at"))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[0])),
    ((MR_Box) (hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_5[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__maybe__pti_maybe_1__plain_parse_tree__error_spec__type_ctor_info_color_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_color_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_error_util__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_term_context__type_ctor_info_term_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
  }
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0 = {
  (MR_String) "should_module_qualify",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1 = {
  (MR_String) "should_not_module_qualify",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

static const MR_EnumFunctorDescPtr hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0[2] = {
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_0,
  &hlds__hlds_error_util__hlds__hlds_error_util__enum_functor_desc_should_module_qualify_0_1
};

static const MR_Integer hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001)),
  ((MR_Box) (hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001)),
  (MR_String) "hlds.hlds_error_util",
  (MR_String) "should_module_qualify",
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_name_ordered_should_module_qualify_0 },
  { hlds__hlds_error_util__hlds__hlds_error_util__enum_ordinal_ordered_should_module_qualify_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__hlds_error_util__hlds__hlds_error_util__functor_number_map_should_module_qualify_0,

};

void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0(
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
hlds__hlds_error_util____Unify____should_module_qualify_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Integer MR_CALL 
hlds__hlds_error_util__project_pred_form_arity_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer A_3 = (MR_Integer) (HeadVar__1_1);

  return A_3;
}

MR_Integer MR_CALL 
hlds__hlds_error_util__project_user_arity_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Integer A_3 = (MR_Integer) (HeadVar__1_1);

  return A_3;
}

void MR_CALL 
hlds__hlds_error_util__find_user_arities_other_than_4_p_0(
  MR_Word PredTable_5,
  MR_Word PredIds_6,
  MR_Word Arity_7,
  MR_Word * OtherArities_8)
{
  MR_Word AllArities_9;
  MR_Word UserArities0_11;

  hlds__hlds_error_util__gather_user_arities_4_p_0(PredTable_5, PredIds_6, (MR_Word) ((MR_Unsigned) 0U), &UserArities0_11);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), UserArities0_11, &AllArities_9);
  mercury__list__delete_all_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), AllArities_9, ((MR_Box) (Arity_7)), OtherArities_8);
}

void MR_CALL 
hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(
  MR_Word PredTable_5,
  MR_Word PredIds_6,
  MR_Word Arity_7,
  MR_Word * OtherArities_8)
{
  MR_Word AllArities_9;
  MR_Word PredFormArities0_11;

  hlds__hlds_error_util__gather_pred_form_arities_4_p_0(PredTable_5, PredIds_6, (MR_Word) ((MR_Unsigned) 0U), &PredFormArities0_11);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), PredFormArities0_11, &AllArities_9);
  mercury__list__delete_all_3_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), AllArities_9, ((MR_Box) (Arity_7)), OtherArities_8);
}

void MR_CALL 
hlds__hlds_error_util__find_user_arities_3_p_0(
  MR_Word PredTable_4,
  MR_Word PredIds_5,
  MR_Word * UserArities_6)
{
  MR_Word UserArities0_7;

  hlds__hlds_error_util__gather_user_arities_4_p_0(PredTable_4, PredIds_5, (MR_Word) ((MR_Unsigned) 0U), &UserArities0_7);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), UserArities0_7, UserArities_6);
}

static void MR_CALL 
hlds__hlds_error_util__gather_user_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_UserArities_0_3,
  MR_Word * STATE_VARIABLE_UserArities_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_UserArities_4 = STATE_VARIABLE_UserArities_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_13;
      MR_Word UserArity_14;
      MR_Word STATE_VARIABLE_UserArities_17_17;
      MR_Box conv0_PredInfo_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_UserArities_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_1, ((MR_Box) (PredId_10)), &conv0_PredInfo_13);
      PredInfo_13 = ((MR_Word) (conv0_PredInfo_13));
      UserArity_14 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_13);
      {
        STATE_VARIABLE_UserArities_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_UserArities_17_17, 0) = ((MR_Box) (UserArity_14));
        MR_hl_field(1, STATE_VARIABLE_UserArities_17_17, 1) = ((MR_Box) (STATE_VARIABLE_UserArities_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_UserArities_0_3 = STATE_VARIABLE_UserArities_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_UserArities_0_3 = next_value_of_STATE_VARIABLE_UserArities_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__hlds_error_util__find_pred_arities_3_p_0(
  MR_Word PredTable_4,
  MR_Word PredIds_5,
  MR_Word * PredFormArities_6)
{
  MR_Word PredFormArities0_7;

  hlds__hlds_error_util__gather_pred_form_arities_4_p_0(PredTable_4, PredIds_5, (MR_Word) ((MR_Unsigned) 0U), &PredFormArities0_7);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), PredFormArities0_7, PredFormArities_6);
}

static void MR_CALL 
hlds__hlds_error_util__gather_pred_form_arities_4_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_PredFormArities_0_3,
  MR_Word * STATE_VARIABLE_PredFormArities_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredFormArities_4 = STATE_VARIABLE_PredFormArities_0_3;
    else
    {
      MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredIds_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word PredInfo_13;
      MR_Word PredFormArity_14;
      MR_Word STATE_VARIABLE_PredFormArities_17_17;
      MR_Box conv0_PredInfo_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_PredFormArities_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_1, ((MR_Box) (PredId_10)), &conv0_PredInfo_13);
      PredInfo_13 = ((MR_Word) (conv0_PredInfo_13));
      hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_13, &PredFormArity_14);
      {
        STATE_VARIABLE_PredFormArities_17_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_PredFormArities_17_17, 0) = ((MR_Box) (PredFormArity_14));
        MR_hl_field(1, STATE_VARIABLE_PredFormArities_17_17, 1) = ((MR_Box) (STATE_VARIABLE_PredFormArities_0_3));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredIds_11;
      next_value_of_STATE_VARIABLE_PredFormArities_0_3 = STATE_VARIABLE_PredFormArities_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_PredFormArities_0_3 = next_value_of_STATE_VARIABLE_PredFormArities_0_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_11;

  conv0_Pieces_11 = hlds__hlds_error_util__describe_one_call_site_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_11));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word Sites_9)
{
  MR_Word Pieces_10;
  MR_Word PiecesList_11;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_5[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_call_sites_4_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (MaybeColor_7));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (ShouldModuleQualify_8));
  }
  PiecesList_11 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_error_util_scalar_common_2[0]), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_12, Sites_9);
  Pieces_10 = parse_tree__error_spec__pieces_list_to_pieces_2_f_0((MR_String) "and", PiecesList_11);
  return Pieces_10;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_call_site_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word HeadVar__4_4)
{
  MR_Word Pieces_11;
  MR_Word PPId_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_Word ProcNamePieces_12;
  MR_String FileName_13;
  MR_Integer LineNumber_14;
  MR_String LineNumberStr_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_String Var_21;
  MR_String Var_22;

  ProcNamePieces_12 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(ModuleInfo_6, MaybeColor_7, ShouldModuleQualify_8, PPId_9);
  FileName_13 = ((MR_String) ((MR_hl_field(0, Context_10, (MR_Integer) 0))));
  LineNumber_14 = ((MR_Integer) ((MR_hl_field(0, Context_10, (MR_Integer) 1))));
  mercury__string__int_to_string_2_p_0(LineNumber_14, &LineNumberStr_15);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) ":", LineNumberStr_15);
  Var_21 = mercury__string__f_43_43_2_f_0(FileName_13, Var_22);
  {
    Var_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_20, 0) = ((MR_Box) (Var_21));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[14])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcNamePieces_12, Var_16);
  return Pieces_11;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_10;

  conv0_Pieces_10 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_10));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PPIds_9)
{
  MR_Word Pieces_10;
  MR_Word PiecesList_11;
  MR_Word Var_12;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_5[0]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_proc_names_4_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (MaybeColor_7));
    MR_hl_field(0, Var_12, 5) = ((MR_Box) (ShouldModuleQualify_8));
  }
  PiecesList_11 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_12, PPIds_9);
  Pieces_10 = parse_tree__error_spec__pieces_list_to_pieces_2_f_0((MR_String) "and", PiecesList_11);
  return Pieces_10;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_unqual_proc_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(ModuleInfo_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, PredProcId_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_qual_proc_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredProcId_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = hlds__hlds_error_util__describe_one_proc_name_4_f_0(ModuleInfo_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, PredProcId_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PredProcId_9)
{
  MR_Word Pieces_10;
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 0))));
  MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 1))));
  MR_Word PredPieces_14;
  MR_Integer ProcIdInt_15;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word PredInfo_23;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_12, &PredInfo_23);
  PredPieces_14 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(MaybeColor_7, ShouldModuleQualify_8, (MR_Word) ((MR_Unsigned) 0U), PredInfo_23);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ProcIdInt_15);
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (ProcIdInt_15));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[13])));
    MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_19));
  }
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_14, Var_16);
  return Pieces_10;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = parse_tree__prog_mode__simplify_std_from_to_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__prog_mode__simplify_std_from_to_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word Lang_9,
  MR_Word MaybeColor_10,
  MR_Word ShouldModuleQualify_11,
  MR_Word SuffixPieces_12,
  MR_Word PredProcId_13)
{
  MR_bool succeeded;
  MR_Word Pieces_14;
  MR_Word PredInfo_15;
  MR_Word ProcInfo_16;
  MR_Word PredOrFunc_17;
  MR_Word ModuleName_18;
  MR_String PredName_19;
  MR_Word ProcTable_20;
  MR_Integer NumProcs_21;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_8, PredProcId_13, &PredInfo_15, &ProcInfo_16);
  PredOrFunc_17 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_15);
  ModuleName_18 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
  PredName_19 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_15, &ProcTable_20);
  mercury__map__count_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_20, &NumProcs_21);
  succeeded = (NumProcs_21 > (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word PredFormArity_22;
    MR_Word ArgModes0_23;
    MR_Integer NumExtraArgs_24;
    MR_Word ArgModes_25;
    MR_Word StrippedArgModes_26;
    MR_Word InstVarSet_27;
    MR_String ArgModesStr_28;
    MR_String MaybeModuleNameDotStr_31;
    MR_String Descr_32;
    MR_Word Var_40;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;

    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_15, &PredFormArity_22);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_16, &ArgModes0_23);
    NumExtraArgs_24 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), PredFormArity_22, ArgModes0_23);
    mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_24, ArgModes0_23, &ArgModes_25);
    parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0((MR_Integer) 0, (MR_Integer) 1, ArgModes_25, &StrippedArgModes_26);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_16, &InstVarSet_27);
    switch (PredOrFunc_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word FuncArgModes_29;
          MR_Word FuncRetMode_30;
          MR_String Var_36;
          MR_String Var_37;
          MR_String Var_39;
          MR_Box conv0_FuncRetMode_30;

          parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StrippedArgModes_26, &FuncArgModes_29, &conv0_FuncRetMode_30);
          FuncRetMode_30 = ((MR_Word) (conv0_FuncRetMode_30));
          if ((FuncArgModes_29 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_36 = (MR_String) "";
          else
          {
            MR_Word ArgModes_56;
            MR_String ArgsStr_57;
            MR_String Var_60;

            ArgModes_56 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[1]), FuncArgModes_29);
            ArgsStr_57 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_9, InstVarSet_27, ArgModes_56);
            Var_60 = mercury__string__f_43_43_2_f_0(ArgsStr_57, (MR_String) ")");
            Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_60);
          }
          Var_39 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(Lang_9, InstVarSet_27, FuncRetMode_30);
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_39);
          ArgModesStr_28 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
        }
        break;
      case (MR_Integer) 0:
        if ((StrippedArgModes_26 == (MR_Word) ((MR_Unsigned) 0U)))
          ArgModesStr_28 = (MR_String) "";
        else
        {
          MR_Word ArgModes_63;
          MR_String ArgsStr_64;
          MR_String Var_67;

          ArgModes_63 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[2]), StrippedArgModes_26);
          ArgsStr_64 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_9, InstVarSet_27, ArgModes_63);
          Var_67 = mercury__string__f_43_43_2_f_0(ArgsStr_64, (MR_String) ")");
          ArgModesStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_67);
        }
        break;
    }
    switch (ShouldModuleQualify_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_70;

          Var_70 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_18);
          MaybeModuleNameDotStr_31 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) ".");
        }
        break;
      case (MR_Integer) 1:
        MaybeModuleNameDotStr_31 = (MR_String) "";
        break;
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (ArgModesStr_28));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[12])));
    }
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (PredName_19));
      MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MaybeModuleNameDotStr_31));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "\140"));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
    }
    mercury__string__append_list_2_p_0(Var_40, &Descr_32);
    {
      Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_50, 1) = ((MR_Box) (Descr_32));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, SuffixPieces_12);
    Pieces_14 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_10, Var_48);
  }
  else
    Pieces_14 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(MaybeColor_10, ShouldModuleQualify_11, SuffixPieces_12, PredInfo_15);
  return Pieces_14;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_12;

  conv0_Pieces_12 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_12));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word MaybeColor_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PredIds_9)
{
  MR_Word Pieces_10;
  MR_Word PiecesList_12;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_pred_names_4_f_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (ModuleInfo_6));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (MaybeColor_7));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (ShouldModuleQualify_8));
    MR_hl_field(0, Var_13, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  PiecesList_12 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_13, PredIds_9);
  Pieces_10 = parse_tree__error_spec__pieces_list_to_pieces_2_f_0((MR_String) "and", PiecesList_12);
  return Pieces_10;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word MaybeColor_8,
  MR_Word ShouldModuleQualify_9,
  MR_Word SuffixPieces_10,
  MR_Word PredId_11)
{
  MR_Word Pieces_12;
  MR_Word PredInfo_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_11, &PredInfo_13);
  Pieces_12 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(MaybeColor_8, ShouldModuleQualify_9, SuffixPieces_10, PredInfo_13);
  return Pieces_12;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_unqual_pred_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Word HeadVar__3_3;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_9);
  HeadVar__3_3 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredInfo_9);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_qual_pred_name_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word PredId_5)
{
  MR_Word HeadVar__3_3;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_5, &PredInfo_9);
  HeadVar__3_3 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0((MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredInfo_9);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(
  MR_Word MaybeColor_6,
  MR_Word ShouldModuleQualify_7,
  MR_Word SuffixPieces_8,
  MR_Word PredInfo_9)
{
  MR_bool succeeded;
  MR_Word Pieces_10;
  MR_String PredName_11;
  MR_Word ModuleName_12;
  MR_Word PredFormArity_13;
  MR_Word Markers_14;
  MR_Word Origin_15;
  MR_Word SpecialId_16;
  MR_Word TypeCtor_17;
  MR_Word Var_34;

  PredName_11 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_9);
  ModuleName_12 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_9);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_9, &PredFormArity_13);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_14);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_15);
  succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_34 = ((MR_Word) ((MR_hl_field(1, Origin_15, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_34)) == (MR_Integer) 0);
    if (succeeded)
    {
      SpecialId_16 = ((MR_Unsigned) ((MR_hl_field(0, Var_34, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_17 = ((MR_Word) ((MR_hl_field(0, Var_34, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_String Descr_18;
    MR_Word TypeSymName_19;
    MR_Integer TypeArity_20;
    MR_Word TypeSymNamePiece_21;
    MR_Word Pieces0_22;
    MR_Word Var_47;

    hlds__special_pred__special_pred_description_2_p_0(SpecialId_16, &Descr_18);
    TypeSymName_19 = ((MR_Word) ((MR_hl_field(0, TypeCtor_17, (MR_Integer) 0))));
    TypeArity_20 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_17, (MR_Integer) 1))));
    switch (ShouldModuleQualify_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          TypeSymNamePiece_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeSymNamePiece_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(3, TypeSymNamePiece_21, 1) = ((MR_Box) (TypeSymName_19));
        }
        break;
      case (MR_Integer) 1:
        {
          TypeSymNamePiece_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, TypeSymNamePiece_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, TypeSymNamePiece_21, 1) = ((MR_Box) (TypeSymName_19));
        }
        break;
    }
    succeeded = (TypeArity_20 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;

      {
        Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_35, 1) = ((MR_Box) (Descr_18));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (TypeSymNamePiece_21));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[1])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      {
        Pieces0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_22, 0) = ((MR_Box) (Var_35));
        MR_hl_field(1, Pieces0_22, 1) = ((MR_Box) (Var_36));
      }
    }
    else
    {
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_45;

      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_41, 1) = ((MR_Box) (Descr_18));
      }
      {
        Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_45, 0) = ((MR_Box) (TypeSymNamePiece_21));
        MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[2])));
        MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
      }
      {
        Pieces0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_22, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, Pieces0_22, 1) = ((MR_Box) (Var_42));
      }
    }
    Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_22, SuffixPieces_8);
    Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_47);
  }
  else
  {
    MR_Word PFNA_24;
    MR_Word Var_48;

    succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_48 = ((MR_Word) ((MR_hl_field(0, Origin_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 2);
      if (succeeded)
        PFNA_24 = ((MR_Word) ((MR_hl_field(2, Var_48, (MR_Integer) 1))));
    }
    if (succeeded)
    {
      MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(0, PFNA_24, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(0, PFNA_24, (MR_Integer) 1))));
      MR_Word UserArity_27 = ((MR_Word) ((MR_hl_field(0, PFNA_24, (MR_Integer) 2))));
      MR_Integer UserArityInt_28 = (MR_Integer) (UserArity_27);
      MR_Word SNA_29;
      MR_Word SNAPiece_30;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;

      {
        SNA_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, SNA_29, 0) = ((MR_Box) (SymName_26));
        MR_hl_field(0, SNA_29, 1) = ((MR_Box) (UserArityInt_28));
      }
      switch (ShouldModuleQualify_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            SNAPiece_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SNAPiece_30, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, SNAPiece_30, 1) = ((MR_Box) (SNA_29));
          }
          break;
        case (MR_Integer) 1:
          {
            SNAPiece_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, SNAPiece_30, 0) = ((MR_Box) ((MR_Unsigned) 12U));
            MR_hl_field(3, SNAPiece_30, 1) = ((MR_Box) (SNA_29));
          }
          break;
      }
      {
        Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_53, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[3])));
        MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_57, 0) = ((MR_Box) (SNAPiece_30));
        MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, SuffixPieces_8);
      Var_55 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_56);
      Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_55);
    }
    else
    {
      MR_Word PFNA_124;
      MR_Word Var_59;

      succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_59 = ((MR_Word) ((MR_hl_field(0, Origin_15, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_59, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          PFNA_124 = ((MR_Word) ((MR_hl_field(3, Var_59, (MR_Integer) 1))));
      }
      if (succeeded)
      {
        MR_Word Var_60;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word PredOrFunc_98 = ((MR_Unsigned) ((MR_hl_field(0, PFNA_124, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SymName_99 = ((MR_Word) ((MR_hl_field(0, PFNA_124, (MR_Integer) 1))));
        MR_Word UserArity_100 = ((MR_Word) ((MR_hl_field(0, PFNA_124, (MR_Integer) 2))));
        MR_Integer UserArityInt_101 = (MR_Integer) (UserArity_100);
        MR_Word SNA_102;
        MR_Word SNAPiece_103;

        {
          SNA_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_102, 0) = ((MR_Box) (SymName_99));
          MR_hl_field(0, SNA_102, 1) = ((MR_Box) (UserArityInt_101));
        }
        switch (ShouldModuleQualify_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              SNAPiece_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SNAPiece_103, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, SNAPiece_103, 1) = ((MR_Box) (SNA_102));
            }
            break;
          case (MR_Integer) 1:
            {
              SNAPiece_103 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SNAPiece_103, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, SNAPiece_103, 1) = ((MR_Box) (SNA_102));
            }
            break;
        }
        {
          Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_64, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_98));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[4])));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
        }
        {
          Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_68, 0) = ((MR_Box) (SNAPiece_103));
          MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, SuffixPieces_8);
        Var_66 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_67);
        Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_66);
      }
      else
      {
        succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_14, (MR_Integer) 12);
        if (succeeded)
        {
          MR_Word Pieces0_104;

          Pieces0_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[6])), SuffixPieces_8);
          Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Pieces0_104);
        }
        else
        {
          MR_Word PromiseType_32;

          succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_9, &PromiseType_32);
          if (succeeded)
          {
            MR_Word Var_75;
            MR_Word Var_76;
            MR_String Var_77;
            MR_Word Pieces0_105;

            Var_77 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_32);
            {
              Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_76, 1) = ((MR_Box) (Var_77));
            }
            {
              Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
              MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[8])));
            }
            Pieces0_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, SuffixPieces_8);
            Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Pieces0_105);
          }
          else
          {
            MR_Word PrefixPieces_33;
            MR_Word Var_93;
            MR_Word Var_94;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word PredOrFunc_106;
            MR_Word SymName_107;
            MR_Integer UserArityInt_108;
            MR_Word SNA_109;
            MR_Word SNAPiece_110;

            PredOrFunc_106 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
            succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_14, (MR_Integer) 11);
            if (succeeded)
            {
              MR_Word Var_85;
              MR_Word Var_86;

              {
                Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(3, Var_86, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_106));
              }
              {
                Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
                MR_hl_field(1, Var_85, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[11])));
              }
              {
                PrefixPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PrefixPieces_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[9])));
                MR_hl_field(1, PrefixPieces_33, 1) = ((MR_Box) (Var_85));
              }
            }
            else
            {
              MR_Word Var_91;

              {
                Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(3, Var_91, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_106));
              }
              {
                PrefixPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PrefixPieces_33, 0) = ((MR_Box) (Var_91));
                MR_hl_field(1, PrefixPieces_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            {
              SymName_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SymName_107, 0) = ((MR_Box) (ModuleName_12));
              MR_hl_field(1, SymName_107, 1) = ((MR_Box) (PredName_11));
            }
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_106, &Var_93, PredFormArity_13);
            UserArityInt_108 = (MR_Integer) (Var_93);
            {
              SNA_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SNA_109, 0) = ((MR_Box) (SymName_107));
              MR_hl_field(0, SNA_109, 1) = ((MR_Box) (UserArityInt_108));
            }
            switch (ShouldModuleQualify_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SNAPiece_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SNAPiece_110, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                  MR_hl_field(3, SNAPiece_110, 1) = ((MR_Box) (SNA_109));
                }
                break;
              case (MR_Integer) 1:
                {
                  SNAPiece_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SNAPiece_110, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(3, SNAPiece_110, 1) = ((MR_Box) (SNA_109));
                }
                break;
            }
            {
              Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_96, 0) = ((MR_Box) (SNAPiece_110));
              MR_hl_field(1, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, SuffixPieces_8);
            Var_94 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_95);
            Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_33, Var_94);
          }
        }
      }
    }
  }
  return Pieces_10;
}

static MR_bool MR_CALL 
hlds__hlds_error_util____Unify____should_module_qualify_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_error_util____Unify____should_module_qualify_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__hlds_error_util____Compare____should_module_qualify_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__hlds_error_util____Compare____should_module_qualify_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__hlds_error_util__init(void)
{
}

void mercury__hlds__hlds_error_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0);
}

void mercury__hlds__hlds_error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_error_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_error_util.
