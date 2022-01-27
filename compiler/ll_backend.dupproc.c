/*
** Automatically generated from `dupproc.m'
** by the Mercury compiler,
** version rotd-2014-09-30
** configured for x86_64-apple-darwin13.3.0.
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
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
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




#line 400 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_rval_3_p_0(
#line 400 "dupproc.m"
  MR_Word ll_backend__dupproc__Rval_4,
#line 400 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdRval_5,
#line 400 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6);

#line 374 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_maybe_code_addr_3_p_0(
#line 374 "dupproc.m"
  MR_Word ll_backend__dupproc__MaybeCodeAddr_4,
#line 374 "dupproc.m"
  MR_Word * ll_backend__dupproc__MaybeStdCodeAddr_5,
#line 374 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6);

#line 331 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_code_addr_3_p_0(
#line 331 "dupproc.m"
  MR_Word ll_backend__dupproc__CodeAddr_4,
#line 331 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdCodeAddr_5,
#line 331 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6);

#line 313 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_maybe_labels_3_p_0(
#line 313 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 313 "dupproc.m"
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
#line 313 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__3_3);

#line 297 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_label_3_p_0(
#line 297 "dupproc.m"
  MR_Word ll_backend__dupproc__Label_4,
#line 297 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdLabel_5,
#line 297 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6);

#line 170 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_instr_3_p_0(
#line 170 "dupproc.m"
  MR_Word ll_backend__dupproc__Instr_4,
#line 170 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdInstr_5,
#line 170 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6);

#line 161 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_instrs_3_p_0(
#line 161 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 161 "dupproc.m"
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
#line 161 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_3);

#line 153 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_proc_3_p_0(
#line 153 "dupproc.m"
  MR_Word ll_backend__dupproc__CProc_4,
#line 153 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdCProc_5,
#line 153 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6);

#line 142 "dupproc.m"
static MR_bool MR_CALL 
ll_backend__dupproc__disallowed_instr_1_p_0(
#line 142 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1);

#line 93 "dupproc.m"
static MR_bool MR_CALL 
ll_backend__dupproc__find_matching_model_proc_5_p_0(
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__Id_9,
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__Proc_10,
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_11,
#line 93 "dupproc.m"
  MR_Word * ll_backend__dupproc__MatchingId_12);

#line 127 "dupproc.m"
static MR_bool MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0_1(
#line 127 "dupproc.m"
  MR_Box ll_backend__dupproc__closure_arg,
#line 127 "dupproc.m"
  MR_Box ll_backend__dupproc__wrapper_arg_1);

#line 66 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0(
#line 66 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 66 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__2_2,
#line 66 "dupproc.m"
  MR_Word * ll_backend__dupproc__HeadVar__3_3,
#line 66 "dupproc.m"
  MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4,
#line 66 "dupproc.m"
  MR_Word * ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5);


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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 400 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_rval_3_p_0(
#line 400 "dupproc.m"
  MR_Word ll_backend__dupproc__Rval_4,
#line 400 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdRval_5,
#line 400 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6)
#line 400 "dupproc.m"
{
#line 405 "dupproc.m"
  {
#line 405 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 405 "dupproc.m"
    if (((MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) == (MR_mktag((MR_Integer) 0))))
#line 406 "dupproc.m"
      *ll_backend__dupproc__StdRval_5 = ll_backend__dupproc__Rval_4;
#line 405 "dupproc.m"
    else
#line 405 "dupproc.m"
      if (((MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) == (MR_mktag((MR_Integer) 2))))
#line 412 "dupproc.m"
        *ll_backend__dupproc__StdRval_5 = ll_backend__dupproc__Rval_4;
#line 405 "dupproc.m"
      else
#line 405 "dupproc.m"
        if (((MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) == (MR_mktag((MR_Integer) 1))))
#line 408 "dupproc.m"
          {
#line 409 "dupproc.m"
            {
#line 409 "dupproc.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.dupproc", (MR_String) "predicate \140ll_backend.dupproc.standardize_rval\'/3", (MR_String) "var");
#line 409 "dupproc.m"
              return;
            }
#line 408 "dupproc.m"
          }
#line 405 "dupproc.m"
        else
#line 405 "dupproc.m"
          if (((((MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 425 "dupproc.m"
            {
#line 425 "dupproc.m"
              MR_Word ll_backend__dupproc__Binop_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 1)));
#line 425 "dupproc.m"
              MR_Word ll_backend__dupproc__RvalR_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 3)));
#line 425 "dupproc.m"
              MR_Word ll_backend__dupproc__StdRvalR_19;
#line 425 "dupproc.m"
              MR_Word ll_backend__dupproc__RvalL_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 2)));
#line 425 "dupproc.m"
              MR_Word ll_backend__dupproc__StdRvalL_25;

#line 426 "dupproc.m"
              {
#line 426 "dupproc.m"
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__RvalL_24, &ll_backend__dupproc__StdRvalL_25, ll_backend__dupproc__DupProcMap_6);
              }
#line 427 "dupproc.m"
              {
#line 427 "dupproc.m"
                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__RvalR_18, &ll_backend__dupproc__StdRvalR_19, ll_backend__dupproc__DupProcMap_6);
              }
#line 428 "dupproc.m"
              {
#line 428 "dupproc.m"
                MR_Word base;
#line 428 "dupproc.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 428 "dupproc.m"
                *ll_backend__dupproc__StdRval_5 = base;
#line 428 "dupproc.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 428 "dupproc.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Binop_17));
#line 428 "dupproc.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRvalL_25));
#line 428 "dupproc.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdRvalR_19));
#line 428 "dupproc.m"
              }
#line 425 "dupproc.m"
            }
#line 405 "dupproc.m"
          else
#line 405 "dupproc.m"
            if (((((MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 417 "dupproc.m"
              {
#line 417 "dupproc.m"
                MR_Word ll_backend__dupproc__Const_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 1)));
#line 417 "dupproc.m"
                MR_Word ll_backend__dupproc__StdConst_13;

#line 441 "dupproc.m"
                if ((ll_backend__dupproc__Const_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 445 "dupproc.m"
                  ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 441 "dupproc.m"
                else
#line 441 "dupproc.m"
                  if ((ll_backend__dupproc__Const_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "dupproc.m"
                    ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 441 "dupproc.m"
                  else
#line 441 "dupproc.m"
                    if (((MR_tag((MR_Word) ll_backend__dupproc__Const_12)) == (MR_mktag((MR_Integer) 2))))
#line 451 "dupproc.m"
                      ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 441 "dupproc.m"
                    else
#line 441 "dupproc.m"
                      if (((MR_tag((MR_Word) ll_backend__dupproc__Const_12)) == (MR_mktag((MR_Integer) 1))))
#line 448 "dupproc.m"
                        ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 441 "dupproc.m"
                      else
#line 441 "dupproc.m"
                        if (((((MR_tag((MR_Word) ll_backend__dupproc__Const_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Const_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 462 "dupproc.m"
                          {
#line 462 "dupproc.m"
                            MR_Word ll_backend__dupproc__CodeAddr_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Const_12, (MR_Integer) 1)));
#line 462 "dupproc.m"
                            MR_Word ll_backend__dupproc__StdCodeAddr_36;

#line 463 "dupproc.m"
                            {
#line 463 "dupproc.m"
                              ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__CodeAddr_35, &ll_backend__dupproc__StdCodeAddr_36, ll_backend__dupproc__DupProcMap_6);
                            }
#line 464 "dupproc.m"
                            {
#line 464 "dupproc.m"
                              ll_backend__dupproc__StdConst_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "dupproc.m"
                              MR_hl_field(MR_mktag(3), ll_backend__dupproc__StdConst_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 464 "dupproc.m"
                              MR_hl_field(MR_mktag(3), ll_backend__dupproc__StdConst_13, 1) = ((MR_Box) (ll_backend__dupproc__StdCodeAddr_36));
#line 464 "dupproc.m"
                            }
#line 462 "dupproc.m"
                          }
#line 441 "dupproc.m"
                        else
#line 441 "dupproc.m"
                          if (((((MR_tag((MR_Word) ll_backend__dupproc__Const_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Const_12, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 467 "dupproc.m"
                            ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 441 "dupproc.m"
                          else
#line 441 "dupproc.m"
                            if (((((MR_tag((MR_Word) ll_backend__dupproc__Const_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Const_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 454 "dupproc.m"
                              ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 441 "dupproc.m"
                            else
#line 441 "dupproc.m"
                              if (((((MR_tag((MR_Word) ll_backend__dupproc__Const_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Const_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 460 "dupproc.m"
                                ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 441 "dupproc.m"
                              else
#line 457 "dupproc.m"
                                ll_backend__dupproc__StdConst_13 = ll_backend__dupproc__Const_12;
#line 419 "dupproc.m"
                {
#line 419 "dupproc.m"
                  MR_Word base;
#line 419 "dupproc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "dupproc.m"
                  *ll_backend__dupproc__StdRval_5 = base;
#line 419 "dupproc.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 419 "dupproc.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdConst_13));
#line 419 "dupproc.m"
                }
#line 417 "dupproc.m"
              }
#line 405 "dupproc.m"
            else
#line 405 "dupproc.m"
              if (((((MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 431 "dupproc.m"
                *ll_backend__dupproc__StdRval_5 = ll_backend__dupproc__Rval_4;
#line 405 "dupproc.m"
              else
#line 405 "dupproc.m"
                if (((((MR_tag((MR_Word) ll_backend__dupproc__Rval_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 415 "dupproc.m"
                  *ll_backend__dupproc__StdRval_5 = ll_backend__dupproc__Rval_4;
#line 405 "dupproc.m"
                else
#line 421 "dupproc.m"
                  {
#line 421 "dupproc.m"
                    MR_Word ll_backend__dupproc__Unop_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 1)));
#line 421 "dupproc.m"
                    MR_Word ll_backend__dupproc__RvalL_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Rval_4, (MR_Integer) 2)));
#line 421 "dupproc.m"
                    MR_Word ll_backend__dupproc__StdRvalL_16;

#line 422 "dupproc.m"
                    {
#line 422 "dupproc.m"
                      ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__RvalL_15, &ll_backend__dupproc__StdRvalL_16, ll_backend__dupproc__DupProcMap_6);
                    }
#line 423 "dupproc.m"
                    {
#line 423 "dupproc.m"
                      MR_Word base;
#line 423 "dupproc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 423 "dupproc.m"
                      *ll_backend__dupproc__StdRval_5 = base;
#line 423 "dupproc.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 423 "dupproc.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Unop_14));
#line 423 "dupproc.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRvalL_16));
#line 423 "dupproc.m"
                    }
#line 421 "dupproc.m"
                  }
#line 405 "dupproc.m"
  }
#line 400 "dupproc.m"
}

#line 374 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_maybe_code_addr_3_p_0(
#line 374 "dupproc.m"
  MR_Word ll_backend__dupproc__MaybeCodeAddr_4,
#line 374 "dupproc.m"
  MR_Word * ll_backend__dupproc__MaybeStdCodeAddr_5,
#line 374 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6)
#line 374 "dupproc.m"
{
#line 379 "dupproc.m"
  {
#line 379 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 379 "dupproc.m"
    if ((ll_backend__dupproc__MaybeCodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "dupproc.m"
      *ll_backend__dupproc__MaybeStdCodeAddr_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 379 "dupproc.m"
    else
#line 382 "dupproc.m"
      {
#line 382 "dupproc.m"
        MR_Word ll_backend__dupproc__CodeAddr_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeCodeAddr_4, (MR_Integer) 0)));
#line 382 "dupproc.m"
        MR_Word ll_backend__dupproc__StdCodeAddr_8;

#line 383 "dupproc.m"
        {
#line 383 "dupproc.m"
          ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__CodeAddr_7, &ll_backend__dupproc__StdCodeAddr_8, ll_backend__dupproc__DupProcMap_6);
        }
#line 384 "dupproc.m"
        {
#line 384 "dupproc.m"
          MR_Word base;
#line 384 "dupproc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "dupproc.m"
          *ll_backend__dupproc__MaybeStdCodeAddr_5 = base;
#line 384 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__StdCodeAddr_8));
#line 384 "dupproc.m"
        }
#line 382 "dupproc.m"
      }
#line 379 "dupproc.m"
  }
#line 374 "dupproc.m"
}

#line 331 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_code_addr_3_p_0(
#line 331 "dupproc.m"
  MR_Word ll_backend__dupproc__CodeAddr_4,
#line 331 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdCodeAddr_5,
#line 331 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6)
#line 331 "dupproc.m"
{
#line 336 "dupproc.m"
  {
#line 336 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 336 "dupproc.m"
    if ((ll_backend__dupproc__CodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 345 "dupproc.m"
      *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
    else
#line 336 "dupproc.m"
      if ((ll_backend__dupproc__CodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 354 "dupproc.m"
        *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
      else
#line 336 "dupproc.m"
        if ((ll_backend__dupproc__CodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 369 "dupproc.m"
          *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
        else
#line 336 "dupproc.m"
          if ((ll_backend__dupproc__CodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 351 "dupproc.m"
            *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
          else
#line 336 "dupproc.m"
            if ((ll_backend__dupproc__CodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 360 "dupproc.m"
              *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
            else
#line 336 "dupproc.m"
              if ((ll_backend__dupproc__CodeAddr_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 357 "dupproc.m"
                *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
              else
#line 336 "dupproc.m"
                if (((MR_tag((MR_Word) ll_backend__dupproc__CodeAddr_4)) == (MR_mktag((MR_Integer) 2))))
#line 340 "dupproc.m"
                  {
#line 340 "dupproc.m"
                    MR_Word ll_backend__dupproc__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__dupproc__CodeAddr_4, (MR_Integer) 0)));
#line 340 "dupproc.m"
                    MR_Word ll_backend__dupproc__StdProcLabel_10;
#line 291 "dupproc.m"
                    MR_Word ll_backend__dupproc__FoundProcLabel_17;
#line 289 "dupproc.m"
                    MR_Word ll_backend__dupproc__TypeCtorInfo_8_18 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 289 "dupproc.m"
                    MR_Box ll_backend__dupproc__conv0_FoundProcLabel_17;

#line 289 "dupproc.m"
                    {
#line 289 "dupproc.m"
                      ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_18, ll_backend__dupproc__TypeCtorInfo_8_18, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_9)), &ll_backend__dupproc__conv0_FoundProcLabel_17);
                    }
#line 289 "dupproc.m"
                    if (ll_backend__dupproc__succeeded)
#line 289 "dupproc.m"
                      {
#line 289 "dupproc.m"
                        ll_backend__dupproc__FoundProcLabel_17 = ((MR_Word) ll_backend__dupproc__conv0_FoundProcLabel_17);
#line 289 "dupproc.m"
                        ll_backend__dupproc__succeeded = MR_TRUE;
#line 289 "dupproc.m"
                      }
#line 291 "dupproc.m"
                    if (ll_backend__dupproc__succeeded)
#line 290 "dupproc.m"
                      ll_backend__dupproc__StdProcLabel_10 = ll_backend__dupproc__FoundProcLabel_17;
#line 291 "dupproc.m"
                    else
#line 292 "dupproc.m"
                      ll_backend__dupproc__StdProcLabel_10 = ll_backend__dupproc__ProcLabel_9;
#line 342 "dupproc.m"
                    {
#line 342 "dupproc.m"
                      MR_Word base;
#line 342 "dupproc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "dupproc.m"
                      *ll_backend__dupproc__StdCodeAddr_5 = base;
#line 342 "dupproc.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_10));
#line 342 "dupproc.m"
                    }
#line 340 "dupproc.m"
                  }
#line 336 "dupproc.m"
                else
#line 336 "dupproc.m"
                  if (((MR_tag((MR_Word) ll_backend__dupproc__CodeAddr_4)) == (MR_mktag((MR_Integer) 1))))
#line 336 "dupproc.m"
                    {
#line 336 "dupproc.m"
                      MR_Word ll_backend__dupproc__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__CodeAddr_4, (MR_Integer) 0)));
#line 336 "dupproc.m"
                      MR_Word ll_backend__dupproc__StdLabel_8;

#line 337 "dupproc.m"
                      {
#line 337 "dupproc.m"
                        ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_7, &ll_backend__dupproc__StdLabel_8, ll_backend__dupproc__DupProcMap_6);
                      }
#line 338 "dupproc.m"
                      {
#line 338 "dupproc.m"
                        MR_Word base;
#line 338 "dupproc.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 338 "dupproc.m"
                        *ll_backend__dupproc__StdCodeAddr_5 = base;
#line 338 "dupproc.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__StdLabel_8));
#line 338 "dupproc.m"
                      }
#line 336 "dupproc.m"
                    }
#line 336 "dupproc.m"
                  else
#line 336 "dupproc.m"
                    if (((((MR_tag((MR_Word) ll_backend__dupproc__CodeAddr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__CodeAddr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 366 "dupproc.m"
                      *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
                    else
#line 336 "dupproc.m"
                      if (((((MR_tag((MR_Word) ll_backend__dupproc__CodeAddr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__CodeAddr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 363 "dupproc.m"
                        *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
                      else
#line 348 "dupproc.m"
                        *ll_backend__dupproc__StdCodeAddr_5 = ll_backend__dupproc__CodeAddr_4;
#line 336 "dupproc.m"
  }
#line 331 "dupproc.m"
}

#line 313 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_maybe_labels_3_p_0(
#line 313 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 313 "dupproc.m"
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
#line 313 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__3_3)
#line 313 "dupproc.m"
{
#line 316 "dupproc.m"
  {
#line 316 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 316 "dupproc.m"
    if ((ll_backend__dupproc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "dupproc.m"
      *ll_backend__dupproc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "dupproc.m"
    else
#line 318 "dupproc.m"
      {
#line 318 "dupproc.m"
        MR_Word ll_backend__dupproc__MaybeLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "dupproc.m"
        MR_Word ll_backend__dupproc__MaybeLabels_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));
#line 318 "dupproc.m"
        MR_Word ll_backend__dupproc__StdMaybeLabel_7;
#line 318 "dupproc.m"
        MR_Word ll_backend__dupproc__StdMaybeLabels_8;

#line 323 "dupproc.m"
        if ((ll_backend__dupproc__MaybeLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "dupproc.m"
          ll_backend__dupproc__StdMaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "dupproc.m"
        else
#line 320 "dupproc.m"
          {
#line 320 "dupproc.m"
            MR_Word ll_backend__dupproc__Label_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeLabel_5, (MR_Integer) 0)));
#line 320 "dupproc.m"
            MR_Word ll_backend__dupproc__StdLabel_11;

#line 321 "dupproc.m"
            {
#line 321 "dupproc.m"
              ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_10, &ll_backend__dupproc__StdLabel_11, ll_backend__dupproc__HeadVar__3_3);
            }
#line 322 "dupproc.m"
            {
#line 322 "dupproc.m"
              ll_backend__dupproc__StdMaybeLabel_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 322 "dupproc.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdMaybeLabel_7, 0) = ((MR_Box) (ll_backend__dupproc__StdLabel_11));
#line 322 "dupproc.m"
            }
#line 320 "dupproc.m"
          }
#line 327 "dupproc.m"
        {
#line 327 "dupproc.m"
          ll_backend__dupproc__standardize_maybe_labels_3_p_0(ll_backend__dupproc__MaybeLabels_6, &ll_backend__dupproc__StdMaybeLabels_8, ll_backend__dupproc__HeadVar__3_3);
        }
#line 318 "dupproc.m"
        {
#line 318 "dupproc.m"
          MR_Word base;
#line 318 "dupproc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "dupproc.m"
          *ll_backend__dupproc__HeadVar__2_2 = base;
#line 318 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__StdMaybeLabel_7));
#line 318 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__StdMaybeLabels_8));
#line 318 "dupproc.m"
        }
#line 318 "dupproc.m"
      }
#line 316 "dupproc.m"
  }
#line 313 "dupproc.m"
}

#line 297 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_label_3_p_0(
#line 297 "dupproc.m"
  MR_Word ll_backend__dupproc__Label_4,
#line 297 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdLabel_5,
#line 297 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6)
#line 297 "dupproc.m"
{
#line 302 "dupproc.m"
  {
#line 302 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 302 "dupproc.m"
    if (((MR_tag((MR_Word) ll_backend__dupproc__Label_4)) == (MR_mktag((MR_Integer) 1))))
#line 306 "dupproc.m"
      {
#line 306 "dupproc.m"
        MR_Word ll_backend__dupproc__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__Label_4, (MR_Integer) 0)));
#line 306 "dupproc.m"
        MR_Word ll_backend__dupproc__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__Label_4, (MR_Integer) 1)));
#line 306 "dupproc.m"
        MR_Word ll_backend__dupproc__StdProcLabel_12;
#line 291 "dupproc.m"
        MR_Word ll_backend__dupproc__FoundProcLabel_16;
#line 289 "dupproc.m"
        MR_Word ll_backend__dupproc__TypeCtorInfo_8_17 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 289 "dupproc.m"
        MR_Box ll_backend__dupproc__conv0_FoundProcLabel_16;

#line 289 "dupproc.m"
        {
#line 289 "dupproc.m"
          ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_17, ll_backend__dupproc__TypeCtorInfo_8_17, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_11)), &ll_backend__dupproc__conv0_FoundProcLabel_16);
        }
#line 289 "dupproc.m"
        if (ll_backend__dupproc__succeeded)
#line 289 "dupproc.m"
          {
#line 289 "dupproc.m"
            ll_backend__dupproc__FoundProcLabel_16 = ((MR_Word) ll_backend__dupproc__conv0_FoundProcLabel_16);
#line 289 "dupproc.m"
            ll_backend__dupproc__succeeded = MR_TRUE;
#line 289 "dupproc.m"
          }
#line 291 "dupproc.m"
        if (ll_backend__dupproc__succeeded)
#line 290 "dupproc.m"
          ll_backend__dupproc__StdProcLabel_12 = ll_backend__dupproc__FoundProcLabel_16;
#line 291 "dupproc.m"
        else
#line 292 "dupproc.m"
          ll_backend__dupproc__StdProcLabel_12 = ll_backend__dupproc__ProcLabel_11;
#line 308 "dupproc.m"
        {
#line 308 "dupproc.m"
          MR_Word base;
#line 308 "dupproc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "dupproc.m"
          *ll_backend__dupproc__StdLabel_5 = base;
#line 308 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__Type_10));
#line 308 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_12));
#line 308 "dupproc.m"
        }
#line 306 "dupproc.m"
      }
#line 302 "dupproc.m"
    else
#line 302 "dupproc.m"
      {
#line 302 "dupproc.m"
        MR_Integer ll_backend__dupproc__Num_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Label_4, (MR_Integer) 0)));
#line 302 "dupproc.m"
        MR_Word ll_backend__dupproc__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Label_4, (MR_Integer) 1)));
#line 302 "dupproc.m"
        MR_Word ll_backend__dupproc__StdProcLabel_9;
#line 291 "dupproc.m"
        MR_Word ll_backend__dupproc__FoundProcLabel_21;
#line 289 "dupproc.m"
        MR_Word ll_backend__dupproc__TypeCtorInfo_8_22 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 289 "dupproc.m"
        MR_Box ll_backend__dupproc__conv1_FoundProcLabel_21;

#line 289 "dupproc.m"
        {
#line 289 "dupproc.m"
          ll_backend__dupproc__succeeded = mercury__map__search_3_p_0(ll_backend__dupproc__TypeCtorInfo_8_22, ll_backend__dupproc__TypeCtorInfo_8_22, ll_backend__dupproc__DupProcMap_6, ((MR_Box) (ll_backend__dupproc__ProcLabel_8)), &ll_backend__dupproc__conv1_FoundProcLabel_21);
        }
#line 289 "dupproc.m"
        if (ll_backend__dupproc__succeeded)
#line 289 "dupproc.m"
          {
#line 289 "dupproc.m"
            ll_backend__dupproc__FoundProcLabel_21 = ((MR_Word) ll_backend__dupproc__conv1_FoundProcLabel_21);
#line 289 "dupproc.m"
            ll_backend__dupproc__succeeded = MR_TRUE;
#line 289 "dupproc.m"
          }
#line 291 "dupproc.m"
        if (ll_backend__dupproc__succeeded)
#line 290 "dupproc.m"
          ll_backend__dupproc__StdProcLabel_9 = ll_backend__dupproc__FoundProcLabel_21;
#line 291 "dupproc.m"
        else
#line 292 "dupproc.m"
          ll_backend__dupproc__StdProcLabel_9 = ll_backend__dupproc__ProcLabel_8;
#line 304 "dupproc.m"
        {
#line 304 "dupproc.m"
          MR_Word base;
#line 304 "dupproc.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "dupproc.m"
          *ll_backend__dupproc__StdLabel_5 = base;
#line 304 "dupproc.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupproc__Num_7));
#line 304 "dupproc.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__dupproc__StdProcLabel_9));
#line 304 "dupproc.m"
        }
#line 302 "dupproc.m"
      }
#line 302 "dupproc.m"
  }
#line 297 "dupproc.m"
}

#line 170 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_instr_3_p_0(
#line 170 "dupproc.m"
  MR_Word ll_backend__dupproc__Instr_4,
#line 170 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdInstr_5,
#line 170 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6)
#line 170 "dupproc.m"
{
#line 175 "dupproc.m"
  {
#line 175 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 175 "dupproc.m"
    if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 179 "dupproc.m"
      {
#line 179 "dupproc.m"
        MR_Word ll_backend__dupproc__Lval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 179 "dupproc.m"
        MR_Word ll_backend__dupproc__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 179 "dupproc.m"
        MR_Word ll_backend__dupproc__StdRval_13;

#line 180 "dupproc.m"
        {
#line 180 "dupproc.m"
          ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_12, &ll_backend__dupproc__StdRval_13, ll_backend__dupproc__DupProcMap_6);
        }
#line 181 "dupproc.m"
        {
#line 181 "dupproc.m"
          MR_Word base;
#line 181 "dupproc.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 181 "dupproc.m"
          *ll_backend__dupproc__StdInstr_5 = base;
#line 181 "dupproc.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 181 "dupproc.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_11));
#line 181 "dupproc.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRval_13));
#line 181 "dupproc.m"
        }
#line 179 "dupproc.m"
      }
#line 175 "dupproc.m"
    else
#line 175 "dupproc.m"
      if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 175 "dupproc.m"
        {
#line 175 "dupproc.m"
          MR_Integer ll_backend__dupproc__NumIntTemps_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 175 "dupproc.m"
          MR_Integer ll_backend__dupproc__NumFloatTemps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 175 "dupproc.m"
          MR_Word ll_backend__dupproc__Instrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
#line 175 "dupproc.m"
          MR_Word ll_backend__dupproc__StdInstrs_10;

#line 176 "dupproc.m"
          {
#line 176 "dupproc.m"
            ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_9, &ll_backend__dupproc__StdInstrs_10, ll_backend__dupproc__DupProcMap_6);
          }
#line 177 "dupproc.m"
          {
#line 177 "dupproc.m"
            MR_Word base;
#line 177 "dupproc.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 177 "dupproc.m"
            *ll_backend__dupproc__StdInstr_5 = base;
#line 177 "dupproc.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 177 "dupproc.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__NumIntTemps_7));
#line 177 "dupproc.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__NumFloatTemps_8));
#line 177 "dupproc.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdInstrs_10));
#line 177 "dupproc.m"
          }
#line 175 "dupproc.m"
        }
#line 175 "dupproc.m"
      else
#line 175 "dupproc.m"
        if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 213 "dupproc.m"
          {
#line 213 "dupproc.m"
            MR_Word ll_backend__dupproc__Targets_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 213 "dupproc.m"
            MR_Word ll_backend__dupproc__StdTargets_32;
#line 213 "dupproc.m"
            MR_Word ll_backend__dupproc__Rval_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));

#line 214 "dupproc.m"
            {
#line 214 "dupproc.m"
              ll_backend__dupproc__standardize_maybe_labels_3_p_0(ll_backend__dupproc__Targets_31, &ll_backend__dupproc__StdTargets_32, ll_backend__dupproc__DupProcMap_6);
            }
#line 215 "dupproc.m"
            {
#line 215 "dupproc.m"
              MR_Word base;
#line 215 "dupproc.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 215 "dupproc.m"
              *ll_backend__dupproc__StdInstr_5 = base;
#line 215 "dupproc.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 215 "dupproc.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Rval_100));
#line 215 "dupproc.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdTargets_32));
#line 215 "dupproc.m"
            }
#line 213 "dupproc.m"
          }
#line 175 "dupproc.m"
        else
#line 175 "dupproc.m"
          if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 236 "dupproc.m"
            *ll_backend__dupproc__StdInstr_5 = ll_backend__dupproc__Instr_4;
#line 175 "dupproc.m"
          else
#line 175 "dupproc.m"
            if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 225 "dupproc.m"
              {
#line 225 "dupproc.m"
                MR_Word ll_backend__dupproc__Child_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 225 "dupproc.m"
                MR_Word ll_backend__dupproc__StdChild_36;
#line 225 "dupproc.m"
                MR_Word ll_backend__dupproc__Lval_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));

#line 226 "dupproc.m"
                {
#line 226 "dupproc.m"
                  ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Child_35, &ll_backend__dupproc__StdChild_36, ll_backend__dupproc__DupProcMap_6);
                }
#line 227 "dupproc.m"
                {
#line 227 "dupproc.m"
                  MR_Word base;
#line 227 "dupproc.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 227 "dupproc.m"
                  *ll_backend__dupproc__StdInstr_5 = base;
#line 227 "dupproc.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 29));
#line 227 "dupproc.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_106));
#line 227 "dupproc.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdChild_36));
#line 227 "dupproc.m"
                }
#line 225 "dupproc.m"
              }
#line 175 "dupproc.m"
            else
#line 175 "dupproc.m"
              if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 209 "dupproc.m"
                {
#line 209 "dupproc.m"
                  MR_Word ll_backend__dupproc__Target_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 209 "dupproc.m"
                  MR_Word ll_backend__dupproc__StdTarget_99;

#line 210 "dupproc.m"
                  {
#line 210 "dupproc.m"
                    ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Target_98, &ll_backend__dupproc__StdTarget_99, ll_backend__dupproc__DupProcMap_6);
                  }
#line 211 "dupproc.m"
                  {
#line 211 "dupproc.m"
                    MR_Word base;
#line 211 "dupproc.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "dupproc.m"
                    *ll_backend__dupproc__StdInstr_5 = base;
#line 211 "dupproc.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 211 "dupproc.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdTarget_99));
#line 211 "dupproc.m"
                  }
#line 209 "dupproc.m"
                }
#line 175 "dupproc.m"
              else
#line 175 "dupproc.m"
                if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 217 "dupproc.m"
                  {
#line 217 "dupproc.m"
                    MR_Word ll_backend__dupproc__Rval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 217 "dupproc.m"
                    MR_Word ll_backend__dupproc__StdRval_102;
#line 217 "dupproc.m"
                    MR_Word ll_backend__dupproc__Target_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 217 "dupproc.m"
                    MR_Word ll_backend__dupproc__StdTarget_104;

#line 218 "dupproc.m"
                    {
#line 218 "dupproc.m"
                      ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_101, &ll_backend__dupproc__StdRval_102, ll_backend__dupproc__DupProcMap_6);
                    }
#line 219 "dupproc.m"
                    {
#line 219 "dupproc.m"
                      ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Target_103, &ll_backend__dupproc__StdTarget_104, ll_backend__dupproc__DupProcMap_6);
                    }
#line 220 "dupproc.m"
                    {
#line 220 "dupproc.m"
                      MR_Word base;
#line 220 "dupproc.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 220 "dupproc.m"
                      *ll_backend__dupproc__StdInstr_5 = base;
#line 220 "dupproc.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 220 "dupproc.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdRval_102));
#line 220 "dupproc.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdTarget_104));
#line 220 "dupproc.m"
                    }
#line 217 "dupproc.m"
                  }
#line 175 "dupproc.m"
                else
#line 175 "dupproc.m"
                  if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 222 "dupproc.m"
                    {
#line 222 "dupproc.m"
                      MR_Word ll_backend__dupproc__Kind_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
#line 222 "dupproc.m"
                      MR_Integer ll_backend__dupproc__NumSlots_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 222 "dupproc.m"
                      MR_String ll_backend__dupproc__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));

#line 223 "dupproc.m"
                      {
#line 223 "dupproc.m"
                        MR_Word base;
#line 223 "dupproc.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 223 "dupproc.m"
                        *ll_backend__dupproc__StdInstr_5 = base;
#line 223 "dupproc.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 24));
#line 223 "dupproc.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__NumSlots_105));
#line 223 "dupproc.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_String) ""));
#line 223 "dupproc.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__Kind_34));
#line 223 "dupproc.m"
                      }
#line 222 "dupproc.m"
                    }
#line 175 "dupproc.m"
                  else
#line 175 "dupproc.m"
                    if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 229 "dupproc.m"
                      {
#line 229 "dupproc.m"
                        MR_Word ll_backend__dupproc__Lval_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 229 "dupproc.m"
                        MR_Word ll_backend__dupproc__Label_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 229 "dupproc.m"
                        MR_Word ll_backend__dupproc__StdLabel_109;

#line 230 "dupproc.m"
                        {
#line 230 "dupproc.m"
                          ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_108, &ll_backend__dupproc__StdLabel_109, ll_backend__dupproc__DupProcMap_6);
                        }
#line 231 "dupproc.m"
                        {
#line 231 "dupproc.m"
                          MR_Word base;
#line 231 "dupproc.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 231 "dupproc.m"
                          *ll_backend__dupproc__StdInstr_5 = base;
#line 231 "dupproc.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 231 "dupproc.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_107));
#line 231 "dupproc.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdLabel_109));
#line 231 "dupproc.m"
                        }
#line 229 "dupproc.m"
                      }
#line 175 "dupproc.m"
                    else
#line 175 "dupproc.m"
                      if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 183 "dupproc.m"
                        {
#line 183 "dupproc.m"
                          MR_Word ll_backend__dupproc__Lval_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 183 "dupproc.m"
                          MR_Word ll_backend__dupproc__Rval_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 183 "dupproc.m"
                          MR_Word ll_backend__dupproc__StdRval_97;

#line 184 "dupproc.m"
                          {
#line 184 "dupproc.m"
                            ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_96, &ll_backend__dupproc__StdRval_97, ll_backend__dupproc__DupProcMap_6);
                          }
#line 185 "dupproc.m"
                          {
#line 185 "dupproc.m"
                            MR_Word base;
#line 185 "dupproc.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 185 "dupproc.m"
                            *ll_backend__dupproc__StdInstr_5 = base;
#line 185 "dupproc.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 185 "dupproc.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__Lval_95));
#line 185 "dupproc.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdRval_97));
#line 185 "dupproc.m"
                          }
#line 183 "dupproc.m"
                        }
#line 175 "dupproc.m"
                      else
#line 175 "dupproc.m"
                        if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 205 "dupproc.m"
                          {
#line 205 "dupproc.m"
                            MR_Word ll_backend__dupproc__Label_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 205 "dupproc.m"
                            MR_Word ll_backend__dupproc__StdLabel_30;

#line 206 "dupproc.m"
                            {
#line 206 "dupproc.m"
                              ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_29, &ll_backend__dupproc__StdLabel_30, ll_backend__dupproc__DupProcMap_6);
                            }
#line 207 "dupproc.m"
                            {
#line 207 "dupproc.m"
                              MR_Word base;
#line 207 "dupproc.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "dupproc.m"
                              *ll_backend__dupproc__StdInstr_5 = base;
#line 207 "dupproc.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 207 "dupproc.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdLabel_30));
#line 207 "dupproc.m"
                            }
#line 205 "dupproc.m"
                          }
#line 175 "dupproc.m"
                        else
#line 175 "dupproc.m"
                          if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 249 "dupproc.m"
                            {
#line 249 "dupproc.m"
                              MR_Word ll_backend__dupproc__LCRval_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 249 "dupproc.m"
                              MR_Word ll_backend__dupproc__LCSRval_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 249 "dupproc.m"
                              MR_Word ll_backend__dupproc__StdLCRval_119;
#line 249 "dupproc.m"
                              MR_Word ll_backend__dupproc__StdLCSRval_120;

#line 250 "dupproc.m"
                              {
#line 250 "dupproc.m"
                                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCRval_117, &ll_backend__dupproc__StdLCRval_119, ll_backend__dupproc__DupProcMap_6);
                              }
#line 251 "dupproc.m"
                              {
#line 251 "dupproc.m"
                                ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCSRval_118, &ll_backend__dupproc__StdLCSRval_120, ll_backend__dupproc__DupProcMap_6);
                              }
#line 252 "dupproc.m"
                              {
#line 252 "dupproc.m"
                                MR_Word base;
#line 252 "dupproc.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 252 "dupproc.m"
                                *ll_backend__dupproc__StdInstr_5 = base;
#line 252 "dupproc.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 252 "dupproc.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdLCRval_119));
#line 252 "dupproc.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdLCSRval_120));
#line 252 "dupproc.m"
                              }
#line 249 "dupproc.m"
                            }
#line 175 "dupproc.m"
                          else
#line 175 "dupproc.m"
                            if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 243 "dupproc.m"
                              {
#line 243 "dupproc.m"
                                MR_Word ll_backend__dupproc__LCRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 243 "dupproc.m"
                                MR_Word ll_backend__dupproc__LCSRval_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 243 "dupproc.m"
                                MR_Word ll_backend__dupproc__StdLCRval_49;
#line 243 "dupproc.m"
                                MR_Word ll_backend__dupproc__StdLCSRval_50;
#line 243 "dupproc.m"
                                MR_Word ll_backend__dupproc__Label_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
#line 243 "dupproc.m"
                                MR_Word ll_backend__dupproc__StdLabel_116;

#line 244 "dupproc.m"
                                {
#line 244 "dupproc.m"
                                  ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCRval_47, &ll_backend__dupproc__StdLCRval_49, ll_backend__dupproc__DupProcMap_6);
                                }
#line 245 "dupproc.m"
                                {
#line 245 "dupproc.m"
                                  ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__LCSRval_48, &ll_backend__dupproc__StdLCSRval_50, ll_backend__dupproc__DupProcMap_6);
                                }
#line 246 "dupproc.m"
                                {
#line 246 "dupproc.m"
                                  ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_115, &ll_backend__dupproc__StdLabel_116, ll_backend__dupproc__DupProcMap_6);
                                }
#line 247 "dupproc.m"
                                {
#line 247 "dupproc.m"
                                  MR_Word base;
#line 247 "dupproc.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 247 "dupproc.m"
                                  *ll_backend__dupproc__StdInstr_5 = base;
#line 247 "dupproc.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 247 "dupproc.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdLCRval_49));
#line 247 "dupproc.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdLCSRval_50));
#line 247 "dupproc.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdLabel_116));
#line 247 "dupproc.m"
                                }
#line 243 "dupproc.m"
                              }
#line 175 "dupproc.m"
                            else
#line 175 "dupproc.m"
                              if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 238 "dupproc.m"
                                {
#line 238 "dupproc.m"
                                  MR_Word ll_backend__dupproc__Lval_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 238 "dupproc.m"
                                  MR_Word ll_backend__dupproc__Rval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 238 "dupproc.m"
                                  MR_Word ll_backend__dupproc__StdRval_112;
#line 238 "dupproc.m"
                                  MR_Word ll_backend__dupproc__Label_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
#line 238 "dupproc.m"
                                  MR_Word ll_backend__dupproc__StdLabel_114;

#line 239 "dupproc.m"
                                  {
#line 239 "dupproc.m"
                                    ll_backend__dupproc__standardize_rval_3_p_0(ll_backend__dupproc__Rval_111, &ll_backend__dupproc__StdRval_112, ll_backend__dupproc__DupProcMap_6);
                                  }
#line 240 "dupproc.m"
                                  {
#line 240 "dupproc.m"
                                    ll_backend__dupproc__standardize_label_3_p_0(ll_backend__dupproc__Label_113, &ll_backend__dupproc__StdLabel_114, ll_backend__dupproc__DupProcMap_6);
                                  }
#line 241 "dupproc.m"
                                  {
#line 241 "dupproc.m"
                                    MR_Word base;
#line 241 "dupproc.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 241 "dupproc.m"
                                    *ll_backend__dupproc__StdInstr_5 = base;
#line 241 "dupproc.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 241 "dupproc.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdRval_112));
#line 241 "dupproc.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__Lval_110));
#line 241 "dupproc.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__StdLabel_114));
#line 241 "dupproc.m"
                                  }
#line 238 "dupproc.m"
                                }
#line 175 "dupproc.m"
                              else
#line 175 "dupproc.m"
                                if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 187 "dupproc.m"
                                  {
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__Target_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__Cont_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__LiveInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 3)));
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 4)));
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__GoalPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 5)));
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__Model_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 6)));
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__StdTarget_20;
#line 187 "dupproc.m"
                                    MR_Word ll_backend__dupproc__StdCont_21;

#line 188 "dupproc.m"
                                    {
#line 188 "dupproc.m"
                                      ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Target_14, &ll_backend__dupproc__StdTarget_20, ll_backend__dupproc__DupProcMap_6);
                                    }
#line 189 "dupproc.m"
                                    {
#line 189 "dupproc.m"
                                      ll_backend__dupproc__standardize_code_addr_3_p_0(ll_backend__dupproc__Cont_15, &ll_backend__dupproc__StdCont_21, ll_backend__dupproc__DupProcMap_6);
                                    }
#line 190 "dupproc.m"
                                    {
#line 190 "dupproc.m"
                                      MR_Word base;
#line 190 "dupproc.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 190 "dupproc.m"
                                      *ll_backend__dupproc__StdInstr_5 = base;
#line 190 "dupproc.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 190 "dupproc.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdTarget_20));
#line 190 "dupproc.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__StdCont_21));
#line 190 "dupproc.m"
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__dupproc__LiveInfo_16));
#line 190 "dupproc.m"
                                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__dupproc__Context_17));
#line 190 "dupproc.m"
                                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__dupproc__GoalPath_18));
#line 190 "dupproc.m"
                                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__dupproc__Model_19));
#line 190 "dupproc.m"
                                    }
#line 187 "dupproc.m"
                                  }
#line 175 "dupproc.m"
                                else
#line 175 "dupproc.m"
                                  if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 193 "dupproc.m"
                                    {
#line 193 "dupproc.m"
                                      MR_Word ll_backend__dupproc__FrameInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 1)));
#line 193 "dupproc.m"
                                      MR_Word ll_backend__dupproc__MaybeCodeAddr_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_4, (MR_Integer) 2)));
#line 193 "dupproc.m"
                                      MR_Word ll_backend__dupproc__StdFrameInfo_25;
#line 193 "dupproc.m"
                                      MR_Word ll_backend__dupproc__MaybeStdCodeAddr_28;

#line 197 "dupproc.m"
                                      if (((MR_tag((MR_Word) ll_backend__dupproc__FrameInfo_22)) == (MR_mktag((MR_Integer) 1))))
#line 198 "dupproc.m"
                                        {
#line 198 "dupproc.m"
                                          MR_Integer ll_backend__dupproc__NumSlots_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__FrameInfo_22, (MR_Integer) 1)));
#line 198 "dupproc.m"
                                          MR_String ll_backend__dupproc__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__FrameInfo_22, (MR_Integer) 0)));

#line 199 "dupproc.m"
                                          {
#line 199 "dupproc.m"
                                            ll_backend__dupproc__StdFrameInfo_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "dupproc.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdFrameInfo_25, 0) = ((MR_Box) ((MR_String) ""));
#line 199 "dupproc.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__dupproc__StdFrameInfo_25, 1) = ((MR_Box) (ll_backend__dupproc__NumSlots_27));
#line 199 "dupproc.m"
                                          }
#line 198 "dupproc.m"
                                        }
#line 197 "dupproc.m"
                                      else
#line 196 "dupproc.m"
                                        ll_backend__dupproc__StdFrameInfo_25 = ll_backend__dupproc__FrameInfo_22;
#line 201 "dupproc.m"
                                      {
#line 201 "dupproc.m"
                                        ll_backend__dupproc__standardize_maybe_code_addr_3_p_0(ll_backend__dupproc__MaybeCodeAddr_23, &ll_backend__dupproc__MaybeStdCodeAddr_28, ll_backend__dupproc__DupProcMap_6);
                                      }
#line 203 "dupproc.m"
                                      {
#line 203 "dupproc.m"
                                        MR_Word base;
#line 203 "dupproc.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 203 "dupproc.m"
                                        *ll_backend__dupproc__StdInstr_5 = base;
#line 203 "dupproc.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 203 "dupproc.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__dupproc__StdFrameInfo_25));
#line 203 "dupproc.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__dupproc__MaybeStdCodeAddr_28));
#line 203 "dupproc.m"
                                      }
#line 193 "dupproc.m"
                                    }
#line 175 "dupproc.m"
                                  else
#line 280 "dupproc.m"
                                    *ll_backend__dupproc__StdInstr_5 = ll_backend__dupproc__Instr_4;
#line 175 "dupproc.m"
  }
#line 170 "dupproc.m"
}

#line 161 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_instrs_3_p_0(
#line 161 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 161 "dupproc.m"
  MR_Word * ll_backend__dupproc__HeadVar__2_2,
#line 161 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_3)
#line 161 "dupproc.m"
{
#line 164 "dupproc.m"
  {
#line 164 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 164 "dupproc.m"
    if ((ll_backend__dupproc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "dupproc.m"
      *ll_backend__dupproc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "dupproc.m"
    else
#line 166 "dupproc.m"
      {
#line 166 "dupproc.m"
        MR_Word ll_backend__dupproc__Instr_5;
#line 166 "dupproc.m"
        MR_Word ll_backend__dupproc__Instrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));
#line 166 "dupproc.m"
        MR_Word ll_backend__dupproc__StdInstr_8;
#line 166 "dupproc.m"
        MR_Word ll_backend__dupproc__StdInstrs_9;
#line 166 "dupproc.m"
        MR_Word ll_backend__dupproc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
#line 166 "dupproc.m"
        MR_Word ll_backend__dupproc__V_12_12;
#line 165 "dupproc.m"
        MR_String ll_backend__dupproc__V_6_6;

#line 165 "dupproc.m"
        ll_backend__dupproc__Instr_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_11_11, (MR_Integer) 0)));
#line 165 "dupproc.m"
        ll_backend__dupproc__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_11_11, (MR_Integer) 1)));
#line 167 "dupproc.m"
        {
#line 167 "dupproc.m"
          ll_backend__dupproc__standardize_instr_3_p_0(ll_backend__dupproc__Instr_5, &ll_backend__dupproc__StdInstr_8, ll_backend__dupproc__DupProcMap_3);
        }
#line 166 "dupproc.m"
        {
#line 166 "dupproc.m"
          ll_backend__dupproc__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 166 "dupproc.m"
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_12_12, 0) = ((MR_Box) (ll_backend__dupproc__StdInstr_8));
#line 166 "dupproc.m"
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_12_12, 1) = ((MR_Box) ((MR_String) ""));
#line 166 "dupproc.m"
        }
#line 168 "dupproc.m"
        {
#line 168 "dupproc.m"
          ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_7, &ll_backend__dupproc__StdInstrs_9, ll_backend__dupproc__DupProcMap_3);
        }
#line 166 "dupproc.m"
        {
#line 166 "dupproc.m"
          MR_Word base;
#line 166 "dupproc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "dupproc.m"
          *ll_backend__dupproc__HeadVar__2_2 = base;
#line 166 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__V_12_12));
#line 166 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__StdInstrs_9));
#line 166 "dupproc.m"
        }
#line 166 "dupproc.m"
      }
#line 164 "dupproc.m"
  }
#line 161 "dupproc.m"
}

#line 153 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__standardize_proc_3_p_0(
#line 153 "dupproc.m"
  MR_Word ll_backend__dupproc__CProc_4,
#line 153 "dupproc.m"
  MR_Word * ll_backend__dupproc__StdCProc_5,
#line 153 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_6)
#line 153 "dupproc.m"
{
#line 156 "dupproc.m"
  {
#line 156 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;
#line 156 "dupproc.m"
    MR_Word ll_backend__dupproc__Instrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 4)));
#line 156 "dupproc.m"
    MR_Word ll_backend__dupproc__StdInstrs_8;
#line 157 "dupproc.m"
    MR_String ll_backend__dupproc__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 0)));
#line 157 "dupproc.m"
    MR_Integer ll_backend__dupproc__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 1)));
#line 157 "dupproc.m"
    MR_Word ll_backend__dupproc__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 2)));
#line 157 "dupproc.m"
    MR_Word ll_backend__dupproc__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 3)));
#line 157 "dupproc.m"
    MR_Word ll_backend__dupproc__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 5)));
#line 157 "dupproc.m"
    MR_Word ll_backend__dupproc__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 6)));
#line 157 "dupproc.m"
    MR_Word ll_backend__dupproc__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 7)));
#line 157 "dupproc.m"
    MR_Word ll_backend__dupproc__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 8)));
#line 159 "dupproc.m"
    MR_String ll_backend__dupproc__V_17_17;
#line 159 "dupproc.m"
    MR_Integer ll_backend__dupproc__V_18_18;
#line 159 "dupproc.m"
    MR_Word ll_backend__dupproc__V_19_19;
#line 159 "dupproc.m"
    MR_Word ll_backend__dupproc__V_20_20;
#line 159 "dupproc.m"
    MR_Word ll_backend__dupproc__V_22_22;
#line 159 "dupproc.m"
    MR_Word ll_backend__dupproc__V_23_23;
#line 159 "dupproc.m"
    MR_Word ll_backend__dupproc__V_24_24;
#line 159 "dupproc.m"
    MR_Word ll_backend__dupproc__V_25_25;
#line 159 "dupproc.m"
    MR_Word ll_backend__dupproc__V_21_21;

#line 158 "dupproc.m"
    {
#line 158 "dupproc.m"
      ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_7, &ll_backend__dupproc__StdInstrs_8, ll_backend__dupproc__DupProcMap_6);
    }
#line 159 "dupproc.m"
    ll_backend__dupproc__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 0)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 1)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 2)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 3)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 4)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 5)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 6)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 7)));
#line 159 "dupproc.m"
    ll_backend__dupproc__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__CProc_4, (MR_Integer) 8)));
#line 159 "dupproc.m"
    {
#line 159 "dupproc.m"
      MR_Word base;
#line 159 "dupproc.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 159 "dupproc.m"
      *ll_backend__dupproc__StdCProc_5 = base;
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__dupproc__V_17_17));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__dupproc__V_18_18));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__dupproc__V_19_19));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__dupproc__V_20_20));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__dupproc__StdInstrs_8));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__dupproc__V_22_22));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__dupproc__V_23_23));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__dupproc__V_24_24));
#line 159 "dupproc.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__dupproc__V_25_25));
#line 159 "dupproc.m"
    }
#line 156 "dupproc.m"
  }
#line 153 "dupproc.m"
}

#line 142 "dupproc.m"
static MR_bool MR_CALL 
ll_backend__dupproc__disallowed_instr_1_p_0(
#line 142 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1)
#line 142 "dupproc.m"
{
#line 144 "dupproc.m"
  {
#line 144 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;
#line 144 "dupproc.m"
    MR_Word ll_backend__dupproc__Instr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "dupproc.m"
    MR_String ll_backend__dupproc__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));

#line 147 "dupproc.m"
    if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 146 "dupproc.m"
      ll_backend__dupproc__succeeded = MR_TRUE;
#line 147 "dupproc.m"
    else
#line 147 "dupproc.m"
      if (((((MR_tag((MR_Word) ll_backend__dupproc__Instr_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__dupproc__Instr_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 148 "dupproc.m"
        ll_backend__dupproc__succeeded = MR_TRUE;
#line 147 "dupproc.m"
      else
#line 147 "dupproc.m"
        ll_backend__dupproc__succeeded = MR_FALSE;
#line 144 "dupproc.m"
    return ll_backend__dupproc__succeeded;
#line 144 "dupproc.m"
  }
#line 142 "dupproc.m"
}

#line 93 "dupproc.m"
static MR_bool MR_CALL 
ll_backend__dupproc__find_matching_model_proc_5_p_0(
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__Id_9,
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__Proc_10,
#line 93 "dupproc.m"
  MR_Word ll_backend__dupproc__DupProcMap_11,
#line 93 "dupproc.m"
  MR_Word * ll_backend__dupproc__MatchingId_12)
#line 93 "dupproc.m"
{
#line 98 "dupproc.m"
  while (MR_TRUE)
#line 98 "dupproc.m"
    {
#line 98 "dupproc.m"
      /* tailcall optimized into a loop */
#line 98 "dupproc.m"
      {
#line 98 "dupproc.m"
        MR_bool ll_backend__dupproc__succeeded = ((MR_tag((MR_Word) ll_backend__dupproc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__TypeCtorInfo_34_34;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__ModelId_6;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__ModelStdProc_7;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__ModelIdProcs_8;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__AugDupProcMap_13;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__StdInstrs_15;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__ModelStdInstrs_16;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__V_17_17;
#line 98 "dupproc.m"
        MR_Word ll_backend__dupproc__Instrs_39;
#line 157 "dupproc.m"
        MR_String ll_backend__dupproc__V_41_41;
#line 157 "dupproc.m"
        MR_Integer ll_backend__dupproc__V_42_42;
#line 157 "dupproc.m"
        MR_Word ll_backend__dupproc__V_43_43;
#line 157 "dupproc.m"
        MR_Word ll_backend__dupproc__V_44_44;
#line 157 "dupproc.m"
        MR_Word ll_backend__dupproc__V_45_45;
#line 157 "dupproc.m"
        MR_Word ll_backend__dupproc__V_46_46;
#line 157 "dupproc.m"
        MR_Word ll_backend__dupproc__V_47_47;
#line 157 "dupproc.m"
        MR_Word ll_backend__dupproc__V_48_48;
#line 102 "dupproc.m"
        MR_String ll_backend__dupproc__V_26_26;
#line 102 "dupproc.m"
        MR_Integer ll_backend__dupproc__V_27_27;
#line 102 "dupproc.m"
        MR_Word ll_backend__dupproc__V_28_28;
#line 102 "dupproc.m"
        MR_Word ll_backend__dupproc__V_29_29;
#line 102 "dupproc.m"
        MR_Word ll_backend__dupproc__V_30_30;
#line 102 "dupproc.m"
        MR_Word ll_backend__dupproc__V_31_31;
#line 102 "dupproc.m"
        MR_Word ll_backend__dupproc__V_32_32;
#line 102 "dupproc.m"
        MR_Word ll_backend__dupproc__V_33_33;
#line 103 "dupproc.m"
        MR_Word ll_backend__dupproc__TypeInfo_35_35;

#line 97 "dupproc.m"
        if (ll_backend__dupproc__succeeded)
#line 97 "dupproc.m"
          {
#line 97 "dupproc.m"
            ll_backend__dupproc__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 0)));
#line 97 "dupproc.m"
            ll_backend__dupproc__ModelIdProcs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__1_1, (MR_Integer) 1)));
#line 97 "dupproc.m"
            ll_backend__dupproc__ModelId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_17_17, (MR_Integer) 0)));
#line 97 "dupproc.m"
            ll_backend__dupproc__ModelStdProc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_17_17, (MR_Integer) 1)));
#line 1968 "ll_backend.dupproc.c"
            ll_backend__dupproc__TypeCtorInfo_34_34 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 99 "dupproc.m"
            {
#line 99 "dupproc.m"
              mercury__map__det_insert_4_p_0(ll_backend__dupproc__TypeCtorInfo_34_34, ll_backend__dupproc__TypeCtorInfo_34_34, ((MR_Box) (ll_backend__dupproc__Id_9)), ((MR_Box) (ll_backend__dupproc__ModelId_6)), ll_backend__dupproc__DupProcMap_11, &ll_backend__dupproc__AugDupProcMap_13);
            }
#line 157 "dupproc.m"
            ll_backend__dupproc__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 0)));
#line 157 "dupproc.m"
            ll_backend__dupproc__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 1)));
#line 157 "dupproc.m"
            ll_backend__dupproc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 2)));
#line 157 "dupproc.m"
            ll_backend__dupproc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 3)));
#line 157 "dupproc.m"
            ll_backend__dupproc__Instrs_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 4)));
#line 157 "dupproc.m"
            ll_backend__dupproc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 5)));
#line 157 "dupproc.m"
            ll_backend__dupproc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 6)));
#line 157 "dupproc.m"
            ll_backend__dupproc__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 7)));
#line 157 "dupproc.m"
            ll_backend__dupproc__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_10, (MR_Integer) 8)));
#line 158 "dupproc.m"
            {
#line 158 "dupproc.m"
              ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_39, &ll_backend__dupproc__StdInstrs_15, ll_backend__dupproc__AugDupProcMap_13);
            }
#line 102 "dupproc.m"
            ll_backend__dupproc__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 0)));
#line 102 "dupproc.m"
            ll_backend__dupproc__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 1)));
#line 102 "dupproc.m"
            ll_backend__dupproc__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 2)));
#line 102 "dupproc.m"
            ll_backend__dupproc__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 3)));
#line 102 "dupproc.m"
            ll_backend__dupproc__ModelStdInstrs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 4)));
#line 102 "dupproc.m"
            ll_backend__dupproc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 5)));
#line 102 "dupproc.m"
            ll_backend__dupproc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 6)));
#line 102 "dupproc.m"
            ll_backend__dupproc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 7)));
#line 102 "dupproc.m"
            ll_backend__dupproc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__ModelStdProc_7, (MR_Integer) 8)));
#line 2016 "ll_backend.dupproc.c"
            ll_backend__dupproc__TypeInfo_35_35 = (MR_Word) &ll_backend__dupproc_scalar_common_2[0];
#line 103 "dupproc.m"
            {
#line 103 "dupproc.m"
              ll_backend__dupproc__succeeded = mercury__builtin__unify_2_p_0(ll_backend__dupproc__TypeInfo_35_35, ((MR_Box) (ll_backend__dupproc__StdInstrs_15)), ((MR_Box) (ll_backend__dupproc__ModelStdInstrs_16)));
            }
#line 105 "dupproc.m"
            if (ll_backend__dupproc__succeeded)
#line 104 "dupproc.m"
              {
#line 104 "dupproc.m"
                *ll_backend__dupproc__MatchingId_12 = ll_backend__dupproc__ModelId_6;
#line 104 "dupproc.m"
                ll_backend__dupproc__succeeded = MR_TRUE;
#line 104 "dupproc.m"
              }
#line 105 "dupproc.m"
            else
#line 106 "dupproc.m"
              {
#line 106 "dupproc.m"
                /* direct tailcall eliminated */
#line 106 "dupproc.m"
                {
#line 106 "dupproc.m"
                  MR_Word ll_backend__dupproc__HeadVar__1__tmp_copy_1 = ll_backend__dupproc__ModelIdProcs_8;

#line 106 "dupproc.m"
                  ll_backend__dupproc__HeadVar__1_1 = ll_backend__dupproc__HeadVar__1__tmp_copy_1;
#line 106 "dupproc.m"
                }
#line 106 "dupproc.m"
                continue;
#line 106 "dupproc.m"
              }
#line 97 "dupproc.m"
          }
#line 98 "dupproc.m"
        return ll_backend__dupproc__succeeded;
#line 98 "dupproc.m"
      }
#line 98 "dupproc.m"
      break;
#line 98 "dupproc.m"
    }
#line 93 "dupproc.m"
}

#line 127 "dupproc.m"
static MR_bool MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0_1(
#line 127 "dupproc.m"
  MR_Box ll_backend__dupproc__closure_arg,
#line 127 "dupproc.m"
  MR_Box ll_backend__dupproc__wrapper_arg_1)
#line 127 "dupproc.m"
{
#line 127 "dupproc.m"
  {
#line 127 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;
#line 127 "dupproc.m"
    MR_Box ll_backend__dupproc__closure = ll_backend__dupproc__closure_arg;

#line 127 "dupproc.m"
    {
#line 127 "dupproc.m"
      return ll_backend__dupproc__succeeded = ll_backend__dupproc__disallowed_instr_1_p_0(((MR_Word) ll_backend__dupproc__wrapper_arg_1));
    }
#line 127 "dupproc.m"
    return ll_backend__dupproc__succeeded;
#line 127 "dupproc.m"
  }
#line 127 "dupproc.m"
}

#line 66 "dupproc.m"
static void MR_CALL 
ll_backend__dupproc__eliminate_dup_procs_5_p_0(
#line 66 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__1_1,
#line 66 "dupproc.m"
  MR_Word ll_backend__dupproc__HeadVar__2_2,
#line 66 "dupproc.m"
  MR_Word * ll_backend__dupproc__HeadVar__3_3,
#line 66 "dupproc.m"
  MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4,
#line 66 "dupproc.m"
  MR_Word * ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5)
#line 66 "dupproc.m"
{
#line 71 "dupproc.m"
  {
#line 71 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 71 "dupproc.m"
    if ((ll_backend__dupproc__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "dupproc.m"
      {
#line 71 "dupproc.m"
        *ll_backend__dupproc__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 71 "dupproc.m"
        *ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4;
#line 71 "dupproc.m"
      }
#line 71 "dupproc.m"
    else
#line 73 "dupproc.m"
      {
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__Id_11;
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__Proc0_12;
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__IdProcs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__Proc_14;
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__IdProcs_15;
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__ModelStdProcs_20;
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__V_25_25;
#line 73 "dupproc.m"
        MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27;
#line 84 "dupproc.m"
        MR_Word ll_backend__dupproc__MatchingId_17;
#line 84 "dupproc.m"
        MR_Word ll_backend__dupproc__ProcPrime_19;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__TypeCtorInfo_43_81;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__MaybeProc_18;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_26_26;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__Instrs0_45;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__LabelInstr_46;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__LaterInstrs_48;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__TargetLabel_49;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__Redirect_50;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__DisallowedInstrs_51;
#line 75 "dupproc.m"
        MR_Integer ll_backend__dupproc__NumLaterInstrs_52;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_55_55;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_56_56;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_57_57;
#line 75 "dupproc.m"
        MR_String ll_backend__dupproc__V_58_58;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_59_59;
#line 75 "dupproc.m"
        MR_String ll_backend__dupproc__V_32_32;
#line 75 "dupproc.m"
        MR_Integer ll_backend__dupproc__V_33_33;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_34_34;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_35_35;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_36_36;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_37_37;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_38_38;
#line 75 "dupproc.m"
        MR_Word ll_backend__dupproc__V_39_39;
#line 122 "dupproc.m"
        MR_String ll_backend__dupproc__V_63_63;
#line 122 "dupproc.m"
        MR_Integer ll_backend__dupproc__V_64_64;
#line 122 "dupproc.m"
        MR_Word ll_backend__dupproc__V_65_65;
#line 122 "dupproc.m"
        MR_Word ll_backend__dupproc__V_66_66;
#line 122 "dupproc.m"
        MR_Word ll_backend__dupproc__V_67_67;
#line 122 "dupproc.m"
        MR_Word ll_backend__dupproc__V_68_68;
#line 122 "dupproc.m"
        MR_Word ll_backend__dupproc__V_69_69;
#line 122 "dupproc.m"
        MR_Word ll_backend__dupproc__V_70_70;
#line 123 "dupproc.m"
        MR_Word ll_backend__dupproc___Comments_47;
#line 130 "dupproc.m"
        MR_Integer ll_backend__dupproc__V_60_60;

#line 72 "dupproc.m"
        ll_backend__dupproc__Id_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_24_24, (MR_Integer) 0)));
#line 72 "dupproc.m"
        ll_backend__dupproc__Proc0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_24_24, (MR_Integer) 1)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 0)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 1)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 2)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 3)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 4)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 5)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 6)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 7)));
#line 75 "dupproc.m"
        ll_backend__dupproc__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 8)));
#line 75 "dupproc.m"
        ll_backend__dupproc__succeeded = (ll_backend__dupproc__V_26_26 == (MR_Integer) 0);
#line 75 "dupproc.m"
        if (ll_backend__dupproc__succeeded)
#line 75 "dupproc.m"
          {
#line 76 "dupproc.m"
            {
#line 76 "dupproc.m"
              ll_backend__dupproc__succeeded = ll_backend__dupproc__find_matching_model_proc_5_p_0(ll_backend__dupproc__HeadVar__1_1, ll_backend__dupproc__Id_11, ll_backend__dupproc__Proc0_12, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4, &ll_backend__dupproc__MatchingId_17);
            }
#line 75 "dupproc.m"
            if (ll_backend__dupproc__succeeded)
#line 75 "dupproc.m"
              {
#line 122 "dupproc.m"
                ll_backend__dupproc__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 0)));
#line 122 "dupproc.m"
                ll_backend__dupproc__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 1)));
#line 122 "dupproc.m"
                ll_backend__dupproc__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 2)));
#line 122 "dupproc.m"
                ll_backend__dupproc__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 3)));
#line 122 "dupproc.m"
                ll_backend__dupproc__Instrs0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 4)));
#line 122 "dupproc.m"
                ll_backend__dupproc__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 5)));
#line 122 "dupproc.m"
                ll_backend__dupproc__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 6)));
#line 122 "dupproc.m"
                ll_backend__dupproc__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 7)));
#line 122 "dupproc.m"
                ll_backend__dupproc__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 8)));
#line 123 "dupproc.m"
                {
#line 123 "dupproc.m"
                  ll_backend__opt_util__get_prologue_4_p_0(ll_backend__dupproc__Instrs0_45, &ll_backend__dupproc__LabelInstr_46, &ll_backend__dupproc___Comments_47, &ll_backend__dupproc__LaterInstrs_48);
                }
#line 124 "dupproc.m"
                ll_backend__dupproc__V_55_55 = (MR_Integer) 1;
#line 126 "dupproc.m"
                ll_backend__dupproc__V_58_58 = (MR_String) "Redirect to procedure with identical body";
#line 127 "dupproc.m"
                ll_backend__dupproc__V_59_59 = (MR_Word) &ll_backend__dupproc_scalar_common_1[1];
#line 2282 "ll_backend.dupproc.c"
                ll_backend__dupproc__TypeCtorInfo_43_81 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 124 "dupproc.m"
                {
#line 124 "dupproc.m"
                  ll_backend__dupproc__TargetLabel_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "dupproc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dupproc__TargetLabel_49, 0) = ((MR_Box) (ll_backend__dupproc__V_55_55));
#line 124 "dupproc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dupproc__TargetLabel_49, 1) = ((MR_Box) (ll_backend__dupproc__MatchingId_17));
#line 124 "dupproc.m"
                }
#line 125 "dupproc.m"
                {
#line 125 "dupproc.m"
                  ll_backend__dupproc__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 125 "dupproc.m"
                  MR_hl_field(MR_mktag(1), ll_backend__dupproc__V_57_57, 0) = ((MR_Box) (ll_backend__dupproc__TargetLabel_49));
#line 125 "dupproc.m"
                }
#line 125 "dupproc.m"
                {
#line 125 "dupproc.m"
                  ll_backend__dupproc__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "dupproc.m"
                  MR_hl_field(MR_mktag(3), ll_backend__dupproc__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 125 "dupproc.m"
                  MR_hl_field(MR_mktag(3), ll_backend__dupproc__V_56_56, 1) = ((MR_Box) (ll_backend__dupproc__V_57_57));
#line 125 "dupproc.m"
                }
#line 125 "dupproc.m"
                {
#line 125 "dupproc.m"
                  ll_backend__dupproc__Redirect_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 125 "dupproc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__dupproc__Redirect_50, 0) = ((MR_Box) (ll_backend__dupproc__V_56_56));
#line 125 "dupproc.m"
                  MR_hl_field(MR_mktag(0), ll_backend__dupproc__Redirect_50, 1) = ((MR_Box) (ll_backend__dupproc__V_58_58));
#line 125 "dupproc.m"
                }
#line 127 "dupproc.m"
                {
#line 127 "dupproc.m"
                  mercury__list__filter_3_p_0(ll_backend__dupproc__TypeCtorInfo_43_81, ll_backend__dupproc__V_59_59, ll_backend__dupproc__LaterInstrs_48, &ll_backend__dupproc__DisallowedInstrs_51);
                }
#line 128 "dupproc.m"
                {
#line 128 "dupproc.m"
                  mercury__list__length_2_p_0(ll_backend__dupproc__TypeCtorInfo_43_81, ll_backend__dupproc__LaterInstrs_48, &ll_backend__dupproc__NumLaterInstrs_52);
                }
#line 130 "dupproc.m"
                ll_backend__dupproc__succeeded = (ll_backend__dupproc__DisallowedInstrs_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "dupproc.m"
                if (ll_backend__dupproc__succeeded)
#line 130 "dupproc.m"
                  {
#line 133 "dupproc.m"
                    ll_backend__dupproc__V_60_60 = (MR_Integer) 6;
#line 133 "dupproc.m"
                    ll_backend__dupproc__succeeded = (ll_backend__dupproc__NumLaterInstrs_52 < ll_backend__dupproc__V_60_60);
#line 130 "dupproc.m"
                  }
#line 136 "dupproc.m"
                if (ll_backend__dupproc__succeeded)
#line 135 "dupproc.m"
                  ll_backend__dupproc__MaybeProc_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "dupproc.m"
                else
#line 137 "dupproc.m"
                  {
#line 137 "dupproc.m"
                    MR_Word ll_backend__dupproc__Instrs_53;
#line 137 "dupproc.m"
                    MR_Word ll_backend__dupproc__Proc_54;
#line 137 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_61_61;
#line 138 "dupproc.m"
                    MR_String ll_backend__dupproc__V_71_71;
#line 138 "dupproc.m"
                    MR_Integer ll_backend__dupproc__V_72_72;
#line 138 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_73_73;
#line 138 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_74_74;
#line 138 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_76_76;
#line 138 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_77_77;
#line 138 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_78_78;
#line 138 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_79_79;
#line 138 "dupproc.m"
                    MR_Word ll_backend__dupproc__V_75_75;

#line 137 "dupproc.m"
                    {
#line 137 "dupproc.m"
                      ll_backend__dupproc__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "dupproc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__V_61_61, 0) = ((MR_Box) (ll_backend__dupproc__Redirect_50));
#line 137 "dupproc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 137 "dupproc.m"
                    }
#line 137 "dupproc.m"
                    {
#line 137 "dupproc.m"
                      ll_backend__dupproc__Instrs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 137 "dupproc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__Instrs_53, 0) = ((MR_Box) (ll_backend__dupproc__LabelInstr_46));
#line 137 "dupproc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__Instrs_53, 1) = ((MR_Box) (ll_backend__dupproc__V_61_61));
#line 137 "dupproc.m"
                    }
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 0)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 1)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 2)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 3)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 4)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 5)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 6)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 7)));
#line 138 "dupproc.m"
                    ll_backend__dupproc__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc0_12, (MR_Integer) 8)));
#line 138 "dupproc.m"
                    {
#line 138 "dupproc.m"
                      ll_backend__dupproc__Proc_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 0) = ((MR_Box) (ll_backend__dupproc__V_71_71));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 1) = ((MR_Box) (ll_backend__dupproc__V_72_72));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 2) = ((MR_Box) (ll_backend__dupproc__V_73_73));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 3) = ((MR_Box) (ll_backend__dupproc__V_74_74));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 4) = ((MR_Box) (ll_backend__dupproc__Instrs_53));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 5) = ((MR_Box) (ll_backend__dupproc__V_76_76));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 6) = ((MR_Box) (ll_backend__dupproc__V_77_77));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 7) = ((MR_Box) (ll_backend__dupproc__V_78_78));
#line 138 "dupproc.m"
                      MR_hl_field(MR_mktag(0), ll_backend__dupproc__Proc_54, 8) = ((MR_Box) (ll_backend__dupproc__V_79_79));
#line 138 "dupproc.m"
                    }
#line 139 "dupproc.m"
                    {
#line 139 "dupproc.m"
                      ll_backend__dupproc__MaybeProc_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 139 "dupproc.m"
                      MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeProc_18, 0) = ((MR_Box) (ll_backend__dupproc__Proc_54));
#line 139 "dupproc.m"
                    }
#line 137 "dupproc.m"
                  }
#line 79 "dupproc.m"
                ll_backend__dupproc__succeeded = ((MR_tag((MR_Word) ll_backend__dupproc__MaybeProc_18)) == (MR_mktag((MR_Integer) 1)));
#line 79 "dupproc.m"
                if (ll_backend__dupproc__succeeded)
#line 79 "dupproc.m"
                  ll_backend__dupproc__ProcPrime_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__MaybeProc_18, (MR_Integer) 0)));
#line 75 "dupproc.m"
              }
#line 75 "dupproc.m"
          }
#line 84 "dupproc.m"
        if (ll_backend__dupproc__succeeded)
#line 81 "dupproc.m"
          {
#line 81 "dupproc.m"
            MR_Word ll_backend__dupproc__TypeCtorInfo_40_40;

#line 81 "dupproc.m"
            ll_backend__dupproc__Proc_14 = ll_backend__dupproc__ProcPrime_19;
#line 2468 "ll_backend.dupproc.c"
            ll_backend__dupproc__TypeCtorInfo_40_40 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 82 "dupproc.m"
            {
#line 82 "dupproc.m"
              mercury__map__det_insert_4_p_0(ll_backend__dupproc__TypeCtorInfo_40_40, ll_backend__dupproc__TypeCtorInfo_40_40, ((MR_Box) (ll_backend__dupproc__Id_11)), ((MR_Box) (ll_backend__dupproc__MatchingId_17)), ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4, &ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27);
            }
#line 83 "dupproc.m"
            ll_backend__dupproc__ModelStdProcs_20 = ll_backend__dupproc__HeadVar__1_1;
#line 81 "dupproc.m"
          }
#line 84 "dupproc.m"
        else
#line 85 "dupproc.m"
          {
#line 85 "dupproc.m"
            MR_Word ll_backend__dupproc__StdProc0_21;
#line 85 "dupproc.m"
            MR_Word ll_backend__dupproc__V_28_28;
#line 85 "dupproc.m"
            MR_Word ll_backend__dupproc__V_29_29;

#line 85 "dupproc.m"
            ll_backend__dupproc__Proc_14 = ll_backend__dupproc__Proc0_12;
#line 86 "dupproc.m"
            {
#line 86 "dupproc.m"
              ll_backend__dupproc__standardize_proc_3_p_0(ll_backend__dupproc__Proc0_12, &ll_backend__dupproc__StdProc0_21, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4);
            }
#line 89 "dupproc.m"
            {
#line 89 "dupproc.m"
              ll_backend__dupproc__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 89 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_29_29, 0) = ((MR_Box) (ll_backend__dupproc__Id_11));
#line 89 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_29_29, 1) = ((MR_Box) (ll_backend__dupproc__StdProc0_21));
#line 89 "dupproc.m"
            }
#line 89 "dupproc.m"
            {
#line 89 "dupproc.m"
              ll_backend__dupproc__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 89 "dupproc.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__V_28_28, 0) = ((MR_Box) (ll_backend__dupproc__V_29_29));
#line 89 "dupproc.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 89 "dupproc.m"
            }
#line 89 "dupproc.m"
            {
#line 89 "dupproc.m"
              mercury__list__append_3_p_1((MR_Word) &ll_backend__dupproc_scalar_common_1[0], ll_backend__dupproc__HeadVar__1_1, ll_backend__dupproc__V_28_28, &ll_backend__dupproc__ModelStdProcs_20);
            }
#line 89 "dupproc.m"
            ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_4;
#line 85 "dupproc.m"
          }
#line 73 "dupproc.m"
        {
#line 73 "dupproc.m"
          ll_backend__dupproc__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 73 "dupproc.m"
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_25_25, 0) = ((MR_Box) (ll_backend__dupproc__Id_11));
#line 73 "dupproc.m"
          MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_25_25, 1) = ((MR_Box) (ll_backend__dupproc__Proc_14));
#line 73 "dupproc.m"
        }
#line 91 "dupproc.m"
        {
#line 91 "dupproc.m"
          ll_backend__dupproc__eliminate_dup_procs_5_p_0(ll_backend__dupproc__ModelStdProcs_20, ll_backend__dupproc__IdProcs0_13, &ll_backend__dupproc__IdProcs_15, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_27_27, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_5);
        }
#line 73 "dupproc.m"
        {
#line 73 "dupproc.m"
          MR_Word base;
#line 73 "dupproc.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 73 "dupproc.m"
          *ll_backend__dupproc__HeadVar__3_3 = base;
#line 73 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__V_25_25));
#line 73 "dupproc.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__IdProcs_15));
#line 73 "dupproc.m"
        }
#line 73 "dupproc.m"
      }
#line 71 "dupproc.m"
  }
#line 66 "dupproc.m"
}

#line 31 "dupproc.m"
void MR_CALL 
ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(
#line 31 "dupproc.m"
  MR_Word ll_backend__dupproc__IdProcs_5,
#line 31 "dupproc.m"
  MR_Word * ll_backend__dupproc__Procs_6,
#line 31 "dupproc.m"
  MR_Word ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18,
#line 31 "dupproc.m"
  MR_Word * ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19)
#line 31 "dupproc.m"
{
#line 51 "dupproc.m"
  {
#line 51 "dupproc.m"
    MR_bool ll_backend__dupproc__succeeded;

#line 51 "dupproc.m"
    if ((ll_backend__dupproc__IdProcs_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 51 "dupproc.m"
      {
#line 52 "dupproc.m"
        *ll_backend__dupproc__Procs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 52 "dupproc.m"
        *ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18;
#line 51 "dupproc.m"
      }
#line 51 "dupproc.m"
    else
#line 51 "dupproc.m"
      {
#line 51 "dupproc.m"
        MR_Word ll_backend__dupproc__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__IdProcs_5, (MR_Integer) 1)));
#line 51 "dupproc.m"
        MR_Word ll_backend__dupproc__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__dupproc__IdProcs_5, (MR_Integer) 0)));
#line 51 "dupproc.m"
        MR_Word ll_backend__dupproc__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_31_31, (MR_Integer) 1)));
#line 51 "dupproc.m"
        MR_Word ll_backend__dupproc__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_31_31, (MR_Integer) 0)));

#line 51 "dupproc.m"
        if ((ll_backend__dupproc__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 54 "dupproc.m"
          {
#line 55 "dupproc.m"
            {
#line 55 "dupproc.m"
              MR_Word base;
#line 55 "dupproc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 55 "dupproc.m"
              *ll_backend__dupproc__Procs_6 = base;
#line 55 "dupproc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__V_32_32));
#line 55 "dupproc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 55 "dupproc.m"
            }
#line 55 "dupproc.m"
            *ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19 = ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18;
#line 54 "dupproc.m"
          }
#line 51 "dupproc.m"
        else
#line 57 "dupproc.m"
          {
#line 57 "dupproc.m"
            MR_Word ll_backend__dupproc__StdProc1_15;
#line 57 "dupproc.m"
            MR_Word ll_backend__dupproc__FinalIdProcsTail_16;
#line 57 "dupproc.m"
            MR_Word ll_backend__dupproc__FinalProcsTail_17;
#line 57 "dupproc.m"
            MR_Word ll_backend__dupproc__V_21_21;
#line 57 "dupproc.m"
            MR_Word ll_backend__dupproc__V_23_23;
#line 57 "dupproc.m"
            MR_Word ll_backend__dupproc__Instrs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 4)));
#line 57 "dupproc.m"
            MR_Word ll_backend__dupproc__StdInstrs_38;
#line 157 "dupproc.m"
            MR_String ll_backend__dupproc__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 0)));
#line 157 "dupproc.m"
            MR_Integer ll_backend__dupproc__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 1)));
#line 157 "dupproc.m"
            MR_Word ll_backend__dupproc__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 2)));
#line 157 "dupproc.m"
            MR_Word ll_backend__dupproc__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 3)));
#line 157 "dupproc.m"
            MR_Word ll_backend__dupproc__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 5)));
#line 157 "dupproc.m"
            MR_Word ll_backend__dupproc__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 6)));
#line 157 "dupproc.m"
            MR_Word ll_backend__dupproc__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 7)));
#line 157 "dupproc.m"
            MR_Word ll_backend__dupproc__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 8)));
#line 159 "dupproc.m"
            MR_String ll_backend__dupproc__V_47_47;
#line 159 "dupproc.m"
            MR_Integer ll_backend__dupproc__V_48_48;
#line 159 "dupproc.m"
            MR_Word ll_backend__dupproc__V_49_49;
#line 159 "dupproc.m"
            MR_Word ll_backend__dupproc__V_50_50;
#line 159 "dupproc.m"
            MR_Word ll_backend__dupproc__V_52_52;
#line 159 "dupproc.m"
            MR_Word ll_backend__dupproc__V_53_53;
#line 159 "dupproc.m"
            MR_Word ll_backend__dupproc__V_54_54;
#line 159 "dupproc.m"
            MR_Word ll_backend__dupproc__V_55_55;
#line 159 "dupproc.m"
            MR_Word ll_backend__dupproc__V_51_51;

#line 158 "dupproc.m"
            {
#line 158 "dupproc.m"
              ll_backend__dupproc__standardize_instrs_3_p_0(ll_backend__dupproc__Instrs_37, &ll_backend__dupproc__StdInstrs_38, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18);
            }
#line 159 "dupproc.m"
            ll_backend__dupproc__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 0)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 1)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 2)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 3)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 4)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 5)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 6)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 7)));
#line 159 "dupproc.m"
            ll_backend__dupproc__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_32_32, (MR_Integer) 8)));
#line 159 "dupproc.m"
            {
#line 159 "dupproc.m"
              ll_backend__dupproc__StdProc1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 0) = ((MR_Box) (ll_backend__dupproc__V_47_47));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 1) = ((MR_Box) (ll_backend__dupproc__V_48_48));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 2) = ((MR_Box) (ll_backend__dupproc__V_49_49));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 3) = ((MR_Box) (ll_backend__dupproc__V_50_50));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 4) = ((MR_Box) (ll_backend__dupproc__StdInstrs_38));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 5) = ((MR_Box) (ll_backend__dupproc__V_52_52));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 6) = ((MR_Box) (ll_backend__dupproc__V_53_53));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 7) = ((MR_Box) (ll_backend__dupproc__V_54_54));
#line 159 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__StdProc1_15, 8) = ((MR_Box) (ll_backend__dupproc__V_55_55));
#line 159 "dupproc.m"
            }
#line 60 "dupproc.m"
            {
#line 60 "dupproc.m"
              ll_backend__dupproc__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 60 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_23_23, 0) = ((MR_Box) (ll_backend__dupproc__V_33_33));
#line 60 "dupproc.m"
              MR_hl_field(MR_mktag(0), ll_backend__dupproc__V_23_23, 1) = ((MR_Box) (ll_backend__dupproc__StdProc1_15));
#line 60 "dupproc.m"
            }
#line 60 "dupproc.m"
            {
#line 60 "dupproc.m"
              ll_backend__dupproc__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 60 "dupproc.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__V_21_21, 0) = ((MR_Box) (ll_backend__dupproc__V_23_23));
#line 60 "dupproc.m"
              MR_hl_field(MR_mktag(1), ll_backend__dupproc__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 60 "dupproc.m"
            }
#line 60 "dupproc.m"
            {
#line 60 "dupproc.m"
              ll_backend__dupproc__eliminate_dup_procs_5_p_0(ll_backend__dupproc__V_21_21, ll_backend__dupproc__V_30_30, &ll_backend__dupproc__FinalIdProcsTail_16, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_0_18, ll_backend__dupproc__STATE_VARIABLE_DupProcMap_19);
            }
#line 62 "dupproc.m"
            {
#line 62 "dupproc.m"
              mercury__assoc_list__values_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, ll_backend__dupproc__FinalIdProcsTail_16, &ll_backend__dupproc__FinalProcsTail_17);
            }
#line 63 "dupproc.m"
            {
#line 63 "dupproc.m"
              MR_Word base;
#line 63 "dupproc.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 63 "dupproc.m"
              *ll_backend__dupproc__Procs_6 = base;
#line 63 "dupproc.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__dupproc__V_32_32));
#line 63 "dupproc.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__dupproc__FinalProcsTail_17));
#line 63 "dupproc.m"
            }
#line 57 "dupproc.m"
          }
#line 51 "dupproc.m"
      }
#line 51 "dupproc.m"
  }
#line 31 "dupproc.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.dupproc. */
