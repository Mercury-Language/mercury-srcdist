/*
** Automatically generated from `intermod_mark_exported.m'
** by the Mercury compiler,
** version rotd-2024-07-14
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


// :- module transform_hlds.intermod_mark_exported.
// :- implementation.

/*
INIT mercury__transform_hlds__intermod_mark_exported__init
ENDINIT
*/

#include "transform_hlds.intermod_mark_exported.mih"


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
#include "libs.maybe_util.mih"
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
#include "transform_hlds.intermod_decide.mih"
#include "transform_hlds.intermod_info.mih"
#include "transform_hlds.intermod_status.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_mark_exported__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0;

static void MR_CALL 
transform_hlds__intermod_mark_exported__IntroducedFrom__pred__method_infos_to_pred_ids__188__1_2_p_0(
  MR_Word LambdaHeadVar__1_10,
  MR_Word * LambdaHeadVar__2_11);

static MR_bool MR_CALL 
transform_hlds__intermod_mark_exported__IntroducedFrom__pred__adjust_status_of_special_preds__149__1_4_p_0(
  MR_Word TypeCtor_4,
  MR_Word SpecPredMaps_8,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_instance_defn_4_p_0(
  MR_Word Instance0_5,
  MR_Word * Instance_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_instances_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_defn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static MR_bool MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_type_defn_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn0_7,
  MR_Word * TypeDefn_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__intermod_mark_exported__opt_export_preds_in_pred_id_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PredIdTable_0_2,
  MR_Word * STATE_VARIABLE_PredIdTable_3);


static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_1[8][3];

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_2[1][2];

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_3[1][1];

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_5[4][7];

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_6[1][5];




static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_1[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__intermod_mark_exported__maybe_opt_export_class_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__intermod_mark_exported__maybe_opt_export_class_instances_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__intermod_mark_exported__maybe_opt_export_instance_defn_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_2[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
};

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_5[4][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__special_pred__hlds__special_pred__type_ctor_info_special_pred_maps_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_mark_exported_scalar_common_6[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_class__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod_mark_exported__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod_mark_exported__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__intermod_mark_exported__list__ti_list_1hlds__hlds_class__type_ctor_info_hlds_instance_defn_0)
  }
};

static void MR_CALL 
transform_hlds__intermod_mark_exported__IntroducedFrom__pred__method_infos_to_pred_ids__188__1_2_p_0(
  MR_Word LambdaHeadVar__1_10,
  MR_Word * LambdaHeadVar__2_11)
{
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_10, (MR_Integer) 3))));

  *LambdaHeadVar__2_11 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
}

static MR_bool MR_CALL 
transform_hlds__intermod_mark_exported__IntroducedFrom__pred__adjust_status_of_special_preds__149__1_4_p_0(
  MR_Word TypeCtor_4,
  MR_Word SpecPredMaps_8,
  MR_Word LambdaHeadVar__1_13,
  MR_Word * LambdaHeadVar__2_14)
{
  MR_bool succeeded;

  succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(SpecPredMaps_8, LambdaHeadVar__1_13, TypeCtor_4, LambdaHeadVar__2_14);
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_instance_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_11;

  transform_hlds__intermod_mark_exported__IntroducedFrom__pred__method_infos_to_pred_ids__188__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_11));
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_instance_defn_4_p_0(
  MR_Word Instance0_5,
  MR_Word * Instance_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24)
{
  MR_Word InstanceModule_8 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 0))));
  MR_Word InstanceStatus0_9 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 1))));
  MR_Word TVarSet_10 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 2))));
  MR_Word OriginalTypes_11 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 3))));
  MR_Word Types_12 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 4))));
  MR_Word Constraints_13 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 5))));
  MR_Word MaybeSubsumedContext_14 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 6))));
  MR_Word ConstraintProofs_15 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 7))));
  MR_Word Body_16 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 8))));
  MR_Word MaybeMethodInfos_17 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 9))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, Instance0_5, (MR_Integer) 10))));
  MR_Word ToWrite_19;

  ToWrite_19 = transform_hlds__intermod_status__instance_status_to_write_1_f_0(InstanceStatus0_9);
  switch (ToWrite_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Instance_6 = Instance0_5;
        *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          *Instance_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (InstanceModule_8));
          MR_hl_field(0, base, 1) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
          MR_hl_field(0, base, 2) = ((MR_Box) (TVarSet_10));
          MR_hl_field(0, base, 3) = ((MR_Box) (OriginalTypes_11));
          MR_hl_field(0, base, 4) = ((MR_Box) (Types_12));
          MR_hl_field(0, base, 5) = ((MR_Box) (Constraints_13));
          MR_hl_field(0, base, 6) = ((MR_Box) (MaybeSubsumedContext_14));
          MR_hl_field(0, base, 7) = ((MR_Box) (ConstraintProofs_15));
          MR_hl_field(0, base, 8) = ((MR_Box) (Body_16));
          MR_hl_field(0, base, 9) = ((MR_Box) (MaybeMethodInfos_17));
          MR_hl_field(0, base, 10) = ((MR_Box) (Context_18));
        }
        if ((MaybeMethodInfos_17 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
        else
        {
          MR_Word MethodInfos_21 = ((MR_Word) ((MR_hl_field(1, MaybeMethodInfos_17, (MR_Integer) 0))));
          MR_Word PredIds_22;
          MR_Word PredIds0_27;
          MR_Word PredIdTable0_30;
          MR_Word PredIdTable_31;

          mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[7]), MethodInfos_21, &PredIds0_27);
          mercury__list__remove_adjacent_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_27, &PredIds_22);
          hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, &PredIdTable0_30);
          transform_hlds__intermod_mark_exported__opt_export_preds_in_pred_id_table_3_p_0(PredIds_22, PredIdTable0_30, &PredIdTable_31);
          hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_31, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24);
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_instances_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Instance_6;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_24;

  transform_hlds__intermod_mark_exported__maybe_opt_export_instance_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Instance_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_ModuleInfo_24);
  *wrapper_arg_2 = ((MR_Box) (conv1_Instance_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_24));
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_instances_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_9,
  MR_Word * STATE_VARIABLE_ModuleInfo_10)
{
  MR_Word ClassId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word InstanceList0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word InstanceList_7;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_10;

  mercury__list__map_foldl_5_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[6]), InstanceList0_6, &InstanceList_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_9)), &conv2_STATE_VARIABLE_ModuleInfo_10);
  *STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_10));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassId_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (InstanceList_7));
  }
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_defn_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_11;

  transform_hlds__intermod_mark_exported__IntroducedFrom__pred__method_infos_to_pred_ids__188__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_11);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_11));
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_class_defn_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_Word ClassId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word ClassDefn0_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ClassDefn_7;
  MR_Word ToWrite_9;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 0))));

  ToWrite_9 = transform_hlds__intermod_status__typeclass_status_to_write_1_f_0(Var_13);
  switch (ToWrite_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        ClassDefn_7 = ClassDefn0_6;
        *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PredIds_10;
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 8))));
        MR_Word PredIds0_49;
        MR_Word PredIdTable0_52;
        MR_Word PredIdTable_53;
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 1))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 2))));
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 3))));
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 4))));
        MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 5))));
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 6))));
        MR_Word Var_34 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 7))));
        MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 9))));
        MR_Word Var_37 = ((MR_Unsigned) ((MR_hl_field(0, ClassDefn0_6, (MR_Integer) 10))) & (MR_Integer) 1);

        {
          ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClassDefn_7, 0) = ((MR_Box) (((MR_Box) ((MR_Unsigned) 12U))));
          MR_hl_field(0, ClassDefn_7, 1) = ((MR_Box) (Var_28));
          MR_hl_field(0, ClassDefn_7, 2) = ((MR_Box) (Var_29));
          MR_hl_field(0, ClassDefn_7, 3) = ((MR_Box) (Var_30));
          MR_hl_field(0, ClassDefn_7, 4) = ((MR_Box) (Var_31));
          MR_hl_field(0, ClassDefn_7, 5) = ((MR_Box) (Var_32));
          MR_hl_field(0, ClassDefn_7, 6) = ((MR_Box) (Var_33));
          MR_hl_field(0, ClassDefn_7, 7) = ((MR_Box) (Var_34));
          MR_hl_field(0, ClassDefn_7, 8) = ((MR_Box) (Var_35));
          MR_hl_field(0, ClassDefn_7, 9) = ((MR_Box) (Var_36));
          MR_hl_field(0, ClassDefn_7, 10) = (MR_Box) ((MR_Unsigned) (Var_37));
        }
        mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_method_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[5]), Var_35, &PredIds0_49);
        mercury__list__remove_adjacent_dups_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredIds0_49, &PredIds_10);
        hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIdTable0_52);
        transform_hlds__intermod_mark_exported__opt_export_preds_in_pred_id_table_3_p_0(PredIds_10, PredIdTable0_52, &PredIdTable_53);
        hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_53, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
      }
      break;
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ClassId_5));
    MR_hl_field(0, base, 1) = ((MR_Box) (ClassDefn_7));
  }
}

static MR_bool MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_type_defn_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_14;

  succeeded = transform_hlds__intermod_mark_exported__IntroducedFrom__pred__adjust_status_of_special_preds__149__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_14);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_14));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_type_defn_5_p_0(
  MR_Word TypeCtor_6,
  MR_Word TypeDefn0_7,
  MR_Word * TypeDefn_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  MR_bool succeeded;
  MR_Word ModuleName_10;

  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &ModuleName_10);
  succeeded = transform_hlds__intermod_decide__should_opt_export_type_defn_3_p_0(ModuleName_10, TypeCtor_6, TypeDefn0_7);
  if (succeeded)
  {
    MR_Word SpecialPredList_15;
    MR_Word SpecPredMaps_16;
    MR_Word PredIds_17;
    MR_Word Var_18;
    MR_Word PredIdTable0_21;
    MR_Word PredIdTable_22;

    hlds__hlds_data__set_type_defn_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 12U))), TypeDefn0_7, TypeDefn_8);
    hlds__special_pred__special_pred_list_1_p_0(&SpecialPredList_15);
    hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &SpecPredMaps_16);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&transform_hlds__intermod_mark_exported_scalar_common_5[2]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (transform_hlds__intermod_mark_exported__maybe_opt_export_type_defn_5_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (TypeCtor_6));
      MR_hl_field(0, Var_18, 4) = ((MR_Box) (SpecPredMaps_16));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), Var_18, SpecialPredList_15, &PredIds_17);
    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_11, &PredIdTable0_21);
    transform_hlds__intermod_mark_exported__opt_export_preds_in_pred_id_table_3_p_0(PredIds_17, PredIdTable0_21, &PredIdTable_22);
    hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_22, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12);
  }
  else
  {
    *TypeDefn_8 = TypeDefn0_7;
    *STATE_VARIABLE_ModuleInfo_12 = STATE_VARIABLE_ModuleInfo_0_11;
  }
}

void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_entities_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_10,
  MR_Word * STATE_VARIABLE_ModuleInfo_11)
{
  MR_Word Globals_6;
  MR_Word VeryVerbose_7;
  MR_Word IntermodInfo_9;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &Globals_6);
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 76, &VeryVerbose_7);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_4, VeryVerbose_7, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
  transform_hlds__intermod_decide__decide_what_to_opt_export_2_p_0(STATE_VARIABLE_ModuleInfo_0_10, &IntermodInfo_9);
  transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0(IntermodInfo_9, STATE_VARIABLE_ModuleInfo_0_10, STATE_VARIABLE_ModuleInfo_11);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_4, VeryVerbose_7, (MR_String) " done\n");
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;
  MR_Word conv6_STATE_VARIABLE_ModuleInfo_10;

  transform_hlds__intermod_mark_exported__maybe_opt_export_class_instances_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_ModuleInfo_10);
  *wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_ModuleInfo_10));
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__intermod_mark_exported__maybe_opt_export_class_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_12));
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_TypeDefn_8;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_12;

  transform_hlds__intermod_mark_exported__maybe_opt_export_type_defn_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_TypeDefn_8, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_TypeDefn_8));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_12));
}

void MR_CALL 
transform_hlds__intermod_mark_exported__maybe_opt_export_listed_entities_3_p_0(
  MR_Word IntermodInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * STATE_VARIABLE_ModuleInfo_9)
{
  MR_Word PredDeclsSet_6;
  MR_Word PredDecls_7;
  MR_Word STATE_VARIABLE_ModuleInfo_10_10;
  MR_Word STATE_VARIABLE_ModuleInfo_11_11;
  MR_Word STATE_VARIABLE_ModuleInfo_12_12;
  MR_Word PredIdTable0_14;
  MR_Word PredIdTable_15;
  MR_Word TypeTable0_16;
  MR_Word TypeTable_17;
  MR_Word STATE_VARIABLE_ModuleInfo_9_19;
  MR_Word Classes0_21;
  MR_Word ClassAL0_22;
  MR_Word ClassAL_23;
  MR_Word Classes_24;
  MR_Word STATE_VARIABLE_ModuleInfo_11_26;
  MR_Word Instances0_31;
  MR_Word InstanceAL0_32;
  MR_Word InstanceAL_33;
  MR_Word Instances_34;
  MR_Word STATE_VARIABLE_ModuleInfo_11_36;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_9_19;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_11_26;
  MR_Box conv8_STATE_VARIABLE_ModuleInfo_11_36;

  transform_hlds__intermod_info__intermod_info_get_pred_decls_2_p_0(IntermodInfo_4, &PredDeclsSet_6);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDeclsSet_6, &PredDecls_7);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_8, &PredIdTable0_14);
  transform_hlds__intermod_mark_exported__opt_export_preds_in_pred_id_table_3_p_0(PredDecls_7, PredIdTable0_14, &PredIdTable_15);
  hlds__hlds_module__module_info_set_pred_id_table_3_p_0(PredIdTable_15, STATE_VARIABLE_ModuleInfo_0_8, &STATE_VARIABLE_ModuleInfo_10_10);
  hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_10_10, &TypeTable0_16);
  hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[2]), TypeTable0_16, &TypeTable_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_10_10)), &conv2_STATE_VARIABLE_ModuleInfo_9_19);
  STATE_VARIABLE_ModuleInfo_9_19 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_9_19));
  hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_17, STATE_VARIABLE_ModuleInfo_9_19, &STATE_VARIABLE_ModuleInfo_11_11);
  hlds__hlds_module__module_info_get_class_table_2_p_0(STATE_VARIABLE_ModuleInfo_11_11, &Classes0_21);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), Classes0_21, &ClassAL0_22);
  mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[0]), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[3]), ClassAL0_22, &ClassAL_23, ((MR_Box) (STATE_VARIABLE_ModuleInfo_11_11)), &conv5_STATE_VARIABLE_ModuleInfo_11_26);
  STATE_VARIABLE_ModuleInfo_11_26 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_11_26));
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassAL_23, &Classes_24);
  hlds__hlds_module__module_info_set_class_table_3_p_0(Classes_24, STATE_VARIABLE_ModuleInfo_11_26, &STATE_VARIABLE_ModuleInfo_12_12);
  hlds__hlds_module__module_info_get_instance_table_2_p_0(STATE_VARIABLE_ModuleInfo_12_12, &Instances0_31);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_2[0]), Instances0_31, &InstanceAL0_32);
  mercury__list__map_foldl_5_p_0((MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[1]), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[1]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_1[4]), InstanceAL0_32, &InstanceAL_33, ((MR_Box) (STATE_VARIABLE_ModuleInfo_12_12)), &conv8_STATE_VARIABLE_ModuleInfo_11_36);
  STATE_VARIABLE_ModuleInfo_11_36 = ((MR_Word) (conv8_STATE_VARIABLE_ModuleInfo_11_36));
  mercury__map__from_sorted_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&transform_hlds__intermod_mark_exported_scalar_common_2[0]), InstanceAL_33, &Instances_34);
  hlds__hlds_module__module_info_set_instance_table_3_p_0(Instances_34, STATE_VARIABLE_ModuleInfo_11_36, STATE_VARIABLE_ModuleInfo_9);
}

static void MR_CALL 
transform_hlds__intermod_mark_exported__opt_export_preds_in_pred_id_table_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PredIdTable_0_2,
  MR_Word * STATE_VARIABLE_PredIdTable_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_PredIdTable_3 = STATE_VARIABLE_PredIdTable_0_2;
    else
    {
      MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredIds_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo0_10;
      MR_Word PredStatus0_11;
      MR_Word ToWrite_12;
      MR_Word STATE_VARIABLE_PredIdTable_27_27;
      MR_Box conv0_PredInfo0_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PredIdTable_0_2;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), STATE_VARIABLE_PredIdTable_0_2, ((MR_Box) (PredId_7)), &conv0_PredInfo0_10);
      PredInfo0_10 = ((MR_Word) (conv0_PredInfo0_10));
      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_10, &PredStatus0_11);
      ToWrite_12 = transform_hlds__intermod_status__pred_status_to_write_1_f_0(PredStatus0_11);
      switch (ToWrite_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_PredIdTable_27_27 = STATE_VARIABLE_PredIdTable_0_2;
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredStatus_15;
            MR_Word PredInfo_17;
            MR_Word Origin_13;
            MR_Word Var_20;
            MR_Word Var_21;

            hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_10, &Origin_13);
            succeeded = ((MR_tag((MR_Word) Origin_13)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_20 = ((MR_Word) ((MR_hl_field(1, Origin_13, (MR_Integer) 0))));
              succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_21 = ((MR_Unsigned) ((MR_hl_field(0, Var_20, (MR_Integer) 0))) & (MR_Integer) 3);
                succeeded = (Var_21 == (MR_Integer) 0);
              }
            }
            if (succeeded)
              PredStatus_15 = (MR_Word) (((MR_Box) ((MR_Unsigned) 24U)));
            else
            {
              MR_Word Var_23 = (MR_Word) (PredStatus0_11);

              succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 1);
              if (succeeded)
                PredStatus_15 = (MR_Word) (((MR_Box) (MR_mkword(1, &transform_hlds__intermod_mark_exported_scalar_common_3[0]))));
              else
                PredStatus_15 = (MR_Word) (((MR_Box) ((MR_Unsigned) 16U)));
            }
            hlds__hlds_pred__pred_info_set_status_3_p_0(PredStatus_15, PredInfo0_10, &PredInfo_17);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_7)), ((MR_Box) (PredInfo_17)), STATE_VARIABLE_PredIdTable_0_2, &STATE_VARIABLE_PredIdTable_27_27);
          }
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_8;
      next_value_of_STATE_VARIABLE_PredIdTable_0_2 = STATE_VARIABLE_PredIdTable_27_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PredIdTable_0_2 = next_value_of_STATE_VARIABLE_PredIdTable_0_2;
      continue;
    }
    break;
  }
}

void mercury__transform_hlds__intermod_mark_exported__init(void)
{
}

void mercury__transform_hlds__intermod_mark_exported__init_type_tables(void)
{
}

void mercury__transform_hlds__intermod_mark_exported__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__intermod_mark_exported__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.intermod_mark_exported.
