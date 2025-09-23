/*
** Automatically generated from `pd_debug.m'
** by the Mercury compiler,
** version rotd-2025-09-23
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
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
#include "hlds.hlds_out.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
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
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10,
  MR_Word Version_11,
  MR_Word WriteUnfoldedGoal_12);


static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_1[1][1];

static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_2[1][6];




static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_1[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box transform_hlds__pd_debug_scalar_common_2[1][6] = {
  /* row   0 */
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
#include "io.stream_ops.mh"


void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goal_6_p_0(
  MR_Word PDInfo_7,
  MR_String IdStr_8,
  MR_String Msg_9,
  MR_Word Goal_10)
{
  MR_Word MaybeDebugStream_12;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_7, &MaybeDebugStream_12);
  if (!((MaybeDebugStream_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_13 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_12, 0))));
    MR_Word ModuleInfo_16;
    MR_Word PredInfo_17;
    MR_Word ProcInfo_18;
    MR_Word VarTable_19;
    MR_Word Vars_20;
    MR_Word InstMap_21;
    MR_Word VarsInstMap_22;
    MR_String InstMapStr_23;
    MR_Word Globals_24;
    MR_Word OutInfo_25;
    MR_Word TVarSet_26;
    MR_Word InstVarSet_27;
    MR_Word Var_43;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_7, &ModuleInfo_16);
    transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(PDInfo_7, &PredInfo_17);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(PDInfo_7, &ProcInfo_18);
    mercury__io__write_string_4_p_0(DebugStream_13, IdStr_8);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) ": ");
    mercury__io__write_string_4_p_0(DebugStream_13, Msg_9);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_18, &VarTable_19);
    hlds__goal_vars__vars_in_goal_2_p_0(Goal_10, &Vars_20);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(PDInfo_7, &InstMap_21);
    hlds__instmap__instmap_restrict_3_p_0(Vars_20, InstMap_21, &VarsInstMap_22);
    InstMapStr_23 = hlds__hlds_out__hlds_out_mode__instmap_to_string_4_f_0(VarTable_19, (MR_Integer) 1, (MR_Unsigned) 1U, VarsInstMap_22);
    mercury__io__write_string_4_p_0(DebugStream_13, InstMapStr_23);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_16, &Globals_24);
    OutInfo_25 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_24, (MR_Integer) 1);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_17, &TVarSet_26);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_18, &InstVarSet_27);
    {
      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_43, 0) = ((MR_Box) (VarTable_19));
    }
    hlds__hlds_out__hlds_out_goal__write_goal_nl_12_p_0(OutInfo_25, DebugStream_13, ModuleInfo_16, Var_43, (MR_Integer) 1, TVarSet_26, InstVarSet_27, (MR_Unsigned) 1U, (MR_String) "\n", Goal_10);
    mercury__io__flush_output_3_p_0(DebugStream_13);
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_goals_6_p_0(
  MR_Word PDInfo_7,
  MR_String IdStr_8,
  MR_String Msg_9,
  MR_Word Goals_10)
{
  MR_Word MaybeDebugStream_12;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_7, &MaybeDebugStream_12);
  if (!((MaybeDebugStream_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_13 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_12, 0))));
    MR_Word GoalExpr_14;
    MR_Word GoalInfo_15;
    MR_Word Goal_16;
    MR_Word ModuleInfo_20;
    MR_Word PredInfo_21;
    MR_Word ProcInfo_22;
    MR_Word VarTable_23;
    MR_Word Vars_24;
    MR_Word InstMap_25;
    MR_Word VarsInstMap_26;
    MR_String InstMapStr_27;
    MR_Word Globals_28;
    MR_Word OutInfo_29;
    MR_Word TVarSet_30;
    MR_Word InstVarSet_31;
    MR_Word Var_47;

    {
      GoalExpr_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, GoalExpr_14, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, GoalExpr_14, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, GoalExpr_14, 2) = ((MR_Box) (Goals_10));
    }
    hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo_15);
    {
      Goal_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Goal_16, 0) = ((MR_Box) (GoalExpr_14));
      MR_hl_field(0, Goal_16, 1) = ((MR_Box) (GoalInfo_15));
    }
    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_7, &ModuleInfo_20);
    transform_hlds__pd_info__pd_info_get_pred_info_2_p_0(PDInfo_7, &PredInfo_21);
    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(PDInfo_7, &ProcInfo_22);
    mercury__io__write_string_4_p_0(DebugStream_13, IdStr_8);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) ": ");
    mercury__io__write_string_4_p_0(DebugStream_13, Msg_9);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_22, &VarTable_23);
    hlds__goal_vars__vars_in_goal_2_p_0(Goal_16, &Vars_24);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(PDInfo_7, &InstMap_25);
    hlds__instmap__instmap_restrict_3_p_0(Vars_24, InstMap_25, &VarsInstMap_26);
    InstMapStr_27 = hlds__hlds_out__hlds_out_mode__instmap_to_string_4_f_0(VarTable_23, (MR_Integer) 1, (MR_Unsigned) 1U, VarsInstMap_26);
    mercury__io__write_string_4_p_0(DebugStream_13, InstMapStr_27);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) "\n");
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_20, &Globals_28);
    OutInfo_29 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_28, (MR_Integer) 1);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_21, &TVarSet_30);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_22, &InstVarSet_31);
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (VarTable_23));
    }
    hlds__hlds_out__hlds_out_goal__write_goal_nl_12_p_0(OutInfo_29, DebugStream_13, ModuleInfo_20, Var_47, (MR_Integer) 1, TVarSet_30, InstVarSet_31, (MR_Unsigned) 1U, (MR_String) "\n", Goal_16);
    mercury__io__flush_output_3_p_0(DebugStream_13);
  }
}

static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_5_p_0(
  MR_Word PDInfo_6,
  MR_String IdStr_7,
  MR_Word PredProcIds_8)
{
  MR_Word MaybeDebugStream_10;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_6, &MaybeDebugStream_10);
  if (!((MaybeDebugStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_11 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_10, 0))));
    MR_Word ModuleInfo_12;
    MR_Word ProcStrs_13;
    MR_String ProcsStr_14;
    MR_Word Var_17;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_6, &ModuleInfo_12);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_2[0]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_write_pred_proc_id_list_5_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (ModuleInfo_12));
    }
    ProcStrs_13 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, PredProcIds_8);
    ProcsStr_14 = mercury__string__join_list_2_f_0((MR_String) ", ", ProcStrs_13);
    mercury__io__write_string_4_p_0(DebugStream_11, IdStr_7);
    mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) ": ");
    mercury__io__write_string_4_p_0(DebugStream_11, ProcsStr_14);
    mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) "\n");
    mercury__io__flush_output_3_p_0(DebugStream_11);
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_write_instmap_4_p_0(
  MR_Word PDInfo_5,
  MR_String IdStr_6)
{
  MR_Word MaybeDebugStream_8;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_5, &MaybeDebugStream_8);
  if (!((MaybeDebugStream_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_9 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_8, 0))));
    MR_Word ProcInfo_10;
    MR_Word VarTable_11;
    MR_Word InstMap_12;
    MR_String InstMapStr_13;

    transform_hlds__pd_info__pd_info_get_proc_info_2_p_0(PDInfo_5, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &VarTable_11);
    transform_hlds__pd_info__pd_info_get_instmap_2_p_0(PDInfo_5, &InstMap_12);
    InstMapStr_13 = hlds__hlds_out__hlds_out_mode__instmap_to_string_4_f_0(VarTable_11, (MR_Integer) 1, (MR_Unsigned) 1U, InstMap_12);
    mercury__io__write_string_4_p_0(DebugStream_9, IdStr_6);
    mercury__io__write_string_4_p_0(DebugStream_9, (MR_String) ":\n");
    mercury__io__write_string_4_p_0(DebugStream_9, InstMapStr_13);
    mercury__io__flush_output_3_p_0(DebugStream_9);
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_register_version_6_p_0(
  MR_Word PDInfo_7,
  MR_String IdStr_8,
  MR_Word PredProcId_9,
  MR_Word Version_10)
{
  MR_Word MaybeDebugStream_12;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_7, &MaybeDebugStream_12);
  if (!((MaybeDebugStream_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_13 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_12, 0))));
    MR_Word ModuleInfo_14;

    transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_7, &ModuleInfo_14);
    mercury__io__write_string_4_p_0(DebugStream_13, IdStr_8);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) ": registering version:\n");
    transform_hlds__pd_debug__pd_debug_output_version_7_p_0(DebugStream_13, ModuleInfo_14, PredProcId_9, Version_10, (MR_Integer) 0);
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_search_version_result_5_p_0(
  MR_Word PDInfo_6,
  MR_String IdStr_7,
  MR_Word MaybeVersion_8)
{
  MR_Word MaybeDebugStream_10;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_6, &MaybeDebugStream_10);
  if (!((MaybeDebugStream_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_11 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_10, 0))));

    mercury__io__write_string_4_p_0(DebugStream_11, IdStr_7);
    mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) ": search version result: ");
    if ((MaybeVersion_8 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) "none found\n");
    else
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, MaybeVersion_8, 2))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(1, MaybeVersion_8, 1))));
      MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(1, MaybeVersion_8, 0))) & (MR_Integer) 1);

      switch (Var_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) "exact match\n");
          break;
        case (MR_Integer) 1:
          {
            MR_Word ModuleInfo_20;

            transform_hlds__pd_info__pd_info_get_module_info_2_p_0(PDInfo_6, &ModuleInfo_20);
            mercury__io__write_string_4_p_0(DebugStream_11, (MR_String) "more general version:\n");
            transform_hlds__pd_debug__pd_debug_output_version_7_p_0(DebugStream_11, ModuleInfo_20, Var_40, Var_39, (MR_Integer) 0);
          }
          break;
      }
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
transform_hlds__pd_debug__pd_debug_output_version_7_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10,
  MR_Word Version_11,
  MR_Word WriteUnfoldedGoal_12)
{
  MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(0, Version_11, 0))));
  MR_Word Args_16 = ((MR_Word) ((MR_hl_field(0, Version_11, 2))));
  MR_Word InstMap_18 = ((MR_Word) ((MR_hl_field(0, Version_11, 4))));
  MR_Integer InitialCost_19 = ((MR_Integer) ((MR_hl_field(0, Version_11, 5))));
  MR_Integer CostDelta_20 = ((MR_Integer) ((MR_hl_field(0, Version_11, 6))));
  MR_Word Parents_21 = ((MR_Word) ((MR_hl_field(0, Version_11, 7))));
  MR_Word GoalInfo_24 = ((MR_Word) ((MR_hl_field(0, Goal_14, 1))));
  MR_String PredName_25;
  MR_Word PredId_26 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, 0))));
  MR_Integer ProcId_27 = ((MR_Integer) ((MR_hl_field(0, PredProcId_10, 1))));
  MR_Integer PredInt_28;
  MR_Integer ProcInt_29;
  MR_Word NonLocals_30;
  MR_Word PredInfo_31;
  MR_Word ProcInfo_32;
  MR_Word VarTable_33;
  MR_Word InstMap1_34;
  MR_String ArgsStr_35;
  MR_String InstMap1Str_36;
  MR_Word Globals_37;
  MR_Word OutInfo_38;
  MR_Word VarNameSrc_39;
  MR_Word TVarSet_40;
  MR_Word InstVarSet_41;
  MR_Word ParentsList_42;
  MR_Word ParentStrs_43;
  MR_String ParentsStr_44;
  MR_Word Var_82;
  MR_String Var_102;
  MR_String Var_112;
  MR_String Var_123;
  MR_String Var_134;

  PredName_25 = hlds__hlds_module__predicate_name_2_f_0(ModuleInfo_9, PredId_26);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_26, &PredInt_28);
  hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_27, &ProcInt_29);
  mercury__io__write_string_4_p_0(Stream_8, PredName_25);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ": (PredProcId :");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), PredInt_28, &Var_102);
  mercury__io__write_string_4_p_0(Stream_8, Var_102);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), ProcInt_29, &Var_112);
  mercury__io__write_string_4_p_0(Stream_8, Var_112);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " initial cost: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), InitialCost_19, &Var_123);
  mercury__io__write_string_4_p_0(Stream_8, Var_123);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " cost delta: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&transform_hlds__pd_debug_scalar_common_1[0]), CostDelta_20, &Var_134);
  mercury__io__write_string_4_p_0(Stream_8, Var_134);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  NonLocals_30 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_24);
  hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_9, PredId_26, ProcId_27, &PredInfo_31, &ProcInfo_32);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_32, &VarTable_33);
  hlds__instmap__instmap_restrict_3_p_0(NonLocals_30, InstMap_18, &InstMap1_34);
  ArgsStr_35 = parse_tree__parse_tree_out_term__mercury_vars_to_string_3_f_0(VarTable_33, (MR_Integer) 1, Args_16);
  InstMap1Str_36 = hlds__hlds_out__hlds_out_mode__instmap_to_string_4_f_0(VarTable_33, (MR_Integer) 1, (MR_Unsigned) 1U, InstMap1_34);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " args: ");
  mercury__io__write_string_4_p_0(Stream_8, ArgsStr_35);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, InstMap1Str_36);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_37);
  OutInfo_38 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_37, (MR_Integer) 1);
  {
    VarNameSrc_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, VarNameSrc_39, 0) = ((MR_Box) (VarTable_33));
  }
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_31, &TVarSet_40);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_32, &InstVarSet_41);
  hlds__hlds_out__hlds_out_goal__write_goal_nl_12_p_0(OutInfo_38, Stream_8, ModuleInfo_9, VarNameSrc_39, (MR_Integer) 1, TVarSet_40, InstVarSet_41, (MR_Unsigned) 1U, (MR_String) "\n", Goal_14);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Parents_21, &ParentsList_42);
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&transform_hlds__pd_debug_scalar_common_2[0]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (transform_hlds__pd_debug__pd_debug_output_version_7_p_0_1));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (ModuleInfo_9));
  }
  ParentStrs_43 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_82, ParentsList_42);
  ParentsStr_44 = mercury__string__join_list_2_f_0((MR_String) ", ", ParentStrs_43);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "Parents: ");
  mercury__io__write_string_4_p_0(Stream_8, ParentsStr_44);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  switch (WriteUnfoldedGoal_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcGoal_45;

        hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_32, &ProcGoal_45);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "Unfolded goal\n");
        hlds__hlds_out__hlds_out_goal__write_goal_nl_12_p_0(OutInfo_38, Stream_8, ModuleInfo_9, VarNameSrc_39, (MR_Integer) 1, TVarSet_40, InstVarSet_41, (MR_Unsigned) 1U, (MR_String) "\n", ProcGoal_45);
      }
      break;
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_context_7_p_0(
  MR_Word PDInfo_8,
  MR_String IdStr_9,
  MR_Word Context_10,
  MR_String Fmt_11,
  MR_Word Args_12)
{
  MR_Word MaybeDebugStream_14;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_8, &MaybeDebugStream_14);
  if (!((MaybeDebugStream_14 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_15 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_14, 0))));

    parse_tree__parse_tree_out_misc__write_context_4_p_0(DebugStream_15, Context_10);
    mercury__io__write_string_4_p_0(DebugStream_15, IdStr_9);
    mercury__io__write_string_4_p_0(DebugStream_15, (MR_String) ": ");
    mercury__io__format_5_p_0(DebugStream_15, Fmt_11, Args_12);
    mercury__io__flush_output_3_p_0(DebugStream_15);
  }
}

void MR_CALL 
transform_hlds__pd_debug__pd_debug_message_6_p_0(
  MR_Word PDInfo_7,
  MR_String IdStr_8,
  MR_String Fmt_9,
  MR_Word Args_10)
{
  MR_Word MaybeDebugStream_12;

  transform_hlds__pd_info__pd_info_get_maybe_debug_stream_2_p_0(PDInfo_7, &MaybeDebugStream_12);
  if (!((MaybeDebugStream_12 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word DebugStream_13 = ((MR_Word) ((MR_hl_field(1, MaybeDebugStream_12, 0))));

    mercury__io__write_string_4_p_0(DebugStream_13, IdStr_8);
    mercury__io__write_string_4_p_0(DebugStream_13, (MR_String) ": ");
    mercury__io__format_5_p_0(DebugStream_13, Fmt_9, Args_10);
    mercury__io__flush_output_3_p_0(DebugStream_13);
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
