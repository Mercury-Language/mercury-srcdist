/*
** Automatically generated from `check_promise.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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


/* :- module check_hlds.check_promise. */
/* :- implementation. */

/*
INIT mercury__check_hlds__check_promise__init
ENDINIT
*/

#include "check_hlds.check_promise.mih"


#include "analysis.mih"
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
#include "check_hlds.proc_requests.mih"
#include "hlds.assertion.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
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




static const MR_FA_TypeInfo_Struct1 check_hlds__check_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0;

static void MR_CALL 
check_hlds__check_promise__check_and_store_promise_7_p_0_1(
  MR_Box check_hlds__check_promise__closure_arg,
  MR_Box check_hlds__check_promise__wrapper_arg_1,
  MR_Box check_hlds__check_promise__wrapper_arg_2,
  MR_Box * check_hlds__check_promise__wrapper_arg_3);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(
  MR_Word check_hlds__check_promise__HeadVar__1_1,
  MR_Word check_hlds__check_promise__HeadVar__2_2,
  MR_Word check_hlds__check_promise__HeadVar__3_3,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_unify_rhs_7_p_0(
  MR_Word check_hlds__check_promise__ModuleInfo_8,
  MR_Word check_hlds__check_promise__PredInfo_9,
  MR_Word check_hlds__check_promise__Var_10,
  MR_Word check_hlds__check_promise__RHS_11,
  MR_Word check_hlds__check_promise__Context_12,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_36,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_37);

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(
  MR_Word check_hlds__check_promise__ModuleInfo_6,
  MR_Word check_hlds__check_promise__PredInfo_7,
  MR_Word check_hlds__check_promise__Goal_8,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_65,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_66);

static void MR_CALL 
check_hlds__check_promise__report_assertion_interface_error_5_p_0(
  MR_Word check_hlds__check_promise__ModuleInfo_6,
  MR_Word check_hlds__check_promise__Context_7,
  MR_Word check_hlds__check_promise__IdPieces_8,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_15,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_16);


static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_3[1][7];




static /* final */ const MR_Box check_hlds__check_promise_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: exported promise refers to"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[3])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or move the definition into the interface."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Either move the promise into the implementation section"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In interface for module"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "which is defined in the implementation section of module"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[12])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__check_promise_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "constructor"))
  },
};

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_promise_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box check_hlds__check_promise_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__check_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__check_promise__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &check_hlds__check_promise__list__ti_list_1hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

static void MR_CALL 
check_hlds__check_promise__check_and_store_promise_7_p_0_1(
  MR_Box check_hlds__check_promise__closure_arg,
  MR_Box check_hlds__check_promise__wrapper_arg_1,
  MR_Box check_hlds__check_promise__wrapper_arg_2,
  MR_Box * check_hlds__check_promise__wrapper_arg_3)
{
  {
    MR_Box check_hlds__check_promise__closure = check_hlds__check_promise__closure_arg;
    MR_Word check_hlds__check_promise__conv0_HeadVar__4_4;

    {
      hlds__hlds_data__exclusive_table_add_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__check_promise__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__check_promise__wrapper_arg_1), ((MR_Word) check_hlds__check_promise__wrapper_arg_2), &check_hlds__check_promise__conv0_HeadVar__4_4);
    }
    *check_hlds__check_promise__wrapper_arg_3 = ((MR_Box) (check_hlds__check_promise__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
check_hlds__check_promise__check_and_store_promise_7_p_0(
  MR_Word check_hlds__check_promise__PredId_8,
  MR_Word check_hlds__check_promise__PredInfo_9,
  MR_Word check_hlds__check_promise__PromiseType_10,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_15,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_16,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool check_hlds__check_promise__succeeded;
    MR_Word check_hlds__check_promise__Goal_13;
    MR_Word check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_18_18;

    switch (check_hlds__check_promise__PromiseType_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__check_promise__PredIds_31;
          MR_Word check_hlds__check_promise__Table0_32;
          MR_Word check_hlds__check_promise__Table_33;
          MR_Word check_hlds__check_promise__Var_34;
          MR_Word check_hlds__check_promise__ClausesInfo_45;
          MR_Word check_hlds__check_promise__ClausesRep_46;
          MR_Word check_hlds__check_promise__Clauses_48;
          MR_Word check_hlds__check_promise___ItemNumbers_47;
          MR_Word check_hlds__check_promise__Clause_49;
          MR_Word check_hlds__check_promise__Var_51;
          MR_Box check_hlds__check_promise__conv1_Table_33;

          {
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__check_promise__PredInfo_9, &check_hlds__check_promise__ClausesInfo_45);
          }
          {
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__check_promise__ClausesInfo_45, &check_hlds__check_promise__ClausesRep_46, &check_hlds__check_promise___ItemNumbers_47);
          }
          {
            hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__check_promise__ClausesRep_46, &check_hlds__check_promise__Clauses_48);
          }
          check_hlds__check_promise__succeeded = ((MR_tag((MR_Word) check_hlds__check_promise__Clauses_48)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__check_promise__succeeded)
            {
              check_hlds__check_promise__Clause_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__Clauses_48, (MR_Integer) 0)));
              check_hlds__check_promise__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__Clauses_48, (MR_Integer) 1)));
              check_hlds__check_promise__succeeded = (check_hlds__check_promise__Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          if (check_hlds__check_promise__succeeded)
            {
              MR_Word check_hlds__check_promise__Goal0_50;

              {
                check_hlds__check_promise__Goal0_50 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__check_promise__Clause_49);
              }
              {
                hlds__assertion__normalise_goal_2_p_0(check_hlds__check_promise__Goal0_50, &check_hlds__check_promise__Goal_13);
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_promise", (MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                return;
              }
            }
          {
            hlds__goal_util__predids_from_goal_2_p_0(check_hlds__check_promise__Goal_13, &check_hlds__check_promise__PredIds_31);
          }
          {
            hlds__hlds_module__module_info_get_exclusive_table_2_p_0(check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__check_promise__Table0_32);
          }
          {
            check_hlds__check_promise__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_34, 0) = ((MR_Box) (&check_hlds__check_promise_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_34, 1) = ((MR_Box) (check_hlds__check_promise__check_and_store_promise_7_p_0_1));
            MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_34, 3) = ((MR_Box) (check_hlds__check_promise__PredId_8));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &check_hlds__check_promise_scalar_common_2[0], check_hlds__check_promise__Var_34, check_hlds__check_promise__PredIds_31, ((MR_Box) (check_hlds__check_promise__Table0_32)), &check_hlds__check_promise__conv1_Table_33);
          }
          check_hlds__check_promise__Table_33 = ((MR_Word) check_hlds__check_promise__conv1_Table_33);
          {
            hlds__hlds_module__module_info_set_exclusive_table_3_p_0(check_hlds__check_promise__Table_33, check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_18_18);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__check_promise__ClausesInfo_57;
          MR_Word check_hlds__check_promise__ClausesRep_58;
          MR_Word check_hlds__check_promise__Clauses_60;
          MR_Word check_hlds__check_promise___ItemNumbers_59;
          MR_Word check_hlds__check_promise__Clause_61;
          MR_Word check_hlds__check_promise__Var_63;

          {
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__check_promise__PredInfo_9, &check_hlds__check_promise__ClausesInfo_57);
          }
          {
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__check_promise__ClausesInfo_57, &check_hlds__check_promise__ClausesRep_58, &check_hlds__check_promise___ItemNumbers_59);
          }
          {
            hlds__hlds_clauses__get_clause_list_maybe_repeated_2_p_0(check_hlds__check_promise__ClausesRep_58, &check_hlds__check_promise__Clauses_60);
          }
          check_hlds__check_promise__succeeded = ((MR_tag((MR_Word) check_hlds__check_promise__Clauses_60)) == (MR_mktag((MR_Integer) 1)));
          if (check_hlds__check_promise__succeeded)
            {
              check_hlds__check_promise__Clause_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__Clauses_60, (MR_Integer) 0)));
              check_hlds__check_promise__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__Clauses_60, (MR_Integer) 1)));
              check_hlds__check_promise__succeeded = (check_hlds__check_promise__Var_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          if (check_hlds__check_promise__succeeded)
            {
              MR_Word check_hlds__check_promise__Goal0_62;

              {
                check_hlds__check_promise__Goal0_62 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__check_promise__Clause_61);
              }
              {
                hlds__assertion__normalise_goal_2_p_0(check_hlds__check_promise__Goal0_62, &check_hlds__check_promise__Goal_13);
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_promise", (MR_String) "predicate \140check_hlds.check_promise.get_promise_ex_goal\'/2", (MR_String) "not a single clause");
                return;
              }
            }
          check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_18_18 = check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_0_14;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word check_hlds__check_promise__AssertTable0_28;
          MR_Integer check_hlds__check_promise__AssertionId_29;
          MR_Word check_hlds__check_promise__AssertTable_30;
          MR_Word check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_22_36;

          {
            hlds__hlds_module__module_info_get_assertion_table_2_p_0(check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__check_promise__AssertTable0_28);
          }
          {
            hlds__hlds_data__assertion_table_add_assertion_4_p_0(check_hlds__check_promise__PredId_8, &check_hlds__check_promise__AssertionId_29, check_hlds__check_promise__AssertTable0_28, &check_hlds__check_promise__AssertTable_30);
          }
          {
            hlds__hlds_module__module_info_set_assertion_table_3_p_0(check_hlds__check_promise__AssertTable_30, check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_0_14, &check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_22_36);
          }
          {
            hlds__assertion__assert_id_goal_3_p_0(check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_22_36, check_hlds__check_promise__AssertionId_29, &check_hlds__check_promise__Goal_13);
          }
          {
            hlds__assertion__record_preds_used_in_4_p_0(check_hlds__check_promise__Goal_13, check_hlds__check_promise__AssertionId_29, check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_22_36, &check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_18_18);
          }
        }
        break;
    }
    {
      hlds__hlds_module__module_info_make_pred_id_invalid_3_p_0(check_hlds__check_promise__PredId_8, check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_18_18, check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_15);
    }
    {
      check_hlds__check_promise__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(check_hlds__check_promise__PredInfo_9);
    }
    if (check_hlds__check_promise__succeeded)
      {
        check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(*check_hlds__check_promise__STATE_VARIABLE_ModuleInfo_15, check_hlds__check_promise__PredInfo_9, check_hlds__check_promise__Goal_13, check_hlds__check_promise__STATE_VARIABLE_Specs_0_16, check_hlds__check_promise__STATE_VARIABLE_Specs_17);
      }
    else
      *check_hlds__check_promise__STATE_VARIABLE_Specs_17 = check_hlds__check_promise__STATE_VARIABLE_Specs_0_16;
  }
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(
  MR_Word check_hlds__check_promise__HeadVar__1_1,
  MR_Word check_hlds__check_promise__HeadVar__2_2,
  MR_Word check_hlds__check_promise__HeadVar__3_3,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__check_promise__succeeded;

        if ((check_hlds__check_promise__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__check_promise__STATE_VARIABLE_Specs_5 = check_hlds__check_promise__STATE_VARIABLE_Specs_0_4;
        else
          {
            MR_Word check_hlds__check_promise__Goal0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word check_hlds__check_promise__Goal0s_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_18_18;

            {
              check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(check_hlds__check_promise__HeadVar__1_1, check_hlds__check_promise__HeadVar__2_2, check_hlds__check_promise__Goal0_13, check_hlds__check_promise__STATE_VARIABLE_Specs_0_4, &check_hlds__check_promise__STATE_VARIABLE_Specs_18_18);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__check_promise__next_value_of_HeadVar__3_3 = check_hlds__check_promise__Goal0s_14;
              MR_Word check_hlds__check_promise__next_value_of_STATE_VARIABLE_Specs_0_4 = check_hlds__check_promise__STATE_VARIABLE_Specs_18_18;

              check_hlds__check_promise__STATE_VARIABLE_Specs_0_4 = check_hlds__check_promise__next_value_of_STATE_VARIABLE_Specs_0_4;
              check_hlds__check_promise__HeadVar__3_3 = check_hlds__check_promise__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_unify_rhs_7_p_0(
  MR_Word check_hlds__check_promise__ModuleInfo_8,
  MR_Word check_hlds__check_promise__PredInfo_9,
  MR_Word check_hlds__check_promise__Var_10,
  MR_Word check_hlds__check_promise__RHS_11,
  MR_Word check_hlds__check_promise__Context_12,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_36,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_37)
{
  {
    MR_bool check_hlds__check_promise__succeeded;

    switch (MR_tag((MR_Word) check_hlds__check_promise__RHS_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *check_hlds__check_promise__STATE_VARIABLE_Specs_37 = check_hlds__check_promise__STATE_VARIABLE_Specs_0_36;
        break;
      case (MR_Integer) 1:
        {
          MR_Word check_hlds__check_promise__ConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__RHS_11, (MR_Integer) 0)));
          MR_Word check_hlds__check_promise__ClausesInfo_18;
          MR_Word check_hlds__check_promise__VarTypes_19;
          MR_Word check_hlds__check_promise__Type_20;
          MR_Word check_hlds__check_promise__TypeCtor_21;
          MR_Word check_hlds__check_promise__TypeTable_22;
          MR_Word check_hlds__check_promise__TypeDefn_23;
          MR_Word check_hlds__check_promise__TypeStatus_24;
          MR_Word check_hlds__check_promise__DefinedInImpl_25;
          MR_Word check_hlds__check_promise__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__RHS_11, (MR_Integer) 1)));
          MR_Word check_hlds__check_promise__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__RHS_11, (MR_Integer) 2)));

          {
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__check_promise__PredInfo_9, &check_hlds__check_promise__ClausesInfo_18);
          }
          {
            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(check_hlds__check_promise__ClausesInfo_18, &check_hlds__check_promise__VarTypes_19);
          }
          {
            hlds__vartypes__lookup_var_type_3_p_0(check_hlds__check_promise__VarTypes_19, check_hlds__check_promise__Var_10, &check_hlds__check_promise__Type_20);
          }
          {
            parse_tree__prog_type__type_to_ctor_det_2_p_0(check_hlds__check_promise__Type_20, &check_hlds__check_promise__TypeCtor_21);
          }
          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__check_promise__ModuleInfo_8, &check_hlds__check_promise__TypeTable_22);
          }
          {
            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__check_promise__TypeTable_22, check_hlds__check_promise__TypeCtor_21, &check_hlds__check_promise__TypeDefn_23);
          }
          {
            hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__check_promise__TypeDefn_23, &check_hlds__check_promise__TypeStatus_24);
          }
          {
            check_hlds__check_promise__DefinedInImpl_25 = hlds__status__type_status_defined_in_impl_section_1_f_0(check_hlds__check_promise__TypeStatus_24);
          }
          switch (check_hlds__check_promise__DefinedInImpl_25) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *check_hlds__check_promise__STATE_VARIABLE_Specs_37 = check_hlds__check_promise__STATE_VARIABLE_Specs_0_36;
              break;
            case (MR_Integer) 1:
              {
                MR_Word check_hlds__check_promise__IdPieces_26;
                MR_Word check_hlds__check_promise__Var_41;
                MR_Word check_hlds__check_promise__Var_42;

                {
                  check_hlds__check_promise__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                  MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_42, 1) = ((MR_Box) (check_hlds__check_promise__ConsId_15));
                }
                {
                  check_hlds__check_promise__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_41, 0) = ((MR_Box) (check_hlds__check_promise__Var_42));
                  MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  check_hlds__check_promise__IdPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), check_hlds__check_promise__IdPieces_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[17])));
                  MR_hl_field(MR_mktag(1), check_hlds__check_promise__IdPieces_26, 1) = ((MR_Box) (check_hlds__check_promise__Var_41));
                }
                {
                  check_hlds__check_promise__report_assertion_interface_error_5_p_0(check_hlds__check_promise__ModuleInfo_8, check_hlds__check_promise__Context_12, check_hlds__check_promise__IdPieces_26, check_hlds__check_promise__STATE_VARIABLE_Specs_0_36, check_hlds__check_promise__STATE_VARIABLE_Specs_37);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word check_hlds__check_promise__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 6)));
          MR_Word check_hlds__check_promise__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 0)))) & (MR_Integer) 3);
          MR_Word check_hlds__check_promise__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          MR_Word check_hlds__check_promise__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
          MR_Word check_hlds__check_promise__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 2)));
          MR_Word check_hlds__check_promise__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 3)));
          MR_Word check_hlds__check_promise__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 4)));
          MR_Word check_hlds__check_promise__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__RHS_11, (MR_Integer) 5)));

          {
            check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(check_hlds__check_promise__ModuleInfo_8, check_hlds__check_promise__PredInfo_9, check_hlds__check_promise__Goal_35, check_hlds__check_promise__STATE_VARIABLE_Specs_0_36, check_hlds__check_promise__STATE_VARIABLE_Specs_37);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(
  MR_Word check_hlds__check_promise__ModuleInfo_6,
  MR_Word check_hlds__check_promise__PredInfo_7,
  MR_Word check_hlds__check_promise__Goal_8,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_65,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_66)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__check_promise__succeeded;
        MR_Word check_hlds__check_promise__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__check_promise__Goal_8, (MR_Integer) 0)));
        MR_Word check_hlds__check_promise__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__check_promise__Goal_8, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__check_promise__GoalExpr_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__check_promise__SubGoal_48 = (MR_Word) MR_body(((MR_Word) check_hlds__check_promise__GoalExpr_10), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__check_promise__next_value_of_Goal_8 = check_hlds__check_promise__SubGoal_48;

                check_hlds__check_promise__Goal_8 = check_hlds__check_promise__next_value_of_Goal_8;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__check_promise__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 0)));
              MR_Word check_hlds__check_promise__RHS_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__check_promise__Context_91;
              MR_Word check_hlds__check_promise__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__check_promise__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 3)));
              MR_Word check_hlds__check_promise__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 4)));

              {
                check_hlds__check_promise__Context_91 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__check_promise__GoalInfo_11);
              }
              {
                check_hlds__check_promise__check_in_interface_promise_unify_rhs_7_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__Var_30, check_hlds__check_promise__RHS_31, check_hlds__check_promise__Context_91, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, check_hlds__check_promise__STATE_VARIABLE_Specs_66);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__check_promise__PredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 0)));
              MR_Word check_hlds__check_promise__SymName_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 5)));
              MR_Word check_hlds__check_promise__CallPredInfo_18;
              MR_Word check_hlds__check_promise__PredStatus_19;
              MR_Word check_hlds__check_promise__DefnInImplSection_20;
              MR_Integer check_hlds__check_promise__Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));
              MR_Word check_hlds__check_promise__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 2)));
              MR_Word check_hlds__check_promise__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 3)));
              MR_Word check_hlds__check_promise__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 4)));

              {
                hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredId_12, &check_hlds__check_promise__CallPredInfo_18);
              }
              {
                hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__check_promise__CallPredInfo_18, &check_hlds__check_promise__PredStatus_19);
              }
              {
                check_hlds__check_promise__DefnInImplSection_20 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__check_promise__PredStatus_19);
              }
              switch (check_hlds__check_promise__DefnInImplSection_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *check_hlds__check_promise__STATE_VARIABLE_Specs_66 = check_hlds__check_promise__STATE_VARIABLE_Specs_0_65;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word check_hlds__check_promise__Context_21;
                    MR_Word check_hlds__check_promise__PredOrFunc_22;
                    MR_Integer check_hlds__check_promise__Arity_23;
                    MR_Word check_hlds__check_promise__IdPieces_24;
                    MR_Word check_hlds__check_promise__Var_87;
                    MR_Word check_hlds__check_promise__Var_88;

                    {
                      check_hlds__check_promise__Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__check_promise__GoalInfo_11);
                    }
                    {
                      check_hlds__check_promise__PredOrFunc_22 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__check_promise__CallPredInfo_18);
                    }
                    {
                      check_hlds__check_promise__Arity_23 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__check_promise__CallPredInfo_18);
                    }
                    {
                      check_hlds__check_promise__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_88, 0) = ((MR_Box) (check_hlds__check_promise__PredOrFunc_22));
                      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_88, 1) = ((MR_Box) (check_hlds__check_promise__SymName_17));
                      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_88, 2) = ((MR_Box) (check_hlds__check_promise__Arity_23));
                    }
                    {
                      check_hlds__check_promise__Var_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_87, 1) = ((MR_Box) (check_hlds__check_promise__Var_88));
                    }
                    {
                      check_hlds__check_promise__IdPieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), check_hlds__check_promise__IdPieces_24, 0) = ((MR_Box) (check_hlds__check_promise__Var_87));
                      MR_hl_field(MR_mktag(1), check_hlds__check_promise__IdPieces_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      check_hlds__check_promise__report_assertion_interface_error_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__Context_21, check_hlds__check_promise__IdPieces_24, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, check_hlds__check_promise__STATE_VARIABLE_Specs_66);
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__check_promise__STATE_VARIABLE_Specs_66 = check_hlds__check_promise__STATE_VARIABLE_Specs_0_65;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__check_promise__PragmaPredInfo_41;
                  MR_Word check_hlds__check_promise__PredId_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word check_hlds__check_promise__PredStatus_104;
                  MR_Word check_hlds__check_promise__DefnInImplSection_105;
                  MR_Word check_hlds__check_promise__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));
                  MR_Integer check_hlds__check_promise__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word check_hlds__check_promise__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 4)));
                  MR_Word check_hlds__check_promise__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 5)));
                  MR_Word check_hlds__check_promise__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 6)));
                  MR_Word check_hlds__check_promise__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 7)));

                  {
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredId_102, &check_hlds__check_promise__PragmaPredInfo_41);
                  }
                  {
                    hlds__hlds_pred__pred_info_get_status_2_p_0(check_hlds__check_promise__PragmaPredInfo_41, &check_hlds__check_promise__PredStatus_104);
                  }
                  {
                    check_hlds__check_promise__DefnInImplSection_105 = hlds__status__pred_status_defined_in_impl_section_1_f_0(check_hlds__check_promise__PredStatus_104);
                  }
                  switch (check_hlds__check_promise__DefnInImplSection_105) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__check_promise__STATE_VARIABLE_Specs_66 = check_hlds__check_promise__STATE_VARIABLE_Specs_0_65;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String check_hlds__check_promise__Name_42;
                        MR_Word check_hlds__check_promise__Var_82;
                        MR_Word check_hlds__check_promise__Var_83;
                        MR_Word check_hlds__check_promise__SymName_92;
                        MR_Word check_hlds__check_promise__Context_93;
                        MR_Word check_hlds__check_promise__PredOrFunc_94;
                        MR_Integer check_hlds__check_promise__Arity_95;
                        MR_Word check_hlds__check_promise__IdPieces_96;

                        {
                          check_hlds__check_promise__Context_93 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__check_promise__GoalInfo_11);
                        }
                        {
                          check_hlds__check_promise__PredOrFunc_94 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__check_promise__PragmaPredInfo_41);
                        }
                        {
                          check_hlds__check_promise__Name_42 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__check_promise__PragmaPredInfo_41);
                        }
                        {
                          check_hlds__check_promise__SymName_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__check_promise__SymName_92, 0) = ((MR_Box) (check_hlds__check_promise__Name_42));
                        }
                        {
                          check_hlds__check_promise__Arity_95 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__check_promise__PragmaPredInfo_41);
                        }
                        {
                          check_hlds__check_promise__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_83, 0) = ((MR_Box) (check_hlds__check_promise__PredOrFunc_94));
                          MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_83, 1) = ((MR_Box) (check_hlds__check_promise__SymName_92));
                          MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_83, 2) = ((MR_Box) (check_hlds__check_promise__Arity_95));
                        }
                        {
                          check_hlds__check_promise__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                          MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_82, 1) = ((MR_Box) (check_hlds__check_promise__Var_83));
                        }
                        {
                          check_hlds__check_promise__IdPieces_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), check_hlds__check_promise__IdPieces_96, 0) = ((MR_Box) (check_hlds__check_promise__Var_82));
                          MR_hl_field(MR_mktag(1), check_hlds__check_promise__IdPieces_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          check_hlds__check_promise__report_assertion_interface_error_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__Context_93, check_hlds__check_promise__IdPieces_96, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, check_hlds__check_promise__STATE_VARIABLE_Specs_66);
                        }
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__check_promise__Goals_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word check_hlds__check_promise__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));

                  {
                    check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__Goals_44, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, check_hlds__check_promise__STATE_VARIABLE_Specs_66);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__check_promise__Goals_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));

                  {
                    check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__Goals_110, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, check_hlds__check_promise__STATE_VARIABLE_Specs_66);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.check_promise", (MR_String) "predicate \140check_hlds.check_promise.check_in_interface_promise_goal\'/5", (MR_String) "assertion contains switch");
                    return;
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__check_promise__SubGoal_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word check_hlds__check_promise__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__check_promise__next_value_of_Goal_8 = check_hlds__check_promise__SubGoal_111;

                    check_hlds__check_promise__Goal_8 = check_hlds__check_promise__next_value_of_Goal_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__check_promise__Cond_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 2)));
                  MR_Word check_hlds__check_promise__Then_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 3)));
                  MR_Word check_hlds__check_promise__Else_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 4)));
                  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_72_72;
                  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_73_73;
                  MR_Word check_hlds__check_promise__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));

                  {
                    check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__Cond_51, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, &check_hlds__check_promise__STATE_VARIABLE_Specs_72_72);
                  }
                  {
                    check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__Then_52, check_hlds__check_promise__STATE_VARIABLE_Specs_72_72, &check_hlds__check_promise__STATE_VARIABLE_Specs_73_73);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__check_promise__next_value_of_Goal_8 = check_hlds__check_promise__Else_53;
                    MR_Word check_hlds__check_promise__next_value_of_STATE_VARIABLE_Specs_0_65 = check_hlds__check_promise__STATE_VARIABLE_Specs_73_73;

                    check_hlds__check_promise__STATE_VARIABLE_Specs_0_65 = check_hlds__check_promise__next_value_of_STATE_VARIABLE_Specs_0_65;
                    check_hlds__check_promise__Goal_8 = check_hlds__check_promise__next_value_of_Goal_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__check_promise__ShortHand_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__check_promise__GoalExpr_10, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__check_promise__ShortHand_54)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word check_hlds__check_promise__LHS_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__check_promise__ShortHand_54, (MR_Integer) 0)));
                        MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_67_67;
                        MR_Word check_hlds__check_promise__RHS_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__check_promise__ShortHand_54, (MR_Integer) 1)));

                        {
                          check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__LHS_64, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, &check_hlds__check_promise__STATE_VARIABLE_Specs_67_67);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__check_promise__next_value_of_Goal_8 = check_hlds__check_promise__RHS_113;
                          MR_Word check_hlds__check_promise__next_value_of_STATE_VARIABLE_Specs_0_65 = check_hlds__check_promise__STATE_VARIABLE_Specs_67_67;

                          check_hlds__check_promise__STATE_VARIABLE_Specs_0_65 = check_hlds__check_promise__next_value_of_STATE_VARIABLE_Specs_0_65;
                          check_hlds__check_promise__Goal_8 = check_hlds__check_promise__next_value_of_Goal_8;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word check_hlds__check_promise__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__ShortHand_54, (MR_Integer) 4)));
                        MR_Word check_hlds__check_promise__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__ShortHand_54, (MR_Integer) 5)));
                        MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_70_70;
                        MR_Word check_hlds__check_promise__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__ShortHand_54, (MR_Integer) 0)));
                        MR_Word check_hlds__check_promise__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__ShortHand_54, (MR_Integer) 1)));
                        MR_Word check_hlds__check_promise__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__ShortHand_54, (MR_Integer) 2)));
                        MR_Word check_hlds__check_promise__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__ShortHand_54, (MR_Integer) 3)));
                        MR_Word check_hlds__check_promise__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__check_promise__ShortHand_54, (MR_Integer) 6)));

                        {
                          check_hlds__check_promise__check_in_interface_promise_goal_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__MainGoal_59, check_hlds__check_promise__STATE_VARIABLE_Specs_0_65, &check_hlds__check_promise__STATE_VARIABLE_Specs_70_70);
                        }
                        {
                          check_hlds__check_promise__check_in_interface_promise_goals_5_p_0(check_hlds__check_promise__ModuleInfo_6, check_hlds__check_promise__PredInfo_7, check_hlds__check_promise__OrElseGoals_60, check_hlds__check_promise__STATE_VARIABLE_Specs_70_70, check_hlds__check_promise__STATE_VARIABLE_Specs_66);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__check_promise__SubGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__ShortHand_54, (MR_Integer) 2)));
                        MR_Word check_hlds__check_promise__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__ShortHand_54, (MR_Integer) 0)));
                        MR_Word check_hlds__check_promise__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__check_promise__ShortHand_54, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__check_promise__next_value_of_Goal_8 = check_hlds__check_promise__SubGoal_112;

                          check_hlds__check_promise__Goal_8 = check_hlds__check_promise__next_value_of_Goal_8;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__check_promise__report_assertion_interface_error_5_p_0(
  MR_Word check_hlds__check_promise__ModuleInfo_6,
  MR_Word check_hlds__check_promise__Context_7,
  MR_Word check_hlds__check_promise__IdPieces_8,
  MR_Word check_hlds__check_promise__STATE_VARIABLE_Specs_0_15,
  MR_Word * check_hlds__check_promise__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool check_hlds__check_promise__succeeded;
    MR_Word check_hlds__check_promise__TypeCtorInfo_62_62;
    MR_Word check_hlds__check_promise__ModuleName_10;
    MR_Word check_hlds__check_promise__MainPieces_11;
    MR_Word check_hlds__check_promise__Msgs_13;
    MR_Word check_hlds__check_promise__Spec_14;
    MR_Word check_hlds__check_promise__Var_17;
    MR_Word check_hlds__check_promise__Var_20;
    MR_Word check_hlds__check_promise__Var_21;
    MR_Word check_hlds__check_promise__Var_31;
    MR_Word check_hlds__check_promise__Var_32;
    MR_Word check_hlds__check_promise__Var_35;
    MR_Word check_hlds__check_promise__Var_51;
    MR_Word check_hlds__check_promise__Var_58;
    MR_Word check_hlds__check_promise__Var_59;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__check_promise__ModuleInfo_6, &check_hlds__check_promise__ModuleName_10);
    }
    check_hlds__check_promise__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__check_promise__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), check_hlds__check_promise__Var_21, 1) = ((MR_Box) (check_hlds__check_promise__ModuleName_10));
    }
    {
      check_hlds__check_promise__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_20, 0) = ((MR_Box) (check_hlds__check_promise__Var_21));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[5])));
    }
    {
      check_hlds__check_promise__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[13])));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_17, 1) = ((MR_Box) (check_hlds__check_promise__Var_20));
    }
    {
      check_hlds__check_promise__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_35, 0) = ((MR_Box) (check_hlds__check_promise__Var_21));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[8])));
    }
    {
      check_hlds__check_promise__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__check_promise_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_32, 1) = ((MR_Box) (check_hlds__check_promise__Var_35));
    }
    {
      check_hlds__check_promise__Var_31 = mercury__list__f_43_43_2_f_0(check_hlds__check_promise__TypeCtorInfo_62_62, check_hlds__check_promise__IdPieces_8, check_hlds__check_promise__Var_32);
    }
    {
      check_hlds__check_promise__MainPieces_11 = mercury__list__f_43_43_2_f_0(check_hlds__check_promise__TypeCtorInfo_62_62, check_hlds__check_promise__Var_17, check_hlds__check_promise__Var_31);
    }
    {
      check_hlds__check_promise__Var_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_51, 0) = ((MR_Box) (check_hlds__check_promise__MainPieces_11));
    }
    {
      check_hlds__check_promise__Msgs_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Msgs_13, 0) = ((MR_Box) (check_hlds__check_promise__Var_51));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Msgs_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__check_promise_scalar_common_1[16])));
    }
    {
      check_hlds__check_promise__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_59, 0) = ((MR_Box) (check_hlds__check_promise__Context_7));
      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Var_59, 1) = ((MR_Box) (check_hlds__check_promise__Msgs_13));
    }
    {
      check_hlds__check_promise__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_58, 0) = ((MR_Box) (check_hlds__check_promise__Var_59));
      MR_hl_field(MR_mktag(1), check_hlds__check_promise__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__check_promise__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), check_hlds__check_promise__Spec_14, 2) = ((MR_Box) (check_hlds__check_promise__Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *check_hlds__check_promise__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__check_promise__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__check_promise__STATE_VARIABLE_Specs_0_15));
    }
  }
}

void mercury__check_hlds__check_promise__init(void)
{
}

void mercury__check_hlds__check_promise__init_type_tables(void)
{
}

void mercury__check_hlds__check_promise__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__check_promise__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module check_hlds.check_promise. */
