/*
** Automatically generated from `base_typeclass_info.m'
** by the Mercury compiler,
** version rotd-2024-02-01
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
#include "term_context.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
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
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
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
      MR_Word Class_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Classes_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ClassId_13 = ((MR_Word) ((MR_hl_field(0, Class_10, (MR_Integer) 0))));
      MR_Word InstanceDefns_14 = ((MR_Word) ((MR_hl_field(0, Class_10, (MR_Integer) 1))));
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
    MR_Word InstanceDefn_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word InstanceDefns_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word InstanceModule_16;
    MR_Word ImportStatus_17;
    MR_Word InstanceTypes_20;
    MR_Word Body_24;
    MR_Word STATE_VARIABLE_RttiDatas_34_34;
    MR_Word Var_35;

    backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(ModuleInfo_1, ClassId_2, InstanceDefns_14, STATE_VARIABLE_RttiDatas_0_4, &STATE_VARIABLE_RttiDatas_34_34);
    InstanceModule_16 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 0))));
    ImportStatus_17 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 1))));
    InstanceTypes_20 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 4))));
    Body_24 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 8))));
    succeeded = (Body_24 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_35 = hlds__status__instance_status_defined_in_this_module_1_f_0(ImportStatus_17);
      succeeded = (Var_35 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_String InstanceString_28;
      MR_Word BaseTypeClassInfo_29;
      MR_Word TCName_30;
      MR_Word RttiData_31;
      MR_Integer NumExtra_36;
      MR_Word Constraints_37;
      MR_Integer NumConstraints_38;
      MR_Word MaybeInstanceMethods_39;
      MR_Word InstanceMethods_40;
      MR_Word InstancePredProcIds_41;
      MR_Word ProcLabels_42;
      MR_Integer SuperClassCount_43;
      MR_Integer ClassArity_44;
      MR_Integer NumMethods_45;
      MR_Word ClassTable_70;
      MR_Word ClassDefn_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Box conv0_ClassDefn_71;

      hlds__pred_name__make_instance_string_2_p_0(InstanceTypes_20, &InstanceString_28);
      hlds__hlds_class__num_extra_instance_args_2_p_0(InstanceDefn_13, &NumExtra_36);
      Constraints_37 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 5))));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Constraints_37, &NumConstraints_38);
      MaybeInstanceMethods_39 = ((MR_Word) ((MR_hl_field(0, InstanceDefn_13, (MR_Integer) 9))));
      if ((MaybeInstanceMethods_39 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140backend_libs.base_typeclass_info.gen_body\'/4", (MR_String) "pred_proc_ids not filled in by check_typeclass.m");
          return;
        }
      else
        InstanceMethods_40 = ((MR_Word) ((MR_hl_field(1, MaybeInstanceMethods_39, (MR_Integer) 0))));
      InstancePredProcIds_41 = hlds__hlds_class__method_infos_to_pred_proc_ids_1_f_0(InstanceMethods_40);
      backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(ModuleInfo_1, InstancePredProcIds_41, &ProcLabels_42);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_1, &ClassTable_70);
      mercury__map__lookup_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_hlds_class_defn_0), ClassTable_70, ((MR_Box) (ClassId_2)), &conv0_ClassDefn_71);
      ClassDefn_71 = ((MR_Word) (conv0_ClassDefn_71));
      Var_72 = ((MR_Word) ((MR_hl_field(0, ClassDefn_71, (MR_Integer) 4))));
      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), Var_72, &SuperClassCount_43);
      Var_73 = ((MR_Word) ((MR_hl_field(0, ClassDefn_71, (MR_Integer) 3))));
      mercury__list__length_2_p_0((MR_Word) (&backend_libs__base_typeclass_info_scalar_common_1[1]), Var_73, &ClassArity_44);
      mercury__list__length_2_p_0((MR_Word) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0), ProcLabels_42, &NumMethods_45);
      {
        BaseTypeClassInfo_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, BaseTypeClassInfo_29, 0) = ((MR_Box) (NumExtra_36));
        MR_hl_field(0, BaseTypeClassInfo_29, 1) = ((MR_Box) (NumConstraints_38));
        MR_hl_field(0, BaseTypeClassInfo_29, 2) = ((MR_Box) (SuperClassCount_43));
        MR_hl_field(0, BaseTypeClassInfo_29, 3) = ((MR_Box) (ClassArity_44));
        MR_hl_field(0, BaseTypeClassInfo_29, 4) = ((MR_Box) (NumMethods_45));
        MR_hl_field(0, BaseTypeClassInfo_29, 5) = ((MR_Box) (ProcLabels_42));
      }
      TCName_30 = backend_libs__type_class_info__generate_class_name_1_f_0(ClassId_2);
      {
        RttiData_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, RttiData_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, RttiData_31, 1) = ((MR_Box) (TCName_30));
        MR_hl_field(3, RttiData_31, 2) = ((MR_Box) (InstanceModule_16));
        MR_hl_field(3, RttiData_31, 3) = ((MR_Box) (InstanceString_28));
        MR_hl_field(3, RttiData_31, 4) = ((MR_Box) (BaseTypeClassInfo_29));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RttiDatas_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (RttiData_31));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RttiDatas_34_34));
      }
    }
    else
      *STATE_VARIABLE_RttiDatas_5 = STATE_VARIABLE_RttiDatas_34_34;
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
    MR_Word PredProcIds_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ProcLabel_9;
    MR_Word ProcLabels_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    PredId_6 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    ProcId_7 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    ProcLabel_9 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_1, PredId_6, ProcId_7);
    backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(ModuleInfo_1, PredProcIds_8, &ProcLabels_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ProcLabel_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcLabels_10));
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
