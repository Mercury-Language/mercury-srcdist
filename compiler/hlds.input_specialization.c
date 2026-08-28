/*
** Automatically generated from `input_specialization.m'
** by the Mercury compiler,
** version rotd-2026-08-28
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


// :- module hlds.input_specialization.
// :- implementation.

/*
INIT mercury__hlds__input_specialization__init
ENDINIT
*/

#include "hlds.input_specialization.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_info_types.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
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
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct2 hlds__input_specialization__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0hlds__hlds_module__type_ctor_info_input_spec_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__input_specialization__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0hlds__hlds_module__type_ctor_info_input_spec_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__input_specialization__list__pti_list_1__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__input_specialization__set_tree234__pti_set_tree234_1__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0;

static const MR_PseudoTypeInfo hlds__input_specialization__hlds__input_specialization__field_types_arg_to_specialize_0_0[2];

static const MR_DuFunctorDesc hlds__input_specialization__hlds__input_specialization__du_functor_desc_arg_to_specialize_0_0;

static const MR_DuFunctorDescPtr hlds__input_specialization__hlds__input_specialization__du_stag_ordered_arg_to_specialize_0_0[1];

static const MR_DuPtagLayout hlds__input_specialization__hlds__input_specialization__du_ptag_ordered_arg_to_specialize_0[1];

static const MR_DuFunctorDescPtr hlds__input_specialization__hlds__input_specialization__du_name_ordered_arg_to_specialize_0[1];

static const MR_Integer hlds__input_specialization__hlds__input_specialization__functor_number_map_arg_to_specialize_0[1];

static void MR_CALL 
hlds__input_specialization____Compare____arg_to_specialize_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__input_specialization____Unify____arg_to_specialize_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__input_specialization__update_exported_proc_id_if_needed_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SpecPredIdSet_6,
  MR_Word STATE_VARIABLE_ExportedProc_0_17,
  MR_Word * STATE_VARIABLE_ExportedProc_18);

static void MR_CALL 
hlds__input_specialization__find_original_proc_id_in_updated_proc_table_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * CurProcId_3);

static void MR_CALL 
hlds__input_specialization__maybe_input_specialize_in_pred_6_p_0(
  MR_Word InputSpecTable_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SpecPredIds_0_39,
  MR_Word * STATE_VARIABLE_SpecPredIds_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42);

static void MR_CALL 
hlds__input_specialization__input_specialize_in_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadArgToSpec_7,
  MR_Word TailArgsToSpec_8,
  MR_Word STATE_VARIABLE_PredInfo_0_22,
  MR_Word * STATE_VARIABLE_PredInfo_23);

static void MR_CALL 
hlds__input_specialization__input_specialize_proc_table_in_given_arg_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word InputSpecInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
hlds__input_specialization__create_input_specialized_proc_infos_6_p_0(
  MR_Integer OrigProcId_7,
  MR_Word OrigProcInfo_8,
  MR_Integer ArgNum_9,
  MR_Word ReplaceOrAdd_10,
  MR_Word SpecInsts_11,
  MR_Word * SpecProcInfos_12);

static void MR_CALL 
hlds__input_specialization__rebuild_proc_table_loop_4_p_0(
  MR_Integer ProcNum_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4);

static void MR_CALL 
hlds__input_specialization__mark_procs_as_input_specialized_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__input_specialization__find_args_to_specialize_4_p_0(
  MR_Word InModuleMap_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__input_specialization__input_specialize_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__input_specialization__input_specialize_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__input_specialization____Unify____arg_to_specialize_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__input_specialization____Compare____arg_to_specialize_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__input_specialization_scalar_common_1[1][2];

static /* final */ const MR_Box hlds__input_specialization_scalar_common_2[1][3];

static /* final */ const MR_Box hlds__input_specialization_scalar_common_3[1][9];

static /* final */ const MR_Box hlds__input_specialization_scalar_common_4[1][7];




static /* final */ const MR_Box hlds__input_specialization_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__input_specialization_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_input_spec_info_0))
  },
};

static /* final */ const MR_Box hlds__input_specialization_scalar_common_3[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__input_specialization__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0hlds__hlds_module__type_ctor_info_input_spec_info_0)),
    ((MR_Box) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__input_specialization__list__pti_list_1__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__input_specialization__list__pti_list_1__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box hlds__input_specialization_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__input_specialization__set_tree234__pti_set_tree234_1__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct2 hlds__input_specialization__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0hlds__hlds_module__type_ctor_info_input_spec_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0),
    (MR_TypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_input_spec_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__input_specialization__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0hlds__hlds_module__type_ctor_info_input_spec_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__input_specialization__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_mer_type_0hlds__hlds_module__type_ctor_info_input_spec_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__input_specialization__list__pti_list_1__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__input_specialization__set_tree234__pti_set_tree234_1__plain_hlds__pred_proc_id__type_ctor_info_pred_id_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  { (MR_PseudoTypeInfo) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0) }
};

static const MR_PseudoTypeInfo hlds__input_specialization__hlds__input_specialization__field_types_arg_to_specialize_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_input_spec_info_0)
};

static const MR_DuFunctorDesc hlds__input_specialization__hlds__input_specialization__du_functor_desc_arg_to_specialize_0_0 = {
  (MR_String) "arg_to_specialize",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__input_specialization__hlds__input_specialization__field_types_arg_to_specialize_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__input_specialization__hlds__input_specialization__du_stag_ordered_arg_to_specialize_0_0[1] = { &hlds__input_specialization__hlds__input_specialization__du_functor_desc_arg_to_specialize_0_0 };

static const MR_DuPtagLayout hlds__input_specialization__hlds__input_specialization__du_ptag_ordered_arg_to_specialize_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__input_specialization__hlds__input_specialization__du_stag_ordered_arg_to_specialize_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__input_specialization__hlds__input_specialization__du_name_ordered_arg_to_specialize_0[1] = { &hlds__input_specialization__hlds__input_specialization__du_functor_desc_arg_to_specialize_0_0 };

static const MR_Integer hlds__input_specialization__hlds__input_specialization__functor_number_map_arg_to_specialize_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__input_specialization__hlds__input_specialization__type_ctor_info_arg_to_specialize_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__input_specialization____Unify____arg_to_specialize_0_0_10001)),
  ((MR_Box) (hlds__input_specialization____Compare____arg_to_specialize_0_0_10001)),
  (MR_String) "hlds.input_specialization",
  (MR_String) "arg_to_specialize",
  { hlds__input_specialization__hlds__input_specialization__du_name_ordered_arg_to_specialize_0 },
  { hlds__input_specialization__hlds__input_specialization__du_ptag_ordered_arg_to_specialize_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__input_specialization__hlds__input_specialization__functor_number_map_arg_to_specialize_0,

};

static void MR_CALL 
hlds__input_specialization____Compare____arg_to_specialize_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      hlds__hlds_module____Compare____input_spec_info_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
hlds__input_specialization____Unify____arg_to_specialize_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = hlds__hlds_module____Unify____input_spec_info_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
hlds__input_specialization__update_exported_proc_id_if_needed_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SpecPredIdSet_6,
  MR_Word STATE_VARIABLE_ExportedProc_0_17,
  MR_Word * STATE_VARIABLE_ExportedProc_18)
{
  MR_bool succeeded;
  MR_Word Lang_8 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ExportedProc_0_17, 0))) & (MR_Integer) 3);
  MR_Word PredId_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExportedProc_0_17, 1))));
  MR_Integer OrigProcId_10 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_ExportedProc_0_17, 2))));
  MR_String Name_11 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_ExportedProc_0_17, 3))));
  MR_Word Ctxt_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ExportedProc_0_17, 4))));

  succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), SpecPredIdSet_6, ((MR_Box) (PredId_9)));
  if (succeeded)
  {
    MR_Word PredInfo_13;
    MR_Word ProcTable_14;
    MR_Word ProcIdsInfos_15;
    MR_Integer CurProcId_16;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_9, &PredInfo_13);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_13, &ProcTable_14);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable_14, &ProcIdsInfos_15);
    hlds__input_specialization__find_original_proc_id_in_updated_proc_table_3_p_0(OrigProcId_10, ProcIdsInfos_15, &CurProcId_16);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ExportedProc_18 = base;
      MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_8));
      MR_hl_field(0, base, 1) = ((MR_Box) (PredId_9));
      MR_hl_field(0, base, 2) = ((MR_Box) (CurProcId_16));
      MR_hl_field(0, base, 3) = ((MR_Box) (Name_11));
      MR_hl_field(0, base, 4) = ((MR_Box) (Ctxt_12));
    }
  }
  else
    *STATE_VARIABLE_ExportedProc_18 = STATE_VARIABLE_ExportedProc_0_17;
}

static void MR_CALL 
hlds__input_specialization__find_original_proc_id_in_updated_proc_table_3_p_0(
  MR_Integer HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer * CurProcId_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.input_specialization.find_original_proc_id_in_updated_proc_table\'/3", (MR_String) "search failed");
        return;
      }
    else
    {
      MR_Integer ProcId_9;
      MR_Word ProcInfo_10;
      MR_Word ProcIdsInfos_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word MaybeInputSpec_13;
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

      ProcId_9 = ((MR_Integer) ((MR_hl_field(0, Var_16, 0))));
      ProcInfo_10 = ((MR_Word) ((MR_hl_field(0, Var_16, 1))));
      hlds__hlds_proc__proc_info_get_maybe_input_spec_2_p_0(ProcInfo_10, &MaybeInputSpec_13);
      switch (MR_tag((MR_Word) MaybeInputSpec_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.input_specialization.find_original_proc_id_in_updated_proc_table\'/3", (MR_String) "not_involved_in_input_spec failed");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer OrigProcId_14 = ((MR_Integer) ((MR_hl_field(1, MaybeInputSpec_13, 0))));

            succeeded = (OrigProcId_14 == HeadVar__1_1);
            if (succeeded)
              *CurProcId_3 = ProcId_9;
            else
            {
              MR_Word next_value_of_HeadVar__2_2 = ProcIdsInfos_11;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer OrigProcId_22 = ((MR_Integer) ((MR_hl_field(2, MaybeInputSpec_13, 0))));

            succeeded = (OrigProcId_22 == HeadVar__1_1);
            if (succeeded)
              *CurProcId_3 = ProcId_9;
            else
            {
              MR_Word next_value_of_HeadVar__2_2 = ProcIdsInfos_11;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word next_value_of_HeadVar__2_2 = ProcIdsInfos_11;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__input_specialization__maybe_input_specialize_in_pred_6_p_0(
  MR_Word InputSpecTable_7,
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_SpecPredIds_0_39,
  MR_Word * STATE_VARIABLE_SpecPredIds_40,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42)
{
  MR_bool succeeded;
  MR_Word PredInfo0_11;
  MR_Word ModuleName_12;
  MR_Word InModuleMap_13;
  MR_Box conv0_InModuleMap_13;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_41, PredId_8, &PredInfo0_11);
  hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo0_11, &ModuleName_12);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__input_specialization_scalar_common_2[0]), InputSpecTable_7, ((MR_Box) (ModuleName_12)), &conv0_InModuleMap_13);
  if (succeeded)
  {
    InModuleMap_13 = ((MR_Word) (conv0_InModuleMap_13));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Origin_14;

    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_11, &Origin_14);
    switch (MR_tag((MR_Word) Origin_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word UserMade_15 = ((MR_Word) ((MR_hl_field(0, Origin_14, 0))));

          switch (MR_tag((MR_Word) UserMade_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word MaybeNewPredInfo_19;
                MR_Word ArgTypes_45;
                MR_Word ArgsToSpec_46;

                hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_11, &ArgTypes_45);
                hlds__input_specialization__find_args_to_specialize_4_p_0(InModuleMap_13, (MR_Integer) 1, ArgTypes_45, &ArgsToSpec_46);
                if ((ArgsToSpec_46 == (MR_Word) ((MR_Unsigned) 0U)))
                  MaybeNewPredInfo_19 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Word HeadArgToSpec_47 = ((MR_Word) ((MR_hl_field(1, ArgsToSpec_46, 0))));
                  MR_Word TailArgsToSpec_48 = ((MR_Word) ((MR_hl_field(1, ArgsToSpec_46, 1))));
                  MR_Word NewPredInfo_49;

                  hlds__input_specialization__input_specialize_in_pred_5_p_0(STATE_VARIABLE_ModuleInfo_0_41, HeadArgToSpec_47, TailArgsToSpec_48, PredInfo0_11, &NewPredInfo_49);
                  {
                    MaybeNewPredInfo_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeNewPredInfo_19, 0) = ((MR_Box) (NewPredInfo_49));
                  }
                }
                if ((MaybeNewPredInfo_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
                  *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
                }
                else
                {
                  MR_Word NewPredInfo_20 = ((MR_Word) ((MR_hl_field(1, MaybeNewPredInfo_19, 0))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_SpecPredIds_40 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (PredId_8));
                    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_SpecPredIds_0_39));
                  }
                  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_8, NewPredInfo_20, STATE_VARIABLE_ModuleInfo_0_41, STATE_VARIABLE_ModuleInfo_42);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
                *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
              }
              break;
            case (MR_Integer) 2:
              {
                *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
                *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, UserMade_15, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
                    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
                    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
          *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
          *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
        }
        break;
      case (MR_Integer) 3:
        {
          *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
          *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
        }
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_0_41;
    *STATE_VARIABLE_SpecPredIds_40 = STATE_VARIABLE_SpecPredIds_0_39;
  }
}

static void MR_CALL 
hlds__input_specialization__input_specialize_in_pred_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word HeadArgToSpec_7,
  MR_Word TailArgsToSpec_8,
  MR_Word STATE_VARIABLE_PredInfo_0_22,
  MR_Word * STATE_VARIABLE_PredInfo_23)
{
  while (MR_TRUE)
  {
    MR_Integer ArgNum_10 = ((MR_Integer) ((MR_hl_field(0, HeadArgToSpec_7, 0))));
    MR_Word InputSpecInfo_11 = ((MR_Word) ((MR_hl_field(0, HeadArgToSpec_7, 1))));
    MR_Word ProcTable0_12;
    MR_Word ProcIdInfos0_13;
    MR_Word ProcInfos1_14;
    MR_Word ProcInfos_15;
    MR_Word Changed_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_0_22, &ProcTable0_12);
    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ProcTable0_12, &ProcIdInfos0_13);
    hlds__input_specialization__mark_procs_as_input_specialized_2_p_0(ProcIdInfos0_13, &ProcInfos1_14);
    hlds__input_specialization__input_specialize_proc_table_in_given_arg_6_p_0(ModuleInfo_6, ArgNum_10, InputSpecInfo_11, ProcInfos1_14, &ProcInfos_15, &Changed_16);
    switch (Changed_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word ProcTable_17;
          MR_Word Markers0_18;
          MR_Word Markers_19;
          MR_Word Var_25;
          MR_Word STATE_VARIABLE_PredInfo_1_26;
          MR_Word STATE_VARIABLE_PredInfo_2_28;

          Var_25 = mercury__map__init_0_f_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0));
          hlds__input_specialization__rebuild_proc_table_loop_4_p_0((MR_Integer) 0, ProcInfos_15, Var_25, &ProcTable_17);
          hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_17, STATE_VARIABLE_PredInfo_0_22, &STATE_VARIABLE_PredInfo_1_26);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_1_26, &Markers0_18);
          hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 30, Markers0_18, &Markers_19);
          hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_19, STATE_VARIABLE_PredInfo_1_26, &STATE_VARIABLE_PredInfo_2_28);
          if ((TailArgsToSpec_8 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_PredInfo_23 = STATE_VARIABLE_PredInfo_2_28;
          else
          {
            MR_Word HeadTailArgToSpec_20 = ((MR_Word) ((MR_hl_field(1, TailArgsToSpec_8, 0))));
            MR_Word TailTailArgsToSpec_21 = ((MR_Word) ((MR_hl_field(1, TailArgsToSpec_8, 1))));
            MR_Word next_value_of_HeadArgToSpec_7 = HeadTailArgToSpec_20;
            MR_Word next_value_of_TailArgsToSpec_8 = TailTailArgsToSpec_21;
            MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_22 = STATE_VARIABLE_PredInfo_2_28;

            // direct tailcall eliminated
            ;
            HeadArgToSpec_7 = next_value_of_HeadArgToSpec_7;
            TailArgsToSpec_8 = next_value_of_TailArgsToSpec_8;
            STATE_VARIABLE_PredInfo_0_22 = next_value_of_STATE_VARIABLE_PredInfo_0_22;
            continue;
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_PredInfo_23 = STATE_VARIABLE_PredInfo_0_22;
        break;
    }
    break;
  }
}

static void MR_CALL 
hlds__input_specialization__input_specialize_proc_table_in_given_arg_6_p_0(
  MR_Word ModuleInfo_1,
  MR_Integer ArgNum_2,
  MR_Word InputSpecInfo_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Integer) 0;
  }
  else
  {
    MR_Word HeadProcInfo0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Word TailProcInfos0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word ArgModes_17;
    MR_Word SelectedArgMode_18;
    MR_Box conv0_SelectedArgMode_18;
    MR_Word InitInst_19;
    MR_Word FinalInst_20;
    MR_Word Var_30;
    MR_Word Var_31;

    hlds__hlds_proc__proc_info_get_argmodes_2_p_0(HeadProcInfo0_13, &ArgModes_17);
    mercury__list__det_index1_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_17, ArgNum_2, &conv0_SelectedArgMode_18);
    SelectedArgMode_18 = ((MR_Word) (conv0_SelectedArgMode_18));
    succeeded = hlds__mode_util__mode_get_insts_semidet_4_p_0(ModuleInfo_1, SelectedArgMode_18, &InitInst_19, &FinalInst_20);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) InitInst_19)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_30 = ((MR_Unsigned) ((MR_hl_field(1, InitInst_19, 0))) & (MR_Integer) 7);
        Var_31 = ((MR_Word) ((MR_hl_field(1, InitInst_19, 1))));
        succeeded = (Var_30 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(InitInst_19, FinalInst_20);
        }
      }
    }
    if (succeeded)
    {
      MR_Word TailProcInfos_21;
      MR_Word HeadInputSpecProc0_23;
      MR_Integer HeadProcId_24;
      MR_Word ReplaceOrAdd_25;
      MR_Word OoMInsts_26;
      MR_Word SpecInsts_28;
      MR_Word SpecProcInfos_29;
      MR_Word _Changed_22;

      hlds__input_specialization__input_specialize_proc_table_in_given_arg_6_p_0(ModuleInfo_1, ArgNum_2, InputSpecInfo_3, TailProcInfos0_14, &TailProcInfos_21, &_Changed_22);
      hlds__hlds_proc__proc_info_get_maybe_input_spec_2_p_0(HeadProcInfo0_13, &HeadInputSpecProc0_23);
      switch (MR_tag((MR_Word) HeadInputSpecProc0_23)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.input_specialization.input_specialize_proc_table_in_given_arg\'/6", (MR_String) "not_involved_in_input_spec");
            return;
          }
          break;
        case (MR_Integer) 1:
          HeadProcId_24 = ((MR_Integer) ((MR_hl_field(1, HeadInputSpecProc0_23, 0))));
          break;
        case (MR_Integer) 2:
          HeadProcId_24 = ((MR_Integer) ((MR_hl_field(2, HeadInputSpecProc0_23, 0))));
          break;
        case (MR_Integer) 3:
          HeadProcId_24 = ((MR_Integer) ((MR_hl_field(3, HeadInputSpecProc0_23, 0))));
          break;
      }
      ReplaceOrAdd_25 = ((MR_Unsigned) ((MR_hl_field(0, InputSpecInfo_3, 0))) & (MR_Integer) 1);
      OoMInsts_26 = ((MR_Word) ((MR_hl_field(0, InputSpecInfo_3, 1))));
      SpecInsts_28 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0), OoMInsts_26);
      hlds__input_specialization__create_input_specialized_proc_infos_6_p_0(HeadProcId_24, HeadProcInfo0_13, ArgNum_2, ReplaceOrAdd_25, SpecInsts_28, &SpecProcInfos_29);
      *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), SpecProcInfos_29, TailProcInfos_21);
      *HeadVar__6_6 = (MR_Integer) 1;
    }
    else
    {
      MR_Word TailProcInfos_34;

      hlds__input_specialization__input_specialize_proc_table_in_given_arg_6_p_0(ModuleInfo_1, ArgNum_2, InputSpecInfo_3, TailProcInfos0_14, &TailProcInfos_34, HeadVar__6_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadProcInfo0_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (TailProcInfos_34));
      }
    }
  }
}

static void MR_CALL 
hlds__input_specialization__create_input_specialized_proc_infos_6_p_0(
  MR_Integer OrigProcId_7,
  MR_Word OrigProcInfo_8,
  MR_Integer ArgNum_9,
  MR_Word ReplaceOrAdd_10,
  MR_Word SpecInsts_11,
  MR_Word * SpecProcInfos_12)
{
  if ((SpecInsts_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word InputSpec_13;
    MR_Word SpecOrigProcInfo_14;

    switch (ReplaceOrAdd_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          InputSpec_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, InputSpec_13, 0) = ((MR_Box) (OrigProcId_7));
        }
        break;
      case (MR_Integer) 0:
        {
          InputSpec_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, InputSpec_13, 0) = ((MR_Box) (OrigProcId_7));
        }
        break;
    }
    hlds__hlds_proc__proc_info_set_maybe_input_spec_3_p_0(InputSpec_13, OrigProcInfo_8, &SpecOrigProcInfo_14);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SpecProcInfos_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (SpecOrigProcInfo_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MR_Word HeadSpecInst_15 = ((MR_Word) ((MR_hl_field(1, SpecInsts_11, 0))));
    MR_Word TailSpecInsts_16 = ((MR_Word) ((MR_hl_field(1, SpecInsts_11, 1))));
    MR_Word OrigModes_17;
    MR_Word HeadSpecArgMode_18;
    MR_Word HeadSpecModes_19;
    MR_Word HeadSpecProcInfo0_20;
    MR_Word HeadSpecProcInfo_21;
    MR_Word TailSpecProcInfos_22;
    MR_Word Var_25;

    hlds__hlds_proc__proc_info_get_argmodes_2_p_0(OrigProcInfo_8, &OrigModes_17);
    {
      HeadSpecArgMode_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HeadSpecArgMode_18, 0) = ((MR_Box) (HeadSpecInst_15));
      MR_hl_field(0, HeadSpecArgMode_18, 1) = ((MR_Box) (HeadSpecInst_15));
    }
    mercury__list__det_replace_nth_element1_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgNum_9, ((MR_Box) (HeadSpecArgMode_18)), OrigModes_17, &HeadSpecModes_19);
    hlds__hlds_proc__proc_info_set_argmodes_3_p_0(HeadSpecModes_19, OrigProcInfo_8, &HeadSpecProcInfo0_20);
    {
      Var_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_25, 0) = ((MR_Box) (OrigProcId_7));
    }
    hlds__hlds_proc__proc_info_set_maybe_input_spec_3_p_0(Var_25, HeadSpecProcInfo0_20, &HeadSpecProcInfo_21);
    hlds__input_specialization__create_input_specialized_proc_infos_6_p_0(OrigProcId_7, OrigProcInfo_8, ArgNum_9, ReplaceOrAdd_10, TailSpecInsts_16, &TailSpecProcInfos_22);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *SpecProcInfos_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadSpecProcInfo_21));
      MR_hl_field(1, base, 1) = ((MR_Box) (TailSpecProcInfos_22));
    }
  }
}

static void MR_CALL 
hlds__input_specialization__rebuild_proc_table_loop_4_p_0(
  MR_Integer ProcNum_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ProcTable_0_3,
  MR_Word * STATE_VARIABLE_ProcTable_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ProcTable_4 = STATE_VARIABLE_ProcTable_0_3;
    else
    {
      MR_Word ProcInfo_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ProcInfos_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer ProcId_13;
      MR_Word STATE_VARIABLE_ProcTable_1_16;
      MR_Integer Var_17;
      MR_Integer next_value_of_ProcNum_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ProcTable_0_3;

      hlds__pred_proc_id__proc_id_to_int_2_p_1(&ProcId_13, ProcNum_1);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_proc__hlds__hlds_proc__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_13)), ((MR_Box) (ProcInfo_10)), STATE_VARIABLE_ProcTable_0_3, &STATE_VARIABLE_ProcTable_1_16);
      Var_17 = (MR_Integer) ((MR_Unsigned) ProcNum_1 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ProcNum_1 = Var_17;
      next_value_of_HeadVar__2_2 = ProcInfos_11;
      next_value_of_STATE_VARIABLE_ProcTable_0_3 = STATE_VARIABLE_ProcTable_1_16;
      ProcNum_1 = next_value_of_ProcNum_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ProcTable_0_3 = next_value_of_STATE_VARIABLE_ProcTable_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__input_specialization__mark_procs_as_input_specialized_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer ProcId_3;
    MR_Word ProcInfo0_4;
    MR_Word ProcIdsInfos0_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ProcInfo_6;
    MR_Word ProcInfos_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_9;

    ProcId_3 = ((MR_Integer) ((MR_hl_field(0, Var_8, 0))));
    ProcInfo0_4 = ((MR_Word) ((MR_hl_field(0, Var_8, 1))));
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (ProcId_3));
    }
    hlds__hlds_proc__proc_info_set_maybe_input_spec_3_p_0(Var_9, ProcInfo0_4, &ProcInfo_6);
    hlds__input_specialization__mark_procs_as_input_specialized_2_p_0(ProcIdsInfos0_5, &ProcInfos_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcInfo_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcInfos_7));
    }
  }
}

static void MR_CALL 
hlds__input_specialization__find_args_to_specialize_4_p_0(
  MR_Word InModuleMap_1,
  MR_Integer ArgNum_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ArgType_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgTypes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgsToSpecTail_12;
    MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) ArgNum_2 + (MR_Unsigned) 1);
    MR_Word InputSpecInfo_13;
    MR_Box conv0_InputSpecInfo_13;

    hlds__input_specialization__find_args_to_specialize_4_p_0(InModuleMap_1, Var_15, ArgTypes_10, &ArgsToSpecTail_12);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_input_spec_info_0), InModuleMap_1, ((MR_Box) (ArgType_9)), &conv0_InputSpecInfo_13);
    if (succeeded)
    {
      InputSpecInfo_13 = ((MR_Word) (conv0_InputSpecInfo_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ArgToSpec_14;

      {
        ArgToSpec_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ArgToSpec_14, 0) = ((MR_Box) (ArgNum_2));
        MR_hl_field(0, ArgToSpec_14, 1) = ((MR_Box) (InputSpecInfo_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ArgToSpec_14));
        MR_hl_field(1, base, 1) = ((MR_Box) (ArgsToSpecTail_12));
      }
    }
    else
      *HeadVar__4_4 = ArgsToSpecTail_12;
  }
}

static void MR_CALL 
hlds__input_specialization__input_specialize_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_ExportedProc_18;

  hlds__input_specialization__update_exported_proc_id_if_needed_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv4_STATE_VARIABLE_ExportedProc_18);
  *wrapper_arg_2 = ((MR_Box) (conv4_STATE_VARIABLE_ExportedProc_18));
}

static void MR_CALL 
hlds__input_specialization__input_specialize_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SpecPredIds_40;
  MR_Word conv0_STATE_VARIABLE_ModuleInfo_42;

  hlds__input_specialization__maybe_input_specialize_in_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SpecPredIds_40, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ModuleInfo_42);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SpecPredIds_40));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_42));
}

void MR_CALL 
hlds__input_specialization__input_specialize_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_12,
  MR_Word * STATE_VARIABLE_ModuleInfo_13)
{
  MR_bool succeeded;
  MR_Word InputSpecTable_4;
  MR_Word PredIds_5;
  MR_Word SpecPredIds_6;
  MR_Word ExportedProcCord0_7;
  MR_Word Var_14;
  MR_Word STATE_VARIABLE_ModuleInfo_1_16;
  MR_Box conv3_SpecPredIds_6;
  MR_Box conv2_STATE_VARIABLE_ModuleInfo_1_16;
  MR_Word TypeCtorInfo_26_26;

  hlds__hlds_module__module_info_get_input_spec_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &InputSpecTable_4);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_12, &PredIds_5);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__input_specialization_scalar_common_3[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__input_specialization__input_specialize_in_module_2_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (InputSpecTable_4));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), (MR_Word) (&hlds__input_specialization_scalar_common_1[0]), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_14, PredIds_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_SpecPredIds_6, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_12)), &conv2_STATE_VARIABLE_ModuleInfo_1_16);
  SpecPredIds_6 = ((MR_Word) (conv3_SpecPredIds_6));
  STATE_VARIABLE_ModuleInfo_1_16 = ((MR_Word) (conv2_STATE_VARIABLE_ModuleInfo_1_16));
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_1_16, &ExportedProcCord0_7);
  succeeded = (SpecPredIds_6 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeCtorInfo_26_26 = (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0);
    succeeded = mercury__cord__is_non_empty_1_p_0(TypeCtorInfo_26_26, ExportedProcCord0_7);
  }
  if (succeeded)
  {
    MR_Word SpecPredIdSet_10;
    MR_Word ExportedProcCord_11;
    MR_Word Var_17;

    mercury__set_tree234__list_to_set_2_p_0((MR_Word) (&hlds__pred_proc_id__hlds__pred_proc_id__type_ctor_info_pred_id_0), SpecPredIds_6, &SpecPredIdSet_10);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&hlds__input_specialization_scalar_common_4[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (hlds__input_specialization__input_specialize_in_module_2_p_0_2));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_1_16));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (SpecPredIdSet_10));
    }
    mercury__cord__map_pred_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), Var_17, ExportedProcCord0_7, &ExportedProcCord_11);
    hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(ExportedProcCord_11, STATE_VARIABLE_ModuleInfo_1_16, STATE_VARIABLE_ModuleInfo_13);
  }
  else
    *STATE_VARIABLE_ModuleInfo_13 = STATE_VARIABLE_ModuleInfo_1_16;
}

static MR_bool MR_CALL 
hlds__input_specialization____Unify____arg_to_specialize_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__input_specialization____Unify____arg_to_specialize_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__input_specialization____Compare____arg_to_specialize_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__input_specialization____Compare____arg_to_specialize_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__input_specialization__init(void)
{
}

void mercury__hlds__input_specialization__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__input_specialization__hlds__input_specialization__type_ctor_info_arg_to_specialize_0);
}

void mercury__hlds__input_specialization__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__input_specialization__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.input_specialization.
