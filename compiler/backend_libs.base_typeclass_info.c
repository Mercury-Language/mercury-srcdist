/*
** Automatically generated from `base_typeclass_info.m'
** by the Mercury compiler,
** version rotd-2017-07-26
** configured for x86_64-apple-darwin13.4.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module backend_libs.base_typeclass_info. */
/* :- implementation. */

/*
INIT mercury__backend_libs__base_typeclass_info__init
ENDINIT
*/

#include "backend_libs.base_typeclass_info.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_1,
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3,
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4);

static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
  MR_Word backend_libs__base_typeclass_info__ClassId_2,
  MR_Word backend_libs__base_typeclass_info__HeadVar__3_3,
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4,
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5);

static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_5,
  MR_Word backend_libs__base_typeclass_info__ClassId_6,
  MR_Word backend_libs__base_typeclass_info__InstanceDefn_7,
  MR_Word * backend_libs__base_typeclass_info__BaseTypeClassInfo_8);

static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
  MR_Word * backend_libs__base_typeclass_info__HeadVar__3_3);


static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_1[2][2];




static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



void MR_CALL 
backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_3,
  MR_Word * backend_libs__base_typeclass_info__RttiDatas_4)
{
  {
    MR_bool backend_libs__base_typeclass_info__succeeded;
    MR_Word backend_libs__base_typeclass_info__InstanceTable_5;
    MR_Word backend_libs__base_typeclass_info__AllInstances_6;

    {
      hlds__hlds_module__module_info_get_instance_table_2_p_0(backend_libs__base_typeclass_info__ModuleInfo_3, &backend_libs__base_typeclass_info__InstanceTable_5);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &backend_libs__base_typeclass_info_scalar_common_1[0], backend_libs__base_typeclass_info__InstanceTable_5, &backend_libs__base_typeclass_info__AllInstances_6);
    }
    {
      backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(backend_libs__base_typeclass_info__ModuleInfo_3, backend_libs__base_typeclass_info__AllInstances_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__base_typeclass_info__RttiDatas_4);
    }
  }
}

static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_1,
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3,
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool backend_libs__base_typeclass_info__succeeded;

        if ((backend_libs__base_typeclass_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3;
        else
          {
            MR_Word backend_libs__base_typeclass_info__Class_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word backend_libs__base_typeclass_info__Classes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word backend_libs__base_typeclass_info__ClassId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Class_10, (MR_Integer) 0)));
            MR_Word backend_libs__base_typeclass_info__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Class_10, (MR_Integer) 1)));
            MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17;

            {
              backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(backend_libs__base_typeclass_info__HeadVar__1_1, backend_libs__base_typeclass_info__ClassId_13, backend_libs__base_typeclass_info__InstanceDefns_14, backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3, &backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17);
            }
            /* direct tailcall eliminated */
            {
              MR_Word backend_libs__base_typeclass_info__next_value_of_HeadVar__2_2 = backend_libs__base_typeclass_info__Classes_11;
              MR_Word backend_libs__base_typeclass_info__next_value_of_STATE_VARIABLE_RttiDatas_0_3 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17;

              backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3 = backend_libs__base_typeclass_info__next_value_of_STATE_VARIABLE_RttiDatas_0_3;
              backend_libs__base_typeclass_info__HeadVar__2_2 = backend_libs__base_typeclass_info__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
  MR_Word backend_libs__base_typeclass_info__ClassId_2,
  MR_Word backend_libs__base_typeclass_info__HeadVar__3_3,
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4,
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5)
{
  {
    MR_bool backend_libs__base_typeclass_info__succeeded;

    if ((backend_libs__base_typeclass_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4;
    else
      {
        MR_Word backend_libs__base_typeclass_info__InstanceDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word backend_libs__base_typeclass_info__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word backend_libs__base_typeclass_info__InstanceModule_16;
        MR_Word backend_libs__base_typeclass_info__InstanceTypes_17;
        MR_Word backend_libs__base_typeclass_info__ImportStatus_19;
        MR_Word backend_libs__base_typeclass_info__Body_22;
        MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33;
        MR_Word backend_libs__base_typeclass_info___OriginalTypes_18;
        MR_Word backend_libs__base_typeclass_info___TermContext_20;
        MR_Word backend_libs__base_typeclass_info___InstanceConstraints_21;
        MR_Word backend_libs__base_typeclass_info___MaybePredProcIds_23;
        MR_Word backend_libs__base_typeclass_info___Varset_24;
        MR_Word backend_libs__base_typeclass_info___SuperClassProofs_25;
        MR_Word backend_libs__base_typeclass_info__Var_34;
        MR_Word backend_libs__base_typeclass_info__Var_26;

        {
          backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__ClassId_2, backend_libs__base_typeclass_info__InstanceDefns_14, backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4, &backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33);
        }
        backend_libs__base_typeclass_info__InstanceModule_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 0)));
        backend_libs__base_typeclass_info__InstanceTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 1)));
        backend_libs__base_typeclass_info___OriginalTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 2)));
        backend_libs__base_typeclass_info__ImportStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 3)));
        backend_libs__base_typeclass_info___TermContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 4)));
        backend_libs__base_typeclass_info___InstanceConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 5)));
        backend_libs__base_typeclass_info__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 6)));
        backend_libs__base_typeclass_info___MaybePredProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 7)));
        backend_libs__base_typeclass_info___Varset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 8)));
        backend_libs__base_typeclass_info___SuperClassProofs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 9)));
        backend_libs__base_typeclass_info__succeeded = ((MR_tag((MR_Word) backend_libs__base_typeclass_info__Body_22)) == (MR_mktag((MR_Integer) 1)));
        if (backend_libs__base_typeclass_info__succeeded)
          {
            backend_libs__base_typeclass_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__Body_22, (MR_Integer) 0)));
            {
              backend_libs__base_typeclass_info__Var_34 = hlds__status__instance_status_defined_in_this_module_1_f_0(backend_libs__base_typeclass_info__ImportStatus_19);
            }
            backend_libs__base_typeclass_info__succeeded = (backend_libs__base_typeclass_info__Var_34 == (MR_Integer) 1);
          }
        if (backend_libs__base_typeclass_info__succeeded)
          {
            MR_String backend_libs__base_typeclass_info__InstanceString_27;
            MR_Word backend_libs__base_typeclass_info__BaseTypeClassInfo_28;
            MR_Word backend_libs__base_typeclass_info__TCName_29;
            MR_Word backend_libs__base_typeclass_info__RttiData_30;

            {
              hlds__hlds_code_util__make_instance_string_2_p_0(backend_libs__base_typeclass_info__InstanceTypes_17, &backend_libs__base_typeclass_info__InstanceString_27);
            }
            {
              backend_libs__base_typeclass_info__gen_body_4_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__ClassId_2, backend_libs__base_typeclass_info__InstanceDefn_13, &backend_libs__base_typeclass_info__BaseTypeClassInfo_28);
            }
            {
              backend_libs__base_typeclass_info__TCName_29 = backend_libs__type_class_info__generate_class_name_1_f_0(backend_libs__base_typeclass_info__ClassId_2);
            }
            {
              backend_libs__base_typeclass_info__RttiData_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 1) = ((MR_Box) (backend_libs__base_typeclass_info__TCName_29));
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 2) = ((MR_Box) (backend_libs__base_typeclass_info__InstanceModule_16));
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 3) = ((MR_Box) (backend_libs__base_typeclass_info__InstanceString_27));
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 4) = ((MR_Box) (backend_libs__base_typeclass_info__BaseTypeClassInfo_28));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__RttiData_30));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33));
            }
          }
        else
          *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33;
      }
  }
}

static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_5,
  MR_Word backend_libs__base_typeclass_info__ClassId_6,
  MR_Word backend_libs__base_typeclass_info__InstanceDefn_7,
  MR_Word * backend_libs__base_typeclass_info__BaseTypeClassInfo_8)
{
  {
    MR_bool backend_libs__base_typeclass_info__succeeded;
    MR_Integer backend_libs__base_typeclass_info__NumExtra_9;
    MR_Word backend_libs__base_typeclass_info__Constraints_10;
    MR_Integer backend_libs__base_typeclass_info__NumConstraints_11;
    MR_Word backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12;
    MR_Word backend_libs__base_typeclass_info__InstancePredProcIds_13;
    MR_Word backend_libs__base_typeclass_info__ProcLabels_14;
    MR_Integer backend_libs__base_typeclass_info__SuperClassCount_15;
    MR_Integer backend_libs__base_typeclass_info__ClassArity_16;
    MR_Integer backend_libs__base_typeclass_info__NumMethods_17;
    MR_Word backend_libs__base_typeclass_info__ClassTable_45;
    MR_Word backend_libs__base_typeclass_info__ClassDefn_46;
    MR_Word backend_libs__base_typeclass_info__Var_47;
    MR_Word backend_libs__base_typeclass_info__Var_48;
    MR_Word backend_libs__base_typeclass_info__Var_21;
    MR_Word backend_libs__base_typeclass_info__Var_22;
    MR_Word backend_libs__base_typeclass_info__Var_23;
    MR_Word backend_libs__base_typeclass_info__Var_24;
    MR_Word backend_libs__base_typeclass_info__Var_25;
    MR_Word backend_libs__base_typeclass_info__Var_26;
    MR_Word backend_libs__base_typeclass_info__Var_27;
    MR_Word backend_libs__base_typeclass_info__Var_28;
    MR_Word backend_libs__base_typeclass_info__Var_29;
    MR_Word backend_libs__base_typeclass_info__Var_30;
    MR_Word backend_libs__base_typeclass_info__Var_31;
    MR_Word backend_libs__base_typeclass_info__Var_32;
    MR_Word backend_libs__base_typeclass_info__Var_33;
    MR_Word backend_libs__base_typeclass_info__Var_34;
    MR_Word backend_libs__base_typeclass_info__Var_35;
    MR_Word backend_libs__base_typeclass_info__Var_36;
    MR_Word backend_libs__base_typeclass_info__Var_37;
    MR_Word backend_libs__base_typeclass_info__Var_38;
    MR_Box backend_libs__base_typeclass_info__conv0_ClassDefn_46;
    MR_Word backend_libs__base_typeclass_info__Var_49;
    MR_Word backend_libs__base_typeclass_info__Var_50;
    MR_Word backend_libs__base_typeclass_info__Var_51;
    MR_Word backend_libs__base_typeclass_info__Var_52;
    MR_Word backend_libs__base_typeclass_info__Var_53;
    MR_Word backend_libs__base_typeclass_info__Var_54;
    MR_Word backend_libs__base_typeclass_info__Var_55;
    MR_Word backend_libs__base_typeclass_info__Var_56;
    MR_Word backend_libs__base_typeclass_info__Var_57;
    MR_Word backend_libs__base_typeclass_info__Var_58;
    MR_Word backend_libs__base_typeclass_info__Var_59;
    MR_Word backend_libs__base_typeclass_info__Var_60;
    MR_Word backend_libs__base_typeclass_info__Var_61;
    MR_Word backend_libs__base_typeclass_info__Var_62;
    MR_Word backend_libs__base_typeclass_info__Var_63;
    MR_Word backend_libs__base_typeclass_info__Var_64;
    MR_Word backend_libs__base_typeclass_info__Var_65;
    MR_Word backend_libs__base_typeclass_info__Var_66;

    {
      hlds__hlds_data__num_extra_instance_args_2_p_0(backend_libs__base_typeclass_info__InstanceDefn_7, &backend_libs__base_typeclass_info__NumExtra_9);
    }
    backend_libs__base_typeclass_info__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 0)));
    backend_libs__base_typeclass_info__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 1)));
    backend_libs__base_typeclass_info__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 2)));
    backend_libs__base_typeclass_info__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 3)));
    backend_libs__base_typeclass_info__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 4)));
    backend_libs__base_typeclass_info__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 5)));
    backend_libs__base_typeclass_info__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 6)));
    backend_libs__base_typeclass_info__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 7)));
    backend_libs__base_typeclass_info__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 8)));
    backend_libs__base_typeclass_info__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 9)));
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__base_typeclass_info__Constraints_10, &backend_libs__base_typeclass_info__NumConstraints_11);
    }
    backend_libs__base_typeclass_info__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 0)));
    backend_libs__base_typeclass_info__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 1)));
    backend_libs__base_typeclass_info__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 2)));
    backend_libs__base_typeclass_info__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 3)));
    backend_libs__base_typeclass_info__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 4)));
    backend_libs__base_typeclass_info__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 5)));
    backend_libs__base_typeclass_info__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 6)));
    backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 7)));
    backend_libs__base_typeclass_info__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 8)));
    backend_libs__base_typeclass_info__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 9)));
    if ((backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.base_typeclass_info", (MR_String) "predicate \140backend_libs.base_typeclass_info.gen_body\'/4", (MR_String) "pred_proc_ids not filled in by check_typeclass.m");
          return;
        }
      }
    else
      backend_libs__base_typeclass_info__InstancePredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12, (MR_Integer) 0)));
    {
      backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(backend_libs__base_typeclass_info__ModuleInfo_5, backend_libs__base_typeclass_info__InstancePredProcIds_13, &backend_libs__base_typeclass_info__ProcLabels_14);
    }
    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(backend_libs__base_typeclass_info__ModuleInfo_5, &backend_libs__base_typeclass_info__ClassTable_45);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, backend_libs__base_typeclass_info__ClassTable_45, ((MR_Box) (backend_libs__base_typeclass_info__ClassId_6)), &backend_libs__base_typeclass_info__conv0_ClassDefn_46);
    }
    backend_libs__base_typeclass_info__ClassDefn_46 = ((MR_Word) backend_libs__base_typeclass_info__conv0_ClassDefn_46);
    backend_libs__base_typeclass_info__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 0)));
    backend_libs__base_typeclass_info__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 1)));
    backend_libs__base_typeclass_info__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 2)));
    backend_libs__base_typeclass_info__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 3)));
    backend_libs__base_typeclass_info__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 4)));
    backend_libs__base_typeclass_info__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 5)));
    backend_libs__base_typeclass_info__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 6)));
    backend_libs__base_typeclass_info__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 7)));
    backend_libs__base_typeclass_info__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 8)));
    backend_libs__base_typeclass_info__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 9)));
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__base_typeclass_info__Var_47, &backend_libs__base_typeclass_info__SuperClassCount_15);
    }
    backend_libs__base_typeclass_info__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 0)));
    backend_libs__base_typeclass_info__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 1)));
    backend_libs__base_typeclass_info__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 2)));
    backend_libs__base_typeclass_info__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 3)));
    backend_libs__base_typeclass_info__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 4)));
    backend_libs__base_typeclass_info__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 5)));
    backend_libs__base_typeclass_info__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 6)));
    backend_libs__base_typeclass_info__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 7)));
    backend_libs__base_typeclass_info__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 8)));
    backend_libs__base_typeclass_info__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_46, (MR_Integer) 9)));
    {
      mercury__list__length_2_p_0((MR_Word) &backend_libs__base_typeclass_info_scalar_common_1[1], backend_libs__base_typeclass_info__Var_48, &backend_libs__base_typeclass_info__ClassArity_16);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, backend_libs__base_typeclass_info__ProcLabels_14, &backend_libs__base_typeclass_info__NumMethods_17);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *backend_libs__base_typeclass_info__BaseTypeClassInfo_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__NumExtra_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__NumConstraints_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__base_typeclass_info__SuperClassCount_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__base_typeclass_info__ClassArity_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__base_typeclass_info__NumMethods_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabels_14));
    }
  }
}

static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
  MR_Word * backend_libs__base_typeclass_info__HeadVar__3_3)
{
  {
    MR_bool backend_libs__base_typeclass_info__succeeded;

    if ((backend_libs__base_typeclass_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *backend_libs__base_typeclass_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word backend_libs__base_typeclass_info__PredId_6;
        MR_Integer backend_libs__base_typeclass_info__ProcId_7;
        MR_Word backend_libs__base_typeclass_info__PredProcIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word backend_libs__base_typeclass_info__ProcLabel_9;
        MR_Word backend_libs__base_typeclass_info__ProcLabels_10;
        MR_Word backend_libs__base_typeclass_info__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 0)));

        backend_libs__base_typeclass_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Var_11, (MR_Integer) 0)));
        backend_libs__base_typeclass_info__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Var_11, (MR_Integer) 1)));
        {
          backend_libs__base_typeclass_info__ProcLabel_9 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__PredId_6, backend_libs__base_typeclass_info__ProcId_7);
        }
        {
          backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__PredProcIds_8, &backend_libs__base_typeclass_info__ProcLabels_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *backend_libs__base_typeclass_info__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabel_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabels_10));
        }
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

/* :- end_module backend_libs.base_typeclass_info. */
