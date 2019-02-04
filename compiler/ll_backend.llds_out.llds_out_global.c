/*
** Automatically generated from `llds_out_global.m'
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


/* :- module ll_backend.llds_out.llds_out_global. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_out__llds_out_global__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_global.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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
#include "counter.mih"
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
#include "ll_backend.llds_out.llds_out_data.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
  MR_Integer * ll_backend__llds_out__llds_out_global__N_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
  MR_Word ll_backend__llds_out__llds_out_global__Type_2,
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_5,
  MR_Word ll_backend__llds_out__llds_out_global__CellValue_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3);

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_global__Value_3);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
  MR_Word ll_backend__llds_out__llds_out_global__Steps_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
  MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_7,
  MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
  MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[5][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[1][4];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[5][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[2][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][7];




static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_2[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_2[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[1])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_5[2])),
    ((MR_Box) (ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_global_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds_out__llds_out_util__ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__llds_out__llds_out_global__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
  MR_Integer * ll_backend__llds_out__llds_out_global__N_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Word ll_backend__llds_out__llds_out_global__Var_4;

    if (ll_backend__llds_out__llds_out_global__succeeded)
      {
        ll_backend__llds_out__llds_out_global__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
        ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Var_4)) == (MR_mktag((MR_Integer) 1)));
        if (ll_backend__llds_out__llds_out_global__succeeded)
          *ll_backend__llds_out__llds_out_global__N_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Var_4, (MR_Integer) 0)));
      }
    return ll_backend__llds_out__llds_out_global__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer ll_backend__llds_out__llds_out_global__Int_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Ints_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_7);
            }
            if ((ll_backend__llds_out__llds_out_global__Ints_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
            else
              {
                MR_Integer ll_backend__llds_out__llds_out_global__Int_23;
                MR_Word ll_backend__llds_out__llds_out_global__Ints_24;

                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
                ll_backend__llds_out__llds_out_global__Int_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Ints_8, (MR_Integer) 0)));
                ll_backend__llds_out__llds_out_global__Ints_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Ints_8, (MR_Integer) 1)));
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_23);
                }
                if ((ll_backend__llds_out__llds_out_global__Ints_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) ",\n");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__Ints_24;

                      ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
  MR_Word ll_backend__llds_out__llds_out_global__Type_2,
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Rvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__3_3, (MR_Integer) 1)));

            {
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_13, ll_backend__llds_out__llds_out_global__Type_2);
            }
            if ((ll_backend__llds_out__llds_out_global__Rvals_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
            else
              {
                MR_Word ll_backend__llds_out__llds_out_global__Rval_33;
                MR_Word ll_backend__llds_out__llds_out_global__Rvals_34;

                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
                ll_backend__llds_out__llds_out_global__Rval_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Rvals_14, (MR_Integer) 0)));
                ll_backend__llds_out__llds_out_global__Rvals_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Rvals_14, (MR_Integer) 1)));
                {
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_33, ll_backend__llds_out__llds_out_global__Type_2);
                }
                if ((ll_backend__llds_out__llds_out_global__Rvals_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) ",\n");
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__3_3 = ll_backend__llds_out__llds_out_global__Rvals_34;

                      ll_backend__llds_out__llds_out_global__HeadVar__3_3 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__3_3;
                    }
                    continue;
                  }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
    MR_Integer ll_backend__llds_out__llds_out_global__conv0_N_3;

    {
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_global__project_int_constant_2_p_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1), &ll_backend__llds_out__llds_out_global__conv0_N_3);
    }
    if (ll_backend__llds_out__llds_out_global__succeeded)
      {
        *ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_N_3));
        ll_backend__llds_out__llds_out_global__succeeded = MR_TRUE;
      }
    return ll_backend__llds_out__llds_out_global__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Group_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Groups_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 1)));

            if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Group_10)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word ll_backend__llds_out__llds_out_global__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 0)));
                MR_Word ll_backend__llds_out__llds_out_global__Rvals_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 2)));
                MR_Integer ll_backend__llds_out__llds_out_global__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_global__Ints_16;
                MR_Word ll_backend__llds_out__llds_out_global__Var_30;

                {
                  mercury__io__write_string_3_p_0((MR_String) "{\n");
                }
                {
                  ll_backend__llds_out__llds_out_global__succeeded = mercury__list__map_3_p_2((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[4], ll_backend__llds_out__llds_out_global__Rvals_15, &ll_backend__llds_out__llds_out_global__Ints_16);
                }
                if (ll_backend__llds_out__llds_out_global__succeeded)
                  {
                    {
                      ll_backend__llds_out__llds_out_global__Var_30 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_13);
                    }
                    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Var_30 == (MR_Integer) 1);
                  }
                if (ll_backend__llds_out__llds_out_global__succeeded)
                  {
                    ll_backend__llds_out__llds_out_global__output_cons_arg_group_ints_3_p_0(ll_backend__llds_out__llds_out_global__Ints_16);
                  }
                else
                  {
                    ll_backend__llds_out__llds_out_global__output_cons_arg_group_elements_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Type_13, ll_backend__llds_out__llds_out_global__Rvals_15);
                  }
                {
                  mercury__io__write_string_3_p_0((MR_String) "}");
                }
              }
            else
              {
                MR_Word ll_backend__llds_out__llds_out_global__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 1)));
                MR_Word ll_backend__llds_out__llds_out_global__Type_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Group_10, (MR_Integer) 0)));
                MR_Integer ll_backend__llds_out__llds_out_global__Int_19;
                MR_Word ll_backend__llds_out__llds_out_global__Var_24;
                MR_Word ll_backend__llds_out__llds_out_global__Var_47;

                ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Rval_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ll_backend__llds_out__llds_out_global__succeeded)
                  {
                    ll_backend__llds_out__llds_out_global__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_18, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Var_47)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_global__succeeded)
                      {
                        ll_backend__llds_out__llds_out_global__Int_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Var_47, (MR_Integer) 0)));
                        {
                          ll_backend__llds_out__llds_out_global__Var_24 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_41);
                        }
                        ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Var_24 == (MR_Integer) 1);
                      }
                  }
                if (ll_backend__llds_out__llds_out_global__succeeded)
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Int_19);
                  }
                else
                  {
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_18, ll_backend__llds_out__llds_out_global__Type_41);
                  }
              }
            if ((ll_backend__llds_out__llds_out_global__Groups_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__2_2 = ll_backend__llds_out__llds_out_global__Groups_11;

                  ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_1,
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__TypedRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__TypedRvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_global__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TypedRval_10, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TypedRval_10, (MR_Integer) 1)));
            MR_Integer ll_backend__llds_out__llds_out_global__N_15;
            MR_Word ll_backend__llds_out__llds_out_global__Var_20;
            MR_Word ll_backend__llds_out__llds_out_global__Var_21;

            ll_backend__llds_out__llds_out_global__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Rval_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (ll_backend__llds_out__llds_out_global__succeeded)
              {
                ll_backend__llds_out__llds_out_global__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__Rval_13, (MR_Integer) 1)));
                ll_backend__llds_out__llds_out_global__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Var_20)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__llds_out__llds_out_global__succeeded)
                  {
                    ll_backend__llds_out__llds_out_global__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Var_20, (MR_Integer) 0)));
                    {
                      ll_backend__llds_out__llds_out_global__Var_21 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_global__Type_14);
                    }
                    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Var_21 == (MR_Integer) 1);
                  }
              }
            if (ll_backend__llds_out__llds_out_global__succeeded)
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__N_15);
              }
            else
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_global__Info_1, ll_backend__llds_out__llds_out_global__Rval_13, ll_backend__llds_out__llds_out_global__Type_14);
              }
            if ((ll_backend__llds_out__llds_out_global__TypedRvals_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "\n");
                }
              }
            else
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) ",\n");
                }
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__2_2 = ll_backend__llds_out__llds_out_global__TypedRvals_11;

                  ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_5,
  MR_Word ll_backend__llds_out__llds_out_global__CellValue_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellValue_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellValue_6, (MR_Integer) 0)));

        {
          ll_backend__llds_out__llds_out_global__output_cons_arg_groups_4_p_0(ll_backend__llds_out__llds_out_global__Info_5, ll_backend__llds_out__llds_out_global__ArgGroups_9);
        }
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_global__TypedArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellValue_6, (MR_Integer) 0)));

        {
          ll_backend__llds_out__llds_out_global__output_cons_args_4_p_0(ll_backend__llds_out__llds_out_global__Info_5, ll_backend__llds_out__llds_out_global__TypedArgs_8);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Group_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Groups_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_global__Type_16;
            MR_Integer ll_backend__llds_out__llds_out_global__ArraySize_17;
            MR_Integer ll_backend__llds_out__llds_out_global__Var_36;

            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Indent_2);
            }
            ll_backend__llds_out__llds_out_global__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_11, (MR_Integer) 0)));
            ll_backend__llds_out__llds_out_global__ArraySize_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Group_11, (MR_Integer) 1)));
            ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__ArraySize_17 == (MR_Integer) 1);
            if (ll_backend__llds_out__llds_out_global__succeeded)
              {
                {
                  ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " f");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ";\n");
                }
              }
            else
              {
                {
                  ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) " f");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "[");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArraySize_17);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "];\n");
                }
              }
            ll_backend__llds_out__llds_out_global__Var_36 = (ll_backend__llds_out__llds_out_global__ArgNum_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__Groups_12;
              MR_Integer ll_backend__llds_out__llds_out_global__next_value_of_ArgNum_3 = ll_backend__llds_out__llds_out_global__Var_36;

              ll_backend__llds_out__llds_out_global__ArgNum_3 = ll_backend__llds_out__llds_out_global__next_value_of_ArgNum_3;
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1,
  MR_String ll_backend__llds_out__llds_out_global__Indent_2,
  MR_Integer ll_backend__llds_out__llds_out_global__ArgNum_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__llds_out__llds_out_global__Var_27;

            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Indent_2);
            }
            ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Type_11 == (MR_Integer) 9);
            if (ll_backend__llds_out__llds_out_global__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_Float_Aligned");
                }
              }
            else
              {
                ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_global__Type_11);
              }
            {
              mercury__io__write_string_3_p_0((MR_String) " f");
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ArgNum_3);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ";\n");
            }
            ll_backend__llds_out__llds_out_global__Var_27 = (ll_backend__llds_out__llds_out_global__ArgNum_3 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__Types_12;
              MR_Integer ll_backend__llds_out__llds_out_global__next_value_of_ArgNum_3 = ll_backend__llds_out__llds_out_global__Var_27;

              ll_backend__llds_out__llds_out_global__ArgNum_3 = ll_backend__llds_out__llds_out_global__next_value_of_ArgNum_3;
              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__HeadVar__2_2;

    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ll_backend__llds_out__llds_out_global__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer ll_backend__llds_out__llds_out_global__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));

        ll_backend__llds_out__llds_out_global__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 2)));
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_global__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__llds_out__llds_out_global__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));

        {
          ll_backend__llds_out__llds_out_global__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Rval_7));
          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    return ll_backend__llds_out__llds_out_global__HeadVar__2_2;
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
{
  {
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
    MR_Word ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2;

    {
      ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2 = ll_backend__llds_out__llds_out_global__common_group_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_HeadVar__2_2));
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_global__Value_3)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__Rvals_4;

    if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__Value_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__llds_out__llds_out_global__Groups_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__Value_3, (MR_Integer) 0)));
        MR_Word ll_backend__llds_out__llds_out_global__RvalLists_7;

        {
          ll_backend__llds_out__llds_out_global__RvalLists_7 = mercury__list__map_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[3], ll_backend__llds_out__llds_out_global__Groups_6);
        }
        {
          mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__RvalLists_7, &ll_backend__llds_out__llds_out_global__Rvals_4);
        }
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_global__TypedRvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Value_3, (MR_Integer) 0)));

        {
          ll_backend__llds_out__llds_out_global__Rvals_4 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(ll_backend__llds_out__llds_out_global__TypedRvals_5);
        }
      }
    return ll_backend__llds_out__llds_out_global__Rvals_4;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__StepDesc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_global__Step_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 1)));
            MR_String ll_backend__llds_out__llds_out_global__KindStr_12;
            MR_String ll_backend__llds_out__llds_out_global___VarName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 0)));

            {
              mercury__io__write_string_3_p_0((MR_String) "{ 0, 0, ");
            }
            {
              ll_backend__llds_out__llds_out_global__KindStr_12 = hlds__hlds_pred__table_step_stats_kind_1_f_0(ll_backend__llds_out__llds_out_global__Step_11);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__KindStr_12);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",\n");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, 0, 0, 0, 0, 0, ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "0, 0, ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "0, 0, 0, 0, ");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "0, 0 },\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__StepDescs_8;

              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
  MR_Word ll_backend__llds_out__llds_out_global__Steps_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static MR_TableStepStats ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] = \n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    {
      ll_backend__llds_out__llds_out_global__output_table_step_stats_2_3_p_0(ll_backend__llds_out__llds_out_global__Steps_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
  MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_7,
  MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__DataId_10;

    {
      ll_backend__llds_out__llds_out_global__DataId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__DataId_10, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_7));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__DataId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static MR_TrieNode ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__SizeLimit_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "];\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__StepDesc_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
            MR_String ll_backend__llds_out__llds_out_global__VarName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Step_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__StepDesc_7, (MR_Integer) 1)));
            MR_String ll_backend__llds_out__llds_out_global__StepType_12;
            MR_Word ll_backend__llds_out__llds_out_global__MaybeEnumRange_13;

            {
              mercury__io__write_string_3_p_0((MR_String) "{ \"");
            }
            {
              backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__llds_out__llds_out_global__VarName_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
            {
              backend_libs__rtti__table_trie_step_to_c_3_p_0(ll_backend__llds_out__llds_out_global__Step_11, &ll_backend__llds_out__llds_out_global__StepType_12, &ll_backend__llds_out__llds_out_global__MaybeEnumRange_13);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__StepType_12);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            if ((ll_backend__llds_out__llds_out_global__MaybeEnumRange_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_int_3_p_0((MR_Integer) -1);
                }
              }
            else
              {
                MR_Integer ll_backend__llds_out__llds_out_global__EnumRange_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeEnumRange_13, (MR_Integer) 0)));

                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__EnumRange_14);
                }
              }
            {
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__StepDescs_8;

              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_6,
  MR_Word ll_backend__llds_out__llds_out_global__DataId_7,
  MR_Word ll_backend__llds_out__llds_out_global__StepDescs_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static const MR_TableStepDesc ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_6, ll_backend__llds_out__llds_out_global__DataId_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[] = {\n");
    }
    {
      ll_backend__llds_out__llds_out_global__output_table_steps_3_p_0(ll_backend__llds_out__llds_out_global__StepDescs_8);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__Kind_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ll_backend__llds_out__llds_out_global__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));

    ll_backend__llds_out__llds_out_global__succeeded = (ll_backend__llds_out__llds_out_global__Kind_3 == (MR_Integer) 0);
    return ll_backend__llds_out__llds_out_global__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Arg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_global__MaybeName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Arg_7, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Arg_7, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "{ ");
            }
            if ((ll_backend__llds_out__llds_out_global__MaybeName_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "NULL, ");
                }
              }
            else
              {
                MR_String ll_backend__llds_out__llds_out_global__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeName_10, (MR_Integer) 0)));

                {
                  mercury__io__write_string_3_p_0((MR_String) "\"");
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Name_12);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) "\", ");
                }
              }
            switch (ll_backend__llds_out__llds_out_global__Kind_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_FIX_SIZE");
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_INPUT_VAR_SIZE");
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_COMPLEXITY_OUTPUT");
                  }
                }
                break;
            }
            {
              mercury__io__write_string_3_p_0((MR_String) " },\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__Args_8;

              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3)
{
  {
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

    {
      ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
{
  {
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
    MR_Word ll_backend__llds_out__llds_out_global__conv0_Rvals_4;

    {
      ll_backend__llds_out__llds_out_global__conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_Rvals_4));
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
  MR_Word ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8,
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_17,
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_18)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42;
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 1)));
    MR_Integer ll_backend__llds_out__llds_out_global__CellNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_global__Values_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_global__ArgLists_15;
    MR_Word ll_backend__llds_out__llds_out_global__Args_16;
    MR_Integer ll_backend__llds_out__llds_out_global__Var_34;
    MR_Word ll_backend__llds_out__llds_out_global__Var_38;
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_53;
    MR_String ll_backend__llds_out__llds_out_global__Var_55;
    MR_Word ll_backend__llds_out__llds_out_global___CellType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_8, (MR_Integer) 0)));
    MR_Box ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_39_39;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    {
      ll_backend__llds_out__llds_out_global__ArgLists_15 = mercury__list__map_2_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[2], ll_backend__llds_out__llds_out_global__Values_14);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__ArgLists_15, &ll_backend__llds_out__llds_out_global__Args_16);
    }
    {
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__Args_16, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    }
    ll_backend__llds_out__llds_out_global__TypeNum_53 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_12;
    {
      ll_backend__llds_out__llds_out_global__Var_55 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_55);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_53);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(ll_backend__llds_out__llds_out_global__TypeNum_12, ll_backend__llds_out__llds_out_global__CellNum_13);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      ll_backend__llds_out__llds_out_global__Var_34 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, ll_backend__llds_out__llds_out_global__Values_14);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Var_34);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    }
    {
      ll_backend__llds_out__llds_out_global__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_38, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_38, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_vector_common_data_defn_6_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_38, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Info_7));
    }
    {
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_global__TypeCtorInfo_42_42, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_global__Var_38, ll_backend__llds_out__llds_out_global__Values_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_39_39);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2,
  MR_Box * ll_backend__llds_out__llds_out_global__wrapper_arg_3)
{
  {
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

    {
      ll_backend__llds_out__llds_out_global__output_common_cell_value_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
{
  {
    MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_2;
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;
    MR_Word ll_backend__llds_out__llds_out_global__conv0_Rvals_4;

    {
      ll_backend__llds_out__llds_out_global__conv0_Rvals_4 = ll_backend__llds_out__llds_out_global__common_cell_get_rvals_1_f_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
    ll_backend__llds_out__llds_out_global__wrapper_arg_2 = ((MR_Box) (ll_backend__llds_out__llds_out_global__conv0_Rvals_4));
    return ll_backend__llds_out__llds_out_global__wrapper_arg_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
  MR_Word ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8,
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_16,
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_17)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41;
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 1)));
    MR_Word ll_backend__llds_out__llds_out_global__Values_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_global__ArgLists_14;
    MR_Word ll_backend__llds_out__llds_out_global__Args_15;
    MR_Integer ll_backend__llds_out__llds_out_global__Var_33;
    MR_Word ll_backend__llds_out__llds_out_global__Var_37;
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_52;
    MR_String ll_backend__llds_out__llds_out_global__Var_54;
    MR_Word ll_backend__llds_out__llds_out_global___CellType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_8, (MR_Integer) 0)));
    MR_Box ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_38_38;

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
    {
      ll_backend__llds_out__llds_out_global__ArgLists_14 = mercury__list__map_2_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_1[0], (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[1], ll_backend__llds_out__llds_out_global__Values_13);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__llds_out__llds_out_global__ArgLists_14, &ll_backend__llds_out__llds_out_global__Args_15);
    }
    {
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__Args_15, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_16, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "static const struct ");
    }
    ll_backend__llds_out__llds_out_global__TypeNum_52 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_12;
    {
      ll_backend__llds_out__llds_out_global__Var_54 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_54);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_52);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_12);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[");
    }
    {
      ll_backend__llds_out__llds_out_global__Var_33 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, ll_backend__llds_out__llds_out_global__Values_13);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Var_33);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "] =\n{\n");
    }
    {
      ll_backend__llds_out__llds_out_global__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_37, 0) = ((MR_Box) (&ll_backend__llds_out__llds_out_global_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_37, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__output_scalar_common_data_defn_6_p_0_2));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Var_37, 3) = ((MR_Box) (ll_backend__llds_out__llds_out_global__Info_7));
    }
    {
      mercury__list__foldl_4_p_2(ll_backend__llds_out__llds_out_global__TypeCtorInfo_41_41, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__llds_out__llds_out_global__Var_37, ll_backend__llds_out__llds_out_global__Values_13, ((MR_Box) ((MR_Integer) 0)), &ll_backend__llds_out__llds_out_global__conv1_STATE_VARIABLE_IO_38_38);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_vector_common_data_decl_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6,
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13,
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__CellType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 0)));
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 1)));
    MR_Integer ll_backend__llds_out__llds_out_global__CellNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_global__TypeDeclId_37;
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_65;
    MR_String ll_backend__llds_out__llds_out_global__Var_67;
    MR_Word ll_backend__llds_out__llds_out_global___Values_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__VectorCommonDataArray_6, (MR_Integer) 3)));

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__llds_out__llds_out_global__TypeDeclId_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TypeDeclId_37, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__TypeNum_10));
    }
    {
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_37, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13);
    }
    if (ll_backend__llds_out__llds_out_global__succeeded)
      *ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13;
    else
      {
        MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_58;
        MR_String ll_backend__llds_out__llds_out_global__Var_60;

        {
          backend_libs__c_util__output_pragma_pack_push_2_p_0();
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
        ll_backend__llds_out__llds_out_global__TypeNum_58 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
        {
          ll_backend__llds_out__llds_out_global__Var_60 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_60);
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_58);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " {\n");
        }
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellType_9)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

            {
              ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ll_backend__llds_out__llds_out_global__ArgGroups_39, (MR_String) "\t", (MR_Integer) 1);
            }
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Types_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

            {
              ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(ll_backend__llds_out__llds_out_global__Types_38, (MR_String) "\t", (MR_Integer) 1);
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
        {
          backend_libs__c_util__output_pragma_pack_pop_2_p_0();
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_37, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_13, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_14);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    }
    ll_backend__llds_out__llds_out_global__TypeNum_65 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
    {
      ll_backend__llds_out__llds_out_global__Var_67 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_67);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_65);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(ll_backend__llds_out__llds_out_global__TypeNum_10, ll_backend__llds_out__llds_out_global__CellNum_11);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_scalar_common_data_decl_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6,
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__CellType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 0)));
    MR_Word ll_backend__llds_out__llds_out_global__TypeNum_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 1)));
    MR_Word ll_backend__llds_out__llds_out_global__TypeDeclId_36;
    MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_64;
    MR_String ll_backend__llds_out__llds_out_global__Var_66;
    MR_Word ll_backend__llds_out__llds_out_global___Values_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__ScalarCommonDataArray_6, (MR_Integer) 2)));

    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      ll_backend__llds_out__llds_out_global__TypeDeclId_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TypeDeclId_36, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__TypeNum_10));
    }
    {
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12);
    }
    if (ll_backend__llds_out__llds_out_global__succeeded)
      *ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12;
    else
      {
        MR_Integer ll_backend__llds_out__llds_out_global__TypeNum_57;
        MR_String ll_backend__llds_out__llds_out_global__Var_59;

        {
          backend_libs__c_util__output_pragma_pack_push_2_p_0();
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "struct ");
        }
        ll_backend__llds_out__llds_out_global__TypeNum_57 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
        {
          ll_backend__llds_out__llds_out_global__Var_59 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_59);
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_57);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " {\n");
        }
        if (((MR_tag((MR_Word) ll_backend__llds_out__llds_out_global__CellType_9)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ll_backend__llds_out__llds_out_global__ArgGroups_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

            {
              ll_backend__llds_out__llds_out_global__output_cons_arg_group_types_5_p_0(ll_backend__llds_out__llds_out_global__ArgGroups_38, (MR_String) "\t", (MR_Integer) 1);
            }
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Types_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__CellType_9, (MR_Integer) 0)));

            {
              ll_backend__llds_out__llds_out_global__output_cons_arg_types_5_p_0(ll_backend__llds_out__llds_out_global__Types_37, (MR_String) "\t", (MR_Integer) 1);
            }
          }
        {
          mercury__io__write_string_3_p_0((MR_String) "};\n");
        }
        {
          backend_libs__c_util__output_pragma_pack_pop_2_p_0();
        }
        {
          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__TypeDeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_13);
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_STATIC_LINKAGE const struct ");
    }
    ll_backend__llds_out__llds_out_global__TypeNum_64 = (MR_Integer) ll_backend__llds_out__llds_out_global__TypeNum_10;
    {
      ll_backend__llds_out__llds_out_global__Var_66 = backend_libs__name_mangle__mercury_common_type_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_66);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_64);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(ll_backend__llds_out__llds_out_global__TypeNum_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "[];\n");
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_tabling_info_struct_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__Info_7,
  MR_Word ll_backend__llds_out__llds_out_global__TablingInfoStruct_8,
  MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_37,
  MR_Word * ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_38)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Word ll_backend__llds_out__llds_out_global__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 0)));
    MR_Word ll_backend__llds_out__llds_out_global__EvalMethod_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 1)));
    MR_Integer ll_backend__llds_out__llds_out_global__NumInputs_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 2)));
    MR_Integer ll_backend__llds_out__llds_out_global__NumOutputs_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_global__InputSteps_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 4)));
    MR_Word ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 5)));
    MR_Word ll_backend__llds_out__llds_out_global__PTIVectorRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 6)));
    MR_Word ll_backend__llds_out__llds_out_global__TypeParamsRval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 7)));
    MR_Word ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 8)));
    MR_Word ll_backend__llds_out__llds_out_global__Stats_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__TablingInfoStruct_8, (MR_Integer) 9)));
    MR_Word ll_backend__llds_out__llds_out_global__InfoDataId_21;
    MR_Word ll_backend__llds_out__llds_out_global__InputStepsDataId_22;
    MR_Word ll_backend__llds_out__llds_out_global__OutputStepsDataId_23;
    MR_Word ll_backend__llds_out__llds_out_global__TipsDataId_24;
    MR_Word ll_backend__llds_out__llds_out_global__CallStatsDataId_25;
    MR_Word ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26;
    MR_Word ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27;
    MR_Word ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28;
    MR_Word ll_backend__llds_out__llds_out_global__DeclId_36;
    MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60;
    MR_Word ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63;
    MR_String ll_backend__llds_out__llds_out_global__Var_75;

    {
      ll_backend__llds_out__llds_out_global__InfoDataId_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InfoDataId_21, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InfoDataId_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__llds_out__llds_out_global__InputStepsDataId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InputStepsDataId_22, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__InputStepsDataId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[0])));
    }
    {
      ll_backend__llds_out__llds_out_global__OutputStepsDataId_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_global_scalar_common_4[1])));
    }
    {
      ll_backend__llds_out__llds_out_global__TipsDataId_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TipsDataId_24, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__TipsDataId_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
    }
    {
      ll_backend__llds_out__llds_out_global__CallStatsDataId_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CallStatsDataId_25, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__CallStatsDataId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[1])));
    }
    {
      ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[2])));
    }
    {
      ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[3])));
    }
    {
      ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_out__llds_out_global_scalar_common_1[4])));
    }
    {
      ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InputStepsDataId_22, ll_backend__llds_out__llds_out_global__InputSteps_15);
    }
    {
      ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_0_37, &ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60);
    }
    {
      ll_backend__llds_out__llds_out_global__Var_75 = parse_tree__prog_data_pragma__eval_method_to_table_type_1_f_0(ll_backend__llds_out__llds_out_global__EvalMethod_12);
    }
    if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63 = ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60;
        if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit1_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

            {
              ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__ProcLabel_11, ll_backend__llds_out__llds_out_global__SizeLimit1_30);
            }
          }
        switch (ll_backend__llds_out__llds_out_global__Stats_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              {
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
              {
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
        }
        {
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InfoDataId_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_75);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumInputs_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumOutputs_14);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_global__OutputStepsA_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16, (MR_Integer) 0)));

        {
          ll_backend__llds_out__llds_out_global__output_table_steps_table_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__OutputStepsDataId_23, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
        }
        {
          ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_60_60, &ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63);
        }
        if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit1_219 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

            {
              ll_backend__llds_out__llds_out_global__output_table_tips_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__ProcLabel_11, ll_backend__llds_out__llds_out_global__SizeLimit1_219);
            }
          }
        switch (ll_backend__llds_out__llds_out_global__Stats_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 0:
            {
              {
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
              {
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26, ll_backend__llds_out__llds_out_global__InputSteps_15);
              }
              {
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
              }
              {
                ll_backend__llds_out__llds_out_global__output_table_step_stats_5_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28, ll_backend__llds_out__llds_out_global__OutputStepsA_29);
              }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\nstatic MR_ProcTableInfo ");
        }
        {
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InfoDataId_21);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) " = {\n");
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_75);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumInputs_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__NumOutputs_14);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "1,\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "(const MR_PseudoTypeInfo *) ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PTIVectorRval_17);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "(const MR_TypeParamLocns *) ");
    }
    {
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__TypeParamsRval_18);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{ 0 },\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "{\n");
    }
    {
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__InputStepsDataId_22);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ",\n");
    }
    if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL\n");
        }
      }
    else
      {
        {
          ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__OutputStepsDataId_23);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "},\n");
    }
    switch (ll_backend__llds_out__llds_out_global__Stats_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "NULL\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}}},\n");
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "{{{\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__CallStatsDataId_25);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "},{\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "0,\n");
          }
          {
            ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevCallStatsDataId_26);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "}},{{\n");
          }
          if ((ll_backend__llds_out__llds_out_global__MaybeOutputSteps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "NULL\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "},{\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "NULL\n");
              }
            }
          else
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__AnswerStatsDataId_27);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "},{\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "0,\n");
              }
              {
                ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__PrevAnswerStatsDataId_28);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
            }
          {
            mercury__io__write_string_3_p_0((MR_String) "}}},\n");
          }
        }
        break;
    }
    if ((ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "-1,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "NULL,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0\n");
        }
      }
    else
      {
        MR_Integer ll_backend__llds_out__llds_out_global__SizeLimit2_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__MaybeSizeLimit_19, (MR_Integer) 0)));

        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__SizeLimit2_35);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",\n");
        }
        {
          ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(ll_backend__llds_out__llds_out_global__Info_7, ll_backend__llds_out__llds_out_global__TipsDataId_24);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0,\n");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "0\n");
        }
      }
    {
      mercury__io__write_string_3_p_0((MR_String) "};\n");
    }
    {
      ll_backend__llds_out__llds_out_global__DeclId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_global__ProcLabel_11));
      MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_global__DeclId_36, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_global__DeclId_36, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_63_63, ll_backend__llds_out__llds_out_global__STATE_VARIABLE_DeclSet_38);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_global__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_global__wrapper_arg_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_global__succeeded;
    MR_Box ll_backend__llds_out__llds_out_global__closure = ll_backend__llds_out__llds_out_global__closure_arg;

    {
      ll_backend__llds_out__llds_out_global__succeeded = ll_backend__llds_out__llds_out_global__complexity_arg_is_profiled_1_p_0(((MR_Word) ll_backend__llds_out__llds_out_global__wrapper_arg_1));
    }
    return ll_backend__llds_out__llds_out_global__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_init_complexity_proc_list_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39;
            MR_Word ll_backend__llds_out__llds_out_global__Info_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Infos_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__llds_out__llds_out_global__ProcNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 0)));
            MR_String ll_backend__llds_out__llds_out_global__FullProcName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 1)));
            MR_Word ll_backend__llds_out__llds_out_global__ArgInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 2)));
            MR_Word ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13;
            MR_Integer ll_backend__llds_out__llds_out_global__Var_25;
            MR_Integer ll_backend__llds_out__llds_out_global__Var_29;
            MR_String ll_backend__llds_out__llds_out_global__Var_33;
            MR_String ll_backend__llds_out__llds_out_global__Var_42;

            {
              mercury__io__write_string_3_p_0((MR_String) "\tMR_init_complexity_proc(");
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", \"");
            }
            {
              backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(ll_backend__llds_out__llds_out_global__FullProcName_11);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\", ");
            }
            ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0;
            {
              mercury__list__filter_3_p_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, (MR_Word) &ll_backend__llds_out__llds_out_global_scalar_common_3[0], ll_backend__llds_out__llds_out_global__ArgInfos_12, &ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13);
            }
            {
              ll_backend__llds_out__llds_out_global__Var_25 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, ll_backend__llds_out__llds_out_global__ProfiledArgInfos_13);
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Var_25);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              ll_backend__llds_out__llds_out_global__Var_29 = mercury__list__length_1_f_0(ll_backend__llds_out__llds_out_global__TypeCtorInfo_39_39, ll_backend__llds_out__llds_out_global__ArgInfos_12);
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Var_29);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              ll_backend__llds_out__llds_out_global__Var_42 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
            {
              ll_backend__llds_out__llds_out_global__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", ll_backend__llds_out__llds_out_global__Var_42);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_33);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ");\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__Infos_8;

              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__llds_out__llds_out_global__output_complexity_arg_info_arrays_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_global__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_global__succeeded;

        if ((ll_backend__llds_out__llds_out_global__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_global__Info_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Infos_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_global__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__llds_out__llds_out_global__ProcNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_global__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 2)));
            MR_String ll_backend__llds_out__llds_out_global__Var_17;
            MR_Integer ll_backend__llds_out__llds_out_global__Var_21;
            MR_String ll_backend__llds_out__llds_out_global__Var_32;
            MR_String ll_backend__llds_out__llds_out_global__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_global__Info_7, (MR_Integer) 1)));

            {
              mercury__io__write_string_3_p_0((MR_String) "\nMR_ComplexityArgInfo ");
            }
            {
              ll_backend__llds_out__llds_out_global__Var_32 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_global__ProcNum_10);
            }
            {
              ll_backend__llds_out__llds_out_global__Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "MR_complexity_arg_info_", ll_backend__llds_out__llds_out_global__Var_32);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_global__Var_17);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "[");
            }
            {
              ll_backend__llds_out__llds_out_global__Var_21 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_complexity_arg_info_0, ll_backend__llds_out__llds_out_global__Args_12);
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_global__Var_21);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "] = {\n");
            }
            {
              ll_backend__llds_out__llds_out_global__output_complexity_arg_info_array_3_p_0(ll_backend__llds_out__llds_out_global__Args_12);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "};\n");
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1 = ll_backend__llds_out__llds_out_global__Infos_8;

              ll_backend__llds_out__llds_out_global__HeadVar__1_1 = ll_backend__llds_out__llds_out_global__next_value_of_HeadVar__1_1;
            }
            continue;
          }
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

/* :- end_module ll_backend.llds_out.llds_out_global. */
