/*
** Automatically generated from `dupproc.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module ll_backend.dupproc. */
/* :- implementation. */

/*
INIT mercury__ll_backend__dupproc__init
ENDINIT
*/

#include "ll_backend.dupproc.mih"


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
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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
#include "ll_backend.opt_util.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static MR_bool MR_CALL 
ll_backend__dupproc__disallowed_instr_1_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1);

static MR_bool MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0_1(
  MR_Box ll_backend__dupproc__closure_arg,
  MR_Box ll_backend__dupproc__wrapper_arg_1);

static void MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word ll_backend__dupproc__HeadVar__2_2,
  MR_Word * ll_backend__dupproc__HeadVar__3_3,
  MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4,
  MR_Word * ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5);

static void MR_CALL 
ll_backend__dupproc__standardize_proc_3_p_0(
  MR_Word ll_backend__dupproc__CProc_4,
  MR_Word * ll_backend__dupproc__StdCProc_5,
  MR_Word ll_backend__dupproc__DupProcMap_6);

static MR_bool MR_CALL 
ll_backend__dupproc__find_matching_model_proc_5_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word ll_backend__dupproc__Id_9,
  MR_Word ll_backend__dupproc__Proc_10,
  MR_Word ll_backend__dupproc__DupProcMap_11,
  MR_Word * ll_backend__dupproc__MatchingId_12);

static void MR_CALL 
ll_backend__dupproc__standardize_instr_3_p_0(
  MR_Word ll_backend__dupproc__Instr_4,
  MR_Word * ll_backend__dupproc__StdInstr_5,
  MR_Word ll_backend__dupproc__DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__standardize_instrs_3_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
  MR_Word ll_backend__dupproc__DupProcMap_3);

static void MR_CALL 
ll_backend__dupproc__standardize_rval_3_p_0(
  MR_Word ll_backend__dupproc__Rval_4,
  MR_Word * ll_backend__dupproc__StdRval_5,
  MR_Word ll_backend__dupproc__DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__standardize_maybe_code_addr_3_p_0(
  MR_Word ll_backend__dupproc__MaybeCodeAddr_4,
  MR_Word * ll_backend__dupproc__MaybeStdCodeAddr_5,
  MR_Word ll_backend__dupproc__DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__standardize_code_addr_3_p_0(
  MR_Word ll_backend__dupproc__CodeAddr_4,
  MR_Word * ll_backend__dupproc__StdCodeAddr_5,
  MR_Word ll_backend__dupproc__DupProcMap_6);

static void MR_CALL 
ll_backend__dupproc__standardize_maybe_labels_3_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
  MR_Word ll_backend__dupproc__HeadVar__3_3);

static void MR_CALL 
ll_backend__dupproc__standardize_label_3_p_0(
  MR_Word ll_backend__dupproc__Label_4,
  MR_Word * ll_backend__dupproc__StdLabel_5,
  MR_Word ll_backend__dupproc__DupProcMap_6);


static /* final */ const MR_Box ll_backend__dupproc_scalar_common_1[2][3];

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_2[1][2];

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_3[1][4];




static /* final */ const MR_Box ll_backend__dupproc_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__dupproc_scalar_common_3[0])),
    ((MR_Box) (ll_backend__dupproc__eliminate_dup_procs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};

static /* final */ const MR_Box ll_backend__dupproc_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_bool MR_CALL 
ll_backend__dupproc__disallowed_instr_1_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1)
{
  {
    MR_bool ll_backend__dupproc__succeeded;
    MR_Word ll_backend__dupproc__Instr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
    MR_String ll_backend__dupproc__Var_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));

    if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
      ll_backend__dupproc__succeeded = MR_TRUE;
    else
    if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
      ll_backend__dupproc__succeeded = MR_TRUE;
    else
      ll_backend__dupproc__succeeded = MR_FALSE;
    return ll_backend__dupproc__succeeded;
  }
}

void MR_CALL 
ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(
  MR_Word ll_backend__dupproc__IdProcs_5,
  MR_Word * ll_backend__dupproc__Procs_6,
  MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18,
  MR_Word * ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    if ((ll_backend__dupproc__IdProcs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__dupproc__Procs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18;
      }
    else
      {
        MR_Word ll_backend__dupproc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__IdProcs_5, (MR_Integer) 1)));
        MR_Word ll_backend__dupproc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__IdProcs_5, (MR_Integer) 0)));
        MR_Word ll_backend__dupproc__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_31, (MR_Integer) 1)));
        MR_Word ll_backend__dupproc__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_31, (MR_Integer) 0)));

        if ((ll_backend__dupproc__Var_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__dupproc__Procs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__Var_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            *ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18;
          }
        else
          {
            MR_Word ll_backend__dupproc__StdProc1_15;
            MR_Word ll_backend__dupproc__FinalIdProcsTail_16;
            MR_Word ll_backend__dupproc__FinalProcsTail_17;
            MR_Word ll_backend__dupproc__Var_21;
            MR_Word ll_backend__dupproc__Var_23;
            MR_Word ll_backend__dupproc__Instrs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 5)));
            MR_Word ll_backend__dupproc__StdInstrs_38;
            MR_String ll_backend__dupproc__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 0)));
            MR_Integer ll_backend__dupproc__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 1)));
            MR_Word ll_backend__dupproc__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 2)));
            MR_Word ll_backend__dupproc__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 3)));
            MR_Word ll_backend__dupproc__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 4)));
            MR_Word ll_backend__dupproc__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 6)));
            MR_Word ll_backend__dupproc__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 7)));
            MR_Word ll_backend__dupproc__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 8)));
            MR_String ll_backend__dupproc__Var_47;
            MR_Integer ll_backend__dupproc__Var_48;
            MR_Word ll_backend__dupproc__Var_49;
            MR_Word ll_backend__dupproc__Var_50;
            MR_Word ll_backend__dupproc__Var_51;
            MR_Word ll_backend__dupproc__Var_53;
            MR_Word ll_backend__dupproc__Var_54;
            MR_Word ll_backend__dupproc__Var_55;
            MR_Word ll_backend__dupproc__Var_52;

            {
              ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_37, &ll_backend__dupproc__StdInstrs_38, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18);
            }
            ll_backend__dupproc__Var_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 0)));
            ll_backend__dupproc__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 1)));
            ll_backend__dupproc__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 2)));
            ll_backend__dupproc__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 3)));
            ll_backend__dupproc__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 4)));
            ll_backend__dupproc__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 5)));
            ll_backend__dupproc__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 6)));
            ll_backend__dupproc__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 7)));
            ll_backend__dupproc__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_32, (MR_Integer) 8)));
            {
              ll_backend__dupproc__StdProc1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 0) = ((MR_Box) (ll_backend__dupproc__Var_47));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 1) = ((MR_Box) (ll_backend__dupproc__Var_48));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 2) = ((MR_Box) (ll_backend__dupproc__Var_49));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 3) = ((MR_Box) (ll_backend__dupproc__Var_50));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 4) = ((MR_Box) (ll_backend__dupproc__Var_51));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 5) = ((MR_Box) (ll_backend__dupproc__StdInstrs_38));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 6) = ((MR_Box) (ll_backend__dupproc__Var_53));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 7) = ((MR_Box) (ll_backend__dupproc__Var_54));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 8) = ((MR_Box) (ll_backend__dupproc__Var_55));
            }
            {
              ll_backend__dupproc__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_23, 0) = ((MR_Box) (ll_backend__dupproc__Var_33));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_23, 1) = ((MR_Box) (ll_backend__dupproc__StdProc1_15));
            }
            {
              ll_backend__dupproc__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__Var_21, 0) = ((MR_Box) (ll_backend__dupproc__Var_23));
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ll_backend__dupproc__eliminate_dup_procs_5_p_0(ll_backend__dupproc__Var_21, ll_backend__dupproc__Var_30, &ll_backend__dupproc__FinalIdProcsTail_16, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19);
            }
            {
              mercury__assoc_list__values_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__dupproc__FinalIdProcsTail_16, &ll_backend__dupproc__FinalProcsTail_17);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__dupproc__Procs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__Var_32));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__FinalProcsTail_17));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0_1(
  MR_Box ll_backend__dupproc__closure_arg,
  MR_Box ll_backend__dupproc__wrapper_arg_1)
{
  {
    MR_bool ll_backend__dupproc__succeeded;
    MR_Box ll_backend__dupproc__closure = ll_backend__dupproc__closure_arg;

    {
      ll_backend__dupproc__succeeded = ll_backend__dupproc__disallowed_instr_1_p_0(((MR_Word) ll_backend__dupproc__wrapper_arg_1));
    }
    return ll_backend__dupproc__succeeded;
  }
}

static void MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word ll_backend__dupproc__HeadVar__2_2,
  MR_Word * ll_backend__dupproc__HeadVar__3_3,
  MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4,
  MR_Word * ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    if ((ll_backend__dupproc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__dupproc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4;
      }
    else
      {
        MR_Word ll_backend__dupproc__Id_11;
        MR_Word ll_backend__dupproc__Proc0_12;
        MR_Word ll_backend__dupproc__IdProcs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__dupproc__Proc_14;
        MR_Word ll_backend__dupproc__IdProcs_15;
        MR_Word ll_backend__dupproc__ModelStdProcs_20;
        MR_Word ll_backend__dupproc__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__dupproc__Var_25;
        MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27;
        MR_Word ll_backend__dupproc__MatchingId_17;
        MR_Word ll_backend__dupproc__ProcPrime_19;
        MR_Word ll_backend__dupproc__TypeCtorInfo_43_81;
        MR_Word ll_backend__dupproc__MaybeProc_18;
        MR_Word ll_backend__dupproc__Var_26;
        MR_Word ll_backend__dupproc__Instrs0_45;
        MR_Word ll_backend__dupproc__LabelInstr_46;
        MR_Word ll_backend__dupproc__LaterInstrs_48;
        MR_Word ll_backend__dupproc__TargetLabel_49;
        MR_Word ll_backend__dupproc__Redirect_50;
        MR_Word ll_backend__dupproc__DisallowedInstrs_51;
        MR_Integer ll_backend__dupproc__NumLaterInstrs_52;
        MR_Word ll_backend__dupproc__Var_55;
        MR_Word ll_backend__dupproc__Var_56;
        MR_Word ll_backend__dupproc__Var_57;
        MR_String ll_backend__dupproc__Var_58;
        MR_Word ll_backend__dupproc__Var_59;
        MR_String ll_backend__dupproc__Var_32;
        MR_Integer ll_backend__dupproc__Var_33;
        MR_Word ll_backend__dupproc__Var_34;
        MR_Word ll_backend__dupproc__Var_35;
        MR_Word ll_backend__dupproc__Var_36;
        MR_Word ll_backend__dupproc__Var_37;
        MR_Word ll_backend__dupproc__Var_38;
        MR_Word ll_backend__dupproc__Var_39;
        MR_String ll_backend__dupproc__Var_63;
        MR_Integer ll_backend__dupproc__Var_64;
        MR_Word ll_backend__dupproc__Var_65;
        MR_Word ll_backend__dupproc__Var_66;
        MR_Word ll_backend__dupproc__Var_67;
        MR_Word ll_backend__dupproc__Var_68;
        MR_Word ll_backend__dupproc__Var_69;
        MR_Word ll_backend__dupproc__Var_70;
        MR_Word ll_backend__dupproc___Comments_47;
        MR_Integer ll_backend__dupproc__Var_60;

        ll_backend__dupproc__Id_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_24, (MR_Integer) 0)));
        ll_backend__dupproc__Proc0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_24, (MR_Integer) 1)));
        ll_backend__dupproc__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 0)));
        ll_backend__dupproc__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 1)));
        ll_backend__dupproc__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 2)));
        ll_backend__dupproc__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 3)));
        ll_backend__dupproc__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 4)));
        ll_backend__dupproc__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 5)));
        ll_backend__dupproc__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 6)));
        ll_backend__dupproc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 7)));
        ll_backend__dupproc__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 8)));
        ll_backend__dupproc__succeeded = (ll_backend__dupproc__Var_26 == (MR_Integer) 0);
        if (ll_backend__dupproc__succeeded)
          {
            {
              ll_backend__dupproc__succeeded = ll_backend__dupproc__find_matching_model_proc_5_p_0(ll_backend__dupproc__HeadVar__1_1, ll_backend__dupproc__Id_11, ll_backend__dupproc__Proc0_12, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4, &ll_backend__dupproc__MatchingId_17);
            }
            if (ll_backend__dupproc__succeeded)
              {
                ll_backend__dupproc__Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 0)));
                ll_backend__dupproc__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 1)));
                ll_backend__dupproc__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 2)));
                ll_backend__dupproc__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 3)));
                ll_backend__dupproc__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 4)));
                ll_backend__dupproc__Instrs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 5)));
                ll_backend__dupproc__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 6)));
                ll_backend__dupproc__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 7)));
                ll_backend__dupproc__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 8)));
                {
                  ll_backend__opt_util__get_prologue_4_p_0(ll_backend__dupproc__Instrs0_45, &ll_backend__dupproc__LabelInstr_46, &ll_backend__dupproc___Comments_47, &ll_backend__dupproc__LaterInstrs_48);
                }
                ll_backend__dupproc__Var_55 = (MR_Integer) 1;
                ll_backend__dupproc__Var_58 = (MR_String) "Redirect to procedure with identical body";
                ll_backend__dupproc__Var_59 = (MR_Word) &ll_backend__dupproc_scalar_common_1[1];
                ll_backend__dupproc__TypeCtorInfo_43_81 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
                {
                  ll_backend__dupproc__TargetLabel_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__dupproc__TargetLabel_49, 0) = ((MR_Box) (ll_backend__dupproc__Var_55));
                  MR_hl_field(MR_mktag(1), ll_backend__dupproc__TargetLabel_49, 1) = ((MR_Box) (ll_backend__dupproc__MatchingId_17));
                }
                {
                  ll_backend__dupproc__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ll_backend__dupproc__Var_57, 0) = ((MR_Box) (ll_backend__dupproc__TargetLabel_49));
                }
                {
                  ll_backend__dupproc__Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ll_backend__dupproc__Var_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                  MR_hl_field(MR_mktag(3), ll_backend__dupproc__Var_56, 1) = ((MR_Box) (ll_backend__dupproc__Var_57));
                }
                {
                  ll_backend__dupproc__Redirect_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ll_backend__dupproc__Redirect_50, 0) = ((MR_Box) (ll_backend__dupproc__Var_56));
                  MR_hl_field(MR_mktag(0), ll_backend__dupproc__Redirect_50, 1) = ((MR_Box) (ll_backend__dupproc__Var_58));
                }
                {
                  mercury__list__filter_3_p_0(ll_backend__dupproc__TypeCtorInfo_43_81, ll_backend__dupproc__Var_59, ll_backend__dupproc__LaterInstrs_48, &ll_backend__dupproc__DisallowedInstrs_51);
                }
                {
                  mercury__list__length_2_p_0(ll_backend__dupproc__TypeCtorInfo_43_81, ll_backend__dupproc__LaterInstrs_48, &ll_backend__dupproc__NumLaterInstrs_52);
                }
                ll_backend__dupproc__succeeded = (ll_backend__dupproc__DisallowedInstrs_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (ll_backend__dupproc__succeeded)
                  {
                    ll_backend__dupproc__Var_60 = (MR_Integer) 6;
                    ll_backend__dupproc__succeeded = (ll_backend__dupproc__NumLaterInstrs_52 < ll_backend__dupproc__Var_60);
                  }
                if (ll_backend__dupproc__succeeded)
                  ll_backend__dupproc__MaybeProc_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  {
                    MR_Word ll_backend__dupproc__Instrs_53;
                    MR_Word ll_backend__dupproc__Proc_54;
                    MR_Word ll_backend__dupproc__Var_61;
                    MR_String ll_backend__dupproc__Var_71;
                    MR_Integer ll_backend__dupproc__Var_72;
                    MR_Word ll_backend__dupproc__Var_73;
                    MR_Word ll_backend__dupproc__Var_74;
                    MR_Word ll_backend__dupproc__Var_75;
                    MR_Word ll_backend__dupproc__Var_77;
                    MR_Word ll_backend__dupproc__Var_78;
                    MR_Word ll_backend__dupproc__Var_79;
                    MR_Word ll_backend__dupproc__Var_76;

                    {
                      ll_backend__dupproc__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__Var_61, 0) = ((MR_Box) (ll_backend__dupproc__Redirect_50));
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ll_backend__dupproc__Instrs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__Instrs_53, 0) = ((MR_Box) (ll_backend__dupproc__LabelInstr_46));
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__Instrs_53, 1) = ((MR_Box) (ll_backend__dupproc__Var_61));
                    }
                    ll_backend__dupproc__Var_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 0)));
                    ll_backend__dupproc__Var_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 1)));
                    ll_backend__dupproc__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 2)));
                    ll_backend__dupproc__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 3)));
                    ll_backend__dupproc__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 4)));
                    ll_backend__dupproc__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 5)));
                    ll_backend__dupproc__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 6)));
                    ll_backend__dupproc__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 7)));
                    ll_backend__dupproc__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 8)));
                    {
                      ll_backend__dupproc__Proc_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 0) = ((MR_Box) (ll_backend__dupproc__Var_71));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 1) = ((MR_Box) (ll_backend__dupproc__Var_72));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 2) = ((MR_Box) (ll_backend__dupproc__Var_73));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 3) = ((MR_Box) (ll_backend__dupproc__Var_74));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 4) = ((MR_Box) (ll_backend__dupproc__Var_75));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 5) = ((MR_Box) (ll_backend__dupproc__Instrs_53));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 6) = ((MR_Box) (ll_backend__dupproc__Var_77));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 7) = ((MR_Box) (ll_backend__dupproc__Var_78));
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 8) = ((MR_Box) (ll_backend__dupproc__Var_79));
                    }
                    {
                      ll_backend__dupproc__MaybeProc_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeProc_18, 0) = ((MR_Box) (ll_backend__dupproc__Proc_54));
                    }
                  }
                ll_backend__dupproc__succeeded = ((MR_tag((MR_Word) ll_backend__dupproc__MaybeProc_18)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__dupproc__succeeded)
                  ll_backend__dupproc__ProcPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeProc_18, (MR_Integer) 0)));
              }
          }
        if (ll_backend__dupproc__succeeded)
          {
            MR_Word ll_backend__dupproc__TypeCtorInfo_40_40;

            ll_backend__dupproc__Proc_14 = ll_backend__dupproc__ProcPrime_19;
            ll_backend__dupproc__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
            {
              mercury__map__det_insert_4_p_0(ll_backend__dupproc__TypeCtorInfo_40_40, ll_backend__dupproc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__dupproc__Id_11)), ((MR_Box) (ll_backend__dupproc__MatchingId_17)), ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4, &ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27);
            }
            ll_backend__dupproc__ModelStdProcs_20 = ll_backend__dupproc__HeadVar__1_1;
          }
        else
          {
            MR_Word ll_backend__dupproc__StdProc0_21;
            MR_Word ll_backend__dupproc__Var_28;
            MR_Word ll_backend__dupproc__Var_29;

            ll_backend__dupproc__Proc_14 = ll_backend__dupproc__Proc0_12;
            {
              ll_backend__dupproc__standardize_proc_3_p_0(ll_backend__dupproc__Proc0_12, &ll_backend__dupproc__StdProc0_21, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4);
            }
            {
              ll_backend__dupproc__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_29, 0) = ((MR_Box) (ll_backend__dupproc__Id_11));
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_29, 1) = ((MR_Box) (ll_backend__dupproc__StdProc0_21));
            }
            {
              ll_backend__dupproc__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__Var_28, 0) = ((MR_Box) (ll_backend__dupproc__Var_29));
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_1((MR_Word) &ll_backend__dupproc_scalar_common_1[0], ll_backend__dupproc__HeadVar__1_1, ll_backend__dupproc__Var_28, &ll_backend__dupproc__ModelStdProcs_20);
            }
            ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4;
          }
        {
          ll_backend__dupproc__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_25, 0) = ((MR_Box) (ll_backend__dupproc__Id_11));
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_25, 1) = ((MR_Box) (ll_backend__dupproc__Proc_14));
        }
        {
          ll_backend__dupproc__eliminate_dup_procs_5_p_0(ll_backend__dupproc__ModelStdProcs_20, ll_backend__dupproc__IdProcs0_13, &ll_backend__dupproc__IdProcs_15, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__dupproc__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__Var_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__IdProcs_15));
        }
      }
  }
}

static void MR_CALL 
ll_backend__dupproc__standardize_proc_3_p_0(
  MR_Word ll_backend__dupproc__CProc_4,
  MR_Word * ll_backend__dupproc__StdCProc_5,
  MR_Word ll_backend__dupproc__DupProcMap_6)
{
  {
    MR_bool ll_backend__dupproc__succeeded;
    MR_Word ll_backend__dupproc__Instrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 5)));
    MR_Word ll_backend__dupproc__StdInstrs_8;
    MR_String ll_backend__dupproc__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 0)));
    MR_Integer ll_backend__dupproc__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 1)));
    MR_Word ll_backend__dupproc__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 2)));
    MR_Word ll_backend__dupproc__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 3)));
    MR_Word ll_backend__dupproc__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 4)));
    MR_Word ll_backend__dupproc__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 6)));
    MR_Word ll_backend__dupproc__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 7)));
    MR_Word ll_backend__dupproc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 8)));
    MR_String ll_backend__dupproc__Var_17;
    MR_Integer ll_backend__dupproc__Var_18;
    MR_Word ll_backend__dupproc__Var_19;
    MR_Word ll_backend__dupproc__Var_20;
    MR_Word ll_backend__dupproc__Var_21;
    MR_Word ll_backend__dupproc__Var_23;
    MR_Word ll_backend__dupproc__Var_24;
    MR_Word ll_backend__dupproc__Var_25;
    MR_Word ll_backend__dupproc__Var_22;

    {
      ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_7, &ll_backend__dupproc__StdInstrs_8, ll_backend__dupproc__DupProcMap_6);
    }
    ll_backend__dupproc__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 0)));
    ll_backend__dupproc__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 1)));
    ll_backend__dupproc__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 2)));
    ll_backend__dupproc__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 3)));
    ll_backend__dupproc__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 4)));
    ll_backend__dupproc__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 5)));
    ll_backend__dupproc__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 6)));
    ll_backend__dupproc__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 7)));
    ll_backend__dupproc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 8)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__dupproc__StdCProc_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupproc__Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__dupproc__Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__dupproc__Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__dupproc__Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__dupproc__Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__dupproc__StdInstrs_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__dupproc__Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__dupproc__Var_24));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__dupproc__Var_25));
    }
  }
}

static MR_bool MR_CALL 
ll_backend__dupproc__find_matching_model_proc_5_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word ll_backend__dupproc__Id_9,
  MR_Word ll_backend__dupproc__Proc_10,
  MR_Word ll_backend__dupproc__DupProcMap_11,
  MR_Word * ll_backend__dupproc__MatchingId_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__dupproc__succeeded = ((MR_tag((MR_Word) ll_backend__dupproc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word ll_backend__dupproc__TypeCtorInfo_34_34;
        MR_Word ll_backend__dupproc__ModelId_6;
        MR_Word ll_backend__dupproc__ModelStdProc_7;
        MR_Word ll_backend__dupproc__ModelIdProcs_8;
        MR_Word ll_backend__dupproc__AugDupProcMap_13;
        MR_Word ll_backend__dupproc__StdInstrs_15;
        MR_Word ll_backend__dupproc__ModelStdInstrs_16;
        MR_Word ll_backend__dupproc__Var_17;
        MR_Word ll_backend__dupproc__Instrs_39;
        MR_String ll_backend__dupproc__Var_41;
        MR_Integer ll_backend__dupproc__Var_42;
        MR_Word ll_backend__dupproc__Var_43;
        MR_Word ll_backend__dupproc__Var_44;
        MR_Word ll_backend__dupproc__Var_45;
        MR_Word ll_backend__dupproc__Var_46;
        MR_Word ll_backend__dupproc__Var_47;
        MR_Word ll_backend__dupproc__Var_48;
        MR_String ll_backend__dupproc__Var_26;
        MR_Integer ll_backend__dupproc__Var_27;
        MR_Word ll_backend__dupproc__Var_28;
        MR_Word ll_backend__dupproc__Var_29;
        MR_Word ll_backend__dupproc__Var_30;
        MR_Word ll_backend__dupproc__Var_31;
        MR_Word ll_backend__dupproc__Var_32;
        MR_Word ll_backend__dupproc__Var_33;
        MR_Word ll_backend__dupproc__TypeInfo_35_35;

        if (ll_backend__dupproc__succeeded)
          {
            ll_backend__dupproc__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
            ll_backend__dupproc__ModelIdProcs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));
            ll_backend__dupproc__ModelId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_17, (MR_Integer) 0)));
            ll_backend__dupproc__ModelStdProc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_17, (MR_Integer) 1)));
            ll_backend__dupproc__TypeCtorInfo_34_34 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
            {
              mercury__map__det_insert_4_p_0(ll_backend__dupproc__TypeCtorInfo_34_34, ll_backend__dupproc__TypeCtorInfo_34_34, ((MR_Box) (ll_backend__dupproc__Id_9)), ((MR_Box) (ll_backend__dupproc__ModelId_6)), ll_backend__dupproc__DupProcMap_11, &ll_backend__dupproc__AugDupProcMap_13);
            }
            ll_backend__dupproc__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 0)));
            ll_backend__dupproc__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 1)));
            ll_backend__dupproc__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 2)));
            ll_backend__dupproc__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 3)));
            ll_backend__dupproc__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 4)));
            ll_backend__dupproc__Instrs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 5)));
            ll_backend__dupproc__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 6)));
            ll_backend__dupproc__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 7)));
            ll_backend__dupproc__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 8)));
            {
              ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_39, &ll_backend__dupproc__StdInstrs_15, ll_backend__dupproc__AugDupProcMap_13);
            }
            ll_backend__dupproc__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 0)));
            ll_backend__dupproc__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 1)));
            ll_backend__dupproc__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 2)));
            ll_backend__dupproc__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 3)));
            ll_backend__dupproc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 4)));
            ll_backend__dupproc__ModelStdInstrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 5)));
            ll_backend__dupproc__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 6)));
            ll_backend__dupproc__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 7)));
            ll_backend__dupproc__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 8)));
            ll_backend__dupproc__TypeInfo_35_35 = (MR_Word) &ll_backend__dupproc_scalar_common_2[0];
            {
              ll_backend__dupproc__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupproc__TypeInfo_35_35, ((MR_Box) (ll_backend__dupproc__StdInstrs_15)), ((MR_Box) (ll_backend__dupproc__ModelStdInstrs_16)));
            }
            if (ll_backend__dupproc__succeeded)
              {
                *ll_backend__dupproc__MatchingId_12 = ll_backend__dupproc__ModelId_6;
                ll_backend__dupproc__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__dupproc__next_value_of_HeadVar__1_1 = ll_backend__dupproc__ModelIdProcs_8;

                  ll_backend__dupproc__HeadVar__1_1 = ll_backend__dupproc__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return ll_backend__dupproc__succeeded;
      }
      break;
    }
}

static void MR_CALL 
ll_backend__dupproc__standardize_instr_3_p_0(
  MR_Word ll_backend__dupproc__Instr_4,
  MR_Word * ll_backend__dupproc__StdInstr_5,
  MR_Word ll_backend__dupproc__DupProcMap_6)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__dupproc__StdInstr_5 = ll_backend__dupproc__Instr_4;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__dupproc__StdInstr_5 = ll_backend__dupproc__Instr_4;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__dupproc__NumIntTemps_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Integer ll_backend__dupproc__NumFloatTemps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupproc__StdInstrs_10;

              {
                ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_9, &ll_backend__dupproc__StdInstrs_10, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__NumIntTemps_7));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__NumFloatTemps_8));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdInstrs_10));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__dupproc__Lval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdRval_13;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_12, &ll_backend__dupproc__StdRval_13, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_11));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRval_13));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__dupproc__Lval_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__Rval_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdRval_97;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_96, &ll_backend__dupproc__StdRval_97, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_95));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRval_97));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__dupproc__Target_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__Cont_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__LiveInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupproc__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 4)));
              MR_Word ll_backend__dupproc__GoalPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 5)));
              MR_Word ll_backend__dupproc__Model_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 6)));
              MR_Word ll_backend__dupproc__StdTarget_20;
              MR_Word ll_backend__dupproc__StdCont_21;

              {
                ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Target_14, &ll_backend__dupproc__StdTarget_20, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Cont_15, &ll_backend__dupproc__StdCont_21, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdTarget_20));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdCont_21));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__LiveInfo_16));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__dupproc__Context_17));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__dupproc__GoalPath_18));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__dupproc__Model_19));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__dupproc__FrameInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__MaybeCodeAddr_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdFrameInfo_25;
              MR_Word ll_backend__dupproc__MaybeStdCodeAddr_28;

              if (((MR_tag((MR_Word) ll_backend__dupproc__FrameInfo_22)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Integer ll_backend__dupproc__NumSlots_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__FrameInfo_22, (MR_Integer) 1)));
                  MR_String ll_backend__dupproc__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__FrameInfo_22, (MR_Integer) 0)));

                  {
                    ll_backend__dupproc__StdFrameInfo_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdFrameInfo_25, 0) = ((MR_Box) ((MR_String) ""));
                    MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdFrameInfo_25, 1) = ((MR_Box) (ll_backend__dupproc__NumSlots_27));
                  }
                }
              else
                ll_backend__dupproc__StdFrameInfo_25 = ll_backend__dupproc__FrameInfo_22;
              {
                ll_backend__dupproc__standardize_maybe_code_addr_3_p_0(ll_backend__dupproc__MaybeCodeAddr_23, &ll_backend__dupproc__MaybeStdCodeAddr_28, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdFrameInfo_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__MaybeStdCodeAddr_28));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__dupproc__Label_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__StdLabel_30;

              {
                ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_29, &ll_backend__dupproc__StdLabel_30, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdLabel_30));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__dupproc__Target_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__StdTarget_99;

              {
                ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Target_98, &ll_backend__dupproc__StdTarget_99, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdTarget_99));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__dupproc__Targets_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdTargets_32;
              MR_Word ll_backend__dupproc__Rval_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));

              {
                ll_backend__dupproc__standardize_maybe_labels_3_p_0(ll_backend__dupproc__Targets_31, &ll_backend__dupproc__StdTargets_32, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Rval_100));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdTargets_32));
              }
            }
            break;
          case (MR_Integer) 8:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
          case (MR_Integer) 18:
          case (MR_Integer) 19:
          case (MR_Integer) 20:
          case (MR_Integer) 21:
          case (MR_Integer) 22:
          case (MR_Integer) 23:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 28:
          case (MR_Integer) 31:
            *ll_backend__dupproc__StdInstr_5 = ll_backend__dupproc__Instr_4;
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__dupproc__Rval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__StdRval_102;
              MR_Word ll_backend__dupproc__Target_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdTarget_104;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_101, &ll_backend__dupproc__StdRval_102, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Target_103, &ll_backend__dupproc__StdTarget_104, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdRval_102));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdTarget_104));
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_Word ll_backend__dupproc__Kind_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
              MR_Integer ll_backend__dupproc__NumSlots_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_String ll_backend__dupproc__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__NumSlots_105));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_String) ""));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__Kind_34));
              }
            }
            break;
          case (MR_Integer) 27:
            *ll_backend__dupproc__StdInstr_5 = ll_backend__dupproc__Instr_4;
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__dupproc__Child_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdChild_36;
              MR_Word ll_backend__dupproc__Lval_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));

              {
                ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Child_35, &ll_backend__dupproc__StdChild_36, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_106));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdChild_36));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__dupproc__Lval_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__Label_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdLabel_109;

              {
                ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_108, &ll_backend__dupproc__StdLabel_109, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_107));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdLabel_109));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__dupproc__Lval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__Rval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__StdRval_112;
              MR_Word ll_backend__dupproc__Label_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupproc__StdLabel_114;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_111, &ll_backend__dupproc__StdRval_112, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_113, &ll_backend__dupproc__StdLabel_114, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdRval_112));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__Lval_110));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdLabel_114));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__dupproc__LCRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__LCSRval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdLCRval_49;
              MR_Word ll_backend__dupproc__StdLCSRval_50;
              MR_Word ll_backend__dupproc__Label_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupproc__StdLabel_116;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCRval_47, &ll_backend__dupproc__StdLCRval_49, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCSRval_48, &ll_backend__dupproc__StdLCSRval_50, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_115, &ll_backend__dupproc__StdLabel_116, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdLCRval_49));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdLCSRval_50));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdLabel_116));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__dupproc__LCRval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__LCSRval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdLCRval_119;
              MR_Word ll_backend__dupproc__StdLCSRval_120;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCRval_117, &ll_backend__dupproc__StdLCRval_119, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCSRval_118, &ll_backend__dupproc__StdLCSRval_120, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdInstr_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdLCRval_119));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdLCSRval_120));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__dupproc__standardize_instrs_3_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
  MR_Word ll_backend__dupproc__DupProcMap_3)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    if ((ll_backend__dupproc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__dupproc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__dupproc__Instr_5;
        MR_Word ll_backend__dupproc__Instrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__dupproc__StdInstr_8;
        MR_Word ll_backend__dupproc__StdInstrs_9;
        MR_Word ll_backend__dupproc__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__dupproc__Var_12;
        MR_String ll_backend__dupproc__Var_6;

        ll_backend__dupproc__Instr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_11, (MR_Integer) 0)));
        ll_backend__dupproc__Var_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_11, (MR_Integer) 1)));
        {
          ll_backend__dupproc__standardize_instr_3_p_0(ll_backend__dupproc__Instr_5, &ll_backend__dupproc__StdInstr_8, ll_backend__dupproc__DupProcMap_3);
        }
        {
          ll_backend__dupproc__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_12, 0) = ((MR_Box) (ll_backend__dupproc__StdInstr_8));
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__Var_12, 1) = ((MR_Box) ((MR_String) ""));
        }
        {
          ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_7, &ll_backend__dupproc__StdInstrs_9, ll_backend__dupproc__DupProcMap_3);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__dupproc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__Var_12));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__StdInstrs_9));
        }
      }
  }
}

static void MR_CALL 
ll_backend__dupproc__standardize_rval_3_p_0(
  MR_Word ll_backend__dupproc__Rval_4,
  MR_Word * ll_backend__dupproc__StdRval_5,
  MR_Word ll_backend__dupproc__DupProcMap_6)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        *ll_backend__dupproc__StdRval_5 = ll_backend__dupproc__Rval_4;
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupproc", (MR_String) "predicate \140ll_backend.dupproc.standardize_rval\'/3", (MR_String) "var");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
            *ll_backend__dupproc__StdRval_5 = ll_backend__dupproc__Rval_4;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__dupproc__Const_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__StdConst_14;

              switch (MR_tag((MR_Word) ll_backend__dupproc__Const_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__dupproc__StdConst_14 = ll_backend__dupproc__Const_13;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ll_backend__dupproc__StdConst_14 = ll_backend__dupproc__Const_13;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Const_13, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                    case (MR_Integer) 11:
                      ll_backend__dupproc__StdConst_14 = ll_backend__dupproc__Const_13;
                      break;
                    case (MR_Integer) 10:
                      {
                        MR_Word ll_backend__dupproc__CodeAddr_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Const_13, (MR_Integer) 1)));
                        MR_Word ll_backend__dupproc__StdCodeAddr_45;

                        switch (MR_tag((MR_Word) ll_backend__dupproc__CodeAddr_44)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            ll_backend__dupproc__StdCodeAddr_45 = ll_backend__dupproc__CodeAddr_44;
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word ll_backend__dupproc__Label_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__CodeAddr_44, (MR_Integer) 0)));
                              MR_Word ll_backend__dupproc__StdLabel_50;

                              {
                                ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_49, &ll_backend__dupproc__StdLabel_50, ll_backend__dupproc__DupProcMap_6);
                              }
                              {
                                ll_backend__dupproc__StdCodeAddr_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdCodeAddr_45, 0) = ((MR_Box) (ll_backend__dupproc__StdLabel_50));
                              }
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word ll_backend__dupproc__ProcLabel_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__dupproc__CodeAddr_44, (MR_Integer) 0)));
                              MR_Word ll_backend__dupproc__StdProcLabel_52;
                              MR_Word ll_backend__dupproc__FoundProcLabel_59;
                              MR_Word ll_backend__dupproc__TypeCtorInfo_8_60 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
                              MR_Box ll_backend__dupproc__conv0_FoundProcLabel_59;

                              {
                                ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_60, ll_backend__dupproc__TypeCtorInfo_8_60, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_51)), &ll_backend__dupproc__conv0_FoundProcLabel_59);
                              }
                              if (ll_backend__dupproc__succeeded)
                                {
                                  ll_backend__dupproc__FoundProcLabel_59 = ((MR_Word) ll_backend__dupproc__conv0_FoundProcLabel_59);
                                  ll_backend__dupproc__succeeded = MR_TRUE;
                                }
                              if (ll_backend__dupproc__succeeded)
                                ll_backend__dupproc__StdProcLabel_52 = ll_backend__dupproc__FoundProcLabel_59;
                              else
                                ll_backend__dupproc__StdProcLabel_52 = ll_backend__dupproc__ProcLabel_51;
                              {
                                ll_backend__dupproc__StdCodeAddr_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), ll_backend__dupproc__StdCodeAddr_45, 0) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_52));
                              }
                            }
                            break;
                          case (MR_Integer) 3:
                            ll_backend__dupproc__StdCodeAddr_45 = ll_backend__dupproc__CodeAddr_44;
                            break;
                        }
                        {
                          ll_backend__dupproc__StdConst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__dupproc__StdConst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                          MR_hl_field(MR_mktag(3), ll_backend__dupproc__StdConst_14, 1) = ((MR_Box) (ll_backend__dupproc__StdCodeAddr_45));
                        }
                      }
                      break;
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdRval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdConst_14));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__dupproc__Unop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__RvalL_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdRvalL_17;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__RvalL_16, &ll_backend__dupproc__StdRvalL_17, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdRval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Unop_15));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRvalL_17));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__dupproc__Binop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 1)));
              MR_Word ll_backend__dupproc__RvalR_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 3)));
              MR_Word ll_backend__dupproc__StdRvalR_20;
              MR_Word ll_backend__dupproc__RvalL_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 2)));
              MR_Word ll_backend__dupproc__StdRvalL_25;

              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__RvalL_24, &ll_backend__dupproc__StdRvalL_25, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__RvalR_19, &ll_backend__dupproc__StdRvalR_20, ll_backend__dupproc__DupProcMap_6);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__dupproc__StdRval_5 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Binop_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRvalL_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdRvalR_20));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__dupproc__standardize_maybe_code_addr_3_p_0(
  MR_Word ll_backend__dupproc__MaybeCodeAddr_4,
  MR_Word * ll_backend__dupproc__MaybeStdCodeAddr_5,
  MR_Word ll_backend__dupproc__DupProcMap_6)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    if ((ll_backend__dupproc__MaybeCodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__dupproc__MaybeStdCodeAddr_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__dupproc__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeCodeAddr_4, (MR_Integer) 0)));
        MR_Word ll_backend__dupproc__StdCodeAddr_8;

        switch (MR_tag((MR_Word) ll_backend__dupproc__CodeAddr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__dupproc__StdCodeAddr_8 = ll_backend__dupproc__CodeAddr_7;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__dupproc__Label_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__CodeAddr_7, (MR_Integer) 0)));
              MR_Word ll_backend__dupproc__StdLabel_13;

              {
                ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_12, &ll_backend__dupproc__StdLabel_13, ll_backend__dupproc__DupProcMap_6);
              }
              {
                ll_backend__dupproc__StdCodeAddr_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdCodeAddr_8, 0) = ((MR_Box) (ll_backend__dupproc__StdLabel_13));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__dupproc__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__dupproc__CodeAddr_7, (MR_Integer) 0)));
              MR_Word ll_backend__dupproc__StdProcLabel_15;
              MR_Word ll_backend__dupproc__FoundProcLabel_22;
              MR_Word ll_backend__dupproc__TypeCtorInfo_8_23 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
              MR_Box ll_backend__dupproc__conv0_FoundProcLabel_22;

              {
                ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_23, ll_backend__dupproc__TypeCtorInfo_8_23, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_14)), &ll_backend__dupproc__conv0_FoundProcLabel_22);
              }
              if (ll_backend__dupproc__succeeded)
                {
                  ll_backend__dupproc__FoundProcLabel_22 = ((MR_Word) ll_backend__dupproc__conv0_FoundProcLabel_22);
                  ll_backend__dupproc__succeeded = MR_TRUE;
                }
              if (ll_backend__dupproc__succeeded)
                ll_backend__dupproc__StdProcLabel_15 = ll_backend__dupproc__FoundProcLabel_22;
              else
                ll_backend__dupproc__StdProcLabel_15 = ll_backend__dupproc__ProcLabel_14;
              {
                ll_backend__dupproc__StdCodeAddr_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ll_backend__dupproc__StdCodeAddr_8, 0) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_15));
              }
            }
            break;
          case (MR_Integer) 3:
            ll_backend__dupproc__StdCodeAddr_8 = ll_backend__dupproc__CodeAddr_7;
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__dupproc__MaybeStdCodeAddr_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__StdCodeAddr_8));
        }
      }
  }
}

static void MR_CALL 
ll_backend__dupproc__standardize_code_addr_3_p_0(
  MR_Word ll_backend__dupproc__CodeAddr_4,
  MR_Word * ll_backend__dupproc__StdCodeAddr_5,
  MR_Word ll_backend__dupproc__DupProcMap_6)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    switch (MR_tag((MR_Word) ll_backend__dupproc__CodeAddr_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__dupproc__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__CodeAddr_4, (MR_Integer) 0)));
          MR_Word ll_backend__dupproc__StdLabel_8;

          {
            ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_7, &ll_backend__dupproc__StdLabel_8, ll_backend__dupproc__DupProcMap_6);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__dupproc__StdCodeAddr_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__StdLabel_8));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__dupproc__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__dupproc__CodeAddr_4, (MR_Integer) 0)));
          MR_Word ll_backend__dupproc__StdProcLabel_10;
          MR_Word ll_backend__dupproc__FoundProcLabel_17;
          MR_Word ll_backend__dupproc__TypeCtorInfo_8_18 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
          MR_Box ll_backend__dupproc__conv0_FoundProcLabel_17;

          {
            ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_18, ll_backend__dupproc__TypeCtorInfo_8_18, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_9)), &ll_backend__dupproc__conv0_FoundProcLabel_17);
          }
          if (ll_backend__dupproc__succeeded)
            {
              ll_backend__dupproc__FoundProcLabel_17 = ((MR_Word) ll_backend__dupproc__conv0_FoundProcLabel_17);
              ll_backend__dupproc__succeeded = MR_TRUE;
            }
          if (ll_backend__dupproc__succeeded)
            ll_backend__dupproc__StdProcLabel_10 = ll_backend__dupproc__FoundProcLabel_17;
          else
            ll_backend__dupproc__StdProcLabel_10 = ll_backend__dupproc__ProcLabel_9;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__dupproc__StdCodeAddr_5 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_10));
          }
        }
        break;
      case (MR_Integer) 3:
        *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
        break;
    }
  }
}

static void MR_CALL 
ll_backend__dupproc__standardize_maybe_labels_3_p_0(
  MR_Word ll_backend__dupproc__HeadVar__1_1,
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
  MR_Word ll_backend__dupproc__HeadVar__3_3)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    if ((ll_backend__dupproc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__dupproc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__dupproc__MaybeLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__dupproc__MaybeLabels_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__dupproc__StdMaybeLabel_7;
        MR_Word ll_backend__dupproc__StdMaybeLabels_8;

        if ((ll_backend__dupproc__MaybeLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          ll_backend__dupproc__StdMaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word ll_backend__dupproc__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeLabel_5, (MR_Integer) 0)));
            MR_Word ll_backend__dupproc__StdLabel_11;

            {
              ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_10, &ll_backend__dupproc__StdLabel_11, ll_backend__dupproc__HeadVar__3_3);
            }
            {
              ll_backend__dupproc__StdMaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdMaybeLabel_7, 0) = ((MR_Box) (ll_backend__dupproc__StdLabel_11));
            }
          }
        {
          ll_backend__dupproc__standardize_maybe_labels_3_p_0(ll_backend__dupproc__MaybeLabels_6, &ll_backend__dupproc__StdMaybeLabels_8, ll_backend__dupproc__HeadVar__3_3);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__dupproc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__StdMaybeLabel_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__StdMaybeLabels_8));
        }
      }
  }
}

static void MR_CALL 
ll_backend__dupproc__standardize_label_3_p_0(
  MR_Word ll_backend__dupproc__Label_4,
  MR_Word * ll_backend__dupproc__StdLabel_5,
  MR_Word ll_backend__dupproc__DupProcMap_6)
{
  {
    MR_bool ll_backend__dupproc__succeeded;

    if (((MR_tag((MR_Word) ll_backend__dupproc__Label_4)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__dupproc__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__Label_4, (MR_Integer) 0)));
        MR_Word ll_backend__dupproc__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__Label_4, (MR_Integer) 1)));
        MR_Word ll_backend__dupproc__StdProcLabel_12;
        MR_Word ll_backend__dupproc__FoundProcLabel_16;
        MR_Word ll_backend__dupproc__TypeCtorInfo_8_17 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
        MR_Box ll_backend__dupproc__conv0_FoundProcLabel_16;

        {
          ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_17, ll_backend__dupproc__TypeCtorInfo_8_17, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_11)), &ll_backend__dupproc__conv0_FoundProcLabel_16);
        }
        if (ll_backend__dupproc__succeeded)
          {
            ll_backend__dupproc__FoundProcLabel_16 = ((MR_Word) ll_backend__dupproc__conv0_FoundProcLabel_16);
            ll_backend__dupproc__succeeded = MR_TRUE;
          }
        if (ll_backend__dupproc__succeeded)
          ll_backend__dupproc__StdProcLabel_12 = ll_backend__dupproc__FoundProcLabel_16;
        else
          ll_backend__dupproc__StdProcLabel_12 = ll_backend__dupproc__ProcLabel_11;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__dupproc__StdLabel_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__Type_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_12));
        }
      }
    else
      {
        MR_Integer ll_backend__dupproc__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Label_4, (MR_Integer) 0)));
        MR_Word ll_backend__dupproc__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Label_4, (MR_Integer) 1)));
        MR_Word ll_backend__dupproc__StdProcLabel_9;
        MR_Word ll_backend__dupproc__FoundProcLabel_21;
        MR_Word ll_backend__dupproc__TypeCtorInfo_8_22 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
        MR_Box ll_backend__dupproc__conv1_FoundProcLabel_21;

        {
          ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_22, ll_backend__dupproc__TypeCtorInfo_8_22, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_8)), &ll_backend__dupproc__conv1_FoundProcLabel_21);
        }
        if (ll_backend__dupproc__succeeded)
          {
            ll_backend__dupproc__FoundProcLabel_21 = ((MR_Word) ll_backend__dupproc__conv1_FoundProcLabel_21);
            ll_backend__dupproc__succeeded = MR_TRUE;
          }
        if (ll_backend__dupproc__succeeded)
          ll_backend__dupproc__StdProcLabel_9 = ll_backend__dupproc__FoundProcLabel_21;
        else
          ll_backend__dupproc__StdProcLabel_9 = ll_backend__dupproc__ProcLabel_8;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__dupproc__StdLabel_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupproc__Num_7));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_9));
        }
      }
  }
}

void mercury__ll_backend__dupproc__init(void)
{
}

void mercury__ll_backend__dupproc__init_type_tables(void)
{
}

void mercury__ll_backend__dupproc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__dupproc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.dupproc. */
