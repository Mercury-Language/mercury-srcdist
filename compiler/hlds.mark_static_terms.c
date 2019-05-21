/*
** Automatically generated from `mark_static_terms.m'
** by the Mercury compiler,
** version rotd-2017-08-05
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


/* :- module hlds.mark_static_terms. */
/* :- implementation. */

/*
INIT mercury__hlds__mark_static_terms__init
ENDINIT
*/

#include "hlds.mark_static_terms.mih"


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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static MR_bool MR_CALL 
hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_p_0(
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
  MR_Word hlds__mark_static_terms__HeadVar__2_34);

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0(
  MR_Word * hlds__mark_static_terms__HeadVar__1_1,
  MR_Word hlds__mark_static_terms__HeadVar__2_2,
  MR_Word hlds__mark_static_terms__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0(
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
  MR_Word hlds__mark_static_terms__HeadVar__2_2);

static void MR_CALL 
hlds__mark_static_terms__cases_mark_static_terms_3_p_0(
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
  MR_Word hlds__mark_static_terms__HeadVar__3_3);

static void MR_CALL 
hlds__mark_static_terms__disj_mark_static_terms_3_p_0(
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
  MR_Word hlds__mark_static_terms__SI0_3);

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0_1(
  MR_Box hlds__mark_static_terms__closure_arg,
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
  MR_Box * hlds__mark_static_terms__wrapper_arg_2,
  MR_Box hlds__mark_static_terms__wrapper_arg_3,
  MR_Box * hlds__mark_static_terms__wrapper_arg_4);

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0(
  MR_Word hlds__mark_static_terms__Goal0_5,
  MR_Word * hlds__mark_static_terms__Goal_6,
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_SI_0_59,
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_SI_60);

static MR_bool MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0_1(
  MR_Box hlds__mark_static_terms__closure_arg,
  MR_Box hlds__mark_static_terms__wrapper_arg_1);

static void MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0(
  MR_Word hlds__mark_static_terms__Unification0_5,
  MR_Word * hlds__mark_static_terms__Unification_6,
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30);

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0_10001(
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
  MR_Box hlds__mark_static_terms__wrapper_arg_2);

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0_10001(
  MR_Box * hlds__mark_static_terms__wrapper_arg_1,
  MR_Box hlds__mark_static_terms__wrapper_arg_2,
  MR_Box hlds__mark_static_terms__wrapper_arg_3);


static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_2[1][5];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_3[1][7];

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_4[1][3];




static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&hlds__mark_static_terms_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__mark_static_terms_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__mark_static_terms_scalar_common_3[0])),
    ((MR_Box) (hlds__mark_static_terms__goal_mark_static_terms_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__set_tree234__pti_set_tree234_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__mark_static_terms__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &hlds__mark_static_terms__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

const MR_TypeCtorInfo_Struct hlds__mark_static_terms__hlds__mark_static_terms__type_ctor_info_static_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__mark_static_terms____Unify____static_info_0_0_10001)),
  ((MR_Box) (hlds__mark_static_terms____Compare____static_info_0_0_10001)),
  (MR_String) "hlds.mark_static_terms",
  (MR_String) "static_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__mark_static_terms__set_tree234__ti_set_tree234_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_p_0(
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
  MR_Word hlds__mark_static_terms__HeadVar__2_34)
{
  {
    MR_bool hlds__mark_static_terms__succeeded;

    hlds__mark_static_terms__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, ((MR_Box) (hlds__mark_static_terms__HeadVar__2_34)));
    return hlds__mark_static_terms__succeeded;
  }
}

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0(
  MR_Word * hlds__mark_static_terms__HeadVar__1_1,
  MR_Word hlds__mark_static_terms__HeadVar__2_2,
  MR_Word hlds__mark_static_terms__HeadVar__3_3)
{
  {
    MR_Word hlds__mark_static_terms__Cast_HeadVar1_4 = hlds__mark_static_terms__HeadVar__2_2;
    MR_Word hlds__mark_static_terms__Cast_HeadVar2_5 = hlds__mark_static_terms__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[1], hlds__mark_static_terms__HeadVar__1_1, ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar1_4)), ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0(
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
  MR_Word hlds__mark_static_terms__HeadVar__2_2)
{
  {
    MR_bool hlds__mark_static_terms__succeeded;
    MR_Word hlds__mark_static_terms__Cast_HeadVar1_3 = hlds__mark_static_terms__HeadVar__1_1;
    MR_Word hlds__mark_static_terms__Cast_HeadVar2_4 = hlds__mark_static_terms__HeadVar__2_2;

    hlds__mark_static_terms__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[1], ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar1_3)), ((MR_Box) (hlds__mark_static_terms__Cast_HeadVar2_4)));
    return hlds__mark_static_terms__succeeded;
  }
}

void MR_CALL 
hlds__mark_static_terms__mark_static_terms_3_p_0(
  MR_Word hlds__mark_static_terms___ModuleInfo_4,
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10,
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_Proc_11)
{
  hlds__mark_static_terms__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_p_0(hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10, hlds__mark_static_terms__STATE_VARIABLE_Proc_11);
}

void MR_CALL 
hlds__mark_static_terms__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_114_107_95_115_116_97_116_105_99_95_116_101_114_109_115_95_95_91_49_93_95_48_3_p_0(
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10,
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_Proc_11)
{
  {
    MR_Word hlds__mark_static_terms__Goal0_6;
    MR_Word hlds__mark_static_terms__StaticInfo0_7;
    MR_Word hlds__mark_static_terms__Goal_8;
    MR_Word hlds__mark_static_terms___StaticInfo_9;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10, &hlds__mark_static_terms__Goal0_6);
    hlds__mark_static_terms__StaticInfo0_7 = mercury__set_tree234__init_0_f_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0]);
    hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Goal0_6, &hlds__mark_static_terms__Goal_8, hlds__mark_static_terms__StaticInfo0_7, &hlds__mark_static_terms___StaticInfo_9);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(hlds__mark_static_terms__Goal_8, hlds__mark_static_terms__STATE_VARIABLE_Proc_0_10, hlds__mark_static_terms__STATE_VARIABLE_Proc_11);
  }
}

static void MR_CALL 
hlds__mark_static_terms__cases_mark_static_terms_3_p_0(
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
  MR_Word hlds__mark_static_terms__HeadVar__3_3)
{
  if ((hlds__mark_static_terms__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__mark_static_terms__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__mark_static_terms__Case0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__mark_static_terms__Cases0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__mark_static_terms__Case_7;
    MR_Word hlds__mark_static_terms__Cases_8;
    MR_Word hlds__mark_static_terms__MainConsId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case0_5, (MR_Integer) 0)));
    MR_Word hlds__mark_static_terms__OtherConsIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case0_5, (MR_Integer) 1)));
    MR_Word hlds__mark_static_terms__Goal0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case0_5, (MR_Integer) 2)));
    MR_Word hlds__mark_static_terms__Goal_13;
    MR_Word hlds__mark_static_terms___SI_14;

    hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Goal0_12, &hlds__mark_static_terms__Goal_13, hlds__mark_static_terms__HeadVar__3_3, &hlds__mark_static_terms___SI_14);
    {
      hlds__mark_static_terms__Case_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case_7, 0) = ((MR_Box) (hlds__mark_static_terms__MainConsId_10));
      MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case_7, 1) = ((MR_Box) (hlds__mark_static_terms__OtherConsIds_11));
      MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Case_7, 2) = ((MR_Box) (hlds__mark_static_terms__Goal_13));
    }
    hlds__mark_static_terms__cases_mark_static_terms_3_p_0(hlds__mark_static_terms__Cases0_6, &hlds__mark_static_terms__Cases_8, hlds__mark_static_terms__HeadVar__3_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__mark_static_terms__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_static_terms__Case_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_static_terms__Cases_8));
    }
  }
}

static void MR_CALL 
hlds__mark_static_terms__disj_mark_static_terms_3_p_0(
  MR_Word hlds__mark_static_terms__HeadVar__1_1,
  MR_Word * hlds__mark_static_terms__HeadVar__2_2,
  MR_Word hlds__mark_static_terms__SI0_3)
{
  if ((hlds__mark_static_terms__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *hlds__mark_static_terms__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word hlds__mark_static_terms__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__mark_static_terms__Goals0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word hlds__mark_static_terms__Goal_7;
    MR_Word hlds__mark_static_terms__Goals_8;
    MR_Word hlds__mark_static_terms___SI_10;

    hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Goal0_5, &hlds__mark_static_terms__Goal_7, hlds__mark_static_terms__SI0_3, &hlds__mark_static_terms___SI_10);
    hlds__mark_static_terms__disj_mark_static_terms_3_p_0(hlds__mark_static_terms__Goals0_6, &hlds__mark_static_terms__Goals_8, hlds__mark_static_terms__SI0_3);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__mark_static_terms__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__mark_static_terms__Goal_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__mark_static_terms__Goals_8));
    }
  }
}

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0_1(
  MR_Box hlds__mark_static_terms__closure_arg,
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
  MR_Box * hlds__mark_static_terms__wrapper_arg_2,
  MR_Box hlds__mark_static_terms__wrapper_arg_3,
  MR_Box * hlds__mark_static_terms__wrapper_arg_4)
{
  {
    MR_Box hlds__mark_static_terms__closure = hlds__mark_static_terms__closure_arg;
    MR_Word hlds__mark_static_terms__conv1_Goal_6;
    MR_Word hlds__mark_static_terms__conv0_STATE_VARIABLE_SI_60;

    hlds__mark_static_terms__goal_mark_static_terms_4_p_0(((MR_Word) hlds__mark_static_terms__wrapper_arg_1), &hlds__mark_static_terms__conv1_Goal_6, ((MR_Word) hlds__mark_static_terms__wrapper_arg_3), &hlds__mark_static_terms__conv0_STATE_VARIABLE_SI_60);
    *hlds__mark_static_terms__wrapper_arg_2 = ((MR_Box) (hlds__mark_static_terms__conv1_Goal_6));
    *hlds__mark_static_terms__wrapper_arg_4 = ((MR_Box) (hlds__mark_static_terms__conv0_STATE_VARIABLE_SI_60));
  }
}

static void MR_CALL 
hlds__mark_static_terms__goal_mark_static_terms_4_p_0(
  MR_Word hlds__mark_static_terms__Goal0_5,
  MR_Word * hlds__mark_static_terms__Goal_6,
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_SI_0_59,
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_SI_60)
{
  {
    MR_bool hlds__mark_static_terms__succeeded;
    MR_Word hlds__mark_static_terms__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Goal0_5, (MR_Integer) 0)));
    MR_Word hlds__mark_static_terms__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Goal0_5, (MR_Integer) 1)));
    MR_Word hlds__mark_static_terms__GoalExpr_10;

    switch (MR_tag((MR_Word) hlds__mark_static_terms__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__mark_static_terms__SubGoal0_18 = (MR_Word) MR_body(((MR_Word) hlds__mark_static_terms__GoalExpr0_8), (MR_Integer) 0);
          MR_Word hlds__mark_static_terms__SubGoal_19;
          MR_Word hlds__mark_static_terms___SI_20;

          hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__SubGoal0_18, &hlds__mark_static_terms__SubGoal_19, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, &hlds__mark_static_terms___SI_20);
          hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__mark_static_terms__SubGoal_19);
          *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__mark_static_terms__LHS_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)));
          MR_Word hlds__mark_static_terms__RHS_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
          MR_Word hlds__mark_static_terms__Mode_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
          MR_Word hlds__mark_static_terms__Unification0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 3)));
          MR_Word hlds__mark_static_terms__Context_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 4)));
          MR_Word hlds__mark_static_terms__Unification_57;

          hlds__mark_static_terms__unification_mark_static_terms_4_p_0(hlds__mark_static_terms__Unification0_55, &hlds__mark_static_terms__Unification_57, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, hlds__mark_static_terms__STATE_VARIABLE_SI_60);
          {
            hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (hlds__mark_static_terms__LHS_52));
            MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__RHS_53));
            MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__Mode_54));
            MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 3) = ((MR_Box) (hlds__mark_static_terms__Unification_57));
            MR_hl_field(MR_mktag(1), hlds__mark_static_terms__GoalExpr_10, 4) = ((MR_Box) (hlds__mark_static_terms__Context_56));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
          *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
              *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
              *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__mark_static_terms__TypeCtorInfo_16_87 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              MR_Word hlds__mark_static_terms__ConjType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word hlds__mark_static_terms__Goals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word hlds__mark_static_terms__Goals_13;
              MR_Box hlds__mark_static_terms__conv2_STATE_VARIABLE_SI_60;

              mercury__list__map_foldl_5_p_0(hlds__mark_static_terms__TypeCtorInfo_16_87, hlds__mark_static_terms__TypeCtorInfo_16_87, (MR_Word) &hlds__mark_static_terms_scalar_common_1[1], (MR_Word) &hlds__mark_static_terms_scalar_common_4[0], hlds__mark_static_terms__Goals0_12, &hlds__mark_static_terms__Goals_13, ((MR_Box) (hlds__mark_static_terms__STATE_VARIABLE_SI_0_59)), &hlds__mark_static_terms__conv2_STATE_VARIABLE_SI_60);
              *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = ((MR_Word) hlds__mark_static_terms__conv2_STATE_VARIABLE_SI_60);
              {
                hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__ConjType_11));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__Goals_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word hlds__mark_static_terms__Goals0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word hlds__mark_static_terms__Goals_70;

              hlds__mark_static_terms__disj_mark_static_terms_3_p_0(hlds__mark_static_terms__Goals0_69, &hlds__mark_static_terms__Goals_70, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59);
              {
                hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Goals_70));
              }
              *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word hlds__mark_static_terms__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word hlds__mark_static_terms__CanFail_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word hlds__mark_static_terms__Cases0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word hlds__mark_static_terms__Cases_17;

              hlds__mark_static_terms__cases_mark_static_terms_3_p_0(hlds__mark_static_terms__Cases0_16, &hlds__mark_static_terms__Cases_17, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59);
              {
                hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Var_14));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__CanFail_15));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 3) = ((MR_Box) (hlds__mark_static_terms__Cases_17));
              }
              *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word hlds__mark_static_terms__Reason_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word hlds__mark_static_terms__SubGoal0_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word hlds__mark_static_terms__TermVar_22;
              MR_Word hlds__mark_static_terms__Var_65;

              hlds__mark_static_terms__succeeded = ((((MR_tag((MR_Word) hlds__mark_static_terms__Reason_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__Reason_21, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (hlds__mark_static_terms__succeeded)
              {
                hlds__mark_static_terms__TermVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__Reason_21, (MR_Integer) 1)));
                hlds__mark_static_terms__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__Reason_21, (MR_Integer) 2)));
                hlds__mark_static_terms__succeeded = (hlds__mark_static_terms__Var_65 == (MR_Integer) 1);
              }
              if (hlds__mark_static_terms__succeeded)
              {
                mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], ((MR_Box) (hlds__mark_static_terms__TermVar_22)), hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, hlds__mark_static_terms__STATE_VARIABLE_SI_60);
                hlds__mark_static_terms__GoalExpr_10 = hlds__mark_static_terms__GoalExpr0_8;
              }
              else
              {
                MR_Word hlds__mark_static_terms__SubGoal_71;

                hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__SubGoal0_73, &hlds__mark_static_terms__SubGoal_71, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, hlds__mark_static_terms__STATE_VARIABLE_SI_60);
                {
                  hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Reason_21));
                  MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__SubGoal_71));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word hlds__mark_static_terms__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word hlds__mark_static_terms__Cond0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word hlds__mark_static_terms__Then0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word hlds__mark_static_terms__Else0_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word hlds__mark_static_terms__Cond_28;
              MR_Word hlds__mark_static_terms__SI_Cond_29;
              MR_Word hlds__mark_static_terms__Then_30;
              MR_Word hlds__mark_static_terms__Else_32;
              MR_Word hlds__mark_static_terms___SI_Then_31;
              MR_Word hlds__mark_static_terms___SI_Else_33;

              hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Cond0_24, &hlds__mark_static_terms__Cond_28, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, &hlds__mark_static_terms__SI_Cond_29);
              hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Then0_25, &hlds__mark_static_terms__Then_30, hlds__mark_static_terms__SI_Cond_29, &hlds__mark_static_terms___SI_Then_31);
              hlds__mark_static_terms__goal_mark_static_terms_4_p_0(hlds__mark_static_terms__Else0_26, &hlds__mark_static_terms__Else_32, hlds__mark_static_terms__STATE_VARIABLE_SI_0_59, &hlds__mark_static_terms___SI_Else_33);
              {
                hlds__mark_static_terms__GoalExpr_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 1) = ((MR_Box) (hlds__mark_static_terms__Vars_23));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 2) = ((MR_Box) (hlds__mark_static_terms__Cond_28));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 3) = ((MR_Box) (hlds__mark_static_terms__Then_30));
                MR_hl_field(MR_mktag(3), hlds__mark_static_terms__GoalExpr_10, 4) = ((MR_Box) (hlds__mark_static_terms__Else_32));
              }
              *hlds__mark_static_terms__STATE_VARIABLE_SI_60 = hlds__mark_static_terms__STATE_VARIABLE_SI_0_59;
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.mark_static_terms", (MR_String) "predicate \140hlds.mark_static_terms.goal_mark_static_terms\'/4", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__mark_static_terms__Goal_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_static_terms__GoalExpr_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_static_terms__GoalInfo_9));
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0_1(
  MR_Box hlds__mark_static_terms__closure_arg,
  MR_Box hlds__mark_static_terms__wrapper_arg_1)
{
  {
    MR_bool hlds__mark_static_terms__succeeded;
    MR_Box hlds__mark_static_terms__closure = hlds__mark_static_terms__closure_arg;

    hlds__mark_static_terms__succeeded = hlds__mark_static_terms__IntroducedFrom__pred__unification_mark_static_terms__163__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__closure, (MR_Integer) 3))), ((MR_Word) hlds__mark_static_terms__wrapper_arg_1));
    return hlds__mark_static_terms__succeeded;
  }
}

static void MR_CALL 
hlds__mark_static_terms__unification_mark_static_terms_4_p_0(
  MR_Word hlds__mark_static_terms__Unification0_5,
  MR_Word * hlds__mark_static_terms__Unification_6,
  MR_Word hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29,
  MR_Word * hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30)
{
  {
    MR_bool hlds__mark_static_terms__succeeded;

    switch (MR_tag((MR_Word) hlds__mark_static_terms__Unification0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__mark_static_terms__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 0)));
          MR_Word hlds__mark_static_terms__ConsId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 1)));
          MR_Word hlds__mark_static_terms__ArgVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 2)));
          MR_Word hlds__mark_static_terms__ArgModes_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 3)));
          MR_Word hlds__mark_static_terms__HowToConstruct0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 4)));
          MR_Word hlds__mark_static_terms__Unique_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 5)));
          MR_Word hlds__mark_static_terms__SubInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Unification0_5, (MR_Integer) 6)));
          MR_Word hlds__mark_static_terms__Var_32;

          {
            hlds__mark_static_terms__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Var_32, 0) = ((MR_Box) (&hlds__mark_static_terms_scalar_common_2[0]));
            MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Var_32, 1) = ((MR_Box) (hlds__mark_static_terms__unification_mark_static_terms_4_p_0_1));
            MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), hlds__mark_static_terms__Var_32, 3) = ((MR_Box) (hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29));
          }
          hlds__mark_static_terms__succeeded = mercury__list__all_true_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], hlds__mark_static_terms__Var_32, hlds__mark_static_terms__ArgVars_10);
          if (hlds__mark_static_terms__succeeded)
          {
            MR_Word hlds__mark_static_terms__HowToConstruct_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], ((MR_Box) (hlds__mark_static_terms__Var_8)), hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30);
            hlds__mark_static_terms__succeeded = hlds__hlds_goal____Unify____how_to_construct_0_0(hlds__mark_static_terms__HowToConstruct_15, hlds__mark_static_terms__HowToConstruct0_12);
            if (hlds__mark_static_terms__succeeded)
              *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                *hlds__mark_static_terms__Unification_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__mark_static_terms__Var_8));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__mark_static_terms__ConsId_9));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__mark_static_terms__ArgVars_10));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__mark_static_terms__ArgModes_11));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__mark_static_terms__HowToConstruct_15));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__mark_static_terms__Unique_13));
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__mark_static_terms__SubInfo_14));
              }
          }
          else
          {
            *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
            *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
          *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__mark_static_terms__TargetVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_static_terms__Unification0_5, (MR_Integer) 0)));
          MR_Word hlds__mark_static_terms__SourceVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__mark_static_terms__Unification0_5, (MR_Integer) 1)));

          *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
          hlds__mark_static_terms__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, ((MR_Box) (hlds__mark_static_terms__SourceVar_23)));
          if (hlds__mark_static_terms__succeeded)
          {
            mercury__set_tree234__insert_3_p_0((MR_Word) &hlds__mark_static_terms_scalar_common_1[0], ((MR_Box) (hlds__mark_static_terms__TargetVar_22)), hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29, hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30);
          }
          else
            *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
        }
        break;
      case (MR_Integer) 3:
        {
          *hlds__mark_static_terms__Unification_6 = hlds__mark_static_terms__Unification0_5;
          *hlds__mark_static_terms__STATE_VARIABLE_StaticVars_30 = hlds__mark_static_terms__STATE_VARIABLE_StaticVars_0_29;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_static_terms____Unify____static_info_0_0_10001(
  MR_Box hlds__mark_static_terms__wrapper_arg_1,
  MR_Box hlds__mark_static_terms__wrapper_arg_2)
{
  {
    MR_bool hlds__mark_static_terms__succeeded;

    hlds__mark_static_terms__succeeded = hlds__mark_static_terms____Unify____static_info_0_0(((MR_Word) hlds__mark_static_terms__wrapper_arg_1), ((MR_Word) hlds__mark_static_terms__wrapper_arg_2));
    return hlds__mark_static_terms__succeeded;
  }
}

static void MR_CALL 
hlds__mark_static_terms____Compare____static_info_0_0_10001(
  MR_Box * hlds__mark_static_terms__wrapper_arg_1,
  MR_Box hlds__mark_static_terms__wrapper_arg_2,
  MR_Box hlds__mark_static_terms__wrapper_arg_3)
{
  {
    MR_Word hlds__mark_static_terms__conv0_HeadVar__1_1;

    hlds__mark_static_terms____Compare____static_info_0_0(&hlds__mark_static_terms__conv0_HeadVar__1_1, ((MR_Word) hlds__mark_static_terms__wrapper_arg_2), ((MR_Word) hlds__mark_static_terms__wrapper_arg_3));
    *hlds__mark_static_terms__wrapper_arg_1 = ((MR_Box) (hlds__mark_static_terms__conv0_HeadVar__1_1));
  }
}

void mercury__hlds__mark_static_terms__init(void)
{
}

void mercury__hlds__mark_static_terms__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__mark_static_terms__hlds__mark_static_terms__type_ctor_info_static_info_0);
}

void mercury__hlds__mark_static_terms__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__mark_static_terms__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.mark_static_terms. */
