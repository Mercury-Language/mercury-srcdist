/*
** Automatically generated from `add_special_pred.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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




#line 481 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
#line 481 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_4,
#line 481 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_5,
#line 481 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9);

#line 338 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_list_8_p_0(
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_5,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_6,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7,
#line 338 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_8);

#line 203 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36,
#line 203 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);

#line 191 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_7,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 191 "add_special_pred.m"
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



#line 481 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(
#line 481 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_4,
#line 481 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_5,
#line 481 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9)
#line 481 "add_special_pred.m"
{
#line 484 "add_special_pred.m"
  {
#line 484 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 484 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 487 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_25_25 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

#line 487 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 487 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 487 "add_special_pred.m"
    else
#line 487 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 487 "add_special_pred.m"
    else
#line 487 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 491 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 490 "add_special_pred.m"
      {
#line 490 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
#line 490 "add_special_pred.m"
      }
#line 491 "add_special_pred.m"
    else
#line 495 "add_special_pred.m"
      {
#line 492 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_15_15 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

#line 492 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_15_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 495 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 494 "add_special_pred.m"
          {
#line 494 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 494 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
        else
#line 496 "add_special_pred.m"
          {
#line 496 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__OldStatus_7 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus_5;

#line 497 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12 = (MR_Word) hlds__make_hlds__add_special_pred__OldStatus_7;
#line 496 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
      }
#line 502 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_4 == (MR_Integer) 0);
#line 510 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 505 "add_special_pred.m"
      {
#line 503 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_19_19 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 503 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_8_8;

#line 503 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_19_19)) == (MR_mktag((MR_Integer) 2)));
#line 503 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 503 "add_special_pred.m"
          {
#line 503 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__V_19_19, (MR_Integer) 0)));
#line 504 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 503 "add_special_pred.m"
          }
#line 503 "add_special_pred.m"
        else
#line 507 "add_special_pred.m"
          {
#line 505 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__V_22_22 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;

#line 505 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 507 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 506 "add_special_pred.m"
              {
#line 506 "add_special_pred.m"
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 506 "add_special_pred.m"
              }
#line 507 "add_special_pred.m"
            else
#line 507 "add_special_pred.m"
              *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 507 "add_special_pred.m"
          }
#line 505 "add_special_pred.m"
      }
#line 510 "add_special_pred.m"
    else
#line 510 "add_special_pred.m"
      *hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_12;
#line 484 "add_special_pred.m"
  }
#line 481 "add_special_pred.m"
}

#line 338 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_list_8_p_0(
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_5,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_6,
#line 338 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7,
#line 338 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_8)
#line 338 "add_special_pred.m"
{
#line 342 "add_special_pred.m"
  while (MR_TRUE)
#line 342 "add_special_pred.m"
    {
#line 342 "add_special_pred.m"
      /* tailcall optimized into a loop */
#line 342 "add_special_pred.m"
      {
#line 342 "add_special_pred.m"
        MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 342 "add_special_pred.m"
        if ((hlds__make_hlds__add_special_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 342 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 342 "add_special_pred.m"
        else
#line 344 "add_special_pred.m"
          {
#line 344 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 344 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 344 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27;
#line 344 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__Globals_38;
#line 344 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_39;

#line 356 "add_special_pred.m"
            {
#line 356 "add_special_pred.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_special_pred__Globals_38);
            }
#line 357 "add_special_pred.m"
            {
#line 357 "add_special_pred.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_38, (MR_Integer) 280, &hlds__make_hlds__add_special_pred__GenSpecialPreds_39);
            }
#line 362 "add_special_pred.m"
#line 362 "add_special_pred.m"
            switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_39) {
#line 362 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 362 "add_special_pred.m"
              case (MR_Integer) 0:
#line 368 "add_special_pred.m"
#line 368 "add_special_pred.m"
                switch (hlds__make_hlds__add_special_pred__SpecialPredId_17) {
#line 368 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 368 "add_special_pred.m"
                  case (MR_Integer) 2:
#line 369 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 368 "add_special_pred.m"
                    break;
#line 368 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 371 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 368 "add_special_pred.m"
                    break;
#line 368 "add_special_pred.m"
                  case (MR_Integer) 3:
#line 373 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7;
#line 368 "add_special_pred.m"
                    break;
#line 368 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 366 "add_special_pred.m"
                    {
#line 366 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_17, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Context_5, hlds__make_hlds__add_special_pred__TypeStatus_6, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27);
                    }
#line 368 "add_special_pred.m"
                    break;
#line 368 "add_special_pred.m"
                }
#line 362 "add_special_pred.m"
                break;
#line 362 "add_special_pred.m"
              case (MR_Integer) 1:
#line 360 "add_special_pred.m"
                {
#line 360 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_17, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Context_5, hlds__make_hlds__add_special_pred__TypeStatus_6, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27);
                }
#line 362 "add_special_pred.m"
                break;
#line 362 "add_special_pred.m"
            }
#line 347 "add_special_pred.m"
            /* direct tailcall eliminated */
#line 347 "add_special_pred.m"
            {
#line 347 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_special_pred__SpecialPredIds_18;
#line 347 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_27;

#line 347 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_7 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_7;
#line 347 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__HeadVar__1_1 = hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1;
#line 347 "add_special_pred.m"
            }
#line 347 "add_special_pred.m"
            continue;
#line 344 "add_special_pred.m"
          }
#line 342 "add_special_pred.m"
      }
#line 342 "add_special_pred.m"
      break;
#line 342 "add_special_pred.m"
    }
#line 338 "add_special_pred.m"
}

#line 203 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
#line 203 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36,
#line 203 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37)
#line 203 "add_special_pred.m"
{
#line 208 "add_special_pred.m"
  {
#line 208 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 208 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Globals_18;
#line 208 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_19;

#line 209 "add_special_pred.m"
    {
#line 209 "add_special_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_special_pred__Globals_18);
    }
#line 210 "add_special_pred.m"
    {
#line 210 "add_special_pred.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, (MR_Integer) 280, &hlds__make_hlds__add_special_pred__GenSpecialPreds_19);
    }
#line 215 "add_special_pred.m"
#line 215 "add_special_pred.m"
    switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_19) {
#line 215 "add_special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 215 "add_special_pred.m"
      case (MR_Integer) 0:
#line 223 "add_special_pred.m"
#line 223 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__SpecialPredId_10) {
#line 223 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 223 "add_special_pred.m"
          case (MR_Integer) 2:
#line 243 "add_special_pred.m"
#line 243 "add_special_pred.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) {
#line 243 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 243 "add_special_pred.m"
              case (MR_Integer) 0:
#line 245 "add_special_pred.m"
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 243 "add_special_pred.m"
                break;
#line 243 "add_special_pred.m"
              case (MR_Integer) 1:
#line 228 "add_special_pred.m"
                {
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 228 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));

#line 240 "add_special_pred.m"
                  if ((hlds__make_hlds__add_special_pred__MaybeUserEq_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "add_special_pred.m"
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 240 "add_special_pred.m"
                  else
#line 238 "add_special_pred.m"
                    {
#line 238 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
#line 238 "add_special_pred.m"
                      return;
                    }
#line 228 "add_special_pred.m"
                }
#line 243 "add_special_pred.m"
                break;
#line 243 "add_special_pred.m"
              case (MR_Integer) 2:
#line 244 "add_special_pred.m"
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 243 "add_special_pred.m"
                break;
#line 243 "add_special_pred.m"
              case (MR_Integer) 3:
#line 243 "add_special_pred.m"
#line 243 "add_special_pred.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)))) {
#line 243 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 243 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 246 "add_special_pred.m"
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 243 "add_special_pred.m"
                    break;
#line 243 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 247 "add_special_pred.m"
                    *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 243 "add_special_pred.m"
                    break;
#line 243 "add_special_pred.m"
                }
#line 243 "add_special_pred.m"
                break;
#line 243 "add_special_pred.m"
            }
#line 223 "add_special_pred.m"
            break;
#line 223 "add_special_pred.m"
          case (MR_Integer) 1:
#line 224 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 223 "add_special_pred.m"
            break;
#line 223 "add_special_pred.m"
          case (MR_Integer) 3:
#line 255 "add_special_pred.m"
            {
#line 252 "add_special_pred.m"
              {
#line 252 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__Type_12);
              }
#line 255 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 253 "add_special_pred.m"
                {
#line 253 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
#line 253 "add_special_pred.m"
                  return;
                }
#line 255 "add_special_pred.m"
              else
#line 256 "add_special_pred.m"
                {
#line 256 "add_special_pred.m"
                  {
#line 256 "add_special_pred.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_special_pred", (MR_String) "predicate \140hlds.make_hlds.add_special_pred.add_special_pred\'/9", (MR_String) "attempt to add initialise pred for non-solver type or solver type without automatic initialisation.");
#line 256 "add_special_pred.m"
                    return;
                  }
#line 256 "add_special_pred.m"
                }
#line 255 "add_special_pred.m"
            }
#line 223 "add_special_pred.m"
            break;
#line 223 "add_special_pred.m"
          case (MR_Integer) 0:
#line 218 "add_special_pred.m"
            {
#line 218 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__TypeStatus_20;

#line 457 "add_special_pred.m"
#line 457 "add_special_pred.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) {
#line 457 "add_special_pred.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 457 "add_special_pred.m"
                case (MR_Integer) 0:
#line 477 "add_special_pred.m"
                  {
#line 478 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 477 "add_special_pred.m"
                  }
#line 457 "add_special_pred.m"
                  break;
#line 457 "add_special_pred.m"
                case (MR_Integer) 1:
#line 457 "add_special_pred.m"
                  {
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_57_57 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_58_58 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 457 "add_special_pred.m"
                    MR_Word hlds__make_hlds__add_special_pred__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));

#line 468 "add_special_pred.m"
                    if ((hlds__make_hlds__add_special_pred__MaybeUserEq_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "add_special_pred.m"
                      {
#line 470 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 469 "add_special_pred.m"
                      }
#line 468 "add_special_pred.m"
                    else
#line 467 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__TypeStatus_20 = hlds__make_hlds__add_special_pred__TypeStatus0_16;
#line 457 "add_special_pred.m"
                  }
#line 457 "add_special_pred.m"
                  break;
#line 457 "add_special_pred.m"
                case (MR_Integer) 2:
#line 477 "add_special_pred.m"
                  {
#line 478 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 477 "add_special_pred.m"
                  }
#line 457 "add_special_pred.m"
                  break;
#line 457 "add_special_pred.m"
                case (MR_Integer) 3:
#line 477 "add_special_pred.m"
                  {
#line 478 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__TypeStatus_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 477 "add_special_pred.m"
                  }
#line 457 "add_special_pred.m"
                  break;
#line 457 "add_special_pred.m"
              }
#line 221 "add_special_pred.m"
              {
#line 221 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus_20, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
#line 221 "add_special_pred.m"
                return;
              }
#line 218 "add_special_pred.m"
            }
#line 223 "add_special_pred.m"
            break;
#line 223 "add_special_pred.m"
        }
#line 215 "add_special_pred.m"
        break;
#line 215 "add_special_pred.m"
      case (MR_Integer) 1:
#line 213 "add_special_pred.m"
        {
#line 213 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
#line 213 "add_special_pred.m"
          return;
        }
#line 215 "add_special_pred.m"
        break;
#line 215 "add_special_pred.m"
    }
#line 208 "add_special_pred.m"
  }
#line 203 "add_special_pred.m"
}

#line 191 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_7,
#line 191 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 191 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9)
#line 191 "add_special_pred.m"
{
#line 195 "add_special_pred.m"
  while (MR_TRUE)
#line 195 "add_special_pred.m"
    {
#line 195 "add_special_pred.m"
      /* tailcall optimized into a loop */
#line 195 "add_special_pred.m"
      {
#line 195 "add_special_pred.m"
        MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 195 "add_special_pred.m"
        if ((hlds__make_hlds__add_special_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 195 "add_special_pred.m"
        else
#line 197 "add_special_pred.m"
          {
#line 197 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;
#line 197 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__Globals_42;
#line 197 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_43;

#line 209 "add_special_pred.m"
            {
#line 209 "add_special_pred.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__Globals_42);
            }
#line 210 "add_special_pred.m"
            {
#line 210 "add_special_pred.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_42, (MR_Integer) 280, &hlds__make_hlds__add_special_pred__GenSpecialPreds_43);
            }
#line 215 "add_special_pred.m"
#line 215 "add_special_pred.m"
            switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_43) {
#line 215 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 215 "add_special_pred.m"
              case (MR_Integer) 0:
#line 223 "add_special_pred.m"
#line 223 "add_special_pred.m"
                switch (hlds__make_hlds__add_special_pred__SpecialPredId_19) {
#line 223 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 223 "add_special_pred.m"
                  case (MR_Integer) 2:
#line 243 "add_special_pred.m"
#line 243 "add_special_pred.m"
                    switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_5)) {
#line 243 "add_special_pred.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 243 "add_special_pred.m"
                      case (MR_Integer) 0:
#line 245 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 243 "add_special_pred.m"
                        break;
#line 243 "add_special_pred.m"
                      case (MR_Integer) 1:
#line 228 "add_special_pred.m"
                        {
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 4)));
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)));
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 1)));
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 2)));
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 3)));
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 5)));
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_51_51 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 228 "add_special_pred.m"
                          MR_Word hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 7)));

#line 240 "add_special_pred.m"
                          if ((hlds__make_hlds__add_special_pred__MaybeUserEq_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 240 "add_special_pred.m"
                          else
#line 238 "add_special_pred.m"
                            {
#line 238 "add_special_pred.m"
                              hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                            }
#line 228 "add_special_pred.m"
                        }
#line 243 "add_special_pred.m"
                        break;
#line 243 "add_special_pred.m"
                      case (MR_Integer) 2:
#line 244 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 243 "add_special_pred.m"
                        break;
#line 243 "add_special_pred.m"
                      case (MR_Integer) 3:
#line 243 "add_special_pred.m"
#line 243 "add_special_pred.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)))) {
#line 243 "add_special_pred.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 243 "add_special_pred.m"
                          case (MR_Integer) 0:
#line 246 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 243 "add_special_pred.m"
                            break;
#line 243 "add_special_pred.m"
                          case (MR_Integer) 1:
#line 247 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 243 "add_special_pred.m"
                            break;
#line 243 "add_special_pred.m"
                        }
#line 243 "add_special_pred.m"
                        break;
#line 243 "add_special_pred.m"
                    }
#line 223 "add_special_pred.m"
                    break;
#line 223 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 224 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 223 "add_special_pred.m"
                    break;
#line 223 "add_special_pred.m"
                  case (MR_Integer) 3:
#line 255 "add_special_pred.m"
                    {
#line 252 "add_special_pred.m"
                      {
#line 252 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, hlds__make_hlds__add_special_pred__Type_3);
                      }
#line 255 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 253 "add_special_pred.m"
                        {
#line 253 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                        }
#line 255 "add_special_pred.m"
                      else
#line 256 "add_special_pred.m"
                        {
#line 256 "add_special_pred.m"
                          {
#line 256 "add_special_pred.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_special_pred", (MR_String) "predicate \140hlds.make_hlds.add_special_pred.add_special_pred\'/9", (MR_String) "attempt to add initialise pred for non-solver type or solver type without automatic initialisation.");
#line 256 "add_special_pred.m"
                            return;
                          }
#line 256 "add_special_pred.m"
                        }
#line 255 "add_special_pred.m"
                    }
#line 223 "add_special_pred.m"
                    break;
#line 223 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 218 "add_special_pred.m"
                    {
#line 218 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__TypeStatus_44;

#line 457 "add_special_pred.m"
#line 457 "add_special_pred.m"
                      switch (MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_5)) {
#line 457 "add_special_pred.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 457 "add_special_pred.m"
                        case (MR_Integer) 0:
#line 477 "add_special_pred.m"
                          {
#line 478 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 477 "add_special_pred.m"
                          }
#line 457 "add_special_pred.m"
                          break;
#line 457 "add_special_pred.m"
                        case (MR_Integer) 1:
#line 457 "add_special_pred.m"
                          {
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__MaybeUserEq_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 4)));
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)));
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 1)));
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 2)));
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 3)));
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 5)));
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 457 "add_special_pred.m"
                            MR_Word hlds__make_hlds__add_special_pred__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 7)));

#line 468 "add_special_pred.m"
                            if ((hlds__make_hlds__add_special_pred__MaybeUserEq_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "add_special_pred.m"
                              {
#line 470 "add_special_pred.m"
                                hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 469 "add_special_pred.m"
                              }
#line 468 "add_special_pred.m"
                            else
#line 467 "add_special_pred.m"
                              hlds__make_hlds__add_special_pred__TypeStatus_44 = hlds__make_hlds__add_special_pred__TypeStatus_7;
#line 457 "add_special_pred.m"
                          }
#line 457 "add_special_pred.m"
                          break;
#line 457 "add_special_pred.m"
                        case (MR_Integer) 2:
#line 477 "add_special_pred.m"
                          {
#line 478 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 477 "add_special_pred.m"
                          }
#line 457 "add_special_pred.m"
                          break;
#line 457 "add_special_pred.m"
                        case (MR_Integer) 3:
#line 477 "add_special_pred.m"
                          {
#line 478 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__TypeStatus_44 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 477 "add_special_pred.m"
                          }
#line 457 "add_special_pred.m"
                          break;
#line 457 "add_special_pred.m"
                      }
#line 221 "add_special_pred.m"
                      {
#line 221 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_44, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                      }
#line 218 "add_special_pred.m"
                    }
#line 223 "add_special_pred.m"
                    break;
#line 223 "add_special_pred.m"
                }
#line 215 "add_special_pred.m"
                break;
#line 215 "add_special_pred.m"
              case (MR_Integer) 1:
#line 213 "add_special_pred.m"
                {
#line 213 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__TypeBody_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__TypeStatus_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                }
#line 215 "add_special_pred.m"
                break;
#line 215 "add_special_pred.m"
            }
#line 200 "add_special_pred.m"
            /* direct tailcall eliminated */
#line 200 "add_special_pred.m"
            {
#line 200 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_special_pred__SpecialPredIds_20;
#line 200 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;

#line 200 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 200 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__HeadVar__1_1 = hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1;
#line 200 "add_special_pred.m"
            }
#line 200 "add_special_pred.m"
            continue;
#line 197 "add_special_pred.m"
          }
#line 195 "add_special_pred.m"
      }
#line 195 "add_special_pred.m"
      break;
#line 195 "add_special_pred.m"
    }
#line 191 "add_special_pred.m"
}

#line 57 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_9,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_10,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_11,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_12,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25,
#line 57 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26)
#line 57 "add_special_pred.m"
{
#line 179 "add_special_pred.m"
  {
#line 179 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 134 "add_special_pred.m"
    {
#line 134 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12);
    }
#line 179 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 138 "add_special_pred.m"
      {
#line 138 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__ThisModule_16;
#line 138 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28;
#line 138 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41;

#line 137 "add_special_pred.m"
        {
#line 137 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28);
        }
#line 139 "add_special_pred.m"
        {
#line 139 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__ThisModule_16 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_special_pred__TypeStatus_14);
        }
#line 158 "add_special_pred.m"
#line 158 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__ThisModule_16) {
#line 158 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 158 "add_special_pred.m"
          case (MR_Integer) 0:
#line 159 "add_special_pred.m"
            {
#line 159 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps_22;
#line 164 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_23_23;

#line 162 "add_special_pred.m"
              {
#line 162 "add_special_pred.m"
                hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__SpecialPredMaps_22);
              }
#line 164 "add_special_pred.m"
              {
#line 164 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps_22, (MR_Integer) 2, hlds__make_hlds__add_special_pred__TypeCtor_11, &hlds__make_hlds__add_special_pred__V_23_23);
              }
#line 168 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 168 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28;
#line 168 "add_special_pred.m"
              else
#line 169 "add_special_pred.m"
                {
#line 169 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__Globals_85;
#line 169 "add_special_pred.m"
                  MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_86;

#line 356 "add_special_pred.m"
                  {
#line 356 "add_special_pred.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__Globals_85);
                  }
#line 357 "add_special_pred.m"
                  {
#line 357 "add_special_pred.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_85, (MR_Integer) 280, &hlds__make_hlds__add_special_pred__GenSpecialPreds_86);
                  }
#line 362 "add_special_pred.m"
#line 362 "add_special_pred.m"
                  switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_86) {
#line 362 "add_special_pred.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 362 "add_special_pred.m"
                    case (MR_Integer) 0:
#line 369 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28;
#line 362 "add_special_pred.m"
                      break;
#line 362 "add_special_pred.m"
                    case (MR_Integer) 1:
#line 360 "add_special_pred.m"
                      {
#line 360 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 2, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41);
                      }
#line 362 "add_special_pred.m"
                      break;
#line 362 "add_special_pred.m"
                  }
#line 169 "add_special_pred.m"
                }
#line 159 "add_special_pred.m"
            }
#line 158 "add_special_pred.m"
            break;
#line 158 "add_special_pred.m"
          case (MR_Integer) 1:
#line 141 "add_special_pred.m"
            {
#line 141 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_21;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_75_75;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Ctors_17;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Globals_18;
#line 143 "add_special_pred.m"
              MR_Integer hlds__make_hlds__add_special_pred__CompareSpec_19;
#line 143 "add_special_pred.m"
              MR_Integer hlds__make_hlds__add_special_pred__CtorCount_20;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_34_34;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_54_54;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_51_51;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_52_52;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_56_56;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_58_58;

#line 143 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
#line 143 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 143 "add_special_pred.m"
                {
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 0)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 1)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 2)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 3)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 4)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 5)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_56_56 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_57_57 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_12, (MR_Integer) 7)));
#line 144 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_53_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 143 "add_special_pred.m"
                  if (hlds__make_hlds__add_special_pred__succeeded)
#line 143 "add_special_pred.m"
                    {
#line 145 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 143 "add_special_pred.m"
                        {
#line 146 "add_special_pred.m"
                          {
#line 146 "add_special_pred.m"
                            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__Globals_18);
                          }
#line 147 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_34_34 = (MR_Integer) 320;
#line 147 "add_special_pred.m"
                          {
#line 147 "add_special_pred.m"
                            libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, hlds__make_hlds__add_special_pred__V_34_34, &hlds__make_hlds__add_special_pred__CompareSpec_19);
                          }
#line 1390 "hlds.make_hlds.add_special_pred.c"
                          hlds__make_hlds__add_special_pred__TypeCtorInfo_75_75 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 149 "add_special_pred.m"
                          {
#line 149 "add_special_pred.m"
                            mercury__list__length_2_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_75_75, hlds__make_hlds__add_special_pred__Ctors_17, &hlds__make_hlds__add_special_pred__CtorCount_20);
                          }
#line 150 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__CtorCount_20 > hlds__make_hlds__add_special_pred__CompareSpec_19);
#line 143 "add_special_pred.m"
                        }
#line 143 "add_special_pred.m"
                    }
#line 143 "add_special_pred.m"
                }
#line 153 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 152 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[2]);
#line 153 "add_special_pred.m"
              else
#line 154 "add_special_pred.m"
                {
#line 154 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[1]);
#line 154 "add_special_pred.m"
                }
#line 156 "add_special_pred.m"
              {
#line 156 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredIds_21, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_28_28, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41);
              }
#line 141 "add_special_pred.m"
            }
#line 158 "add_special_pred.m"
            break;
#line 158 "add_special_pred.m"
        }
#line 173 "add_special_pred.m"
        {
#line 173 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_special_pred__Type_10);
        }
#line 176 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 174 "add_special_pred.m"
          {
#line 174 "add_special_pred.m"
            {
#line 174 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 3, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26);
#line 174 "add_special_pred.m"
              return;
            }
#line 174 "add_special_pred.m"
          }
#line 176 "add_special_pred.m"
        else
#line 176 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41;
#line 138 "add_special_pred.m"
      }
#line 179 "add_special_pred.m"
    else
#line 184 "add_special_pred.m"
      {
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds0_24;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_99;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__Globals_119;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_120;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_132;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_133;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__Globals_153;
#line 184 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_154;

#line 180 "add_special_pred.m"
        {
#line 180 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, hlds__make_hlds__add_special_pred__Type_10);
        }
#line 182 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 181 "add_special_pred.m"
          {
#line 181 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__SpecialPredIds0_24 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_1[5]);
#line 181 "add_special_pred.m"
          }
#line 182 "add_special_pred.m"
        else
#line 183 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__SpecialPredIds0_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 186 "add_special_pred.m"
        {
#line 186 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__SpecialPredIds_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_special_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, 0) = ((MR_Box) ((MR_Integer) 2));
#line 186 "add_special_pred.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredIds0_24));
#line 186 "add_special_pred.m"
        }
#line 356 "add_special_pred.m"
        {
#line 356 "add_special_pred.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__Globals_119);
        }
#line 357 "add_special_pred.m"
        {
#line 357 "add_special_pred.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_119, (MR_Integer) 280, &hlds__make_hlds__add_special_pred__GenSpecialPreds_120);
        }
#line 362 "add_special_pred.m"
#line 362 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_120) {
#line 362 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 362 "add_special_pred.m"
          case (MR_Integer) 0:
#line 366 "add_special_pred.m"
            {
#line 366 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108);
            }
#line 362 "add_special_pred.m"
            break;
#line 362 "add_special_pred.m"
          case (MR_Integer) 1:
#line 360 "add_special_pred.m"
            {
#line 360 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108);
            }
#line 362 "add_special_pred.m"
            break;
#line 362 "add_special_pred.m"
        }
#line 343 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__SpecialPredId_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, (MR_Integer) 0)));
#line 343 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__SpecialPredIds_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__SpecialPredIds_99, (MR_Integer) 1)));
#line 356 "add_special_pred.m"
        {
#line 356 "add_special_pred.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108, &hlds__make_hlds__add_special_pred__Globals_153);
        }
#line 357 "add_special_pred.m"
        {
#line 357 "add_special_pred.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_153, (MR_Integer) 280, &hlds__make_hlds__add_special_pred__GenSpecialPreds_154);
        }
#line 362 "add_special_pred.m"
#line 362 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_154) {
#line 362 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 362 "add_special_pred.m"
          case (MR_Integer) 0:
#line 369 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108;
#line 362 "add_special_pred.m"
            break;
#line 362 "add_special_pred.m"
          case (MR_Integer) 1:
#line 360 "add_special_pred.m"
            {
#line 360 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_132, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_108, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142);
            }
#line 362 "add_special_pred.m"
            break;
#line 362 "add_special_pred.m"
        }
#line 347 "add_special_pred.m"
        {
#line 347 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__add_special_pred_decl_list_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredIds_133, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_27_142, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26);
#line 347 "add_special_pred.m"
          return;
        }
#line 184 "add_special_pred.m"
      }
#line 179 "add_special_pred.m"
  }
#line 57 "add_special_pred.m"
}

#line 51 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_9,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_10,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_11,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_12,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16,
#line 51 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17)
#line 51 "add_special_pred.m"
{
#line 126 "add_special_pred.m"
  {
#line 126 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 122 "add_special_pred.m"
    {
#line 122 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__TypeStatus_14);
    }
#line 126 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 126 "add_special_pred.m"
      *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16;
#line 126 "add_special_pred.m"
    else
#line 127 "add_special_pred.m"
      {
#line 127 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__TypeBody_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__TypeStatus_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17);
#line 127 "add_special_pred.m"
        return;
      }
#line 126 "add_special_pred.m"
  }
#line 51 "add_special_pred.m"
}

#line 47 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_9,
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_10,
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_11,
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_12,
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus_14,
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54,
#line 47 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_55)
#line 47 "add_special_pred.m"
{
#line 378 "add_special_pred.m"
  {
#line 378 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ModuleName_16;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgTypes_17;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgModes_18;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Det_19;
#line 378 "add_special_pred.m"
    MR_String hlds__make_hlds__add_special_pred__Name_20;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Proofs_29;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ConstraintMap_30;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers_31;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ClassContext_32;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ExistQVars_33;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__VarNameRemap_34;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgLives_36;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__InstVarSet_37;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredicateTable0_41;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps_47;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_61_61;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_62_62;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_64_64;
#line 378 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66;

#line 379 "add_special_pred.m"
    {
#line 379 "add_special_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__ModuleName_16);
    }
#line 380 "add_special_pred.m"
    {
#line 380 "add_special_pred.m"
      hlds__special_pred__special_pred_interface_5_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__Type_11, &hlds__make_hlds__add_special_pred__ArgTypes_17, &hlds__make_hlds__add_special_pred__ArgModes_18, &hlds__make_hlds__add_special_pred__Det_19);
    }
#line 381 "add_special_pred.m"
    {
#line 381 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Name_20 = hlds__special_pred__special_pred_name_2_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeCtor_12);
    }
#line 399 "add_special_pred.m"
    {
#line 399 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_57_57 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 1726 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 403 "add_special_pred.m"
    {
#line 403 "add_special_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_special_pred__Proofs_29);
    }
#line 404 "add_special_pred.m"
    {
#line 404 "add_special_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_special_pred__TypeCtorInfo_96_96, &hlds__make_hlds__add_special_pred__ConstraintMap_30);
    }
#line 405 "add_special_pred.m"
    {
#line 405 "add_special_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_special_pred__Markers_31);
    }
#line 408 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__ClassContext_32 = (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[4];
#line 409 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__ExistQVars_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 410 "add_special_pred.m"
    {
#line 410 "add_special_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_special_pred__VarNameRemap_34);
    }
#line 412 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 415 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__ArgLives_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "add_special_pred.m"
    {
#line 416 "add_special_pred.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_special_pred__InstVarSet_37);
    }
#line 420 "add_special_pred.m"
    {
#line 420 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "add_special_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__ArgModes_18));
#line 420 "add_special_pred.m"
    }
#line 421 "add_special_pred.m"
    {
#line 421 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 421 "add_special_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Det_19));
#line 421 "add_special_pred.m"
    }
#line 424 "add_special_pred.m"
    {
#line 424 "add_special_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__PredicateTable0_41);
    }
#line 1782 "hlds.make_hlds.add_special_pred.c"
#line 1783 "hlds.make_hlds.add_special_pred.c"
    switch (hlds__make_hlds__add_special_pred__SpecialPredId_9) {
#line 1785 "hlds.make_hlds.add_special_pred.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1787 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 2:
#line 1789 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 1:
#line 1791 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 0:
#line 1793 "hlds.make_hlds.add_special_pred.c"
        {
#line 1795 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredName_24;
#line 1797 "hlds.make_hlds.add_special_pred.c"
          MR_Integer hlds__make_hlds__add_special_pred__Arity_25;
#line 1799 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__ClausesInfo0_26;
#line 1801 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__Origin_27;
#line 1803 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredStatus_28;
#line 1805 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo0_35;
#line 1807 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo_39;
#line 1809 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredId_42;
#line 1811 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredicateTable_43;
#line 1813 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_44;
#line 1815 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_110_110;
#line 1817 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_111_111;
#line 1819 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_112_112;
#line 1821 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_113_113;
#line 420 "add_special_pred.m"
          MR_Integer hlds__make_hlds__add_special_pred___ProcId_40;

#line 392 "add_special_pred.m"
          {
#line 392 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__PredName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__PredName_24, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_20));
#line 392 "add_special_pred.m"
          }
#line 395 "add_special_pred.m"
          {
#line 395 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Arity_25 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9);
          }
#line 399 "add_special_pred.m"
          {
#line 399 "add_special_pred.m"
            hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__Arity_25, hlds__make_hlds__add_special_pred__V_57_57, &hlds__make_hlds__add_special_pred__ClausesInfo0_26);
          }
#line 401 "add_special_pred.m"
          {
#line 401 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Origin_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_27, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_9));
#line 401 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_27, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12));
#line 401 "add_special_pred.m"
          }
#line 402 "add_special_pred.m"
          {
#line 402 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeStatus_14, &hlds__make_hlds__add_special_pred__PredStatus_28);
          }
#line 411 "add_special_pred.m"
          {
#line 411 "add_special_pred.m"
            hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_special_pred__ModuleName_16, hlds__make_hlds__add_special_pred__PredName_24, hlds__make_hlds__add_special_pred__Arity_25, (MR_Integer) 0, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Origin_27, hlds__make_hlds__add_special_pred__PredStatus_28, hlds__make_hlds__add_special_pred__V_61_61, hlds__make_hlds__add_special_pred__Markers_31, hlds__make_hlds__add_special_pred__ArgTypes_17, hlds__make_hlds__add_special_pred__TVarSet_10, hlds__make_hlds__add_special_pred__ExistQVars_33, hlds__make_hlds__add_special_pred__ClassContext_32, hlds__make_hlds__add_special_pred__Proofs_29, hlds__make_hlds__add_special_pred__ConstraintMap_30, hlds__make_hlds__add_special_pred__ClausesInfo0_26, hlds__make_hlds__add_special_pred__VarNameRemap_34, &hlds__make_hlds__add_special_pred__PredInfo0_35);
          }
#line 420 "add_special_pred.m"
          {
#line 420 "add_special_pred.m"
            hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_special_pred__InstVarSet_37, hlds__make_hlds__add_special_pred__Arity_25, hlds__make_hlds__add_special_pred__ArgModes_18, hlds__make_hlds__add_special_pred__V_62_62, hlds__make_hlds__add_special_pred__ArgLives_36, (MR_Integer) 1, hlds__make_hlds__add_special_pred__V_64_64, hlds__make_hlds__add_special_pred__Context_13, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_special_pred__PredInfo0_35, &hlds__make_hlds__add_special_pred__PredInfo_39, &hlds__make_hlds__add_special_pred___ProcId_40);
          }
#line 425 "add_special_pred.m"
          {
#line 425 "add_special_pred.m"
            hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_special_pred__PredInfo_39, &hlds__make_hlds__add_special_pred__PredId_42, hlds__make_hlds__add_special_pred__PredicateTable0_41, &hlds__make_hlds__add_special_pred__PredicateTable_43);
          }
#line 426 "add_special_pred.m"
          {
#line 426 "add_special_pred.m"
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_special_pred__PredicateTable_43, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66);
          }
#line 427 "add_special_pred.m"
          {
#line 427 "add_special_pred.m"
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_44);
          }
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 0)));
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 1)));
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 2)));
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_44, (MR_Integer) 3)));
#line 433 "add_special_pred.m"
#line 433 "add_special_pred.m"
          switch (hlds__make_hlds__add_special_pred__SpecialPredId_9) {
#line 433 "add_special_pred.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 433 "add_special_pred.m"
            case (MR_Integer) 2:
#line 439 "add_special_pred.m"
              {
#line 439 "add_special_pred.m"
                MR_Word hlds__make_hlds__add_special_pred__CompareMap_51;

#line 441 "add_special_pred.m"
                {
#line 441 "add_special_pred.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_42)), hlds__make_hlds__add_special_pred__V_111_111, &hlds__make_hlds__add_special_pred__CompareMap_51);
                }
#line 442 "add_special_pred.m"
                {
#line 442 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_113_113));
#line 442 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_112_112));
#line 442 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__CompareMap_51));
#line 442 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_110_110));
#line 442 "add_special_pred.m"
                }
#line 439 "add_special_pred.m"
              }
#line 433 "add_special_pred.m"
              break;
#line 433 "add_special_pred.m"
            case (MR_Integer) 1:
#line 434 "add_special_pred.m"
              {
#line 434 "add_special_pred.m"
                MR_Word hlds__make_hlds__add_special_pred__IndexMap_49;

#line 436 "add_special_pred.m"
                {
#line 436 "add_special_pred.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_42)), hlds__make_hlds__add_special_pred__V_112_112, &hlds__make_hlds__add_special_pred__IndexMap_49);
                }
#line 437 "add_special_pred.m"
                {
#line 437 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 437 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_113_113));
#line 437 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__IndexMap_49));
#line 437 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_111_111));
#line 437 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_110_110));
#line 437 "add_special_pred.m"
                }
#line 434 "add_special_pred.m"
              }
#line 433 "add_special_pred.m"
              break;
#line 433 "add_special_pred.m"
            case (MR_Integer) 0:
#line 429 "add_special_pred.m"
              {
#line 429 "add_special_pred.m"
                MR_Word hlds__make_hlds__add_special_pred__UnifyMap_46;

#line 431 "add_special_pred.m"
                {
#line 431 "add_special_pred.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_42)), hlds__make_hlds__add_special_pred__V_113_113, &hlds__make_hlds__add_special_pred__UnifyMap_46);
                }
#line 432 "add_special_pred.m"
                {
#line 432 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 432 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__UnifyMap_46));
#line 432 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_112_112));
#line 432 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_111_111));
#line 432 "add_special_pred.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_110_110));
#line 432 "add_special_pred.m"
                }
#line 429 "add_special_pred.m"
              }
#line 433 "add_special_pred.m"
              break;
#line 433 "add_special_pred.m"
          }
#line 1989 "hlds.make_hlds.add_special_pred.c"
        }
#line 1991 "hlds.make_hlds.add_special_pred.c"
        break;
#line 1993 "hlds.make_hlds.add_special_pred.c"
      case (MR_Integer) 3:
#line 1995 "hlds.make_hlds.add_special_pred.c"
        {
#line 1997 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__TypeSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__TypeCtor_12, (MR_Integer) 0)));
#line 1999 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__TypeModuleName_23;
#line 2001 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__InitMap_53;
#line 2003 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredName_115;
#line 2005 "hlds.make_hlds.add_special_pred.c"
          MR_Integer hlds__make_hlds__add_special_pred__Arity_116;
#line 2007 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__ClausesInfo0_117;
#line 2009 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__Origin_118;
#line 2011 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredStatus_119;
#line 2013 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo0_120;
#line 2015 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredInfo_121;
#line 2017 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredId_123;
#line 2019 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__PredicateTable_124;
#line 2021 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_125;
#line 2023 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_126_126;
#line 2025 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_127_127;
#line 2027 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_128_128;
#line 2029 "hlds.make_hlds.add_special_pred.c"
          MR_Word hlds__make_hlds__add_special_pred__V_129_129;
#line 384 "add_special_pred.m"
          MR_Integer hlds__make_hlds__add_special_pred___TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__TypeCtor_12, (MR_Integer) 1)));
#line 420 "add_special_pred.m"
          MR_Integer hlds__make_hlds__add_special_pred___ProcId_114;

#line 385 "add_special_pred.m"
          {
#line 385 "add_special_pred.m"
            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_special_pred__TypeSymName_21, hlds__make_hlds__add_special_pred__ModuleName_16, &hlds__make_hlds__add_special_pred__TypeModuleName_23);
          }
#line 387 "add_special_pred.m"
          {
#line 387 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__PredName_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "add_special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__PredName_115, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeModuleName_23));
#line 387 "add_special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__PredName_115, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_20));
#line 387 "add_special_pred.m"
          }
#line 395 "add_special_pred.m"
          {
#line 395 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Arity_116 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9);
          }
#line 399 "add_special_pred.m"
          {
#line 399 "add_special_pred.m"
            hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__Arity_116, hlds__make_hlds__add_special_pred__V_57_57, &hlds__make_hlds__add_special_pred__ClausesInfo0_117);
          }
#line 401 "add_special_pred.m"
          {
#line 401 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Origin_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_118, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_9));
#line 401 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_118, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12));
#line 401 "add_special_pred.m"
          }
#line 402 "add_special_pred.m"
          {
#line 402 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__adjust_special_pred_status_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeStatus_14, &hlds__make_hlds__add_special_pred__PredStatus_119);
          }
#line 411 "add_special_pred.m"
          {
#line 411 "add_special_pred.m"
            hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_special_pred__ModuleName_16, hlds__make_hlds__add_special_pred__PredName_115, hlds__make_hlds__add_special_pred__Arity_116, (MR_Integer) 0, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Origin_118, hlds__make_hlds__add_special_pred__PredStatus_119, hlds__make_hlds__add_special_pred__V_61_61, hlds__make_hlds__add_special_pred__Markers_31, hlds__make_hlds__add_special_pred__ArgTypes_17, hlds__make_hlds__add_special_pred__TVarSet_10, hlds__make_hlds__add_special_pred__ExistQVars_33, hlds__make_hlds__add_special_pred__ClassContext_32, hlds__make_hlds__add_special_pred__Proofs_29, hlds__make_hlds__add_special_pred__ConstraintMap_30, hlds__make_hlds__add_special_pred__ClausesInfo0_117, hlds__make_hlds__add_special_pred__VarNameRemap_34, &hlds__make_hlds__add_special_pred__PredInfo0_120);
          }
#line 420 "add_special_pred.m"
          {
#line 420 "add_special_pred.m"
            hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_special_pred__InstVarSet_37, hlds__make_hlds__add_special_pred__Arity_116, hlds__make_hlds__add_special_pred__ArgModes_18, hlds__make_hlds__add_special_pred__V_62_62, hlds__make_hlds__add_special_pred__ArgLives_36, (MR_Integer) 1, hlds__make_hlds__add_special_pred__V_64_64, hlds__make_hlds__add_special_pred__Context_13, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_special_pred__PredInfo0_120, &hlds__make_hlds__add_special_pred__PredInfo_121, &hlds__make_hlds__add_special_pred___ProcId_114);
          }
#line 425 "add_special_pred.m"
          {
#line 425 "add_special_pred.m"
            hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_special_pred__PredInfo_121, &hlds__make_hlds__add_special_pred__PredId_123, hlds__make_hlds__add_special_pred__PredicateTable0_41, &hlds__make_hlds__add_special_pred__PredicateTable_124);
          }
#line 426 "add_special_pred.m"
          {
#line 426 "add_special_pred.m"
            hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_special_pred__PredicateTable_124, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_54, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66);
          }
#line 427 "add_special_pred.m"
          {
#line 427 "add_special_pred.m"
            hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_125);
          }
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 0)));
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 1)));
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 2)));
#line 440 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps0_125, (MR_Integer) 3)));
#line 446 "add_special_pred.m"
          {
#line 446 "add_special_pred.m"
            mercury__map__det_insert_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_123)), hlds__make_hlds__add_special_pred__V_126_126, &hlds__make_hlds__add_special_pred__InitMap_53);
          }
#line 447 "add_special_pred.m"
          {
#line 447 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__SpecialPredMaps_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 447 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_129_129));
#line 447 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_128_128));
#line 447 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 2) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_127_127));
#line 447 "add_special_pred.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__SpecialPredMaps_47, 3) = ((MR_Box) (hlds__make_hlds__add_special_pred__InitMap_53));
#line 447 "add_special_pred.m"
          }
#line 2128 "hlds.make_hlds.add_special_pred.c"
        }
#line 2130 "hlds.make_hlds.add_special_pred.c"
        break;
#line 2132 "hlds.make_hlds.add_special_pred.c"
    }
#line 449 "add_special_pred.m"
    {
#line 449 "add_special_pred.m"
      hlds__hlds_module__module_info_set_special_pred_maps_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps_47, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_66_66, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_55);
#line 449 "add_special_pred.m"
      return;
    }
#line 378 "add_special_pred.m"
  }
#line 47 "add_special_pred.m"
}

#line 35 "add_special_pred.m"
void MR_CALL 
hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type0_12,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeStatus0_16,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39,
#line 35 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40)
#line 35 "add_special_pred.m"
{
#line 264 "add_special_pred.m"
  {
#line 264 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Type_18;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredStatus_19;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps0_20;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMaps1_24;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredId_25;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Preds0_26;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo0_27;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo1_29;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ClausesInfo_32;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo2_33;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers2_34;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers_35;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo3_36;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo_37;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Preds_38;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_48_48;
#line 264 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 334 "add_special_pred.m"
    MR_String hlds__make_hlds__add_special_pred__Name_64;
#line 330 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeInfo_13_71;
#line 330 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtor_63;
#line 330 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_70_70;
#line 487 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_93_93;
#line 269 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_21_21;
#line 283 "add_special_pred.m"
    MR_Box hlds__make_hlds__add_special_pred__conv0_PredInfo0_27;
#line 288 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_60_60;

#line 330 "add_special_pred.m"
    {
#line 330 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(hlds__make_hlds__add_special_pred__Type0_12, &hlds__make_hlds__add_special_pred__TypeCtor_63, &hlds__make_hlds__add_special_pred__V_70_70);
    }
#line 330 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 330 "add_special_pred.m"
      {
#line 2239 "hlds.make_hlds.add_special_pred.c"
        hlds__make_hlds__add_special_pred__TypeInfo_13_71 = (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[3];
#line 330 "add_special_pred.m"
        {
#line 330 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_special_pred__TypeInfo_13_71, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_special_pred__V_70_70)));
        }
#line 330 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 331 "add_special_pred.m"
          {
#line 331 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(hlds__make_hlds__add_special_pred__TypeCtor_63, &hlds__make_hlds__add_special_pred__Name_64);
          }
#line 330 "add_special_pred.m"
      }
#line 334 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 333 "add_special_pred.m"
      {
#line 333 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_66_66;
#line 333 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_68_68;

#line 333 "add_special_pred.m"
        {
#line 333 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 333 "add_special_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_64));
#line 333 "add_special_pred.m"
        }
#line 333 "add_special_pred.m"
        {
#line 333 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 333 "add_special_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_68_68));
#line 333 "add_special_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_66_66, 1) = ((MR_Box) ((MR_Integer) 0));
#line 333 "add_special_pred.m"
        }
#line 333 "add_special_pred.m"
        {
#line 333 "add_special_pred.m"
          parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_special_pred__V_66_66, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_special_pred__Type_18);
        }
#line 333 "add_special_pred.m"
      }
#line 334 "add_special_pred.m"
    else
#line 335 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Type_18 = hlds__make_hlds__add_special_pred__Type0_12;
#line 486 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__V_93_93 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;
#line 487 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 487 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 487 "add_special_pred.m"
    else
#line 487 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_93_93 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 487 "add_special_pred.m"
    else
#line 487 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 491 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 490 "add_special_pred.m"
      {
#line 490 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_2[0])));
#line 490 "add_special_pred.m"
      }
#line 491 "add_special_pred.m"
    else
#line 495 "add_special_pred.m"
      {
#line 492 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_83_83 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;

#line 492 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 495 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 494 "add_special_pred.m"
          {
#line 494 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 494 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
        else
#line 496 "add_special_pred.m"
          {
#line 496 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__OldStatus_76 = (MR_Word) hlds__make_hlds__add_special_pred__TypeStatus0_16;

#line 497 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80 = (MR_Word) hlds__make_hlds__add_special_pred__OldStatus_76;
#line 496 "add_special_pred.m"
          }
#line 495 "add_special_pred.m"
      }
#line 502 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_10 == (MR_Integer) 0);
#line 510 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 505 "add_special_pred.m"
      {
#line 503 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_87_87 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 503 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_77_77;

#line 503 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_87_87)) == (MR_mktag((MR_Integer) 2)));
#line 503 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 503 "add_special_pred.m"
          {
#line 503 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__V_87_87, (MR_Integer) 0)));
#line 504 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 503 "add_special_pred.m"
          }
#line 503 "add_special_pred.m"
        else
#line 507 "add_special_pred.m"
          {
#line 505 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__V_90_90 = (MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;

#line 505 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_90_90 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 507 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 506 "add_special_pred.m"
              {
#line 506 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__PredStatus_19 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 506 "add_special_pred.m"
              }
#line 507 "add_special_pred.m"
            else
#line 507 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__PredStatus_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 507 "add_special_pred.m"
          }
#line 505 "add_special_pred.m"
      }
#line 510 "add_special_pred.m"
    else
#line 510 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__PredStatus_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_PredStatus_12_80;
#line 267 "add_special_pred.m"
    {
#line 267 "add_special_pred.m"
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_special_pred__SpecialPredMaps0_20);
    }
#line 269 "add_special_pred.m"
    {
#line 269 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__search_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps0_20, hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TypeCtor_13, &hlds__make_hlds__add_special_pred__V_21_21);
    }
#line 272 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 272 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39;
#line 272 "add_special_pred.m"
    else
#line 274 "add_special_pred.m"
      {
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__PredOldStatus_22 = (MR_Word) hlds__make_hlds__add_special_pred__PredStatus_19;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__TypeStatus_23 = (MR_Word) hlds__make_hlds__add_special_pred__PredOldStatus_22;

#line 276 "add_special_pred.m"
        {
#line 276 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__TypeStatus_23, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41);
        }
#line 274 "add_special_pred.m"
      }
#line 279 "add_special_pred.m"
    {
#line 279 "add_special_pred.m"
      hlds__hlds_module__module_info_get_special_pred_maps_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__SpecialPredMaps1_24);
    }
#line 280 "add_special_pred.m"
    {
#line 280 "add_special_pred.m"
      hlds__special_pred__lookup_special_pred_maps_4_p_0(hlds__make_hlds__add_special_pred__SpecialPredMaps1_24, hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TypeCtor_13, &hlds__make_hlds__add_special_pred__PredId_25);
    }
#line 282 "add_special_pred.m"
    {
#line 282 "add_special_pred.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__Preds0_26);
    }
#line 2444 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2446 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 283 "add_special_pred.m"
    {
#line 283 "add_special_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_special_pred__Preds0_26, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_25)), &hlds__make_hlds__add_special_pred__conv0_PredInfo0_27);
    }
#line 283 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__PredInfo0_27 = ((MR_Word) hlds__make_hlds__add_special_pred__conv0_PredInfo0_27);
#line 287 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__V_60_60 = (MR_Word) hlds__make_hlds__add_special_pred__PredStatus_19;
#line 288 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 288 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 288 "add_special_pred.m"
    else
#line 288 "add_special_pred.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_60_60)) == (MR_mktag((MR_Integer) 2))))
#line 287 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 288 "add_special_pred.m"
    else
#line 288 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 292 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 291 "add_special_pred.m"
      {
#line 291 "add_special_pred.m"
        hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_special_pred__PredStatus_19, hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__PredInfo1_29);
      }
#line 292 "add_special_pred.m"
    else
#line 308 "add_special_pred.m"
      {
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__OldPredStatus_31;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_44_44;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_45_45;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_46_46;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_50_50;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_51_51;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_52_52;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_54_54;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_56_56;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 293 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_30_30;

#line 293 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 293 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 293 "add_special_pred.m"
          {
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));
#line 293 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 293 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 293 "add_special_pred.m"
              {
#line 293 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_44_44, (MR_Integer) 0)));
#line 294 "add_special_pred.m"
                {
#line 294 "add_special_pred.m"
                  hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__OldPredStatus_31);
                }
#line 295 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__V_45_45 = (MR_Word) hlds__make_hlds__add_special_pred__OldPredStatus_31;
#line 295 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 293 "add_special_pred.m"
                if (hlds__make_hlds__add_special_pred__succeeded)
#line 293 "add_special_pred.m"
                  {
#line 296 "add_special_pred.m"
                    {
#line 296 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__V_46_46 = hlds__status__pred_status_is_imported_1_f_0(hlds__make_hlds__add_special_pred__PredStatus_19);
                    }
#line 296 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_46_46 == (MR_Integer) 0);
#line 293 "add_special_pred.m"
                  }
#line 293 "add_special_pred.m"
              }
#line 293 "add_special_pred.m"
          }
#line 308 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 307 "add_special_pred.m"
          {
#line 307 "add_special_pred.m"
            hlds__hlds_pred__pred_info_set_status_3_p_0(hlds__make_hlds__add_special_pred__PredStatus_19, hlds__make_hlds__add_special_pred__PredInfo0_27, &hlds__make_hlds__add_special_pred__PredInfo1_29);
          }
#line 308 "add_special_pred.m"
        else
#line 309 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__PredInfo1_29 = hlds__make_hlds__add_special_pred__PredInfo0_27;
#line 308 "add_special_pred.m"
      }
#line 311 "add_special_pred.m"
    {
#line 311 "add_special_pred.m"
      check_hlds__unify_proc__generate_clause_info_6_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_special_pred__ClausesInfo_32);
    }
#line 313 "add_special_pred.m"
    {
#line 313 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_special_pred__ClausesInfo_32, hlds__make_hlds__add_special_pred__PredInfo1_29, &hlds__make_hlds__add_special_pred__PredInfo2_33);
    }
#line 314 "add_special_pred.m"
    {
#line 314 "add_special_pred.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_special_pred__PredInfo2_33, &hlds__make_hlds__add_special_pred__Markers2_34);
    }
#line 315 "add_special_pred.m"
    {
#line 315 "add_special_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, hlds__make_hlds__add_special_pred__Markers2_34, &hlds__make_hlds__add_special_pred__Markers_35);
    }
#line 316 "add_special_pred.m"
    {
#line 316 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_special_pred__Markers_35, hlds__make_hlds__add_special_pred__PredInfo2_33, &hlds__make_hlds__add_special_pred__PredInfo3_36);
    }
#line 317 "add_special_pred.m"
    {
#line 317 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 317 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_10));
#line 317 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_13));
#line 317 "add_special_pred.m"
    }
#line 317 "add_special_pred.m"
    {
#line 317 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_origin_3_p_0(hlds__make_hlds__add_special_pred__V_48_48, hlds__make_hlds__add_special_pred__PredInfo3_36, &hlds__make_hlds__add_special_pred__PredInfo_37);
    }
#line 319 "add_special_pred.m"
    {
#line 319 "add_special_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_25)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredInfo_37)), hlds__make_hlds__add_special_pred__Preds0_26, &hlds__make_hlds__add_special_pred__Preds_38);
    }
#line 320 "add_special_pred.m"
    {
#line 320 "add_special_pred.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_special_pred__Preds_38, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40);
#line 320 "add_special_pred.m"
      return;
    }
#line 264 "add_special_pred.m"
  }
#line 35 "add_special_pred.m"
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
