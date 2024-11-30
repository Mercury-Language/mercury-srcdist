/*
** Automatically generated from `hlds_error_util.m'
** by the Mercury compiler,
** version rotd-2024-11-30
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
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
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
hlds__hlds_error_util__find_user_arities_set_3_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__hlds_error_util__find_pred_arities_set_3_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_4_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0_1(
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


static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[14][2];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[1][9];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_5[2][8];




static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[14][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  13 */
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
    ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[1][9] = {
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

void MR_CALL 
hlds__hlds_error_util__maybe_write_out_errors_7_p_0(
  MR_Word Stream_8,
  MR_Word Verbose_9,
  MR_Word Globals_10,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  switch (Verbose_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_14 = STATE_VARIABLE_Specs_0_13;
      break;
    case (MR_Integer) 1:
      {
        parse_tree__write_error_spec__write_error_specs_5_p_0(Stream_8, Globals_10, STATE_VARIABLE_Specs_0_13);
        *STATE_VARIABLE_Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

void MR_CALL 
hlds__hlds_error_util__definitely_write_out_errors_5_p_0(
  MR_Word Stream_6,
  MR_Word Globals_7,
  MR_Word Specs_8)
{
  parse_tree__write_error_spec__write_error_specs_5_p_0(Stream_6, Globals_7, Specs_8);
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
  MR_Word AritiesSet_9;
  MR_Word OtherAritiesSet_10;

  hlds__hlds_error_util__find_user_arities_set_3_p_0(PredTable_5, PredIds_6, &AritiesSet_9);
  mercury__set__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), ((MR_Box) (Arity_7)), AritiesSet_9, &OtherAritiesSet_10);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), OtherAritiesSet_10, OtherArities_8);
}

void MR_CALL 
hlds__hlds_error_util__find_pred_arities_other_than_4_p_0(
  MR_Word PredTable_5,
  MR_Word PredIds_6,
  MR_Word Arity_7,
  MR_Word * OtherArities_8)
{
  MR_Word AritiesSet_9;
  MR_Word OtherAritiesSet_10;

  hlds__hlds_error_util__find_pred_arities_set_3_p_0(PredTable_5, PredIds_6, &AritiesSet_9);
  mercury__set__delete_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), ((MR_Box) (Arity_7)), AritiesSet_9, &OtherAritiesSet_10);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), OtherAritiesSet_10, OtherArities_8);
}

void MR_CALL 
hlds__hlds_error_util__find_user_arities_3_p_0(
  MR_Word PredTable_4,
  MR_Word PredIds_5,
  MR_Word * Arities_6)
{
  MR_Word AritiesSet_7;

  hlds__hlds_error_util__find_user_arities_set_3_p_0(PredTable_4, PredIds_5, &AritiesSet_7);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), AritiesSet_7, Arities_6);
}

static void MR_CALL 
hlds__hlds_error_util__find_user_arities_set_3_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0));
  else
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredIds_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word AritiesSet0_9;
    MR_Word PredInfo_10;
    MR_Word PredOrFunc_11;
    MR_Word PredFormArity_12;
    MR_Word UserArity_13;
    MR_Box conv0_PredInfo_10;

    hlds__hlds_error_util__find_user_arities_set_3_p_0(PredTable_1, PredIds_7, &AritiesSet0_9);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_1, ((MR_Box) (PredId_6)), &conv0_PredInfo_10);
    PredInfo_10 = ((MR_Word) (conv0_PredInfo_10));
    PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_10);
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_10, &PredFormArity_12);
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_11, &UserArity_13, PredFormArity_12);
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), ((MR_Box) (UserArity_13)), AritiesSet0_9, HeadVar__3_3);
  }
}

void MR_CALL 
hlds__hlds_error_util__find_pred_arities_3_p_0(
  MR_Word PredTable_4,
  MR_Word PredIds_5,
  MR_Word * Arities_6)
{
  MR_Word AritiesSet_7;

  hlds__hlds_error_util__find_pred_arities_set_3_p_0(PredTable_4, PredIds_5, &AritiesSet_7);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), AritiesSet_7, Arities_6);
}

static void MR_CALL 
hlds__hlds_error_util__find_pred_arities_set_3_p_0(
  MR_Word PredTable_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0));
  else
  {
    MR_Word PredId_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PredIds_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word AritiesSet0_9;
    MR_Word PredInfo_10;
    MR_Word PredFormArity_11;
    MR_Box conv0_PredInfo_10;

    hlds__hlds_error_util__find_pred_arities_set_3_p_0(PredTable_1, PredIds_7, &AritiesSet0_9);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_1, ((MR_Box) (PredId_6)), &conv0_PredInfo_10);
    PredInfo_10 = ((MR_Word) (conv0_PredInfo_10));
    hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_10, &PredFormArity_11);
    mercury__set__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), ((MR_Box) (PredFormArity_11)), AritiesSet0_9, HeadVar__3_3);
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
  FileName_13 = mercury__term_context__context_file_1_f_0(Context_10);
  LineNumber_14 = mercury__term_context__context_line_1_f_0(Context_10);
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
    MR_hl_field(1, Var_16, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[13])));
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
hlds__hlds_error_util__describe_one_proc_name_mode_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word Lang_9,
  MR_Word MaybeColor_10,
  MR_Word ShouldModuleQualify_11,
  MR_Word SuffixPieces_12,
  MR_Word PredProcId_13)
{
  MR_Word Pieces_14;
  MR_Word ProcInfo_16;
  MR_Word ArgModes_17;
  MR_Word InstVarSet_18;
  MR_Word PredId_19;
  MR_Word Var_15;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_8, PredProcId_13, &Var_15, &ProcInfo_16);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_16, &ArgModes_17);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_16, &InstVarSet_18);
  PredId_19 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, (MR_Integer) 0))));
  Pieces_14 = hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0(ModuleInfo_8, Lang_9, InstVarSet_18, MaybeColor_10, ShouldModuleQualify_11, SuffixPieces_12, PredId_19, ArgModes_17);
  return Pieces_14;
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
  MR_String ProcIdStr_16;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word PredInfo_24;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_6, PredId_12, &PredInfo_24);
  PredPieces_14 = hlds__hlds_error_util__describe_one_pred_info_name_4_f_0(MaybeColor_7, ShouldModuleQualify_8, (MR_Word) ((MR_Unsigned) 0U), PredInfo_24);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_13, &ProcIdInt_15);
  mercury__string__int_to_string_2_p_0(ProcIdInt_15, &ProcIdStr_16);
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (ProcIdStr_16));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[12])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
  }
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_14, Var_17);
  return Pieces_10;
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
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[0]));
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

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0_2(
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
hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0_1(
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
hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word InstVarSet_12,
  MR_Word MaybeColor_13,
  MR_Word ShouldModuleQualify_14,
  MR_Word SuffixPieces_15,
  MR_Word PredId_16,
  MR_Word ArgModes0_17)
{
  MR_Word Pieces_18;
  MR_Word PredInfo_19;
  MR_Word ModuleName_20;
  MR_String PredName_21;
  MR_Word PredFormArity_22;
  MR_Integer NumExtraArgs_23;
  MR_Word ArgModes_24;
  MR_Word StrippedArgModes_25;
  MR_Word PredOrFunc_26;
  MR_String ArgModesPart_27;
  MR_String Descr_30;
  MR_Word Var_37;
  MR_Word Var_39;
  MR_String Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_16, &PredInfo_19);
  ModuleName_20 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_19);
  PredName_21 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_19);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_19, &PredFormArity_22);
  NumExtraArgs_23 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), PredFormArity_22, ArgModes0_17);
  mercury__list__det_drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_23, ArgModes0_17, &ArgModes_24);
  parse_tree__prog_mode__strip_module_names_from_mode_list_4_p_0((MR_Integer) 0, (MR_Integer) 1, ArgModes_24, &StrippedArgModes_25);
  PredOrFunc_26 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_19);
  switch (PredOrFunc_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_28;
        MR_Word FuncRetMode_29;
        MR_String Var_33;
        MR_String Var_34;
        MR_String Var_36;
        MR_Box conv0_FuncRetMode_29;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StrippedArgModes_25, &FuncArgModes_28, &conv0_FuncRetMode_29);
        FuncRetMode_29 = ((MR_Word) (conv0_FuncRetMode_29));
        if ((FuncArgModes_28 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_33 = (MR_String) "";
        else
        {
          MR_Word ArgModes_52;
          MR_String ArgsStr_53;
          MR_String Var_56;

          ArgModes_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[1]), FuncArgModes_28);
          ArgsStr_53 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_11, InstVarSet_12, ArgModes_52);
          Var_56 = mercury__string__f_43_43_2_f_0(ArgsStr_53, (MR_String) ")");
          Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_56);
        }
        Var_36 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(Lang_11, InstVarSet_12, FuncRetMode_29);
        Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_36);
        ArgModesPart_27 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
      }
      break;
    case (MR_Integer) 0:
      if ((StrippedArgModes_25 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgModesPart_27 = (MR_String) "";
      else
      {
        MR_Word ArgModes_59;
        MR_String ArgsStr_60;
        MR_String Var_63;

        ArgModes_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[2]), StrippedArgModes_25);
        ArgsStr_60 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_11, InstVarSet_12, ArgModes_59);
        Var_63 = mercury__string__f_43_43_2_f_0(ArgsStr_60, (MR_String) ")");
        ArgModesPart_27 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_63);
      }
      break;
  }
  switch (ShouldModuleQualify_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_66;

        Var_66 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_20);
        Var_40 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) ".");
      }
      break;
    case (MR_Integer) 1:
      Var_40 = (MR_String) "";
      break;
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (ArgModesPart_27));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "\'"));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (PredName_21));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) ((MR_String) "\140"));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
  }
  mercury__string__append_list_2_p_0(Var_37, &Descr_30);
  {
    Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_48, 1) = ((MR_Box) (Descr_30));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, SuffixPieces_15);
  Pieces_18 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_13, Var_46);
  return Pieces_18;
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
    MR_Word TypeSymName0_19;
    MR_Integer TypeArity_20;
    MR_Word TypeSymName_21;
    MR_Word Pieces0_22;
    MR_Word Var_50;

    hlds__special_pred__special_pred_description_2_p_0(SpecialId_16, &Descr_18);
    TypeSymName0_19 = ((MR_Word) ((MR_hl_field(0, TypeCtor_17, (MR_Integer) 0))));
    TypeArity_20 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_17, (MR_Integer) 1))));
    switch (ShouldModuleQualify_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeSymName_21 = TypeSymName0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_35;

          Var_35 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName0_19);
          {
            TypeSymName_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeSymName_21, 0) = ((MR_Box) (Var_35));
          }
        }
        break;
    }
    succeeded = (TypeArity_20 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_41;

      {
        Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_36, 1) = ((MR_Box) (Descr_18));
      }
      {
        Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_41, 1) = ((MR_Box) (TypeSymName_21));
      }
      {
        Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[1])));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Pieces0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_22, 0) = ((MR_Box) (Var_36));
        MR_hl_field(1, Pieces0_22, 1) = ((MR_Box) (Var_37));
      }
    }
    else
    {
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_48;

      {
        Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_43, 1) = ((MR_Box) (Descr_18));
      }
      {
        Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_48, 1) = ((MR_Box) (TypeSymName_21));
      }
      {
        Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[2])));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
      }
      {
        Pieces0_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces0_22, 0) = ((MR_Box) (Var_43));
        MR_hl_field(1, Pieces0_22, 1) = ((MR_Box) (Var_44));
      }
    }
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces0_22, SuffixPieces_8);
    Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_50);
  }
  else
  {
    MR_Word PFNA_24;
    MR_Word Var_51;

    succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_51 = ((MR_Word) ((MR_hl_field(0, Origin_15, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 2);
      if (succeeded)
        PFNA_24 = ((MR_Word) ((MR_hl_field(2, Var_51, (MR_Integer) 1))));
    }
    if (succeeded)
    {
      MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(0, PFNA_24, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SymName_26 = ((MR_Word) ((MR_hl_field(0, PFNA_24, (MR_Integer) 1))));
      MR_Word UserArity_27 = ((MR_Word) ((MR_hl_field(0, PFNA_24, (MR_Integer) 2))));
      MR_Integer UserArityInt_28 = (MR_Integer) (UserArity_27);
      MR_Word SNA_29;
      MR_Word SNAPiece_30;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word Var_60;

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
        Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_56, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
      }
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[3])));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_60, 0) = ((MR_Box) (SNAPiece_30));
        MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, SuffixPieces_8);
      Var_58 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_59);
      Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_58);
    }
    else
    {
      MR_Word PFNA_127;
      MR_Word Var_62;

      succeeded = ((MR_tag((MR_Word) Origin_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        Var_62 = ((MR_Word) ((MR_hl_field(0, Origin_15, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_62)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_62, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
          PFNA_127 = ((MR_Word) ((MR_hl_field(3, Var_62, (MR_Integer) 1))));
      }
      if (succeeded)
      {
        MR_Word Var_63;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word PredOrFunc_101 = ((MR_Unsigned) ((MR_hl_field(0, PFNA_127, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SymName_102 = ((MR_Word) ((MR_hl_field(0, PFNA_127, (MR_Integer) 1))));
        MR_Word UserArity_103 = ((MR_Word) ((MR_hl_field(0, PFNA_127, (MR_Integer) 2))));
        MR_Integer UserArityInt_104 = (MR_Integer) (UserArity_103);
        MR_Word SNA_105;
        MR_Word SNAPiece_106;

        {
          SNA_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SNA_105, 0) = ((MR_Box) (SymName_102));
          MR_hl_field(0, SNA_105, 1) = ((MR_Box) (UserArityInt_104));
        }
        switch (ShouldModuleQualify_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              SNAPiece_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SNAPiece_106, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, SNAPiece_106, 1) = ((MR_Box) (SNA_105));
            }
            break;
          case (MR_Integer) 1:
            {
              SNAPiece_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, SNAPiece_106, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, SNAPiece_106, 1) = ((MR_Box) (SNA_105));
            }
            break;
        }
        {
          Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_67, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_101));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[4])));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (SNAPiece_106));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, SuffixPieces_8);
        Var_69 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_70);
        Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_69);
      }
      else
      {
        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_14, (MR_Integer) 12);
        if (succeeded)
        {
          MR_Word Pieces0_107;

          Pieces0_107 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[6])), SuffixPieces_8);
          Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Pieces0_107);
        }
        else
        {
          MR_Word PromiseType_32;

          succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_9, &PromiseType_32);
          if (succeeded)
          {
            MR_Word Var_78;
            MR_Word Var_79;
            MR_String Var_80;
            MR_Word Pieces0_108;

            Var_80 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_32);
            {
              Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_79, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
              MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[8])));
            }
            Pieces0_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, SuffixPieces_8);
            Pieces_10 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Pieces0_108);
          }
          else
          {
            MR_Word Prefix_33;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word PredOrFunc_109;
            MR_Word SymName_110;
            MR_Integer UserArityInt_111;
            MR_Word SNA_112;
            MR_Word SNAPiece_113;

            PredOrFunc_109 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_14, (MR_Integer) 11);
            if (succeeded)
            {
              MR_Word Var_88;
              MR_Word Var_89;

              {
                Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(3, Var_89, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_109));
              }
              {
                Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
                MR_hl_field(1, Var_88, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[11])));
              }
              {
                Prefix_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Prefix_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[9])));
                MR_hl_field(1, Prefix_33, 1) = ((MR_Box) (Var_88));
              }
            }
            else
            {
              MR_Word Var_94;

              {
                Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 28U));
                MR_hl_field(3, Var_94, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_109));
              }
              {
                Prefix_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Prefix_33, 0) = ((MR_Box) (Var_94));
                MR_hl_field(1, Prefix_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            {
              SymName_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, SymName_110, 0) = ((MR_Box) (ModuleName_12));
              MR_hl_field(1, SymName_110, 1) = ((MR_Box) (PredName_11));
            }
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_109, &Var_96, PredFormArity_13);
            UserArityInt_111 = (MR_Integer) (Var_96);
            {
              SNA_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SNA_112, 0) = ((MR_Box) (SymName_110));
              MR_hl_field(0, SNA_112, 1) = ((MR_Box) (UserArityInt_111));
            }
            switch (ShouldModuleQualify_7) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  SNAPiece_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SNAPiece_113, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                  MR_hl_field(3, SNAPiece_113, 1) = ((MR_Box) (SNA_112));
                }
                break;
              case (MR_Integer) 1:
                {
                  SNAPiece_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, SNAPiece_113, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                  MR_hl_field(3, SNAPiece_113, 1) = ((MR_Box) (SNA_112));
                }
                break;
            }
            {
              Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_99, 0) = ((MR_Box) (SNAPiece_113));
              MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, SuffixPieces_8);
            Var_97 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_6, Var_98);
            Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Prefix_33, Var_97);
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
