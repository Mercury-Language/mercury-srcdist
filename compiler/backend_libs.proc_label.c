/*
** Automatically generated from `proc_label.m'
** by the Mercury compiler,
** version DEV
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


/* :- module backend_libs.proc_label. */
/* :- implementation. */

/*
INIT mercury__backend_libs__proc_label__init
ENDINIT
*/

#include "backend_libs.proc_label.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"










#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_Word MR_CALL 
backend_libs__proc_label__make_uni_label_3_f_0(
  MR_Word backend_libs__proc_label__ModuleInfo_5,
  MR_Word backend_libs__proc_label__TypeCtor_6,
  MR_Integer backend_libs__proc_label__UniModeNum_7)
{
  {
    MR_bool backend_libs__proc_label__succeeded;
    MR_Word backend_libs__proc_label__ProcLabel_8;
    MR_Word backend_libs__proc_label__ModuleName_9;
    MR_Word backend_libs__proc_label__TypeModule_10;
    MR_String backend_libs__proc_label__TypeName_11;
    MR_Integer backend_libs__proc_label__Arity_12;
    MR_Word backend_libs__proc_label__Var_15;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(backend_libs__proc_label__ModuleInfo_5, &backend_libs__proc_label__ModuleName_9);
    }
    backend_libs__proc_label__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_6, (MR_Integer) 0)));
    backend_libs__proc_label__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_6, (MR_Integer) 1)));
    backend_libs__proc_label__succeeded = ((MR_tag((MR_Word) backend_libs__proc_label__Var_15)) == (MR_mktag((MR_Integer) 1)));
    if (backend_libs__proc_label__succeeded)
      {
        backend_libs__proc_label__TypeModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__Var_15, (MR_Integer) 0)));
        backend_libs__proc_label__TypeName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__Var_15, (MR_Integer) 1)));
        {
          MR_Word backend_libs__proc_label__Module_13;
          MR_Integer backend_libs__proc_label__UniModeNumInt_14;
          MR_Integer backend_libs__proc_label__Var_20;

          {
            hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&backend_libs__proc_label__Var_20);
          }
          backend_libs__proc_label__succeeded = (backend_libs__proc_label__UniModeNum_7 == backend_libs__proc_label__Var_20);
          if (backend_libs__proc_label__succeeded)
            backend_libs__proc_label__Module_13 = backend_libs__proc_label__TypeModule_10;
          else
            backend_libs__proc_label__Module_13 = backend_libs__proc_label__ModuleName_9;
          {
            hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__UniModeNum_7, &backend_libs__proc_label__UniModeNumInt_14);
          }
          {
            backend_libs__proc_label__ProcLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 0) = ((MR_Box) (backend_libs__proc_label__Module_13));
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 2) = ((MR_Box) (backend_libs__proc_label__TypeModule_10));
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 3) = ((MR_Box) (backend_libs__proc_label__TypeName_11));
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 4) = ((MR_Box) (backend_libs__proc_label__Arity_12));
            MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 5) = ((MR_Box) (backend_libs__proc_label__UniModeNumInt_14));
          }
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.proc_label", (MR_String) "function \140backend_libs.proc_label.make_uni_label\'/3", (MR_String) "unqualified type_ctor");
        }
      }
    return backend_libs__proc_label__ProcLabel_8;
  }
}

MR_Word MR_CALL 
backend_libs__proc_label__make_proc_label_3_f_0(
  MR_Word backend_libs__proc_label__ModuleInfo_5,
  MR_Word backend_libs__proc_label__PredId_6,
  MR_Integer backend_libs__proc_label__ProcId_7)
{
  {
    MR_bool backend_libs__proc_label__succeeded;
    MR_Word backend_libs__proc_label__ProcLabel_8;
    MR_Word backend_libs__proc_label__ThisModule_9;
    MR_Word backend_libs__proc_label__PredInfo_10;
    MR_Word backend_libs__proc_label__PredOrFunc_12;
    MR_Word backend_libs__proc_label__PredModule_13;
    MR_String backend_libs__proc_label__PredName_14;
    MR_Integer backend_libs__proc_label__PredArity_15;
    MR_Word backend_libs__proc_label__PredIsImported_16;
    MR_Word backend_libs__proc_label__Origin_17;
    MR_Word backend_libs__proc_label___ProcInfo_11;
    MR_Word backend_libs__proc_label__SpecialPred_27;
    MR_Word backend_libs__proc_label__TypeCtor_28;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(backend_libs__proc_label__ModuleInfo_5, &backend_libs__proc_label__ThisModule_9);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__proc_label__ModuleInfo_5, backend_libs__proc_label__PredId_6, backend_libs__proc_label__ProcId_7, &backend_libs__proc_label__PredInfo_10, &backend_libs__proc_label___ProcInfo_11);
    }
    {
      backend_libs__proc_label__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
    {
      backend_libs__proc_label__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
    {
      backend_libs__proc_label__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
    {
      backend_libs__proc_label__PredArity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(backend_libs__proc_label__PredInfo_10);
    }
    {
      backend_libs__proc_label__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(backend_libs__proc_label__PredInfo_10);
    }
    if (backend_libs__proc_label__succeeded)
      backend_libs__proc_label__PredIsImported_16 = (MR_Integer) 1;
    else
      backend_libs__proc_label__PredIsImported_16 = (MR_Integer) 0;
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(backend_libs__proc_label__PredInfo_10, &backend_libs__proc_label__Origin_17);
    }
    backend_libs__proc_label__succeeded = ((MR_tag((MR_Word) backend_libs__proc_label__Origin_17)) == (MR_mktag((MR_Integer) 0)));
    if (backend_libs__proc_label__succeeded)
      {
        backend_libs__proc_label__SpecialPred_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__Origin_17, (MR_Integer) 0)));
        backend_libs__proc_label__TypeCtor_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__Origin_17, (MR_Integer) 1)));
        {
          MR_Integer backend_libs__proc_label__TypeArity_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_28, (MR_Integer) 1)));
          MR_String backend_libs__proc_label__TypeName_31;
          MR_Word backend_libs__proc_label__TypeModule_32;
          MR_Word backend_libs__proc_label__TypeCtorSymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_28, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) backend_libs__proc_label__TypeCtorSymName_29)) == (MR_mktag((MR_Integer) 1))))
            {
              backend_libs__proc_label__TypeModule_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_29, (MR_Integer) 0)));
              backend_libs__proc_label__TypeName_31 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_29, (MR_Integer) 1)));
              backend_libs__proc_label__succeeded = MR_TRUE;
            }
          else
            {
              backend_libs__proc_label__TypeName_31 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtorSymName_29, (MR_Integer) 0)));
              {
                backend_libs__proc_label__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(backend_libs__proc_label__TypeCtor_28);
              }
              if (backend_libs__proc_label__succeeded)
                {
                  {
                    backend_libs__proc_label__TypeModule_32 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
                  backend_libs__proc_label__succeeded = MR_TRUE;
                }
            }
          if (backend_libs__proc_label__succeeded)
            {
              MR_Word backend_libs__proc_label__DefiningModule_33;
              MR_Integer backend_libs__proc_label__ProcIdInt_34;
              MR_Integer backend_libs__proc_label__Var_41;

              {
                backend_libs__proc_label__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_9, backend_libs__proc_label__TypeModule_32);
              }
              backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
              if (backend_libs__proc_label__succeeded)
                {
                  backend_libs__proc_label__succeeded = (backend_libs__proc_label__SpecialPred_27 == (MR_Integer) 0);
                  if (backend_libs__proc_label__succeeded)
                    {
                      {
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&backend_libs__proc_label__Var_41);
                      }
                      backend_libs__proc_label__succeeded = (backend_libs__proc_label__ProcId_7 == backend_libs__proc_label__Var_41);
                      backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
                    }
                }
              if (backend_libs__proc_label__succeeded)
                backend_libs__proc_label__DefiningModule_33 = backend_libs__proc_label__ThisModule_9;
              else
                backend_libs__proc_label__DefiningModule_33 = backend_libs__proc_label__TypeModule_32;
              {
                hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_7, &backend_libs__proc_label__ProcIdInt_34);
              }
              {
                backend_libs__proc_label__ProcLabel_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_33));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 1) = ((MR_Box) (backend_libs__proc_label__SpecialPred_27));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 2) = ((MR_Box) (backend_libs__proc_label__TypeModule_32));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 3) = ((MR_Box) (backend_libs__proc_label__TypeName_31));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 4) = ((MR_Box) (backend_libs__proc_label__TypeArity_30));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_8, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_34));
              }
            }
          else
            {
              MR_String backend_libs__proc_label__Var_37;
              MR_String backend_libs__proc_label__Var_39;

              {
                backend_libs__proc_label__Var_39 = mercury__string__f_43_43_2_f_0(backend_libs__proc_label__PredName_14, (MR_String) "\'");
              }
              {
                backend_libs__proc_label__Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", backend_libs__proc_label__Var_39);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.proc_label", (MR_String) "function \140backend_libs.proc_label.do_make_proc_label\'/8", backend_libs__proc_label__Var_37);
              }
            }
        }
      }
    else
      {
        MR_Word backend_libs__proc_label__DefiningModule_51;
        MR_Integer backend_libs__proc_label__ProcIdInt_52;

        {
          backend_libs__proc_label__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_9, backend_libs__proc_label__PredModule_13);
        }
        backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
        if (backend_libs__proc_label__succeeded)
          backend_libs__proc_label__succeeded = (backend_libs__proc_label__PredIsImported_16 == (MR_Integer) 0);
        if (backend_libs__proc_label__succeeded)
          backend_libs__proc_label__DefiningModule_51 = backend_libs__proc_label__ThisModule_9;
        else
          backend_libs__proc_label__DefiningModule_51 = backend_libs__proc_label__PredModule_13;
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_7, &backend_libs__proc_label__ProcIdInt_52);
        }
        {
          backend_libs__proc_label__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_51));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 1) = ((MR_Box) (backend_libs__proc_label__PredOrFunc_12));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 2) = ((MR_Box) (backend_libs__proc_label__PredModule_13));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 3) = ((MR_Box) (backend_libs__proc_label__PredName_14));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 4) = ((MR_Box) (backend_libs__proc_label__PredArity_15));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_8, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_52));
        }
      }
    return backend_libs__proc_label__ProcLabel_8;
  }
}

MR_Word MR_CALL 
backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(
  MR_Word backend_libs__proc_label__RttiProcLabel_3)
{
  {
    MR_bool backend_libs__proc_label__succeeded;
    MR_Word backend_libs__proc_label__ProcLabel_4;
    MR_Word backend_libs__proc_label__PredOrFunc_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 0)));
    MR_Word backend_libs__proc_label__ThisModule_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 1)));
    MR_Word backend_libs__proc_label__PredModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 2)));
    MR_String backend_libs__proc_label__PredName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 3)));
    MR_Integer backend_libs__proc_label__PredArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 4)));
    MR_Integer backend_libs__proc_label__ProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 7)));
    MR_Word backend_libs__proc_label__PredIsImported_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word backend_libs__proc_label__Origin_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 11)));
    MR_Word backend_libs__proc_label___ArgTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 5)));
    MR_Word backend_libs__proc_label___PredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 6)));
    MR_Word backend_libs__proc_label___ProcHeadVarsWithNames_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 8)));
    MR_Word backend_libs__proc_label___ArgModes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 9)));
    MR_Word backend_libs__proc_label___CodeModel_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word backend_libs__proc_label___PredIsPseudoImported_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word backend_libs__proc_label___ProcIsExported_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 12)))) & (MR_Integer) 1);
    MR_Word backend_libs__proc_label___ProcIsImported_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__RttiProcLabel_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word backend_libs__proc_label__SpecialPred_30;
    MR_Word backend_libs__proc_label__TypeCtor_31;

    backend_libs__proc_label__succeeded = ((MR_tag((MR_Word) backend_libs__proc_label__Origin_18)) == (MR_mktag((MR_Integer) 0)));
    if (backend_libs__proc_label__succeeded)
      {
        backend_libs__proc_label__SpecialPred_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__Origin_18, (MR_Integer) 0)));
        backend_libs__proc_label__TypeCtor_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__Origin_18, (MR_Integer) 1)));
        {
          MR_Integer backend_libs__proc_label__TypeArity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_31, (MR_Integer) 1)));
          MR_String backend_libs__proc_label__TypeName_34;
          MR_Word backend_libs__proc_label__TypeModule_35;
          MR_Word backend_libs__proc_label__TypeCtorSymName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtor_31, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) backend_libs__proc_label__TypeCtorSymName_32)) == (MR_mktag((MR_Integer) 1))))
            {
              backend_libs__proc_label__TypeModule_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_32, (MR_Integer) 0)));
              backend_libs__proc_label__TypeName_34 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__proc_label__TypeCtorSymName_32, (MR_Integer) 1)));
              backend_libs__proc_label__succeeded = MR_TRUE;
            }
          else
            {
              backend_libs__proc_label__TypeName_34 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__proc_label__TypeCtorSymName_32, (MR_Integer) 0)));
              {
                backend_libs__proc_label__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(backend_libs__proc_label__TypeCtor_31);
              }
              if (backend_libs__proc_label__succeeded)
                {
                  {
                    backend_libs__proc_label__TypeModule_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                  }
                  backend_libs__proc_label__succeeded = MR_TRUE;
                }
            }
          if (backend_libs__proc_label__succeeded)
            {
              MR_Word backend_libs__proc_label__DefiningModule_36;
              MR_Integer backend_libs__proc_label__ProcIdInt_37;
              MR_Integer backend_libs__proc_label__Var_44;

              {
                backend_libs__proc_label__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_6, backend_libs__proc_label__TypeModule_35);
              }
              backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
              if (backend_libs__proc_label__succeeded)
                {
                  backend_libs__proc_label__succeeded = (backend_libs__proc_label__SpecialPred_30 == (MR_Integer) 0);
                  if (backend_libs__proc_label__succeeded)
                    {
                      {
                        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&backend_libs__proc_label__Var_44);
                      }
                      backend_libs__proc_label__succeeded = (backend_libs__proc_label__ProcId_12 == backend_libs__proc_label__Var_44);
                      backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
                    }
                }
              if (backend_libs__proc_label__succeeded)
                backend_libs__proc_label__DefiningModule_36 = backend_libs__proc_label__ThisModule_6;
              else
                backend_libs__proc_label__DefiningModule_36 = backend_libs__proc_label__TypeModule_35;
              {
                hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_12, &backend_libs__proc_label__ProcIdInt_37);
              }
              {
                backend_libs__proc_label__ProcLabel_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_36));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 1) = ((MR_Box) (backend_libs__proc_label__SpecialPred_30));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 2) = ((MR_Box) (backend_libs__proc_label__TypeModule_35));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 3) = ((MR_Box) (backend_libs__proc_label__TypeName_34));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 4) = ((MR_Box) (backend_libs__proc_label__TypeArity_33));
                MR_hl_field(MR_mktag(1), backend_libs__proc_label__ProcLabel_4, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_37));
              }
            }
          else
            {
              MR_String backend_libs__proc_label__Var_40;
              MR_String backend_libs__proc_label__Var_42;

              {
                backend_libs__proc_label__Var_42 = mercury__string__f_43_43_2_f_0(backend_libs__proc_label__PredName_8, (MR_String) "\'");
              }
              {
                backend_libs__proc_label__Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "cannot make label for special pred \140", backend_libs__proc_label__Var_42);
              }
              {
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.proc_label", (MR_String) "function \140backend_libs.proc_label.do_make_proc_label\'/8", backend_libs__proc_label__Var_40);
              }
            }
        }
      }
    else
      {
        MR_Word backend_libs__proc_label__DefiningModule_54;
        MR_Integer backend_libs__proc_label__ProcIdInt_55;

        {
          backend_libs__proc_label__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__proc_label__ThisModule_6, backend_libs__proc_label__PredModule_7);
        }
        backend_libs__proc_label__succeeded = !(backend_libs__proc_label__succeeded);
        if (backend_libs__proc_label__succeeded)
          backend_libs__proc_label__succeeded = (backend_libs__proc_label__PredIsImported_16 == (MR_Integer) 0);
        if (backend_libs__proc_label__succeeded)
          backend_libs__proc_label__DefiningModule_54 = backend_libs__proc_label__ThisModule_6;
        else
          backend_libs__proc_label__DefiningModule_54 = backend_libs__proc_label__PredModule_7;
        {
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__proc_label__ProcId_12, &backend_libs__proc_label__ProcIdInt_55);
        }
        {
          backend_libs__proc_label__ProcLabel_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 0) = ((MR_Box) (backend_libs__proc_label__DefiningModule_54));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 1) = ((MR_Box) (backend_libs__proc_label__PredOrFunc_5));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 2) = ((MR_Box) (backend_libs__proc_label__PredModule_7));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 3) = ((MR_Box) (backend_libs__proc_label__PredName_8));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 4) = ((MR_Box) (backend_libs__proc_label__PredArity_9));
          MR_hl_field(MR_mktag(0), backend_libs__proc_label__ProcLabel_4, 5) = ((MR_Box) (backend_libs__proc_label__ProcIdInt_55));
        }
      }
    return backend_libs__proc_label__ProcLabel_4;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__proc_label__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.proc_label. */
