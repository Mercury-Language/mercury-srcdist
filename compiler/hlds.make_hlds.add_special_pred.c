/*
** Automatically generated from `add_special_pred.m'
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


/* :- module hlds.make_hlds.add_special_pred. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_special_pred__init
ENDINIT
*/

#include "hlds.make_hlds.add_special_pred.mih"


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
#include "hlds.make_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_4,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_5,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9);

static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);

static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_7,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9);


static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_1[6][2];

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_2[1][1];




static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_4,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_5,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9)
{
  {
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
    MR_Word hlds__make_hlds__add_special_pred__Var_25 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

    if ((hlds__make_hlds__add_special_pred__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
    else
    if ((hlds__make_hlds__add_special_pred__Var_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
    else
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
      }
    else
      {
        MR_Word hlds__make_hlds__add_special_pred__Var_15 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (hlds__make_hlds__add_special_pred__succeeded)
          {
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          }
        else
          {
            MR_Word hlds__make_hlds__add_special_pred__OldStatus_7 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) hlds__make_hlds__add_special_pred__OldStatus_7;
          }
      }
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_4 == (MR_Integer) 0);
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        MR_Word hlds__make_hlds__add_special_pred__Var_19 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
        MR_Word hlds__make_hlds__add_special_pred__Var_8;

        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Var_19)) == (MR_mktag((MR_Integer) 2)));
        if (hlds__make_hlds__add_special_pred__succeeded)
          {
            hlds__make_hlds__add_special_pred__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__Var_19, (MR_Integer) 0)));
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
        else
          {
            MR_Word hlds__make_hlds__add_special_pred__Var_22 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;

            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (hlds__make_hlds__add_special_pred__succeeded)
              {
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              }
            else
              *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
          }
      }
    else
      *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
  }
}

static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37)
{
  {
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
    MR_Word hlds__make_hlds__add_special_pred__Globals_18;
    MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_19;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_special_pred__Globals_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, (MR_Integer) 282, &hlds__make_hlds__add_special_pred__GenSpecialPreds_19);
    }
    switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (hlds__make_hlds__add_special_pred__SpecialPredId_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__add_special_pred__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
                  MR_Word hlds__make_hlds__add_special_pred__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__add_special_pred__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__add_special_pred__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__add_special_pred__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__add_special_pred__Var_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__add_special_pred__Var_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word hlds__make_hlds__add_special_pred__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));

                  if ((hlds__make_hlds__add_special_pred__MaybeUserEq_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
                  else
                    {
                      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
                    }
                }
                break;
              case (MR_Integer) 2:
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
                    break;
                  case (MR_Integer) 1:
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
            break;
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_special_pred__TypeStatus_20;

              switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
                    MR_Word hlds__make_hlds__add_special_pred__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__add_special_pred__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
                    MR_Word hlds__make_hlds__add_special_pred__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
                    MR_Word hlds__make_hlds__add_special_pred__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
                    MR_Word hlds__make_hlds__add_special_pred__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
                    MR_Word hlds__make_hlds__add_special_pred__Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
                    MR_Word hlds__make_hlds__add_special_pred__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word hlds__make_hlds__add_special_pred__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));

                    if ((hlds__make_hlds__add_special_pred__MaybeUserEq_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                      }
                    else
                      hlds__make_hlds__add_special_pred__TypeStatus_20 = hlds__make_hlds__add_special_pred__TypeStatus0_16;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  }
                  break;
              }
              {
                hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus_20, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_7,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_special_pred__succeeded;

        if ((hlds__make_hlds__add_special_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
        else
          {
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;
            MR_Word hlds__make_hlds__add_special_pred__Globals_42;
            MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_43;

            {
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__Globals_42);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_42, (MR_Integer) 282, &hlds__make_hlds__add_special_pred__GenSpecialPreds_43);
            }
            switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_43) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (hlds__make_hlds__add_special_pred__SpecialPredId_19) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 2:
                    switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_5)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 4)));
                          MR_Word hlds__make_hlds__add_special_pred__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)));
                          MR_Word hlds__make_hlds__add_special_pred__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 1)));
                          MR_Word hlds__make_hlds__add_special_pred__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 2)));
                          MR_Word hlds__make_hlds__add_special_pred__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 3)));
                          MR_Word hlds__make_hlds__add_special_pred__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 5)));
                          MR_Word hlds__make_hlds__add_special_pred__Var_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
                          MR_Word hlds__make_hlds__add_special_pred__Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                          MR_Word hlds__make_hlds__add_special_pred__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 7)));

                          if ((hlds__make_hlds__add_special_pred__MaybeUserEq_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
                          else
                            {
                              hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
                        break;
                      case (MR_Integer) 3:
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)))) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
                            break;
                          case (MR_Integer) 1:
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
                            break;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__add_special_pred__TypeStatus_44;

                      switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_5)) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                          }
                          break;
                        case (MR_Integer) 1:
                          {
                            MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 4)));
                            MR_Word hlds__make_hlds__add_special_pred__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)));
                            MR_Word hlds__make_hlds__add_special_pred__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 1)));
                            MR_Word hlds__make_hlds__add_special_pred__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 2)));
                            MR_Word hlds__make_hlds__add_special_pred__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 3)));
                            MR_Word hlds__make_hlds__add_special_pred__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 5)));
                            MR_Word hlds__make_hlds__add_special_pred__Var_73 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
                            MR_Word hlds__make_hlds__add_special_pred__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                            MR_Word hlds__make_hlds__add_special_pred__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 7)));

                            if ((hlds__make_hlds__add_special_pred__MaybeUserEq_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              {
                                hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                              }
                            else
                              hlds__make_hlds__add_special_pred__TypeStatus_44 = hlds__make_hlds__add_special_pred__TypeStatus_7;
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                          }
                          break;
                        case (MR_Integer) 3:
                          {
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                          }
                          break;
                      }
                      {
                        hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_44, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                      }
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                }
                break;
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__add_special_pred__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_special_pred__SpecialPredIds_20;
              MR_Word hlds__make_hlds__add_special_pred__next_value_of_STATE_VARIABLE_ModuleInfo_0_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;

              hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8 = hlds__make_hlds__add_special_pred__next_value_of_STATE_VARIABLE_ModuleInfo_0_8;
              hlds__make_hlds__add_special_pred__HeadVar__1_1 = hlds__make_hlds__add_special_pred__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_9,
  MR_Word hlds__make_hlds__add_special_pred__Type_10,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_11,
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_12,
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_bool hlds__make_hlds__add_special_pred__succeeded;

    {
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_24, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12);
    }
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        MR_Word hlds__make_hlds__add_special_pred__ThisModule_16;
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27;

        {
          hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27);
        }
        {
          hlds__make_hlds__add_special_pred__ThisModule_16 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_special_pred__TypeStatus_14);
        }
        switch (hlds__make_hlds__add_special_pred__ThisModule_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps_22;
              MR_Word hlds__make_hlds__add_special_pred__Var_23;

              {
                hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27, &hlds__make_hlds__add_special_pred__SpecialPredMaps_22);
              }
              {
                hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps_22, (MR_Integer) 2, hlds__make_hlds__add_special_pred__TypeCtor_11, &hlds__make_hlds__add_special_pred__Var_23);
              }
              if (hlds__make_hlds__add_special_pred__succeeded)
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27;
              else
                {
                  MR_Word hlds__make_hlds__add_special_pred__Globals_81;
                  MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_82;

                  {
                    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27, &hlds__make_hlds__add_special_pred__Globals_81);
                  }
                  {
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_81, (MR_Integer) 282, &hlds__make_hlds__add_special_pred__GenSpecialPreds_82);
                  }
                  switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_82) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27;
                      break;
                    case (MR_Integer) 1:
                      {
                        hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_25);
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_21;
              MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_71_71;
              MR_Word hlds__make_hlds__add_special_pred__Ctors_17;
              MR_Word hlds__make_hlds__add_special_pred__Globals_18;
              MR_Integer hlds__make_hlds__add_special_pred__CompareSpec_19;
              MR_Integer hlds__make_hlds__add_special_pred__CtorCount_20;
              MR_Word hlds__make_hlds__add_special_pred__Var_33;
              MR_Word hlds__make_hlds__add_special_pred__Var_49;
              MR_Word hlds__make_hlds__add_special_pred__Var_50;
              MR_Word hlds__make_hlds__add_special_pred__Var_47;
              MR_Word hlds__make_hlds__add_special_pred__Var_48;
              MR_Word hlds__make_hlds__add_special_pred__Var_51;
              MR_Word hlds__make_hlds__add_special_pred__Var_52;
              MR_Word hlds__make_hlds__add_special_pred__Var_53;
              MR_Word hlds__make_hlds__add_special_pred__Var_54;

              hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
              if (hlds__make_hlds__add_special_pred__succeeded)
                {
                  hlds__make_hlds__add_special_pred__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 0)));
                  hlds__make_hlds__add_special_pred__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 1)));
                  hlds__make_hlds__add_special_pred__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 2)));
                  hlds__make_hlds__add_special_pred__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 3)));
                  hlds__make_hlds__add_special_pred__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 4)));
                  hlds__make_hlds__add_special_pred__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 5)));
                  hlds__make_hlds__add_special_pred__Var_52 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
                  hlds__make_hlds__add_special_pred__Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  hlds__make_hlds__add_special_pred__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 7)));
                  hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                  if (hlds__make_hlds__add_special_pred__succeeded)
                    {
                      hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (hlds__make_hlds__add_special_pred__succeeded)
                        {
                          {
                            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27, &hlds__make_hlds__add_special_pred__Globals_18);
                          }
                          hlds__make_hlds__add_special_pred__Var_33 = (MR_Integer) 320;
                          {
                            libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, hlds__make_hlds__add_special_pred__Var_33, &hlds__make_hlds__add_special_pred__CompareSpec_19);
                          }
                          hlds__make_hlds__add_special_pred__TypeCtorInfo_71_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
                          {
                            mercury__list__length_2_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_71_71, hlds__make_hlds__add_special_pred__Ctors_17, &hlds__make_hlds__add_special_pred__CtorCount_20);
                          }
                          hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__CtorCount_20 > hlds__make_hlds__add_special_pred__CompareSpec_19);
                        }
                    }
                }
              if (hlds__make_hlds__add_special_pred__succeeded)
                hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[2]);
              else
                {
                  hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1]);
                }
              {
                hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredIds_21, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_25);
              }
            }
            break;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_46 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[3]);
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_46, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_46, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_104;
        MR_Word hlds__make_hlds__add_special_pred__Globals_115;
        MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_116;
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_128;
        MR_Word hlds__make_hlds__add_special_pred__Globals_149;
        MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_150;
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_129;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_special_pred__Globals_115);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_115, (MR_Integer) 282, &hlds__make_hlds__add_special_pred__GenSpecialPreds_116);
        }
        switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_116) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_94, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_104);
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_94, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_104);
            }
            break;
        }
        hlds__make_hlds__add_special_pred__SpecialPredId_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_95, (MR_Integer) 0)));
        hlds__make_hlds__add_special_pred__SpecialPredIds_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_95, (MR_Integer) 1)));
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_104, &hlds__make_hlds__add_special_pred__Globals_149);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_149, (MR_Integer) 282, &hlds__make_hlds__add_special_pred__GenSpecialPreds_150);
        }
        switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_150) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_104;
            break;
          case (MR_Integer) 1:
            {
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_128, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_104, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_25);
            }
            break;
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_9,
  MR_Word hlds__make_hlds__add_special_pred__Type_10,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_11,
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_12,
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17)
{
  {
    MR_bool hlds__make_hlds__add_special_pred__succeeded;

    {
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__TypeStatus_14);
    }
    if (hlds__make_hlds__add_special_pred__succeeded)
      *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16;
    else
      {
        hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17);
      }
  }
}

void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_9,
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_10,
  MR_Word hlds__make_hlds__add_special_pred__Type_11,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_12,
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_52)
{
  {
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_80_80;
    MR_Word hlds__make_hlds__add_special_pred__ModuleName_16;
    MR_Word hlds__make_hlds__add_special_pred__ArgTypes_17;
    MR_Word hlds__make_hlds__add_special_pred__ArgModes_18;
    MR_Word hlds__make_hlds__add_special_pred__Det_19;
    MR_String hlds__make_hlds__add_special_pred__PredBaseName_20;
    MR_Word hlds__make_hlds__add_special_pred__PredName_21;
    MR_Integer hlds__make_hlds__add_special_pred__Arity_22;
    MR_Word hlds__make_hlds__add_special_pred__ClausesInfo0_23;
    MR_Word hlds__make_hlds__add_special_pred__Origin_24;
    MR_Word hlds__make_hlds__add_special_pred__PredStatus_25;
    MR_Word hlds__make_hlds__add_special_pred__Proofs_27;
    MR_Word hlds__make_hlds__add_special_pred__ConstraintMap_28;
    MR_Word hlds__make_hlds__add_special_pred__Markers_29;
    MR_Word hlds__make_hlds__add_special_pred__VarNameRemap_32;
    MR_Word hlds__make_hlds__add_special_pred__PredInfo0_33;
    MR_Word hlds__make_hlds__add_special_pred__InstVarSet_35;
    MR_Word hlds__make_hlds__add_special_pred__PredInfo_38;
    MR_Word hlds__make_hlds__add_special_pred__PredicateTable0_40;
    MR_Word hlds__make_hlds__add_special_pred__PredId_41;
    MR_Word hlds__make_hlds__add_special_pred__PredicateTable_42;
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_43;
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps_46;
    MR_Word hlds__make_hlds__add_special_pred__Var_54;
    MR_Word hlds__make_hlds__add_special_pred__Var_59;
    MR_Word hlds__make_hlds__add_special_pred__Var_61;
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_63_63;
    MR_Word hlds__make_hlds__add_special_pred__Var_92;
    MR_Word hlds__make_hlds__add_special_pred__Var_93;
    MR_Word hlds__make_hlds__add_special_pred__Var_94;
    MR_Integer hlds__make_hlds__add_special_pred___ProcId_39;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_special_pred__ModuleName_16);
    }
    {
      hlds__special_pred__special_pred_interface_5_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__Type_11, &hlds__make_hlds__add_special_pred__ArgTypes_17, &hlds__make_hlds__add_special_pred__ArgModes_18, &hlds__make_hlds__add_special_pred__Det_19);
    }
    {
      hlds__make_hlds__add_special_pred__PredBaseName_20 = hlds__special_pred__special_pred_name_2_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeCtor_12);
    }
    {
      hlds__make_hlds__add_special_pred__PredName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__PredName_21, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__PredBaseName_20));
    }
    {
      hlds__make_hlds__add_special_pred__Arity_22 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9);
    }
    {
      hlds__make_hlds__add_special_pred__Var_54 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
    {
      hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__Arity_22, hlds__make_hlds__add_special_pred__Var_54, &hlds__make_hlds__add_special_pred__ClausesInfo0_23);
    }
    {
      hlds__make_hlds__add_special_pred__Origin_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_24, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_24, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12));
    }
    {
      hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeStatus_14, &hlds__make_hlds__add_special_pred__PredStatus_25);
    }
    hlds__make_hlds__add_special_pred__TypeCtorInfo_80_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
    {
      mercury__map__init_1_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_80_80, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_special_pred__Proofs_27);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_special_pred__TypeCtorInfo_80_80, &hlds__make_hlds__add_special_pred__ConstraintMap_28);
    }
    {
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_special_pred__Markers_29);
    }
    {
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_special_pred__VarNameRemap_32);
    }
    {
      hlds__hlds_pred__pred_info_init_19_p_0(hlds__make_hlds__add_special_pred__ModuleName_16, hlds__make_hlds__add_special_pred__PredName_21, hlds__make_hlds__add_special_pred__Arity_22, (MR_Integer) 0, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Origin_24, hlds__make_hlds__add_special_pred__PredStatus_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_special_pred__Markers_29, hlds__make_hlds__add_special_pred__ArgTypes_17, hlds__make_hlds__add_special_pred__TVarSet_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[5], hlds__make_hlds__add_special_pred__Proofs_27, hlds__make_hlds__add_special_pred__ConstraintMap_28, hlds__make_hlds__add_special_pred__ClausesInfo0_23, hlds__make_hlds__add_special_pred__VarNameRemap_32, &hlds__make_hlds__add_special_pred__PredInfo0_33);
    }
    {
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_special_pred__InstVarSet_35);
    }
    {
      hlds__make_hlds__add_special_pred__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__ArgModes_18));
    }
    {
      hlds__make_hlds__add_special_pred__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Var_61, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Det_19));
    }
    {
      hlds__make_hlds__add_pred__do_add_new_proc_14_p_0(hlds__make_hlds__add_special_pred__Context_13, (MR_Integer) -1, hlds__make_hlds__add_special_pred__Arity_22, hlds__make_hlds__add_special_pred__InstVarSet_35, hlds__make_hlds__add_special_pred__ArgModes_18, hlds__make_hlds__add_special_pred__Var_59, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, hlds__make_hlds__add_special_pred__Var_61, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_special_pred__PredInfo0_33, &hlds__make_hlds__add_special_pred__PredInfo_38, &hlds__make_hlds__add_special_pred___ProcId_39);
    }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_special_pred__PredicateTable0_40);
    }
    {
      hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_special_pred__PredInfo_38, &hlds__make_hlds__add_special_pred__PredId_41, hlds__make_hlds__add_special_pred__PredicateTable0_40, &hlds__make_hlds__add_special_pred__PredicateTable_42);
    }
    {
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_special_pred__PredicateTable_42, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_51, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_63_63);
    }
    {
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_63_63, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_43);
    }
    hlds__make_hlds__add_special_pred__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 0)));
    hlds__make_hlds__add_special_pred__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 1)));
    hlds__make_hlds__add_special_pred__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 2)));
    switch (hlds__make_hlds__add_special_pred__SpecialPredId_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word hlds__make_hlds__add_special_pred__CompareMap_50;
          MR_Word hlds__make_hlds__add_special_pred__Var_77;
          MR_Word hlds__make_hlds__add_special_pred__Var_78;
          MR_Word hlds__make_hlds__add_special_pred__Var_79;

          {
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_41)), hlds__make_hlds__add_special_pred__Var_92, &hlds__make_hlds__add_special_pred__CompareMap_50);
          }
          hlds__make_hlds__add_special_pred__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 0)));
          hlds__make_hlds__add_special_pred__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 1)));
          hlds__make_hlds__add_special_pred__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            hlds__make_hlds__add_special_pred__SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Var_77));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__Var_78));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__CompareMap_50));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_special_pred__IndexMap_48;
          MR_Word hlds__make_hlds__add_special_pred__Var_72;
          MR_Word hlds__make_hlds__add_special_pred__Var_74;
          MR_Word hlds__make_hlds__add_special_pred__Var_73;

          {
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_41)), hlds__make_hlds__add_special_pred__Var_93, &hlds__make_hlds__add_special_pred__IndexMap_48);
          }
          hlds__make_hlds__add_special_pred__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 0)));
          hlds__make_hlds__add_special_pred__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 1)));
          hlds__make_hlds__add_special_pred__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            hlds__make_hlds__add_special_pred__SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Var_72));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__IndexMap_48));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__Var_74));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_special_pred__UnifyMap_45;
          MR_Word hlds__make_hlds__add_special_pred__Var_68;
          MR_Word hlds__make_hlds__add_special_pred__Var_69;
          MR_Word hlds__make_hlds__add_special_pred__Var_67;

          {
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_41)), hlds__make_hlds__add_special_pred__Var_94, &hlds__make_hlds__add_special_pred__UnifyMap_45);
          }
          hlds__make_hlds__add_special_pred__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 0)));
          hlds__make_hlds__add_special_pred__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 1)));
          hlds__make_hlds__add_special_pred__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_43, (MR_Integer) 2)));
          {
            hlds__make_hlds__add_special_pred__SpecialPredMaps_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__UnifyMap_45));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__Var_68));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_46, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__Var_69));
          }
        }
        break;
    }
    {
      hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps_46, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_63_63, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_52);
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
  MR_Word hlds__make_hlds__add_special_pred__Type0_12,
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40)
{
  {
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58;
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59;
    MR_Word hlds__make_hlds__add_special_pred__Type_18;
    MR_Word hlds__make_hlds__add_special_pred__PredStatus_19;
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_20;
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps1_24;
    MR_Word hlds__make_hlds__add_special_pred__PredId_25;
    MR_Word hlds__make_hlds__add_special_pred__Preds0_26;
    MR_Word hlds__make_hlds__add_special_pred__PredInfo0_27;
    MR_Word hlds__make_hlds__add_special_pred__PredInfo1_29;
    MR_Word hlds__make_hlds__add_special_pred__ClausesInfo_32;
    MR_Word hlds__make_hlds__add_special_pred__PredInfo2_33;
    MR_Word hlds__make_hlds__add_special_pred__Markers2_34;
    MR_Word hlds__make_hlds__add_special_pred__Markers_35;
    MR_Word hlds__make_hlds__add_special_pred__PredInfo3_36;
    MR_Word hlds__make_hlds__add_special_pred__PredInfo_37;
    MR_Word hlds__make_hlds__add_special_pred__Preds_38;
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41;
    MR_Word hlds__make_hlds__add_special_pred__Var_48;
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
    MR_String hlds__make_hlds__add_special_pred__Name_64;
    MR_Word hlds__make_hlds__add_special_pred__TypeInfo_13_71;
    MR_Word hlds__make_hlds__add_special_pred__TypeCtor_63;
    MR_Word hlds__make_hlds__add_special_pred__Var_70;
    MR_Word hlds__make_hlds__add_special_pred__Var_93;
    MR_Word hlds__make_hlds__add_special_pred__Var_21;
    MR_Box hlds__make_hlds__add_special_pred__conv0_PredInfo0_27;
    MR_Word hlds__make_hlds__add_special_pred__Var_60;

    {
      hlds__make_hlds__add_special_pred__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(hlds__make_hlds__add_special_pred__Type0_12, &hlds__make_hlds__add_special_pred__TypeCtor_63, &hlds__make_hlds__add_special_pred__Var_70);
    }
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        hlds__make_hlds__add_special_pred__TypeInfo_13_71 = (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[4];
        {
          hlds__make_hlds__add_special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_special_pred__TypeInfo_13_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_special_pred__Var_70)));
        }
        if (hlds__make_hlds__add_special_pred__succeeded)
          {
            hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(hlds__make_hlds__add_special_pred__TypeCtor_63, &hlds__make_hlds__add_special_pred__Name_64);
          }
      }
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        MR_Word hlds__make_hlds__add_special_pred__Var_66;
        MR_Word hlds__make_hlds__add_special_pred__Var_68;

        {
          hlds__make_hlds__add_special_pred__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Var_68, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_64));
        }
        {
          hlds__make_hlds__add_special_pred__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Var_66, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Var_68));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Var_66, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_special_pred__Var_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_special_pred__Type_18);
        }
      }
    else
      hlds__make_hlds__add_special_pred__Type_18 = hlds__make_hlds__add_special_pred__Type0_12;
    hlds__make_hlds__add_special_pred__Var_93 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;
    if ((hlds__make_hlds__add_special_pred__Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
    else
    if ((hlds__make_hlds__add_special_pred__Var_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
    else
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
      }
    else
      {
        MR_Word hlds__make_hlds__add_special_pred__Var_83 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;

        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        if (hlds__make_hlds__add_special_pred__succeeded)
          {
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          }
        else
          {
            MR_Word hlds__make_hlds__add_special_pred__OldStatus_76 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;

            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) hlds__make_hlds__add_special_pred__OldStatus_76;
          }
      }
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_10 == (MR_Integer) 0);
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        MR_Word hlds__make_hlds__add_special_pred__Var_87 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
        MR_Word hlds__make_hlds__add_special_pred__Var_77;

        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Var_87)) == (MR_mktag((MR_Integer) 2)));
        if (hlds__make_hlds__add_special_pred__succeeded)
          {
            hlds__make_hlds__add_special_pred__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__Var_87, (MR_Integer) 0)));
            hlds__make_hlds__add_special_pred__PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          }
        else
          {
            MR_Word hlds__make_hlds__add_special_pred__Var_90 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;

            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
            if (hlds__make_hlds__add_special_pred__succeeded)
              {
                hlds__make_hlds__add_special_pred__PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
              }
            else
              hlds__make_hlds__add_special_pred__PredStatus_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
          }
      }
    else
      hlds__make_hlds__add_special_pred__PredStatus_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
    {
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_20);
    }
    {
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps0_20, hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TypeCtor_13, &hlds__make_hlds__add_special_pred__Var_21);
    }
    if (hlds__make_hlds__add_special_pred__succeeded)
      hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39;
    else
      {
        MR_Word hlds__make_hlds__add_special_pred__PredOldStatus_22 = (MR_Word) hlds__make_hlds__add_special_pred__PredStatus_19;
        MR_Word hlds__make_hlds__add_special_pred__TypeStatus_23 = (MR_Word) hlds__make_hlds__add_special_pred__PredOldStatus_22;

        {
          hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus_23, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41);
        }
      }
    {
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__SpecialPredMaps1_24);
    }
    {
      hlds__special_pred__lookup_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps1_24, hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TypeCtor_13, &hlds__make_hlds__add_special_pred__PredId_25);
    }
    {
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__Preds0_26);
    }
    hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    {
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_special_pred__Preds0_26, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_25)), &hlds__make_hlds__add_special_pred__conv0_PredInfo0_27);
    }
    hlds__make_hlds__add_special_pred__PredInfo0_27 = ((MR_Word) hlds__make_hlds__add_special_pred__conv0_PredInfo0_27);
    hlds__make_hlds__add_special_pred__Var_60 = (MR_Word) hlds__make_hlds__add_special_pred__PredStatus_19;
    if ((hlds__make_hlds__add_special_pred__Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Var_60)) == (MR_mktag((MR_Integer) 2))))
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
    else
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
    if (hlds__make_hlds__add_special_pred__succeeded)
      {
        hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_special_pred__PredStatus_19, hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__PredInfo1_29);
      }
    else
      {
        MR_Word hlds__make_hlds__add_special_pred__OldPredStatus_31;
        MR_Word hlds__make_hlds__add_special_pred__Var_44;
        MR_Word hlds__make_hlds__add_special_pred__Var_45;
        MR_Word hlds__make_hlds__add_special_pred__Var_46;
        MR_Word hlds__make_hlds__add_special_pred__Var_50;
        MR_Word hlds__make_hlds__add_special_pred__Var_51;
        MR_Word hlds__make_hlds__add_special_pred__Var_52;
        MR_Word hlds__make_hlds__add_special_pred__Var_53;
        MR_Word hlds__make_hlds__add_special_pred__Var_54;
        MR_Word hlds__make_hlds__add_special_pred__Var_55;
        MR_Word hlds__make_hlds__add_special_pred__Var_56;
        MR_Word hlds__make_hlds__add_special_pred__Var_57;
        MR_Word hlds__make_hlds__add_special_pred__Var_30;

        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_special_pred__succeeded)
          {
            hlds__make_hlds__add_special_pred__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
            hlds__make_hlds__add_special_pred__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
            hlds__make_hlds__add_special_pred__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
            hlds__make_hlds__add_special_pred__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
            hlds__make_hlds__add_special_pred__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
            hlds__make_hlds__add_special_pred__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
            hlds__make_hlds__add_special_pred__Var_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
            hlds__make_hlds__add_special_pred__Var_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            hlds__make_hlds__add_special_pred__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));
            hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Var_44)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_special_pred__succeeded)
              {
                hlds__make_hlds__add_special_pred__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Var_44, (MR_Integer) 0)));
                {
                  hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__OldPredStatus_31);
                }
                hlds__make_hlds__add_special_pred__Var_45 = (MR_Word) hlds__make_hlds__add_special_pred__OldPredStatus_31;
                hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                if (hlds__make_hlds__add_special_pred__succeeded)
                  {
                    {
                      hlds__make_hlds__add_special_pred__Var_46 = hlds__status__pred_status_is_imported_1_f_0(hlds__make_hlds__add_special_pred__PredStatus_19);
                    }
                    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Var_46 == (MR_Integer) 0);
                  }
              }
          }
        if (hlds__make_hlds__add_special_pred__succeeded)
          {
            hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_special_pred__PredStatus_19, hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__PredInfo1_29);
          }
        else
          hlds__make_hlds__add_special_pred__PredInfo1_29 = hlds__make_hlds__add_special_pred__PredInfo0_27;
      }
    {
      check_hlds__unify_proc__generate_clause_info_6_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__ClausesInfo_32);
    }
    {
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_special_pred__ClausesInfo_32, hlds__make_hlds__add_special_pred__PredInfo1_29, &hlds__make_hlds__add_special_pred__PredInfo2_33);
    }
    {
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_special_pred__PredInfo2_33, &hlds__make_hlds__add_special_pred__Markers2_34);
    }
    {
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, hlds__make_hlds__add_special_pred__Markers2_34, &hlds__make_hlds__add_special_pred__Markers_35);
    }
    {
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_special_pred__Markers_35, hlds__make_hlds__add_special_pred__PredInfo2_33, &hlds__make_hlds__add_special_pred__PredInfo3_36);
    }
    {
      hlds__make_hlds__add_special_pred__Var_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Var_48, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_13));
    }
    {
      hlds__hlds_pred__pred_info_set_origin_3_p_0(hlds__make_hlds__add_special_pred__Var_48, hlds__make_hlds__add_special_pred__PredInfo3_36, &hlds__make_hlds__add_special_pred__PredInfo_37);
    }
    {
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_25)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredInfo_37)), hlds__make_hlds__add_special_pred__Preds0_26, &hlds__make_hlds__add_special_pred__Preds_38);
    }
    {
      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_special_pred__Preds_38, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40);
    }
  }
}

void mercury__hlds__make_hlds__add_special_pred__init(void)
{
}

void mercury__hlds__make_hlds__add_special_pred__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_special_pred__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_special_pred__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.add_special_pred. */
