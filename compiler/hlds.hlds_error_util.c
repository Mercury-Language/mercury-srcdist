/*
** Automatically generated from `hlds_error_util.m'
** by the Mercury compiler,
** version rotd-2023-12-01
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
#include "libs.globals.mih"
#include "libs.indent.mih"
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
#include "parse_tree.parse_tree_out_inst.mih"
#include "parse_tree.parse_tree_out_misc.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




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
hlds__hlds_error_util__describe_several_call_sites_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0_1(
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


static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[12][2];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_3[1][5];

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[3][7];




static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_1[12][2] = {
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
    ((MR_Box) ((MR_String) "type class method implementation"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type class"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "method"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "mode"))
  },
  /* row  11 */
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
    ((MR_Box) (hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__hlds_error_util_scalar_common_3[0])),
    ((MR_Box) (hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0_2)),
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

static /* final */ const MR_Box hlds__hlds_error_util_scalar_common_4[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_error_util__hlds__hlds_error_util__type_ctor_info_should_module_qualify_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_error_util__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
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
hlds__hlds_error_util__describe_several_call_sites_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_9;

  conv0_Pieces_9 = hlds__hlds_error_util__describe_one_call_site_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_9));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_call_sites_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word Sites_7)
{
  MR_Word Pieces_8;
  MR_Word PiecesList_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[2]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_call_sites_3_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (ShouldModuleQualify_6));
  }
  PiecesList_9 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_error_util_scalar_common_2[0]), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_10, Sites_7);
  Pieces_8 = parse_tree__error_spec__component_lists_to_pieces_2_f_0((MR_String) "and", PiecesList_9);
  return Pieces_8;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_call_site_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word HeadVar__3_3)
{
  MR_Word Pieces_9;
  MR_Word PPId_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word ProcNamePieces_10;
  MR_String FileName_11;
  MR_Integer LineNumber_12;
  MR_String LineNumberStr_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_String Var_19;
  MR_String Var_20;

  ProcNamePieces_10 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_5, ShouldModuleQualify_6, PPId_7);
  FileName_11 = mercury__term_context__context_file_1_f_0(Context_8);
  LineNumber_12 = mercury__term_context__context_line_1_f_0(Context_8);
  mercury__string__int_to_string_2_p_0(LineNumber_12, &LineNumberStr_13);
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) ":", LineNumberStr_13);
  Var_19 = mercury__string__f_43_43_2_f_0(FileName_11, Var_20);
  {
    Var_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_18, 0) = ((MR_Box) (Var_19));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[11])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  Pieces_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcNamePieces_10, Var_14);
  return Pieces_9;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_8;

  conv0_Pieces_8 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_8));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_proc_names_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word PPIds_7)
{
  MR_Word Pieces_8;
  MR_Word PiecesList_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[1]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_proc_names_3_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (ShouldModuleQualify_6));
  }
  PiecesList_9 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_10, PPIds_7);
  Pieces_8 = parse_tree__error_spec__component_lists_to_pieces_2_f_0((MR_String) "and", PiecesList_9);
  return Pieces_8;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_mode_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word Lang_7,
  MR_Word ShouldModuleQualify_8,
  MR_Word PredProcId_9)
{
  MR_Word Pieces_10;
  MR_Word ProcInfo_12;
  MR_Word ArgModes_13;
  MR_Word InstVarSet_14;
  MR_Word PredId_15;
  MR_Word Var_11;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_6, PredProcId_9, &Var_11, &ProcInfo_12);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_12, &ArgModes_13);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_12, &InstVarSet_14);
  PredId_15 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 0))));
  Pieces_10 = hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0(ModuleInfo_6, Lang_7, ShouldModuleQualify_8, PredId_15, InstVarSet_14, ArgModes_13);
  return Pieces_10;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_proc_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word PredProcId_7)
{
  MR_Word Pieces_8;
  MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(0, PredProcId_7, (MR_Integer) 0))));
  MR_Integer ProcId_10 = ((MR_Integer) ((MR_hl_field(0, PredProcId_7, (MR_Integer) 1))));
  MR_Word PredPieces_11;
  MR_Integer ProcIdInt_12;
  MR_String ProcIdStr_13;
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word PredInfo_21;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_9, &PredInfo_21);
  PredPieces_11 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(ShouldModuleQualify_6, PredInfo_21);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_10, &ProcIdInt_12);
  mercury__string__int_to_string_2_p_0(ProcIdInt_12, &ProcIdStr_13);
  {
    Var_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_18, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_18, 1) = ((MR_Box) (ProcIdStr_13));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[10])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
  }
  Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredPieces_11, Var_14);
  return Pieces_8;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Pieces_8;

  conv0_Pieces_8 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Pieces_8));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_several_pred_names_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word PredIds_7)
{
  MR_Word Pieces_8;
  MR_Word PiecesList_9;
  MR_Word Var_10;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&hlds__hlds_error_util_scalar_common_4[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (hlds__hlds_error_util__describe_several_pred_names_3_f_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (ShouldModuleQualify_6));
  }
  PiecesList_9 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_1[0]), Var_10, PredIds_7);
  Pieces_8 = parse_tree__error_spec__component_lists_to_pieces_2_f_0((MR_String) "and", PiecesList_9);
  return Pieces_8;
}

static MR_Box MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0_2(
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
hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0_1(
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
hlds__hlds_error_util__describe_one_pred_name_mode_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word Lang_9,
  MR_Word ShouldModuleQualify_10,
  MR_Word PredId_11,
  MR_Word InstVarSet_12,
  MR_Word ArgModes0_13)
{
  MR_bool succeeded;
  MR_Word Pieces_14;
  MR_Word PredInfo_15;
  MR_Word ModuleName_16;
  MR_String PredName_17;
  MR_Word PredFormArity_18;
  MR_Integer NumExtraArgs_19;
  MR_Word StrippedArgModes_21;
  MR_Word PredOrFunc_22;
  MR_String ArgModesPart_23;
  MR_String Descr_26;
  MR_Word Var_34;
  MR_Word Var_36;
  MR_String Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_43;
  MR_Word ArgModes_20;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_8, PredId_11, &PredInfo_15);
  ModuleName_16 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_15);
  PredName_17 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_15);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_15, &PredFormArity_18);
  NumExtraArgs_19 = parse_tree__prog_data__num_extra_args_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), PredFormArity_18, ArgModes0_13);
  succeeded = mercury__list__drop_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), NumExtraArgs_19, ArgModes0_13, &ArgModes_20);
  if (succeeded)
    parse_tree__prog_mode__strip_module_names_from_mode_list_3_p_0((MR_Integer) 0, ArgModes_20, &StrippedArgModes_21);
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.hlds_error_util.describe_one_pred_name_mode\'/6", (MR_String) "bad argument list");
  PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_15);
  switch (PredOrFunc_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word FuncArgModes_24;
        MR_Word FuncRetMode_25;
        MR_String Var_30;
        MR_String Var_31;
        MR_String Var_33;
        MR_Box conv0_FuncRetMode_25;

        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), StrippedArgModes_21, &FuncArgModes_24, &conv0_FuncRetMode_25);
        FuncRetMode_25 = ((MR_Word) (conv0_FuncRetMode_25));
        if ((FuncArgModes_24 == (MR_Word) ((MR_Unsigned) 0U)))
          Var_30 = (MR_String) "";
        else
        {
          MR_Word ArgModes_46;
          MR_String ArgsStr_47;
          MR_String Var_50;

          ArgModes_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[1]), FuncArgModes_24);
          ArgsStr_47 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_9, InstVarSet_12, ArgModes_46);
          Var_50 = mercury__string__f_43_43_2_f_0(ArgsStr_47, (MR_String) ")");
          Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
        }
        Var_33 = parse_tree__parse_tree_out_inst__mercury_mode_to_string_3_f_0(Lang_9, InstVarSet_12, FuncRetMode_25);
        Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " = ", Var_33);
        ArgModesPart_23 = mercury__string__f_43_43_2_f_0(Var_30, Var_31);
      }
      break;
    case (MR_Integer) 0:
      if ((StrippedArgModes_21 == (MR_Word) ((MR_Unsigned) 0U)))
        ArgModesPart_23 = (MR_String) "";
      else
      {
        MR_Word ArgModes_53;
        MR_String ArgsStr_54;
        MR_String Var_57;

        ArgModes_53 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), (MR_Word) (&hlds__hlds_error_util_scalar_common_2[2]), StrippedArgModes_21);
        ArgsStr_54 = parse_tree__parse_tree_out_inst__mercury_mode_list_to_string_3_f_0(Lang_9, InstVarSet_12, ArgModes_53);
        Var_57 = mercury__string__f_43_43_2_f_0(ArgsStr_54, (MR_String) ")");
        ArgModesPart_23 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_57);
      }
      break;
  }
  switch (ShouldModuleQualify_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_60;

        Var_60 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_16);
        Var_37 = mercury__string__f_43_43_2_f_0(Var_60, (MR_String) ".");
      }
      break;
    case (MR_Integer) 1:
      Var_37 = (MR_String) "";
      break;
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (ArgModesPart_23));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) ((MR_String) "\'"));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (PredName_17));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) ((MR_String) "\140"));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_36));
  }
  mercury__string__append_list_2_p_0(Var_34, &Descr_26);
  {
    Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_43, 1) = ((MR_Box) (Descr_26));
  }
  {
    Pieces_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces_14, 0) = ((MR_Box) (Var_43));
    MR_hl_field(1, Pieces_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return Pieces_14;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_name_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word ShouldModuleQualify_6,
  MR_Word PredId_7)
{
  MR_Word Pieces_8;
  MR_Word PredInfo_9;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_7, &PredInfo_9);
  Pieces_8 = hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(ShouldModuleQualify_6, PredInfo_9);
  return Pieces_8;
}

MR_Word MR_CALL 
hlds__hlds_error_util__describe_one_pred_info_name_2_f_0(
  MR_Word ShouldModuleQualify_4,
  MR_Word PredInfo_5)
{
  MR_bool succeeded;
  MR_Word Pieces_6;
  MR_String PredName_7;
  MR_Word ModuleName_8;
  MR_Word PredFormArity_9;
  MR_Word PredOrFunc_10;
  MR_Word Markers_11;
  MR_Word Origin_12;
  MR_Word SpecialId_13;
  MR_Word TypeCtor_14;
  MR_Word Var_25;

  PredName_7 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  ModuleName_8 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
  hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_5, &PredFormArity_9);
  PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_5, &Markers_11);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_5, &Origin_12);
  succeeded = ((MR_tag((MR_Word) Origin_12)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_25 = ((MR_Word) ((MR_hl_field(1, Origin_12, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_Integer) 0);
    if (succeeded)
    {
      SpecialId_13 = ((MR_Unsigned) ((MR_hl_field(0, Var_25, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_14 = ((MR_Word) ((MR_hl_field(0, Var_25, (MR_Integer) 1))));
    }
  }
  if (succeeded)
  {
    MR_String Descr_15;
    MR_Word TypeSymName0_16;
    MR_Integer TypeArity_17;
    MR_Word TypeSymName_18;

    hlds__special_pred__special_pred_description_2_p_0(SpecialId_13, &Descr_15);
    TypeSymName0_16 = ((MR_Word) ((MR_hl_field(0, TypeCtor_14, (MR_Integer) 0))));
    TypeArity_17 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_14, (MR_Integer) 1))));
    switch (ShouldModuleQualify_4) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        TypeSymName_18 = TypeSymName0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_26;

          Var_26 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeSymName0_16);
          {
            TypeSymName_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeSymName_18, 0) = ((MR_Box) (Var_26));
          }
        }
        break;
    }
    succeeded = (TypeArity_17 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_27;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_32;

      {
        Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_27, 1) = ((MR_Box) (Descr_15));
      }
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (TypeSymName_18));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[1])));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (Var_27));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_28));
      }
    }
    else
    {
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_38;
      MR_Word Var_39;

      {
        Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_34, 1) = ((MR_Box) (Descr_15));
      }
      {
        Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(3, Var_39, 1) = ((MR_Box) (TypeSymName_18));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[2])));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
      }
      {
        Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (Var_34));
        MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (Var_35));
      }
    }
  }
  else
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 12);
    if (succeeded)
      Pieces_6 = (MR_Word) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[4]));
    else
    {
      MR_Word PromiseType_19;

      succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(PredInfo_5, &PromiseType_19);
      if (succeeded)
      {
        MR_Word Var_45;
        MR_String Var_46;

        Var_46 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_19);
        {
          Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (Var_45));
          MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[6])));
        }
      }
      else
      {
        MR_Word Prefix_20;
        MR_Word PredSymName_21;
        MR_Integer UserArityInt_22;
        MR_Word PredSymNameAndArity_23;
        MR_Word PredSymNamePiece_24;
        MR_Word Var_62;
        MR_Word Var_63;

        succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_11, (MR_Integer) 11);
        if (succeeded)
        {
          MR_Word Var_54;
          MR_Word Var_55;

          {
            Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(3, Var_55, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
          }
          {
            Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
            MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &hlds__hlds_error_util_scalar_common_1[9])));
          }
          {
            Prefix_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Prefix_20, 0) = ((MR_Box) (MR_mkword(3, &hlds__hlds_error_util_scalar_common_1[7])));
            MR_hl_field(1, Prefix_20, 1) = ((MR_Box) (Var_54));
          }
        }
        else
        {
          MR_Word Var_60;

          {
            Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(3, Var_60, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
          }
          {
            Prefix_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Prefix_20, 0) = ((MR_Box) (Var_60));
            MR_hl_field(1, Prefix_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        {
          PredSymName_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredSymName_21, 0) = ((MR_Box) (ModuleName_8));
          MR_hl_field(1, PredSymName_21, 1) = ((MR_Box) (PredName_7));
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_10, &Var_62, PredFormArity_9);
        UserArityInt_22 = (MR_Integer) (Var_62);
        {
          PredSymNameAndArity_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PredSymNameAndArity_23, 0) = ((MR_Box) (PredSymName_21));
          MR_hl_field(0, PredSymNameAndArity_23, 1) = ((MR_Box) (UserArityInt_22));
        }
        switch (ShouldModuleQualify_4) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              PredSymNamePiece_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, PredSymNamePiece_24, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, PredSymNamePiece_24, 1) = ((MR_Box) (PredSymNameAndArity_23));
            }
            break;
          case (MR_Integer) 1:
            {
              PredSymNamePiece_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, PredSymNamePiece_24, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, PredSymNamePiece_24, 1) = ((MR_Box) (PredSymNameAndArity_23));
            }
            break;
        }
        {
          Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_63, 0) = ((MR_Box) (PredSymNamePiece_24));
          MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Prefix_20, Var_63);
      }
    }
  }
  return Pieces_6;
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
