/*
** Automatically generated from `llds_out_global.m'
** by the Mercury compiler,
** version rotd-2020-03-20
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
#include "getopt_io.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * N_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
  MR_Word Info_5,
  MR_Word CellValue_6);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
  MR_Word Info_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2);

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
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String Indent_2,
  MR_Integer ArgNum_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String Indent_2,
  MR_Integer ArgNum_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
  MR_Word Info_6,
  MR_Word DataId_7,
  MR_Word Steps_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
  MR_Word Info_6,
  MR_Word ProcLabel_7,
  MR_Integer SizeLimit_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
  MR_Word Info_6,
  MR_Word DataId_7,
  MR_Word StepDescs_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
  MR_Word HeadVar__1_1);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[5][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[6][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][7];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[6][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row 3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row 4 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row 5 */
  {
    (MR_Box) (((((MR_Unsigned) 1U << 1)) | (MR_Unsigned) 1U))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
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



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)
  }
};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * N_3)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word Var_4;

    if (succeeded)
    {
      Var_4 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_4)) == (MR_Integer) 1);
      if (succeeded)
        *N_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_4, (MR_Integer) 0))));
    }
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
  MR_Word Info_5,
  MR_Word CellValue_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    if (((MR_tag((MR_Word) CellValue_6)) == (MR_Integer) 1))
    {
      MR_Word ArgGroups_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CellValue_6, (MR_Integer) 0))));

      ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(Info_5, ArgGroups_9);
    }
    else
    {
      MR_Word TypedArgs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellValue_6, (MR_Integer) 0))));

      ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(Info_5, TypedArgs_8);
    }
    mercury__io__write_string_3_p_0((MR_String) "},\n");
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
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
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Group_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Groups_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      if (((MR_tag((MR_Word) Group_10)) == (MR_Integer) 0))
      {
        MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Group_10, (MR_Integer) 0))));
        MR_Word Rvals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Group_10, (MR_Integer) 2))));
        MR_Word Ints_16;
        MR_Word Var_30;

        mercury__io__write_string_3_p_0((MR_String) "{\n");
        succeeded = mercury__list__map_3_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_3[4]), Rvals_15, &Ints_16);
        if (succeeded)
        {
          Var_30 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(Type_13);
          succeeded = (Var_30 == (MR_Integer) 1);
        }
        if (succeeded)
          ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(Ints_16);
        else
          ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(Info_1, Type_13, Rvals_15);
        mercury__io__write_string_3_p_0((MR_String) "}");
      }
      else
      {
        MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Group_10, (MR_Integer) 1))));
        MR_Word Type_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Group_10, (MR_Integer) 0))));
        MR_Integer Int_19;
        MR_Word Var_24;
        MR_Word Var_47;

        succeeded = ((((MR_tag((MR_Word) Rval_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_18, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1);
          if (succeeded)
          {
            Int_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
            Var_24 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(Type_41);
            succeeded = (Var_24 == (MR_Integer) 1);
          }
        }
        if (succeeded)
          mercury__io__write_int_3_p_0(Int_19);
        else
          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_1, Rval_18, Type_41);
      }
      if ((Groups_11 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "\n");
      else
      {
        MR_Word next_value_of_HeadVar__2_2;

        mercury__io__write_string_3_p_0((MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Groups_11;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer Int_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ints_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      mercury__io__write_int_3_p_0(Int_7);
      if ((Ints_8 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "\n");
      else
      {
        MR_Integer Int_23;
        MR_Word Ints_24;

        mercury__io__write_string_3_p_0((MR_String) ",\n");
        Int_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Ints_8, (MR_Integer) 0))));
        Ints_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ints_8, (MR_Integer) 1))));
        mercury__io__write_int_3_p_0(Int_23);
        if ((Ints_24 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_3_p_0((MR_String) "\n");
        else
        {
          MR_Word next_value_of_HeadVar__1_1;

          mercury__io__write_string_3_p_0((MR_String) ",\n");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Ints_24;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
  MR_Word Info_1,
  MR_Word Type_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Rvals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));

      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_1, Rval_13, Type_2);
      if ((Rvals_14 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "\n");
      else
      {
        MR_Word Rval_33;
        MR_Word Rvals_34;

        mercury__io__write_string_3_p_0((MR_String) ",\n");
        Rval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_14, (MR_Integer) 0))));
        Rvals_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Rvals_14, (MR_Integer) 1))));
        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_1, Rval_33, Type_2);
        if ((Rvals_34 == (MR_Word) ((MR_Unsigned) 0U)))
          mercury__io__write_string_3_p_0((MR_String) "\n");
        else
        {
          MR_Word next_value_of_HeadVar__3_3;

          mercury__io__write_string_3_p_0((MR_String) ",\n");
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = Rvals_34;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word TypedRval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word TypedRvals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_10, (MR_Integer) 0))));
      MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval_10, (MR_Integer) 1))));
      MR_Integer N_15;
      MR_Word Var_20;
      MR_Word Var_21;

      succeeded = ((((MR_tag((MR_Word) Rval_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_13, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0))));
          Var_21 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(Type_14);
          succeeded = (Var_21 == (MR_Integer) 1);
        }
      }
      if (succeeded)
        mercury__io__write_int_3_p_0(N_15);
      else
        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_1, Rval_13, Type_14);
      if ((TypedRvals_11 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "\n");
      else
      {
        MR_Word next_value_of_HeadVar__2_2;

        mercury__io__write_string_3_p_0((MR_String) ",\n");
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = TypedRvals_11;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
  {
    MR_Word HeadVar__2_2;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    else
    {
      MR_Word Rval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Rval_7));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
  MR_Word Value_3)
{
  {
    MR_Word Rvals_4;

    if (((MR_tag((MR_Word) Value_3)) == (MR_Integer) 1))
    {
      MR_Word Groups_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Value_3, (MR_Integer) 0))));
      MR_Word RvalLists_7;

      RvalLists_7 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_1[0]), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_3[3]), Groups_6);
      mercury__list__condense_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), RvalLists_7, &Rvals_4);
    }
    else
    {
      MR_Word TypedRvals_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Value_3, (MR_Integer) 0))));

      Rvals_4 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(TypedRvals_5);
    }
    return Rvals_4;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word Kind_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);

    succeeded = (Kind_3 == (MR_Integer) 0);
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Rvals_4;

    conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Rvals_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0(
  MR_Word Info_7,
  MR_Word VectorCommonDataArray_8,
  MR_Word STATE_VARIABLE_DeclSet_0_17,
  MR_Word * STATE_VARIABLE_DeclSet_18)
{
  {
    MR_Word TypeNum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommonDataArray_8, (MR_Integer) 1))));
    MR_Integer CellNum_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommonDataArray_8, (MR_Integer) 2))));
    MR_Word Values_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommonDataArray_8, (MR_Integer) 3))));
    MR_Word ArgLists_15;
    MR_Word Args_16;
    MR_Integer Var_34;
    MR_Word Var_38;
    MR_Integer TypeNum_53;
    MR_String Var_55;
    MR_Box conv1_STATE_VARIABLE_IO_39_39;

    mercury__io__write_string_3_p_0((MR_String) "\n");
    ArgLists_15 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_1[0]), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_3[2]), Values_14);
    mercury__list__condense_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ArgLists_15, &Args_16);
    ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(Info_7, Args_16, STATE_VARIABLE_DeclSet_0_17, STATE_VARIABLE_DeclSet_18);
    mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    TypeNum_53 = (MR_Integer) (TypeNum_12);
    Var_55 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_55);
    mercury__io__write_int_3_p_0(TypeNum_53);
    mercury__io__write_string_3_p_0((MR_String) " ");
    ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(TypeNum_12, CellNum_13);
    mercury__io__write_string_3_p_0((MR_String) "[");
    Var_34 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), Values_14);
    mercury__io__write_int_3_p_0(Var_34);
    mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Info_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, Values_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_39_39);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Rvals_4;

    conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Rvals_4));
    return wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0(
  MR_Word Info_7,
  MR_Word ScalarCommonDataArray_8,
  MR_Word STATE_VARIABLE_DeclSet_0_16,
  MR_Word * STATE_VARIABLE_DeclSet_17)
{
  {
    MR_Word TypeNum_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommonDataArray_8, (MR_Integer) 1))));
    MR_Word Values_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommonDataArray_8, (MR_Integer) 2))));
    MR_Word ArgLists_14;
    MR_Word Args_15;
    MR_Integer Var_33;
    MR_Word Var_37;
    MR_Integer TypeNum_52;
    MR_String Var_54;
    MR_Box conv1_STATE_VARIABLE_IO_38_38;

    mercury__io__write_string_3_p_0((MR_String) "\n");
    ArgLists_14 = mercury__list__map_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_1[0]), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_3[1]), Values_13);
    mercury__list__condense_2_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0), ArgLists_14, &Args_15);
    ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(Info_7, Args_15, STATE_VARIABLE_DeclSet_0_16, STATE_VARIABLE_DeclSet_17);
    mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    TypeNum_52 = (MR_Integer) (TypeNum_12);
    Var_54 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_54);
    mercury__io__write_int_3_p_0(TypeNum_52);
    mercury__io__write_string_3_p_0((MR_String) " ");
    ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(TypeNum_12);
    mercury__io__write_string_3_p_0((MR_String) "[");
    Var_33 = mercury__list__length_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), Values_13);
    mercury__io__write_int_3_p_0(Var_33);
    mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    {
      Var_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (Info_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, Values_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_38_38);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_p_0(
  MR_Word VectorCommonDataArray_6,
  MR_Word STATE_VARIABLE_DeclSet_0_13,
  MR_Word * STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool succeeded;
    MR_Word CellType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommonDataArray_6, (MR_Integer) 0))));
    MR_Word TypeNum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), VectorCommonDataArray_6, (MR_Integer) 1))));
    MR_Integer CellNum_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VectorCommonDataArray_6, (MR_Integer) 2))));
    MR_Word TypeDeclId_37;
    MR_Integer TypeNum_65;
    MR_String Var_67;

    mercury__io__write_string_3_p_0((MR_String) "\n");
    {
      TypeDeclId_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TypeDeclId_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), TypeDeclId_37, 1) = ((MR_Box) (TypeNum_10));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(TypeDeclId_37, STATE_VARIABLE_DeclSet_0_13);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_14 = STATE_VARIABLE_DeclSet_0_13;
    else
    {
      MR_Integer TypeNum_58;
      MR_String Var_60;

      backend_libs__c_util__output_pragma_pack_push_2_p_0();
      mercury__io__write_string_3_p_0((MR_String) "struct ");
      TypeNum_58 = (MR_Integer) (TypeNum_10);
      Var_60 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
      mercury__io__write_string_3_p_0(Var_60);
      mercury__io__write_int_3_p_0(TypeNum_58);
      mercury__io__write_string_3_p_0((MR_String) " {\n");
      if (((MR_tag((MR_Word) CellType_9)) == (MR_Integer) 1))
      {
        MR_Word ArgGroups_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CellType_9, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ArgGroups_39, (MR_String) "\t", (MR_Integer) 1);
      }
      else
      {
        MR_Word Types_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellType_9, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(Types_38, (MR_String) "\t", (MR_Integer) 1);
      }
      mercury__io__write_string_3_p_0((MR_String) "};\n");
      backend_libs__c_util__output_pragma_pack_pop_2_p_0();
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(TypeDeclId_37, STATE_VARIABLE_DeclSet_0_13, STATE_VARIABLE_DeclSet_14);
    }
    mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    TypeNum_65 = (MR_Integer) (TypeNum_10);
    Var_67 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_67);
    mercury__io__write_int_3_p_0(TypeNum_65);
    mercury__io__write_string_3_p_0((MR_String) " ");
    ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(TypeNum_10, CellNum_11);
    mercury__io__write_string_3_p_0((MR_String) "[];\n");
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_p_0(
  MR_Word ScalarCommonDataArray_6,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool succeeded;
    MR_Word CellType_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommonDataArray_6, (MR_Integer) 0))));
    MR_Word TypeNum_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ScalarCommonDataArray_6, (MR_Integer) 1))));
    MR_Word TypeDeclId_36;
    MR_Integer TypeNum_64;
    MR_String Var_66;

    mercury__io__write_string_3_p_0((MR_String) "\n");
    {
      TypeDeclId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), TypeDeclId_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), TypeDeclId_36, 1) = ((MR_Box) (TypeNum_10));
    }
    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(TypeDeclId_36, STATE_VARIABLE_DeclSet_0_12);
    if (succeeded)
      *STATE_VARIABLE_DeclSet_13 = STATE_VARIABLE_DeclSet_0_12;
    else
    {
      MR_Integer TypeNum_57;
      MR_String Var_59;

      backend_libs__c_util__output_pragma_pack_push_2_p_0();
      mercury__io__write_string_3_p_0((MR_String) "struct ");
      TypeNum_57 = (MR_Integer) (TypeNum_10);
      Var_59 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
      mercury__io__write_string_3_p_0(Var_59);
      mercury__io__write_int_3_p_0(TypeNum_57);
      mercury__io__write_string_3_p_0((MR_String) " {\n");
      if (((MR_tag((MR_Word) CellType_9)) == (MR_Integer) 1))
      {
        MR_Word ArgGroups_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CellType_9, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ArgGroups_38, (MR_String) "\t", (MR_Integer) 1);
      }
      else
      {
        MR_Word Types_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellType_9, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(Types_37, (MR_String) "\t", (MR_Integer) 1);
      }
      mercury__io__write_string_3_p_0((MR_String) "};\n");
      backend_libs__c_util__output_pragma_pack_pop_2_p_0();
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(TypeDeclId_36, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
    }
    mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    TypeNum_64 = (MR_Integer) (TypeNum_10);
    Var_66 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_66);
    mercury__io__write_int_3_p_0(TypeNum_64);
    mercury__io__write_string_3_p_0((MR_String) " ");
    ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(TypeNum_10);
    mercury__io__write_string_3_p_0((MR_String) "[];\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String Indent_2,
  MR_Integer ArgNum_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Group_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Groups_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_16;
      MR_Integer ArraySize_17;
      MR_Integer Var_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_3;

      mercury__io__write_string_3_p_0(Indent_2);
      Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Group_11, (MR_Integer) 0))));
      ArraySize_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Group_11, (MR_Integer) 1))));
      succeeded = (ArraySize_17 == (MR_Integer) 1);
      if (succeeded)
      {
        ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(Type_16);
        mercury__io__write_string_3_p_0((MR_String) " f");
        mercury__io__write_int_3_p_0(ArgNum_3);
        mercury__io__write_string_3_p_0((MR_String) ";\n");
      }
      else
      {
        ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(Type_16);
        mercury__io__write_string_3_p_0((MR_String) " f");
        mercury__io__write_int_3_p_0(ArgNum_3);
        mercury__io__write_string_3_p_0((MR_String) "[");
        mercury__io__write_int_3_p_0(ArraySize_17);
        mercury__io__write_string_3_p_0((MR_String) "];\n");
      }
      Var_36 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Groups_12;
      next_value_of_ArgNum_3 = Var_36;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_3 = next_value_of_ArgNum_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String Indent_2,
  MR_Integer ArgNum_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Type_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Types_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Var_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_ArgNum_3;

      mercury__io__write_string_3_p_0(Indent_2);
      succeeded = (Type_11 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
        mercury__io__write_string_3_p_0((MR_String) "MR_Float_Aligned");
      else
        ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(Type_11);
      mercury__io__write_string_3_p_0((MR_String) " f");
      mercury__io__write_int_3_p_0(ArgNum_3);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      Var_27 = (MR_Integer) ((MR_Unsigned) ArgNum_3 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Types_12;
      next_value_of_ArgNum_3 = Var_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      ArgNum_3 = next_value_of_ArgNum_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_p_0(
  MR_Word Info_7,
  MR_Word TablingInfoStruct_8,
  MR_Word STATE_VARIABLE_DeclSet_0_37,
  MR_Word * STATE_VARIABLE_DeclSet_38)
{
  {
    MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 0))));
    MR_Word EvalMethod_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 1))));
    MR_Integer NumInputs_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 2))));
    MR_Integer NumOutputs_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 3))));
    MR_Word InputSteps_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 4))));
    MR_Word MaybeOutputSteps_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 5))));
    MR_Word PTIVectorRval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 6))));
    MR_Word TypeParamsRval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 7))));
    MR_Word MaybeSizeLimit_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 8))));
    MR_Word Stats_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), TablingInfoStruct_8, (MR_Integer) 9))) & (MR_Integer) 1);
    MR_Word InfoDataId_21;
    MR_Word InputStepsDataId_22;
    MR_Word OutputStepsDataId_23;
    MR_Word TipsDataId_24;
    MR_Word CallStatsDataId_25;
    MR_Word PrevCallStatsDataId_26;
    MR_Word AnswerStatsDataId_27;
    MR_Word PrevAnswerStatsDataId_28;
    MR_Word DeclId_36;
    MR_Word STATE_VARIABLE_DeclSet_60_60;
    MR_Word STATE_VARIABLE_DeclSet_63_63;
    MR_String Var_75;

    {
      InfoDataId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InfoDataId_21, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), InfoDataId_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      InputStepsDataId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InputStepsDataId_22, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), InputStepsDataId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[0])));
    }
    {
      OutputStepsDataId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), OutputStepsDataId_23, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), OutputStepsDataId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[1])));
    }
    {
      TipsDataId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), TipsDataId_24, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), TipsDataId_24, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    }
    {
      CallStatsDataId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CallStatsDataId_25, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), CallStatsDataId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_4[2])));
    }
    {
      PrevCallStatsDataId_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PrevCallStatsDataId_26, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), PrevCallStatsDataId_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_4[3])));
    }
    {
      AnswerStatsDataId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), AnswerStatsDataId_27, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), AnswerStatsDataId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_4[4])));
    }
    {
      PrevAnswerStatsDataId_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), PrevAnswerStatsDataId_28, 0) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(1), PrevAnswerStatsDataId_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_4[5])));
    }
    ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(Info_7, InputStepsDataId_22, InputSteps_15);
    ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, PTIVectorRval_17, STATE_VARIABLE_DeclSet_0_37, &STATE_VARIABLE_DeclSet_60_60);
    Var_75 = parse_tree__prog_data_pragma__eval_method_to_table_type_1_f_0(EvalMethod_12);
    if ((MaybeOutputSteps_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      STATE_VARIABLE_DeclSet_63_63 = STATE_VARIABLE_DeclSet_60_60;
      if (!((MaybeSizeLimit_19 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Integer SizeLimit1_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSizeLimit_19, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(Info_7, ProcLabel_11, SizeLimit1_30);
      }
      switch (Stats_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 0:
          {
            ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(Info_7, CallStatsDataId_25, InputSteps_15);
            ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(Info_7, PrevCallStatsDataId_26, InputSteps_15);
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, InfoDataId_21);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      mercury__io__write_string_3_p_0(Var_75);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_int_3_p_0(NumInputs_13);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_int_3_p_0(NumOutputs_14);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
    }
    else
    {
      MR_Word OutputStepsA_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOutputSteps_16, (MR_Integer) 0))));

      ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(Info_7, OutputStepsDataId_23, OutputStepsA_29);
      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(Info_7, PTIVectorRval_17, STATE_VARIABLE_DeclSet_60_60, &STATE_VARIABLE_DeclSet_63_63);
      if (!((MaybeSizeLimit_19 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Integer SizeLimit1_219 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSizeLimit_19, (MR_Integer) 0))));

        ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(Info_7, ProcLabel_11, SizeLimit1_219);
      }
      switch (Stats_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
          }
          break;
        case (MR_Integer) 0:
          {
            ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(Info_7, CallStatsDataId_25, InputSteps_15);
            ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(Info_7, PrevCallStatsDataId_26, InputSteps_15);
            ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(Info_7, AnswerStatsDataId_27, OutputStepsA_29);
            ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(Info_7, PrevAnswerStatsDataId_28, OutputStepsA_29);
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, InfoDataId_21);
      mercury__io__write_string_3_p_0((MR_String) " = {\n");
      mercury__io__write_string_3_p_0(Var_75);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_int_3_p_0(NumInputs_13);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_int_3_p_0(NumOutputs_14);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_string_3_p_0((MR_String) "1,\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "(const MR_PseudoTypeInfo *) ");
    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_7, PTIVectorRval_17);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_7, TypeParamsRval_18);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    mercury__io__write_string_3_p_0((MR_String) "{ 0 },\n");
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, InputStepsDataId_22);
    mercury__io__write_string_3_p_0((MR_String) ",\n");
    if ((MaybeOutputSteps_16 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_3_p_0((MR_String) "NULL\n");
    else
    {
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, OutputStepsDataId_23);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "},\n");
    switch (Stats_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          mercury__io__write_string_3_p_0((MR_String) "},{\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          mercury__io__write_string_3_p_0((MR_String) "},{\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          mercury__io__write_string_3_p_0((MR_String) "}}},\n");
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, CallStatsDataId_25);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0((MR_String) "},{\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, PrevCallStatsDataId_26);
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
          if ((MaybeOutputSteps_16 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, AnswerStatsDataId_27);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_7, PrevAnswerStatsDataId_28);
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          mercury__io__write_string_3_p_0((MR_String) "}}},\n");
        }
        break;
    }
    if ((MaybeSizeLimit_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__io__write_string_3_p_0((MR_String) "-1,\n");
      mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "0\n");
    }
    else
    {
      MR_Integer SizeLimit2_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeSizeLimit_19, (MR_Integer) 0))));

      mercury__io__write_int_3_p_0(SizeLimit2_35);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(Info_7, TipsDataId_24);
      mercury__io__write_string_3_p_0((MR_String) "0,\n");
      mercury__io__write_string_3_p_0((MR_String) "0\n");
    }
    mercury__io__write_string_3_p_0((MR_String) "};\n");
    {
      DeclId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), DeclId_36, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), DeclId_36, 1) = ((MR_Box) (ProcLabel_11));
      MR_hl_field(MR_mktag(3), DeclId_36, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_36, STATE_VARIABLE_DeclSet_63_63, STATE_VARIABLE_DeclSet_38);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
  MR_Word Info_6,
  MR_Word DataId_7,
  MR_Word Steps_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "static MR_TableStepStats ");
    ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_6, DataId_7);
    mercury__io__write_string_3_p_0((MR_String) "[] = \n");
    mercury__io__write_string_3_p_0((MR_String) "{\n");
    ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(Steps_8);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word StepDesc_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word StepDescs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Step_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StepDesc_7, (MR_Integer) 1))));
      MR_String KindStr_12;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "{ 0, 0, ");
      KindStr_12 = hlds__hlds_pred__table_step_stats_kind_1_f_0(Step_11);
      mercury__io__write_string_3_p_0(KindStr_12);
      mercury__io__write_string_3_p_0((MR_String) ",\n");
      mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, 0, 0, 0, 0, 0, ");
      mercury__io__write_string_3_p_0((MR_String) "0, 0, ");
      mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, ");
      mercury__io__write_string_3_p_0((MR_String) "0, 0 },\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StepDescs_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
  MR_Word Info_6,
  MR_Word ProcLabel_7,
  MR_Integer SizeLimit_8)
{
  {
    MR_Word DataId_10;

    {
      DataId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), DataId_10, 0) = ((MR_Box) (ProcLabel_7));
      MR_hl_field(MR_mktag(1), DataId_10, 1) = ((MR_Box) ((MR_Unsigned) 16U));
    }
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "static MR_TrieNode ");
    ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_6, DataId_10);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__io__write_int_3_p_0(SizeLimit_8);
    mercury__io__write_string_3_p_0((MR_String) "];\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
  MR_Word Info_6,
  MR_Word DataId_7,
  MR_Word StepDescs_8)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "\n");
    mercury__io__write_string_3_p_0((MR_String) "static const MR_TableStepDesc ");
    ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_6, DataId_7);
    mercury__io__write_string_3_p_0((MR_String) "[] = {\n");
    ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(StepDescs_8);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word StepDesc_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word StepDescs_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String VarName_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), StepDesc_7, (MR_Integer) 0))));
      MR_Word Step_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), StepDesc_7, (MR_Integer) 1))));
      MR_String StepType_12;
      MR_Word MaybeEnumRange_13;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "{ \"");
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(VarName_10);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      backend_libs__rtti__table_trie_step_to_c_3_p_0(Step_11, &StepType_12, &MaybeEnumRange_13);
      mercury__io__write_string_3_p_0(StepType_12);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      if ((MaybeEnumRange_13 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_int_3_p_0((MR_Integer) -1);
      else
      {
        MR_Integer EnumRange_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeEnumRange_13, (MR_Integer) 0))));

        mercury__io__write_int_3_p_0(EnumRange_14);
      }
      mercury__io__write_string_3_p_0((MR_String) " },\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = StepDescs_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Info_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Infos_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ProcNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
      MR_String FullProcName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))));
      MR_Word ArgInfos_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))));
      MR_Word ProfiledArgInfos_13;
      MR_Integer Var_25;
      MR_Integer Var_29;
      MR_String Var_33;
      MR_String Var_42;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "\tMR_init_complexity_proc(");
      mercury__io__write_int_3_p_0(ProcNum_10);
      mercury__io__write_string_3_p_0((MR_String) ", \"");
      backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(FullProcName_11);
      mercury__io__write_string_3_p_0((MR_String) "\", ");
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), (MR_Word) (&ll_backend__llds_out__llds_out_global_scalar_common_3[0]), ArgInfos_12, &ProfiledArgInfos_13);
      Var_25 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), ProfiledArgInfos_13);
      mercury__io__write_int_3_p_0(Var_25);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      Var_29 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), ArgInfos_12);
      mercury__io__write_int_3_p_0(Var_29);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      Var_42 = mercury__string__int_to_string_1_f_0(ProcNum_10);
      Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", Var_42);
      mercury__io__write_string_3_p_0(Var_33);
      mercury__io__write_string_3_p_0((MR_String) ");\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Infos_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Info_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Infos_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ProcNum_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 0))));
      MR_Word Args_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 2))));
      MR_String Var_17;
      MR_Integer Var_21;
      MR_String Var_32;
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "\nMR_ComplexityArgInfo ");
      Var_32 = mercury__string__int_to_string_1_f_0(ProcNum_10);
      Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", Var_32);
      mercury__io__write_string_3_p_0(Var_17);
      mercury__io__write_string_3_p_0((MR_String) "[");
      Var_21 = mercury__list__length_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0), Args_12);
      mercury__io__write_int_3_p_0(Var_21);
      mercury__io__write_string_3_p_0((MR_String) "] = {\n");
      ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(Args_12);
      mercury__io__write_string_3_p_0((MR_String) "};\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Infos_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Arg_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Args_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MaybeName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 0))));
      MR_Word Kind_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Arg_7, (MR_Integer) 1))) & (MR_Integer) 3);
      MR_Word next_value_of_HeadVar__1_1;

      mercury__io__write_string_3_p_0((MR_String) "{ ");
      if ((MaybeName_10 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_3_p_0((MR_String) "NULL, ");
      else
      {
        MR_String Name_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeName_10, (MR_Integer) 0))));

        mercury__io__write_string_3_p_0((MR_String) "\"");
        mercury__io__write_string_3_p_0(Name_12);
        mercury__io__write_string_3_p_0((MR_String) "\", ");
      }
      switch (Kind_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_FIX_SIZE");
          break;
        case (MR_Integer) 0:
          mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_VAR_SIZE");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_OUTPUT");
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) " },\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Args_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
