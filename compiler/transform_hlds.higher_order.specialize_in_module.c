/*
** Automatically generated from `higher_order.specialize_in_module.m'
** by the Mercury compiler,
** version rotd-2024-04-09
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


// :- module transform_hlds.higher_order.specialize_in_module.
// :- implementation.

/*
INIT mercury__transform_hlds__higher_order__specialize_in_module__init
ENDINIT
*/

#include "transform_hlds.higher_order.specialize_in_module.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.higher_order.higher_order_global_info.mih"
#include "transform_hlds.higher_order.make_specialized_preds.mih"
#include "transform_hlds.higher_order.specialize_calls.mih"




static void MR_CALL 
transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_1[2][6];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_2[3][3];




static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_1[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_in_module_scalar_common_1[0])),
    ((MR_Box) (transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_in_module_scalar_common_1[0])),
    ((MR_Box) (transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_in_module_scalar_common_1[1])),
    ((MR_Box) (transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  hlds__hlds_module__module_info_remove_predicate_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv4_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  transform_hlds__higher_order__specialize_calls__get_specialization_requests_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  transform_hlds__higher_order__specialize_calls__get_specialization_requests_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void MR_CALL 
transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34)
{
  MR_bool succeeded;
  MR_Word Globals_9;
  MR_Word OptTuple_10;
  MR_Word HigherOrder_11;
  MR_Word TypeSpec_12;
  MR_Word UserTypeSpec_13;
  MR_Integer SizeLimit_14;
  MR_Integer ArgLimit_15;
  MR_Word Params0_16;
  MR_Word ValidPredIds_18;
  MR_Word TypeSpecInfo_19;
  MR_Word UserSpecPredIdSet_21;
  MR_Word DebugSpec_24;
  MR_Word MaybeProgressStream_25;
  MR_Word UserSpecPredIds_26;
  MR_Word NonUserSpecPredIds_27;
  MR_Word STATE_VARIABLE_GlobalInfo_38_38;
  MR_Word STATE_VARIABLE_GlobalInfo_47_47;
  MR_Word STATE_VARIABLE_ModuleInfo_49_49;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_34;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &Globals_9);
  libs__globals__get_opt_tuple_2_p_0(Globals_9, &OptTuple_10);
  HigherOrder_11 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  TypeSpec_12 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  UserTypeSpec_13 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 0))) & (MR_Integer) 1);
  SizeLimit_14 = ((MR_Integer) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 17))));
  ArgLimit_15 = ((MR_Integer) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 18))));
  {
    Params0_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params0_16, 0) = (MR_Box) (((((MR_Unsigned) (HigherOrder_11) << 2)) | (((((MR_Unsigned) (TypeSpec_12) << 1)) | (MR_Unsigned) (UserTypeSpec_13)))));
    MR_hl_field(0, Params0_16, 1) = ((MR_Box) (SizeLimit_14));
    MR_hl_field(0, Params0_16, 2) = ((MR_Box) (ArgLimit_15));
  }
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &ValidPredIds_18);
  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &TypeSpecInfo_19);
  UserSpecPredIdSet_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_19, (MR_Integer) 1))));
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 99, &DebugSpec_24);
  switch (DebugSpec_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeProgressStream_25 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MaybeProgressStream_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeProgressStream_25, 0) = ((MR_Box) (ProgressStream_6));
      }
      break;
  }
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UserSpecPredIdSet_21, &UserSpecPredIds_26);
  if ((UserSpecPredIds_26 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    STATE_VARIABLE_GlobalInfo_38_38 = transform_hlds__higher_order__higher_order_global_info__init_higher_order_global_info_2_f_0(Params0_16, STATE_VARIABLE_ModuleInfo_0_33);
    NonUserSpecPredIds_27 = ValidPredIds_18;
  }
  else
  {
    MR_Word Params_30;
    MR_Word ValidPredIdSet_31;
    MR_Word NonUserSpecPredIdSet_32;
    MR_Word STATE_VARIABLE_GlobalInfo_40_40;
    MR_Word STATE_VARIABLE_GlobalInfo_42_42;
    MR_Integer Var_674 = ((MR_Integer) ((MR_hl_field(0, Params0_16, (MR_Integer) 1))));
    MR_Integer Var_675 = ((MR_Integer) ((MR_hl_field(0, Params0_16, (MR_Integer) 2))));
    MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Params0_16, (MR_Integer) 0)));
    MR_Box conv1_STATE_VARIABLE_GlobalInfo_42_42;

    {
      Params_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Params_30, 0) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(0, Params_30, 1) = ((MR_Box) (Var_674));
      MR_hl_field(0, Params_30, 2) = ((MR_Box) (Var_675));
    }
    STATE_VARIABLE_GlobalInfo_40_40 = transform_hlds__higher_order__higher_order_global_info__init_higher_order_global_info_2_f_0(Params_30, STATE_VARIABLE_ModuleInfo_0_33);
    mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIds_18, &ValidPredIdSet_31);
    mercury__set__difference_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_31, UserSpecPredIdSet_21, &NonUserSpecPredIdSet_32);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonUserSpecPredIdSet_32, &NonUserSpecPredIds_27);
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_in_module_scalar_common_2[0]), UserSpecPredIds_26, ((MR_Box) (STATE_VARIABLE_GlobalInfo_40_40)), &conv1_STATE_VARIABLE_GlobalInfo_42_42);
    STATE_VARIABLE_GlobalInfo_42_42 = ((MR_Word) (conv1_STATE_VARIABLE_GlobalInfo_42_42));
    transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0(MaybeProgressStream_25, STATE_VARIABLE_GlobalInfo_42_42, &STATE_VARIABLE_GlobalInfo_38_38);
  }
  succeeded = (HigherOrder_11 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (TypeSpec_12 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (UserTypeSpec_13 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_GlobalInfo_46_46;
    MR_Box conv3_STATE_VARIABLE_GlobalInfo_46_46;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_in_module_scalar_common_2[1]), NonUserSpecPredIds_27, ((MR_Box) (STATE_VARIABLE_GlobalInfo_38_38)), &conv3_STATE_VARIABLE_GlobalInfo_46_46);
    STATE_VARIABLE_GlobalInfo_46_46 = ((MR_Word) (conv3_STATE_VARIABLE_GlobalInfo_46_46));
    transform_hlds__higher_order__make_specialized_preds__recursively_process_ho_spec_requests_5_p_0(MaybeProgressStream_25, STATE_VARIABLE_GlobalInfo_46_46, &STATE_VARIABLE_GlobalInfo_47_47);
  }
  else
    STATE_VARIABLE_GlobalInfo_47_47 = STATE_VARIABLE_GlobalInfo_38_38;
  STATE_VARIABLE_ModuleInfo_49_49 = transform_hlds__higher_order__higher_order_global_info__hogi_get_module_info_1_f_0(STATE_VARIABLE_GlobalInfo_47_47);
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_in_module_scalar_common_2[2]), UserSpecPredIds_26, ((MR_Box) (STATE_VARIABLE_ModuleInfo_49_49)), &conv5_STATE_VARIABLE_ModuleInfo_34);
  *STATE_VARIABLE_ModuleInfo_34 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_34));
}

void mercury__transform_hlds__higher_order__specialize_in_module__init(void)
{
}

void mercury__transform_hlds__higher_order__specialize_in_module__init_type_tables(void)
{
}

void mercury__transform_hlds__higher_order__specialize_in_module__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__higher_order__specialize_in_module__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.higher_order.specialize_in_module.
