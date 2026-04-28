/*
** Automatically generated from `code_util.m'
** by the Mercury compiler,
** version rotd-2026-04-28
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


// :- module ll_backend.code_util.
// :- implementation.

/*
INIT mercury__ll_backend__code_util__init
ENDINIT
*/

#include "ll_backend.code_util.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.hlds_proc_util.mih"
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_DuFunctorDesc ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_0;

static const MR_PseudoTypeInfo ll_backend__code_util__ll_backend__code_util__field_types_for_from_where_0_1[3];

static const MR_DuArgLocn ll_backend__code_util__ll_backend__code_util__field_locns_for_from_where_0_1[3];

static const MR_DuFunctorDesc ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_1;

static const MR_DuFunctorDescPtr ll_backend__code_util__ll_backend__code_util__du_stag_ordered_for_from_where_0_0[1];

static const MR_DuFunctorDescPtr ll_backend__code_util__ll_backend__code_util__du_stag_ordered_for_from_where_0_1[1];

static const MR_DuPtagLayout ll_backend__code_util__ll_backend__code_util__du_ptag_ordered_for_from_where_0[2];

static const MR_DuFunctorDescPtr ll_backend__code_util__ll_backend__code_util__du_name_ordered_for_from_where_0[2];

static const MR_Integer ll_backend__code_util__ll_backend__code_util__functor_number_map_for_from_where_0[2];

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Rvals_0_12,
  MR_Word * STATE_VARIABLE_Rvals_13,
  MR_Word STATE_VARIABLE_Lvals_0_14,
  MR_Word * STATE_VARIABLE_Lvals_15);

static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__code_util__size_of_cell_args_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Size_0_2,
  MR_Integer * STATE_VARIABLE_Size_3);

static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__code_util__natural_negate_rval_2_p_0(
  MR_Word TestRval0_3,
  MR_Word * TestRval_4);

static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5);

static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5);

static MR_bool MR_CALL 
ll_backend__code_util____Unify____for_from_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_util____Compare____for_from_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__code_util_scalar_common_1[3][2];

static /* final */ const MR_Box ll_backend__code_util_scalar_common_2[1][8];

static /* final */ const MR_Box ll_backend__code_util_scalar_common_3[1][3];




static /* final */ const MR_Box ll_backend__code_util_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__code_util_scalar_common_2[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__code_util_scalar_common_3[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__code_util_scalar_common_2[0])),
    ((MR_Box) (ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0) }
};

static const MR_DuFunctorDesc ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_0 = {
  (MR_String) "for_from_everywhere",
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

static const MR_PseudoTypeInfo ll_backend__code_util__ll_backend__code_util__field_types_for_from_where_0_1[3] = {
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_use_just_one_c_func_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuArgLocn ll_backend__code_util__ll_backend__code_util__field_locns_for_from_where_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_1 = {
  (MR_String) "for_from_proc",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ll_backend__code_util__ll_backend__code_util__field_types_for_from_where_0_1,
  NULL,
  ll_backend__code_util__ll_backend__code_util__field_locns_for_from_where_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ll_backend__code_util__ll_backend__code_util__du_stag_ordered_for_from_where_0_0[1] = { &ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_0 };

static const MR_DuFunctorDescPtr ll_backend__code_util__ll_backend__code_util__du_stag_ordered_for_from_where_0_1[1] = { &ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_1 };

static const MR_DuPtagLayout ll_backend__code_util__ll_backend__code_util__du_ptag_ordered_for_from_where_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    ll_backend__code_util__ll_backend__code_util__du_stag_ordered_for_from_where_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ll_backend__code_util__ll_backend__code_util__du_stag_ordered_for_from_where_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ll_backend__code_util__ll_backend__code_util__du_name_ordered_for_from_where_0[2] = {
  &ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_0,
  &ll_backend__code_util__ll_backend__code_util__du_functor_desc_for_from_where_0_1
};

static const MR_Integer ll_backend__code_util__ll_backend__code_util__functor_number_map_for_from_where_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ll_backend__code_util__ll_backend__code_util__type_ctor_info_for_from_where_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__code_util____Unify____for_from_where_0_0_10001)),
  ((MR_Box) (ll_backend__code_util____Compare____for_from_where_0_0_10001)),
  (MR_String) "ll_backend.code_util",
  (MR_String) "for_from_where",
  { ll_backend__code_util__ll_backend__code_util__du_name_ordered_for_from_where_0 },
  { ll_backend__code_util__ll_backend__code_util__du_ptag_ordered_for_from_where_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__code_util__ll_backend__code_util__functor_number_map_for_from_where_0,

};

void MR_CALL 
ll_backend__code_util____Compare____for_from_where_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
ll_backend__code_util____Unify____for_from_where_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Rvals_0_12,
  MR_Word * STATE_VARIABLE_Rvals_13,
  MR_Word STATE_VARIABLE_Lvals_0_14,
  MR_Word * STATE_VARIABLE_Lvals_15)
{
  MR_Word Uinstr_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word NewRvals_10;
  MR_Word NewLvals_11;

  ll_backend__code_util__instr_rvals_and_lvals_3_p_0(Uinstr_6, &NewRvals_10, &NewLvals_11);
  mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), STATE_VARIABLE_Rvals_0_12, NewRvals_10, STATE_VARIABLE_Rvals_13);
  mercury__set__union_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), STATE_VARIABLE_Lvals_0_14, NewLvals_11, STATE_VARIABLE_Lvals_15);
}

void MR_CALL 
ll_backend__code_util__add_switch_kind_comment_and_end_label_4_p_0(
  MR_String SwitchKindStr_5,
  MR_Word EndLabel_6,
  MR_Word Code0_7,
  MR_Word * Code_8)
{
  MR_Word CommentCode_9;
  MR_Word EndLabelCode_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String Var_16;
  MR_Word Var_18;

  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (SwitchKindStr_5));
  }
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (Var_12));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_String) ""));
  }
  CommentCode_9 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_11)));
  {
    Var_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_15, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, Var_15, 1) = ((MR_Box) (EndLabel_6));
  }
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "end of ", SwitchKindStr_5);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (Var_16));
  }
  EndLabelCode_10 = mercury__cord__singleton_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), ((MR_Box) (Var_14)));
  Var_18 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), Code0_7, EndLabelCode_10);
  *Code_8 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), CommentCode_9, Var_18);
}

void MR_CALL 
ll_backend__code_util__instr_rvals_and_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
        *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
        *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));

            ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(Instrs_8, HeadVar__2_2, HeadVar__3_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_12)));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_11)));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_14)));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_13)));
          }
          break;
        case (MR_Integer) 3:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 4:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 5:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 6:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_25 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_25)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 8:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_31 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_31)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_33 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_33)));
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_34 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_34)));
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word Lval_35 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word SizeRval_38 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
            MR_Word MaybeRegionRval_41 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 7))));
            MR_Word MaybeReuse_42 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 8))));
            MR_Word STATE_VARIABLE_Rvals_1_49;
            MR_Word STATE_VARIABLE_Lvals_1_50;
            MR_Word STATE_VARIABLE_Rvals_2_51;

            STATE_VARIABLE_Rvals_1_49 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (SizeRval_38)));
            STATE_VARIABLE_Lvals_1_50 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_35)));
            if ((MaybeRegionRval_41 == (MR_Word) ((MR_Unsigned) 0U)))
              STATE_VARIABLE_Rvals_2_51 = STATE_VARIABLE_Rvals_1_49;
            else
            {
              MR_Word RegionRval_45 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_41, 0))));

              mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (RegionRval_45)), STATE_VARIABLE_Rvals_1_49, &STATE_VARIABLE_Rvals_2_51);
            }
            if ((MaybeReuse_42 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_2_51;
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_50;
            }
            else
            {
              MR_Word ReuseRval_46 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_42, 0))));
              MR_Word MaybeFlagLval_47 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_42, 1))));

              mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (ReuseRval_46)), STATE_VARIABLE_Rvals_2_51, HeadVar__2_2);
              if ((MaybeFlagLval_47 == (MR_Word) ((MR_Unsigned) 0U)))
                *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_50;
              else
              {
                MR_Word FlagLval_48 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_47, 0))));

                mercury__set__insert_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (FlagLval_48)), STATE_VARIABLE_Lvals_1_50, HeadVar__3_3);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_54 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_54)));
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_55)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_56)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 16:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_61 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
            MR_Word NumLval_62 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 4))));
            MR_Word AddrLval_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 5))));
            MR_Word Var_64;
            MR_Word Var_65;

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (IdRval_61)));
            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (AddrLval_63));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (NumLval_62));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
            }
            *HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_64);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_69 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (ValueRval_69)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 19:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_72 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_72)));
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_73 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_73)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_75)));
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_76)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 24:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 25:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 26:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Cs_83 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
            MR_Word Rvals_92;
            MR_Word Lvals_93;

            ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(Cs_83, &Rvals_92, &Lvals_93);
            *HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Rvals_92);
            *HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvals_93);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_94 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_94)));
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Lval_97 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_97)));
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_99 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_99)));
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_102 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_102)));
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Rval_103 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word Lval_104 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ((MR_Box) (Rval_103)));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), ((MR_Box) (Lval_104)));
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval_106 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word LCSRval_107 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
            MR_Word Var_109;
            MR_Word Var_110;

            {
              Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_110, 0) = ((MR_Box) (LCSRval_107));
              MR_hl_field(1, Var_110, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_109, 0) = ((MR_Box) (LCRval_106));
              MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_110));
            }
            *HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_109);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval_112 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
            MR_Word LCSRval_113 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
            MR_Word Var_114;
            MR_Word Var_115;

            {
              Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_115, 0) = ((MR_Box) (LCSRval_113));
              MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_114, 0) = ((MR_Box) (LCRval_112));
              MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
            }
            *HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), Var_114);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Comp_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Comps_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word STATE_VARIABLE_Rvals_1_10;
    MR_Word STATE_VARIABLE_Lvals_1_11;

    ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(Comps_5, &STATE_VARIABLE_Rvals_1_10, &STATE_VARIABLE_Lvals_1_11);
    switch (MR_tag((MR_Word) Comp_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_11;
          *HeadVar__2_2 = STATE_VARIABLE_Rvals_1_10;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Inputs_12 = ((MR_Word) ((MR_hl_field(1, Comp_4, 0))));
          MR_Word NewRvals_13;

          NewRvals_13 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(Inputs_12);
          mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), NewRvals_13, STATE_VARIABLE_Rvals_1_10, HeadVar__2_2);
          *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_11;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Outputs_18 = ((MR_Word) ((MR_hl_field(2, Comp_4, 0))));
          MR_Word NewLvals_19;

          NewLvals_19 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(Outputs_18);
          mercury__list__append_3_p_1((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), NewLvals_19, STATE_VARIABLE_Lvals_1_11, HeadVar__3_3);
          *HeadVar__2_2 = STATE_VARIABLE_Rvals_1_10;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Comp_4, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_1_10;
            }
            break;
          case (MR_Integer) 1:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_1_10;
            }
            break;
          case (MR_Integer) 2:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_1_10;
            }
            break;
          case (MR_Integer) 3:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_1_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_1_10;
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Output_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Outputs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Lval_5 = ((MR_Word) ((MR_hl_field(0, Output_3, 0))));
    MR_Word Lvals_6;

    Lvals_6 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(Outputs_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Lval_5));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Lvals_6));
    }
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Input_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Inputs_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Rval_5 = ((MR_Word) ((MR_hl_field(0, Input_3, 4))));
    MR_Word Rvals_6;

    Rvals_6 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(Inputs_4);
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Rval_5));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Rvals_6));
    }
  }
  return HeadVar__2_2;
}

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Rvals_13;
  MR_Word conv0_STATE_VARIABLE_Lvals_15;

  ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Rvals_13, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Lvals_15);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Rvals_13));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Lvals_15));
}

void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(
  MR_Word Instrs_4,
  MR_Word * Rvals_5,
  MR_Word * Lvals_6)
{
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Box conv3_Rvals_5;
  MR_Box conv2_Lvals_6;

  Var_8 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0));
  Var_9 = mercury__set__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0), (MR_Word) (&ll_backend__code_util_scalar_common_1[1]), (MR_Word) (&ll_backend__code_util_scalar_common_1[2]), (MR_Word) (&ll_backend__code_util_scalar_common_3[0]), Instrs_4, ((MR_Box) (Var_8)), &conv3_Rvals_5, ((MR_Box) (Var_9)), &conv2_Lvals_6);
  *Rvals_5 = ((MR_Word) (conv3_Rvals_5));
  *Lvals_6 = ((MR_Word) (conv2_Lvals_6));
}

MR_Integer MR_CALL 
ll_backend__code_util__size_of_cell_args_1_f_0(
  MR_Word CellArgs_3)
{
  MR_Integer Size_4;

  ll_backend__code_util__size_of_cell_args_acc_3_p_0(CellArgs_3, (MR_Integer) 0, &Size_4);
  return Size_4;
}

static void MR_CALL 
ll_backend__code_util__size_of_cell_args_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_Size_0_2,
  MR_Integer * STATE_VARIABLE_Size_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Size_3 = STATE_VARIABLE_Size_0_2;
    else
    {
      MR_Word CellArg_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word CellArgs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer CellSize_14;
      MR_Integer STATE_VARIABLE_Size_1_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_Size_0_2;

      switch (MR_tag((MR_Word) CellArg_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(CellArg_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CellSize_14 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              CellSize_14 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 1:
          CellSize_14 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          CellSize_14 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, CellArg_7, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              CellSize_14 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              CellSize_14 = (MR_Integer) 2;
              break;
          }
          break;
      }
      STATE_VARIABLE_Size_1_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Size_0_2 + (MR_Unsigned) CellSize_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CellArgs_8;
      next_value_of_STATE_VARIABLE_Size_0_2 = STATE_VARIABLE_Size_1_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Size_0_2 = next_value_of_STATE_VARIABLE_Size_0_2;
      continue;
    }
    break;
  }
}

MR_Integer MR_CALL 
ll_backend__code_util__encode_num_generic_call_vars_2_f_0(
  MR_Integer NumR_4,
  MR_Integer NumF_5)
{
  MR_Integer HeadVar__3_3;
  MR_Integer Var_6;

  Var_6 = mercury__int__f_60_60_2_f_0(NumF_5, (MR_Integer) 16);
  HeadVar__3_3 = (NumR_4 | Var_6);
  return HeadVar__3_3;
}

void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word * VarLvals_4)
{
  MR_Word HeadVars_5;
  MR_Word ArgInfos_6;
  MR_Word VarArgInfos_7;

  hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_3, &HeadVars_5);
  hlds__hlds_proc_util__proc_info_arg_info_2_p_0(ProcInfo_3, &ArgInfos_6);
  mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&ll_backend__code_util_scalar_common_1[0]), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0), HeadVars_5, ArgInfos_6, &VarArgInfos_7);
  ll_backend__code_util__build_input_arg_list_2_2_p_0(VarArgInfos_7, VarLvals_4);
}

static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word V_3;
    MR_Word Arg_4;
    MR_Word Rest0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Loc_7;
    MR_Word Mode_8;
    MR_Word VarArgs0_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    V_3 = ((MR_Word) ((MR_hl_field(0, Var_11, 0))));
    Arg_4 = ((MR_Word) ((MR_hl_field(0, Var_11, 1))));
    Loc_7 = ((MR_Word) ((MR_hl_field(0, Arg_4, 0))));
    Mode_8 = ((MR_Unsigned) ((MR_hl_field(0, Arg_4, 1))) & (MR_Integer) 3);
    ll_backend__code_util__build_input_arg_list_2_2_p_0(Rest0_5, &VarArgs0_10);
    switch (Mode_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Reg_9;
          MR_Word Var_12;
          MR_Word RegType_13 = ((MR_Unsigned) ((MR_hl_field(0, Loc_7, 0))) & (MR_Integer) 1);
          MR_Integer N_14 = ((MR_Integer) ((MR_hl_field(0, Loc_7, 1))));

          {
            Reg_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Reg_9, 0) = (MR_Box) ((MR_Unsigned) (RegType_13));
            MR_hl_field(1, Reg_9, 1) = ((MR_Box) (N_14));
          }
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_12, 0) = ((MR_Box) (V_3));
            MR_hl_field(0, Var_12, 1) = ((MR_Box) (Reg_9));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (VarArgs0_10));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *HeadVar__2_2 = VarArgs0_10;
        break;
    }
  }
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lvals_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word First_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Rest_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word FirstLvals_5;
    MR_Word RestLvals_6;

    FirstLvals_5 = ll_backend__code_util__lvals_in_lval_1_f_0(First_3);
    RestLvals_6 = ll_backend__code_util__lvals_in_lvals_1_f_0(Rest_4);
    HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), FirstLvals_5, RestLvals_6);
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lval_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_10);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_13);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_12);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_11);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_14);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
            MR_Word Rval2_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
            MR_Word Var_18;
            MR_Word Var_19;

            Var_18 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval1_16);
            Var_19 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval2_17);
            HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_18, Var_19);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval_23 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

            HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_23);
          }
          break;
        case (MR_Integer) 11:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 12:
          HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_rval_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
          MR_Word Var_4;

          Var_4 = ll_backend__code_util__lvals_in_lval_1_f_0(Lval_3);
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Lval_3));
            MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_4));
          }
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 1))));
          MR_Word next_value_of_HeadVar__1_1 = Rval_7;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_HeadVar__1_1 = Rval_11;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word next_value_of_HeadVar__1_1 = Rval_13;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 2))));
              MR_Word Rval2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 3))));
              MR_Word Var_17;
              MR_Word Var_18;

              Var_17 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval1_15);
              Var_18 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval2_16);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_17, Var_18);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));

              switch (MR_tag((MR_Word) MemRef_19)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(0, MemRef_19, 0))));
                    MR_Word next_value_of_HeadVar__1_1 = Rval_21;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_22 = ((MR_Word) ((MR_hl_field(1, MemRef_19, 0))));
                    MR_Word next_value_of_HeadVar__1_1 = Rval_22;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval1_23 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 0))));
                    MR_Word Rval2_25 = ((MR_Word) ((MR_hl_field(2, MemRef_19, 2))));
                    MR_Word Var_26;
                    MR_Word Var_27;

                    Var_26 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval1_23);
                    Var_27 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval2_25);
                    HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Var_26, Var_27);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return HeadVar__2_2;
    break;
  }
}

void MR_CALL 
ll_backend__code_util__negate_the_test_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Instrs_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_util.negate_the_test\'/2", (MR_String) "empty list");
      return;
    }
  else
  {
    MR_Word Instr0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Instrs0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Test_9;
    MR_Word Target_10;
    MR_String Comment_11 = ((MR_String) ((MR_hl_field(0, Instr0_6, 1))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, Instr0_6, 0))));

    succeeded = ((((MR_tag((MR_Word) Var_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_14, 0)))) == (MR_Integer) 9)));
    if (succeeded)
    {
      Test_9 = ((MR_Word) ((MR_hl_field(3, Var_14, 1))));
      Target_10 = ((MR_Word) ((MR_hl_field(3, Var_14, 2))));
      {
        MR_Word NewTest_12;
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word NegRval0_18;

        succeeded = ll_backend__code_util__natural_negate_rval_2_p_0(Test_9, &NegRval0_18);
        if (succeeded)
          NewTest_12 = NegRval0_18;
        else
          {
            NewTest_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, NewTest_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(3, NewTest_12, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(3, NewTest_12, 2) = ((MR_Box) (Test_9));
          }
        {
          Var_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_16, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_16, 1) = ((MR_Box) (NewTest_12));
          MR_hl_field(3, Var_16, 2) = ((MR_Box) (Target_10));
        }
        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_15, 0) = ((MR_Box) (Var_16));
          MR_hl_field(0, Var_15, 1) = ((MR_Box) (Comment_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Instrs_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
    }
    else
    {
      MR_Word Instrs1_13;

      ll_backend__code_util__negate_the_test_2_p_0(Instrs0_7, &Instrs1_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Instrs_2 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Instr0_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (Instrs1_13));
      }
    }
  }
}

void MR_CALL 
ll_backend__code_util__negate_rval_2_p_0(
  MR_Word Rval_3,
  MR_Word * NegRval_4)
{
  MR_bool succeeded;
  MR_Word NegRval0_5;

  succeeded = ll_backend__code_util__natural_negate_rval_2_p_0(Rval_3, &NegRval0_5);
  if (succeeded)
    *NegRval_4 = NegRval0_5;
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *NegRval_4 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
      MR_hl_field(3, base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(3, base, 2) = ((MR_Box) (Rval_3));
    }
}

static MR_bool MR_CALL 
ll_backend__code_util__natural_negate_rval_2_p_0(
  MR_Word TestRval0_3,
  MR_Word * TestRval_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) TestRval0_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TestRval0_3, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const0_5 = ((MR_Word) ((MR_hl_field(3, TestRval0_3, 1))));
            MR_Word Const_6;

            if ((Const0_5 == (MR_Word) ((MR_Unsigned) 4U)))
            {
              Const_6 = (MR_Word) ((MR_Unsigned) 0U);
              succeeded = MR_TRUE;
            }
            else
            if ((Const0_5 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Const_6 = (MR_Word) ((MR_Unsigned) 4U);
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *TestRval_4 = base;
                MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, base, 1) = ((MR_Box) (Const_6));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Unop_7 = ((MR_Word) ((MR_hl_field(3, TestRval0_3, 1))));

            *TestRval_4 = ((MR_Word) ((MR_hl_field(3, TestRval0_3, 2))));
            succeeded = (Unop_7 == (MR_Word) ((MR_Unsigned) 16U));
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Binop0_9 = ((MR_Word) ((MR_hl_field(3, TestRval0_3, 1))));
            MR_Word SubTestRvalA0_10 = ((MR_Word) ((MR_hl_field(3, TestRval0_3, 2))));
            MR_Word SubTestRvalB0_11 = ((MR_Word) ((MR_hl_field(3, TestRval0_3, 3))));

            switch (MR_tag((MR_Word) Binop0_9)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(Binop0_9)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word SubTestRvalA_15;
                      MR_Word SubTestRvalB_16;
                      MR_Word Var_42;

                      succeeded = ll_backend__code_util__natural_negate_rval_2_p_0(SubTestRvalA0_10, &SubTestRvalA_15);
                      if (succeeded)
                      {
                        succeeded = ll_backend__code_util__natural_negate_rval_2_p_0(SubTestRvalB0_11, &SubTestRvalB_16);
                        if (succeeded)
                        {
                          Var_42 = (MR_Word) ((MR_Unsigned) 4U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *TestRval_4 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_42));
                            MR_hl_field(3, base, 2) = ((MR_Box) (SubTestRvalA_15));
                            MR_hl_field(3, base, 3) = ((MR_Box) (SubTestRvalB_16));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_43;
                      MR_Word SubTestRvalA_46;
                      MR_Word SubTestRvalB_47;

                      succeeded = ll_backend__code_util__natural_negate_rval_2_p_0(SubTestRvalA0_10, &SubTestRvalA_46);
                      if (succeeded)
                      {
                        succeeded = ll_backend__code_util__natural_negate_rval_2_p_0(SubTestRvalB0_11, &SubTestRvalB_47);
                        if (succeeded)
                        {
                          Var_43 = (MR_Word) ((MR_Unsigned) 0U);
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *TestRval_4 = base;
                            MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                            MR_hl_field(3, base, 1) = ((MR_Box) (Var_43));
                            MR_hl_field(3, base, 2) = ((MR_Box) (SubTestRvalA_46));
                            MR_hl_field(3, base, 3) = ((MR_Box) (SubTestRvalB_47));
                          }
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Binop0_9, 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word IntType_12 = ((((MR_Unsigned) ((MR_hl_field(3, Binop0_9, 1))) >> 3)) & (MR_Integer) 15);
                      MR_Word Cmp_13 = ((MR_Unsigned) ((MR_hl_field(3, Binop0_9, 1))) & (MR_Integer) 7);
                      MR_Word Var_39;
                      MR_Word Binop_48;

                      Var_39 = backend_libs__builtin_ops__negate_cmp_op_1_f_0(Cmp_13);
                      {
                        Binop_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Binop_48, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, Binop_48, 1) = (MR_Box) (((((MR_Unsigned) (IntType_12) << 3)) | (MR_Unsigned) (Var_39)));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *TestRval_4 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Binop_48));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubTestRvalA0_10));
                        MR_hl_field(3, base, 3) = ((MR_Box) (SubTestRvalB0_11));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_41;
                      MR_Word Cmp_45 = ((MR_Unsigned) ((MR_hl_field(3, Binop0_9, 1))) & (MR_Integer) 7);
                      MR_Word Binop_49;

                      Var_41 = backend_libs__builtin_ops__negate_cmp_op_1_f_0(Cmp_45);
                      {
                        Binop_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Binop_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(3, Binop_49, 1) = (MR_Box) ((MR_Unsigned) (Var_41));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *TestRval_4 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Binop_49));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubTestRvalA0_10));
                        MR_hl_field(3, base, 3) = ((MR_Box) (SubTestRvalB0_11));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      MR_Word Binop_14;
                      MR_Word Var_40;
                      MR_Word Cmp_44 = ((MR_Unsigned) ((MR_hl_field(3, Binop0_9, 1))) & (MR_Integer) 7);

                      Var_40 = backend_libs__builtin_ops__negate_cmp_op_1_f_0(Cmp_44);
                      {
                        Binop_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, Binop_14, 0) = ((MR_Box) ((MR_Unsigned) 10U));
                        MR_hl_field(3, Binop_14, 1) = (MR_Box) ((MR_Unsigned) (Var_40));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *TestRval_4 = base;
                        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, base, 1) = ((MR_Box) (Binop_14));
                        MR_hl_field(3, base, 2) = ((MR_Box) (SubTestRvalA0_10));
                        MR_hl_field(3, base, 3) = ((MR_Box) (SubTestRvalB0_11));
                      }
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * May_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_48 = (MR_Word) ((MR_Word) (GoalExpr_3));
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_48;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *May_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_3, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *May_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *May_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));

              ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_35, May_5);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_51 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 1))));

              ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_51, May_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));

              ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(Cases_38, May_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word SubGoalInfo_32 = ((MR_Word) ((MR_hl_field(0, SubGoal_30, 1))));
              MR_Word SubCodeModel_33;

              SubCodeModel_33 = hlds__code_model__goal_info_get_code_model_1_f_0(SubGoalInfo_32);
              switch (SubCodeModel_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_HeadVar__1_1 = SubGoal_30;

                    // direct tailcall eliminated
                    ;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *May_5 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word C_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 2))));
              MR_Word T_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 3))));
              MR_Word E_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_3, 4))));
              MR_Word Var_49;

              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(C_40, &Var_49);
              succeeded = ((MR_Integer) 1 == Var_49);
              if (succeeded)
                *May_5 = (MR_Integer) 1;
              else
              {
                MR_Word Var_50;

                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(T_41, &Var_50);
                succeeded = ((MR_Integer) 1 == Var_50);
                if (succeeded)
                  *May_5 = (MR_Integer) 1;
                else
                {
                  MR_Word next_value_of_HeadVar__1_1 = E_42;

                  // direct tailcall eliminated
                  ;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  continue;
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_util.goal_expr_may_alloc_temp_frame\'/2", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_5;
      MR_Word Cases_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word GoalExpr_11;

      Goal_5 = ((MR_Word) ((MR_hl_field(0, Var_8, 2))));
      GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_5, 0))));
      switch (MR_tag((MR_Word) GoalExpr_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_55 = (MR_Word) ((MR_Word) (GoalExpr_11));
            MR_Word Var_76;

            ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_55, &Var_76);
            succeeded = ((MR_Integer) 1 == Var_76);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoals_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
                MR_Word Var_64;

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_42, &Var_64);
                succeeded = ((MR_Integer) 1 == Var_64);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoals_58 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
                MR_Word Var_65;

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_58, &Var_65);
                succeeded = ((MR_Integer) 1 == Var_65);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
                MR_Word Var_82;

                ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(Cases_45, &Var_82);
                succeeded = ((MR_Integer) 1 == Var_82);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
                MR_Word SubGoalInfo_39 = ((MR_Word) ((MR_hl_field(0, SubGoal_37, 1))));
                MR_Word SubCodeModel_40;

                SubCodeModel_40 = hlds__code_model__goal_info_get_code_model_1_f_0(SubGoalInfo_39);
                switch (SubCodeModel_40) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_77;

                      ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_37, &Var_77);
                      succeeded = ((MR_Integer) 1 == Var_77);
                    }
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word C_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
                MR_Word T_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
                MR_Word E_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 4))));
                MR_Word Var_56;

                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(C_47, &Var_56);
                succeeded = ((MR_Integer) 1 == Var_56);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_57;

                  ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(T_48, &Var_57);
                  succeeded = ((MR_Integer) 1 == Var_57);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word Var_72;

                    ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(E_49, &Var_72);
                    succeeded = ((MR_Integer) 1 == Var_72);
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_util.goal_expr_may_alloc_temp_frame\'/2", (MR_String) "shorthand");
                  return;
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_3, 0))));

      switch (MR_tag((MR_Word) GoalExpr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_52 = (MR_Word) ((MR_Word) (GoalExpr_8));
            MR_Word Var_73;

            ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_52, &Var_73);
            succeeded = ((MR_Integer) 1 == Var_73);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
              break;
            case (MR_Integer) 1:
              succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoals_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
                MR_Word Var_61;

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_39, &Var_61);
                succeeded = ((MR_Integer) 1 == Var_61);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoals_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 1))));
                MR_Word Var_62;

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_55, &Var_62);
                succeeded = ((MR_Integer) 1 == Var_62);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
                MR_Word Var_79;

                ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(Cases_42, &Var_79);
                succeeded = ((MR_Integer) 1 == Var_79);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
                MR_Word SubGoalInfo_36 = ((MR_Word) ((MR_hl_field(0, SubGoal_34, 1))));
                MR_Word SubCodeModel_37;

                SubCodeModel_37 = hlds__code_model__goal_info_get_code_model_1_f_0(SubGoalInfo_36);
                switch (SubCodeModel_37) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_74;

                      ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_34, &Var_74);
                      succeeded = ((MR_Integer) 1 == Var_74);
                    }
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word C_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 2))));
                MR_Word T_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 3))));
                MR_Word E_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, 4))));
                MR_Word Var_53;

                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(C_44, &Var_53);
                succeeded = ((MR_Integer) 1 == Var_53);
                if (succeeded)
                  succeeded = MR_TRUE;
                else
                {
                  MR_Word Var_54;

                  ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(T_45, &Var_54);
                  succeeded = ((MR_Integer) 1 == Var_54);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word Var_69;

                    ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(E_46, &Var_69);
                    succeeded = ((MR_Integer) 1 == Var_69);
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ll_backend.code_util.goal_expr_may_alloc_temp_frame\'/2", (MR_String) "shorthand");
                  return;
                }
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_util__max_mentioned_abs_regs_3_p_0(
  MR_Word Lvals_4,
  MR_Integer * MaxRegR_5,
  MR_Integer * MaxRegF_6)
{
  ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(Lvals_4, (MR_Integer) 0, MaxRegR_5, (MR_Integer) 0, MaxRegF_6);
}

static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaxRegF_5 = STATE_VARIABLE_MaxRegF_0_4;
      *STATE_VARIABLE_MaxRegR_3 = STATE_VARIABLE_MaxRegR_0_2;
    }
    else
    {
      MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Lvals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer STATE_VARIABLE_MaxRegR_1_22;
      MR_Integer STATE_VARIABLE_MaxRegF_1_23;
      MR_Word RegType_16;
      MR_Integer N_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegF_0_4;

      succeeded = ((MR_tag((MR_Word) Lval_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        RegType_16 = ((MR_Unsigned) ((MR_hl_field(1, Lval_12, 0))) & (MR_Integer) 1);
        N_17 = ((MR_Integer) ((MR_hl_field(1, Lval_12, 1))));
        switch (RegType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegF_0_4, &STATE_VARIABLE_MaxRegF_1_23);
              STATE_VARIABLE_MaxRegR_1_22 = STATE_VARIABLE_MaxRegR_0_2;
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegR_0_2, &STATE_VARIABLE_MaxRegR_1_22);
              STATE_VARIABLE_MaxRegF_1_23 = STATE_VARIABLE_MaxRegF_0_4;
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_MaxRegF_1_23 = STATE_VARIABLE_MaxRegF_0_4;
        STATE_VARIABLE_MaxRegR_1_22 = STATE_VARIABLE_MaxRegR_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Lvals_13;
      next_value_of_STATE_VARIABLE_MaxRegR_0_2 = STATE_VARIABLE_MaxRegR_1_22;
      next_value_of_STATE_VARIABLE_MaxRegF_0_4 = STATE_VARIABLE_MaxRegF_1_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxRegR_0_2 = next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      STATE_VARIABLE_MaxRegF_0_4 = next_value_of_STATE_VARIABLE_MaxRegF_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_util__max_mentioned_regs_3_p_0(
  MR_Word Lvals_4,
  MR_Integer * MaxRegR_5,
  MR_Integer * MaxRegF_6)
{
  ll_backend__code_util__max_mentioned_reg_2_5_p_0(Lvals_4, (MR_Integer) 0, MaxRegR_5, (MR_Integer) 0, MaxRegF_6);
}

static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_MaxRegF_5 = STATE_VARIABLE_MaxRegF_0_4;
      *STATE_VARIABLE_MaxRegR_3 = STATE_VARIABLE_MaxRegR_0_2;
    }
    else
    {
      MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Lvals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer STATE_VARIABLE_MaxRegR_1_22;
      MR_Integer STATE_VARIABLE_MaxRegF_1_23;
      MR_Word RegType_16;
      MR_Integer N_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegF_0_4;

      succeeded = ((MR_tag((MR_Word) Lval_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        RegType_16 = ((MR_Unsigned) ((MR_hl_field(1, Lval_12, 0))) & (MR_Integer) 1);
        N_17 = ((MR_Integer) ((MR_hl_field(1, Lval_12, 1))));
        switch (RegType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegF_0_4, &STATE_VARIABLE_MaxRegF_1_23);
              STATE_VARIABLE_MaxRegR_1_22 = STATE_VARIABLE_MaxRegR_0_2;
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegR_0_2, &STATE_VARIABLE_MaxRegR_1_22);
              STATE_VARIABLE_MaxRegF_1_23 = STATE_VARIABLE_MaxRegF_0_4;
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_MaxRegF_1_23 = STATE_VARIABLE_MaxRegF_0_4;
        STATE_VARIABLE_MaxRegR_1_22 = STATE_VARIABLE_MaxRegR_0_2;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Lvals_13;
      next_value_of_STATE_VARIABLE_MaxRegR_0_2 = STATE_VARIABLE_MaxRegR_1_22;
      next_value_of_STATE_VARIABLE_MaxRegF_0_4 = STATE_VARIABLE_MaxRegF_1_23;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxRegR_0_2 = next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      STATE_VARIABLE_MaxRegF_0_4 = next_value_of_STATE_VARIABLE_MaxRegF_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_util__arg_loc_to_register_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Word RegType_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
  MR_Integer N_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));

  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__2_2 = base;
    MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (RegType_3));
    MR_hl_field(1, base, 1) = ((MR_Box) (N_4));
  }
}

MR_Word MR_CALL 
ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(
  MR_Word CodeAddr_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) CodeAddr_3)) == (MR_Integer) 1);
  MR_Word ProcLabel_4;
  MR_Word Label_5;

  if (succeeded)
  {
    Label_5 = ((MR_Word) ((MR_hl_field(1, CodeAddr_3, 0))));
    ProcLabel_4 = ll_backend__llds__get_proc_label_1_f_0(Label_5);
  }
  else
  {
    MR_Word ProcLabelPrime_6;

    succeeded = ((MR_tag((MR_Word) CodeAddr_3)) == (MR_Integer) 2);
    if (succeeded)
    {
      ProcLabelPrime_6 = ((MR_Word) ((MR_hl_field(2, CodeAddr_3, 0))));
      ProcLabel_4 = ProcLabelPrime_6;
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140ll_backend.code_util.extract_proc_label_from_code_addr\'/1", (MR_String) "failed");
  }
  return ProcLabel_4;
}

MR_Word MR_CALL 
ll_backend__code_util__make_internal_label_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Integer LabelNum_9)
{
  MR_Word Label_10;
  MR_Word ProcLabel_11;

  ProcLabel_11 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
  {
    Label_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Label_10, 0) = ((MR_Box) (LabelNum_9));
    MR_hl_field(0, Label_10, 1) = ((MR_Box) (ProcLabel_11));
  }
  return Label_10;
}

MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word ForFromWhere_9)
{
  MR_bool succeeded;
  MR_Word Label_10;
  MR_Word RttiProcLabel_11;
  MR_Word ProcLabel_12;
  MR_Word Var_66;
  MR_Integer Var_73;
  MR_Word Var_74;

  RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
  ProcLabel_12 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_11);
  Var_74 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_11, 6))));
  Var_73 = ((MR_Integer) ((MR_hl_field(0, RttiProcLabel_11, 7))));
  Var_66 = ((((MR_Unsigned) ((MR_hl_field(0, RttiProcLabel_11, 12))) >> 1)) & (MR_Integer) 1);
  if ((ForFromWhere_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word EntryType_14;

    switch (Var_66) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        EntryType_14 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        EntryType_14 = (MR_Integer) 2;
        break;
    }
    {
      Label_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Label_10, 0) = (MR_Box) ((MR_Unsigned) (EntryType_14));
      MR_hl_field(1, Label_10, 1) = ((MR_Box) (ProcLabel_12));
    }
  }
  else
  {
    MR_Word MaybeUseJustOneFunc_15 = ((MR_Unsigned) ((MR_hl_field(1, ForFromWhere_9, 0))) & (MR_Integer) 1);
    MR_Word CurPredId_16 = ((MR_Word) ((MR_hl_field(1, ForFromWhere_9, 1))));
    MR_Integer CurProcId_17 = ((MR_Integer) ((MR_hl_field(1, ForFromWhere_9, 2))));
    MR_Word EntryType_81;

    succeeded = (MaybeUseJustOneFunc_15 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(Var_74, CurPredId_16);
      if (succeeded)
        succeeded = (Var_73 == CurProcId_17);
    }
    if (succeeded)
      EntryType_81 = (MR_Integer) 0;
    else
      EntryType_81 = (MR_Integer) 1;
    {
      Label_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Label_10, 0) = (MR_Box) ((MR_Unsigned) (EntryType_81));
      MR_hl_field(1, Label_10, 1) = ((MR_Box) (ProcLabel_12));
    }
  }
  return Label_10;
}

MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word ForFromWhere_9)
{
  MR_Word ProcAddr_10;
  MR_Word RttiProcLabel_11;

  RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
  ProcAddr_10 = ll_backend__code_util__make_entry_label_from_rtti_2_f_0(RttiProcLabel_11, ForFromWhere_9);
  return ProcAddr_10;
}

MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_from_rtti_2_f_0(
  MR_Word RttiProcLabel_4,
  MR_Word ForFromWhere_5)
{
  MR_bool succeeded;
  MR_Word ProcAddr_6;
  MR_Word ProcIsImported_7 = ((MR_Unsigned) ((MR_hl_field(0, RttiProcLabel_4, 12))) & (MR_Integer) 1);

  switch (ProcIsImported_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Label_9;
        MR_Word ProcLabel_25;
        MR_Word Var_79;
        MR_Integer Var_86;
        MR_Word Var_87;

        ProcLabel_25 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_4);
        Var_87 = ((MR_Word) ((MR_hl_field(0, RttiProcLabel_4, 6))));
        Var_86 = ((MR_Integer) ((MR_hl_field(0, RttiProcLabel_4, 7))));
        Var_79 = ((((MR_Unsigned) ((MR_hl_field(0, RttiProcLabel_4, 12))) >> 1)) & (MR_Integer) 1);
        if ((ForFromWhere_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word EntryType_27;

          switch (Var_79) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              EntryType_27 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              EntryType_27 = (MR_Integer) 2;
              break;
          }
          {
            Label_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Label_9, 0) = (MR_Box) ((MR_Unsigned) (EntryType_27));
            MR_hl_field(1, Label_9, 1) = ((MR_Box) (ProcLabel_25));
          }
        }
        else
        {
          MR_Word MaybeUseJustOneFunc_28 = ((MR_Unsigned) ((MR_hl_field(1, ForFromWhere_5, 0))) & (MR_Integer) 1);
          MR_Word CurPredId_29 = ((MR_Word) ((MR_hl_field(1, ForFromWhere_5, 1))));
          MR_Integer CurProcId_30 = ((MR_Integer) ((MR_hl_field(1, ForFromWhere_5, 2))));
          MR_Word EntryType_94;

          succeeded = (MaybeUseJustOneFunc_28 == (MR_Integer) 0);
          if (!(succeeded))
          {
            succeeded = hlds__hlds_pred____Unify____pred_id_0_0(Var_87, CurPredId_29);
            if (succeeded)
              succeeded = (Var_86 == CurProcId_30);
          }
          if (succeeded)
            EntryType_94 = (MR_Integer) 0;
          else
            EntryType_94 = (MR_Integer) 1;
          {
            Label_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Label_9, 0) = (MR_Box) ((MR_Unsigned) (EntryType_94));
            MR_hl_field(1, Label_9, 1) = ((MR_Box) (ProcLabel_25));
          }
        }
        {
          ProcAddr_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ProcAddr_6, 0) = ((MR_Box) (Label_9));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcLabel_8;

        ProcLabel_8 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_4);
        {
          ProcAddr_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, ProcAddr_6, 0) = ((MR_Box) (ProcLabel_8));
        }
      }
      break;
  }
  return ProcAddr_6;
}

static MR_bool MR_CALL 
ll_backend__code_util____Unify____for_from_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__code_util____Unify____for_from_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__code_util____Compare____for_from_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__code_util____Compare____for_from_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__code_util__init(void)
{
}

void mercury__ll_backend__code_util__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__code_util__ll_backend__code_util__type_ctor_info_for_from_where_0);
}

void mercury__ll_backend__code_util__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__code_util__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.code_util.
