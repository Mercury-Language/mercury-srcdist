/*
** Automatically generated from `base_typeclass_info.m'
** by the Mercury compiler,
** version rotd-2022-08-02
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


// :- module backend_libs.base_typeclass_info.
// :- implementation.

/*
INIT mercury__backend_libs__base_typeclass_info__init
ENDINIT
*/

#include "backend_libs.base_typeclass_info.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "cord.mih"
#include "digraph.mih"
#include "enum.mih"
#include "hlds.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RttiDatas_0_3,
  MR_Word * STATE_VARIABLE_RttiDatas_4);

static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RttiDatas_0_4,
  MR_Word * STATE_VARIABLE_RttiDatas_5);

static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word * BaseTypeClassInfo_8);

static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);


static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_1[2][2];




static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_instance_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};



#include "array.mh"



void MR_CALL 
backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * RttiDatas_4)
{
  MR_Word InstanceTable_5;
  MR_Word AllInstances_6;

  hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_3, &InstanceTable_5);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&backend_libs__base_typeclass_info_scalar_common_1[0]), InstanceTable_5, &AllInstances_6);
  backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(ModuleInfo_3, AllInstances_6, (MR_Word) ((MR_Unsigned) 0U), RttiDatas_4);
}

static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RttiDatas_0_3,
  MR_Word * STATE_VARIABLE_RttiDatas_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RttiDatas_4 = STATE_VARIABLE_RttiDatas_0_3;
    else
    {
      MR_Word Class_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Classes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ClassId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class_10, (MR_Integer) 0))));
      MR_Word InstanceDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Class_10, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RttiDatas_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_RttiDatas_0_3;

      backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(HeadVar__1_1, ClassId_13, InstanceDefns_14, STATE_VARIABLE_RttiDatas_0_3, &STATE_VARIABLE_RttiDatas_17_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Classes_11;
      next_value_of_STATE_VARIABLE_RttiDatas_0_3 = STATE_VARIABLE_RttiDatas_17_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_RttiDatas_0_3 = next_value_of_STATE_VARIABLE_RttiDatas_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word ClassId_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_RttiDatas_0_4,
  MR_Word * STATE_VARIABLE_RttiDatas_5)
{
  MR_bool succeeded;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_RttiDatas_5 = STATE_VARIABLE_RttiDatas_0_4;
  else
  {
    MR_Word InstanceDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstanceDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InstanceModule_16;
    MR_Word InstanceTypes_17;
    MR_Word ImportStatus_19;
    MR_Word Body_23;
    MR_Word STATE_VARIABLE_RttiDatas_34_34;
    MR_Word Var_35;

    backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(ModuleInfo_1, ClassId_2, InstanceDefns_14, STATE_VARIABLE_RttiDatas_0_4, &STATE_VARIABLE_RttiDatas_34_34);
    InstanceModule_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_13, (MR_Integer) 0))));
    InstanceTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_13, (MR_Integer) 1))));
    ImportStatus_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_13, (MR_Integer) 3))));
    Body_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_13, (MR_Integer) 7))));
    succeeded = (Body_23 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_35 = hlds__status__instance_status_defined_in_this_module_1_f_0(ImportStatus_19);
      succeeded = (Var_35 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_String InstanceString_28;
      MR_Word BaseTypeClassInfo_29;
      MR_Word TCName_30;
      MR_Word RttiData_31;

      hlds__pred_name__make_instance_string_2_p_0(InstanceTypes_17, &InstanceString_28);
      backend_libs__base_typeclass_info__gen_body_4_p_0(ModuleInfo_1, ClassId_2, InstanceDefn_13, &BaseTypeClassInfo_29);
      TCName_30 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_2);
      {
        RttiData_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), RttiData_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), RttiData_31, 1) = ((MR_Box) (TCName_30));
        MR_hl_field(MR_mktag(3), RttiData_31, 2) = ((MR_Box) (InstanceModule_16));
        MR_hl_field(MR_mktag(3), RttiData_31, 3) = ((MR_Box) (InstanceString_28));
        MR_hl_field(MR_mktag(3), RttiData_31, 4) = ((MR_Box) (BaseTypeClassInfo_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RttiDatas_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RttiData_31));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RttiDatas_34_34));
      }
    }
    else
      *STATE_VARIABLE_RttiDatas_5 = STATE_VARIABLE_RttiDatas_34_34;
  }
}

static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word ClassId_6,
  MR_Word InstanceDefn_7,
  MR_Word * BaseTypeClassInfo_8)
{
  MR_Integer NumExtra_9;
  MR_Word Constraints_10;
  MR_Integer NumConstraints_11;
  MR_Word MaybeInstancePredProcIds_12;
  MR_Word InstancePredProcIds_13;
  MR_Word ProcLabels_14;
  MR_Integer SuperClassCount_15;
  MR_Integer ClassArity_16;
  MR_Integer NumMethods_17;
  MR_Word ClassTable_46;
  MR_Word ClassDefn_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Box conv0_ClassDefn_47;

  hlds__hlds_class__num_extra_instance_args_2_p_0(InstanceDefn_7, &NumExtra_9);
  Constraints_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 6))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_10, &NumConstraints_11);
  MaybeInstancePredProcIds_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InstanceDefn_7, (MR_Integer) 8))));
  if ((MaybeInstancePredProcIds_12 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.base_typeclass_info.gen_body\'/4", (MR_String) "pred_proc_ids not filled in by check_typeclass.m");
      return;
    }
  else
    InstancePredProcIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInstancePredProcIds_12, (MR_Integer) 0))));
  backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(ModuleInfo_5, InstancePredProcIds_13, &ProcLabels_14);
  hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_5, &ClassTable_46);
  mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_46, ((MR_Box) (ClassId_6)), &conv0_ClassDefn_47);
  ClassDefn_47 = ((MR_Word) (conv0_ClassDefn_47));
  Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_47, (MR_Integer) 1))));
  mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_48, &SuperClassCount_15);
  Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ClassDefn_47, (MR_Integer) 4))));
  mercury__list__length_2_p_0((MR_Word) (&backend_libs__base_typeclass_info_scalar_common_1[1]), Var_49, &ClassArity_16);
  mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ProcLabels_14, &NumMethods_17);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *BaseTypeClassInfo_8 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NumExtra_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NumConstraints_11));
    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SuperClassCount_15));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ClassArity_16));
    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (NumMethods_17));
    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ProcLabels_14));
  }
}

static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PredId_6;
    MR_Integer ProcId_7;
    MR_Word PredProcIds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ProcLabel_9;
    MR_Word ProcLabels_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    PredId_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
    ProcId_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    ProcLabel_9 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_1, PredId_6, ProcId_7);
    backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(ModuleInfo_1, PredProcIds_8, &ProcLabels_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcLabel_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ProcLabels_10));
    }
  }
}

void mercury__backend_libs__base_typeclass_info__init(void)
{
}

void mercury__backend_libs__base_typeclass_info__init_type_tables(void)
{
}

void mercury__backend_libs__base_typeclass_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__base_typeclass_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module backend_libs.base_typeclass_info.
