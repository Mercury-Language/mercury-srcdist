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
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 332 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_9_p_0(
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status0_16,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21,
#line 332 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_22);

#line 320 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_p_0(
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status_7,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 320 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9);

#line 199 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status0_16,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22,
#line 199 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23);

#line 187 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Body_5,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status_7,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 187 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9);


static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_1[1][3];

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_2[9][2];

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_3[1][1];




static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_2[9][2] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[1])))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_special_pred_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 332 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_9_p_0(
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status0_16,
#line 332 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21,
#line 332 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_22)
#line 332 "add_special_pred.m"
{
#line 337 "add_special_pred.m"
  {
#line 337 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 337 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Globals_18;
#line 337 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_19;

#line 338 "add_special_pred.m"
    {
#line 338 "add_special_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21, &hlds__make_hlds__add_special_pred__Globals_18);
    }
#line 339 "add_special_pred.m"
    {
#line 339 "add_special_pred.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, (MR_Integer) 279, &hlds__make_hlds__add_special_pred__GenSpecialPreds_19);
    }
#line 344 "add_special_pred.m"
#line 344 "add_special_pred.m"
    switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_19) {
#line 344 "add_special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 344 "add_special_pred.m"
      case (MR_Integer) 0:
#line 351 "add_special_pred.m"
#line 351 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__SpecialPredId_10) {
#line 351 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 351 "add_special_pred.m"
          case (MR_Integer) 2:
#line 352 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21;
#line 351 "add_special_pred.m"
            break;
#line 351 "add_special_pred.m"
          case (MR_Integer) 1:
#line 354 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21;
#line 351 "add_special_pred.m"
            break;
#line 351 "add_special_pred.m"
          case (MR_Integer) 3:
#line 356 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_22 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21;
#line 351 "add_special_pred.m"
            break;
#line 351 "add_special_pred.m"
          case (MR_Integer) 0:
#line 347 "add_special_pred.m"
            {
#line 347 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Status_20;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_30_30;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_31_31;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_32_32;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_33_33;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_34_34;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_35_35;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_36_36;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_37_37;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_38_38;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_29_29;

#line 418 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                {
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_36_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_30_30)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
                  if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_30_30, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                }
#line 426 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 425 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__Status_20 = hlds__make_hlds__add_special_pred__Status0_16;
#line 426 "add_special_pred.m"
              else
#line 427 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__Status_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 349 "add_special_pred.m"
              {
#line 349 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__Status_20, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_22);
#line 349 "add_special_pred.m"
                return;
              }
#line 347 "add_special_pred.m"
            }
#line 351 "add_special_pred.m"
            break;
#line 351 "add_special_pred.m"
        }
#line 344 "add_special_pred.m"
        break;
#line 344 "add_special_pred.m"
      case (MR_Integer) 1:
#line 342 "add_special_pred.m"
        {
#line 342 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__Status0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_22);
#line 342 "add_special_pred.m"
          return;
        }
#line 344 "add_special_pred.m"
        break;
#line 344 "add_special_pred.m"
    }
#line 337 "add_special_pred.m"
  }
#line 332 "add_special_pred.m"
}

#line 320 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_p_0(
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_5,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status_7,
#line 320 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 320 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9)
#line 320 "add_special_pred.m"
{
#line 324 "add_special_pred.m"
  while (MR_TRUE)
#line 324 "add_special_pred.m"
    {
#line 324 "add_special_pred.m"
      /* tailcall optimized into a loop */
#line 324 "add_special_pred.m"
      {
#line 324 "add_special_pred.m"
        MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 324 "add_special_pred.m"
        if ((hlds__make_hlds__add_special_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 324 "add_special_pred.m"
        else
#line 326 "add_special_pred.m"
          {
#line 326 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 326 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 326 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;
#line 326 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__Globals_42;
#line 326 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_43;

#line 338 "add_special_pred.m"
            {
#line 338 "add_special_pred.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__Globals_42);
            }
#line 339 "add_special_pred.m"
            {
#line 339 "add_special_pred.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_42, (MR_Integer) 279, &hlds__make_hlds__add_special_pred__GenSpecialPreds_43);
            }
#line 344 "add_special_pred.m"
#line 344 "add_special_pred.m"
            switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_43) {
#line 344 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 344 "add_special_pred.m"
              case (MR_Integer) 0:
#line 351 "add_special_pred.m"
#line 351 "add_special_pred.m"
                switch (hlds__make_hlds__add_special_pred__SpecialPredId_19) {
#line 351 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 351 "add_special_pred.m"
                  case (MR_Integer) 2:
#line 352 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 351 "add_special_pred.m"
                    break;
#line 351 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 354 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 351 "add_special_pred.m"
                    break;
#line 351 "add_special_pred.m"
                  case (MR_Integer) 3:
#line 356 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 351 "add_special_pred.m"
                    break;
#line 351 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 347 "add_special_pred.m"
                    {
#line 347 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__Status_44;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_52_52;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_54_54;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_56_56;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_58_58;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_59_59;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_60_60;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_51_51;

#line 418 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_5)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                        {
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 1)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 2)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 3)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 4)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 5)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_58_58 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_59_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_5, (MR_Integer) 7)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
                          if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_52_52, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                        }
#line 426 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 425 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__Status_44 = hlds__make_hlds__add_special_pred__Status_7;
#line 426 "add_special_pred.m"
                      else
#line 427 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__Status_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 349 "add_special_pred.m"
                      {
#line 349 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__Status_44, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                      }
#line 347 "add_special_pred.m"
                    }
#line 351 "add_special_pred.m"
                    break;
#line 351 "add_special_pred.m"
                }
#line 344 "add_special_pred.m"
                break;
#line 344 "add_special_pred.m"
              case (MR_Integer) 1:
#line 342 "add_special_pred.m"
                {
#line 342 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__Status_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                }
#line 344 "add_special_pred.m"
                break;
#line 344 "add_special_pred.m"
            }
#line 329 "add_special_pred.m"
            /* direct tailcall eliminated */
#line 329 "add_special_pred.m"
            {
#line 329 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_special_pred__SpecialPredIds_20;
#line 329 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;

#line 329 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 329 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__HeadVar__1_1 = hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1;
#line 329 "add_special_pred.m"
            }
#line 329 "add_special_pred.m"
            continue;
#line 326 "add_special_pred.m"
          }
#line 324 "add_special_pred.m"
      }
#line 324 "add_special_pred.m"
      break;
#line 324 "add_special_pred.m"
    }
#line 320 "add_special_pred.m"
}

#line 199 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_9_p_0(
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_10,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_11,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_12,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_13,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeBody_14,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_15,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status0_16,
#line 199 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22,
#line 199 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23)
#line 199 "add_special_pred.m"
{
#line 204 "add_special_pred.m"
  {
#line 204 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 204 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Globals_18;
#line 204 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_19;

#line 205 "add_special_pred.m"
    {
#line 205 "add_special_pred.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22, &hlds__make_hlds__add_special_pred__Globals_18);
    }
#line 206 "add_special_pred.m"
    {
#line 206 "add_special_pred.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, (MR_Integer) 279, &hlds__make_hlds__add_special_pred__GenSpecialPreds_19);
    }
#line 211 "add_special_pred.m"
#line 211 "add_special_pred.m"
    switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_19) {
#line 211 "add_special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "add_special_pred.m"
      case (MR_Integer) 0:
#line 218 "add_special_pred.m"
#line 218 "add_special_pred.m"
        switch (hlds__make_hlds__add_special_pred__SpecialPredId_10) {
#line 218 "add_special_pred.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 218 "add_special_pred.m"
          case (MR_Integer) 2:
#line 234 "add_special_pred.m"
            {
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_31_31;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_35_35;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_36_36;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_37_37;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_38_38;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_39_39;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_40_40;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_41_41;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_42_42;
#line 230 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_21_21;

#line 230 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 230 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 230 "add_special_pred.m"
                {
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_40_40 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));
#line 230 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 230 "add_special_pred.m"
                  if (hlds__make_hlds__add_special_pred__succeeded)
#line 230 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_31_31, (MR_Integer) 0)));
#line 230 "add_special_pred.m"
                }
#line 234 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 232 "add_special_pred.m"
                {
#line 232 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__Status0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23);
#line 232 "add_special_pred.m"
                  return;
                }
#line 234 "add_special_pred.m"
              else
#line 234 "add_special_pred.m"
                *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22;
#line 234 "add_special_pred.m"
            }
#line 218 "add_special_pred.m"
            break;
#line 218 "add_special_pred.m"
          case (MR_Integer) 1:
#line 219 "add_special_pred.m"
            *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22;
#line 218 "add_special_pred.m"
            break;
#line 218 "add_special_pred.m"
          case (MR_Integer) 3:
#line 242 "add_special_pred.m"
            {
#line 239 "add_special_pred.m"
              {
#line 239 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__add_special_pred__Type_12);
              }
#line 242 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 240 "add_special_pred.m"
                {
#line 240 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__Status0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23);
#line 240 "add_special_pred.m"
                  return;
                }
#line 242 "add_special_pred.m"
              else
#line 243 "add_special_pred.m"
                {
#line 243 "add_special_pred.m"
                  {
#line 243 "add_special_pred.m"
                    mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_special_pred", (MR_String) "predicate \140hlds.make_hlds.add_special_pred.add_special_pred\'/9", (MR_String) "attempt to add initialise pred for non-solver type or solver type without automatic initialisation.");
#line 243 "add_special_pred.m"
                    return;
                  }
#line 243 "add_special_pred.m"
                }
#line 242 "add_special_pred.m"
            }
#line 218 "add_special_pred.m"
            break;
#line 218 "add_special_pred.m"
          case (MR_Integer) 0:
#line 214 "add_special_pred.m"
            {
#line 214 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Status_20;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_47_47;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_48_48;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_49_49;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_50_50;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_51_51;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_52_52;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_54_54;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 418 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_46_46;

#line 418 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                {
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));
#line 418 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
                  if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_47_47, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                }
#line 426 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 425 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__Status_20 = hlds__make_hlds__add_special_pred__Status0_16;
#line 426 "add_special_pred.m"
              else
#line 427 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__Status_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 216 "add_special_pred.m"
              {
#line 216 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__Status_20, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23);
#line 216 "add_special_pred.m"
                return;
              }
#line 214 "add_special_pred.m"
            }
#line 218 "add_special_pred.m"
            break;
#line 218 "add_special_pred.m"
        }
#line 211 "add_special_pred.m"
        break;
#line 211 "add_special_pred.m"
      case (MR_Integer) 1:
#line 209 "add_special_pred.m"
        {
#line 209 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_12, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__Status0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_23);
#line 209 "add_special_pred.m"
          return;
        }
#line 211 "add_special_pred.m"
        break;
#line 211 "add_special_pred.m"
    }
#line 204 "add_special_pred.m"
  }
#line 199 "add_special_pred.m"
}

#line 187 "add_special_pred.m"
static void MR_CALL 
hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__HeadVar__1_1,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TVarSet_2,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Type_3,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__TypeCtor_4,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Body_5,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_6,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status_7,
#line 187 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8,
#line 187 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9)
#line 187 "add_special_pred.m"
{
#line 191 "add_special_pred.m"
  while (MR_TRUE)
#line 191 "add_special_pred.m"
    {
#line 191 "add_special_pred.m"
      /* tailcall optimized into a loop */
#line 191 "add_special_pred.m"
      {
#line 191 "add_special_pred.m"
        MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 191 "add_special_pred.m"
        if ((hlds__make_hlds__add_special_pred__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_9 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 191 "add_special_pred.m"
        else
#line 193 "add_special_pred.m"
          {
#line 193 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 0)));
#line 193 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__HeadVar__1_1, (MR_Integer) 1)));
#line 193 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;
#line 193 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__Globals_42;
#line 193 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__GenSpecialPreds_43;

#line 205 "add_special_pred.m"
            {
#line 205 "add_special_pred.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__Globals_42);
            }
#line 206 "add_special_pred.m"
            {
#line 206 "add_special_pred.m"
              libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_42, (MR_Integer) 279, &hlds__make_hlds__add_special_pred__GenSpecialPreds_43);
            }
#line 211 "add_special_pred.m"
#line 211 "add_special_pred.m"
            switch (hlds__make_hlds__add_special_pred__GenSpecialPreds_43) {
#line 211 "add_special_pred.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 211 "add_special_pred.m"
              case (MR_Integer) 0:
#line 218 "add_special_pred.m"
#line 218 "add_special_pred.m"
                switch (hlds__make_hlds__add_special_pred__SpecialPredId_19) {
#line 218 "add_special_pred.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 218 "add_special_pred.m"
                  case (MR_Integer) 2:
#line 234 "add_special_pred.m"
                    {
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_58_58;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_59_59;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_60_60;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_61_61;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_62_62;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_63_63;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_64_64;
#line 230 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_45_45;

#line 230 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Body_5)) == (MR_mktag((MR_Integer) 1)));
#line 230 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 230 "add_special_pred.m"
                        {
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 0)));
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 1)));
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 2)));
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 3)));
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 4)));
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 5)));
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_62_62 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_63_63 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 7)));
#line 230 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 230 "add_special_pred.m"
                          if (hlds__make_hlds__add_special_pred__succeeded)
#line 230 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_53_53, (MR_Integer) 0)));
#line 230 "add_special_pred.m"
                        }
#line 234 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 232 "add_special_pred.m"
                        {
#line 232 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Body_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__Status_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                        }
#line 234 "add_special_pred.m"
                      else
#line 234 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 234 "add_special_pred.m"
                    }
#line 218 "add_special_pred.m"
                    break;
#line 218 "add_special_pred.m"
                  case (MR_Integer) 1:
#line 219 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8;
#line 218 "add_special_pred.m"
                    break;
#line 218 "add_special_pred.m"
                  case (MR_Integer) 3:
#line 242 "add_special_pred.m"
                    {
#line 239 "add_special_pred.m"
                      {
#line 239 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, hlds__make_hlds__add_special_pred__Type_3);
                      }
#line 242 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 240 "add_special_pred.m"
                        {
#line 240 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Body_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__Status_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                        }
#line 242 "add_special_pred.m"
                      else
#line 243 "add_special_pred.m"
                        {
#line 243 "add_special_pred.m"
                          {
#line 243 "add_special_pred.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_special_pred", (MR_String) "predicate \140hlds.make_hlds.add_special_pred.add_special_pred\'/9", (MR_String) "attempt to add initialise pred for non-solver type or solver type without automatic initialisation.");
#line 243 "add_special_pred.m"
                            return;
                          }
#line 243 "add_special_pred.m"
                        }
#line 242 "add_special_pred.m"
                    }
#line 218 "add_special_pred.m"
                    break;
#line 218 "add_special_pred.m"
                  case (MR_Integer) 0:
#line 214 "add_special_pred.m"
                    {
#line 214 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__Status_44;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_69_69;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_70_70;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_71_71;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_72_72;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_73_73;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_74_74;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_75_75;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_76_76;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_77_77;
#line 418 "add_special_pred.m"
                      MR_Word hlds__make_hlds__add_special_pred__V_68_68;

#line 418 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Body_5)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                        {
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 1)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 2)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 3)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 4)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 5)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_5, (MR_Integer) 7)));
#line 418 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 418 "add_special_pred.m"
                          if (hlds__make_hlds__add_special_pred__succeeded)
#line 418 "add_special_pred.m"
                            hlds__make_hlds__add_special_pred__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_69_69, (MR_Integer) 0)));
#line 418 "add_special_pred.m"
                        }
#line 426 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 425 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__Status_44 = hlds__make_hlds__add_special_pred__Status_7;
#line 426 "add_special_pred.m"
                      else
#line 427 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__Status_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 216 "add_special_pred.m"
                      {
#line 216 "add_special_pred.m"
                        hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Body_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__Status_44, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                      }
#line 214 "add_special_pred.m"
                    }
#line 218 "add_special_pred.m"
                    break;
#line 218 "add_special_pred.m"
                }
#line 211 "add_special_pred.m"
                break;
#line 211 "add_special_pred.m"
              case (MR_Integer) 1:
#line 209 "add_special_pred.m"
                {
#line 209 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_19, hlds__make_hlds__add_special_pred__TVarSet_2, hlds__make_hlds__add_special_pred__Type_3, hlds__make_hlds__add_special_pred__TypeCtor_4, hlds__make_hlds__add_special_pred__Body_5, hlds__make_hlds__add_special_pred__Context_6, hlds__make_hlds__add_special_pred__Status_7, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30);
                }
#line 211 "add_special_pred.m"
                break;
#line 211 "add_special_pred.m"
            }
#line 196 "add_special_pred.m"
            /* direct tailcall eliminated */
#line 196 "add_special_pred.m"
            {
#line 196 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_special_pred__SpecialPredIds_20;
#line 196 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_30_30;

#line 196 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_8 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0__tmp_copy_8;
#line 196 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__HeadVar__1_1 = hlds__make_hlds__add_special_pred__HeadVar__1__tmp_copy_1;
#line 196 "add_special_pred.m"
            }
#line 196 "add_special_pred.m"
            continue;
#line 193 "add_special_pred.m"
          }
#line 191 "add_special_pred.m"
      }
#line 191 "add_special_pred.m"
      break;
#line 191 "add_special_pred.m"
    }
#line 187 "add_special_pred.m"
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
  MR_Word hlds__make_hlds__add_special_pred__Body_12,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status_14,
#line 57 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_23,
#line 57 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_24)
#line 57 "add_special_pred.m"
{
#line 176 "add_special_pred.m"
  {
#line 176 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;

#line 134 "add_special_pred.m"
    {
#line 134 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__can_generate_special_pred_clauses_for_type_3_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12);
    }
#line 176 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 138 "add_special_pred.m"
      {
#line 138 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__ThisModule_16;
#line 138 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26_26;
#line 138 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40_40;

#line 137 "add_special_pred.m"
        {
#line 137 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Status_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_23, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26_26);
        }
#line 139 "add_special_pred.m"
        {
#line 139 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__ThisModule_16 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_special_pred__Status_14);
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
              MR_Word hlds__make_hlds__add_special_pred__SpecialPreds_22;
#line 163 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_27_27;

#line 162 "add_special_pred.m"
              {
#line 162 "add_special_pred.m"
                hlds__hlds_module__module_info_get_special_pred_map_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26_26, &hlds__make_hlds__add_special_pred__SpecialPreds_22);
              }
#line 163 "add_special_pred.m"
              {
#line 163 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "add_special_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_27_27, 0) = ((MR_Box) ((MR_Integer) 2));
#line 163 "add_special_pred.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_11));
#line 163 "add_special_pred.m"
              }
#line 163 "add_special_pred.m"
              {
#line 163 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = mercury__map__contains_2_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__make_hlds__add_special_pred__SpecialPreds_22, ((MR_Box) (hlds__make_hlds__add_special_pred__V_27_27)));
              }
#line 165 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 165 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40_40 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26_26;
#line 165 "add_special_pred.m"
              else
#line 166 "add_special_pred.m"
                {
#line 166 "add_special_pred.m"
                  {
#line 166 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__add_special_pred_decl_9_p_0((MR_Integer) 2, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Status_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26_26, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40_40);
                  }
#line 166 "add_special_pred.m"
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
              MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_79_79;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Ctors_17;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__Globals_18;
#line 143 "add_special_pred.m"
              MR_Integer hlds__make_hlds__add_special_pred__CompareSpec_19;
#line 143 "add_special_pred.m"
              MR_Integer hlds__make_hlds__add_special_pred__CtorCount_20;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_33_33;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_58_58;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_56_56;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_59_59;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_60_60;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_61_61;
#line 143 "add_special_pred.m"
              MR_Word hlds__make_hlds__add_special_pred__V_62_62;

#line 143 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Body_12)) == (MR_mktag((MR_Integer) 1)));
#line 143 "add_special_pred.m"
              if (hlds__make_hlds__add_special_pred__succeeded)
#line 143 "add_special_pred.m"
                {
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 0)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 1)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 2)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 3)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 4)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 5)));
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_60_60 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 143 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__Body_12, (MR_Integer) 7)));
#line 144 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 143 "add_special_pred.m"
                  if (hlds__make_hlds__add_special_pred__succeeded)
#line 143 "add_special_pred.m"
                    {
#line 145 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "add_special_pred.m"
                      if (hlds__make_hlds__add_special_pred__succeeded)
#line 143 "add_special_pred.m"
                        {
#line 146 "add_special_pred.m"
                          {
#line 146 "add_special_pred.m"
                            hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26_26, &hlds__make_hlds__add_special_pred__Globals_18);
                          }
#line 147 "add_special_pred.m"
                          hlds__make_hlds__add_special_pred__V_33_33 = (MR_Integer) 319;
#line 147 "add_special_pred.m"
                          {
#line 147 "add_special_pred.m"
                            libs__globals__lookup_int_option_3_p_0(hlds__make_hlds__add_special_pred__Globals_18, hlds__make_hlds__add_special_pred__V_33_33, &hlds__make_hlds__add_special_pred__CompareSpec_19);
                          }
#line 1464 "hlds.make_hlds.add_special_pred.c"
                          hlds__make_hlds__add_special_pred__TypeCtorInfo_79_79 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 149 "add_special_pred.m"
                          {
#line 149 "add_special_pred.m"
                            mercury__list__length_2_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_79_79, hlds__make_hlds__add_special_pred__Ctors_17, &hlds__make_hlds__add_special_pred__CtorCount_20);
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
                hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[2]);
#line 153 "add_special_pred.m"
              else
#line 154 "add_special_pred.m"
                {
#line 154 "add_special_pred.m"
                  hlds__make_hlds__add_special_pred__SpecialPredIds_21 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[1]);
#line 154 "add_special_pred.m"
                }
#line 156 "add_special_pred.m"
              {
#line 156 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__add_special_pred_list_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredIds_21, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Status_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_26_26, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40_40);
              }
#line 141 "add_special_pred.m"
            }
#line 158 "add_special_pred.m"
            break;
#line 158 "add_special_pred.m"
        }
#line 170 "add_special_pred.m"
        {
#line 170 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__add_special_pred__Type_10);
        }
#line 173 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 171 "add_special_pred.m"
          {
#line 171 "add_special_pred.m"
            {
#line 171 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__add_special_pred_9_p_0((MR_Integer) 3, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Status_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40_40, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_24);
#line 171 "add_special_pred.m"
              return;
            }
#line 171 "add_special_pred.m"
          }
#line 173 "add_special_pred.m"
        else
#line 173 "add_special_pred.m"
          *hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_24 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_40_40;
#line 138 "add_special_pred.m"
      }
#line 176 "add_special_pred.m"
    else
#line 182 "add_special_pred.m"
      {
#line 182 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__SpecialPredIds_54;

#line 177 "add_special_pred.m"
        {
#line 177 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_special_pred__Type_10);
        }
#line 180 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 178 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__SpecialPredIds_54 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[5]);
#line 180 "add_special_pred.m"
        else
#line 181 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__SpecialPredIds_54 = (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_special_pred_scalar_common_2[6]);
#line 183 "add_special_pred.m"
        {
#line 183 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_p_0(hlds__make_hlds__add_special_pred__SpecialPredIds_54, hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Status_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_23, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_24);
#line 183 "add_special_pred.m"
          return;
        }
#line 182 "add_special_pred.m"
      }
#line 176 "add_special_pred.m"
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
  MR_Word hlds__make_hlds__add_special_pred__Body_12,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Context_13,
#line 51 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__Status_14,
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

#line 123 "add_special_pred.m"
    {
#line 123 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__special_pred_is_generated_lazily_4_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12, hlds__make_hlds__add_special_pred__Status_14);
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
        hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__add_special_pred__TVarSet_9, hlds__make_hlds__add_special_pred__Type_10, hlds__make_hlds__add_special_pred__TypeCtor_11, hlds__make_hlds__add_special_pred__Body_12, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Status_14, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_17);
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
  MR_Word hlds__make_hlds__add_special_pred__Status0_14,
#line 47 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_46,
#line 47 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_47)
#line 47 "add_special_pred.m"
{
#line 361 "add_special_pred.m"
  {
#line 361 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_62_62;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ModuleName_16;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgTypes_17;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ArgModes_18;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Det_19;
#line 361 "add_special_pred.m"
    MR_String hlds__make_hlds__add_special_pred__Name_20;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredName_24;
#line 361 "add_special_pred.m"
    MR_Integer hlds__make_hlds__add_special_pred__Arity_25;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ClausesInfo0_26;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Origin_27;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Status_28;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Proofs_29;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ConstraintMap_30;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers_31;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__VarNameRemap_34;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo0_35;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__InstVarSet_37;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo_39;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredicateTable0_41;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredId_42;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredicateTable_43;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMap0_44;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMap_45;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_49_49;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_50_50;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_55_55;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_57_57;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_59_59;
#line 361 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75;
#line 403 "add_special_pred.m"
    MR_Integer hlds__make_hlds__add_special_pred___ProcId_40;

#line 362 "add_special_pred.m"
    {
#line 362 "add_special_pred.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_special_pred__ModuleName_16);
    }
#line 363 "add_special_pred.m"
    {
#line 363 "add_special_pred.m"
      hlds__special_pred__special_pred_interface_5_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__Type_11, &hlds__make_hlds__add_special_pred__ArgTypes_17, &hlds__make_hlds__add_special_pred__ArgModes_18, &hlds__make_hlds__add_special_pred__Det_19);
    }
#line 364 "add_special_pred.m"
    {
#line 364 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Name_20 = hlds__special_pred__special_pred_name_2_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9, hlds__make_hlds__add_special_pred__TypeCtor_12);
    }
#line 371 "add_special_pred.m"
#line 371 "add_special_pred.m"
    switch (hlds__make_hlds__add_special_pred__SpecialPredId_9) {
#line 371 "add_special_pred.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 371 "add_special_pred.m"
      case (MR_Integer) 2:
#line 371 "add_special_pred.m"
      case (MR_Integer) 1:
#line 371 "add_special_pred.m"
      case (MR_Integer) 0:
#line 376 "add_special_pred.m"
        {
#line 376 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__PredName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 376 "add_special_pred.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__PredName_24, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_20));
#line 376 "add_special_pred.m"
        }
#line 371 "add_special_pred.m"
        break;
#line 371 "add_special_pred.m"
      case (MR_Integer) 3:
#line 366 "add_special_pred.m"
        {
#line 366 "add_special_pred.m"
          MR_Word hlds__make_hlds__add_special_pred__TypeSymName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__TypeCtor_12, (MR_Integer) 0)));
#line 366 "add_special_pred.m"
          MR_Word hlds__make_hlds__add_special_pred__TypeModuleName_23;
#line 367 "add_special_pred.m"
          MR_Integer hlds__make_hlds__add_special_pred___TypeArity_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__TypeCtor_12, (MR_Integer) 1)));

#line 368 "add_special_pred.m"
          {
#line 368 "add_special_pred.m"
            mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(hlds__make_hlds__add_special_pred__TypeSymName_21, hlds__make_hlds__add_special_pred__ModuleName_16, &hlds__make_hlds__add_special_pred__TypeModuleName_23);
          }
#line 370 "add_special_pred.m"
          {
#line 370 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__PredName_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "add_special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__PredName_24, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeModuleName_23));
#line 370 "add_special_pred.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__PredName_24, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_20));
#line 370 "add_special_pred.m"
          }
#line 366 "add_special_pred.m"
        }
#line 371 "add_special_pred.m"
        break;
#line 371 "add_special_pred.m"
    }
#line 378 "add_special_pred.m"
    {
#line 378 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Arity_25 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(hlds__make_hlds__add_special_pred__SpecialPredId_9);
    }
#line 382 "add_special_pred.m"
    {
#line 382 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_49_49 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 382 "add_special_pred.m"
    {
#line 382 "add_special_pred.m"
      hlds__hlds_clauses__clauses_info_init_4_p_0((MR_Integer) 0, hlds__make_hlds__add_special_pred__Arity_25, hlds__make_hlds__add_special_pred__V_49_49, &hlds__make_hlds__add_special_pred__ClausesInfo0_26);
    }
#line 384 "add_special_pred.m"
    {
#line 384 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_9));
#line 384 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_12));
#line 384 "add_special_pred.m"
    }
#line 384 "add_special_pred.m"
    {
#line 384 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Origin_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 384 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__Origin_27, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_50_50));
#line 384 "add_special_pred.m"
    }
#line 436 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__Status0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 436 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 436 "add_special_pred.m"
    else
#line 436 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__Status0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 436 "add_special_pred.m"
    else
#line 436 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 440 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 439 "add_special_pred.m"
      {
#line 439 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_3[0]);
#line 439 "add_special_pred.m"
      }
#line 440 "add_special_pred.m"
    else
#line 444 "add_special_pred.m"
      {
#line 441 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Status0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 444 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 443 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 444 "add_special_pred.m"
        else
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75 = hlds__make_hlds__add_special_pred__Status0_14;
#line 444 "add_special_pred.m"
      }
#line 450 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_9 == (MR_Integer) 0);
#line 458 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 453 "add_special_pred.m"
      {
#line 451 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_74_74;

#line 451 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75)) == (MR_mktag((MR_Integer) 2)));
#line 451 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 451 "add_special_pred.m"
          {
#line 451 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75, (MR_Integer) 0)));
#line 452 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Status_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 451 "add_special_pred.m"
          }
#line 451 "add_special_pred.m"
        else
#line 455 "add_special_pred.m"
          {
#line 453 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 455 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 454 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__Status_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 455 "add_special_pred.m"
            else
#line 455 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__Status_28 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75;
#line 455 "add_special_pred.m"
          }
#line 453 "add_special_pred.m"
      }
#line 458 "add_special_pred.m"
    else
#line 458 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Status_28 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_75;
#line 1877 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 386 "add_special_pred.m"
    {
#line 386 "add_special_pred.m"
      mercury__map__init_1_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_62_62, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_special_pred__Proofs_29);
    }
#line 387 "add_special_pred.m"
    {
#line 387 "add_special_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_special_pred__TypeCtorInfo_62_62, &hlds__make_hlds__add_special_pred__ConstraintMap_30);
    }
#line 388 "add_special_pred.m"
    {
#line 388 "add_special_pred.m"
      hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_special_pred__Markers_31);
    }
#line 393 "add_special_pred.m"
    {
#line 393 "add_special_pred.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &hlds__make_hlds__add_special_pred__VarNameRemap_34);
    }
#line 394 "add_special_pred.m"
    {
#line 394 "add_special_pred.m"
      hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_special_pred__ModuleName_16, hlds__make_hlds__add_special_pred__PredName_24, hlds__make_hlds__add_special_pred__Arity_25, (MR_Integer) 0, hlds__make_hlds__add_special_pred__Context_13, hlds__make_hlds__add_special_pred__Origin_27, hlds__make_hlds__add_special_pred__Status_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_special_pred__Markers_31, hlds__make_hlds__add_special_pred__ArgTypes_17, hlds__make_hlds__add_special_pred__TVarSet_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_2[8], hlds__make_hlds__add_special_pred__Proofs_29, hlds__make_hlds__add_special_pred__ConstraintMap_30, hlds__make_hlds__add_special_pred__ClausesInfo0_26, hlds__make_hlds__add_special_pred__VarNameRemap_34, &hlds__make_hlds__add_special_pred__PredInfo0_35);
    }
#line 399 "add_special_pred.m"
    {
#line 399 "add_special_pred.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &hlds__make_hlds__add_special_pred__InstVarSet_37);
    }
#line 403 "add_special_pred.m"
    {
#line 403 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "add_special_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__ArgModes_18));
#line 403 "add_special_pred.m"
    }
#line 404 "add_special_pred.m"
    {
#line 404 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "add_special_pred.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Det_19));
#line 404 "add_special_pred.m"
    }
#line 403 "add_special_pred.m"
    {
#line 403 "add_special_pred.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__add_special_pred__InstVarSet_37, hlds__make_hlds__add_special_pred__Arity_25, hlds__make_hlds__add_special_pred__ArgModes_18, hlds__make_hlds__add_special_pred__V_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 1, hlds__make_hlds__add_special_pred__V_57_57, hlds__make_hlds__add_special_pred__Context_13, (MR_Integer) 1, (MR_Integer) 1, hlds__make_hlds__add_special_pred__PredInfo0_35, &hlds__make_hlds__add_special_pred__PredInfo_39, &hlds__make_hlds__add_special_pred___ProcId_40);
    }
#line 407 "add_special_pred.m"
    {
#line 407 "add_special_pred.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_special_pred__PredicateTable0_41);
    }
#line 408 "add_special_pred.m"
    {
#line 408 "add_special_pred.m"
      hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_special_pred__PredInfo_39, &hlds__make_hlds__add_special_pred__PredId_42, hlds__make_hlds__add_special_pred__PredicateTable0_41, &hlds__make_hlds__add_special_pred__PredicateTable_43);
    }
#line 409 "add_special_pred.m"
    {
#line 409 "add_special_pred.m"
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_special_pred__PredicateTable_43, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_46, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_59_59);
    }
#line 410 "add_special_pred.m"
    {
#line 410 "add_special_pred.m"
      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_59_59, &hlds__make_hlds__add_special_pred__SpecialPredMap0_44);
    }
#line 411 "add_special_pred.m"
    {
#line 411 "add_special_pred.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (hlds__make_hlds__add_special_pred__V_50_50)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_42)), hlds__make_hlds__add_special_pred__SpecialPredMap0_44, &hlds__make_hlds__add_special_pred__SpecialPredMap_45);
    }
#line 412 "add_special_pred.m"
    {
#line 412 "add_special_pred.m"
      hlds__hlds_module__module_info_set_special_pred_map_3_p_0(hlds__make_hlds__add_special_pred__SpecialPredMap_45, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_59_59, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_47);
#line 412 "add_special_pred.m"
      return;
    }
#line 361 "add_special_pred.m"
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
  MR_Word hlds__make_hlds__add_special_pred__Status0_16,
#line 35 "add_special_pred.m"
  MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36,
#line 35 "add_special_pred.m"
  MR_Word * hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37)
#line 35 "add_special_pred.m"
{
#line 251 "add_special_pred.m"
  {
#line 251 "add_special_pred.m"
    MR_bool hlds__make_hlds__add_special_pred__succeeded;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Type_18;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Status_19;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMap0_20;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__SpecialPredMap1_21;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredId_22;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Preds0_23;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo0_24;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo1_26;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__ClausesInfo_29;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo2_30;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers2_31;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Markers_32;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo3_33;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__PredInfo_34;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__Preds_35;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_39_39;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_40_40;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_44_44;
#line 251 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76;
#line 316 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeCtor_62;
#line 310 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__TypeInfo_13_70;
#line 310 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_69_69;
#line 255 "add_special_pred.m"
    MR_Word hlds__make_hlds__add_special_pred__V_38_38;
#line 262 "add_special_pred.m"
    MR_Box hlds__make_hlds__add_special_pred__conv0_PredId_22;
#line 264 "add_special_pred.m"
    MR_Box hlds__make_hlds__add_special_pred__conv1_PredInfo0_24;

#line 310 "add_special_pred.m"
    {
#line 310 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(hlds__make_hlds__add_special_pred__Type0_12, &hlds__make_hlds__add_special_pred__TypeCtor_62, &hlds__make_hlds__add_special_pred__V_69_69);
    }
#line 310 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 310 "add_special_pred.m"
      {
#line 2058 "hlds.make_hlds.add_special_pred.c"
        hlds__make_hlds__add_special_pred__TypeInfo_13_70 = (MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_2[7];
#line 310 "add_special_pred.m"
        {
#line 310 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_special_pred__TypeInfo_13_70, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (hlds__make_hlds__add_special_pred__V_69_69)));
        }
#line 310 "add_special_pred.m"
      }
#line 316 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 313 "add_special_pred.m"
      {
#line 313 "add_special_pred.m"
        MR_String hlds__make_hlds__add_special_pred__Name_63;

#line 311 "add_special_pred.m"
        {
#line 311 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__succeeded = hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_p_0(hlds__make_hlds__add_special_pred__TypeCtor_62, &hlds__make_hlds__add_special_pred__Name_63);
        }
#line 313 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 312 "add_special_pred.m"
          {
#line 312 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__V_65_65;
#line 312 "add_special_pred.m"
            MR_Word hlds__make_hlds__add_special_pred__V_67_67;

#line 312 "add_special_pred.m"
            {
#line 312 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 312 "add_special_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__Name_63));
#line 312 "add_special_pred.m"
            }
#line 312 "add_special_pred.m"
            {
#line 312 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "add_special_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_67_67));
#line 312 "add_special_pred.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_65_65, 1) = ((MR_Box) ((MR_Integer) 0));
#line 312 "add_special_pred.m"
            }
#line 312 "add_special_pred.m"
            {
#line 312 "add_special_pred.m"
              parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_special_pred__V_65_65, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_special_pred__Type_18);
            }
#line 312 "add_special_pred.m"
          }
#line 313 "add_special_pred.m"
        else
#line 314 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__Type_18 = hlds__make_hlds__add_special_pred__Type0_12;
#line 313 "add_special_pred.m"
      }
#line 316 "add_special_pred.m"
    else
#line 317 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Type_18 = hlds__make_hlds__add_special_pred__Type0_12;
#line 436 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__Status0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 436 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 436 "add_special_pred.m"
    else
#line 436 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__Status0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 435 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 436 "add_special_pred.m"
    else
#line 436 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 440 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 439 "add_special_pred.m"
      {
#line 439 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_special_pred_scalar_common_3[0]);
#line 439 "add_special_pred.m"
      }
#line 440 "add_special_pred.m"
    else
#line 444 "add_special_pred.m"
      {
#line 441 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__Status0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 444 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 443 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 444 "add_special_pred.m"
        else
#line 444 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76 = hlds__make_hlds__add_special_pred__Status0_16;
#line 444 "add_special_pred.m"
      }
#line 450 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__SpecialPredId_10 == (MR_Integer) 0);
#line 458 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 453 "add_special_pred.m"
      {
#line 451 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_75_75;

#line 451 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76)) == (MR_mktag((MR_Integer) 2)));
#line 451 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 451 "add_special_pred.m"
          {
#line 451 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76, (MR_Integer) 0)));
#line 452 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__Status_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 451 "add_special_pred.m"
          }
#line 451 "add_special_pred.m"
        else
#line 455 "add_special_pred.m"
          {
#line 453 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 455 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 454 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__Status_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 455 "add_special_pred.m"
            else
#line 455 "add_special_pred.m"
              hlds__make_hlds__add_special_pred__Status_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76;
#line 455 "add_special_pred.m"
          }
#line 453 "add_special_pred.m"
      }
#line 458 "add_special_pred.m"
    else
#line 458 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__Status_19 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_Status_9_76;
#line 254 "add_special_pred.m"
    {
#line 254 "add_special_pred.m"
      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_special_pred__SpecialPredMap0_20);
    }
#line 255 "add_special_pred.m"
    {
#line 255 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_10));
#line 255 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_13));
#line 255 "add_special_pred.m"
    }
#line 255 "add_special_pred.m"
    {
#line 255 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = mercury__map__contains_2_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, hlds__make_hlds__add_special_pred__SpecialPredMap0_20, ((MR_Box) (hlds__make_hlds__add_special_pred__V_38_38)));
    }
#line 257 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 257 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_39_39 = hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36;
#line 257 "add_special_pred.m"
    else
#line 258 "add_special_pred.m"
      {
#line 258 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__TVarSet_11, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeCtor_13, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__Status_19, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_39_39);
      }
#line 261 "add_special_pred.m"
    {
#line 261 "add_special_pred.m"
      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_39_39, &hlds__make_hlds__add_special_pred__SpecialPredMap1_21);
    }
#line 262 "add_special_pred.m"
    {
#line 262 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 262 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__SpecialPredId_10));
#line 262 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_special_pred__TypeCtor_13));
#line 262 "add_special_pred.m"
    }
#line 2250 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 262 "add_special_pred.m"
    {
#line 262 "add_special_pred.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__make_hlds__add_special_pred_scalar_common_1[0], hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__SpecialPredMap1_21, ((MR_Box) (hlds__make_hlds__add_special_pred__V_40_40)), &hlds__make_hlds__add_special_pred__conv0_PredId_22);
    }
#line 262 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__PredId_22 = ((MR_Word) hlds__make_hlds__add_special_pred__conv0_PredId_22);
#line 263 "add_special_pred.m"
    {
#line 263 "add_special_pred.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_39_39, &hlds__make_hlds__add_special_pred__Preds0_23);
    }
#line 2264 "hlds.make_hlds.add_special_pred.c"
    hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 264 "add_special_pred.m"
    {
#line 264 "add_special_pred.m"
      mercury__map__lookup_3_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, hlds__make_hlds__add_special_pred__Preds0_23, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_22)), &hlds__make_hlds__add_special_pred__conv1_PredInfo0_24);
    }
#line 264 "add_special_pred.m"
    hlds__make_hlds__add_special_pred__PredInfo0_24 = ((MR_Word) hlds__make_hlds__add_special_pred__conv1_PredInfo0_24);
#line 269 "add_special_pred.m"
    if ((hlds__make_hlds__add_special_pred__Status_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 269 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 269 "add_special_pred.m"
    else
#line 269 "add_special_pred.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__Status_19)) == (MR_mktag((MR_Integer) 2))))
#line 268 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_TRUE;
#line 269 "add_special_pred.m"
    else
#line 269 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__succeeded = MR_FALSE;
#line 273 "add_special_pred.m"
    if (hlds__make_hlds__add_special_pred__succeeded)
#line 272 "add_special_pred.m"
      {
#line 272 "add_special_pred.m"
        hlds__hlds_pred__pred_info_set_import_status_3_p_0(hlds__make_hlds__add_special_pred__Status_19, hlds__make_hlds__add_special_pred__PredInfo0_24, &hlds__make_hlds__add_special_pred__PredInfo1_26);
      }
#line 273 "add_special_pred.m"
    else
#line 289 "add_special_pred.m"
      {
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__OldStatus_28;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_41_41;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_42_42;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_47_47;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_48_48;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_49_49;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_50_50;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_51_51;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_52_52;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_53_53;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_54_54;
#line 274 "add_special_pred.m"
        MR_Word hlds__make_hlds__add_special_pred__V_27_27;

#line 274 "add_special_pred.m"
        hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 274 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 274 "add_special_pred.m"
          {
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 0)));
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 1)));
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 2)));
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 3)));
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 4)));
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 5)));
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_52_52 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__TypeBody_14, (MR_Integer) 7)));
#line 274 "add_special_pred.m"
            hlds__make_hlds__add_special_pred__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_special_pred__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 274 "add_special_pred.m"
            if (hlds__make_hlds__add_special_pred__succeeded)
#line 274 "add_special_pred.m"
              {
#line 274 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_special_pred__V_41_41, (MR_Integer) 0)));
#line 275 "add_special_pred.m"
                {
#line 275 "add_special_pred.m"
                  hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__make_hlds__add_special_pred__PredInfo0_24, &hlds__make_hlds__add_special_pred__OldStatus_28);
                }
#line 276 "add_special_pred.m"
                hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__OldStatus_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 274 "add_special_pred.m"
                if (hlds__make_hlds__add_special_pred__succeeded)
#line 274 "add_special_pred.m"
                  {
#line 277 "add_special_pred.m"
                    {
#line 277 "add_special_pred.m"
                      hlds__make_hlds__add_special_pred__V_42_42 = parse_tree__status__status_is_imported_1_f_0(hlds__make_hlds__add_special_pred__Status_19);
                    }
#line 277 "add_special_pred.m"
                    hlds__make_hlds__add_special_pred__succeeded = (hlds__make_hlds__add_special_pred__V_42_42 == (MR_Integer) 0);
#line 274 "add_special_pred.m"
                  }
#line 274 "add_special_pred.m"
              }
#line 274 "add_special_pred.m"
          }
#line 289 "add_special_pred.m"
        if (hlds__make_hlds__add_special_pred__succeeded)
#line 288 "add_special_pred.m"
          {
#line 288 "add_special_pred.m"
            hlds__hlds_pred__pred_info_set_import_status_3_p_0(hlds__make_hlds__add_special_pred__Status_19, hlds__make_hlds__add_special_pred__PredInfo0_24, &hlds__make_hlds__add_special_pred__PredInfo1_26);
          }
#line 289 "add_special_pred.m"
        else
#line 290 "add_special_pred.m"
          hlds__make_hlds__add_special_pred__PredInfo1_26 = hlds__make_hlds__add_special_pred__PredInfo0_24;
#line 289 "add_special_pred.m"
      }
#line 292 "add_special_pred.m"
    {
#line 292 "add_special_pred.m"
      check_hlds__unify_proc__generate_clause_info_6_p_0(hlds__make_hlds__add_special_pred__SpecialPredId_10, hlds__make_hlds__add_special_pred__Type_18, hlds__make_hlds__add_special_pred__TypeBody_14, hlds__make_hlds__add_special_pred__Context_15, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_39_39, &hlds__make_hlds__add_special_pred__ClausesInfo_29);
    }
#line 294 "add_special_pred.m"
    {
#line 294 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__make_hlds__add_special_pred__ClausesInfo_29, hlds__make_hlds__add_special_pred__PredInfo1_26, &hlds__make_hlds__add_special_pred__PredInfo2_30);
    }
#line 295 "add_special_pred.m"
    {
#line 295 "add_special_pred.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_special_pred__PredInfo2_30, &hlds__make_hlds__add_special_pred__Markers2_31);
    }
#line 296 "add_special_pred.m"
    {
#line 296 "add_special_pred.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, hlds__make_hlds__add_special_pred__Markers2_31, &hlds__make_hlds__add_special_pred__Markers_32);
    }
#line 297 "add_special_pred.m"
    {
#line 297 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(hlds__make_hlds__add_special_pred__Markers_32, hlds__make_hlds__add_special_pred__PredInfo2_30, &hlds__make_hlds__add_special_pred__PredInfo3_33);
    }
#line 298 "add_special_pred.m"
    {
#line 298 "add_special_pred.m"
      hlds__make_hlds__add_special_pred__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 298 "add_special_pred.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_special_pred__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_special_pred__V_40_40));
#line 298 "add_special_pred.m"
    }
#line 298 "add_special_pred.m"
    {
#line 298 "add_special_pred.m"
      hlds__hlds_pred__pred_info_set_origin_3_p_0(hlds__make_hlds__add_special_pred__V_44_44, hlds__make_hlds__add_special_pred__PredInfo3_33, &hlds__make_hlds__add_special_pred__PredInfo_34);
    }
#line 300 "add_special_pred.m"
    {
#line 300 "add_special_pred.m"
      mercury__map__det_update_4_p_0(hlds__make_hlds__add_special_pred__TypeCtorInfo_58_58, hlds__make_hlds__add_special_pred__TypeCtorInfo_59_59, ((MR_Box) (hlds__make_hlds__add_special_pred__PredId_22)), ((MR_Box) (hlds__make_hlds__add_special_pred__PredInfo_34)), hlds__make_hlds__add_special_pred__Preds0_23, &hlds__make_hlds__add_special_pred__Preds_35);
    }
#line 301 "add_special_pred.m"
    {
#line 301 "add_special_pred.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(hlds__make_hlds__add_special_pred__Preds_35, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_special_pred__STATE_VARIABLE_ModuleInfo_37);
#line 301 "add_special_pred.m"
      return;
    }
#line 251 "add_special_pred.m"
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
