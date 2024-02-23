/*
** Automatically generated from `higher_order.specialize_in_module.m'
** by the Mercury compiler,
** version rotd-2024-02-23
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


static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_1[1][2];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_2[2][6];

static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_3[3][3];




static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_new_pred_0))
  },
};

static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_2[2][6] = {
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

static /* final */ const MR_Box transform_hlds__higher_order__specialize_in_module_scalar_common_3[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_in_module_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_in_module_scalar_common_2[0])),
    ((MR_Box) (transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__higher_order__specialize_in_module_scalar_common_2[1])),
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37)
{
  MR_bool succeeded;
  MR_Word Globals_9;
  MR_Word OptTuple_10;
  MR_Word HigherOrder_11;
  MR_Word TypeSpec_12;
  MR_Word UserTypeSpec_13;
  MR_Integer SizeLimit_14;
  MR_Integer ArgLimit_15;
  MR_Word Params_16;
  MR_Word NewPredMap0_17;
  MR_Word GoalSizes0_18;
  MR_Word Requests0_19;
  MR_Word VersionInfo0_20;
  MR_Word ValidPredIds_22;
  MR_Word TypeSpecInfo_23;
  MR_Word UserSpecPredIdSet_25;
  MR_Word DebugSpec_28;
  MR_Word MaybeProgressStream_29;
  MR_Word UserSpecPredIds_30;
  MR_Word NonUserSpecPredIds_31;
  MR_Word STATE_VARIABLE_GlobalInfo_40_40;
  MR_Word Var_41;
  MR_Word STATE_VARIABLE_GlobalInfo_50_50;
  MR_Word STATE_VARIABLE_GlobalInfo_54_54;
  MR_Word Var_57;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_37;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &Globals_9);
  libs__globals__get_opt_tuple_2_p_0(Globals_9, &OptTuple_10);
  HigherOrder_11 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
  TypeSpec_12 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  UserTypeSpec_13 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 0))) & (MR_Integer) 1);
  SizeLimit_14 = ((MR_Integer) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 17))));
  ArgLimit_15 = ((MR_Integer) ((MR_hl_field(0, OptTuple_10, (MR_Integer) 18))));
  {
    Params_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_16, 0) = (MR_Box) (((((MR_Unsigned) (HigherOrder_11) << 2)) | (((((MR_Unsigned) (TypeSpec_12) << 1)) | (MR_Unsigned) (UserTypeSpec_13)))));
    MR_hl_field(0, Params_16, 1) = ((MR_Box) (SizeLimit_14));
    MR_hl_field(0, Params_16, 2) = ((MR_Box) (ArgLimit_15));
  }
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__specialize_in_module_scalar_common_1[0]), &NewPredMap0_17);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), &GoalSizes0_18);
  mercury__set__init_1_p_0((MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_ho_request_0), &Requests0_19);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_version_info_0), &VersionInfo0_20);
  Var_41 = mercury__counter__init_1_f_0((MR_Integer) 1);
  {
    STATE_VARIABLE_GlobalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_36));
    MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, 1) = ((MR_Box) (Params_16));
    MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, 2) = ((MR_Box) (GoalSizes0_18));
    MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, 3) = ((MR_Box) (Requests0_19));
    MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, 4) = ((MR_Box) (NewPredMap0_17));
    MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, 5) = ((MR_Box) (VersionInfo0_20));
    MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, 6) = ((MR_Box) (Var_41));
  }
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &ValidPredIds_22);
  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &TypeSpecInfo_23);
  UserSpecPredIdSet_25 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_23, (MR_Integer) 1))));
  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 99, &DebugSpec_28);
  switch (DebugSpec_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MaybeProgressStream_29 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MaybeProgressStream_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeProgressStream_29, 0) = ((MR_Box) (ProgressStream_6));
      }
      break;
  }
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), UserSpecPredIdSet_25, &UserSpecPredIds_30);
  if ((UserSpecPredIds_30 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    NonUserSpecPredIds_31 = ValidPredIds_22;
    STATE_VARIABLE_GlobalInfo_50_50 = STATE_VARIABLE_GlobalInfo_40_40;
  }
  else
  {
    MR_Word ValidPredIdSet_34;
    MR_Word NonUserSpecPredIdSet_35;
    MR_Word STATE_VARIABLE_GlobalInfo_44_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_GlobalInfo_49_49;
    MR_Word Var_678;
    MR_Word Var_679;
    MR_Word Var_680;
    MR_Word Var_681;
    MR_Word Var_682;
    MR_Word Var_683;
    MR_Integer Var_687;
    MR_Integer Var_688;
    MR_Unsigned packed_word_3;
    MR_Box conv1_STATE_VARIABLE_GlobalInfo_49_49;

    mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIds_22, &ValidPredIdSet_34);
    mercury__set__difference_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ValidPredIdSet_34, UserSpecPredIdSet_25, &NonUserSpecPredIdSet_35);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), NonUserSpecPredIdSet_35, &NonUserSpecPredIds_31);
    Var_678 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, (MR_Integer) 0))));
    Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, (MR_Integer) 1))));
    Var_679 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, (MR_Integer) 2))));
    Var_680 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, (MR_Integer) 3))));
    Var_681 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, (MR_Integer) 4))));
    Var_682 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, (MR_Integer) 5))));
    Var_683 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_40_40, (MR_Integer) 6))));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(0, Var_46, (MR_Integer) 0)));
    Var_687 = ((MR_Integer) ((MR_hl_field(0, Var_46, (MR_Integer) 1))));
    Var_688 = ((MR_Integer) ((MR_hl_field(0, Var_46, (MR_Integer) 2))));
    {
      Var_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_47, 0) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 0)));
      MR_hl_field(0, Var_47, 1) = ((MR_Box) (Var_687));
      MR_hl_field(0, Var_47, 2) = ((MR_Box) (Var_688));
    }
    {
      STATE_VARIABLE_GlobalInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_GlobalInfo_44_44, 0) = ((MR_Box) (Var_678));
      MR_hl_field(0, STATE_VARIABLE_GlobalInfo_44_44, 1) = ((MR_Box) (Var_47));
      MR_hl_field(0, STATE_VARIABLE_GlobalInfo_44_44, 2) = ((MR_Box) (Var_679));
      MR_hl_field(0, STATE_VARIABLE_GlobalInfo_44_44, 3) = ((MR_Box) (Var_680));
      MR_hl_field(0, STATE_VARIABLE_GlobalInfo_44_44, 4) = ((MR_Box) (Var_681));
      MR_hl_field(0, STATE_VARIABLE_GlobalInfo_44_44, 5) = ((MR_Box) (Var_682));
      MR_hl_field(0, STATE_VARIABLE_GlobalInfo_44_44, 6) = ((MR_Box) (Var_683));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_in_module_scalar_common_3[0]), UserSpecPredIds_30, ((MR_Box) (STATE_VARIABLE_GlobalInfo_44_44)), &conv1_STATE_VARIABLE_GlobalInfo_49_49);
    STATE_VARIABLE_GlobalInfo_49_49 = ((MR_Word) (conv1_STATE_VARIABLE_GlobalInfo_49_49));
    transform_hlds__higher_order__make_specialized_preds__process_ho_spec_requests_5_p_0(MaybeProgressStream_29, STATE_VARIABLE_GlobalInfo_49_49, &STATE_VARIABLE_GlobalInfo_50_50);
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
    MR_Word STATE_VARIABLE_GlobalInfo_53_53;
    MR_Box conv3_STATE_VARIABLE_GlobalInfo_53_53;

    mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__higher_order__higher_order_global_info__transform_hlds__higher_order__higher_order_global_info__type_ctor_info_higher_order_global_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_in_module_scalar_common_3[1]), NonUserSpecPredIds_31, ((MR_Box) (STATE_VARIABLE_GlobalInfo_50_50)), &conv3_STATE_VARIABLE_GlobalInfo_53_53);
    STATE_VARIABLE_GlobalInfo_53_53 = ((MR_Word) (conv3_STATE_VARIABLE_GlobalInfo_53_53));
    transform_hlds__higher_order__make_specialized_preds__recursively_process_ho_spec_requests_5_p_0(MaybeProgressStream_29, STATE_VARIABLE_GlobalInfo_53_53, &STATE_VARIABLE_GlobalInfo_54_54);
  }
  else
    STATE_VARIABLE_GlobalInfo_54_54 = STATE_VARIABLE_GlobalInfo_50_50;
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_GlobalInfo_54_54, (MR_Integer) 0))));
  mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__higher_order__specialize_in_module_scalar_common_3[2]), UserSpecPredIds_30, ((MR_Box) (Var_57)), &conv5_STATE_VARIABLE_ModuleInfo_37);
  *STATE_VARIABLE_ModuleInfo_37 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_37));
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
