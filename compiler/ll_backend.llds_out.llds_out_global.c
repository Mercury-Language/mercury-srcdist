/*
** Automatically generated from `llds_out_global.m'
** by the Mercury compiler,
** version rotd-2025-06-12
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


// :- module ll_backend.llds_out.llds_out_global.
// :- implementation.

/*
INIT mercury__ll_backend__llds_out__llds_out_global__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_global.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "int.mih"
#include "int64.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "require.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "hlds.hlds_markers.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * N_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word CellValue_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word Type_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
  MR_Word Value_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_6_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_6_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word DataId_9,
  MR_Word Steps_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word ProcLabel_9,
  MR_Integer SizeLimit_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word DataId_9,
  MR_Word StepDescs_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[7][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[5][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][8];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[7][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   3 */
  { (MR_Box) (((MR_Unsigned) 0U << 1)) },
  /* row   4 */
  { (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U)) },
  /* row   5 */
  { (MR_Box) (((MR_Unsigned) 1U << 1)) },
  /* row   6 */
  { (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U)) },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_3[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_cons_arg_groups_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0) }
};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * N_3)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, 0)))) == (MR_Integer) 1)));
  MR_Word Var_4;

  if (succeeded)
  {
    Var_4 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 1))));
    succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_Integer) 1);
    if (succeeded)
      *N_3 = ((MR_Integer) ((MR_hl_field(1, Var_4, 0))));
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word CellValue_8)
{
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "{\n");
  if (((MR_tag((MR_Word) CellValue_8)) == (MR_Integer) 1))
  {
    MR_Word ArgGroups_11 = ((MR_Word) ((MR_hl_field(1, CellValue_8, 0))));

    ll_backend__llds_out__llds_out_global__output_cons_arg_groups_5_p_0(Info_6, Stream_7, ArgGroups_11);
  }
  else
  {
    MR_Word TypedArgs_10 = ((MR_Word) ((MR_hl_field(0, CellValue_8, 0))));

    ll_backend__llds_out__llds_out_global__output_cons_args_5_p_0(Info_6, Stream_7, TypedArgs_10);
  }
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "},\n");
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_N_3;

  succeeded = ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_N_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_N_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Group_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Groups_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));

      if (((MR_tag((MR_Word) Group_13)) == (MR_Integer) 0))
      {
        MR_Word Type_16 = ((MR_Word) ((MR_hl_field(0, Group_13, 0))));
        MR_Word Rvals_18 = ((MR_Word) ((MR_hl_field(0, Group_13, 2))));
        MR_Word Ints_19;
        MR_Word Var_30;

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "{\n");
        succeeded = mercury__list__map_3_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_4[4]), Rvals_18, &Ints_19);
        if (succeeded)
        {
          Var_30 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(Type_16);
          succeeded = (Var_30 == (MR_Integer) 1);
        }
        if (succeeded)
          ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_4_p_0(Stream_2, Ints_19);
        else
          ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_6_p_0(Info_1, Stream_2, Type_16, Rvals_18);
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "}");
      }
      else
      {
        MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(1, Group_13, 1))));
        MR_Word Type_44 = ((MR_Word) ((MR_hl_field(1, Group_13, 0))));
        MR_Integer Int_22;
        MR_Word Var_36;
        MR_Word Var_49;

        succeeded = ((((MR_tag((MR_Word) Rval_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_21, 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_49 = ((MR_Word) ((MR_hl_field(3, Rval_21, 1))));
          succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 1);
          if (succeeded)
          {
            Int_22 = ((MR_Integer) ((MR_hl_field(1, Var_49, 0))));
            Var_36 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(Type_44);
            succeeded = (Var_36 == (MR_Integer) 1);
          }
        }
        if (succeeded)
          mercury__io__write_int_4_p_0(Stream_2, Int_22);
        else
          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_1, Rval_21, Type_44, Stream_2);
      }
      if ((Groups_14 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      else
      {
        MR_Word next_value_of_HeadVar__3_3;

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Groups_14;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Int_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Ints_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

      mercury__io__write_int_4_p_0(Stream_1, Int_10);
      if ((Ints_11 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      else
      {
        MR_Integer Int_26;
        MR_Word Ints_27;

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
        Int_26 = ((MR_Integer) ((MR_hl_field(1, Ints_11, 0))));
        Ints_27 = ((MR_Word) ((MR_hl_field(1, Ints_11, 1))));
        mercury__io__write_int_4_p_0(Stream_1, Int_26);
        if ((Ints_27 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
        else
        {
          MR_Word next_value_of_HeadVar__2_2;

          mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Ints_27;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word Type_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Rvals_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));

      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_1, Rval_16, Type_3, Stream_2);
      if ((Rvals_17 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      else
      {
        MR_Word Rval_36;
        MR_Word Rvals_37;

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ",\n");
        Rval_36 = ((MR_Word) ((MR_hl_field(1, Rvals_17, 0))));
        Rvals_37 = ((MR_Word) ((MR_hl_field(1, Rvals_17, 1))));
        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_1, Rval_36, Type_3, Stream_2);
        if ((Rvals_37 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
        else
        {
          MR_Word next_value_of_HeadVar__4_4;

          mercury__io__write_string_4_p_0(Stream_2, (MR_String) ",\n");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__4_4 = Rvals_37;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_5_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypedRval_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TypedRvals_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(0, TypedRval_13, 0))));
      MR_Word Type_17 = ((MR_Word) ((MR_hl_field(0, TypedRval_13, 1))));
      MR_Integer N_18;
      MR_Word Var_23;
      MR_Word Var_24;

      succeeded = ((((MR_tag((MR_Word) Rval_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_16, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(3, Rval_16, 1))));
        succeeded = ((MR_tag((MR_Word) Var_23)) == (MR_Integer) 1);
        if (succeeded)
        {
          N_18 = ((MR_Integer) ((MR_hl_field(1, Var_23, 0))));
          Var_24 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(Type_17);
          succeeded = (Var_24 == (MR_Integer) 1);
        }
      }
      if (succeeded)
        mercury__io__write_int_4_p_0(Stream_2, N_18);
      else
        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_1, Rval_16, Type_17, Stream_2);
      if ((TypedRvals_14 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_2, (MR_String) "\n");
      else
      {
        MR_Word next_value_of_HeadVar__3_3;

        mercury__io__write_string_4_p_0(Stream_2, (MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = TypedRvals_14;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
  else
  {
    MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

    {
      HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Rval_7));
      MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return HeadVar__2_2;
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
  MR_Word Value_3)
{
  MR_Word Rvals_4;

  if (((MR_tag((MR_Word) Value_3)) == (MR_Integer) 1))
  {
    MR_Word Groups_6 = ((MR_Word) ((MR_hl_field(1, Value_3, 0))));
    MR_Word RvalLists_7;

    RvalLists_7 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_1[0]), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_4[3]), Groups_6);
    mercury__list__condense_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RvalLists_7, &Rvals_4);
  }
  else
  {
    MR_Word TypedRvals_5 = ((MR_Word) ((MR_hl_field(0, Value_3, 0))));

    Rvals_4 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(TypedRvals_5);
  }
  return Rvals_4;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word Kind_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);

  succeeded = (Kind_3 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_global__output_common_cell_value_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Rvals_4;

  conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Rvals_4));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word VectorCommonDataArray_10,
  MR_Word STATE_VARIABLE_DeclSet_0_19,
  MR_Word * STATE_VARIABLE_DeclSet_20)
{
  MR_Word TypeNum_14 = ((MR_Word) ((MR_hl_field(0, VectorCommonDataArray_10, 1))));
  MR_Integer CellNum_15 = ((MR_Integer) ((MR_hl_field(0, VectorCommonDataArray_10, 2))));
  MR_Word Values_16 = ((MR_Word) ((MR_hl_field(0, VectorCommonDataArray_10, 3))));
  MR_Word ArgLists_17;
  MR_Word Args_18;
  MR_Integer Var_36;
  MR_Word Var_40;
  MR_Integer TypeNum_52;
  MR_String Var_53;
  MR_Box conv1_STATE_VARIABLE_IO_10_41;

  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  ArgLists_17 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_1[0]), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_4[2]), Values_16);
  mercury__list__condense_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ArgLists_17, &Args_18);
  ll_backend__llds_out__llds_out_data__output_record_rvals_decls_7_p_0(Info_8, Stream_9, Args_18, STATE_VARIABLE_DeclSet_0_19, STATE_VARIABLE_DeclSet_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static const struct ");
  TypeNum_52 = (MR_Integer) (TypeNum_14);
  Var_53 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_9, Var_53);
  mercury__io__write_int_4_p_0(Stream_9, TypeNum_52);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_5_p_0(Stream_9, TypeNum_14, CellNum_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
  Var_36 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), Values_16);
  mercury__io__write_int_4_p_0(Stream_9, Var_36);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] =\n{\n");
  {
    Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_40, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
    MR_hl_field(0, Var_40, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_7_p_0_2));
    MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_40, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_40, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_40, Values_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10_41);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ll_backend__llds_out__llds_out_global__output_common_cell_value_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Rvals_4;

  conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Rvals_4));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word ScalarCommonDataArray_10,
  MR_Word STATE_VARIABLE_DeclSet_0_18,
  MR_Word * STATE_VARIABLE_DeclSet_19)
{
  MR_Word TypeNum_14 = ((MR_Word) ((MR_hl_field(0, ScalarCommonDataArray_10, 1))));
  MR_Word Values_15 = ((MR_Word) ((MR_hl_field(0, ScalarCommonDataArray_10, 2))));
  MR_Word ArgLists_16;
  MR_Word Args_17;
  MR_Integer Var_35;
  MR_Word Var_39;
  MR_Integer TypeNum_51;
  MR_String Var_52;
  MR_Box conv1_STATE_VARIABLE_IO_10_40;

  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  ArgLists_16 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_1[0]), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_4[1]), Values_15);
  mercury__list__condense_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ArgLists_16, &Args_17);
  ll_backend__llds_out__llds_out_data__output_record_rvals_decls_7_p_0(Info_8, Stream_9, Args_17, STATE_VARIABLE_DeclSet_0_18, STATE_VARIABLE_DeclSet_19);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static const struct ");
  TypeNum_51 = (MR_Integer) (TypeNum_14);
  Var_52 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_9, Var_52);
  mercury__io__write_int_4_p_0(Stream_9, TypeNum_51);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_4_p_0(Stream_9, TypeNum_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
  Var_35 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), Values_15);
  mercury__io__write_int_4_p_0(Stream_9, Var_35);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] =\n{\n");
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_7_p_0_2));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (Stream_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, Values_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_10_40);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_6_p_0(
  MR_Word Stream_7,
  MR_Word VectorCommonDataArray_8,
  MR_Word STATE_VARIABLE_DeclSet_0_15,
  MR_Word * STATE_VARIABLE_DeclSet_16)
{
  MR_bool succeeded;
  MR_Word CellType_11 = ((MR_Word) ((MR_hl_field(0, VectorCommonDataArray_8, 0))));
  MR_Word TypeNum_12 = ((MR_Word) ((MR_hl_field(0, VectorCommonDataArray_8, 1))));
  MR_Integer CellNum_13 = ((MR_Integer) ((MR_hl_field(0, VectorCommonDataArray_8, 2))));
  MR_Word TypeDeclId_30;
  MR_Integer TypeNum_50;
  MR_String Var_51;
  MR_Word STATE_VARIABLE_DeclSet_1_33;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  {
    TypeDeclId_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, TypeDeclId_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, TypeDeclId_30, 1) = ((MR_Box) (TypeNum_12));
  }
  succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(TypeDeclId_30, STATE_VARIABLE_DeclSet_0_15, &STATE_VARIABLE_DeclSet_1_33);
  if (succeeded)
  {
    MR_Integer TypeNum_47;
    MR_String Var_48;

    *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_1_33;
    backend_libs__c_util__output_pragma_pack_push_3_p_0(Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "struct ");
    TypeNum_47 = (MR_Integer) (TypeNum_12);
    Var_48 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    mercury__io__write_string_4_p_0(Stream_7, Var_48);
    mercury__io__write_int_4_p_0(Stream_7, TypeNum_47);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " {\n");
    if (((MR_tag((MR_Word) CellType_11)) == (MR_Integer) 1))
    {
      MR_Word ArgGroups_32 = ((MR_Word) ((MR_hl_field(1, CellType_11, 0))));

      ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_6_p_0(Stream_7, (MR_String) "\t", ArgGroups_32, (MR_Integer) 1);
    }
    else
    {
      MR_Word Types_31 = ((MR_Word) ((MR_hl_field(0, CellType_11, 0))));

      ll_backend__llds_out__llds_out_global__output_cons_arg_types_6_p_0(Stream_7, (MR_String) "\t", Types_31, (MR_Integer) 1);
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n");
    backend_libs__c_util__output_pragma_pack_pop_3_p_0(Stream_7);
  }
  else
    *STATE_VARIABLE_DeclSet_16 = STATE_VARIABLE_DeclSet_0_15;
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_STATIC_LINKAGE const struct ");
  TypeNum_50 = (MR_Integer) (TypeNum_12);
  Var_51 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_7, Var_51);
  mercury__io__write_int_4_p_0(Stream_7, TypeNum_50);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_5_p_0(Stream_7, TypeNum_12, CellNum_13);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[];\n");
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_6_p_0(
  MR_Word Stream_7,
  MR_Word ScalarCommonDataArray_8,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_bool succeeded;
  MR_Word CellType_11 = ((MR_Word) ((MR_hl_field(0, ScalarCommonDataArray_8, 0))));
  MR_Word TypeNum_12 = ((MR_Word) ((MR_hl_field(0, ScalarCommonDataArray_8, 1))));
  MR_Word TypeDeclId_29;
  MR_Integer TypeNum_49;
  MR_String Var_50;
  MR_Word STATE_VARIABLE_DeclSet_1_32;

  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
  {
    TypeDeclId_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, TypeDeclId_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, TypeDeclId_29, 1) = ((MR_Box) (TypeNum_12));
  }
  succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(TypeDeclId_29, STATE_VARIABLE_DeclSet_0_14, &STATE_VARIABLE_DeclSet_1_32);
  if (succeeded)
  {
    MR_Integer TypeNum_46;
    MR_String Var_47;

    *STATE_VARIABLE_DeclSet_15 = STATE_VARIABLE_DeclSet_1_32;
    backend_libs__c_util__output_pragma_pack_push_3_p_0(Stream_7);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "struct ");
    TypeNum_46 = (MR_Integer) (TypeNum_12);
    Var_47 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    mercury__io__write_string_4_p_0(Stream_7, Var_47);
    mercury__io__write_int_4_p_0(Stream_7, TypeNum_46);
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) " {\n");
    if (((MR_tag((MR_Word) CellType_11)) == (MR_Integer) 1))
    {
      MR_Word ArgGroups_31 = ((MR_Word) ((MR_hl_field(1, CellType_11, 0))));

      ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_6_p_0(Stream_7, (MR_String) "\t", ArgGroups_31, (MR_Integer) 1);
    }
    else
    {
      MR_Word Types_30 = ((MR_Word) ((MR_hl_field(0, CellType_11, 0))));

      ll_backend__llds_out__llds_out_global__output_cons_arg_types_6_p_0(Stream_7, (MR_String) "\t", Types_30, (MR_Integer) 1);
    }
    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "};\n");
    backend_libs__c_util__output_pragma_pack_pop_3_p_0(Stream_7);
  }
  else
    *STATE_VARIABLE_DeclSet_15 = STATE_VARIABLE_DeclSet_0_14;
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_STATIC_LINKAGE const struct ");
  TypeNum_49 = (MR_Integer) (TypeNum_12);
  Var_50 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_7, Var_50);
  mercury__io__write_int_4_p_0(Stream_7, TypeNum_49);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " ");
  ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_4_p_0(Stream_7, TypeNum_12);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[];\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_6_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Group_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Groups_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Type_19 = ((MR_Word) ((MR_hl_field(0, Group_15, 0))));
      MR_Integer ArraySize_20 = ((MR_Integer) ((MR_hl_field(0, Group_15, 1))));
      MR_String TypeStr_21;
      MR_Integer Var_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_ArgNum_4;

      TypeStr_21 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(Type_19);
      succeeded = (ArraySize_20 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_String Var_52;

        mercury__io__write_string_4_p_0(Stream_1, IndentStr_2);
        mercury__io__write_string_4_p_0(Stream_1, TypeStr_21);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " f");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), ArgNum_4, &Var_52);
        mercury__io__write_string_4_p_0(Stream_1, Var_52);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) ";\n");
      }
      else
      {
        MR_String Var_65;
        MR_String Var_75;

        mercury__io__write_string_4_p_0(Stream_1, IndentStr_2);
        mercury__io__write_string_4_p_0(Stream_1, TypeStr_21);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " f");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), ArgNum_4, &Var_65);
        mercury__io__write_string_4_p_0(Stream_1, Var_65);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "[");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), ArraySize_20, &Var_75);
        mercury__io__write_string_4_p_0(Stream_1, Var_75);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "];\n");
      }
      Var_44 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Groups_16;
      next_value_of_ArgNum_4 = Var_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      ArgNum_4 = next_value_of_ArgNum_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_6_p_0(
  MR_Word Stream_1,
  MR_String IndentStr_2,
  MR_Word HeadVar__3_3,
  MR_Integer ArgNum_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Type_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Types_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_String TypeStr_19;
      MR_Integer Var_31;
      MR_String Var_39;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_ArgNum_4;

      succeeded = (Type_15 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
        TypeStr_19 = (MR_String) "MR_Float_Aligned";
      else
        TypeStr_19 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(Type_15);
      mercury__io__write_string_4_p_0(Stream_1, IndentStr_2);
      mercury__io__write_string_4_p_0(Stream_1, TypeStr_19);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " f");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), ArgNum_4, &Var_39);
      mercury__io__write_string_4_p_0(Stream_1, Var_39);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ";\n");
      Var_31 = (MR_Integer) ((MR_Unsigned) ArgNum_4 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Types_16;
      next_value_of_ArgNum_4 = Var_31;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      ArgNum_4 = next_value_of_ArgNum_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_tabling_info_struct_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word TablingInfoStruct_10,
  MR_Word STATE_VARIABLE_DeclSet_0_41,
  MR_Word * STATE_VARIABLE_DeclSet_42)
{
  MR_Word ProcLabel_13 = ((MR_Word) ((MR_hl_field(0, TablingInfoStruct_10, 0))));
  MR_Word TabledMethod_14 = ((MR_Word) ((MR_hl_field(0, TablingInfoStruct_10, 1))));
  MR_Integer NumInputs_15 = ((MR_Integer) ((MR_hl_field(0, TablingInfoStruct_10, 2))));
  MR_Integer NumOutputs_16 = ((MR_Integer) ((MR_hl_field(0, TablingInfoStruct_10, 3))));
  MR_Word InputSteps_17 = ((MR_Word) ((MR_hl_field(0, TablingInfoStruct_10, 4))));
  MR_Word MaybeOutputSteps_18 = ((MR_Word) ((MR_hl_field(0, TablingInfoStruct_10, 5))));
  MR_Word PTIVectorRval_19 = ((MR_Word) ((MR_hl_field(0, TablingInfoStruct_10, 6))));
  MR_Word TypeParamsRval_20 = ((MR_Word) ((MR_hl_field(0, TablingInfoStruct_10, 7))));
  MR_Word MaybeSizeLimit_21 = ((MR_Word) ((MR_hl_field(0, TablingInfoStruct_10, 8))));
  MR_Word Stats_22 = ((MR_Unsigned) ((MR_hl_field(0, TablingInfoStruct_10, 9))) & (MR_Integer) 1);
  MR_Word InfoDataId_23;
  MR_Word InputStepsDataId_24;
  MR_Word OutputStepsDataId_25;
  MR_Word TipsDataId_26;
  MR_Word CallStatsDataId_27;
  MR_Word PrevCallStatsDataId_28;
  MR_Word AnswerStatsDataId_29;
  MR_Word PrevAnswerStatsDataId_30;
  MR_String TabledMethodStr_34;
  MR_Word DeclId_40;
  MR_Word STATE_VARIABLE_DeclSet_1_64;
  MR_Word STATE_VARIABLE_DeclSet_2_67;
  MR_String Var_217;
  MR_String Var_227;

  {
    InfoDataId_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InfoDataId_23, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, InfoDataId_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    InputStepsDataId_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, InputStepsDataId_24, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, InputStepsDataId_24, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__llds_out__llds_out_global_scalar_common_2[1])));
  }
  {
    OutputStepsDataId_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, OutputStepsDataId_25, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, OutputStepsDataId_25, 1) = ((MR_Box) (MR_mkword(1, &ll_backend__llds_out__llds_out_global_scalar_common_2[2])));
  }
  {
    TipsDataId_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, TipsDataId_26, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, TipsDataId_26, 1) = ((MR_Box) ((MR_Unsigned) 16U));
  }
  {
    CallStatsDataId_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CallStatsDataId_27, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, CallStatsDataId_27, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__llds_out__llds_out_global_scalar_common_2[3])));
  }
  {
    PrevCallStatsDataId_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrevCallStatsDataId_28, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, PrevCallStatsDataId_28, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__llds_out__llds_out_global_scalar_common_2[4])));
  }
  {
    AnswerStatsDataId_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, AnswerStatsDataId_29, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, AnswerStatsDataId_29, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__llds_out__llds_out_global_scalar_common_2[5])));
  }
  {
    PrevAnswerStatsDataId_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PrevAnswerStatsDataId_30, 0) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(1, PrevAnswerStatsDataId_30, 1) = ((MR_Box) (MR_mkword(3, &ll_backend__llds_out__llds_out_global_scalar_common_2[6])));
  }
  ll_backend__llds_out__llds_out_global__output_table_steps_table_6_p_0(Info_8, Stream_9, InputStepsDataId_24, InputSteps_17);
  ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, PTIVectorRval_19, STATE_VARIABLE_DeclSet_0_41, &STATE_VARIABLE_DeclSet_1_64);
  if ((MaybeOutputSteps_18 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_DeclSet_2_67 = STATE_VARIABLE_DeclSet_1_64;
  else
  {
    MR_Word OutputStepsA_31 = ((MR_Word) ((MR_hl_field(1, MaybeOutputSteps_18, 0))));

    ll_backend__llds_out__llds_out_global__output_table_steps_table_6_p_0(Info_8, Stream_9, OutputStepsDataId_25, OutputStepsA_31);
    ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(Info_8, Stream_9, PTIVectorRval_19, STATE_VARIABLE_DeclSet_1_64, &STATE_VARIABLE_DeclSet_2_67);
  }
  if (!((MaybeSizeLimit_21 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Integer SizeLimit1_32 = ((MR_Integer) ((MR_hl_field(1, MaybeSizeLimit_21, 0))));

    ll_backend__llds_out__llds_out_global__output_table_tips_6_p_0(Info_8, Stream_9, ProcLabel_13, SizeLimit1_32);
  }
  switch (Stats_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        ll_backend__llds_out__llds_out_global__output_table_step_stats_6_p_0(Info_8, Stream_9, CallStatsDataId_27, InputSteps_17);
        ll_backend__llds_out__llds_out_global__output_table_step_stats_6_p_0(Info_8, Stream_9, PrevCallStatsDataId_28, InputSteps_17);
        if (!((MaybeOutputSteps_18 == (MR_Word) ((MR_Unsigned) 0U))))
        {
          MR_Word OutputStepsB_33 = ((MR_Word) ((MR_hl_field(1, MaybeOutputSteps_18, 0))));

          ll_backend__llds_out__llds_out_global__output_table_step_stats_6_p_0(Info_8, Stream_9, AnswerStatsDataId_29, OutputStepsB_33);
          ll_backend__llds_out__llds_out_global__output_table_step_stats_6_p_0(Info_8, Stream_9, PrevAnswerStatsDataId_30, OutputStepsB_33);
        }
      }
      break;
  }
  TabledMethodStr_34 = parse_tree__prog_data_pragma__tabled_eval_method_to_table_type_1_f_0(TabledMethod_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\nstatic MR_ProcTableInfo ");
  ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, InfoDataId_23);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "= {\n");
  mercury__io__write_string_4_p_0(Stream_9, TabledMethodStr_34);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), NumInputs_15, &Var_217);
  mercury__io__write_string_4_p_0(Stream_9, Var_217);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), NumOutputs_16, &Var_227);
  mercury__io__write_string_4_p_0(Stream_9, Var_227);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
  if ((MaybeOutputSteps_18 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_237;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), (MR_Integer) 0, &Var_237);
    mercury__io__write_string_4_p_0(Stream_9, Var_237);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const MR_PseudoTypeInfo *) ");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, PTIVectorRval_19, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n(const MR_TypeParamLocns *) ");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, TypeParamsRval_20, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n{ 0 },\n{\n");
    ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, InputStepsDataId_24);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
  }
  else
  {
    MR_String Var_632;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), (MR_Integer) 1, &Var_632);
    mercury__io__write_string_4_p_0(Stream_9, Var_632);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "(const MR_PseudoTypeInfo *) ");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, PTIVectorRval_19, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n(const MR_TypeParamLocns *) ");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, TypeParamsRval_20, Stream_9);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n{ 0 },\n{\n");
    ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, InputStepsDataId_24);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, OutputStepsDataId_25);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},\n");
  switch (Stats_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{{{\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},{\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}},{{\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},{\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}}},\n");
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{{{\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, CallStatsDataId_27);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},{\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
        ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, PrevCallStatsDataId_28);
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}},{{\n");
        if ((MaybeOutputSteps_18 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},{\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL\n");
        }
        else
        {
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, AnswerStatsDataId_29);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "},{\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
          ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_8, Stream_9, PrevAnswerStatsDataId_30);
          mercury__io__write_string_4_p_0(Stream_9, (MR_String) "\n");
        }
        mercury__io__write_string_4_p_0(Stream_9, (MR_String) "}}},\n");
      }
      break;
  }
  if ((MaybeSizeLimit_21 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "-1,\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "NULL,\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0\n");
  }
  else
  {
    MR_Integer SizeLimit2_39 = ((MR_Integer) ((MR_hl_field(1, MaybeSizeLimit_21, 0))));

    mercury__io__write_int_4_p_0(Stream_9, SizeLimit2_39);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) ",\n");
    ll_backend__llds_out__llds_out_data__output_data_id_addr_5_p_0(Info_8, Stream_9, TipsDataId_26);
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0,\n");
    mercury__io__write_string_4_p_0(Stream_9, (MR_String) "0\n");
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
  {
    DeclId_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, DeclId_40, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, DeclId_40, 1) = ((MR_Box) (ProcLabel_13));
    MR_hl_field(3, DeclId_40, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_40, STATE_VARIABLE_DeclSet_2_67, STATE_VARIABLE_DeclSet_42);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word DataId_9,
  MR_Word Steps_10)
{
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static MR_TableStepStats ");
  ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_7, Stream_8, DataId_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[] = \n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{\n");
  ll_backend__llds_out__llds_out_global__output_table_step_stats_2_4_p_0(Stream_8, Steps_10);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word StepDesc_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word StepDescs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Step_14 = ((MR_Word) ((MR_hl_field(0, StepDesc_10, 1))));
      MR_String KindStr_15;
      MR_Word next_value_of_HeadVar__2_2;

      KindStr_15 = hlds__hlds_pred__table_step_stats_kind_1_f_0(Step_14);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "{ 0, 0, ");
      mercury__io__write_string_4_p_0(Stream_1, KindStr_15);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ",\n");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "0, 0, 0, 0, 0, 0, 0, 0, 0, ");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "0, 0, ");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "0, 0, 0, 0, ");
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "0, 0 },\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = StepDescs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word ProcLabel_9,
  MR_Integer SizeLimit_10)
{
  MR_Word DataId_12;

  {
    DataId_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DataId_12, 0) = ((MR_Box) (ProcLabel_9));
    MR_hl_field(1, DataId_12, 1) = ((MR_Box) ((MR_Unsigned) 16U));
  }
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static MR_TrieNode ");
  ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_7, Stream_8, DataId_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[");
  mercury__io__write_int_4_p_0(Stream_8, SizeLimit_10);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "];\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word DataId_9,
  MR_Word StepDescs_10)
{
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static const MR_TableStepDesc ");
  ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_7, Stream_8, DataId_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "[] = {\n");
  if ((StepDescs_10 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "{0}");
  else
    ll_backend__llds_out__llds_out_global__output_table_steps_4_p_0(Stream_8, StepDescs_10);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "};\n");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word StepDesc_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word StepDescs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String VarName_13 = ((MR_String) ((MR_hl_field(0, StepDesc_10, 0))));
      MR_Word Step_14 = ((MR_Word) ((MR_hl_field(0, StepDesc_10, 1))));
      MR_String StepType_15;
      MR_Word MaybeEnumRange_16;
      MR_Integer EnumRange_17;
      MR_String Var_36;
      MR_Word next_value_of_HeadVar__2_2;

      backend_libs__rtti__table_trie_step_to_c_3_p_0(Step_14, &StepType_15, &MaybeEnumRange_16);
      if ((MaybeEnumRange_16 == (MR_Word) ((MR_Unsigned) 0U)))
        EnumRange_17 = (MR_Integer) -1;
      else
        EnumRange_17 = ((MR_Integer) ((MR_hl_field(1, MaybeEnumRange_16, 0))));
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "{ ");
      backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_1, VarName_13);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_1, StepType_15);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), EnumRange_17, &Var_36);
      mercury__io__write_string_4_p_0(Stream_1, Var_36);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) " },\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = StepDescs_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Info_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Infos_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer ProcNum_13 = ((MR_Integer) ((MR_hl_field(0, Info_10, 0))));
      MR_String FullProcName_14 = ((MR_String) ((MR_hl_field(0, Info_10, 1))));
      MR_Word ArgInfos_15 = ((MR_Word) ((MR_hl_field(0, Info_10, 2))));
      MR_String ArrayName_16;
      MR_Word ProfiledArgInfos_17;
      MR_Integer Var_31;
      MR_Integer Var_34;
      MR_String Var_43;
      MR_String Var_54;
      MR_String Var_64;
      MR_String Var_76;
      MR_Word next_value_of_HeadVar__2_2;

      Var_76 = mercury__string__int_to_string_1_f_0(ProcNum_13);
      ArrayName_16 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", Var_76);
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_4[0]), ArgInfos_15, &ProfiledArgInfos_17);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\tMR_init_complexity_proc(");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), ProcNum_13, &Var_43);
      mercury__io__write_string_4_p_0(Stream_1, Var_43);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_1, FullProcName_14);
      Var_31 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), ProfiledArgInfos_17);
      Var_34 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), ArgInfos_15);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), Var_31, &Var_54);
      mercury__io__write_string_4_p_0(Stream_1, Var_54);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), Var_34, &Var_64);
      mercury__io__write_string_4_p_0(Stream_1, Var_64);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_1, ArrayName_16);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) ");\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Infos_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Info_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Infos_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer ProcNum_13 = ((MR_Integer) ((MR_hl_field(0, Info_10, 0))));
      MR_Word Args_15 = ((MR_Word) ((MR_hl_field(0, Info_10, 2))));
      MR_String ArrayName_16;
      MR_Integer Var_25;
      MR_String Var_37;
      MR_String Var_46;
      MR_Word next_value_of_HeadVar__2_2;

      Var_46 = mercury__string__int_to_string_1_f_0(ProcNum_13);
      ArrayName_16 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", Var_46);
      Var_25 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), Args_15);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\nMR_ComplexityArgInfo ");
      mercury__io__write_string_4_p_0(Stream_1, ArrayName_16);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "[");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0]), Var_25, &Var_37);
      mercury__io__write_string_4_p_0(Stream_1, Var_37);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "] = {\n");
      ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_4_p_0(Stream_1, Args_15);
      mercury__io__write_string_4_p_0(Stream_1, (MR_String) "};\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Infos_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word MaybeName_13 = ((MR_Word) ((MR_hl_field(0, Arg_10, 0))));
      MR_Word Kind_14 = ((MR_Unsigned) ((MR_hl_field(0, Arg_10, 1))) & (MR_Integer) 3);
      MR_String KindStr_15;
      MR_Word next_value_of_HeadVar__2_2;

      switch (Kind_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          KindStr_15 = (MR_String) "MR_COMPLEXITY_INPUT_FIX_SIZE";
          break;
        case (MR_Integer) 0:
          KindStr_15 = (MR_String) "MR_COMPLEXITY_INPUT_VAR_SIZE";
          break;
        case (MR_Integer) 2:
          KindStr_15 = (MR_String) "MR_COMPLEXITY_OUTPUT";
          break;
      }
      if ((MaybeName_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "{ NULL, ");
        mercury__io__write_string_4_p_0(Stream_1, KindStr_15);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " },\n");
      }
      else
      {
        MR_String Name_16 = ((MR_String) ((MR_hl_field(1, MaybeName_13, 0))));

        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "{ \"");
        mercury__io__write_string_4_p_0(Stream_1, Name_16);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\", ");
        mercury__io__write_string_4_p_0(Stream_1, KindStr_15);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) " },\n");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Args_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void mercury__ll_backend__llds_out__llds_out_global__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_global__init_type_tables(void)
{
}

void mercury__ll_backend__llds_out__llds_out_global__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__llds_out__llds_out_global__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ll_backend.llds_out.llds_out_global.
