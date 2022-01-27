/*
** Automatically generated from `base_typeclass_info.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 131 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__IntroducedFrom__pred__gen_body__131__1_2_p_0(
#line 131 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_27,
#line 131 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__2_28);

#line 143 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
#line 143 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 143 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 143 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__3_3);

#line 131 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0_1(
#line 131 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__closure_arg,
#line 131 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__wrapper_arg_1,
#line 131 "base_typeclass_info.m"
  MR_Box * backend_libs__base_typeclass_info__wrapper_arg_2);

#line 114 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
#line 114 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_5,
#line 114 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_6,
#line 114 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__InstanceDefn_7,
#line 114 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__BaseTypeClassInfo_8);

#line 78 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_2,
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__3_3,
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4,
#line 78 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5);

#line 68 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
#line 68 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_1,
#line 68 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 68 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3,
#line 68 "base_typeclass_info.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 131 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__IntroducedFrom__pred__gen_body__131__1_2_p_0(
#line 131 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_27,
#line 131 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__2_28)
#line 131 "base_typeclass_info.m"
{
#line 131 "base_typeclass_info.m"
  {
#line 131 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;
#line 131 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__HeadVar__1_27, (MR_Integer) 0)));
#line 131 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__HeadVar__1_27, (MR_Integer) 1)));

#line 134 "base_typeclass_info.m"
    {
#line 134 "base_typeclass_info.m"
      MR_Word base;
#line 134 "base_typeclass_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 134 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__HeadVar__2_28 = base;
#line 134 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__PredId_17));
#line 134 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__ProcId_18));
#line 134 "base_typeclass_info.m"
    }
#line 131 "base_typeclass_info.m"
  }
#line 131 "base_typeclass_info.m"
}

#line 143 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(
#line 143 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 143 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 143 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__HeadVar__3_3)
#line 143 "base_typeclass_info.m"
{
#line 146 "base_typeclass_info.m"
  {
#line 146 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;

#line 146 "base_typeclass_info.m"
    if ((backend_libs__base_typeclass_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 146 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 146 "base_typeclass_info.m"
    else
#line 148 "base_typeclass_info.m"
      {
#line 148 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__PredId_6;
#line 148 "base_typeclass_info.m"
        MR_Integer backend_libs__base_typeclass_info__ProcId_7;
#line 148 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__PredProcIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__ProcLabel_9;
#line 148 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__ProcLabels_10;
#line 148 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__PredId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__V_11_11, (MR_Integer) 0)));
#line 147 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__ProcId_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__V_11_11, (MR_Integer) 1)));
#line 149 "base_typeclass_info.m"
        {
#line 149 "base_typeclass_info.m"
          backend_libs__base_typeclass_info__ProcLabel_9 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__PredId_6, backend_libs__base_typeclass_info__ProcId_7);
        }
#line 150 "base_typeclass_info.m"
        {
#line 150 "base_typeclass_info.m"
          backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__PredProcIds_8, &backend_libs__base_typeclass_info__ProcLabels_10);
        }
#line 148 "base_typeclass_info.m"
        {
#line 148 "base_typeclass_info.m"
          MR_Word base;
#line 148 "base_typeclass_info.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "base_typeclass_info.m"
          *backend_libs__base_typeclass_info__HeadVar__3_3 = base;
#line 148 "base_typeclass_info.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabel_9));
#line 148 "base_typeclass_info.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabels_10));
#line 148 "base_typeclass_info.m"
        }
#line 148 "base_typeclass_info.m"
      }
#line 146 "base_typeclass_info.m"
  }
#line 143 "base_typeclass_info.m"
}

#line 131 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0_1(
#line 131 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__closure_arg,
#line 131 "base_typeclass_info.m"
  MR_Box backend_libs__base_typeclass_info__wrapper_arg_1,
#line 131 "base_typeclass_info.m"
  MR_Box * backend_libs__base_typeclass_info__wrapper_arg_2)
#line 131 "base_typeclass_info.m"
{
#line 131 "base_typeclass_info.m"
  {
#line 131 "base_typeclass_info.m"
    MR_Box backend_libs__base_typeclass_info__closure = backend_libs__base_typeclass_info__closure_arg;
#line 131 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__conv0_HeadVar__2_28;

#line 131 "base_typeclass_info.m"
    {
#line 131 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__IntroducedFrom__pred__gen_body__131__1_2_p_0(((MR_Word) backend_libs__base_typeclass_info__wrapper_arg_1), &backend_libs__base_typeclass_info__conv0_HeadVar__2_28);
    }
#line 131 "base_typeclass_info.m"
    *backend_libs__base_typeclass_info__wrapper_arg_2 = ((MR_Box) (backend_libs__base_typeclass_info__conv0_HeadVar__2_28));
#line 131 "base_typeclass_info.m"
  }
#line 131 "base_typeclass_info.m"
}

#line 114 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_body_4_p_0(
#line 114 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_5,
#line 114 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_6,
#line 114 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__InstanceDefn_7,
#line 114 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__BaseTypeClassInfo_8)
#line 114 "base_typeclass_info.m"
{
#line 117 "base_typeclass_info.m"
  {
#line 117 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;
#line 117 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__NumExtra_9;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__Constraints_10;
#line 117 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__NumConstraints_11;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__InstancePredProcIds_13;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__PredProcIds_19;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__ProcLabels_20;
#line 117 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__SuperClassCount_21;
#line 117 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__ClassArity_22;
#line 117 "base_typeclass_info.m"
    MR_Integer backend_libs__base_typeclass_info__NumMethods_23;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__ClassTable_57;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__ClassDefn_58;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_59_59;
#line 117 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_60_60;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_31_31;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_32_32;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_33_33;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_34_34;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_35_35;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_36_36;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_37_37;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_38_38;
#line 120 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_39_39;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_40_40;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_41_41;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_42_42;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_43_43;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_44_44;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_45_45;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_46_46;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_47_47;
#line 123 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_48_48;
#line 159 "base_typeclass_info.m"
    MR_Box backend_libs__base_typeclass_info__conv1_ClassDefn_58;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_61_61;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_62_62;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_63_63;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_64_64;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_65_65;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_66_66;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_67_67;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_68_68;
#line 160 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_69_69;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_70_70;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_71_71;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_72_72;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_73_73;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_74_74;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_75_75;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_76_76;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_77_77;
#line 161 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__V_78_78;

#line 118 "base_typeclass_info.m"
    {
#line 118 "base_typeclass_info.m"
      hlds__hlds_data__num_extra_instance_args_2_p_0(backend_libs__base_typeclass_info__InstanceDefn_7, &backend_libs__base_typeclass_info__NumExtra_9);
    }
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 0)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 1)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 2)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 3)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 4)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 5)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 6)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 7)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 8)));
#line 120 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 9)));
#line 121 "base_typeclass_info.m"
    {
#line 121 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__base_typeclass_info__Constraints_10, &backend_libs__base_typeclass_info__NumConstraints_11);
    }
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 0)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 1)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 2)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 3)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 4)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 5)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 6)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 7)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 8)));
#line 123 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_7, (MR_Integer) 9)));
#line 128 "base_typeclass_info.m"
    if ((backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 125 "base_typeclass_info.m"
      {
#line 126 "base_typeclass_info.m"
        {
#line 126 "base_typeclass_info.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.base_typeclass_info", (MR_String) "predicate \140backend_libs.base_typeclass_info.gen_body\'/4", (MR_String) "pred_proc_ids not filled in by check_typeclass.m");
#line 126 "base_typeclass_info.m"
          return;
        }
#line 125 "base_typeclass_info.m"
      }
#line 128 "base_typeclass_info.m"
    else
#line 129 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__InstancePredProcIds_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__MaybeInstancePredProcIds_12, (MR_Integer) 0)));
#line 136 "base_typeclass_info.m"
    {
#line 136 "base_typeclass_info.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &backend_libs__base_typeclass_info_scalar_common_3[0], backend_libs__base_typeclass_info__InstancePredProcIds_13, &backend_libs__base_typeclass_info__PredProcIds_19);
    }
#line 137 "base_typeclass_info.m"
    {
#line 137 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__construct_proc_labels_3_p_0(backend_libs__base_typeclass_info__ModuleInfo_5, backend_libs__base_typeclass_info__PredProcIds_19, &backend_libs__base_typeclass_info__ProcLabels_20);
    }
#line 158 "base_typeclass_info.m"
    {
#line 158 "base_typeclass_info.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(backend_libs__base_typeclass_info__ModuleInfo_5, &backend_libs__base_typeclass_info__ClassTable_57);
    }
#line 159 "base_typeclass_info.m"
    {
#line 159 "base_typeclass_info.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, backend_libs__base_typeclass_info__ClassTable_57, ((MR_Box) (backend_libs__base_typeclass_info__ClassId_6)), &backend_libs__base_typeclass_info__conv1_ClassDefn_58);
    }
#line 159 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__ClassDefn_58 = ((MR_Word) backend_libs__base_typeclass_info__conv1_ClassDefn_58);
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 0)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 1)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 2)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 3)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 4)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 5)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 6)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 7)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 8)));
#line 160 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 9)));
#line 160 "base_typeclass_info.m"
    {
#line 160 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, backend_libs__base_typeclass_info__V_59_59, &backend_libs__base_typeclass_info__SuperClassCount_21);
    }
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 0)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 1)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 2)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 3)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 4)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 5)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 6)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 7)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 8)));
#line 161 "base_typeclass_info.m"
    backend_libs__base_typeclass_info__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__ClassDefn_58, (MR_Integer) 9)));
#line 161 "base_typeclass_info.m"
    {
#line 161 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__base_typeclass_info_scalar_common_1[1], backend_libs__base_typeclass_info__V_60_60, &backend_libs__base_typeclass_info__ClassArity_22);
    }
#line 139 "base_typeclass_info.m"
    {
#line 139 "base_typeclass_info.m"
      mercury__list__length_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, backend_libs__base_typeclass_info__ProcLabels_20, &backend_libs__base_typeclass_info__NumMethods_23);
    }
#line 140 "base_typeclass_info.m"
    {
#line 140 "base_typeclass_info.m"
      MR_Word base;
#line 140 "base_typeclass_info.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 140 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__BaseTypeClassInfo_8 = base;
#line 140 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__NumExtra_9));
#line 140 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__NumConstraints_11));
#line 140 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__base_typeclass_info__SuperClassCount_21));
#line 140 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__base_typeclass_info__ClassArity_22));
#line 140 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__base_typeclass_info__NumMethods_23));
#line 140 "base_typeclass_info.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__base_typeclass_info__ProcLabels_20));
#line 140 "base_typeclass_info.m"
    }
#line 117 "base_typeclass_info.m"
  }
#line 114 "base_typeclass_info.m"
}

#line 78 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ModuleInfo_1,
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__ClassId_2,
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__3_3,
#line 78 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4,
#line 78 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5)
#line 78 "base_typeclass_info.m"
{
#line 82 "base_typeclass_info.m"
  {
#line 82 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;

#line 82 "base_typeclass_info.m"
    if ((backend_libs__base_typeclass_info__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 82 "base_typeclass_info.m"
      *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4;
#line 82 "base_typeclass_info.m"
    else
#line 84 "base_typeclass_info.m"
      {
#line 84 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceDefn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__3_3, (MR_Integer) 0)));
#line 84 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__3_3, (MR_Integer) 1)));
#line 84 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceModule_16;
#line 84 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__InstanceTypes_17;
#line 84 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__ImportStatus_19;
#line 84 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__Body_22;
#line 84 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___OriginalTypes_18;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___TermContext_20;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___InstanceConstraints_21;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___MaybePredProcIds_23;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___Varset_24;
#line 90 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info___SuperClassProofs_25;
#line 95 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__V_34_34;
#line 95 "base_typeclass_info.m"
        MR_Word backend_libs__base_typeclass_info__V_26_26;

#line 88 "base_typeclass_info.m"
        {
#line 88 "base_typeclass_info.m"
          backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__ClassId_2, backend_libs__base_typeclass_info__InstanceDefns_14, backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_4, &backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33);
        }
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__InstanceModule_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 0)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__InstanceTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 1)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___OriginalTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 2)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__ImportStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 3)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___TermContext_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 4)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___InstanceConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 5)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__Body_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 6)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___MaybePredProcIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 7)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___Varset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 8)));
#line 90 "base_typeclass_info.m"
        backend_libs__base_typeclass_info___SuperClassProofs_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__InstanceDefn_13, (MR_Integer) 9)));
#line 95 "base_typeclass_info.m"
        backend_libs__base_typeclass_info__succeeded = ((MR_tag((MR_Word) backend_libs__base_typeclass_info__Body_22)) == (MR_mktag((MR_Integer) 1)));
#line 95 "base_typeclass_info.m"
        if (backend_libs__base_typeclass_info__succeeded)
#line 95 "base_typeclass_info.m"
          {
#line 95 "base_typeclass_info.m"
            backend_libs__base_typeclass_info__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__Body_22, (MR_Integer) 0)));
#line 98 "base_typeclass_info.m"
            {
#line 98 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__V_34_34 = hlds__status__instance_status_defined_in_this_module_1_f_0(backend_libs__base_typeclass_info__ImportStatus_19);
            }
#line 98 "base_typeclass_info.m"
            backend_libs__base_typeclass_info__succeeded = (backend_libs__base_typeclass_info__V_34_34 == (MR_Integer) 1);
#line 95 "base_typeclass_info.m"
          }
#line 106 "base_typeclass_info.m"
        if (backend_libs__base_typeclass_info__succeeded)
#line 100 "base_typeclass_info.m"
          {
#line 100 "base_typeclass_info.m"
            MR_String backend_libs__base_typeclass_info__InstanceString_27;
#line 100 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__BaseTypeClassInfo_28;
#line 100 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__TCName_29;
#line 100 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__RttiData_30;

#line 100 "base_typeclass_info.m"
            {
#line 100 "base_typeclass_info.m"
              hlds__hlds_code_util__make_instance_string_2_p_0(backend_libs__base_typeclass_info__InstanceTypes_17, &backend_libs__base_typeclass_info__InstanceString_27);
            }
#line 101 "base_typeclass_info.m"
            {
#line 101 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__gen_body_4_p_0(backend_libs__base_typeclass_info__ModuleInfo_1, backend_libs__base_typeclass_info__ClassId_2, backend_libs__base_typeclass_info__InstanceDefn_13, &backend_libs__base_typeclass_info__BaseTypeClassInfo_28);
            }
#line 102 "base_typeclass_info.m"
            {
#line 102 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__TCName_29 = backend_libs__type_class_info__generate_class_name_1_f_0(backend_libs__base_typeclass_info__ClassId_2);
            }
#line 103 "base_typeclass_info.m"
            {
#line 103 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__RttiData_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 103 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 103 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 1) = ((MR_Box) (backend_libs__base_typeclass_info__TCName_29));
#line 103 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 2) = ((MR_Box) (backend_libs__base_typeclass_info__InstanceModule_16));
#line 103 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 3) = ((MR_Box) (backend_libs__base_typeclass_info__InstanceString_27));
#line 103 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(3), backend_libs__base_typeclass_info__RttiData_30, 4) = ((MR_Box) (backend_libs__base_typeclass_info__BaseTypeClassInfo_28));
#line 103 "base_typeclass_info.m"
            }
#line 105 "base_typeclass_info.m"
            {
#line 105 "base_typeclass_info.m"
              MR_Word base;
#line 105 "base_typeclass_info.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "base_typeclass_info.m"
              *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = base;
#line 105 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__base_typeclass_info__RttiData_30));
#line 105 "base_typeclass_info.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33));
#line 105 "base_typeclass_info.m"
            }
#line 100 "base_typeclass_info.m"
          }
#line 106 "base_typeclass_info.m"
        else
#line 106 "base_typeclass_info.m"
          *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_5 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_33_33;
#line 84 "base_typeclass_info.m"
      }
#line 82 "base_typeclass_info.m"
  }
#line 78 "base_typeclass_info.m"
}

#line 68 "base_typeclass_info.m"
static void MR_CALL 
backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(
#line 68 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__1_1,
#line 68 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__HeadVar__2_2,
#line 68 "base_typeclass_info.m"
  MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3,
#line 68 "base_typeclass_info.m"
  MR_Word * backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4)
#line 68 "base_typeclass_info.m"
{
#line 72 "base_typeclass_info.m"
  while (MR_TRUE)
#line 72 "base_typeclass_info.m"
    {
#line 72 "base_typeclass_info.m"
      /* tailcall optimized into a loop */
#line 72 "base_typeclass_info.m"
      {
#line 72 "base_typeclass_info.m"
        MR_bool backend_libs__base_typeclass_info__succeeded;

#line 72 "base_typeclass_info.m"
        if ((backend_libs__base_typeclass_info__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "base_typeclass_info.m"
          *backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_4 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3;
#line 72 "base_typeclass_info.m"
        else
#line 73 "base_typeclass_info.m"
          {
#line 73 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__Class_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__Classes_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__base_typeclass_info__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__ClassId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Class_10, (MR_Integer) 0)));
#line 73 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__InstanceDefns_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__base_typeclass_info__Class_10, (MR_Integer) 1)));
#line 73 "base_typeclass_info.m"
            MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17;

#line 75 "base_typeclass_info.m"
            {
#line 75 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__gen_infos_for_instances_5_p_0(backend_libs__base_typeclass_info__HeadVar__1_1, backend_libs__base_typeclass_info__ClassId_13, backend_libs__base_typeclass_info__InstanceDefns_14, backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3, &backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17);
            }
#line 76 "base_typeclass_info.m"
            /* direct tailcall eliminated */
#line 76 "base_typeclass_info.m"
            {
#line 76 "base_typeclass_info.m"
              MR_Word backend_libs__base_typeclass_info__HeadVar__2__tmp_copy_2 = backend_libs__base_typeclass_info__Classes_11;
#line 76 "base_typeclass_info.m"
              MR_Word backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0__tmp_copy_3 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_17_17;

#line 76 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0_3 = backend_libs__base_typeclass_info__STATE_VARIABLE_RttiDatas_0__tmp_copy_3;
#line 76 "base_typeclass_info.m"
              backend_libs__base_typeclass_info__HeadVar__2_2 = backend_libs__base_typeclass_info__HeadVar__2__tmp_copy_2;
#line 76 "base_typeclass_info.m"
            }
#line 76 "base_typeclass_info.m"
            continue;
#line 73 "base_typeclass_info.m"
          }
#line 72 "base_typeclass_info.m"
      }
#line 72 "base_typeclass_info.m"
      break;
#line 72 "base_typeclass_info.m"
    }
#line 68 "base_typeclass_info.m"
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
#line 63 "base_typeclass_info.m"
  {
#line 63 "base_typeclass_info.m"
    MR_bool backend_libs__base_typeclass_info__succeeded;
#line 63 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__InstanceTable_5;
#line 63 "base_typeclass_info.m"
    MR_Word backend_libs__base_typeclass_info__AllInstances_6;

#line 64 "base_typeclass_info.m"
    {
#line 64 "base_typeclass_info.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(backend_libs__base_typeclass_info__ModuleInfo_3, &backend_libs__base_typeclass_info__InstanceTable_5);
    }
#line 65 "base_typeclass_info.m"
    {
#line 65 "base_typeclass_info.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &backend_libs__base_typeclass_info_scalar_common_1[0], backend_libs__base_typeclass_info__InstanceTable_5, &backend_libs__base_typeclass_info__AllInstances_6);
    }
#line 66 "base_typeclass_info.m"
    {
#line 66 "base_typeclass_info.m"
      backend_libs__base_typeclass_info__gen_infos_for_classes_4_p_0(backend_libs__base_typeclass_info__ModuleInfo_3, backend_libs__base_typeclass_info__AllInstances_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), backend_libs__base_typeclass_info__RttiDatas_4);
#line 66 "base_typeclass_info.m"
      return;
    }
#line 63 "base_typeclass_info.m"
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
