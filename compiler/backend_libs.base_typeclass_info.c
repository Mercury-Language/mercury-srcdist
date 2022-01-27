/*
** Automatically generated from `base_typeclass_info.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 136 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__IntroducedFrom__pred__gen_body__136__1_2_p_0(
#line 136 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_27,
#line 136 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__2_28);

#line 148 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
#line 148 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 148 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 148 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__3_3);

#line 136 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0_1(
#line 136 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__closure_arg,
#line 136 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__wrapper_arg_1,
#line 136 "base_typeclass_info.m"
  MR_Box * backend_libs__base_typeclass_info__wrapper_arg_2);

#line 119 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
#line 119 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_5,
#line 119 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_6,
#line 119 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__InstanceDefn_7,
#line 119 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__BaseTypeClassInfo_8);

#line 84 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_2,
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__3_3,
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4,
#line 84 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5);

#line 74 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
#line 74 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_1,
#line 74 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 74 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3,
#line 74 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4);


static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_1[2][2];

static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_2[1][5];

static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_3[1][3];




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

static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box backend_libs__base_typeclass_info_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&backend_libs__base_typeclass_info_scalar_common_2[0])),
    ((MR_Box) (backend_libs__base_typeclass_info__gen_body_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 136 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__IntroducedFrom__pred__gen_body__136__1_2_p_0(
#line 136 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_27,
#line 136 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__2_28)
#line 136 "base_typeclass_info.m"
{
#line 136 "base_typeclass_info.m"
  {
#line 136 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;
#line 136 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__HeadVar__1_27, (MR_Integer) 0)));
#line 136 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__HeadVar__1_27, (MR_Integer) 1)));

#line 139 "base_typeclass_info.m"
    {
#line 139 "base_typeclass_info.m"
      MR_Word base;
#line 139 "base_typeclass_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 139 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__HeadVar__2_28 = base;
#line 139 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__PredId_17));
#line 139 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__ProcId_18));
#line 139 "base_typeclass_info.m"
    }
#line 136 "base_typeclass_info.m"
  }
#line 136 "base_typeclass_info.m"
}

#line 148 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
#line 148 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 148 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 148 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__3_3)
#line 148 "base_typeclass_info.m"
{
#line 151 "base_typeclass_info.m"
  {
#line 151 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;

#line 151 "base_typeclass_info.m"
    if ((backend_libs__base_typeclass_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 151 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 151 "base_typeclass_info.m"
    else
#line 153 "base_typeclass_info.m"
      {
#line 153 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__PredId_6;
#line 153 "base_typeclass_info.m"
        MR_Integer backend_libs__base_typeclass_info__ProcId_7;
#line 153 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__PredProcIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__ProcLabel_9;
#line 153 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__ProcLabels_10;
#line 153 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 0)));

#line 152 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__V_11_11, (MR_Integer) 0)));
#line 152 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__V_11_11, (MR_Integer) 1)));
#line 154 "base_typeclass_info.m"
        {
#line 154 "base_typeclass_info.m"
          backend_libs__base_typeclass_info__ProcLabel_9 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__PredId_6, backend_libs__base_typeclass_info__ProcId_7);
        }
#line 155 "base_typeclass_info.m"
        {
#line 155 "base_typeclass_info.m"
          backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__PredProcIds_8, &backend_libs__base_typeclass_info__ProcLabels_10);
        }
#line 153 "base_typeclass_info.m"
        {
#line 153 "base_typeclass_info.m"
          MR_Word base;
#line 153 "base_typeclass_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 153 "base_typeclass_info.m"
          *backend_libs__base_typeclass_info__HeadVar__3_3 = base;
#line 153 "base_typeclass_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabel_9));
#line 153 "base_typeclass_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabels_10));
#line 153 "base_typeclass_info.m"
        }
#line 153 "base_typeclass_info.m"
      }
#line 151 "base_typeclass_info.m"
  }
#line 148 "base_typeclass_info.m"
}

#line 136 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0_1(
#line 136 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__closure_arg,
#line 136 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__wrapper_arg_1,
#line 136 "base_typeclass_info.m"
  MR_Box * backend_libs__base_typeclass_info__wrapper_arg_2)
#line 136 "base_typeclass_info.m"
{
#line 136 "base_typeclass_info.m"
  {
#line 136 "base_typeclass_info.m"
    MR_Box backend_libs__base_typeclass_info__closure = backend_libs__base_typeclass_info__closure_arg;
#line 136 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__conv0_HeadVar__2_28;

#line 136 "base_typeclass_info.m"
    {
#line 136 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__IntroducedFrom__pred__gen_body__136__1_2_p_0(((MR_Word) backend_libs__base_typeclass_info__wrapper_arg_1), &backend_libs__base_typeclass_info__conv0_HeadVar__2_28);
    }
#line 136 "base_typeclass_info.m"
    *backend_libs__base_typeclass_info__wrapper_arg_2 = ((MR_Box) (backend_libs__base_typeclass_info__conv0_HeadVar__2_28));
#line 136 "base_typeclass_info.m"
  }
#line 136 "base_typeclass_info.m"
}

#line 119 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
#line 119 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_5,
#line 119 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_6,
#line 119 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__InstanceDefn_7,
#line 119 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__BaseTypeClassInfo_8)
#line 119 "base_typeclass_info.m"
{
#line 122 "base_typeclass_info.m"
  {
#line 122 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;
#line 122 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__NumExtra_9;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__Constraints_10;
#line 122 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__NumConstraints_11;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__InstancePredProcIds_13;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__PredProcIds_19;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__ProcLabels_20;
#line 122 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__SuperClassCount_21;
#line 122 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__ClassArity_22;
#line 122 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__NumMethods_23;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__ClassTable_57;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__ClassDefn_58;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_59_59;
#line 122 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_60_60;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_31_31;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_32_32;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_33_33;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_34_34;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_35_35;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_36_36;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_37_37;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_38_38;
#line 125 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_39_39;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_40_40;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_41_41;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_42_42;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_43_43;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_44_44;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_45_45;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_46_46;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_47_47;
#line 128 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_48_48;
#line 164 "base_typeclass_info.m"
    MR_Box backend_libs__base_typeclass_info__conv1_ClassDefn_58;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_61_61;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_62_62;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_63_63;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_64_64;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_65_65;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_66_66;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_67_67;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_68_68;
#line 165 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_69_69;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_70_70;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_71_71;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_72_72;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_73_73;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_74_74;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_75_75;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_76_76;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_77_77;
#line 166 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_78_78;

#line 123 "base_typeclass_info.m"
    {
#line 123 "base_typeclass_info.m"
      hlds__hlds_data__num_extra_instance_args_2_p_0(backend_libs__base_typeclass_info__InstanceDefn_7, &backend_libs__base_typeclass_info__NumExtra_9);
    }
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 0)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 1)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 2)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 3)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 4)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 5)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 6)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 7)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 8)));
#line 125 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 9)));
#line 126 "base_typeclass_info.m"
    {
#line 126 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__base_typeclass_info__Constraints_10, &backend_libs__base_typeclass_info__NumConstraints_11);
    }
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 0)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 1)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 2)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 3)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 4)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 5)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 6)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 7)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 8)));
#line 128 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 9)));
#line 133 "base_typeclass_info.m"
    if ((backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "base_typeclass_info.m"
      {
#line 131 "base_typeclass_info.m"
        {
#line 131 "base_typeclass_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.base_typeclass_info", (MR_String) "predicate \140backend_libs.base_typeclass_info.gen_body\'/4", (MR_String) "pred_proc_ids not filled in by check_typeclass.m");
#line 131 "base_typeclass_info.m"
          return;
        }
#line 130 "base_typeclass_info.m"
      }
#line 133 "base_typeclass_info.m"
    else
#line 134 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__InstancePredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12, (MR_Integer) 0)));
#line 141 "base_typeclass_info.m"
    {
#line 141 "base_typeclass_info.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &backend_libs__base_typeclass_info_scalar_common_3[0], backend_libs__base_typeclass_info__InstancePredProcIds_13, &backend_libs__base_typeclass_info__PredProcIds_19);
    }
#line 142 "base_typeclass_info.m"
    {
#line 142 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(backend_libs__base_typeclass_info__ModuleInfo_5, backend_libs__base_typeclass_info__PredProcIds_19, &backend_libs__base_typeclass_info__ProcLabels_20);
    }
#line 163 "base_typeclass_info.m"
    {
#line 163 "base_typeclass_info.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(backend_libs__base_typeclass_info__ModuleInfo_5, &backend_libs__base_typeclass_info__ClassTable_57);
    }
#line 164 "base_typeclass_info.m"
    {
#line 164 "base_typeclass_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, backend_libs__base_typeclass_info__ClassTable_57, ((MR_Box) (backend_libs__base_typeclass_info__ClassId_6)), &backend_libs__base_typeclass_info__conv1_ClassDefn_58);
    }
#line 164 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__ClassDefn_58 = ((MR_Word) backend_libs__base_typeclass_info__conv1_ClassDefn_58);
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 0)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 1)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 2)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 3)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 4)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 5)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 6)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 7)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 8)));
#line 165 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 9)));
#line 165 "base_typeclass_info.m"
    {
#line 165 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__base_typeclass_info__V_59_59, &backend_libs__base_typeclass_info__SuperClassCount_21);
    }
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 0)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 1)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 2)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 3)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 4)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 5)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 6)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 7)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 8)));
#line 166 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 9)));
#line 166 "base_typeclass_info.m"
    {
#line 166 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__base_typeclass_info_scalar_common_1[1], backend_libs__base_typeclass_info__V_60_60, &backend_libs__base_typeclass_info__ClassArity_22);
    }
#line 144 "base_typeclass_info.m"
    {
#line 144 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, backend_libs__base_typeclass_info__ProcLabels_20, &backend_libs__base_typeclass_info__NumMethods_23);
    }
#line 145 "base_typeclass_info.m"
    {
#line 145 "base_typeclass_info.m"
      MR_Word base;
#line 145 "base_typeclass_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 145 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__BaseTypeClassInfo_8 = base;
#line 145 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__NumExtra_9));
#line 145 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__NumConstraints_11));
#line 145 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__base_typeclass_info__SuperClassCount_21));
#line 145 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__base_typeclass_info__ClassArity_22));
#line 145 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__base_typeclass_info__NumMethods_23));
#line 145 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabels_20));
#line 145 "base_typeclass_info.m"
    }
#line 122 "base_typeclass_info.m"
  }
#line 119 "base_typeclass_info.m"
}

#line 84 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_2,
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__3_3,
#line 84 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4,
#line 84 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5)
#line 84 "base_typeclass_info.m"
{
#line 88 "base_typeclass_info.m"
  {
#line 88 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;

#line 88 "base_typeclass_info.m"
    if ((backend_libs__base_typeclass_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 88 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4;
#line 88 "base_typeclass_info.m"
    else
#line 90 "base_typeclass_info.m"
      {
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__3_3, (MR_Integer) 0)));
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__3_3, (MR_Integer) 1)));
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceModule_16;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__ImportStatus_17;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceTypes_20;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__Body_22;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33;
#line 96 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___TermContext_18;
#line 96 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___InstanceConstraints_19;
#line 96 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___OriginalTypes_21;
#line 96 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___MaybePredProcIds_23;
#line 96 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___Varset_24;
#line 96 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___SuperClassProofs_25;
#line 100 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__V_34_34;
#line 100 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__V_26_26;

#line 94 "base_typeclass_info.m"
        {
#line 94 "base_typeclass_info.m"
          backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__ClassId_2, backend_libs__base_typeclass_info__InstanceDefns_14, backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4, &backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33);
        }
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__InstanceModule_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 0)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__ImportStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 1)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___TermContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 2)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___InstanceConstraints_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 3)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__InstanceTypes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 4)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___OriginalTypes_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 5)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 6)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___MaybePredProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 7)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___Varset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 8)));
#line 96 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___SuperClassProofs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 9)));
#line 100 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__succeeded = ((MR_tag((MR_Word) backend_libs__base_typeclass_info__Body_22)) == (MR_mktag((MR_Integer) 1)));
#line 100 "base_typeclass_info.m"
        if (backend_libs__base_typeclass_info__succeeded)
#line 100 "base_typeclass_info.m"
          {
#line 100 "base_typeclass_info.m"
            backend_libs__base_typeclass_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__Body_22, (MR_Integer) 0)));
#line 103 "base_typeclass_info.m"
            {
#line 103 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__V_34_34 = parse_tree__status__status_defined_in_this_module_1_f_0(backend_libs__base_typeclass_info__ImportStatus_17);
            }
#line 103 "base_typeclass_info.m"
            backend_libs__base_typeclass_info__succeeded = (backend_libs__base_typeclass_info__V_34_34 == (MR_Integer) 1);
#line 100 "base_typeclass_info.m"
          }
#line 111 "base_typeclass_info.m"
        if (backend_libs__base_typeclass_info__succeeded)
#line 105 "base_typeclass_info.m"
          {
#line 105 "base_typeclass_info.m"
            MR_String backend_libs__base_typeclass_info__InstanceString_27;
#line 105 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__BaseTypeClassInfo_28;
#line 105 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__TCName_29;
#line 105 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__RttiData_30;

#line 105 "base_typeclass_info.m"
            {
#line 105 "base_typeclass_info.m"
              hlds__hlds_code_util__make_instance_string_2_p_0(backend_libs__base_typeclass_info__InstanceTypes_20, &backend_libs__base_typeclass_info__InstanceString_27);
            }
#line 106 "base_typeclass_info.m"
            {
#line 106 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__gen_body_4_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__ClassId_2, backend_libs__base_typeclass_info__InstanceDefn_13, &backend_libs__base_typeclass_info__BaseTypeClassInfo_28);
            }
#line 107 "base_typeclass_info.m"
            {
#line 107 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__TCName_29 = backend_libs__type_class_info__generate_class_name_1_f_0(backend_libs__base_typeclass_info__ClassId_2);
            }
#line 108 "base_typeclass_info.m"
            {
#line 108 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__RttiData_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 108 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 108 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 1) = ((MR_Box) (backend_libs__base_typeclass_info__TCName_29));
#line 108 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 2) = ((MR_Box) (backend_libs__base_typeclass_info__InstanceModule_16));
#line 108 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 3) = ((MR_Box) (backend_libs__base_typeclass_info__InstanceString_27));
#line 108 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 4) = ((MR_Box) (backend_libs__base_typeclass_info__BaseTypeClassInfo_28));
#line 108 "base_typeclass_info.m"
            }
#line 110 "base_typeclass_info.m"
            {
#line 110 "base_typeclass_info.m"
              MR_Word base;
#line 110 "base_typeclass_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "base_typeclass_info.m"
              *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = base;
#line 110 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__RttiData_30));
#line 110 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33));
#line 110 "base_typeclass_info.m"
            }
#line 105 "base_typeclass_info.m"
          }
#line 111 "base_typeclass_info.m"
        else
#line 111 "base_typeclass_info.m"
          *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33;
#line 90 "base_typeclass_info.m"
      }
#line 88 "base_typeclass_info.m"
  }
#line 84 "base_typeclass_info.m"
}

#line 74 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
#line 74 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_1,
#line 74 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 74 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3,
#line 74 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4)
#line 74 "base_typeclass_info.m"
{
#line 78 "base_typeclass_info.m"
  while (MR_TRUE)
#line 78 "base_typeclass_info.m"
    {
#line 78 "base_typeclass_info.m"
      /* tailcall optimized into a loop */
#line 78 "base_typeclass_info.m"
      {
#line 78 "base_typeclass_info.m"
        MR_bool backend_libs__base_typeclass_info__succeeded;

#line 78 "base_typeclass_info.m"
        if ((backend_libs__base_typeclass_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 78 "base_typeclass_info.m"
          *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3;
#line 78 "base_typeclass_info.m"
        else
#line 79 "base_typeclass_info.m"
          {
#line 79 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__Class_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__Classes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__ClassId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Class_10, (MR_Integer) 0)));
#line 79 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Class_10, (MR_Integer) 1)));
#line 79 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17;

#line 81 "base_typeclass_info.m"
            {
#line 81 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(backend_libs__base_typeclass_info__HeadVar__1_1, backend_libs__base_typeclass_info__ClassId_13, backend_libs__base_typeclass_info__InstanceDefns_14, backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3, &backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17);
            }
#line 82 "base_typeclass_info.m"
            /* direct tailcall eliminated */
#line 82 "base_typeclass_info.m"
            {
#line 82 "base_typeclass_info.m"
              MR_Word backend_libs__base_typeclass_info__HeadVar__2__tmp_copy_2 = backend_libs__base_typeclass_info__Classes_11;
#line 82 "base_typeclass_info.m"
              MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0__tmp_copy_3 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17;

#line 82 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0__tmp_copy_3;
#line 82 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__HeadVar__2_2 = backend_libs__base_typeclass_info__HeadVar__2__tmp_copy_2;
#line 82 "base_typeclass_info.m"
            }
#line 82 "base_typeclass_info.m"
            continue;
#line 79 "base_typeclass_info.m"
          }
#line 78 "base_typeclass_info.m"
      }
#line 78 "base_typeclass_info.m"
      break;
#line 78 "base_typeclass_info.m"
    }
#line 74 "base_typeclass_info.m"
}

#line 37 "base_typeclass_info.m"
void MR_CALL 
backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(
#line 37 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_3,
#line 37 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__RttiDatas_4)
#line 37 "base_typeclass_info.m"
{
#line 69 "base_typeclass_info.m"
  {
#line 69 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;
#line 69 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__InstanceTable_5;
#line 69 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__AllInstances_6;

#line 70 "base_typeclass_info.m"
    {
#line 70 "base_typeclass_info.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(backend_libs__base_typeclass_info__ModuleInfo_3, &backend_libs__base_typeclass_info__InstanceTable_5);
    }
#line 71 "base_typeclass_info.m"
    {
#line 71 "base_typeclass_info.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &backend_libs__base_typeclass_info_scalar_common_1[0], backend_libs__base_typeclass_info__InstanceTable_5, &backend_libs__base_typeclass_info__AllInstances_6);
    }
#line 72 "base_typeclass_info.m"
    {
#line 72 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(backend_libs__base_typeclass_info__ModuleInfo_3, backend_libs__base_typeclass_info__AllInstances_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__base_typeclass_info__RttiDatas_4);
#line 72 "base_typeclass_info.m"
      return;
    }
#line 69 "base_typeclass_info.m"
  }
#line 37 "base_typeclass_info.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.base_typeclass_info. */
