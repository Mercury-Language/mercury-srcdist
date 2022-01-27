/*
** Automatically generated from `pd_debug.m'
** by the Mercury compiler,
** version rotd-2021-03-15
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


// :- module transform_hlds.pd_debug.
// :- implementation.

/*
INIT mercury__transform_hlds__pd_debug__init
ENDINIT
*/

#include "transform_hlds.pd_debug.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "ops.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.pd_info.mih"
#include "transform_hlds.pd_term.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"




static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word MaybeVersion_6);

static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word Version_9,
  MR_Word WriteUnfoldedGoal_10);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(
  MR_Word PDInfo_6,
  MR_String Msg_7,
  MR_Word Goal_8);


static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_1[1][1];

static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_2[1][6];




static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_1[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0(
  MR_Word PDInfo_5,
  MR_Word PredProcIds_6)
{
  {
    MR_Word ModuleInfo_8;
    MR_Word Globals_9;
    MR_Word DebugPD_10;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_5, &ModuleInfo_8);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 92, &DebugPD_10);
    switch (DebugPD_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcStrs_30;
          MR_String ProcsStr_31;
          MR_Word Var_32;

          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_4_p_0_1));
            MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (ModuleInfo_8));
          }
          ProcStrs_30 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_32, PredProcIds_6);
          ProcsStr_31 = mercury__string__join_list_2_f_0((MR_String) ", ", ProcStrs_30);
          mercury__io__write_string_3_p_0(ProcsStr_31);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word DebugPD_5,
  MR_Box Thing_6)
{
  switch (DebugPD_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_3_p_0(TypeInfo_for_T_12, Thing_6);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_context_6_p_0(
  MR_Word DebugPD_7,
  MR_Word Context_8,
  MR_String Fmt_9,
  MR_Word Args_10)
{
  switch (DebugPD_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        parse_tree__prog_out__write_context_to_cur_stream_3_p_0(Context_8);
        mercury__io__flush_output_2_p_0();
        mercury__io__format_4_p_0(Fmt_9, Args_10);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_5_p_0(
  MR_Word DebugPD_6,
  MR_String Fmt_7,
  MR_Word Args_8)
{
  switch (DebugPD_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__format_4_p_0(Fmt_7, Args_8);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_instmap_3_p_0(
  MR_Word PDInfo_4)
{
  {
    MR_Word Stream_6;
    MR_Word InstMap_7;
    MR_Word ProcInfo_8;
    MR_Word VarSet_9;
    MR_Word ModuleInfo_10;
    MR_Word Globals_11;
    MR_Word DebugPD_12;

    mercury__io__output_stream_3_p_0(&Stream_6);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(PDInfo_4, &InstMap_7);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(PDInfo_4, &ProcInfo_8);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_8, &VarSet_9);
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_4, &ModuleInfo_10);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 92, &DebugPD_12);
    switch (DebugPD_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_out__hlds_out_mode__write_instmap_7_p_0(Stream_6, VarSet_9, (MR_Integer) 1, (MR_Integer) 1, InstMap_7);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_register_version_5_p_0(
  MR_Word PDInfo_6,
  MR_Word PredProcId_7,
  MR_Word Version_8)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word Globals_11;
    MR_Word DebugPD_12;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_6, &ModuleInfo_10);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 92, &DebugPD_12);
    switch (DebugPD_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "Registering version:\n");
          transform_hlds__pd_debug__pd_debug_output_version_6_p_0(ModuleInfo_10, PredProcId_7, Version_8, (MR_Integer) 0);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_4_p_0(
  MR_Word PDInfo_5,
  MR_Word MaybeVersion_6)
{
  {
    MR_Word ModuleInfo_8;
    MR_Word Globals_9;
    MR_Word DebugPD_10;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_5, &ModuleInfo_8);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 92, &DebugPD_10);
    switch (DebugPD_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(ModuleInfo_8, MaybeVersion_6);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_2_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word MaybeVersion_6)
{
  if ((MaybeVersion_6 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_3_p_0((MR_String) "Specialised version not found.\n");
  else
  {
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersion_6, (MR_Integer) 2))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeVersion_6, (MR_Integer) 1))));
    MR_Word Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MaybeVersion_6, (MR_Integer) 0))) & (MR_Integer) 1);

    switch (Var_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__write_string_3_p_0((MR_String) "Exact match found.\n");
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "More general version.\n");
          transform_hlds__pd_debug__pd_debug_output_version_6_p_0(ModuleInfo_5, Var_31, Var_30, (MR_Integer) 0);
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word Version_9,
  MR_Word WriteUnfoldedGoal_10)
{
  {
    MR_Word Stream_12;
    MR_Word Goal_13;
    MR_Word Args_15;
    MR_Word InstMap_17;
    MR_Integer InitialCost_18;
    MR_Integer CostDelta_19;
    MR_Word Parents_20;
    MR_Word GoalInfo_23;
    MR_String PredName_24;
    MR_Word PredId_25;
    MR_Integer ProcId_26;
    MR_Integer PredInt_27;
    MR_Integer ProcInt_28;
    MR_Word NonLocals_29;
    MR_Word ProcInfo_31;
    MR_Word VarSet_32;
    MR_Word InstMap1_33;
    MR_Word Globals_34;
    MR_Word OutInfo_35;
    MR_Word ParentsList_36;
    MR_Word ParentStrs_37;
    MR_String ParentsStr_38;
    MR_String Var_66;
    MR_Word Var_79;
    MR_String Var_102;
    MR_String Var_112;
    MR_String Var_123;
    MR_String Var_134;
    MR_Word Var_30;

    mercury__io__output_stream_3_p_0(&Stream_12);
    Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Version_9, (MR_Integer) 0))));
    Args_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Version_9, (MR_Integer) 2))));
    InstMap_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Version_9, (MR_Integer) 4))));
    InitialCost_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Version_9, (MR_Integer) 5))));
    CostDelta_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Version_9, (MR_Integer) 6))));
    Parents_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Version_9, (MR_Integer) 7))));
    GoalInfo_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_13, (MR_Integer) 1))));
    PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 0))));
    ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_8, (MR_Integer) 1))));
    PredName_24 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_7, PredId_25);
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_25, &PredInt_27);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_26, &ProcInt_28);
    mercury__io__write_string_4_p_0(Stream_12, PredName_24);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ": (PredProcId :");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), PredInt_27, &Var_102);
    mercury__io__write_string_4_p_0(Stream_12, Var_102);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "-");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), ProcInt_28, &Var_112);
    mercury__io__write_string_4_p_0(Stream_12, Var_112);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) ")\n");
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " initial cost: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), InitialCost_18, &Var_123);
    mercury__io__write_string_4_p_0(Stream_12, Var_123);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " cost delta: ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), CostDelta_19, &Var_134);
    mercury__io__write_string_4_p_0(Stream_12, Var_134);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    NonLocals_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_23);
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_7, PredId_25, ProcId_26, &Var_30, &ProcInfo_31);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_31, &VarSet_32);
    hlds__instmap__instmap_restrict_3_p_0(NonLocals_29, InstMap_17, &InstMap1_33);
    Var_66 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_32, (MR_Integer) 1, Args_15);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) " args: ");
    mercury__io__write_string_4_p_0(Stream_12, Var_66);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    hlds__hlds_out__hlds_out_mode__write_instmap_7_p_0(Stream_12, VarSet_32, (MR_Integer) 1, (MR_Integer) 1, InstMap1_33);
    mercury__io__nl_3_p_0(Stream_12);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_34);
    OutInfo_35 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_34, (MR_Integer) 1);
    hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(OutInfo_35, Stream_12, ModuleInfo_7, VarSet_32, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n", Goal_13);
    mercury__io__nl_3_p_0(Stream_12);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Parents_20, &ParentsList_36);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_79, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_79, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_output_version_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_79, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_79, 3) = ((MR_Box) (ModuleInfo_7));
    }
    ParentStrs_37 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_79, ParentsList_36);
    ParentsStr_38 = mercury__string__join_list_2_f_0((MR_String) ", ", ParentStrs_37);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "Parents: ");
    mercury__io__write_string_4_p_0(Stream_12, ParentsStr_38);
    mercury__io__write_string_4_p_0(Stream_12, (MR_String) "\n");
    switch (WriteUnfoldedGoal_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcGoal_39;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_31, &ProcGoal_39);
          mercury__io__write_string_4_p_0(Stream_12, (MR_String) "Unfolded goal\n");
          hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(OutInfo_35, Stream_12, ModuleInfo_7, VarSet_32, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n", ProcGoal_39);
          mercury__io__nl_3_p_0(Stream_12);
        }
        break;
    }
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_5_p_0(
  MR_Word PDInfo_6,
  MR_String Msg_7,
  MR_Word Goal_8)
{
  {
    MR_Word ModuleInfo_10;
    MR_Word Globals_11;
    MR_Word DebugPD_12;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_6, &ModuleInfo_10);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 92, &DebugPD_12);
    switch (DebugPD_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(PDInfo_6, Msg_7, Goal_8);
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_2_5_p_0(
  MR_Word PDInfo_6,
  MR_String Msg_7,
  MR_Word Goal_8)
{
  {
    MR_Word Stream_10;
    MR_Word ProcInfo_13;
    MR_Word VarSet_14;
    MR_Word InstMap_15;
    MR_Word ModuleInfo_16;
    MR_Word Vars_17;
    MR_Word InstMap1_18;
    MR_Word Globals_19;
    MR_Word OutInfo_20;

    mercury__io__output_stream_3_p_0(&Stream_10);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(PDInfo_6, &ProcInfo_13);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_13, &VarSet_14);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(PDInfo_6, &InstMap_15);
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_6, &ModuleInfo_16);
    mercury__io__write_string_3_p_0(Msg_7);
    hlds__goal_util__goal_vars_2_p_0(Goal_8, &Vars_17);
    hlds__instmap__instmap_restrict_3_p_0(Vars_17, InstMap_15, &InstMap1_18);
    hlds__hlds_out__hlds_out_mode__write_instmap_7_p_0(Stream_10, VarSet_14, (MR_Integer) 1, (MR_Integer) 1, InstMap1_18);
    mercury__io__nl_3_p_0(Stream_10);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_19);
    OutInfo_20 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_19, (MR_Integer) 1);
    hlds__hlds_out__hlds_out_goal__write_goal_10_p_0(OutInfo_20, Stream_10, ModuleInfo_16, VarSet_14, (MR_Integer) 1, (MR_Integer) 1, (MR_String) "\n", Goal_8);
    mercury__io__nl_3_p_0(Stream_10);
    mercury__io__flush_output_3_p_0(Stream_10);
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_do_io_4_p_0(
  MR_Word DebugPD_5,
  MR_Word Pred_6)
{
  switch (DebugPD_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));
        MR_Box conv1_STATE_VARIABLE_IO_10_10;

        func_0(((MR_Box) (Pred_6)), ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10_10);
        mercury__io__flush_output_2_p_0();
      }
      break;
  }
}

void mercury__transform_hlds__pd_debug__init(void)
{
}

void mercury__transform_hlds__pd_debug__init_type_tables(void)
{
}

void mercury__transform_hlds__pd_debug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__pd_debug__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.pd_debug.
