/*
** Automatically generated from `proc_label.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module backend_libs.proc_label. */
/* :- implementation. */

/*
INIT mercury__backend_libs__proc_label__init
ENDINIT
*/

#include "backend_libs.proc_label.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 42 "proc_label.m"
MR_Word MR_CALL 
backend_libs__proc_label__make_uni_label_3_f_0(
#line 42 "proc_label.m"
  MR_Word backend_libs__proc_label__ModuleInfo_5,
#line 42 "proc_label.m"
  MR_Word backend_libs__proc_label__TypeCtor_6,
#line 42 "proc_label.m"
  MR_Integer backend_libs__proc_label__UniModeNum_7)
#line 42 "proc_label.m"
{
#line 146 "proc_label.m"
  {
#line 146 "proc_label.m"
    MR_bool backend_libs__proc_label__succeeded;
#line 146 "proc_label.m"
    MR_Word backend_libs__proc_label__ProcLabel_8;
#line 146 "proc_label.m"
    MR_Word backend_libs__proc_label__ModuleName_9;
#line 157 "proc_label.m"
    MR_Word backend_libs__proc_label__TypeModule_10;
#line 157 "proc_label.m"
    MR_String backend_libs__proc_label__TypeName_11;
#line 157 "proc_label.m"
    MR_Integer backend_libs__proc_label__Arity_12;
#line 148 "proc_label.m"
    MR_Word backend_libs__proc_label__V_15_15;

#line 147 "proc_label.m"
    {
#line 147 "proc_label.m"
      hlds__hlds_module__module_info_get_name_2_p_0(backend_libs__proc_label__ModuleInfo_5, &backend_libs__proc_label__ModuleName_9);
    }
#line 148 "proc_label.m"
    backend_libs__proc_label__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_6, (MR_Integer) 0)));
#line 148 "proc_label.m"
    backend_libs__proc_label__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_6, (MR_Integer) 1)));
#line 148 "proc_label.m"
    backend_libs__proc_label__succeeded = ((MR_tag((MR_Word) backend_libs__proc_label__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 148 "proc_label.m"
    if (backend_libs__proc_label__succeeded)
#line 148 "proc_label.m"
      {
#line 148 "proc_label.m"
        backend_libs__proc_label__TypeModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__V_15_15, (MR_Integer) 0)));
#line 148 "proc_label.m"
        backend_libs__proc_label__TypeName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__V_15_15, (MR_Integer) 1)));
#line 153 "proc_label.m"
        {
#line 153 "proc_label.m"
          MR_Word backend_libs__proc_label__Module_13;
#line 153 "proc_label.m"
          MR_Integer backend_libs__proc_label__UniModeNumInt_14;
#line 149 "proc_label.m"
          MR_Integer backend_libs__proc_label__V_20_20;

#line 149 "proc_label.m"
          {
#line 149 "proc_label.m"
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&backend_libs__proc_label__V_20_20);
          }
#line 149 "proc_label.m"
          backend_libs__proc_label__succeeded = (backend_libs__proc_label__UniModeNum_7 == backend_libs__proc_label__V_20_20);
#line 151 "proc_label.m"
          if (backend_libs__proc_label__succeeded)
#line 150 "proc_label.m"
            backend_libs__proc_label__Module_13 = backend_libs__proc_label__TypeModule_10;
#line 151 "proc_label.m"
          else
#line 152 "proc_label.m"
            backend_libs__proc_label__Module_13 = backend_libs__proc_label__ModuleName_9;
#line 154 "proc_label.m"
          {
#line 154 "proc_label.m"
            hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__UniModeNum_7, &backend_libs__proc_label__UniModeNumInt_14);
          }
#line 155 "proc_label.m"
          {
#line 155 "proc_label.m"
            backend_libs__proc_label__ProcLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 155 "proc_label.m"
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 0) = ((MR_Box) (backend_libs__proc_label__Module_13));
#line 155 "proc_label.m"
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 1) = ((MR_Box) ((MR_Integer) 0));
#line 155 "proc_label.m"
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 2) = ((MR_Box) (backend_libs__proc_label__TypeModule_10));
#line 155 "proc_label.m"
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 3) = ((MR_Box) (backend_libs__proc_label__TypeName_11));
#line 155 "proc_label.m"
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 4) = ((MR_Box) (backend_libs__proc_label__Arity_12));
#line 155 "proc_label.m"
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 5) = ((MR_Box) (backend_libs__proc_label__UniModeNumInt_14));
#line 155 "proc_label.m"
          }
#line 153 "proc_label.m"
        }
#line 148 "proc_label.m"
      }
#line 148 "proc_label.m"
    else
#line 158 "proc_label.m"
      {
#line 158 "proc_label.m"
        {
#line 158 "proc_label.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.proc_label", (MR_String) "function \140backend_libs.proc_label.make_uni_label\'/3", (MR_String) "unqualified type_ctor");
        }
#line 158 "proc_label.m"
      }
#line 146 "proc_label.m"
    return backend_libs__proc_label__ProcLabel_8;
#line 146 "proc_label.m"
  }
#line 42 "proc_label.m"
}

#line 37 "proc_label.m"
MR_Word MR_CALL 
backend_libs__proc_label__make_proc_label_3_f_0(
#line 37 "proc_label.m"
  MR_Word backend_libs__proc_label__ModuleInfo_5,
#line 37 "proc_label.m"
  MR_Word backend_libs__proc_label__PredId_6,
#line 37 "proc_label.m"
  MR_Integer backend_libs__proc_label__ProcId_7)
#line 37 "proc_label.m"
{
#line 66 "proc_label.m"
  {
#line 66 "proc_label.m"
    MR_bool backend_libs__proc_label__succeeded;
#line 66 "proc_label.m"
    MR_Word backend_libs__proc_label__ProcLabel_8;
#line 66 "proc_label.m"
    MR_Word backend_libs__proc_label__ThisModule_9;
#line 66 "proc_label.m"
    MR_Word backend_libs__proc_label__PredInfo_10;
#line 66 "proc_label.m"
    MR_Word backend_libs__proc_label__PredOrFunc_12;
#line 66 "proc_label.m"
    MR_Word backend_libs__proc_label__PredModule_13;
#line 66 "proc_label.m"
    MR_String backend_libs__proc_label__PredName_14;
#line 66 "proc_label.m"
    MR_Integer backend_libs__proc_label__PredArity_15;
#line 66 "proc_label.m"
    MR_Word backend_libs__proc_label__PredIsImported_16;
#line 66 "proc_label.m"
    MR_Word backend_libs__proc_label__Origin_17;
#line 68 "proc_label.m"
    MR_Word backend_libs__proc_label___ProcInfo_11;
#line 114 "proc_label.m"
    MR_Word backend_libs__proc_label__SpecialPred_27;
#line 114 "proc_label.m"
    MR_Word backend_libs__proc_label__TypeCtor_28;
#line 85 "proc_label.m"
    MR_Word backend_libs__proc_label__V_35_35;

#line 67 "proc_label.m"
    {
#line 67 "proc_label.m"
      hlds__hlds_module__module_info_get_name_2_p_0(backend_libs__proc_label__ModuleInfo_5, &backend_libs__proc_label__ThisModule_9);
    }
#line 68 "proc_label.m"
    {
#line 68 "proc_label.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__proc_label__ModuleInfo_5, backend_libs__proc_label__PredId_6, backend_libs__proc_label__ProcId_7, &backend_libs__proc_label__PredInfo_10, &backend_libs__proc_label___ProcInfo_11);
    }
#line 70 "proc_label.m"
    {
#line 70 "proc_label.m"
      backend_libs__proc_label__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
#line 71 "proc_label.m"
    {
#line 71 "proc_label.m"
      backend_libs__proc_label__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
#line 72 "proc_label.m"
    {
#line 72 "proc_label.m"
      backend_libs__proc_label__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
#line 73 "proc_label.m"
    {
#line 73 "proc_label.m"
      backend_libs__proc_label__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
#line 74 "proc_label.m"
    {
#line 74 "proc_label.m"
      backend_libs__proc_label__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(backend_libs__proc_label__PredInfo_10);
    }
#line 74 "proc_label.m"
    if (backend_libs__proc_label__succeeded)
#line 74 "proc_label.m"
      backend_libs__proc_label__PredIsImported_16 = (MR_Integer) 1;
#line 74 "proc_label.m"
    else
#line 74 "proc_label.m"
      backend_libs__proc_label__PredIsImported_16 = (MR_Integer) 0;
#line 75 "proc_label.m"
    {
#line 75 "proc_label.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(backend_libs__proc_label__PredInfo_10, &backend_libs__proc_label__Origin_17);
    }
#line 85 "proc_label.m"
    backend_libs__proc_label__succeeded = ((MR_tag((MR_Word) backend_libs__proc_label__Origin_17)) == (MR_mktag((MR_Integer) 0)));
#line 85 "proc_label.m"
    if (backend_libs__proc_label__succeeded)
#line 85 "proc_label.m"
      {
#line 85 "proc_label.m"
        backend_libs__proc_label__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__Origin_17, (MR_Integer) 0)));
#line 85 "proc_label.m"
        backend_libs__proc_label__SpecialPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__V_35_35, (MR_Integer) 0)));
#line 85 "proc_label.m"
        backend_libs__proc_label__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__V_35_35, (MR_Integer) 1)));
#line 85 "proc_label.m"
        backend_libs__proc_label__succeeded = MR_TRUE;
#line 85 "proc_label.m"
      }
#line 114 "proc_label.m"
    if (backend_libs__proc_label__succeeded)
#line 110 "proc_label.m"
      {
#line 110 "proc_label.m"
        MR_Integer backend_libs__proc_label__TypeArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_28, (MR_Integer) 1)));
#line 110 "proc_label.m"
        MR_String backend_libs__proc_label__TypeName_31;
#line 110 "proc_label.m"
        MR_Word backend_libs__proc_label__TypeModule_32;
#line 89 "proc_label.m"
        MR_Word backend_libs__proc_label__TypeCtorSymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_28, (MR_Integer) 0)));

#line 94 "proc_label.m"
        if (((MR_tag((MR_Word) backend_libs__proc_label__TypeCtorSymName_29)) == (MR_mktag((MR_Integer) 1))))
#line 95 "proc_label.m"
          {
#line 95 "proc_label.m"
            backend_libs__proc_label__TypeModule_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_29, (MR_Integer) 0)));
#line 95 "proc_label.m"
            backend_libs__proc_label__TypeName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_29, (MR_Integer) 1)));
#line 95 "proc_label.m"
            backend_libs__proc_label__succeeded = MR_TRUE;
#line 95 "proc_label.m"
          }
#line 94 "proc_label.m"
        else
#line 91 "proc_label.m"
          {
#line 91 "proc_label.m"
            backend_libs__proc_label__TypeName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtorSymName_29, (MR_Integer) 0)));
#line 92 "proc_label.m"
            {
#line 92 "proc_label.m"
              backend_libs__proc_label__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(backend_libs__proc_label__TypeCtor_28);
            }
#line 91 "proc_label.m"
            if (backend_libs__proc_label__succeeded)
#line 91 "proc_label.m"
              {
#line 93 "proc_label.m"
                {
#line 93 "proc_label.m"
                  backend_libs__proc_label__TypeModule_32 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                }
#line 93 "proc_label.m"
                backend_libs__proc_label__succeeded = MR_TRUE;
#line 91 "proc_label.m"
              }
#line 91 "proc_label.m"
          }
#line 110 "proc_label.m"
        if (backend_libs__proc_label__succeeded)
#line 106 "proc_label.m"
          {
#line 106 "proc_label.m"
            MR_Word backend_libs__proc_label__DefiningModule_33;
#line 106 "proc_label.m"
            MR_Integer backend_libs__proc_label__ProcIdInt_34;
#line 101 "proc_label.m"
            MR_Integer backend_libs__proc_label__V_42_42;

#line 99 "proc_label.m"
            {
#line 99 "proc_label.m"
              backend_libs__proc_label__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_9, backend_libs__proc_label__TypeModule_32);
            }
#line 99 "proc_label.m"
            backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
#line 99 "proc_label.m"
            if (backend_libs__proc_label__succeeded)
#line 99 "proc_label.m"
              {
#line 100 "proc_label.m"
                backend_libs__proc_label__succeeded = (backend_libs__proc_label__SpecialPred_27 == (MR_Integer) 0);
#line 99 "proc_label.m"
                if (backend_libs__proc_label__succeeded)
#line 99 "proc_label.m"
                  {
#line 101 "proc_label.m"
                    {
#line 101 "proc_label.m"
                      hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&backend_libs__proc_label__V_42_42);
                    }
#line 101 "proc_label.m"
                    backend_libs__proc_label__succeeded = (backend_libs__proc_label__ProcId_7 == backend_libs__proc_label__V_42_42);
#line 101 "proc_label.m"
                    backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
#line 99 "proc_label.m"
                  }
#line 99 "proc_label.m"
              }
#line 104 "proc_label.m"
            if (backend_libs__proc_label__succeeded)
#line 103 "proc_label.m"
              backend_libs__proc_label__DefiningModule_33 = backend_libs__proc_label__ThisModule_9;
#line 104 "proc_label.m"
            else
#line 105 "proc_label.m"
              backend_libs__proc_label__DefiningModule_33 = backend_libs__proc_label__TypeModule_32;
#line 107 "proc_label.m"
            {
#line 107 "proc_label.m"
              hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_7, &backend_libs__proc_label__ProcIdInt_34);
            }
#line 108 "proc_label.m"
            {
#line 108 "proc_label.m"
              backend_libs__proc_label__ProcLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_33));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 1) = ((MR_Box) (backend_libs__proc_label__SpecialPred_27));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 2) = ((MR_Box) (backend_libs__proc_label__TypeModule_32));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 3) = ((MR_Box) (backend_libs__proc_label__TypeName_31));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 4) = ((MR_Box) (backend_libs__proc_label__TypeArity_30));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_34));
#line 108 "proc_label.m"
            }
#line 106 "proc_label.m"
          }
#line 110 "proc_label.m"
        else
#line 111 "proc_label.m"
          {
#line 111 "proc_label.m"
            MR_String backend_libs__proc_label__V_38_38;
#line 111 "proc_label.m"
            MR_String backend_libs__proc_label__V_40_40;

#line 112 "proc_label.m"
            {
#line 112 "proc_label.m"
              backend_libs__proc_label__V_40_40 = mercury__string__f_43_43_2_f_0(backend_libs__proc_label__PredName_14, (MR_String) "\'");
            }
#line 111 "proc_label.m"
            {
#line 111 "proc_label.m"
              backend_libs__proc_label__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", backend_libs__proc_label__V_40_40);
            }
#line 111 "proc_label.m"
            {
#line 111 "proc_label.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.proc_label", (MR_String) "function \140backend_libs.proc_label.do_make_proc_label\'/8", backend_libs__proc_label__V_38_38);
            }
#line 111 "proc_label.m"
          }
#line 110 "proc_label.m"
      }
#line 114 "proc_label.m"
    else
#line 131 "proc_label.m"
      {
#line 131 "proc_label.m"
        MR_Word backend_libs__proc_label__DefiningModule_53;
#line 131 "proc_label.m"
        MR_Integer backend_libs__proc_label__ProcIdInt_54;

#line 134 "proc_label.m"
        {
#line 134 "proc_label.m"
          backend_libs__proc_label__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_9, backend_libs__proc_label__PredModule_13);
        }
#line 134 "proc_label.m"
        backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
#line 134 "proc_label.m"
        if (backend_libs__proc_label__succeeded)
#line 135 "proc_label.m"
          backend_libs__proc_label__succeeded = (backend_libs__proc_label__PredIsImported_16 == (MR_Integer) 0);
#line 139 "proc_label.m"
        if (backend_libs__proc_label__succeeded)
#line 138 "proc_label.m"
          backend_libs__proc_label__DefiningModule_53 = backend_libs__proc_label__ThisModule_9;
#line 139 "proc_label.m"
        else
#line 140 "proc_label.m"
          backend_libs__proc_label__DefiningModule_53 = backend_libs__proc_label__PredModule_13;
#line 142 "proc_label.m"
        {
#line 142 "proc_label.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_7, &backend_libs__proc_label__ProcIdInt_54);
        }
#line 143 "proc_label.m"
        {
#line 143 "proc_label.m"
          backend_libs__proc_label__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_53));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 1) = ((MR_Box) (backend_libs__proc_label__PredOrFunc_12));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 2) = ((MR_Box) (backend_libs__proc_label__PredModule_13));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 3) = ((MR_Box) (backend_libs__proc_label__PredName_14));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 4) = ((MR_Box) (backend_libs__proc_label__PredArity_15));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_54));
#line 143 "proc_label.m"
        }
#line 131 "proc_label.m"
      }
#line 66 "proc_label.m"
    return backend_libs__proc_label__ProcLabel_8;
#line 66 "proc_label.m"
  }
#line 37 "proc_label.m"
}

#line 33 "proc_label.m"
MR_Word MR_CALL 
backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(
#line 33 "proc_label.m"
  MR_Word backend_libs__proc_label__RttiProcLabel_3)
#line 33 "proc_label.m"
{
#line 57 "proc_label.m"
  {
#line 57 "proc_label.m"
    MR_bool backend_libs__proc_label__succeeded;
#line 57 "proc_label.m"
    MR_Word backend_libs__proc_label__ProcLabel_4;
#line 57 "proc_label.m"
    MR_Word backend_libs__proc_label__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 0)));
#line 57 "proc_label.m"
    MR_Word backend_libs__proc_label__ThisModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 1)));
#line 57 "proc_label.m"
    MR_Word backend_libs__proc_label__PredModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 2)));
#line 57 "proc_label.m"
    MR_String backend_libs__proc_label__PredName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 3)));
#line 57 "proc_label.m"
    MR_Integer backend_libs__proc_label__PredArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 4)));
#line 57 "proc_label.m"
    MR_Integer backend_libs__proc_label__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 7)));
#line 57 "proc_label.m"
    MR_Word backend_libs__proc_label__PredIsImported_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 57 "proc_label.m"
    MR_Word backend_libs__proc_label__Origin_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 11)));
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___ArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 5)));
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 6)));
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___ProcHeadVarsWithNames_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 8)));
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___ArgModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 9)));
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___CodeModel_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___PredIsPseudoImported_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___ProcIsExported_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 58 "proc_label.m"
    MR_Word backend_libs__proc_label___ProcIsImported_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 114 "proc_label.m"
    MR_Word backend_libs__proc_label__SpecialPred_30;
#line 114 "proc_label.m"
    MR_Word backend_libs__proc_label__TypeCtor_31;
#line 85 "proc_label.m"
    MR_Word backend_libs__proc_label__V_38_38;

#line 85 "proc_label.m"
    backend_libs__proc_label__succeeded = ((MR_tag((MR_Word) backend_libs__proc_label__Origin_18)) == (MR_mktag((MR_Integer) 0)));
#line 85 "proc_label.m"
    if (backend_libs__proc_label__succeeded)
#line 85 "proc_label.m"
      {
#line 85 "proc_label.m"
        backend_libs__proc_label__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__Origin_18, (MR_Integer) 0)));
#line 85 "proc_label.m"
        backend_libs__proc_label__SpecialPred_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__V_38_38, (MR_Integer) 0)));
#line 85 "proc_label.m"
        backend_libs__proc_label__TypeCtor_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__V_38_38, (MR_Integer) 1)));
#line 85 "proc_label.m"
        backend_libs__proc_label__succeeded = MR_TRUE;
#line 85 "proc_label.m"
      }
#line 114 "proc_label.m"
    if (backend_libs__proc_label__succeeded)
#line 110 "proc_label.m"
      {
#line 110 "proc_label.m"
        MR_Integer backend_libs__proc_label__TypeArity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_31, (MR_Integer) 1)));
#line 110 "proc_label.m"
        MR_String backend_libs__proc_label__TypeName_34;
#line 110 "proc_label.m"
        MR_Word backend_libs__proc_label__TypeModule_35;
#line 89 "proc_label.m"
        MR_Word backend_libs__proc_label__TypeCtorSymName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_31, (MR_Integer) 0)));

#line 94 "proc_label.m"
        if (((MR_tag((MR_Word) backend_libs__proc_label__TypeCtorSymName_32)) == (MR_mktag((MR_Integer) 1))))
#line 95 "proc_label.m"
          {
#line 95 "proc_label.m"
            backend_libs__proc_label__TypeModule_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_32, (MR_Integer) 0)));
#line 95 "proc_label.m"
            backend_libs__proc_label__TypeName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_32, (MR_Integer) 1)));
#line 95 "proc_label.m"
            backend_libs__proc_label__succeeded = MR_TRUE;
#line 95 "proc_label.m"
          }
#line 94 "proc_label.m"
        else
#line 91 "proc_label.m"
          {
#line 91 "proc_label.m"
            backend_libs__proc_label__TypeName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtorSymName_32, (MR_Integer) 0)));
#line 92 "proc_label.m"
            {
#line 92 "proc_label.m"
              backend_libs__proc_label__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(backend_libs__proc_label__TypeCtor_31);
            }
#line 91 "proc_label.m"
            if (backend_libs__proc_label__succeeded)
#line 91 "proc_label.m"
              {
#line 93 "proc_label.m"
                {
#line 93 "proc_label.m"
                  backend_libs__proc_label__TypeModule_35 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                }
#line 93 "proc_label.m"
                backend_libs__proc_label__succeeded = MR_TRUE;
#line 91 "proc_label.m"
              }
#line 91 "proc_label.m"
          }
#line 110 "proc_label.m"
        if (backend_libs__proc_label__succeeded)
#line 106 "proc_label.m"
          {
#line 106 "proc_label.m"
            MR_Word backend_libs__proc_label__DefiningModule_36;
#line 106 "proc_label.m"
            MR_Integer backend_libs__proc_label__ProcIdInt_37;
#line 101 "proc_label.m"
            MR_Integer backend_libs__proc_label__V_45_45;

#line 99 "proc_label.m"
            {
#line 99 "proc_label.m"
              backend_libs__proc_label__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_6, backend_libs__proc_label__TypeModule_35);
            }
#line 99 "proc_label.m"
            backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
#line 99 "proc_label.m"
            if (backend_libs__proc_label__succeeded)
#line 99 "proc_label.m"
              {
#line 100 "proc_label.m"
                backend_libs__proc_label__succeeded = (backend_libs__proc_label__SpecialPred_30 == (MR_Integer) 0);
#line 99 "proc_label.m"
                if (backend_libs__proc_label__succeeded)
#line 99 "proc_label.m"
                  {
#line 101 "proc_label.m"
                    {
#line 101 "proc_label.m"
                      hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&backend_libs__proc_label__V_45_45);
                    }
#line 101 "proc_label.m"
                    backend_libs__proc_label__succeeded = (backend_libs__proc_label__ProcId_12 == backend_libs__proc_label__V_45_45);
#line 101 "proc_label.m"
                    backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
#line 99 "proc_label.m"
                  }
#line 99 "proc_label.m"
              }
#line 104 "proc_label.m"
            if (backend_libs__proc_label__succeeded)
#line 103 "proc_label.m"
              backend_libs__proc_label__DefiningModule_36 = backend_libs__proc_label__ThisModule_6;
#line 104 "proc_label.m"
            else
#line 105 "proc_label.m"
              backend_libs__proc_label__DefiningModule_36 = backend_libs__proc_label__TypeModule_35;
#line 107 "proc_label.m"
            {
#line 107 "proc_label.m"
              hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_12, &backend_libs__proc_label__ProcIdInt_37);
            }
#line 108 "proc_label.m"
            {
#line 108 "proc_label.m"
              backend_libs__proc_label__ProcLabel_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_36));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 1) = ((MR_Box) (backend_libs__proc_label__SpecialPred_30));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 2) = ((MR_Box) (backend_libs__proc_label__TypeModule_35));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 3) = ((MR_Box) (backend_libs__proc_label__TypeName_34));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 4) = ((MR_Box) (backend_libs__proc_label__TypeArity_33));
#line 108 "proc_label.m"
              MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_37));
#line 108 "proc_label.m"
            }
#line 106 "proc_label.m"
          }
#line 110 "proc_label.m"
        else
#line 111 "proc_label.m"
          {
#line 111 "proc_label.m"
            MR_String backend_libs__proc_label__V_41_41;
#line 111 "proc_label.m"
            MR_String backend_libs__proc_label__V_43_43;

#line 112 "proc_label.m"
            {
#line 112 "proc_label.m"
              backend_libs__proc_label__V_43_43 = mercury__string__f_43_43_2_f_0(backend_libs__proc_label__PredName_8, (MR_String) "\'");
            }
#line 111 "proc_label.m"
            {
#line 111 "proc_label.m"
              backend_libs__proc_label__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", backend_libs__proc_label__V_43_43);
            }
#line 111 "proc_label.m"
            {
#line 111 "proc_label.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.proc_label", (MR_String) "function \140backend_libs.proc_label.do_make_proc_label\'/8", backend_libs__proc_label__V_41_41);
            }
#line 111 "proc_label.m"
          }
#line 110 "proc_label.m"
      }
#line 114 "proc_label.m"
    else
#line 131 "proc_label.m"
      {
#line 131 "proc_label.m"
        MR_Word backend_libs__proc_label__DefiningModule_56;
#line 131 "proc_label.m"
        MR_Integer backend_libs__proc_label__ProcIdInt_57;

#line 134 "proc_label.m"
        {
#line 134 "proc_label.m"
          backend_libs__proc_label__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_6, backend_libs__proc_label__PredModule_7);
        }
#line 134 "proc_label.m"
        backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
#line 134 "proc_label.m"
        if (backend_libs__proc_label__succeeded)
#line 135 "proc_label.m"
          backend_libs__proc_label__succeeded = (backend_libs__proc_label__PredIsImported_16 == (MR_Integer) 0);
#line 139 "proc_label.m"
        if (backend_libs__proc_label__succeeded)
#line 138 "proc_label.m"
          backend_libs__proc_label__DefiningModule_56 = backend_libs__proc_label__ThisModule_6;
#line 139 "proc_label.m"
        else
#line 140 "proc_label.m"
          backend_libs__proc_label__DefiningModule_56 = backend_libs__proc_label__PredModule_7;
#line 142 "proc_label.m"
        {
#line 142 "proc_label.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_12, &backend_libs__proc_label__ProcIdInt_57);
        }
#line 143 "proc_label.m"
        {
#line 143 "proc_label.m"
          backend_libs__proc_label__ProcLabel_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_56));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 1) = ((MR_Box) (backend_libs__proc_label__PredOrFunc_5));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 2) = ((MR_Box) (backend_libs__proc_label__PredModule_7));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 3) = ((MR_Box) (backend_libs__proc_label__PredName_8));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 4) = ((MR_Box) (backend_libs__proc_label__PredArity_9));
#line 143 "proc_label.m"
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_57));
#line 143 "proc_label.m"
        }
#line 131 "proc_label.m"
      }
#line 57 "proc_label.m"
    return backend_libs__proc_label__ProcLabel_4;
#line 57 "proc_label.m"
  }
#line 33 "proc_label.m"
}

void mercury__backend_libs__proc_label__init(void)
{
}

void mercury__backend_libs__proc_label__init_type_tables(void)
{
}

void mercury__backend_libs__proc_label__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.proc_label. */
