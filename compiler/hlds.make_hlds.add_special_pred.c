/*
** Automatically generated from `add_special_pred.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
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




#line 485 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
#line 485 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_4,
#line 485 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_5,
#line 485 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9);

#line 342 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_list_8_p_0(
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_5,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_6,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7,
#line 342 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_8);

#line 207 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36,
#line 207 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);

#line 195 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_7,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 195 "add_special_pred.m"
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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 3)),
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



#line 485 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
#line 485 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_4,
#line 485 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_5,
#line 485 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9)
#line 485 "add_special_pred.m"
{
#line 488 "add_special_pred.m"
  {
#line 488 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 488 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 491 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_25_25 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

#line 491 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 491 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 491 "add_special_pred.m"
    else
#line 491 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 491 "add_special_pred.m"
    else
#line 491 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 489 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 494 "add_special_pred.m"
      {
#line 494 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
#line 494 "add_special_pred.m"
      }
#line 489 "add_special_pred.m"
    else
#line 495 "add_special_pred.m"
      {
#line 496 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_15_15 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

#line 496 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 495 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 498 "add_special_pred.m"
          {
#line 498 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 498 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
        else
#line 500 "add_special_pred.m"
          {
#line 500 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__OldStatus_7 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

#line 501 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) hlds__make_hlds__add_special_pred__OldStatus_7;
#line 500 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
      }
#line 506 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_4 == (MR_Integer) 0);
#line 506 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 507 "add_special_pred.m"
      {
#line 507 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_19_19 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 507 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_8_8;

#line 507 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 507 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 507 "add_special_pred.m"
          {
#line 507 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__V_19_19, (MR_Integer) 0)));
#line 508 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 507 "add_special_pred.m"
          }
#line 507 "add_special_pred.m"
        else
#line 509 "add_special_pred.m"
          {
#line 509 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__V_22_22 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;

#line 509 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 509 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 510 "add_special_pred.m"
              {
#line 510 "add_special_pred.m"
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 510 "add_special_pred.m"
              }
#line 509 "add_special_pred.m"
            else
#line 509 "add_special_pred.m"
              *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 509 "add_special_pred.m"
          }
#line 507 "add_special_pred.m"
      }
#line 506 "add_special_pred.m"
    else
#line 506 "add_special_pred.m"
      *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 488 "add_special_pred.m"
  }
#line 485 "add_special_pred.m"
}

#line 342 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_list_8_p_0(
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_5,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_6,
#line 342 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7,
#line 342 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_8)
#line 342 "add_special_pred.m"
{
#line 346 "add_special_pred.m"
  while (MR_TRUE)
#line 346 "add_special_pred.m"
    {
#line 346 "add_special_pred.m"
      /* tailcall optimized into a loop */
#line 346 "add_special_pred.m"
      {
#line 346 "add_special_pred.m"
        MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 346 "add_special_pred.m"
        if ((hlds__make_hlds__add_special_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 346 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 346 "add_special_pred.m"
        else
#line 348 "add_special_pred.m"
          {
#line 348 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 348 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 348 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27;
#line 348 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__Globals_38;
#line 348 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_39;

#line 360 "add_special_pred.m"
            {
#line 360 "add_special_pred.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_special_pred__Globals_38);
            }
#line 361 "add_special_pred.m"
            {
#line 361 "add_special_pred.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_38, (MR_Integer) 272, &hlds__make_hlds__add_special_pred__GenSpecialPreds_39);
            }
#line 366 "add_special_pred.m"
#line 366 "add_special_pred.m"
            switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_39) {
#line 366 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 366 "add_special_pred.m"
              case (MR_Integer) 0:
#line 372 "add_special_pred.m"
#line 372 "add_special_pred.m"
                switch (hlds__make_hlds__add_special_pred__SpecialPredId_17) {
#line 372 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 372 "add_special_pred.m"
                  case (MR_Integer) 2:
#line 373 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 372 "add_special_pred.m"
                    break;
#line 372 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 375 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 372 "add_special_pred.m"
                    break;
#line 372 "add_special_pred.m"
                  case (MR_Integer) 3:
#line 377 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 372 "add_special_pred.m"
                    break;
#line 372 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 370 "add_special_pred.m"
                    {
#line 370 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_17, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Context_5, hlds__make_hlds__add_special_pred__TypeStatus_6, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27);
                    }
#line 372 "add_special_pred.m"
                    break;
#line 372 "add_special_pred.m"
                }
#line 366 "add_special_pred.m"
                break;
#line 366 "add_special_pred.m"
              case (MR_Integer) 1:
#line 364 "add_special_pred.m"
                {
#line 364 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_17, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Context_5, hlds__make_hlds__add_special_pred__TypeStatus_6, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27);
                }
#line 366 "add_special_pred.m"
                break;
#line 366 "add_special_pred.m"
            }
#line 351 "add_special_pred.m"
            /* direct tailcall eliminated */
#line 351 "add_special_pred.m"
            {
#line 351 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_special_pred__SpecialPredIds_18;
#line 351 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27;

#line 351 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 351 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__HeadVar__1_1 = hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1;
#line 351 "add_special_pred.m"
            }
#line 351 "add_special_pred.m"
            continue;
#line 348 "add_special_pred.m"
          }
#line 346 "add_special_pred.m"
      }
#line 346 "add_special_pred.m"
      break;
#line 346 "add_special_pred.m"
    }
#line 342 "add_special_pred.m"
}

#line 207 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
#line 207 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36,
#line 207 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37)
#line 207 "add_special_pred.m"
{
#line 212 "add_special_pred.m"
  {
#line 212 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 212 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Globals_18;
#line 212 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_19;

#line 213 "add_special_pred.m"
    {
#line 213 "add_special_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_special_pred__Globals_18);
    }
#line 214 "add_special_pred.m"
    {
#line 214 "add_special_pred.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, (MR_Integer) 272, &hlds__make_hlds__add_special_pred__GenSpecialPreds_19);
    }
#line 219 "add_special_pred.m"
#line 219 "add_special_pred.m"
    switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_19) {
#line 219 "add_special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 219 "add_special_pred.m"
      case (MR_Integer) 0:
#line 227 "add_special_pred.m"
#line 227 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__SpecialPredId_10) {
#line 227 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 227 "add_special_pred.m"
          case (MR_Integer) 2:
#line 247 "add_special_pred.m"
#line 247 "add_special_pred.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) {
#line 247 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 247 "add_special_pred.m"
              case (MR_Integer) 0:
#line 249 "add_special_pred.m"
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 247 "add_special_pred.m"
                break;
#line 247 "add_special_pred.m"
              case (MR_Integer) 1:
#line 232 "add_special_pred.m"
                {
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 232 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));

#line 244 "add_special_pred.m"
                  if ((hlds__make_hlds__add_special_pred__MaybeUserEq_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "add_special_pred.m"
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 244 "add_special_pred.m"
                  else
#line 242 "add_special_pred.m"
                    {
#line 242 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
                    }
#line 232 "add_special_pred.m"
                }
#line 247 "add_special_pred.m"
                break;
#line 247 "add_special_pred.m"
              case (MR_Integer) 2:
#line 248 "add_special_pred.m"
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 247 "add_special_pred.m"
                break;
#line 247 "add_special_pred.m"
              case (MR_Integer) 3:
#line 247 "add_special_pred.m"
#line 247 "add_special_pred.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)))) {
#line 247 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 247 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 250 "add_special_pred.m"
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 247 "add_special_pred.m"
                    break;
#line 247 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 251 "add_special_pred.m"
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 247 "add_special_pred.m"
                    break;
#line 247 "add_special_pred.m"
                }
#line 247 "add_special_pred.m"
                break;
#line 247 "add_special_pred.m"
            }
#line 227 "add_special_pred.m"
            break;
#line 227 "add_special_pred.m"
          case (MR_Integer) 1:
#line 228 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 227 "add_special_pred.m"
            break;
#line 227 "add_special_pred.m"
          case (MR_Integer) 3:
#line 256 "add_special_pred.m"
            {
#line 256 "add_special_pred.m"
              {
#line 256 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__Type_12);
              }
#line 256 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 257 "add_special_pred.m"
                {
#line 257 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
                }
#line 256 "add_special_pred.m"
              else
#line 260 "add_special_pred.m"
                {
#line 260 "add_special_pred.m"
                  {
#line 260 "add_special_pred.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_special_pred", (MR_String) "predicate \140hlds.make_hlds.add_special_pred.add_special_pred\'/9", (MR_String) "attempt to add initialise pred for non-solver type or solver type without automatic initialisation.");
#line 260 "add_special_pred.m"
                    return;
                  }
#line 260 "add_special_pred.m"
                }
#line 256 "add_special_pred.m"
            }
#line 227 "add_special_pred.m"
            break;
#line 227 "add_special_pred.m"
          case (MR_Integer) 0:
#line 222 "add_special_pred.m"
            {
#line 222 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__TypeStatus_20;

#line 461 "add_special_pred.m"
#line 461 "add_special_pred.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) {
#line 461 "add_special_pred.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 461 "add_special_pred.m"
                case (MR_Integer) 0:
#line 481 "add_special_pred.m"
                  {
#line 482 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 481 "add_special_pred.m"
                  }
#line 461 "add_special_pred.m"
                  break;
#line 461 "add_special_pred.m"
                case (MR_Integer) 1:
#line 461 "add_special_pred.m"
                  {
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_57_57 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 461 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));

#line 472 "add_special_pred.m"
                    if ((hlds__make_hlds__add_special_pred__MaybeUserEq_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "add_special_pred.m"
                      {
#line 474 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 473 "add_special_pred.m"
                      }
#line 472 "add_special_pred.m"
                    else
#line 471 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__TypeStatus_20 = hlds__make_hlds__add_special_pred__TypeStatus0_16;
#line 461 "add_special_pred.m"
                  }
#line 461 "add_special_pred.m"
                  break;
#line 461 "add_special_pred.m"
                case (MR_Integer) 2:
#line 481 "add_special_pred.m"
                  {
#line 482 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 481 "add_special_pred.m"
                  }
#line 461 "add_special_pred.m"
                  break;
#line 461 "add_special_pred.m"
                case (MR_Integer) 3:
#line 481 "add_special_pred.m"
                  {
#line 482 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 481 "add_special_pred.m"
                  }
#line 461 "add_special_pred.m"
                  break;
#line 461 "add_special_pred.m"
              }
#line 225 "add_special_pred.m"
              {
#line 225 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus_20, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
              }
#line 222 "add_special_pred.m"
            }
#line 227 "add_special_pred.m"
            break;
#line 227 "add_special_pred.m"
        }
#line 219 "add_special_pred.m"
        break;
#line 219 "add_special_pred.m"
      case (MR_Integer) 1:
#line 217 "add_special_pred.m"
        {
#line 217 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
        }
#line 219 "add_special_pred.m"
        break;
#line 219 "add_special_pred.m"
    }
#line 212 "add_special_pred.m"
  }
#line 207 "add_special_pred.m"
}

#line 195 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_7,
#line 195 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 195 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9)
#line 195 "add_special_pred.m"
{
#line 199 "add_special_pred.m"
  while (MR_TRUE)
#line 199 "add_special_pred.m"
    {
#line 199 "add_special_pred.m"
      /* tailcall optimized into a loop */
#line 199 "add_special_pred.m"
      {
#line 199 "add_special_pred.m"
        MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 199 "add_special_pred.m"
        if ((hlds__make_hlds__add_special_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 199 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 199 "add_special_pred.m"
        else
#line 201 "add_special_pred.m"
          {
#line 201 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;
#line 201 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__Globals_42;
#line 201 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_43;

#line 213 "add_special_pred.m"
            {
#line 213 "add_special_pred.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__Globals_42);
            }
#line 214 "add_special_pred.m"
            {
#line 214 "add_special_pred.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_42, (MR_Integer) 272, &hlds__make_hlds__add_special_pred__GenSpecialPreds_43);
            }
#line 219 "add_special_pred.m"
#line 219 "add_special_pred.m"
            switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_43) {
#line 219 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 219 "add_special_pred.m"
              case (MR_Integer) 0:
#line 227 "add_special_pred.m"
#line 227 "add_special_pred.m"
                switch (hlds__make_hlds__add_special_pred__SpecialPredId_19) {
#line 227 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 227 "add_special_pred.m"
                  case (MR_Integer) 2:
#line 247 "add_special_pred.m"
#line 247 "add_special_pred.m"
                    switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_5)) {
#line 247 "add_special_pred.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 247 "add_special_pred.m"
                      case (MR_Integer) 0:
#line 249 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 247 "add_special_pred.m"
                        break;
#line 247 "add_special_pred.m"
                      case (MR_Integer) 1:
#line 232 "add_special_pred.m"
                        {
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 4)));
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)));
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 1)));
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 2)));
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 3)));
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 5)));
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 232 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 7)));

#line 244 "add_special_pred.m"
                          if ((hlds__make_hlds__add_special_pred__MaybeUserEq_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 244 "add_special_pred.m"
                          else
#line 242 "add_special_pred.m"
                            {
#line 242 "add_special_pred.m"
                              hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                            }
#line 232 "add_special_pred.m"
                        }
#line 247 "add_special_pred.m"
                        break;
#line 247 "add_special_pred.m"
                      case (MR_Integer) 2:
#line 248 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 247 "add_special_pred.m"
                        break;
#line 247 "add_special_pred.m"
                      case (MR_Integer) 3:
#line 247 "add_special_pred.m"
#line 247 "add_special_pred.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)))) {
#line 247 "add_special_pred.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 247 "add_special_pred.m"
                          case (MR_Integer) 0:
#line 250 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 247 "add_special_pred.m"
                            break;
#line 247 "add_special_pred.m"
                          case (MR_Integer) 1:
#line 251 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 247 "add_special_pred.m"
                            break;
#line 247 "add_special_pred.m"
                        }
#line 247 "add_special_pred.m"
                        break;
#line 247 "add_special_pred.m"
                    }
#line 227 "add_special_pred.m"
                    break;
#line 227 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 228 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 227 "add_special_pred.m"
                    break;
#line 227 "add_special_pred.m"
                  case (MR_Integer) 3:
#line 256 "add_special_pred.m"
                    {
#line 256 "add_special_pred.m"
                      {
#line 256 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, hlds__make_hlds__add_special_pred__Type_3);
                      }
#line 256 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 257 "add_special_pred.m"
                        {
#line 257 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                        }
#line 256 "add_special_pred.m"
                      else
#line 260 "add_special_pred.m"
                        {
#line 260 "add_special_pred.m"
                          {
#line 260 "add_special_pred.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_special_pred", (MR_String) "predicate \140hlds.make_hlds.add_special_pred.add_special_pred\'/9", (MR_String) "attempt to add initialise pred for non-solver type or solver type without automatic initialisation.");
#line 260 "add_special_pred.m"
                            return;
                          }
#line 260 "add_special_pred.m"
                        }
#line 256 "add_special_pred.m"
                    }
#line 227 "add_special_pred.m"
                    break;
#line 227 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 222 "add_special_pred.m"
                    {
#line 222 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__TypeStatus_44;

#line 461 "add_special_pred.m"
#line 461 "add_special_pred.m"
                      switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_5)) {
#line 461 "add_special_pred.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 461 "add_special_pred.m"
                        case (MR_Integer) 0:
#line 481 "add_special_pred.m"
                          {
#line 482 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 481 "add_special_pred.m"
                          }
#line 461 "add_special_pred.m"
                          break;
#line 461 "add_special_pred.m"
                        case (MR_Integer) 1:
#line 461 "add_special_pred.m"
                          {
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 4)));
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)));
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 1)));
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 2)));
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 3)));
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 5)));
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 461 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 7)));

#line 472 "add_special_pred.m"
                            if ((hlds__make_hlds__add_special_pred__MaybeUserEq_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 473 "add_special_pred.m"
                              {
#line 474 "add_special_pred.m"
                                hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 473 "add_special_pred.m"
                              }
#line 472 "add_special_pred.m"
                            else
#line 471 "add_special_pred.m"
                              hlds__make_hlds__add_special_pred__TypeStatus_44 = hlds__make_hlds__add_special_pred__TypeStatus_7;
#line 461 "add_special_pred.m"
                          }
#line 461 "add_special_pred.m"
                          break;
#line 461 "add_special_pred.m"
                        case (MR_Integer) 2:
#line 481 "add_special_pred.m"
                          {
#line 482 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 481 "add_special_pred.m"
                          }
#line 461 "add_special_pred.m"
                          break;
#line 461 "add_special_pred.m"
                        case (MR_Integer) 3:
#line 481 "add_special_pred.m"
                          {
#line 482 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 481 "add_special_pred.m"
                          }
#line 461 "add_special_pred.m"
                          break;
#line 461 "add_special_pred.m"
                      }
#line 225 "add_special_pred.m"
                      {
#line 225 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_44, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                      }
#line 222 "add_special_pred.m"
                    }
#line 227 "add_special_pred.m"
                    break;
#line 227 "add_special_pred.m"
                }
#line 219 "add_special_pred.m"
                break;
#line 219 "add_special_pred.m"
              case (MR_Integer) 1:
#line 217 "add_special_pred.m"
                {
#line 217 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                }
#line 219 "add_special_pred.m"
                break;
#line 219 "add_special_pred.m"
            }
#line 204 "add_special_pred.m"
            /* direct tailcall eliminated */
#line 204 "add_special_pred.m"
            {
#line 204 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_special_pred__SpecialPredIds_20;
#line 204 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;

#line 204 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 204 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__HeadVar__1_1 = hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1;
#line 204 "add_special_pred.m"
            }
#line 204 "add_special_pred.m"
            continue;
#line 201 "add_special_pred.m"
          }
#line 199 "add_special_pred.m"
      }
#line 199 "add_special_pred.m"
      break;
#line 199 "add_special_pred.m"
    }
#line 195 "add_special_pred.m"
}

#line 58 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(
#line 58 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_9,
#line 58 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_10,
#line 58 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_11,
#line 58 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_12,
#line 58 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 58 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
#line 58 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25,
#line 58 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26)
#line 58 "add_special_pred.m"
{
#line 137 "add_special_pred.m"
  {
#line 137 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 138 "add_special_pred.m"
    {
#line 138 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12);
    }
#line 137 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 142 "add_special_pred.m"
      {
#line 142 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__ThisModule_16;
#line 142 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28;
#line 142 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41;

#line 141 "add_special_pred.m"
        {
#line 141 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 143 "add_special_pred.m"
        {
#line 143 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__ThisModule_16 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_special_pred__TypeStatus_14);
        }
#line 162 "add_special_pred.m"
#line 162 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__ThisModule_16) {
#line 162 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 162 "add_special_pred.m"
          case (MR_Integer) 0:
#line 163 "add_special_pred.m"
            {
#line 163 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps_22;
#line 168 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_23_23;

#line 166 "add_special_pred.m"
              {
#line 166 "add_special_pred.m"
                hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__SpecialPredMaps_22);
              }
#line 168 "add_special_pred.m"
              {
#line 168 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps_22, (MR_Integer) 2, hlds__make_hlds__add_special_pred__TypeCtor_11, &hlds__make_hlds__add_special_pred__V_23_23);
              }
#line 167 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 167 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28;
#line 167 "add_special_pred.m"
              else
#line 173 "add_special_pred.m"
                {
#line 173 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__Globals_85;
#line 173 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_86;

#line 360 "add_special_pred.m"
                  {
#line 360 "add_special_pred.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__Globals_85);
                  }
#line 361 "add_special_pred.m"
                  {
#line 361 "add_special_pred.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_85, (MR_Integer) 272, &hlds__make_hlds__add_special_pred__GenSpecialPreds_86);
                  }
#line 366 "add_special_pred.m"
#line 366 "add_special_pred.m"
                  switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_86) {
#line 366 "add_special_pred.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 366 "add_special_pred.m"
                    case (MR_Integer) 0:
#line 373 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28;
#line 366 "add_special_pred.m"
                      break;
#line 366 "add_special_pred.m"
                    case (MR_Integer) 1:
#line 364 "add_special_pred.m"
                      {
#line 364 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41);
                      }
#line 366 "add_special_pred.m"
                      break;
#line 366 "add_special_pred.m"
                  }
#line 173 "add_special_pred.m"
                }
#line 163 "add_special_pred.m"
            }
#line 162 "add_special_pred.m"
            break;
#line 162 "add_special_pred.m"
          case (MR_Integer) 1:
#line 145 "add_special_pred.m"
            {
#line 145 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_21;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_75_75;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Ctors_17;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Globals_18;
#line 147 "add_special_pred.m"
              MR_Integer hlds__make_hlds__add_special_pred__CompareSpec_19;
#line 147 "add_special_pred.m"
              MR_Integer hlds__make_hlds__add_special_pred__CtorCount_20;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_34_34;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_54_54;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_51_51;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_52_52;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_56_56;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 147 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_58_58;

#line 147 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
#line 147 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 147 "add_special_pred.m"
                {
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 0)));
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 1)));
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 2)));
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 3)));
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 4)));
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 5)));
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 147 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 7)));
#line 148 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 147 "add_special_pred.m"
                  if (hlds__make_hlds__add_special_pred__succeeded)
#line 147 "add_special_pred.m"
                    {
#line 149 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 147 "add_special_pred.m"
                        {
#line 150 "add_special_pred.m"
                          {
#line 150 "add_special_pred.m"
                            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__Globals_18);
                          }
#line 151 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_34_34 = (MR_Integer) 311;
#line 151 "add_special_pred.m"
                          {
#line 151 "add_special_pred.m"
                            libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, hlds__make_hlds__add_special_pred__V_34_34, &hlds__make_hlds__add_special_pred__CompareSpec_19);
                          }
#line 1384 "hlds.make_hlds.add_special_pred.c"
                          hlds__make_hlds__add_special_pred__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 153 "add_special_pred.m"
                          {
#line 153 "add_special_pred.m"
                            mercury__list__length_2_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_75_75, hlds__make_hlds__add_special_pred__Ctors_17, &hlds__make_hlds__add_special_pred__CtorCount_20);
                          }
#line 154 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__CtorCount_20 > hlds__make_hlds__add_special_pred__CompareSpec_19);
#line 147 "add_special_pred.m"
                        }
#line 147 "add_special_pred.m"
                    }
#line 147 "add_special_pred.m"
                }
#line 146 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 156 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[2]);
#line 146 "add_special_pred.m"
              else
#line 158 "add_special_pred.m"
                {
#line 158 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1]);
#line 158 "add_special_pred.m"
                }
#line 160 "add_special_pred.m"
              {
#line 160 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredIds_21, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41);
              }
#line 145 "add_special_pred.m"
            }
#line 162 "add_special_pred.m"
            break;
#line 162 "add_special_pred.m"
        }
#line 177 "add_special_pred.m"
        {
#line 177 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_special_pred__Type_10);
        }
#line 177 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 178 "add_special_pred.m"
          {
#line 178 "add_special_pred.m"
            {
#line 178 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 3, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26);
            }
#line 178 "add_special_pred.m"
          }
#line 177 "add_special_pred.m"
        else
#line 177 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41;
#line 142 "add_special_pred.m"
      }
#line 137 "add_special_pred.m"
    else
#line 188 "add_special_pred.m"
      {
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds0_24;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_99;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__Globals_119;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_120;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_132;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_133;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__Globals_153;
#line 188 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_154;

#line 184 "add_special_pred.m"
        {
#line 184 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_special_pred__Type_10);
        }
#line 184 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 185 "add_special_pred.m"
          {
#line 185 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__SpecialPredIds0_24 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[5]);
#line 185 "add_special_pred.m"
          }
#line 184 "add_special_pred.m"
        else
#line 187 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__SpecialPredIds0_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "add_special_pred.m"
        {
#line 190 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__SpecialPredIds_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_special_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, 0) = ((MR_Box) ((MR_Integer) 2));
#line 190 "add_special_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredIds0_24));
#line 190 "add_special_pred.m"
        }
#line 360 "add_special_pred.m"
        {
#line 360 "add_special_pred.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__Globals_119);
        }
#line 361 "add_special_pred.m"
        {
#line 361 "add_special_pred.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_119, (MR_Integer) 272, &hlds__make_hlds__add_special_pred__GenSpecialPreds_120);
        }
#line 366 "add_special_pred.m"
#line 366 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_120) {
#line 366 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 366 "add_special_pred.m"
          case (MR_Integer) 0:
#line 370 "add_special_pred.m"
            {
#line 370 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108);
            }
#line 366 "add_special_pred.m"
            break;
#line 366 "add_special_pred.m"
          case (MR_Integer) 1:
#line 364 "add_special_pred.m"
            {
#line 364 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108);
            }
#line 366 "add_special_pred.m"
            break;
#line 366 "add_special_pred.m"
        }
#line 347 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__SpecialPredId_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, (MR_Integer) 0)));
#line 347 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__SpecialPredIds_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, (MR_Integer) 1)));
#line 360 "add_special_pred.m"
        {
#line 360 "add_special_pred.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108, &hlds__make_hlds__add_special_pred__Globals_153);
        }
#line 361 "add_special_pred.m"
        {
#line 361 "add_special_pred.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_153, (MR_Integer) 272, &hlds__make_hlds__add_special_pred__GenSpecialPreds_154);
        }
#line 366 "add_special_pred.m"
#line 366 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_154) {
#line 366 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 366 "add_special_pred.m"
          case (MR_Integer) 0:
#line 373 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108;
#line 366 "add_special_pred.m"
            break;
#line 366 "add_special_pred.m"
          case (MR_Integer) 1:
#line 364 "add_special_pred.m"
            {
#line 364 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_132, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142);
            }
#line 366 "add_special_pred.m"
            break;
#line 366 "add_special_pred.m"
        }
#line 351 "add_special_pred.m"
        {
#line 351 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__add_special_pred_decl_list_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredIds_133, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26);
        }
#line 188 "add_special_pred.m"
      }
#line 137 "add_special_pred.m"
  }
#line 58 "add_special_pred.m"
}

#line 52 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(
#line 52 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_9,
#line 52 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_10,
#line 52 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_11,
#line 52 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_12,
#line 52 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 52 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
#line 52 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16,
#line 52 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17)
#line 52 "add_special_pred.m"
{
#line 125 "add_special_pred.m"
  {
#line 125 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 126 "add_special_pred.m"
    {
#line 126 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__TypeStatus_14);
    }
#line 125 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 125 "add_special_pred.m"
      *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16;
#line 125 "add_special_pred.m"
    else
#line 131 "add_special_pred.m"
      {
#line 131 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17);
      }
#line 125 "add_special_pred.m"
  }
#line 52 "add_special_pred.m"
}

#line 48 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(
#line 48 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_9,
#line 48 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_10,
#line 48 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_11,
#line 48 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_12,
#line 48 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 48 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
#line 48 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54,
#line 48 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_55)
#line 48 "add_special_pred.m"
{
#line 382 "add_special_pred.m"
  {
#line 382 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ModuleName_16;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgTypes_17;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgModes_18;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Det_19;
#line 382 "add_special_pred.m"
    MR_String hlds__make_hlds__add_special_pred__Name_20;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Proofs_29;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ConstraintMap_30;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers_31;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ClassContext_32;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ExistQVars_33;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__VarNameRemap_34;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgLives_36;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__InstVarSet_37;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredicateTable0_41;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps_47;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_61_61;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_62_62;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_64_64;
#line 382 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66;

#line 383 "add_special_pred.m"
    {
#line 383 "add_special_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__ModuleName_16);
    }
#line 384 "add_special_pred.m"
    {
#line 384 "add_special_pred.m"
      hlds__special_pred__special_pred_interface_5_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__Type_11, &hlds__make_hlds__add_special_pred__ArgTypes_17, &hlds__make_hlds__add_special_pred__ArgModes_18, &hlds__make_hlds__add_special_pred__Det_19);
    }
#line 385 "add_special_pred.m"
    {
#line 385 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Name_20 = hlds__special_pred__special_pred_name_2_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeCtor_12);
    }
#line 403 "add_special_pred.m"
    {
#line 403 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_57_57 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 1714 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 407 "add_special_pred.m"
    {
#line 407 "add_special_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_special_pred__Proofs_29);
    }
#line 408 "add_special_pred.m"
    {
#line 408 "add_special_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96, &hlds__make_hlds__add_special_pred__ConstraintMap_30);
    }
#line 409 "add_special_pred.m"
    {
#line 409 "add_special_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_special_pred__Markers_31);
    }
#line 412 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__ClassContext_32 = (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[4];
#line 413 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__ExistQVars_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "add_special_pred.m"
    {
#line 414 "add_special_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_special_pred__VarNameRemap_34);
    }
#line 416 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 419 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__ArgLives_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "add_special_pred.m"
    {
#line 420 "add_special_pred.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_special_pred__InstVarSet_37);
    }
#line 424 "add_special_pred.m"
    {
#line 424 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "add_special_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__ArgModes_18));
#line 424 "add_special_pred.m"
    }
#line 425 "add_special_pred.m"
    {
#line 425 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "add_special_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Det_19));
#line 425 "add_special_pred.m"
    }
#line 428 "add_special_pred.m"
    {
#line 428 "add_special_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__PredicateTable0_41);
    }
#line 1770 "hlds.make_hlds.add_special_pred.c"
#line 1771 "hlds.make_hlds.add_special_pred.c"
    switch (hlds__make_hlds__add_special_pred__SpecialPredId_9) {
#line 1773 "hlds.make_hlds.add_special_pred.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1775 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 2:
#line 1777 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 1:
#line 1779 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 0:
#line 1781 "hlds.make_hlds.add_special_pred.c"
        {
#line 1783 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredName_24;
#line 1785 "hlds.make_hlds.add_special_pred.c"
          MR_Integer hlds__make_hlds__add_special_pred__Arity_25;
#line 1787 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__ClausesInfo0_26;
#line 1789 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__Origin_27;
#line 1791 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredStatus_28;
#line 1793 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo0_35;
#line 1795 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo_39;
#line 1797 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredId_42;
#line 1799 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredicateTable_43;
#line 1801 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_44;
#line 1803 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_110_110;
#line 1805 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_111_111;
#line 1807 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_112_112;
#line 1809 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_113_113;
#line 424 "add_special_pred.m"
          MR_Integer hlds__make_hlds__add_special_pred___ProcId_40;

#line 396 "add_special_pred.m"
          {
#line 396 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__PredName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 396 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__PredName_24, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_20));
#line 396 "add_special_pred.m"
          }
#line 399 "add_special_pred.m"
          {
#line 399 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Arity_25 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9);
          }
#line 403 "add_special_pred.m"
          {
#line 403 "add_special_pred.m"
            hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__Arity_25, hlds__make_hlds__add_special_pred__V_57_57, &hlds__make_hlds__add_special_pred__ClausesInfo0_26);
          }
#line 405 "add_special_pred.m"
          {
#line 405 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Origin_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_27, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_9));
#line 405 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_27, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12));
#line 405 "add_special_pred.m"
          }
#line 406 "add_special_pred.m"
          {
#line 406 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeStatus_14, &hlds__make_hlds__add_special_pred__PredStatus_28);
          }
#line 415 "add_special_pred.m"
          {
#line 415 "add_special_pred.m"
            hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_special_pred__ModuleName_16, hlds__make_hlds__add_special_pred__PredName_24, hlds__make_hlds__add_special_pred__Arity_25, (MR_Integer) 0, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Origin_27, hlds__make_hlds__add_special_pred__PredStatus_28, hlds__make_hlds__add_special_pred__V_61_61, hlds__make_hlds__add_special_pred__Markers_31, hlds__make_hlds__add_special_pred__ArgTypes_17, hlds__make_hlds__add_special_pred__TVarSet_10, hlds__make_hlds__add_special_pred__ExistQVars_33, hlds__make_hlds__add_special_pred__ClassContext_32, hlds__make_hlds__add_special_pred__Proofs_29, hlds__make_hlds__add_special_pred__ConstraintMap_30, hlds__make_hlds__add_special_pred__ClausesInfo0_26, hlds__make_hlds__add_special_pred__VarNameRemap_34, &hlds__make_hlds__add_special_pred__PredInfo0_35);
          }
#line 424 "add_special_pred.m"
          {
#line 424 "add_special_pred.m"
            hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_special_pred__InstVarSet_37, hlds__make_hlds__add_special_pred__Arity_25, hlds__make_hlds__add_special_pred__ArgModes_18, hlds__make_hlds__add_special_pred__V_62_62, hlds__make_hlds__add_special_pred__ArgLives_36, (MR_Integer) 1, hlds__make_hlds__add_special_pred__V_64_64, hlds__make_hlds__add_special_pred__Context_13, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_special_pred__PredInfo0_35, &hlds__make_hlds__add_special_pred__PredInfo_39, &hlds__make_hlds__add_special_pred___ProcId_40);
          }
#line 429 "add_special_pred.m"
          {
#line 429 "add_special_pred.m"
            hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_special_pred__PredInfo_39, &hlds__make_hlds__add_special_pred__PredId_42, hlds__make_hlds__add_special_pred__PredicateTable0_41, &hlds__make_hlds__add_special_pred__PredicateTable_43);
          }
#line 430 "add_special_pred.m"
          {
#line 430 "add_special_pred.m"
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_special_pred__PredicateTable_43, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66);
          }
#line 431 "add_special_pred.m"
          {
#line 431 "add_special_pred.m"
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_44);
          }
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 0)));
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 1)));
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 2)));
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 3)));
#line 437 "add_special_pred.m"
#line 437 "add_special_pred.m"
          switch (hlds__make_hlds__add_special_pred__SpecialPredId_9) {
#line 437 "add_special_pred.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 437 "add_special_pred.m"
            case (MR_Integer) 2:
#line 443 "add_special_pred.m"
              {
#line 443 "add_special_pred.m"
                MR_Word hlds__make_hlds__add_special_pred__CompareMap_51;

#line 445 "add_special_pred.m"
                {
#line 445 "add_special_pred.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_42)), hlds__make_hlds__add_special_pred__V_111_111, &hlds__make_hlds__add_special_pred__CompareMap_51);
                }
#line 446 "add_special_pred.m"
                {
#line 446 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 446 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_113_113));
#line 446 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_112_112));
#line 446 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__CompareMap_51));
#line 446 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_110_110));
#line 446 "add_special_pred.m"
                }
#line 443 "add_special_pred.m"
              }
#line 437 "add_special_pred.m"
              break;
#line 437 "add_special_pred.m"
            case (MR_Integer) 1:
#line 438 "add_special_pred.m"
              {
#line 438 "add_special_pred.m"
                MR_Word hlds__make_hlds__add_special_pred__IndexMap_49;

#line 440 "add_special_pred.m"
                {
#line 440 "add_special_pred.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_42)), hlds__make_hlds__add_special_pred__V_112_112, &hlds__make_hlds__add_special_pred__IndexMap_49);
                }
#line 441 "add_special_pred.m"
                {
#line 441 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_113_113));
#line 441 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__IndexMap_49));
#line 441 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_111_111));
#line 441 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_110_110));
#line 441 "add_special_pred.m"
                }
#line 438 "add_special_pred.m"
              }
#line 437 "add_special_pred.m"
              break;
#line 437 "add_special_pred.m"
            case (MR_Integer) 0:
#line 433 "add_special_pred.m"
              {
#line 433 "add_special_pred.m"
                MR_Word hlds__make_hlds__add_special_pred__UnifyMap_46;

#line 435 "add_special_pred.m"
                {
#line 435 "add_special_pred.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_42)), hlds__make_hlds__add_special_pred__V_113_113, &hlds__make_hlds__add_special_pred__UnifyMap_46);
                }
#line 436 "add_special_pred.m"
                {
#line 436 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 436 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__UnifyMap_46));
#line 436 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_112_112));
#line 436 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_111_111));
#line 436 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_110_110));
#line 436 "add_special_pred.m"
                }
#line 433 "add_special_pred.m"
              }
#line 437 "add_special_pred.m"
              break;
#line 437 "add_special_pred.m"
          }
#line 1977 "hlds.make_hlds.add_special_pred.c"
        }
#line 1979 "hlds.make_hlds.add_special_pred.c"
        break;
#line 1981 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 3:
#line 1983 "hlds.make_hlds.add_special_pred.c"
        {
#line 1985 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__TypeSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__TypeCtor_12, (MR_Integer) 0)));
#line 1987 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__TypeModuleName_23;
#line 1989 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__InitMap_53;
#line 1991 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredName_115;
#line 1993 "hlds.make_hlds.add_special_pred.c"
          MR_Integer hlds__make_hlds__add_special_pred__Arity_116;
#line 1995 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__ClausesInfo0_117;
#line 1997 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__Origin_118;
#line 1999 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredStatus_119;
#line 2001 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo0_120;
#line 2003 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo_121;
#line 2005 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredId_123;
#line 2007 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredicateTable_124;
#line 2009 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_125;
#line 2011 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_126_126;
#line 2013 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_127_127;
#line 2015 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_128_128;
#line 2017 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_129_129;
#line 388 "add_special_pred.m"
          MR_Integer hlds__make_hlds__add_special_pred___TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__TypeCtor_12, (MR_Integer) 1)));
#line 424 "add_special_pred.m"
          MR_Integer hlds__make_hlds__add_special_pred___ProcId_114;

#line 389 "add_special_pred.m"
          {
#line 389 "add_special_pred.m"
            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_special_pred__TypeSymName_21, hlds__make_hlds__add_special_pred__ModuleName_16, &hlds__make_hlds__add_special_pred__TypeModuleName_23);
          }
#line 391 "add_special_pred.m"
          {
#line 391 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__PredName_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__PredName_115, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeModuleName_23));
#line 391 "add_special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__PredName_115, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_20));
#line 391 "add_special_pred.m"
          }
#line 399 "add_special_pred.m"
          {
#line 399 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Arity_116 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9);
          }
#line 403 "add_special_pred.m"
          {
#line 403 "add_special_pred.m"
            hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__Arity_116, hlds__make_hlds__add_special_pred__V_57_57, &hlds__make_hlds__add_special_pred__ClausesInfo0_117);
          }
#line 405 "add_special_pred.m"
          {
#line 405 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Origin_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 405 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_118, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_9));
#line 405 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_118, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12));
#line 405 "add_special_pred.m"
          }
#line 406 "add_special_pred.m"
          {
#line 406 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeStatus_14, &hlds__make_hlds__add_special_pred__PredStatus_119);
          }
#line 415 "add_special_pred.m"
          {
#line 415 "add_special_pred.m"
            hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_special_pred__ModuleName_16, hlds__make_hlds__add_special_pred__PredName_115, hlds__make_hlds__add_special_pred__Arity_116, (MR_Integer) 0, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Origin_118, hlds__make_hlds__add_special_pred__PredStatus_119, hlds__make_hlds__add_special_pred__V_61_61, hlds__make_hlds__add_special_pred__Markers_31, hlds__make_hlds__add_special_pred__ArgTypes_17, hlds__make_hlds__add_special_pred__TVarSet_10, hlds__make_hlds__add_special_pred__ExistQVars_33, hlds__make_hlds__add_special_pred__ClassContext_32, hlds__make_hlds__add_special_pred__Proofs_29, hlds__make_hlds__add_special_pred__ConstraintMap_30, hlds__make_hlds__add_special_pred__ClausesInfo0_117, hlds__make_hlds__add_special_pred__VarNameRemap_34, &hlds__make_hlds__add_special_pred__PredInfo0_120);
          }
#line 424 "add_special_pred.m"
          {
#line 424 "add_special_pred.m"
            hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_special_pred__InstVarSet_37, hlds__make_hlds__add_special_pred__Arity_116, hlds__make_hlds__add_special_pred__ArgModes_18, hlds__make_hlds__add_special_pred__V_62_62, hlds__make_hlds__add_special_pred__ArgLives_36, (MR_Integer) 1, hlds__make_hlds__add_special_pred__V_64_64, hlds__make_hlds__add_special_pred__Context_13, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_special_pred__PredInfo0_120, &hlds__make_hlds__add_special_pred__PredInfo_121, &hlds__make_hlds__add_special_pred___ProcId_114);
          }
#line 429 "add_special_pred.m"
          {
#line 429 "add_special_pred.m"
            hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_special_pred__PredInfo_121, &hlds__make_hlds__add_special_pred__PredId_123, hlds__make_hlds__add_special_pred__PredicateTable0_41, &hlds__make_hlds__add_special_pred__PredicateTable_124);
          }
#line 430 "add_special_pred.m"
          {
#line 430 "add_special_pred.m"
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_special_pred__PredicateTable_124, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66);
          }
#line 431 "add_special_pred.m"
          {
#line 431 "add_special_pred.m"
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_125);
          }
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 0)));
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 1)));
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 2)));
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 3)));
#line 450 "add_special_pred.m"
          {
#line 450 "add_special_pred.m"
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_123)), hlds__make_hlds__add_special_pred__V_126_126, &hlds__make_hlds__add_special_pred__InitMap_53);
          }
#line 451 "add_special_pred.m"
          {
#line 451 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 451 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_129_129));
#line 451 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_128_128));
#line 451 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_127_127));
#line 451 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__InitMap_53));
#line 451 "add_special_pred.m"
          }
#line 2116 "hlds.make_hlds.add_special_pred.c"
        }
#line 2118 "hlds.make_hlds.add_special_pred.c"
        break;
#line 2120 "hlds.make_hlds.add_special_pred.c"
    }
#line 453 "add_special_pred.m"
    {
#line 453 "add_special_pred.m"
      hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps_47, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_55);
    }
#line 382 "add_special_pred.m"
  }
#line 48 "add_special_pred.m"
}

#line 36 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type0_12,
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
#line 36 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39,
#line 36 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40)
#line 36 "add_special_pred.m"
{
#line 268 "add_special_pred.m"
  {
#line 268 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Type_18;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredStatus_19;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_20;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps1_24;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredId_25;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Preds0_26;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo0_27;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo1_29;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ClausesInfo_32;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo2_33;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers2_34;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers_35;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo3_36;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo_37;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Preds_38;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_48_48;
#line 268 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 333 "add_special_pred.m"
    MR_String hlds__make_hlds__add_special_pred__Name_64;
#line 334 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeInfo_13_71;
#line 334 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtor_63;
#line 334 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_70_70;
#line 491 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_93_93;
#line 273 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_21_21;
#line 287 "add_special_pred.m"
    MR_Box hlds__make_hlds__add_special_pred__conv0_PredInfo0_27;
#line 292 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_60_60;

#line 334 "add_special_pred.m"
    {
#line 334 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(hlds__make_hlds__add_special_pred__Type0_12, &hlds__make_hlds__add_special_pred__TypeCtor_63, &hlds__make_hlds__add_special_pred__V_70_70);
    }
#line 334 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 334 "add_special_pred.m"
      {
#line 2225 "hlds.make_hlds.add_special_pred.c"
        hlds__make_hlds__add_special_pred__TypeInfo_13_71 = (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[3];
#line 334 "add_special_pred.m"
        {
#line 334 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_special_pred__TypeInfo_13_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_special_pred__V_70_70)));
        }
#line 334 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 335 "add_special_pred.m"
          {
#line 335 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(hlds__make_hlds__add_special_pred__TypeCtor_63, &hlds__make_hlds__add_special_pred__Name_64);
          }
#line 334 "add_special_pred.m"
      }
#line 333 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 337 "add_special_pred.m"
      {
#line 337 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_66_66;
#line 337 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_68_68;

#line 337 "add_special_pred.m"
        {
#line 337 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "add_special_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_64));
#line 337 "add_special_pred.m"
        }
#line 337 "add_special_pred.m"
        {
#line 337 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "add_special_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_68_68));
#line 337 "add_special_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_66_66, 1) = ((MR_Box) ((MR_Integer) 0));
#line 337 "add_special_pred.m"
        }
#line 337 "add_special_pred.m"
        {
#line 337 "add_special_pred.m"
          parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_special_pred__V_66_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_special_pred__Type_18);
        }
#line 337 "add_special_pred.m"
      }
#line 333 "add_special_pred.m"
    else
#line 339 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Type_18 = hlds__make_hlds__add_special_pred__Type0_12;
#line 490 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__V_93_93 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;
#line 491 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 491 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 491 "add_special_pred.m"
    else
#line 491 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 491 "add_special_pred.m"
    else
#line 491 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 489 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 494 "add_special_pred.m"
      {
#line 494 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
#line 494 "add_special_pred.m"
      }
#line 489 "add_special_pred.m"
    else
#line 495 "add_special_pred.m"
      {
#line 496 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_83_83 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;

#line 496 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 495 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 498 "add_special_pred.m"
          {
#line 498 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 498 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
        else
#line 500 "add_special_pred.m"
          {
#line 500 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__OldStatus_76 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;

#line 501 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) hlds__make_hlds__add_special_pred__OldStatus_76;
#line 500 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
      }
#line 506 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_10 == (MR_Integer) 0);
#line 506 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 507 "add_special_pred.m"
      {
#line 507 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_87_87 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 507 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_77_77;

#line 507 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_87_87)) == (MR_mktag((MR_Integer) 2)));
#line 507 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 507 "add_special_pred.m"
          {
#line 507 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__V_87_87, (MR_Integer) 0)));
#line 508 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 507 "add_special_pred.m"
          }
#line 507 "add_special_pred.m"
        else
#line 509 "add_special_pred.m"
          {
#line 509 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__V_90_90 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;

#line 509 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 509 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 510 "add_special_pred.m"
              {
#line 510 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 510 "add_special_pred.m"
              }
#line 509 "add_special_pred.m"
            else
#line 509 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__PredStatus_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 509 "add_special_pred.m"
          }
#line 507 "add_special_pred.m"
      }
#line 506 "add_special_pred.m"
    else
#line 506 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__PredStatus_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 271 "add_special_pred.m"
    {
#line 271 "add_special_pred.m"
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_20);
    }
#line 273 "add_special_pred.m"
    {
#line 273 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps0_20, hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TypeCtor_13, &hlds__make_hlds__add_special_pred__V_21_21);
    }
#line 272 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 272 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39;
#line 272 "add_special_pred.m"
    else
#line 278 "add_special_pred.m"
      {
#line 278 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__PredOldStatus_22 = (MR_Word) hlds__make_hlds__add_special_pred__PredStatus_19;
#line 278 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__TypeStatus_23 = (MR_Word) hlds__make_hlds__add_special_pred__PredOldStatus_22;

#line 280 "add_special_pred.m"
        {
#line 280 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus_23, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41);
        }
#line 278 "add_special_pred.m"
      }
#line 283 "add_special_pred.m"
    {
#line 283 "add_special_pred.m"
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__SpecialPredMaps1_24);
    }
#line 284 "add_special_pred.m"
    {
#line 284 "add_special_pred.m"
      hlds__special_pred__lookup_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps1_24, hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TypeCtor_13, &hlds__make_hlds__add_special_pred__PredId_25);
    }
#line 286 "add_special_pred.m"
    {
#line 286 "add_special_pred.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__Preds0_26);
    }
#line 2430 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2432 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 287 "add_special_pred.m"
    {
#line 287 "add_special_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_special_pred__Preds0_26, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_25)), &hlds__make_hlds__add_special_pred__conv0_PredInfo0_27);
    }
#line 287 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__PredInfo0_27 = ((MR_Word) hlds__make_hlds__add_special_pred__conv0_PredInfo0_27);
#line 291 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__V_60_60 = (MR_Word) hlds__make_hlds__add_special_pred__PredStatus_19;
#line 292 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 292 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 292 "add_special_pred.m"
    else
#line 292 "add_special_pred.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_60_60)) == (MR_mktag((MR_Integer) 2))))
#line 291 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 292 "add_special_pred.m"
    else
#line 292 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 290 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 295 "add_special_pred.m"
      {
#line 295 "add_special_pred.m"
        hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_special_pred__PredStatus_19, hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__PredInfo1_29);
      }
#line 290 "add_special_pred.m"
    else
#line 296 "add_special_pred.m"
      {
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__OldPredStatus_31;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_44_44;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_45_45;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_46_46;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_50_50;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_51_51;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_52_52;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_54_54;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_56_56;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 297 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_30_30;

#line 297 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 297 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 297 "add_special_pred.m"
          {
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));
#line 297 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 297 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 297 "add_special_pred.m"
              {
#line 297 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_44_44, (MR_Integer) 0)));
#line 298 "add_special_pred.m"
                {
#line 298 "add_special_pred.m"
                  hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__OldPredStatus_31);
                }
#line 299 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__V_45_45 = (MR_Word) hlds__make_hlds__add_special_pred__OldPredStatus_31;
#line 299 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 297 "add_special_pred.m"
                if (hlds__make_hlds__add_special_pred__succeeded)
#line 297 "add_special_pred.m"
                  {
#line 300 "add_special_pred.m"
                    {
#line 300 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__V_46_46 = hlds__status__pred_status_is_imported_1_f_0(hlds__make_hlds__add_special_pred__PredStatus_19);
                    }
#line 300 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_46_46 == (MR_Integer) 0);
#line 297 "add_special_pred.m"
                  }
#line 297 "add_special_pred.m"
              }
#line 297 "add_special_pred.m"
          }
#line 296 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 311 "add_special_pred.m"
          {
#line 311 "add_special_pred.m"
            hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_special_pred__PredStatus_19, hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__PredInfo1_29);
          }
#line 296 "add_special_pred.m"
        else
#line 313 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__PredInfo1_29 = hlds__make_hlds__add_special_pred__PredInfo0_27;
#line 296 "add_special_pred.m"
      }
#line 315 "add_special_pred.m"
    {
#line 315 "add_special_pred.m"
      check_hlds__unify_proc__generate_clause_info_6_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__ClausesInfo_32);
    }
#line 317 "add_special_pred.m"
    {
#line 317 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_special_pred__ClausesInfo_32, hlds__make_hlds__add_special_pred__PredInfo1_29, &hlds__make_hlds__add_special_pred__PredInfo2_33);
    }
#line 318 "add_special_pred.m"
    {
#line 318 "add_special_pred.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_special_pred__PredInfo2_33, &hlds__make_hlds__add_special_pred__Markers2_34);
    }
#line 319 "add_special_pred.m"
    {
#line 319 "add_special_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, hlds__make_hlds__add_special_pred__Markers2_34, &hlds__make_hlds__add_special_pred__Markers_35);
    }
#line 320 "add_special_pred.m"
    {
#line 320 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_special_pred__Markers_35, hlds__make_hlds__add_special_pred__PredInfo2_33, &hlds__make_hlds__add_special_pred__PredInfo3_36);
    }
#line 321 "add_special_pred.m"
    {
#line 321 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_10));
#line 321 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_13));
#line 321 "add_special_pred.m"
    }
#line 321 "add_special_pred.m"
    {
#line 321 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_origin_3_p_0(hlds__make_hlds__add_special_pred__V_48_48, hlds__make_hlds__add_special_pred__PredInfo3_36, &hlds__make_hlds__add_special_pred__PredInfo_37);
    }
#line 323 "add_special_pred.m"
    {
#line 323 "add_special_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_25)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredInfo_37)), hlds__make_hlds__add_special_pred__Preds0_26, &hlds__make_hlds__add_special_pred__Preds_38);
    }
#line 324 "add_special_pred.m"
    {
#line 324 "add_special_pred.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_special_pred__Preds_38, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40);
    }
#line 268 "add_special_pred.m"
  }
#line 36 "add_special_pred.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_special_pred. */
