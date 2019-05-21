/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module backend_libs.name_mangle. */
/* :- implementation. */

/*
INIT mercury__backend_libs__name_mangle__init
ENDINIT
*/

#include "backend_libs.name_mangle.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "int.mih"
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




static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
  MR_Word backend_libs__name_mangle__DefiningModule_8,
  MR_Word backend_libs__name_mangle__PredOrFunc_9,
  MR_Word backend_libs__name_mangle__DeclaringModule_10,
  MR_String backend_libs__name_mangle__Name0_11,
  MR_Integer backend_libs__name_mangle__Arity_12,
  MR_Word backend_libs__name_mangle__AddPrefix_13);


static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[1][1];




static /* final */ const MR_Box backend_libs__name_mangle_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



MR_String MR_CALL 
backend_libs__name_mangle__mercury_common_type_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_type_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_vector_common_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_common_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_data_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_data_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_var_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury_var_";
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__mercury_label_prefix_0_f_0(void)
{
  {
    return (MR_String) "mercury__";
  }
}

void MR_CALL 
backend_libs__name_mangle__output_init_name_3_p_0(
  MR_Word backend_libs__name_mangle__ModuleName_4)
{
  {
    MR_String backend_libs__name_mangle__InitName_6;

    backend_libs__name_mangle__InitName_6 = parse_tree__prog_foreign__make_init_name_1_f_0(backend_libs__name_mangle__ModuleName_4);
    mercury__io__write_string_3_p_0(backend_libs__name_mangle__InitName_6);
  }
}

void MR_CALL 
backend_libs__name_mangle__output_base_typeclass_info_name_4_p_0(
  MR_Word backend_libs__name_mangle__TCName_5,
  MR_String backend_libs__name_mangle__TypeNames_6)
{
  {
    MR_String backend_libs__name_mangle__Str_8;

    backend_libs__name_mangle__Str_8 = backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(backend_libs__name_mangle__TCName_5, backend_libs__name_mangle__TypeNames_6);
    mercury__io__write_string_3_p_0((MR_String) "mercury_data_");
    mercury__io__write_string_3_p_0(backend_libs__name_mangle__Str_8);
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__make_base_typeclass_info_name_2_f_0(
  MR_Word backend_libs__name_mangle__TCName_4,
  MR_String backend_libs__name_mangle__TypeNames_5)
{
  {
    MR_String backend_libs__name_mangle__Str_6;
    MR_Word backend_libs__name_mangle__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TCName_4, (MR_Integer) 0)));
    MR_String backend_libs__name_mangle__ClassName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TCName_4, (MR_Integer) 1)));
    MR_Integer backend_libs__name_mangle__ClassArity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TCName_4, (MR_Integer) 2)));
    MR_Word backend_libs__name_mangle__ClassSym_10;
    MR_String backend_libs__name_mangle__MangledClassString_11;
    MR_String backend_libs__name_mangle__ArityString_12;
    MR_String backend_libs__name_mangle__MangledTypeNames_13;
    MR_Word backend_libs__name_mangle__Var_14;
    MR_Word backend_libs__name_mangle__Var_16;
    MR_Word backend_libs__name_mangle__Var_17;
    MR_Word backend_libs__name_mangle__Var_19;
    MR_Word backend_libs__name_mangle__Var_20;
    MR_Word backend_libs__name_mangle__Var_22;

    {
      backend_libs__name_mangle__ClassSym_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ClassSym_10, 0) = ((MR_Box) (backend_libs__name_mangle__ModuleName_7));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ClassSym_10, 1) = ((MR_Box) (backend_libs__name_mangle__ClassName_8));
    }
    backend_libs__name_mangle__MangledClassString_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__ClassSym_10);
    mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__ClassArity_9, &backend_libs__name_mangle__ArityString_12);
    backend_libs__name_mangle__MangledTypeNames_13 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__TypeNames_5);
    {
      backend_libs__name_mangle__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_22, 0) = ((MR_Box) (backend_libs__name_mangle__MangledTypeNames_13));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      backend_libs__name_mangle__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_20, 0) = ((MR_Box) ((MR_String) "__"));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_20, 1) = ((MR_Box) (backend_libs__name_mangle__Var_22));
    }
    {
      backend_libs__name_mangle__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_19, 0) = ((MR_Box) (backend_libs__name_mangle__ArityString_12));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_19, 1) = ((MR_Box) (backend_libs__name_mangle__Var_20));
    }
    {
      backend_libs__name_mangle__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_17, 0) = ((MR_Box) ((MR_String) "__arity"));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_17, 1) = ((MR_Box) (backend_libs__name_mangle__Var_19));
    }
    {
      backend_libs__name_mangle__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_16, 0) = ((MR_Box) (backend_libs__name_mangle__MangledClassString_11));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_16, 1) = ((MR_Box) (backend_libs__name_mangle__Var_17));
    }
    {
      backend_libs__name_mangle__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_14, 0) = ((MR_Box) ((MR_String) "base_typeclass_info_"));
      MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_14, 1) = ((MR_Box) (backend_libs__name_mangle__Var_16));
    }
    mercury__string__append_list_2_p_0(backend_libs__name_mangle__Var_14, &backend_libs__name_mangle__Str_6);
    return backend_libs__name_mangle__Str_6;
  }
}

MR_bool MR_CALL 
backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(
  MR_Word backend_libs__name_mangle__HeadVar__1_1)
{
  {
    MR_bool backend_libs__name_mangle__succeeded;

    if (((MR_tag((MR_Word) backend_libs__name_mangle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word backend_libs__name_mangle__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
      MR_String backend_libs__name_mangle__PlainName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__HeadVar__1_1, (MR_Integer) 1)));
      MR_String backend_libs__name_mangle__Var_7;
      MR_String backend_libs__name_mangle___Suffix_6;

      backend_libs__name_mangle__succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(backend_libs__name_mangle__ModuleName_3);
      if (backend_libs__name_mangle__succeeded)
      {
        backend_libs__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__name_mangle__PlainName_4);
        if (backend_libs__name_mangle__succeeded)
        {
          backend_libs__name_mangle__Var_7 = (MR_String) "f_";
          backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__Var_7, &backend_libs__name_mangle___Suffix_6, backend_libs__name_mangle__PlainName_4);
          backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
        }
      }
    }
    else
    {
      MR_String backend_libs__name_mangle__Name_2 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__HeadVar__1_1, (MR_Integer) 0)));
      MR_String backend_libs__name_mangle__Var_10;
      MR_String backend_libs__name_mangle___Suffix_9;

      backend_libs__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__name_mangle__Name_2);
      if (backend_libs__name_mangle__succeeded)
      {
        backend_libs__name_mangle__Var_10 = (MR_String) "f_";
        backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__Var_10, &backend_libs__name_mangle___Suffix_9, backend_libs__name_mangle__Name_2);
        backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
      }
    }
    return backend_libs__name_mangle__succeeded;
  }
}

MR_bool MR_CALL 
backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(
  MR_String backend_libs__name_mangle__Name_2)
{
  {
    MR_bool backend_libs__name_mangle__succeeded;
    MR_String backend_libs__name_mangle__Var_4;
    MR_String backend_libs__name_mangle___Suffix_3;

    backend_libs__name_mangle__succeeded = mercury__string__is_all_alnum_or_underscore_1_p_0(backend_libs__name_mangle__Name_2);
    if (backend_libs__name_mangle__succeeded)
    {
      backend_libs__name_mangle__Var_4 = (MR_String) "f_";
      backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__Var_4, &backend_libs__name_mangle___Suffix_3, backend_libs__name_mangle__Name_2);
      backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
    }
    return backend_libs__name_mangle__succeeded;
  }
}

void MR_CALL 
backend_libs__name_mangle__output_proc_label_maybe_prefix_4_p_0(
  MR_Word backend_libs__name_mangle__ProcLabel_5,
  MR_Word backend_libs__name_mangle__AddPrefix_6)
{
  {
    MR_String backend_libs__name_mangle__ProcLabelString_8;

    backend_libs__name_mangle__ProcLabelString_8 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__name_mangle__ProcLabel_5, backend_libs__name_mangle__AddPrefix_6);
    mercury__io__write_string_3_p_0(backend_libs__name_mangle__ProcLabelString_8);
  }
}

void MR_CALL 
backend_libs__name_mangle__output_proc_label_no_prefix_3_p_0(
  MR_Word backend_libs__name_mangle__ProcLabel_4)
{
  {
    MR_String backend_libs__name_mangle__ProcLabelString_15;

    backend_libs__name_mangle__ProcLabelString_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 0);
    mercury__io__write_string_3_p_0(backend_libs__name_mangle__ProcLabelString_15);
  }
}

void MR_CALL 
backend_libs__name_mangle__output_proc_label_3_p_0(
  MR_Word backend_libs__name_mangle__ProcLabel_4)
{
  {
    MR_String backend_libs__name_mangle__ProcLabelString_15;

    backend_libs__name_mangle__ProcLabelString_15 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 1);
    mercury__io__write_string_3_p_0(backend_libs__name_mangle__ProcLabelString_15);
  }
}

MR_String MR_CALL 
backend_libs__name_mangle__proc_label_to_c_string_2_f_0(
  MR_Word backend_libs__name_mangle__ProcLabel_4,
  MR_Word backend_libs__name_mangle__AddPrefix_5)
{
  {
    MR_bool backend_libs__name_mangle__succeeded;
    MR_String backend_libs__name_mangle__ProcLabelString_6;

    if (((MR_tag((MR_Word) backend_libs__name_mangle__ProcLabel_4)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word backend_libs__name_mangle__DefiningModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 0)));
      MR_Word backend_libs__name_mangle__PredOrFunc_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 1)));
      MR_Word backend_libs__name_mangle__PredModule_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 2)));
      MR_String backend_libs__name_mangle__PredName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 3)));
      MR_Integer backend_libs__name_mangle__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 4)));
      MR_Integer backend_libs__name_mangle__ModeInt_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 5)));
      MR_String backend_libs__name_mangle__LabelName_13;
      MR_Integer backend_libs__name_mangle__OrigArity_14;
      MR_String backend_libs__name_mangle__ArityString_15;
      MR_String backend_libs__name_mangle__ModeNumString_16;
      MR_Word backend_libs__name_mangle__Var_48;
      MR_Word backend_libs__name_mangle__Var_49;
      MR_Word backend_libs__name_mangle__Var_51;
      MR_Word backend_libs__name_mangle__Var_52;
      MR_Word backend_libs__name_mangle__Var_54;
      MR_String backend_libs__name_mangle__DeclaringModuleName_67;
      MR_String backend_libs__name_mangle__DefiningModuleName_68;
      MR_String backend_libs__name_mangle__LabelName0_69;
      MR_String backend_libs__name_mangle__LabelName1_70;
      MR_String backend_libs__name_mangle__LabelName2_71;
      MR_String backend_libs__name_mangle__LabelName3_72;

      backend_libs__name_mangle__DeclaringModuleName_67 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__PredModule_9);
      backend_libs__name_mangle__DefiningModuleName_68 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__DefiningModule_7);
      backend_libs__name_mangle__succeeded = (strcmp(backend_libs__name_mangle__PredName_10, (MR_String) "main") == 0);
      if (backend_libs__name_mangle__succeeded)
        backend_libs__name_mangle__succeeded = (backend_libs__name_mangle__Arity_11 == (MR_Integer) 2);
      if (!(backend_libs__name_mangle__succeeded))
      {
        backend_libs__name_mangle__succeeded = mercury__string__prefix_2_p_0(backend_libs__name_mangle__PredName_10, (MR_String) "__");
      }
      if (backend_libs__name_mangle__succeeded)
        backend_libs__name_mangle__LabelName0_69 = backend_libs__name_mangle__PredName_10;
      else
        backend_libs__name_mangle__LabelName0_69 = parse_tree__prog_foreign__qualify_name_2_f_0(backend_libs__name_mangle__DeclaringModuleName_67, backend_libs__name_mangle__PredName_10);
      backend_libs__name_mangle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__name_mangle__DefiningModule_7, backend_libs__name_mangle__PredModule_9);
      backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
      if (backend_libs__name_mangle__succeeded)
      {
        MR_String backend_libs__name_mangle__Var_73;

        backend_libs__name_mangle__Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "__", backend_libs__name_mangle__LabelName0_69);
        backend_libs__name_mangle__LabelName1_70 = mercury__string__f_43_43_2_f_0(backend_libs__name_mangle__DefiningModuleName_68, backend_libs__name_mangle__Var_73);
      }
      else
        backend_libs__name_mangle__LabelName1_70 = backend_libs__name_mangle__LabelName0_69;
      backend_libs__name_mangle__LabelName2_71 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__LabelName1_70);
      switch (backend_libs__name_mangle__PredOrFunc_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            backend_libs__name_mangle__LabelName3_72 = mercury__string__f_43_43_2_f_0((MR_String) "fn__", backend_libs__name_mangle__LabelName2_71);
            backend_libs__name_mangle__OrigArity_14 = (backend_libs__name_mangle__Arity_11 - (MR_Integer) 1);
          }
          break;
        case (MR_Integer) 0:
          {
            backend_libs__name_mangle__LabelName3_72 = backend_libs__name_mangle__LabelName2_71;
            backend_libs__name_mangle__OrigArity_14 = backend_libs__name_mangle__Arity_11;
          }
          break;
      }
      switch (backend_libs__name_mangle__AddPrefix_5) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          backend_libs__name_mangle__LabelName_13 = backend_libs__name_mangle__LabelName3_72;
          break;
        case (MR_Integer) 1:
          {
            backend_libs__name_mangle__LabelName_13 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", backend_libs__name_mangle__LabelName3_72);
          }
          break;
      }
      mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__OrigArity_14, &backend_libs__name_mangle__ArityString_15);
      mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__ModeInt_12, &backend_libs__name_mangle__ModeNumString_16);
      {
        backend_libs__name_mangle__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_54, 0) = ((MR_Box) (backend_libs__name_mangle__ModeNumString_16));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        backend_libs__name_mangle__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_52, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_52, 1) = ((MR_Box) (backend_libs__name_mangle__Var_54));
      }
      {
        backend_libs__name_mangle__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_51, 0) = ((MR_Box) (backend_libs__name_mangle__ArityString_15));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_51, 1) = ((MR_Box) (backend_libs__name_mangle__Var_52));
      }
      {
        backend_libs__name_mangle__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_49, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_49, 1) = ((MR_Box) (backend_libs__name_mangle__Var_51));
      }
      {
        backend_libs__name_mangle__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_48, 0) = ((MR_Box) (backend_libs__name_mangle__LabelName_13));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_48, 1) = ((MR_Box) (backend_libs__name_mangle__Var_49));
      }
      mercury__string__append_list_2_p_0(backend_libs__name_mangle__Var_48, &backend_libs__name_mangle__ProcLabelString_6);
    }
    else
    {
      MR_Word backend_libs__name_mangle__Module_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 0)));
      MR_Word backend_libs__name_mangle__SpecialPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 1)));
      MR_Word backend_libs__name_mangle__TypeModule_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 2)));
      MR_String backend_libs__name_mangle__TypeName_20 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 3)));
      MR_Integer backend_libs__name_mangle__TypeArity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 4)));
      MR_Word backend_libs__name_mangle__TypeCtor_23;
      MR_String backend_libs__name_mangle__TypeArityString_24;
      MR_String backend_libs__name_mangle__MangledModule_25;
      MR_String backend_libs__name_mangle__MangledTypeModule_26;
      MR_String backend_libs__name_mangle__MangledTypeName_27;
      MR_String backend_libs__name_mangle__QualifiedMangledTypeName_28;
      MR_String backend_libs__name_mangle__FullyQualifiedMangledTypeName_29;
      MR_Word backend_libs__name_mangle__Var_30;
      MR_Word backend_libs__name_mangle__Var_31;
      MR_Word backend_libs__name_mangle__Var_36;
      MR_Word backend_libs__name_mangle__Var_37;
      MR_Word backend_libs__name_mangle__Var_39;
      MR_Word backend_libs__name_mangle__Var_40;
      MR_Word backend_libs__name_mangle__Var_42;
      MR_Word backend_libs__name_mangle__Var_43;
      MR_Word backend_libs__name_mangle__Var_45;
      MR_String backend_libs__name_mangle__PredName_56;
      MR_Integer backend_libs__name_mangle__ModeInt_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__name_mangle__ProcLabel_4, (MR_Integer) 5)));
      MR_String backend_libs__name_mangle__LabelName_58;
      MR_String backend_libs__name_mangle__ModeNumString_59;
      MR_String backend_libs__name_mangle__UnderscoresModule_84;
      MR_String backend_libs__name_mangle__Var_85;

      {
        backend_libs__name_mangle__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_30, 0) = ((MR_Box) (backend_libs__name_mangle__TypeModule_19));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_30, 1) = ((MR_Box) (backend_libs__name_mangle__TypeName_20));
      }
      {
        backend_libs__name_mangle__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TypeCtor_23, 0) = ((MR_Box) (backend_libs__name_mangle__Var_30));
        MR_hl_field(MR_mktag(0), backend_libs__name_mangle__TypeCtor_23, 1) = ((MR_Box) (backend_libs__name_mangle__TypeArity_21));
      }
      backend_libs__name_mangle__PredName_56 = hlds__special_pred__special_pred_name_2_f_0(backend_libs__name_mangle__SpecialPredId_18, backend_libs__name_mangle__TypeCtor_23);
      backend_libs__name_mangle__Var_31 = (MR_Word) &backend_libs__name_mangle_scalar_common_1[0];
      backend_libs__name_mangle__LabelName_58 = backend_libs__name_mangle__make_pred_or_func_name_6_f_0(backend_libs__name_mangle__Var_31, (MR_Integer) 0, backend_libs__name_mangle__Var_31, backend_libs__name_mangle__PredName_56, (MR_Integer) -1, backend_libs__name_mangle__AddPrefix_5);
      mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__TypeArity_21, &backend_libs__name_mangle__TypeArityString_24);
      mercury__string__int_to_string_2_p_0(backend_libs__name_mangle__ModeInt_57, &backend_libs__name_mangle__ModeNumString_59);
      backend_libs__name_mangle__MangledModule_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__Module_17);
      backend_libs__name_mangle__MangledTypeModule_26 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__TypeModule_19);
      backend_libs__name_mangle__MangledTypeName_27 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__TypeName_20);
      backend_libs__name_mangle__QualifiedMangledTypeName_28 = parse_tree__prog_foreign__qualify_name_2_f_0(backend_libs__name_mangle__MangledTypeModule_26, backend_libs__name_mangle__MangledTypeName_27);
      mercury__string__append_3_p_2(backend_libs__name_mangle__MangledModule_25, (MR_String) "__", &backend_libs__name_mangle__UnderscoresModule_84);
      backend_libs__name_mangle__succeeded = mercury__string__append_3_p_1(backend_libs__name_mangle__UnderscoresModule_84, &backend_libs__name_mangle__Var_85, backend_libs__name_mangle__QualifiedMangledTypeName_28);
      if (backend_libs__name_mangle__succeeded)
        backend_libs__name_mangle__FullyQualifiedMangledTypeName_29 = backend_libs__name_mangle__QualifiedMangledTypeName_28;
      else
        mercury__string__append_3_p_2(backend_libs__name_mangle__UnderscoresModule_84, backend_libs__name_mangle__QualifiedMangledTypeName_28, &backend_libs__name_mangle__FullyQualifiedMangledTypeName_29);
      {
        backend_libs__name_mangle__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_45, 0) = ((MR_Box) (backend_libs__name_mangle__ModeNumString_59));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        backend_libs__name_mangle__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_43, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_43, 1) = ((MR_Box) (backend_libs__name_mangle__Var_45));
      }
      {
        backend_libs__name_mangle__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_42, 0) = ((MR_Box) (backend_libs__name_mangle__TypeArityString_24));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_42, 1) = ((MR_Box) (backend_libs__name_mangle__Var_43));
      }
      {
        backend_libs__name_mangle__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_40, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_40, 1) = ((MR_Box) (backend_libs__name_mangle__Var_42));
      }
      {
        backend_libs__name_mangle__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_39, 0) = ((MR_Box) (backend_libs__name_mangle__FullyQualifiedMangledTypeName_29));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_39, 1) = ((MR_Box) (backend_libs__name_mangle__Var_40));
      }
      {
        backend_libs__name_mangle__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_37, 0) = ((MR_Box) ((MR_String) "_"));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_37, 1) = ((MR_Box) (backend_libs__name_mangle__Var_39));
      }
      {
        backend_libs__name_mangle__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_36, 0) = ((MR_Box) (backend_libs__name_mangle__LabelName_58));
        MR_hl_field(MR_mktag(1), backend_libs__name_mangle__Var_36, 1) = ((MR_Box) (backend_libs__name_mangle__Var_37));
      }
      mercury__string__append_list_2_p_0(backend_libs__name_mangle__Var_36, &backend_libs__name_mangle__ProcLabelString_6);
    }
    return backend_libs__name_mangle__ProcLabelString_6;
  }
}

static MR_String MR_CALL 
backend_libs__name_mangle__make_pred_or_func_name_6_f_0(
  MR_Word backend_libs__name_mangle__DefiningModule_8,
  MR_Word backend_libs__name_mangle__PredOrFunc_9,
  MR_Word backend_libs__name_mangle__DeclaringModule_10,
  MR_String backend_libs__name_mangle__Name0_11,
  MR_Integer backend_libs__name_mangle__Arity_12,
  MR_Word backend_libs__name_mangle__AddPrefix_13)
{
  {
    MR_bool backend_libs__name_mangle__succeeded;
    MR_String backend_libs__name_mangle__LabelName_14;
    MR_String backend_libs__name_mangle__DeclaringModuleName_15;
    MR_String backend_libs__name_mangle__DefiningModuleName_16;
    MR_String backend_libs__name_mangle__LabelName0_17;
    MR_String backend_libs__name_mangle__LabelName1_18;
    MR_String backend_libs__name_mangle__LabelName2_19;
    MR_String backend_libs__name_mangle__LabelName3_20;

    backend_libs__name_mangle__DeclaringModuleName_15 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__DeclaringModule_10);
    backend_libs__name_mangle__DefiningModuleName_16 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(backend_libs__name_mangle__DefiningModule_8);
    backend_libs__name_mangle__succeeded = (strcmp(backend_libs__name_mangle__Name0_11, (MR_String) "main") == 0);
    if (backend_libs__name_mangle__succeeded)
      backend_libs__name_mangle__succeeded = (backend_libs__name_mangle__Arity_12 == (MR_Integer) 2);
    if (!(backend_libs__name_mangle__succeeded))
    {
      backend_libs__name_mangle__succeeded = mercury__string__prefix_2_p_0(backend_libs__name_mangle__Name0_11, (MR_String) "__");
    }
    if (backend_libs__name_mangle__succeeded)
      backend_libs__name_mangle__LabelName0_17 = backend_libs__name_mangle__Name0_11;
    else
      backend_libs__name_mangle__LabelName0_17 = parse_tree__prog_foreign__qualify_name_2_f_0(backend_libs__name_mangle__DeclaringModuleName_15, backend_libs__name_mangle__Name0_11);
    backend_libs__name_mangle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__name_mangle__DefiningModule_8, backend_libs__name_mangle__DeclaringModule_10);
    backend_libs__name_mangle__succeeded = !(backend_libs__name_mangle__succeeded);
    if (backend_libs__name_mangle__succeeded)
    {
      MR_String backend_libs__name_mangle__Var_21;

      backend_libs__name_mangle__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "__", backend_libs__name_mangle__LabelName0_17);
      backend_libs__name_mangle__LabelName1_18 = mercury__string__f_43_43_2_f_0(backend_libs__name_mangle__DefiningModuleName_16, backend_libs__name_mangle__Var_21);
    }
    else
      backend_libs__name_mangle__LabelName1_18 = backend_libs__name_mangle__LabelName0_17;
    backend_libs__name_mangle__LabelName2_19 = parse_tree__prog_foreign__name_mangle_1_f_0(backend_libs__name_mangle__LabelName1_18);
    switch (backend_libs__name_mangle__PredOrFunc_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          backend_libs__name_mangle__LabelName3_20 = mercury__string__f_43_43_2_f_0((MR_String) "fn__", backend_libs__name_mangle__LabelName2_19);
        }
        break;
      case (MR_Integer) 0:
        backend_libs__name_mangle__LabelName3_20 = backend_libs__name_mangle__LabelName2_19;
        break;
    }
    switch (backend_libs__name_mangle__AddPrefix_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        backend_libs__name_mangle__LabelName_14 = backend_libs__name_mangle__LabelName3_20;
        break;
      case (MR_Integer) 1:
        {
          backend_libs__name_mangle__LabelName_14 = mercury__string__f_43_43_2_f_0((MR_String) "mercury__", backend_libs__name_mangle__LabelName3_20);
        }
        break;
    }
    return backend_libs__name_mangle__LabelName_14;
  }
}

void mercury__backend_libs__name_mangle__init(void)
{
}

void mercury__backend_libs__name_mangle__init_type_tables(void)
{
}

void mercury__backend_libs__name_mangle__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__backend_libs__name_mangle__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module backend_libs.name_mangle. */
